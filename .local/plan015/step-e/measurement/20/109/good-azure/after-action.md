# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/20/109/good-azure/battle-109-1789674105079372000`

## Battle summary

**Ember** · 360 s · 208 shots.

### Turning points

- 15.7s, squad 4: contact (events line 188). First recorded contact.
- 39.2s, squad 0: assault ([trace 5487](#trace-5487)). 39.6s, squad 0: advanced tactically.
- 51.9s, squad 0: assault ([trace 7430](#trace-7430)). 52.9s, squad 0: advanced tactically.
- 62.2s, squad 0: help call ([trace 8245](#trace-8245)). 63.4s, squad 1: answered a neighbour with support by fire.
- 63.4s, squad 1: help answer ([trace 8301](#trace-8301)). 93.3s, squad 1: advanced tactically.
- 85.8s, squad 0: assault ([trace 10316](#trace-10316)). 86.2s, squad 0: advanced tactically.
- 91.8s, squad 0: assault ([trace 11500](#trace-11500)). 92.8s, squad 0: advanced tactically.
- 98.2s, squad 0: assault ([trace 12759](#trace-12759)). 99.1s, squad 0: advanced tactically.
- 108.0s, squad 0: help call ([trace 13639](#trace-13639)). 109.2s, squad 1: answered a neighbour with support by fire.
- 109.2s, squad 1: help answer ([trace 13696](#trace-13696)). 115.0s, squad 1: advanced tactically.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 26 shots, 4/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 2 further drill types; no completed objective recorded; 7 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 151 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 24 shots, 0/2 lost.

### Decisions and attribution

At 31.1s, squad 1 chose FightHere: nearest known group ([trace 4318](#trace-4318)), followed by 0 shots and 1 own casualties; estimate 12.2 against 9 distinct squad-reported contacts; At 93.8s, squad 0 chose took cover and returned fire ([trace 11810](#trace-11810)), followed by 1 shots and 0 own casualties; estimate 10.4 against 0 distinct squad-reported contacts; At 115.0s, squad 1 chose advanced tactically ([trace 14063](#trace-14063)), followed by 1 shots and 0 own casualties; estimate 12.1 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 693](#trace-693)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450166989443768, 'next_transition': 712}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 695](#trace-695)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 827}.

### Communication

261 matched deliveries (mean 0.49s, max 2.45s); 488 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.70s, squad 4, contact, evidence events line 188: First recorded contact; .
- 39.15s, squad 0, assault, evidence 5487: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 39.6s, squad 0: advanced tactically.
- 51.85s, squad 0, assault, evidence 7430: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 52.9s, squad 0: advanced tactically.
- 62.15s, squad 0, help call, evidence 8245: NeedSupport; 63.4s, squad 1: answered a neighbour with support by fire.
- 63.35s, squad 1, help answer, evidence 8301: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 93.3s, squad 1: advanced tactically.
- 85.85s, squad 0, assault, evidence 10316: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 86.2s, squad 0: advanced tactically.
- 91.85s, squad 0, assault, evidence 11500: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 92.8s, squad 0: advanced tactically.
- 98.20s, squad 0, assault, evidence 12759: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 99.1s, squad 0: advanced tactically.
- 108.05s, squad 0, help call, evidence 13639: NeedSupport; 109.2s, squad 1: answered a neighbour with support by fire.
- 109.25s, squad 1, help answer, evidence 13696: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 115.0s, squad 1: advanced tactically.
- 130.40s, squad 0, assault, evidence 15652: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 130.8s, squad 0: advanced tactically.
- 134.45s, squad 0, withdrawal, evidence 16147: BreakContact: believed ratio at least two without superiority; 155.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 178.30s, squad 1, withdrawal, evidence 17887: Withdraw to received rally; No completion observed before termination.
- 178.85s, squad 0, withdrawal, evidence 17954: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703227586346016, 'next_transition': 579}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703227586346016, 'next_transition': 579}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8703227586346016, 'next_transition': 579}.
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
<a id="trace-642"></a>
<a id="trace-644"></a>
<a id="trace-663"></a>
<a id="trace-665"></a>
<a id="trace-684"></a>
<a id="trace-686"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599805932942005, 'next_transition': 607}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450166989443768, 'next_transition': 712}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 827}.
<a id="trace-693"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 693): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 693. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450166989443768, 'next_transition': 712}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450166989443768, 'next_transition': 712}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 827}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409975718812522, 'next_transition': 827}.
<a id="trace-712"></a>
<a id="trace-714"></a>
<a id="trace-740"></a>
<a id="trace-742"></a>
<a id="trace-820"></a>
<a id="trace-822"></a>
<a id="trace-940"></a>
<a id="trace-942"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449889209396388, 'next_transition': 740}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): traveling overwatch. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-828"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 828): received platoon directive. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: None.
<a id="trace-869"></a>
- 5.30s–5.30s (×1), actor 8, squad 1 (trace 869): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 755. Next observer evidence: {'until': 15.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.53907893998546, 'next_transition': 1854}.
<a id="trace-944"></a>
<a id="trace-1021"></a>
<a id="trace-1060"></a>
<a id="trace-1062"></a>
<a id="trace-1110"></a>
<a id="trace-1112"></a>
<a id="trace-1176"></a>
<a id="trace-1178"></a>
<a id="trace-1226"></a>
<a id="trace-1228"></a>
<a id="trace-1258"></a>
<a id="trace-1260"></a>
<a id="trace-1287"></a>
<a id="trace-1289"></a>
<a id="trace-1381"></a>
<a id="trace-1383"></a>
<a id="trace-1405"></a>
<a id="trace-1407"></a>
<a id="trace-1431"></a>
<a id="trace-1433"></a>
<a id="trace-1454"></a>
<a id="trace-1456"></a>
<a id="trace-1494"></a>
<a id="trace-1496"></a>
<a id="trace-1515"></a>
<a id="trace-1517"></a>
<a id="trace-1527"></a>
<a id="trace-1529"></a>
<a id="trace-1741"></a>
<a id="trace-1743"></a>
<a id="trace-1827"></a>
<a id="trace-1829"></a>
<a id="trace-1846"></a>
<a id="trace-1848"></a>
<a id="trace-2345"></a>
<a id="trace-2347"></a>
<a id="trace-2394"></a>
<a id="trace-2396"></a>
<a id="trace-2434"></a>
<a id="trace-2436"></a>
<a id="trace-2513"></a>
<a id="trace-2515"></a>
<a id="trace-2658"></a>
<a id="trace-2660"></a>
<a id="trace-2845"></a>
<a id="trace-2847"></a>
<a id="trace-2949"></a>
<a id="trace-2951"></a>
<a id="trace-3116"></a>
<a id="trace-3118"></a>
<a id="trace-3173"></a>
<a id="trace-3175"></a>
<a id="trace-3359"></a>
<a id="trace-3361"></a>
<a id="trace-3398"></a>
<a id="trace-3400"></a>
<a id="trace-3437"></a>
<a id="trace-3439"></a>
<a id="trace-3611"></a>
<a id="trace-3613"></a>
<a id="trace-3645"></a>
<a id="trace-3647"></a>
<a id="trace-3860"></a>
<a id="trace-3862"></a>
<a id="trace-3964"></a>
<a id="trace-3966"></a>
<a id="trace-4004"></a>
<a id="trace-4006"></a>
<a id="trace-4031"></a>
<a id="trace-4033"></a>
<a id="trace-4051"></a>
<a id="trace-4053"></a>
<a id="trace-4089"></a>
<a id="trace-4091"></a>
<a id="trace-4115"></a>
<a id="trace-4117"></a>
<a id="trace-4143"></a>
<a id="trace-4145"></a>
<a id="trace-4182"></a>
<a id="trace-4184"></a>
<a id="trace-4199"></a>
<a id="trace-4201"></a>
<a id="trace-4287"></a>
<a id="trace-4289"></a>
<a id="trace-4307"></a>
<a id="trace-4309"></a>
<a id="trace-4335"></a>
<a id="trace-4337"></a>
<a id="trace-4347"></a>
<a id="trace-4349"></a>
<a id="trace-4365"></a>
<a id="trace-4367"></a>
<a id="trace-4376"></a>
<a id="trace-4378"></a>
<a id="trace-4393"></a>
<a id="trace-4395"></a>
<a id="trace-4404"></a>
<a id="trace-4406"></a>
<a id="trace-4420"></a>
<a id="trace-4422"></a>
<a id="trace-4435"></a>
<a id="trace-4437"></a>
<a id="trace-4517"></a>
<a id="trace-4519"></a>
<a id="trace-4531"></a>
<a id="trace-4533"></a>
<a id="trace-4575"></a>
<a id="trace-4577"></a>
<a id="trace-4598"></a>
<a id="trace-4600"></a>
<a id="trace-4618"></a>
<a id="trace-4620"></a>
<a id="trace-4645"></a>
<a id="trace-4647"></a>
<a id="trace-4662"></a>
<a id="trace-4664"></a>
<a id="trace-5620"></a>
<a id="trace-5622"></a>
<a id="trace-5759"></a>
<a id="trace-5761"></a>
<a id="trace-5852"></a>
<a id="trace-5854"></a>
<a id="trace-5897"></a>
<a id="trace-5899"></a>
<a id="trace-5934"></a>
<a id="trace-5936"></a>
<a id="trace-5955"></a>
<a id="trace-5957"></a>
<a id="trace-6013"></a>
<a id="trace-6015"></a>
<a id="trace-6046"></a>
<a id="trace-6048"></a>
<a id="trace-6059"></a>
<a id="trace-6061"></a>
<a id="trace-6072"></a>
<a id="trace-6074"></a>
<a id="trace-6081"></a>
<a id="trace-6083"></a>
<a id="trace-6158"></a>
<a id="trace-6160"></a>
<a id="trace-6171"></a>
<a id="trace-6173"></a>
<a id="trace-6191"></a>
<a id="trace-6193"></a>
<a id="trace-6204"></a>
<a id="trace-6206"></a>
<a id="trace-6346"></a>
<a id="trace-6348"></a>
<a id="trace-6365"></a>
<a id="trace-6367"></a>
<a id="trace-6404"></a>
<a id="trace-6406"></a>
<a id="trace-6564"></a>
<a id="trace-6566"></a>
<a id="trace-6583"></a>
<a id="trace-6585"></a>
<a id="trace-6601"></a>
<a id="trace-6603"></a>
<a id="trace-6612"></a>
<a id="trace-6614"></a>
<a id="trace-7568"></a>
<a id="trace-7570"></a>
<a id="trace-7745"></a>
<a id="trace-7747"></a>
<a id="trace-7767"></a>
<a id="trace-7769"></a>
<a id="trace-7829"></a>
<a id="trace-7831"></a>
<a id="trace-7911"></a>
<a id="trace-7913"></a>
<a id="trace-7944"></a>
<a id="trace-7946"></a>
<a id="trace-7973"></a>
<a id="trace-7975"></a>
<a id="trace-8026"></a>
<a id="trace-8028"></a>
<a id="trace-8038"></a>
<a id="trace-8040"></a>
<a id="trace-8060"></a>
<a id="trace-8062"></a>
<a id="trace-8080"></a>
<a id="trace-8082"></a>
<a id="trace-8100"></a>
<a id="trace-8102"></a>
<a id="trace-8117"></a>
<a id="trace-8119"></a>
<a id="trace-8196"></a>
<a id="trace-8198"></a>
<a id="trace-8226"></a>
<a id="trace-8228"></a>
<a id="trace-8239"></a>
<a id="trace-8241"></a>
<a id="trace-8265"></a>
<a id="trace-8267"></a>
<a id="trace-8278"></a>
<a id="trace-8280"></a>
<a id="trace-8296"></a>
<a id="trace-8298"></a>
<a id="trace-8318"></a>
<a id="trace-8320"></a>
<a id="trace-8441"></a>
<a id="trace-8443"></a>
<a id="trace-8456"></a>
<a id="trace-8458"></a>
<a id="trace-8474"></a>
<a id="trace-8476"></a>
<a id="trace-8483"></a>
<a id="trace-8485"></a>
<a id="trace-8510"></a>
<a id="trace-8512"></a>
<a id="trace-8537"></a>
<a id="trace-8539"></a>
<a id="trace-8559"></a>
<a id="trace-8561"></a>
<a id="trace-8569"></a>
<a id="trace-8571"></a>
<a id="trace-8673"></a>
<a id="trace-8675"></a>
<a id="trace-8684"></a>
<a id="trace-8686"></a>
<a id="trace-8701"></a>
<a id="trace-8703"></a>
<a id="trace-8710"></a>
<a id="trace-8712"></a>
<a id="trace-8726"></a>
<a id="trace-8728"></a>
<a id="trace-8735"></a>
<a id="trace-8737"></a>
<a id="trace-8755"></a>
<a id="trace-8757"></a>
<a id="trace-8825"></a>
<a id="trace-8827"></a>
<a id="trace-8903"></a>
<a id="trace-8905"></a>
<a id="trace-8921"></a>
<a id="trace-8923"></a>
<a id="trace-8951"></a>
<a id="trace-8953"></a>
<a id="trace-8998"></a>
<a id="trace-9000"></a>
<a id="trace-9012"></a>
<a id="trace-9014"></a>
<a id="trace-9036"></a>
<a id="trace-9038"></a>
<a id="trace-9047"></a>
<a id="trace-9049"></a>
<a id="trace-9130"></a>
<a id="trace-9132"></a>
<a id="trace-9144"></a>
<a id="trace-9146"></a>
<a id="trace-9180"></a>
<a id="trace-9182"></a>
<a id="trace-9292"></a>
<a id="trace-9294"></a>
<a id="trace-9302"></a>
<a id="trace-9304"></a>
<a id="trace-9326"></a>
<a id="trace-9328"></a>
<a id="trace-9354"></a>
<a id="trace-9356"></a>
<a id="trace-9483"></a>
<a id="trace-9485"></a>
<a id="trace-10520"></a>
<a id="trace-10522"></a>
<a id="trace-10571"></a>
<a id="trace-10573"></a>
<a id="trace-10700"></a>
<a id="trace-10702"></a>
<a id="trace-10723"></a>
<a id="trace-10725"></a>
<a id="trace-10758"></a>
<a id="trace-10760"></a>
<a id="trace-10808"></a>
<a id="trace-10810"></a>
<a id="trace-10819"></a>
<a id="trace-10821"></a>
<a id="trace-10911"></a>
<a id="trace-10913"></a>
<a id="trace-10942"></a>
<a id="trace-10944"></a>
<a id="trace-11753"></a>
<a id="trace-11755"></a>
<a id="trace-11802"></a>
<a id="trace-11804"></a>
<a id="trace-11952"></a>
<a id="trace-11954"></a>
<a id="trace-11982"></a>
<a id="trace-11984"></a>
<a id="trace-12141"></a>
<a id="trace-12143"></a>
<a id="trace-12170"></a>
<a id="trace-12172"></a>
<a id="trace-12193"></a>
<a id="trace-12195"></a>
<a id="trace-12207"></a>
<a id="trace-12209"></a>
<a id="trace-12857"></a>
<a id="trace-12859"></a>
<a id="trace-12992"></a>
<a id="trace-12994"></a>
<a id="trace-13275"></a>
<a id="trace-13277"></a>
<a id="trace-13301"></a>
<a id="trace-13303"></a>
<a id="trace-13333"></a>
<a id="trace-13335"></a>
<a id="trace-13357"></a>
<a id="trace-13359"></a>
<a id="trace-13382"></a>
<a id="trace-13384"></a>
<a id="trace-13401"></a>
<a id="trace-13403"></a>
<a id="trace-13418"></a>
<a id="trace-13420"></a>
<a id="trace-13430"></a>
<a id="trace-13432"></a>
<a id="trace-13452"></a>
<a id="trace-13454"></a>
<a id="trace-13468"></a>
<a id="trace-13470"></a>
<a id="trace-13573"></a>
<a id="trace-13575"></a>
<a id="trace-13594"></a>
<a id="trace-13596"></a>
<a id="trace-13607"></a>
<a id="trace-13609"></a>
<a id="trace-13635"></a>
<a id="trace-13637"></a>
<a id="trace-13660"></a>
<a id="trace-13662"></a>
<a id="trace-13673"></a>
<a id="trace-13675"></a>
<a id="trace-13693"></a>
<a id="trace-13695"></a>
<a id="trace-13711"></a>
<a id="trace-13713"></a>
<a id="trace-13797"></a>
<a id="trace-13799"></a>
<a id="trace-13814"></a>
<a id="trace-13816"></a>
<a id="trace-13832"></a>
<a id="trace-13834"></a>
<a id="trace-13935"></a>
<a id="trace-13937"></a>
<a id="trace-13963"></a>
<a id="trace-13965"></a>
<a id="trace-13980"></a>
<a id="trace-13982"></a>
<a id="trace-14002"></a>
<a id="trace-14004"></a>
<a id="trace-14017"></a>
<a id="trace-14019"></a>
<a id="trace-14046"></a>
<a id="trace-14048"></a>
<a id="trace-14139"></a>
<a id="trace-14141"></a>
<a id="trace-14151"></a>
<a id="trace-14153"></a>
<a id="trace-14170"></a>
<a id="trace-14172"></a>
<a id="trace-14185"></a>
<a id="trace-14187"></a>
<a id="trace-14206"></a>
<a id="trace-14208"></a>
<a id="trace-14463"></a>
<a id="trace-14465"></a>
<a id="trace-14486"></a>
<a id="trace-14488"></a>
<a id="trace-14501"></a>
<a id="trace-14503"></a>
<a id="trace-14592"></a>
<a id="trace-14594"></a>
<a id="trace-14642"></a>
<a id="trace-14644"></a>
<a id="trace-14981"></a>
<a id="trace-14983"></a>
<a id="trace-15016"></a>
<a id="trace-15018"></a>
<a id="trace-15044"></a>
<a id="trace-15046"></a>
<a id="trace-15195"></a>
<a id="trace-15197"></a>
<a id="trace-15209"></a>
<a id="trace-15211"></a>
<a id="trace-15220"></a>
<a id="trace-15222"></a>
<a id="trace-15238"></a>
<a id="trace-15240"></a>
<a id="trace-15260"></a>
<a id="trace-15262"></a>
<a id="trace-15293"></a>
<a id="trace-15295"></a>
<a id="trace-15374"></a>
<a id="trace-15376"></a>
<a id="trace-15960"></a>
<a id="trace-15962"></a>
<a id="trace-15986"></a>
<a id="trace-15988"></a>
<a id="trace-16011"></a>
<a id="trace-16013"></a>
<a id="trace-16055"></a>
<a id="trace-16057"></a>
<a id="trace-16076"></a>
<a id="trace-16078"></a>
<a id="trace-16108"></a>
<a id="trace-16110"></a>
<a id="trace-16121"></a>
<a id="trace-16123"></a>
<a id="trace-16144"></a>
<a id="trace-16146"></a>
<a id="trace-16180"></a>
<a id="trace-16182"></a>
<a id="trace-16260"></a>
<a id="trace-16262"></a>
<a id="trace-16278"></a>
<a id="trace-16280"></a>
<a id="trace-16302"></a>
<a id="trace-16304"></a>
<a id="trace-16325"></a>
<a id="trace-16327"></a>
<a id="trace-16344"></a>
<a id="trace-16346"></a>
<a id="trace-16374"></a>
<a id="trace-16376"></a>
<a id="trace-16382"></a>
<a id="trace-16384"></a>
<a id="trace-16397"></a>
<a id="trace-16399"></a>
<a id="trace-16406"></a>
<a id="trace-16408"></a>
<a id="trace-16483"></a>
<a id="trace-16485"></a>
<a id="trace-16496"></a>
<a id="trace-16498"></a>
<a id="trace-16519"></a>
<a id="trace-16521"></a>
<a id="trace-16535"></a>
<a id="trace-16537"></a>
<a id="trace-16543"></a>
<a id="trace-16545"></a>
<a id="trace-16557"></a>
<a id="trace-16559"></a>
<a id="trace-16565"></a>
<a id="trace-16567"></a>
<a id="trace-16581"></a>
<a id="trace-16583"></a>
<a id="trace-16590"></a>
<a id="trace-16592"></a>
<a id="trace-16686"></a>
<a id="trace-16688"></a>
<a id="trace-16699"></a>
<a id="trace-16701"></a>
<a id="trace-16713"></a>
<a id="trace-16715"></a>
<a id="trace-16722"></a>
<a id="trace-16724"></a>
<a id="trace-16735"></a>
<a id="trace-16737"></a>
<a id="trace-16743"></a>
<a id="trace-16745"></a>
<a id="trace-16759"></a>
<a id="trace-16761"></a>
<a id="trace-16768"></a>
<a id="trace-16770"></a>
<a id="trace-16841"></a>
<a id="trace-16843"></a>
<a id="trace-16853"></a>
<a id="trace-16855"></a>
<a id="trace-16877"></a>
<a id="trace-16879"></a>
<a id="trace-16899"></a>
<a id="trace-16901"></a>
<a id="trace-16928"></a>
<a id="trace-16930"></a>
<a id="trace-16943"></a>
<a id="trace-16945"></a>
<a id="trace-17023"></a>
<a id="trace-17025"></a>
<a id="trace-17066"></a>
<a id="trace-17068"></a>
<a id="trace-17081"></a>
<a id="trace-17083"></a>
<a id="trace-17099"></a>
<a id="trace-17101"></a>
<a id="trace-17107"></a>
<a id="trace-17109"></a>
<a id="trace-17123"></a>
<a id="trace-17125"></a>
<a id="trace-17133"></a>
<a id="trace-17135"></a>
<a id="trace-17233"></a>
<a id="trace-17235"></a>
<a id="trace-17244"></a>
<a id="trace-17246"></a>
<a id="trace-17271"></a>
<a id="trace-17273"></a>
<a id="trace-17312"></a>
<a id="trace-17314"></a>
<a id="trace-17320"></a>
<a id="trace-17322"></a>
<a id="trace-17334"></a>
<a id="trace-17336"></a>
<a id="trace-17345"></a>
<a id="trace-17347"></a>
<a id="trace-17416"></a>
<a id="trace-17418"></a>
<a id="trace-17449"></a>
<a id="trace-17451"></a>
<a id="trace-17475"></a>
<a id="trace-17477"></a>
<a id="trace-17486"></a>
<a id="trace-17488"></a>
<a id="trace-17498"></a>
<a id="trace-17500"></a>
<a id="trace-17527"></a>
<a id="trace-17529"></a>
<a id="trace-17536"></a>
<a id="trace-17538"></a>
<a id="trace-17607"></a>
<a id="trace-17609"></a>
<a id="trace-17632"></a>
<a id="trace-17634"></a>
<a id="trace-17645"></a>
<a id="trace-17647"></a>
<a id="trace-17669"></a>
<a id="trace-17671"></a>
<a id="trace-17685"></a>
<a id="trace-17687"></a>
<a id="trace-17699"></a>
<a id="trace-17701"></a>
<a id="trace-17717"></a>
<a id="trace-17719"></a>
<a id="trace-17726"></a>
<a id="trace-17728"></a>
<a id="trace-17799"></a>
<a id="trace-17801"></a>
<a id="trace-17810"></a>
<a id="trace-17812"></a>
<a id="trace-17829"></a>
<a id="trace-17831"></a>
<a id="trace-17842"></a>
<a id="trace-17844"></a>
<a id="trace-17865"></a>
<a id="trace-17867"></a>
<a id="trace-17884"></a>
<a id="trace-17886"></a>
<a id="trace-17950"></a>
<a id="trace-17952"></a>
<a id="trace-17997"></a>
<a id="trace-17999"></a>
<a id="trace-18089"></a>
<a id="trace-18091"></a>
<a id="trace-18118"></a>
<a id="trace-18120"></a>
<a id="trace-18137"></a>
<a id="trace-18139"></a>
<a id="trace-18148"></a>
<a id="trace-18150"></a>
<a id="trace-18170"></a>
<a id="trace-18172"></a>
<a id="trace-18184"></a>
<a id="trace-18186"></a>
<a id="trace-18196"></a>
<a id="trace-18198"></a>
<a id="trace-18211"></a>
<a id="trace-18213"></a>
<a id="trace-18226"></a>
<a id="trace-18228"></a>
<a id="trace-18237"></a>
<a id="trace-18239"></a>
<a id="trace-18337"></a>
<a id="trace-18339"></a>
<a id="trace-18348"></a>
<a id="trace-18350"></a>
<a id="trace-18378"></a>
<a id="trace-18380"></a>
<a id="trace-18394"></a>
<a id="trace-18396"></a>
<a id="trace-18426"></a>
<a id="trace-18428"></a>
<a id="trace-18439"></a>
<a id="trace-18441"></a>
<a id="trace-18518"></a>
<a id="trace-18520"></a>
<a id="trace-18546"></a>
<a id="trace-18548"></a>
<a id="trace-18568"></a>
<a id="trace-18570"></a>
<a id="trace-18590"></a>
<a id="trace-18592"></a>
<a id="trace-18615"></a>
<a id="trace-18617"></a>
<a id="trace-18626"></a>
<a id="trace-18628"></a>
<a id="trace-18720"></a>
<a id="trace-18722"></a>
<a id="trace-18753"></a>
<a id="trace-18755"></a>
<a id="trace-18776"></a>
<a id="trace-18778"></a>
<a id="trace-18785"></a>
<a id="trace-18787"></a>
<a id="trace-18802"></a>
<a id="trace-18804"></a>
<a id="trace-18810"></a>
<a id="trace-18812"></a>
<a id="trace-18884"></a>
<a id="trace-18886"></a>
<a id="trace-18899"></a>
<a id="trace-18901"></a>
<a id="trace-18926"></a>
<a id="trace-18928"></a>
<a id="trace-18946"></a>
<a id="trace-18948"></a>
<a id="trace-18973"></a>
<a id="trace-18975"></a>
<a id="trace-19083"></a>
<a id="trace-19085"></a>
<a id="trace-19098"></a>
<a id="trace-19100"></a>
<a id="trace-19108"></a>
<a id="trace-19110"></a>
<a id="trace-19130"></a>
<a id="trace-19132"></a>
<a id="trace-19148"></a>
<a id="trace-19150"></a>
<a id="trace-19157"></a>
<a id="trace-19159"></a>
<a id="trace-19178"></a>
<a id="trace-19180"></a>
<a id="trace-19189"></a>
<a id="trace-19191"></a>
<a id="trace-19263"></a>
<a id="trace-19265"></a>
<a id="trace-19290"></a>
<a id="trace-19292"></a>
<a id="trace-19300"></a>
<a id="trace-19302"></a>
<a id="trace-19315"></a>
<a id="trace-19317"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19337"></a>
<a id="trace-19339"></a>
<a id="trace-19346"></a>
<a id="trace-19348"></a>
<a id="trace-19364"></a>
<a id="trace-19366"></a>
<a id="trace-19372"></a>
<a id="trace-19374"></a>
<a id="trace-19449"></a>
<a id="trace-19451"></a>
<a id="trace-19467"></a>
<a id="trace-19469"></a>
<a id="trace-19482"></a>
<a id="trace-19484"></a>
<a id="trace-19494"></a>
<a id="trace-19496"></a>
<a id="trace-19509"></a>
<a id="trace-19511"></a>
<a id="trace-19518"></a>
<a id="trace-19520"></a>
<a id="trace-19531"></a>
<a id="trace-19533"></a>
<a id="trace-19542"></a>
<a id="trace-19544"></a>
<a id="trace-19640"></a>
<a id="trace-19642"></a>
<a id="trace-19654"></a>
<a id="trace-19656"></a>
<a id="trace-19677"></a>
<a id="trace-19679"></a>
<a id="trace-19696"></a>
<a id="trace-19698"></a>
<a id="trace-19708"></a>
<a id="trace-19710"></a>
<a id="trace-19720"></a>
<a id="trace-19722"></a>
<a id="trace-19729"></a>
<a id="trace-19731"></a>
<a id="trace-19749"></a>
<a id="trace-19751"></a>
<a id="trace-19757"></a>
<a id="trace-19759"></a>
<a id="trace-19832"></a>
<a id="trace-19834"></a>
<a id="trace-19861"></a>
<a id="trace-19863"></a>
<a id="trace-19870"></a>
<a id="trace-19872"></a>
<a id="trace-19886"></a>
<a id="trace-19888"></a>
<a id="trace-19895"></a>
<a id="trace-19897"></a>
<a id="trace-19943"></a>
<a id="trace-19945"></a>
<a id="trace-20017"></a>
<a id="trace-20019"></a>
<a id="trace-20032"></a>
<a id="trace-20034"></a>
<a id="trace-20047"></a>
<a id="trace-20049"></a>
<a id="trace-20058"></a>
<a id="trace-20060"></a>
<a id="trace-20077"></a>
<a id="trace-20079"></a>
<a id="trace-20086"></a>
<a id="trace-20088"></a>
<a id="trace-20098"></a>
<a id="trace-20100"></a>
<a id="trace-20108"></a>
<a id="trace-20110"></a>
<a id="trace-20123"></a>
<a id="trace-20125"></a>
<a id="trace-20134"></a>
<a id="trace-20136"></a>
<a id="trace-20234"></a>
<a id="trace-20236"></a>
<a id="trace-20246"></a>
<a id="trace-20248"></a>
<a id="trace-20262"></a>
<a id="trace-20264"></a>
<a id="trace-20275"></a>
<a id="trace-20277"></a>
<a id="trace-20291"></a>
<a id="trace-20293"></a>
<a id="trace-20300"></a>
<a id="trace-20302"></a>
<a id="trace-20318"></a>
<a id="trace-20320"></a>
<a id="trace-20328"></a>
<a id="trace-20330"></a>
<a id="trace-20404"></a>
<a id="trace-20406"></a>
<a id="trace-20416"></a>
<a id="trace-20418"></a>
<a id="trace-20432"></a>
<a id="trace-20434"></a>
<a id="trace-20441"></a>
<a id="trace-20443"></a>
<a id="trace-20466"></a>
<a id="trace-20468"></a>
<a id="trace-20478"></a>
<a id="trace-20480"></a>
<a id="trace-20491"></a>
<a id="trace-20493"></a>
<a id="trace-20507"></a>
<a id="trace-20509"></a>
<a id="trace-20515"></a>
<a id="trace-20517"></a>
<a id="trace-20605"></a>
<a id="trace-20607"></a>
<a id="trace-20620"></a>
<a id="trace-20622"></a>
<a id="trace-20633"></a>
<a id="trace-20635"></a>
<a id="trace-20649"></a>
<a id="trace-20651"></a>
<a id="trace-20657"></a>
<a id="trace-20659"></a>
<a id="trace-20671"></a>
<a id="trace-20673"></a>
<a id="trace-20684"></a>
<a id="trace-20686"></a>
<a id="trace-20699"></a>
<a id="trace-20701"></a>
<a id="trace-20707"></a>
<a id="trace-20709"></a>
<a id="trace-20783"></a>
<a id="trace-20785"></a>
<a id="trace-20797"></a>
<a id="trace-20799"></a>
<a id="trace-20812"></a>
<a id="trace-20814"></a>
<a id="trace-20823"></a>
<a id="trace-20825"></a>
<a id="trace-20850"></a>
<a id="trace-20852"></a>
<a id="trace-20875"></a>
<a id="trace-20877"></a>
<a id="trace-20890"></a>
<a id="trace-20892"></a>
<a id="trace-20900"></a>
<a id="trace-20902"></a>
<a id="trace-20977"></a>
<a id="trace-20979"></a>
<a id="trace-20990"></a>
<a id="trace-20992"></a>
<a id="trace-21010"></a>
<a id="trace-21012"></a>
<a id="trace-21027"></a>
<a id="trace-21029"></a>
<a id="trace-21050"></a>
<a id="trace-21052"></a>
<a id="trace-21061"></a>
<a id="trace-21063"></a>
<a id="trace-21077"></a>
<a id="trace-21079"></a>
<a id="trace-21085"></a>
<a id="trace-21087"></a>
<a id="trace-21163"></a>
<a id="trace-21165"></a>
<a id="trace-21192"></a>
<a id="trace-21194"></a>
<a id="trace-21205"></a>
<a id="trace-21207"></a>
<a id="trace-21220"></a>
<a id="trace-21222"></a>
<a id="trace-21228"></a>
<a id="trace-21230"></a>
<a id="trace-21241"></a>
<a id="trace-21243"></a>
<a id="trace-21250"></a>
<a id="trace-21252"></a>
<a id="trace-21276"></a>
<a id="trace-21278"></a>
<a id="trace-21351"></a>
<a id="trace-21353"></a>
<a id="trace-21376"></a>
<a id="trace-21378"></a>
<a id="trace-21388"></a>
<a id="trace-21390"></a>
<a id="trace-21405"></a>
<a id="trace-21407"></a>
<a id="trace-21436"></a>
<a id="trace-21438"></a>
<a id="trace-21444"></a>
<a id="trace-21446"></a>
<a id="trace-21548"></a>
<a id="trace-21550"></a>
<a id="trace-21573"></a>
<a id="trace-21575"></a>
<a id="trace-21589"></a>
<a id="trace-21591"></a>
<a id="trace-21599"></a>
<a id="trace-21601"></a>
<a id="trace-21621"></a>
<a id="trace-21623"></a>
<a id="trace-21643"></a>
<a id="trace-21645"></a>
<a id="trace-21749"></a>
<a id="trace-21751"></a>
<a id="trace-21759"></a>
<a id="trace-21761"></a>
<a id="trace-21774"></a>
<a id="trace-21776"></a>
<a id="trace-21782"></a>
<a id="trace-21784"></a>
<a id="trace-21797"></a>
<a id="trace-21799"></a>
<a id="trace-21809"></a>
<a id="trace-21811"></a>
<a id="trace-21906"></a>
<a id="trace-21908"></a>
<a id="trace-21918"></a>
<a id="trace-21920"></a>
<a id="trace-21935"></a>
<a id="trace-21937"></a>
<a id="trace-21966"></a>
<a id="trace-21968"></a>
<a id="trace-21974"></a>
<a id="trace-21976"></a>
<a id="trace-21994"></a>
<a id="trace-21996"></a>
<a id="trace-22012"></a>
<a id="trace-22014"></a>
<a id="trace-22021"></a>
<a id="trace-22023"></a>
<a id="trace-22110"></a>
<a id="trace-22112"></a>
<a id="trace-22123"></a>
<a id="trace-22125"></a>
<a id="trace-22134"></a>
<a id="trace-22136"></a>
<a id="trace-22150"></a>
<a id="trace-22152"></a>
<a id="trace-22175"></a>
<a id="trace-22177"></a>
<a id="trace-22189"></a>
<a id="trace-22191"></a>
<a id="trace-22206"></a>
<a id="trace-22208"></a>
<a id="trace-22286"></a>
<a id="trace-22288"></a>
<a id="trace-22299"></a>
<a id="trace-22301"></a>
<a id="trace-22313"></a>
<a id="trace-22315"></a>
<a id="trace-22324"></a>
<a id="trace-22326"></a>
<a id="trace-22348"></a>
<a id="trace-22350"></a>
<a id="trace-22362"></a>
<a id="trace-22364"></a>
<a id="trace-22371"></a>
<a id="trace-22373"></a>
<a id="trace-22390"></a>
<a id="trace-22392"></a>
<a id="trace-22402"></a>
<a id="trace-22404"></a>
<a id="trace-22478"></a>
<a id="trace-22480"></a>
<a id="trace-22492"></a>
<a id="trace-22494"></a>
<a id="trace-22508"></a>
<a id="trace-22510"></a>
<a id="trace-22518"></a>
<a id="trace-22520"></a>
<a id="trace-22532"></a>
<a id="trace-22534"></a>
<a id="trace-22542"></a>
<a id="trace-22544"></a>
<a id="trace-22560"></a>
<a id="trace-22562"></a>
<a id="trace-22568"></a>
<a id="trace-22570"></a>
<a id="trace-22585"></a>
<a id="trace-22587"></a>
<a id="trace-22597"></a>
<a id="trace-22599"></a>
<a id="trace-22673"></a>
<a id="trace-22675"></a>
<a id="trace-22688"></a>
<a id="trace-22690"></a>
<a id="trace-22706"></a>
<a id="trace-22708"></a>
<a id="trace-22715"></a>
<a id="trace-22717"></a>
<a id="trace-22730"></a>
<a id="trace-22732"></a>
<a id="trace-22741"></a>
<a id="trace-22743"></a>
<a id="trace-22764"></a>
<a id="trace-22766"></a>
<a id="trace-22786"></a>
<a id="trace-22788"></a>
<a id="trace-22873"></a>
<a id="trace-22875"></a>
<a id="trace-22888"></a>
<a id="trace-22890"></a>
<a id="trace-22915"></a>
<a id="trace-22917"></a>
<a id="trace-22923"></a>
<a id="trace-22925"></a>
<a id="trace-22940"></a>
<a id="trace-22942"></a>
<a id="trace-22962"></a>
<a id="trace-22964"></a>
<a id="trace-22974"></a>
<a id="trace-22976"></a>
<a id="trace-23075"></a>
<a id="trace-23077"></a>
<a id="trace-23099"></a>
<a id="trace-23101"></a>
<a id="trace-23107"></a>
<a id="trace-23109"></a>
<a id="trace-23124"></a>
<a id="trace-23126"></a>
<a id="trace-23133"></a>
<a id="trace-23135"></a>
<a id="trace-23161"></a>
<a id="trace-23163"></a>
<a id="trace-23235"></a>
<a id="trace-23237"></a>
<a id="trace-23248"></a>
<a id="trace-23250"></a>
<a id="trace-23266"></a>
<a id="trace-23268"></a>
<a id="trace-23290"></a>
<a id="trace-23292"></a>
<a id="trace-23301"></a>
<a id="trace-23303"></a>
<a id="trace-23316"></a>
<a id="trace-23318"></a>
<a id="trace-23325"></a>
<a id="trace-23327"></a>
<a id="trace-23348"></a>
<a id="trace-23350"></a>
<a id="trace-23422"></a>
<a id="trace-23424"></a>
<a id="trace-23438"></a>
<a id="trace-23440"></a>
<a id="trace-23457"></a>
<a id="trace-23459"></a>
<a id="trace-23485"></a>
<a id="trace-23487"></a>
<a id="trace-23500"></a>
<a id="trace-23502"></a>
<a id="trace-23510"></a>
<a id="trace-23512"></a>
<a id="trace-23538"></a>
<a id="trace-23540"></a>
<a id="trace-23612"></a>
<a id="trace-23614"></a>
<a id="trace-23646"></a>
<a id="trace-23648"></a>
<a id="trace-23662"></a>
<a id="trace-23664"></a>
<a id="trace-23688"></a>
<a id="trace-23690"></a>
<a id="trace-23696"></a>
<a id="trace-23698"></a>
<a id="trace-23712"></a>
<a id="trace-23714"></a>
<a id="trace-23721"></a>
<a id="trace-23723"></a>
<a id="trace-23810"></a>
<a id="trace-23812"></a>
<a id="trace-23827"></a>
<a id="trace-23829"></a>
<a id="trace-23836"></a>
<a id="trace-23838"></a>
<a id="trace-23854"></a>
<a id="trace-23856"></a>
<a id="trace-23866"></a>
<a id="trace-23868"></a>
<a id="trace-23878"></a>
<a id="trace-23880"></a>
<a id="trace-23908"></a>
<a id="trace-23910"></a>
<a id="trace-23917"></a>
<a id="trace-23919"></a>
<a id="trace-24013"></a>
<a id="trace-24015"></a>
<a id="trace-24022"></a>
<a id="trace-24024"></a>
<a id="trace-24041"></a>
<a id="trace-24043"></a>
<a id="trace-24051"></a>
<a id="trace-24053"></a>
<a id="trace-24065"></a>
<a id="trace-24067"></a>
<a id="trace-24074"></a>
<a id="trace-24076"></a>
<a id="trace-24093"></a>
<a id="trace-24095"></a>
<a id="trace-24176"></a>
<a id="trace-24178"></a>
<a id="trace-24188"></a>
<a id="trace-24190"></a>
<a id="trace-24206"></a>
<a id="trace-24208"></a>
<a id="trace-24238"></a>
<a id="trace-24240"></a>
<a id="trace-24251"></a>
<a id="trace-24253"></a>
<a id="trace-24259"></a>
<a id="trace-24261"></a>
<a id="trace-24276"></a>
<a id="trace-24278"></a>
<a id="trace-24289"></a>
<a id="trace-24291"></a>
<a id="trace-24363"></a>
<a id="trace-24365"></a>
<a id="trace-24376"></a>
<a id="trace-24378"></a>
<a id="trace-24393"></a>
<a id="trace-24395"></a>
<a id="trace-24402"></a>
<a id="trace-24404"></a>
<a id="trace-24431"></a>
<a id="trace-24433"></a>
<a id="trace-24455"></a>
<a id="trace-24457"></a>
<a id="trace-24477"></a>
<a id="trace-24479"></a>
<a id="trace-24551"></a>
<a id="trace-24553"></a>
<a id="trace-24564"></a>
<a id="trace-24566"></a>
<a id="trace-24579"></a>
<a id="trace-24581"></a>
<a id="trace-24592"></a>
<a id="trace-24594"></a>
<a id="trace-24607"></a>
<a id="trace-24609"></a>
<a id="trace-24617"></a>
<a id="trace-24619"></a>
<a id="trace-24631"></a>
<a id="trace-24633"></a>
<a id="trace-24644"></a>
<a id="trace-24646"></a>
<a id="trace-24664"></a>
<a id="trace-24666"></a>
<a id="trace-24672"></a>
<a id="trace-24674"></a>
<a id="trace-24748"></a>
<a id="trace-24750"></a>
<a id="trace-24761"></a>
<a id="trace-24763"></a>
<a id="trace-24775"></a>
<a id="trace-24777"></a>
<a id="trace-24798"></a>
<a id="trace-24800"></a>
<a id="trace-24808"></a>
<a id="trace-24810"></a>
<a id="trace-24828"></a>
<a id="trace-24830"></a>
<a id="trace-24837"></a>
<a id="trace-24839"></a>
<a id="trace-24855"></a>
<a id="trace-24857"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 944): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 762. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624818187461794, 'next_transition': 1021}.
<a id="trace-962"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 962): traveling overwatch. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299846390820519, 'next_transition': 1017}.
<a id="trace-963"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 963): received platoon directive. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299846390820519, 'next_transition': 1017}.
<a id="trace-1017"></a>
<a id="trace-1019"></a>
<a id="trace-1056"></a>
<a id="trace-1058"></a>
<a id="trace-1106"></a>
<a id="trace-1108"></a>
<a id="trace-1142"></a>
<a id="trace-1144"></a>
<a id="trace-1172"></a>
<a id="trace-1174"></a>
<a id="trace-1222"></a>
<a id="trace-1224"></a>
<a id="trace-1254"></a>
<a id="trace-1256"></a>
<a id="trace-1283"></a>
<a id="trace-1285"></a>
<a id="trace-1377"></a>
<a id="trace-1379"></a>
<a id="trace-1401"></a>
<a id="trace-1403"></a>
<a id="trace-1427"></a>
<a id="trace-1429"></a>
<a id="trace-1450"></a>
<a id="trace-1452"></a>
<a id="trace-1474"></a>
<a id="trace-1476"></a>
<a id="trace-1490"></a>
<a id="trace-1492"></a>
<a id="trace-1511"></a>
<a id="trace-1513"></a>
<a id="trace-1523"></a>
<a id="trace-1525"></a>
- 6.20s–13.70s (×32), actor 5, squad 0 (trace 1017): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 752. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2175452369535869, 'next_transition': 1056}.
<a id="trace-1537"></a>
- 13.95s–13.95s (×1), actor 0, squad 0 (trace 1537): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1296. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1711}.
<a id="trace-1711"></a>
<a id="trace-1713"></a>
<a id="trace-1737"></a>
<a id="trace-1739"></a>
<a id="trace-1823"></a>
<a id="trace-1825"></a>
<a id="trace-1842"></a>
<a id="trace-1844"></a>
<a id="trace-2341"></a>
<a id="trace-2343"></a>
<a id="trace-2390"></a>
<a id="trace-2392"></a>
<a id="trace-2430"></a>
<a id="trace-2432"></a>
<a id="trace-2463"></a>
<a id="trace-2465"></a>
<a id="trace-2509"></a>
<a id="trace-2511"></a>
- 14.20s–18.25s (×18), actor 5, squad 0 (trace 1711): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1301. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.019687984478165863, 'next_transition': 1737}.
<a id="trace-1854"></a>
- 15.90s–15.90s (×1), actor 8, squad 1 (trace 1854): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1756. Next observer evidence: None.
<a id="trace-1855"></a>
- 15.90s–15.90s (×1), actor 8, squad 1 (trace 1855): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1756. Next observer evidence: None.
<a id="trace-1856"></a>
<a id="trace-1972"></a>
<a id="trace-2093"></a>
<a id="trace-2210"></a>
- 15.90s–16.15s (×4), actor 8, squad 1 (trace 1856): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1756. Next observer evidence: None.
<a id="trace-2516"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2516): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1748. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46284691789503074, 'next_transition': 2654}.
<a id="trace-2517"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2517): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1748. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46284691789503074, 'next_transition': 2654}.
<a id="trace-2518"></a>
- 18.25s–18.25s (×1), actor 0, squad 0 (trace 2518): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1748. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46284691789503074, 'next_transition': 2654}.
<a id="trace-2654"></a>
<a id="trace-2656"></a>
<a id="trace-2687"></a>
<a id="trace-2689"></a>
- 18.75s–19.25s (×4), actor 5, squad 0 (trace 2654): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1753. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6337085993893208, 'next_transition': 2687}.
<a id="trace-2692"></a>
- 19.25s–19.25s (×1), actor 0, squad 0 (trace 2692): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1748. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2361248791783843, 'next_transition': 2841}.
<a id="trace-2828"></a>
- 19.50s–19.50s (×1), actor 8, squad 1 (trace 2828): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1756. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47372180836963784, 'next_transition': 302}.
<a id="trace-2841"></a>
<a id="trace-2843"></a>
- 19.75s–19.75s (×2), actor 5, squad 0 (trace 2841): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1753. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22876828259501208, 'next_transition': 301}.
<a id="trace-301"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (events line 301): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-302"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (events line 302): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2850"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 2850): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802747 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2850. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.460708772701687, 'next_transition': 2945}.
<a id="trace-2851"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 2851): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802747 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2851. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.460708772701687, 'next_transition': 2945}.
<a id="trace-2852"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 2852): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802747 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2852. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.608159976347192, 'next_transition': 3180}.
<a id="trace-2853"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 2853): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.802747 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 2853. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.608159976347192, 'next_transition': 3180}.
<a id="trace-2945"></a>
<a id="trace-2947"></a>
- 20.25s–20.25s (×2), actor 5, squad 0 (trace 2945): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2865. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4649672760758282, 'next_transition': 3112}.
<a id="trace-2952"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 2952): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2860. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4649672760758282, 'next_transition': 3112}.
<a id="trace-3112"></a>
<a id="trace-3114"></a>
<a id="trace-3169"></a>
<a id="trace-3171"></a>
- 20.75s–21.25s (×4), actor 5, squad 0 (trace 3112): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2865. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.133115657378871, 'next_transition': 3169}.
<a id="trace-3180"></a>
- 21.35s–21.35s (×1), actor 8, squad 1 (trace 3180): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 2868. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4897728182511587, 'next_transition': 3477}.
<a id="trace-3206"></a>
- 21.65s–21.65s (×1), actor 0, squad 0 (trace 3206): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2860. Next observer evidence: None.
<a id="trace-3355"></a>
<a id="trace-3357"></a>
<a id="trace-3394"></a>
<a id="trace-3396"></a>
- 21.75s–22.25s (×4), actor 5, squad 0 (trace 3355): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2865. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8149270224741444, 'next_transition': 3394}.
<a id="trace-3411"></a>
- 22.30s–22.30s (×1), actor 0, squad 0 (trace 3411): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 2860. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09113875115723265, 'next_transition': 3433}.
<a id="trace-3433"></a>
<a id="trace-3435"></a>
<a id="trace-3607"></a>
<a id="trace-3609"></a>
<a id="trace-3641"></a>
<a id="trace-3643"></a>
<a id="trace-3680"></a>
<a id="trace-3682"></a>
- 22.75s–24.25s (×8), actor 5, squad 0 (trace 3433): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2865. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45969275026768497, 'next_transition': 3607}.
<a id="trace-3477"></a>
- 23.00s–23.00s (×1), actor 8, squad 1 (trace 3477): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 2868. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.274615380138194, 'next_transition': 4036}.
<a id="trace-3686"></a>
- 24.30s–24.30s (×1), actor 0, squad 0 (trace 3686): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 2860. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09219928230638504, 'next_transition': 3856}.
<a id="trace-3856"></a>
<a id="trace-3858"></a>
<a id="trace-3960"></a>
<a id="trace-3962"></a>
<a id="trace-4000"></a>
<a id="trace-4002"></a>
<a id="trace-4027"></a>
<a id="trace-4029"></a>
<a id="trace-4047"></a>
<a id="trace-4049"></a>
<a id="trace-4085"></a>
<a id="trace-4087"></a>
<a id="trace-4111"></a>
<a id="trace-4113"></a>
- 24.75s–27.75s (×14), actor 5, squad 0 (trace 3856): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2865. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1367238743325393, 'next_transition': 3960}.
<a id="trace-4036"></a>
- 26.35s–26.35s (×1), actor 8, squad 1 (trace 4036): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3881. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.667299056823189, 'next_transition': 4204}.
<a id="trace-4118"></a>
- 27.85s–27.85s (×1), actor 0, squad 0 (trace 4118): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3873. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10443268870575213, 'next_transition': 4139}.
<a id="trace-4139"></a>
<a id="trace-4141"></a>
<a id="trace-4161"></a>
<a id="trace-4163"></a>
<a id="trace-4178"></a>
<a id="trace-4180"></a>
<a id="trace-4195"></a>
<a id="trace-4197"></a>
<a id="trace-4283"></a>
<a id="trace-4285"></a>
<a id="trace-4303"></a>
<a id="trace-4305"></a>
<a id="trace-4331"></a>
<a id="trace-4333"></a>
<a id="trace-4343"></a>
<a id="trace-4345"></a>
<a id="trace-4361"></a>
<a id="trace-4363"></a>
<a id="trace-4372"></a>
<a id="trace-4374"></a>
<a id="trace-4389"></a>
<a id="trace-4391"></a>
<a id="trace-4400"></a>
<a id="trace-4402"></a>
<a id="trace-4415"></a>
<a id="trace-4417"></a>
<a id="trace-4430"></a>
<a id="trace-4432"></a>
<a id="trace-4511"></a>
<a id="trace-4513"></a>
<a id="trace-4525"></a>
<a id="trace-4527"></a>
<a id="trace-4548"></a>
<a id="trace-4550"></a>
<a id="trace-4568"></a>
<a id="trace-4570"></a>
<a id="trace-4593"></a>
<a id="trace-4595"></a>
<a id="trace-4613"></a>
<a id="trace-4615"></a>
<a id="trace-4639"></a>
<a id="trace-4641"></a>
- 28.25s–38.25s (×42), actor 5, squad 0 (trace 4139): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3878. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09941358268176938, 'next_transition': 4161}.
<a id="trace-4204"></a>
- 29.95s–29.95s (×1), actor 8, squad 1 (trace 4204): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 25.00s, trace 3881. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150333197060269, 'next_transition': 4276}.
<a id="trace-4276"></a>
- 30.10s–30.10s (×1), actor 8, squad 1 (trace 4276): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 4213. Next observer evidence: {'until': 31, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 483}.
<a id="trace-483"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 483): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4317"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 4317): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.653665 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4317. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.689150137288675, 'next_transition': 4601}.
<a id="trace-4318"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 4318): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.653665 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4318. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.689150137288675, 'next_transition': 4601}.
<a id="trace-4601"></a>
- 37.35s–37.35s (×1), actor 9, squad 1 (trace 4601): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4448. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5877}.
<a id="trace-4648"></a>
- 38.25s–38.25s (×1), actor 0, squad 0 (trace 4648): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 35.00s, trace 4440. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575000003174605, 'next_transition': 4656}.
<a id="trace-4656"></a>
<a id="trace-4658"></a>
- 38.75s–38.75s (×2), actor 5, squad 0 (trace 4656): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4445. Next observer evidence: {'until': 39, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12120000016114846, 'next_transition': 4673}.
<a id="trace-4673"></a>
- 39.15s–39.15s (×1), actor 0, squad 0 (trace 4673): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 4440. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5614}.
<a id="trace-5487"></a>
- 39.15s–39.15s (×1), actor 0, squad 0 (trace 5487): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 35.00s, trace 4440. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5614}.
<a id="trace-5488"></a>
- 39.15s–39.15s (×1), actor 0, squad 0 (trace 5488): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 35.00s, trace 4440. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5614}.
<a id="trace-5592"></a>
- 39.15s–39.15s (×1), actor 0, squad 0 (trace 5592): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 35.00s, trace 4440. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5614}.
<a id="trace-5593"></a>
- 39.15s–39.15s (×1), actor 0, squad 0 (trace 5593): Assaulting. Knowledge: actor memory at 35.00s, trace 4440. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5614}.
<a id="trace-5614"></a>
<a id="trace-5616"></a>
- 39.25s–39.25s (×2), actor 5, squad 0 (trace 5614): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4445. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5628}.
<a id="trace-5628"></a>
- 39.60s–39.60s (×1), actor 0, squad 0 (trace 5628): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 4440. Next observer evidence: None.
<a id="trace-5635"></a>
- 39.60s–39.60s (×1), actor 0, squad 0 (trace 5635): MoveTactically. Knowledge: actor memory at 35.00s, trace 4440. Next observer evidence: None.
<a id="trace-5636"></a>
- 39.60s–39.60s (×1), actor 0, squad 0 (trace 5636): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 35.00s, trace 4440. Next observer evidence: None.
<a id="trace-5753"></a>
<a id="trace-5755"></a>
<a id="trace-5848"></a>
<a id="trace-5850"></a>
<a id="trace-5893"></a>
<a id="trace-5895"></a>
<a id="trace-5930"></a>
<a id="trace-5932"></a>
<a id="trace-5951"></a>
<a id="trace-5953"></a>
<a id="trace-5986"></a>
<a id="trace-5988"></a>
<a id="trace-6009"></a>
<a id="trace-6011"></a>
<a id="trace-6042"></a>
<a id="trace-6044"></a>
<a id="trace-6055"></a>
<a id="trace-6057"></a>
<a id="trace-6068"></a>
<a id="trace-6070"></a>
<a id="trace-6077"></a>
<a id="trace-6079"></a>
<a id="trace-6154"></a>
<a id="trace-6156"></a>
<a id="trace-6167"></a>
<a id="trace-6169"></a>
<a id="trace-6187"></a>
<a id="trace-6189"></a>
<a id="trace-6200"></a>
<a id="trace-6202"></a>
- 39.75s–46.75s (×30), actor 5, squad 0 (trace 5753): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4445. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5848}.
<a id="trace-5877"></a>
- 40.65s–40.65s (×1), actor 9, squad 1 (trace 5877): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 5778. Next observer evidence: {'until': 63.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8301}.
<a id="trace-5879"></a>
- 40.65s–40.65s (×1), actor 9, squad 1 (trace 5879): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 40.00s, trace 5778. Next observer evidence: {'until': 63.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8301}.
<a id="trace-6213"></a>
- 47.00s–47.00s (×1), actor 0, squad 0 (trace 6213): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 6085. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0567049259391599, 'next_transition': 6342}.
<a id="trace-6214"></a>
- 47.00s–47.00s (×1), actor 0, squad 0 (trace 6214): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 6085. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0567049259391599, 'next_transition': 6342}.
<a id="trace-6342"></a>
<a id="trace-6344"></a>
<a id="trace-6361"></a>
<a id="trace-6363"></a>
<a id="trace-6400"></a>
<a id="trace-6402"></a>
<a id="trace-6420"></a>
<a id="trace-6422"></a>
<a id="trace-6434"></a>
<a id="trace-6436"></a>
<a id="trace-6461"></a>
<a id="trace-6463"></a>
<a id="trace-6560"></a>
<a id="trace-6562"></a>
- 47.25s–50.25s (×14), actor 5, squad 0 (trace 6342): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6090. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11782496179953761, 'next_transition': 6361}.
<a id="trace-6576"></a>
- 50.65s–50.65s (×1), actor 0, squad 0 (trace 6576): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 6484. Next observer evidence: None.
<a id="trace-6579"></a>
<a id="trace-6581"></a>
<a id="trace-6597"></a>
<a id="trace-6599"></a>
<a id="trace-6608"></a>
<a id="trace-6610"></a>
- 50.75s–51.75s (×6), actor 5, squad 0 (trace 6579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6489. Next observer evidence: {'until': 51.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6597}.
<a id="trace-6616"></a>
- 51.85s–51.85s (×1), actor 0, squad 0 (trace 6616): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 6484. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7564}.
<a id="trace-7430"></a>
- 51.85s–51.85s (×1), actor 0, squad 0 (trace 7430): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 50.00s, trace 6484. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7564}.
<a id="trace-7431"></a>
- 51.85s–51.85s (×1), actor 0, squad 0 (trace 7431): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 50.00s, trace 6484. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7564}.
<a id="trace-7535"></a>
- 51.85s–51.85s (×1), actor 0, squad 0 (trace 7535): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 50.00s, trace 6484. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7564}.
<a id="trace-7536"></a>
- 51.85s–51.85s (×1), actor 0, squad 0 (trace 7536): Assaulting. Knowledge: actor memory at 50.00s, trace 6484. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7564}.
<a id="trace-7564"></a>
<a id="trace-7566"></a>
<a id="trace-7585"></a>
<a id="trace-7587"></a>
- 52.25s–52.75s (×4), actor 5, squad 0 (trace 7564): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6489. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.050212538897171664, 'next_transition': 7585}.
<a id="trace-7591"></a>
- 52.85s–52.85s (×1), actor 0, squad 0 (trace 7591): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 6484. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.074100056184611, 'next_transition': 7741}.
<a id="trace-7598"></a>
- 52.85s–52.85s (×1), actor 0, squad 0 (trace 7598): MoveTactically. Knowledge: actor memory at 50.00s, trace 6484. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.074100056184611, 'next_transition': 7741}.
<a id="trace-7599"></a>
- 52.85s–52.85s (×1), actor 0, squad 0 (trace 7599): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 50.00s, trace 6484. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.074100056184611, 'next_transition': 7741}.
<a id="trace-7741"></a>
<a id="trace-7743"></a>
<a id="trace-7763"></a>
<a id="trace-7765"></a>
<a id="trace-7798"></a>
<a id="trace-7800"></a>
<a id="trace-7825"></a>
<a id="trace-7827"></a>
<a id="trace-7906"></a>
<a id="trace-7908"></a>
<a id="trace-7939"></a>
<a id="trace-7941"></a>
<a id="trace-7967"></a>
<a id="trace-7969"></a>
<a id="trace-8003"></a>
<a id="trace-8005"></a>
<a id="trace-8020"></a>
<a id="trace-8022"></a>
<a id="trace-8032"></a>
<a id="trace-8034"></a>
<a id="trace-8054"></a>
<a id="trace-8056"></a>
<a id="trace-8074"></a>
<a id="trace-8076"></a>
<a id="trace-8094"></a>
<a id="trace-8096"></a>
<a id="trace-8111"></a>
<a id="trace-8113"></a>
<a id="trace-8192"></a>
<a id="trace-8194"></a>
<a id="trace-8207"></a>
<a id="trace-8209"></a>
<a id="trace-8222"></a>
<a id="trace-8224"></a>
<a id="trace-8235"></a>
<a id="trace-8237"></a>
- 53.25s–61.75s (×36), actor 5, squad 0 (trace 7741): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6489. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05502504294921096, 'next_transition': 7763}.
<a id="trace-8245"></a>
- 62.15s–62.15s (×1), actor 0, squad 0 (trace 8245): NeedSupport. Knowledge: actor memory at 60.00s, trace 8120. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05040639562905177, 'next_transition': 8261}.
<a id="trace-8261"></a>
<a id="trace-8263"></a>
<a id="trace-8274"></a>
<a id="trace-8276"></a>
<a id="trace-8292"></a>
<a id="trace-8294"></a>
<a id="trace-8314"></a>
<a id="trace-8316"></a>
<a id="trace-8339"></a>
<a id="trace-8341"></a>
<a id="trace-8353"></a>
<a id="trace-8355"></a>
<a id="trace-8437"></a>
<a id="trace-8439"></a>
<a id="trace-8452"></a>
<a id="trace-8454"></a>
<a id="trace-8470"></a>
<a id="trace-8472"></a>
<a id="trace-8479"></a>
<a id="trace-8481"></a>
<a id="trace-8498"></a>
<a id="trace-8500"></a>
<a id="trace-8506"></a>
<a id="trace-8508"></a>
<a id="trace-8523"></a>
<a id="trace-8525"></a>
<a id="trace-8533"></a>
<a id="trace-8535"></a>
<a id="trace-8555"></a>
<a id="trace-8557"></a>
<a id="trace-8565"></a>
<a id="trace-8567"></a>
<a id="trace-8648"></a>
<a id="trace-8650"></a>
<a id="trace-8656"></a>
<a id="trace-8658"></a>
<a id="trace-8669"></a>
<a id="trace-8671"></a>
<a id="trace-8680"></a>
<a id="trace-8682"></a>
<a id="trace-8697"></a>
<a id="trace-8699"></a>
<a id="trace-8706"></a>
<a id="trace-8708"></a>
<a id="trace-8722"></a>
<a id="trace-8724"></a>
<a id="trace-8731"></a>
<a id="trace-8733"></a>
<a id="trace-8751"></a>
<a id="trace-8753"></a>
- 62.25s–74.25s (×50), actor 5, squad 0 (trace 8261): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 8125. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10312998245539494, 'next_transition': 8274}.
<a id="trace-8301"></a>
- 63.35s–63.35s (×1), actor 9, squad 1 (trace 8301): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 8128. Next observer evidence: {'until': 63.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8305}.
<a id="trace-8302"></a>
- 63.35s–63.35s (×1), actor 9, squad 1 (trace 8302): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 60.00s, trace 8128. Next observer evidence: {'until': 63.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8305}.
<a id="trace-8305"></a>
- 63.40s–63.40s (×1), actor 9, squad 1 (trace 8305): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 60.00s, trace 8128. Next observer evidence: {'until': 92, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1481}.
<a id="trace-8761"></a>
- 74.65s–74.65s (×1), actor 1, squad 0 (trace 8761): traveling overwatch. Knowledge: actor memory at 70.00s, trace 8572. Next observer evidence: None.
<a id="trace-8762"></a>
- 74.65s–74.65s (×1), actor 1, squad 0 (trace 8762): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 70.00s, trace 8572. Next observer evidence: None.
<a id="trace-8821"></a>
<a id="trace-8823"></a>
<a id="trace-8899"></a>
<a id="trace-8901"></a>
<a id="trace-8917"></a>
<a id="trace-8919"></a>
<a id="trace-8947"></a>
<a id="trace-8949"></a>
<a id="trace-8956"></a>
<a id="trace-8958"></a>
<a id="trace-8984"></a>
<a id="trace-8986"></a>
<a id="trace-8994"></a>
<a id="trace-8996"></a>
<a id="trace-9008"></a>
<a id="trace-9010"></a>
<a id="trace-9018"></a>
<a id="trace-9020"></a>
<a id="trace-9032"></a>
<a id="trace-9034"></a>
<a id="trace-9043"></a>
<a id="trace-9045"></a>
- 74.75s–79.75s (×22), actor 5, squad 0 (trace 8821): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8576. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8899}.
<a id="trace-1339"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (events line 1339): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9070"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 9070): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.15s, trace 9070. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000678999329965, 'next_transition': 9126}.
<a id="trace-9126"></a>
<a id="trace-9128"></a>
<a id="trace-9140"></a>
<a id="trace-9142"></a>
<a id="trace-9163"></a>
<a id="trace-9165"></a>
<a id="trace-9176"></a>
<a id="trace-9178"></a>
- 80.25s–81.75s (×8), actor 5, squad 0 (trace 9126): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 9070. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999980401916746, 'next_transition': 9140}.
<a id="trace-9193"></a>
- 82.20s–82.20s (×1), actor 1, squad 0 (trace 9193): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 9051. Next observer evidence: None.
<a id="trace-9194"></a>
- 82.20s–82.20s (×1), actor 1, squad 0 (trace 9194): bounding overwatch. Knowledge: actor memory at 80.00s, trace 9051. Next observer evidence: None.
<a id="trace-9195"></a>
- 82.20s–82.20s (×1), actor 1, squad 0 (trace 9195): new contact inside 100 m. Knowledge: actor memory at 80.00s, trace 9051. Next observer evidence: None.
<a id="trace-9288"></a>
<a id="trace-9290"></a>
<a id="trace-9298"></a>
<a id="trace-9300"></a>
<a id="trace-9322"></a>
<a id="trace-9324"></a>
<a id="trace-9350"></a>
<a id="trace-9352"></a>
<a id="trace-9369"></a>
<a id="trace-9371"></a>
<a id="trace-9384"></a>
<a id="trace-9386"></a>
<a id="trace-9479"></a>
<a id="trace-9481"></a>
<a id="trace-9491"></a>
<a id="trace-9493"></a>
- 82.25s–85.75s (×16), actor 5, squad 0 (trace 9288): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 9070. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999630538158376, 'next_transition': 9298}.
<a id="trace-9500"></a>
- 85.85s–85.85s (×1), actor 1, squad 0 (trace 9500): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10415}.
<a id="trace-9502"></a>
- 85.85s–85.85s (×1), actor 1, squad 0 (trace 9502): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10415}.
<a id="trace-10316"></a>
- 85.85s–85.85s (×1), actor 1, squad 0 (trace 10316): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10415}.
<a id="trace-10317"></a>
- 85.85s–85.85s (×1), actor 1, squad 0 (trace 10317): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10415}.
<a id="trace-10395"></a>
- 85.85s–85.85s (×1), actor 1, squad 0 (trace 10395): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10415}.
<a id="trace-10396"></a>
- 85.85s–85.85s (×1), actor 1, squad 0 (trace 10396): Assaulting. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10415}.
<a id="trace-10415"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 10415): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: None.
<a id="trace-10421"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 10421): MoveTactically. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: None.
<a id="trace-10422"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 10422): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: None.
<a id="trace-10516"></a>
<a id="trace-10518"></a>
<a id="trace-10534"></a>
<a id="trace-10536"></a>
<a id="trace-10567"></a>
<a id="trace-10569"></a>
- 86.25s–87.25s (×6), actor 5, squad 0 (trace 10516): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9410. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05738634275412542, 'next_transition': 10534}.
<a id="trace-10599"></a>
- 87.65s–87.65s (×1), actor 1, squad 0 (trace 10599): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: None.
<a id="trace-10600"></a>
- 87.65s–87.65s (×1), actor 1, squad 0 (trace 10600): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 9406. Next observer evidence: None.
<a id="trace-10696"></a>
<a id="trace-10698"></a>
<a id="trace-10719"></a>
<a id="trace-10721"></a>
<a id="trace-10754"></a>
<a id="trace-10756"></a>
<a id="trace-10804"></a>
<a id="trace-10806"></a>
<a id="trace-10815"></a>
<a id="trace-10817"></a>
<a id="trace-10907"></a>
<a id="trace-10909"></a>
<a id="trace-10922"></a>
<a id="trace-10924"></a>
<a id="trace-10937"></a>
<a id="trace-10939"></a>
<a id="trace-10949"></a>
<a id="trace-10951"></a>
- 87.75s–91.75s (×18), actor 5, squad 0 (trace 10696): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9410. Next observer evidence: {'until': 88.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11541484716854576, 'next_transition': 10719}.
<a id="trace-10955"></a>
- 91.85s–91.85s (×1), actor 1, squad 0 (trace 10955): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11607}.
<a id="trace-10957"></a>
- 91.85s–91.85s (×1), actor 1, squad 0 (trace 10957): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11607}.
<a id="trace-11500"></a>
- 91.85s–91.85s (×1), actor 1, squad 0 (trace 11500): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11607}.
<a id="trace-11501"></a>
- 91.85s–91.85s (×1), actor 1, squad 0 (trace 11501): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11607}.
<a id="trace-11579"></a>
- 91.85s–91.85s (×1), actor 1, squad 0 (trace 11579): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11607}.
<a id="trace-11580"></a>
- 91.85s–91.85s (×1), actor 1, squad 0 (trace 11580): Assaulting. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11607}.
<a id="trace-1481"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (events line 1481): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11593"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (trace 11593): renew committed intent (75 s lifetime). Knowledge: actor memory at 92.15s, trace 11593. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11758}.
<a id="trace-11607"></a>
<a id="trace-11609"></a>
<a id="trace-11626"></a>
<a id="trace-11628"></a>
- 92.25s–92.75s (×4), actor 5, squad 0 (trace 11607): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.15s, trace 11593. Next observer evidence: {'until': 92.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11626}.
<a id="trace-11637"></a>
- 92.85s–92.85s (×1), actor 1, squad 0 (trace 11637): Reorganise: completed/failed drill. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15480069625561935, 'next_transition': 11747}.
<a id="trace-11643"></a>
- 92.85s–92.85s (×1), actor 1, squad 0 (trace 11643): MoveTactically. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15480069625561935, 'next_transition': 11747}.
<a id="trace-11644"></a>
- 92.85s–92.85s (×1), actor 1, squad 0 (trace 11644): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15480069625561935, 'next_transition': 11747}.
<a id="trace-11747"></a>
<a id="trace-11749"></a>
<a id="trace-11796"></a>
<a id="trace-11798"></a>
- 93.25s–93.75s (×4), actor 5, squad 0 (trace 11747): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.15s, trace 11593. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00044245142705872964, 'next_transition': 11796}.
<a id="trace-11758"></a>
- 93.35s–93.35s (×1), actor 9, squad 1 (trace 11758): MoveTactically. Knowledge: actor memory at 90.00s, trace 10832. Next observer evidence: {'until': 93.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11768}.
<a id="trace-11759"></a>
- 93.35s–93.35s (×1), actor 9, squad 1 (trace 11759): received platoon directive. Knowledge: actor memory at 90.00s, trace 10832. Next observer evidence: {'until': 93.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11768}.
<a id="trace-11768"></a>
- 93.40s–93.40s (×1), actor 9, squad 1 (trace 11768): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 10832. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13696}.
<a id="trace-11810"></a>
- 93.85s–93.85s (×1), actor 1, squad 0 (trace 11810): ReactToContact: cover and return fire. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 94.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00033068882962839185, 'next_transition': 11946}.
<a id="trace-11811"></a>
- 93.85s–93.85s (×1), actor 1, squad 0 (trace 11811): new contact inside 100 m. Knowledge: actor memory at 90.00s, trace 10825. Next observer evidence: {'until': 94.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00033068882962839185, 'next_transition': 11946}.
<a id="trace-11946"></a>
<a id="trace-11948"></a>
<a id="trace-11976"></a>
<a id="trace-11978"></a>
<a id="trace-12088"></a>
<a id="trace-12090"></a>
<a id="trace-12136"></a>
<a id="trace-12138"></a>
<a id="trace-12165"></a>
<a id="trace-12167"></a>
<a id="trace-12188"></a>
<a id="trace-12190"></a>
- 94.25s–97.25s (×12), actor 5, squad 0 (trace 11946): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.15s, trace 11593. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1718000154486701, 'next_transition': 11976}.
<a id="trace-12196"></a>
- 97.55s–97.55s (×1), actor 5, squad 0 (trace 12196): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 97.55s, trace 12196. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.012885714285713692, 'next_transition': 12201}.
<a id="trace-12201"></a>
<a id="trace-12203"></a>
- 97.75s–97.75s (×2), actor 5, squad 0 (trace 12201): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 97.55s, trace 12196. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15215714285714302, 'next_transition': 12214}.
<a id="trace-12214"></a>
- 98.20s–98.20s (×1), actor 1, squad 0 (trace 12214): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: None.
<a id="trace-12216"></a>
- 98.20s–98.20s (×1), actor 1, squad 0 (trace 12216): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: None.
<a id="trace-12759"></a>
- 98.20s–98.20s (×1), actor 1, squad 0 (trace 12759): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: None.
<a id="trace-12760"></a>
- 98.20s–98.20s (×1), actor 1, squad 0 (trace 12760): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: None.
<a id="trace-12838"></a>
- 98.20s–98.20s (×1), actor 1, squad 0 (trace 12838): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: None.
<a id="trace-12839"></a>
- 98.20s–98.20s (×1), actor 1, squad 0 (trace 12839): Assaulting. Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: None.
<a id="trace-12851"></a>
<a id="trace-12853"></a>
<a id="trace-12869"></a>
<a id="trace-12871"></a>
- 98.25s–98.75s (×4), actor 5, squad 0 (trace 12851): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 97.55s, trace 12196. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08848571428571413, 'next_transition': 12869}.
<a id="trace-12881"></a>
- 99.05s–99.05s (×1), actor 1, squad 0 (trace 12881): Reorganise: completed/failed drill. Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12986}.
<a id="trace-12887"></a>
- 99.05s–99.05s (×1), actor 1, squad 0 (trace 12887): MoveTactically. Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12986}.
<a id="trace-12888"></a>
- 99.05s–99.05s (×1), actor 1, squad 0 (trace 12888): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12986}.
<a id="trace-12986"></a>
<a id="trace-12988"></a>
- 99.25s–99.25s (×2), actor 5, squad 0 (trace 12986): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 97.55s, trace 12196. Next observer evidence: {'until': 99.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13004}.
<a id="trace-13004"></a>
- 99.55s–99.55s (×1), actor 1, squad 0 (trace 13004): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 11994. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13167}.
<a id="trace-13167"></a>
<a id="trace-13169"></a>
<a id="trace-13269"></a>
<a id="trace-13271"></a>
<a id="trace-13295"></a>
<a id="trace-13297"></a>
<a id="trace-13328"></a>
<a id="trace-13330"></a>
<a id="trace-13352"></a>
<a id="trace-13354"></a>
<a id="trace-13377"></a>
<a id="trace-13379"></a>
<a id="trace-13396"></a>
<a id="trace-13398"></a>
- 99.75s–102.75s (×14), actor 5, squad 0 (trace 13167): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 97.55s, trace 12196. Next observer evidence: {'until': 100.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13269}.
<a id="trace-13404"></a>
- 103.05s–103.05s (×1), actor 5, squad 0 (trace 13404): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 103.05s, trace 13404. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999711219856824, 'next_transition': 13412}.
<a id="trace-13412"></a>
<a id="trace-13414"></a>
<a id="trace-13424"></a>
<a id="trace-13426"></a>
<a id="trace-13446"></a>
<a id="trace-13448"></a>
<a id="trace-13462"></a>
<a id="trace-13464"></a>
- 103.25s–104.75s (×8), actor 5, squad 0 (trace 13412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 103.05s, trace 13404. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18001147015608482, 'next_transition': 13424}.
<a id="trace-13495"></a>
- 105.05s–105.05s (×1), actor 5, squad 0 (trace 13495): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 105.05s, trace 13495. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4243365861702509, 'next_transition': 13550}.
<a id="trace-13550"></a>
<a id="trace-13552"></a>
<a id="trace-13567"></a>
<a id="trace-13569"></a>
<a id="trace-13590"></a>
<a id="trace-13592"></a>
<a id="trace-13603"></a>
<a id="trace-13605"></a>
<a id="trace-13621"></a>
<a id="trace-13623"></a>
<a id="trace-13631"></a>
<a id="trace-13633"></a>
- 105.25s–107.75s (×12), actor 5, squad 0 (trace 13550): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.05s, trace 13495. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7630930140561463, 'next_transition': 13567}.
<a id="trace-13639"></a>
- 108.05s–108.05s (×1), actor 1, squad 0 (trace 13639): NeedSupport. Knowledge: actor memory at 105.00s, trace 13477. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1799939942307262, 'next_transition': 13656}.
<a id="trace-13656"></a>
<a id="trace-13658"></a>
<a id="trace-13669"></a>
<a id="trace-13671"></a>
<a id="trace-13689"></a>
<a id="trace-13691"></a>
<a id="trace-13707"></a>
<a id="trace-13709"></a>
<a id="trace-13793"></a>
<a id="trace-13795"></a>
<a id="trace-13810"></a>
<a id="trace-13812"></a>
<a id="trace-13828"></a>
<a id="trace-13830"></a>
- 108.25s–111.25s (×14), actor 5, squad 0 (trace 13656): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.05s, trace 13495. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36000836185260326, 'next_transition': 13669}.
<a id="trace-13696"></a>
- 109.25s–109.25s (×1), actor 9, squad 1 (trace 13696): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 105.00s, trace 13484. Next observer evidence: None.
<a id="trace-13697"></a>
- 109.25s–109.25s (×1), actor 9, squad 1 (trace 13697): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 105.00s, trace 13484. Next observer evidence: None.
<a id="trace-13699"></a>
- 109.30s–109.30s (×1), actor 9, squad 1 (trace 13699): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 105.00s, trace 13484. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1663}.
<a id="trace-13835"></a>
- 111.30s–111.30s (×1), actor 1, squad 0 (trace 13835): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 110.00s, trace 13717. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36000189142738204, 'next_transition': 13931}.
<a id="trace-13931"></a>
<a id="trace-13933"></a>
<a id="trace-13959"></a>
<a id="trace-13961"></a>
<a id="trace-13976"></a>
<a id="trace-13978"></a>
<a id="trace-13998"></a>
<a id="trace-14000"></a>
<a id="trace-14013"></a>
<a id="trace-14015"></a>
<a id="trace-14042"></a>
<a id="trace-14044"></a>
<a id="trace-14055"></a>
<a id="trace-14057"></a>
<a id="trace-14135"></a>
<a id="trace-14137"></a>
<a id="trace-14147"></a>
<a id="trace-14149"></a>
<a id="trace-14166"></a>
<a id="trace-14168"></a>
<a id="trace-14181"></a>
<a id="trace-14183"></a>
<a id="trace-14201"></a>
<a id="trace-14203"></a>
- 111.75s–117.25s (×24), actor 5, squad 0 (trace 13931): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 13721. Next observer evidence: {'until': 112.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5283729456213776, 'next_transition': 13959}.
<a id="trace-1663"></a>
- 113.75s–113.75s (×1), actor 5, squad 1 (events line 1663): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14063}.
<a id="trace-14020"></a>
- 113.75s–113.75s (×1), actor 5, squad 1 (trace 14020): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.514694 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 113.75s, trace 14020. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14063}.
<a id="trace-14021"></a>
- 113.75s–113.75s (×1), actor 5, squad 1 (trace 14021): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.514694 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 113.75s, trace 14021. Next observer evidence: {'until': 114.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14063}.
<a id="trace-14063"></a>
- 114.95s–114.95s (×1), actor 9, squad 1 (trace 14063): MoveTactically. Knowledge: actor memory at 110.00s, trace 13724. Next observer evidence: {'until': 144.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1979}.
<a id="trace-14064"></a>
- 114.95s–114.95s (×1), actor 9, squad 1 (trace 14064): received platoon directive. Knowledge: actor memory at 110.00s, trace 13724. Next observer evidence: {'until': 144.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1979}.
<a id="trace-14210"></a>
- 117.45s–117.45s (×1), actor 1, squad 0 (trace 14210): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 14065. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09029894524030878, 'next_transition': 14427}.
<a id="trace-14427"></a>
<a id="trace-14429"></a>
<a id="trace-14441"></a>
<a id="trace-14443"></a>
<a id="trace-14457"></a>
<a id="trace-14459"></a>
<a id="trace-14480"></a>
<a id="trace-14482"></a>
<a id="trace-14495"></a>
<a id="trace-14497"></a>
<a id="trace-14586"></a>
<a id="trace-14588"></a>
<a id="trace-14601"></a>
<a id="trace-14603"></a>
<a id="trace-14628"></a>
<a id="trace-14630"></a>
<a id="trace-14638"></a>
<a id="trace-14640"></a>
<a id="trace-14652"></a>
<a id="trace-14654"></a>
- 117.75s–122.25s (×20), actor 5, squad 0 (trace 14427): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 14069. Next observer evidence: {'until': 118.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16155764031731185, 'next_transition': 14441}.
<a id="trace-14661"></a>
- 122.60s–122.60s (×1), actor 1, squad 0 (trace 14661): ReactToContact: cover and return fire. Knowledge: actor memory at 120.00s, trace 14506. Next observer evidence: None.
<a id="trace-14662"></a>
- 122.60s–122.60s (×1), actor 1, squad 0 (trace 14662): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 120.00s, trace 14506. Next observer evidence: None.
<a id="trace-14963"></a>
<a id="trace-14965"></a>
<a id="trace-14977"></a>
<a id="trace-14979"></a>
<a id="trace-15012"></a>
<a id="trace-15014"></a>
<a id="trace-15040"></a>
<a id="trace-15042"></a>
<a id="trace-15056"></a>
<a id="trace-15058"></a>
<a id="trace-15158"></a>
<a id="trace-15160"></a>
<a id="trace-15169"></a>
<a id="trace-15171"></a>
<a id="trace-15181"></a>
<a id="trace-15183"></a>
<a id="trace-15191"></a>
<a id="trace-15193"></a>
<a id="trace-15205"></a>
<a id="trace-15207"></a>
<a id="trace-15216"></a>
<a id="trace-15218"></a>
<a id="trace-15234"></a>
<a id="trace-15236"></a>
- 122.75s–128.30s (×24), actor 5, squad 0 (trace 14963): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 14510. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1816740324912524, 'next_transition': 14977}.
<a id="trace-15241"></a>
- 128.35s–128.35s (×1), actor 2, squad 0 (trace 15241): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 125.00s, trace 15072. Next observer evidence: {'until': 128.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6824989618092764, 'next_transition': 15256}.
<a id="trace-15256"></a>
<a id="trace-15258"></a>
<a id="trace-15270"></a>
<a id="trace-15272"></a>
<a id="trace-15289"></a>
<a id="trace-15291"></a>
<a id="trace-15370"></a>
<a id="trace-15372"></a>
- 128.80s–130.30s (×8), actor 5, squad 0 (trace 15256): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 15075. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6274113891757382, 'next_transition': 15270}.
<a id="trace-15380"></a>
- 130.40s–130.40s (×1), actor 2, squad 0 (trace 15380): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 130.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500442980073639, 'next_transition': 15755}.
<a id="trace-15652"></a>
- 130.40s–130.40s (×1), actor 2, squad 0 (trace 15652): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 130.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500442980073639, 'next_transition': 15755}.
<a id="trace-15653"></a>
- 130.40s–130.40s (×1), actor 2, squad 0 (trace 15653): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 130.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500442980073639, 'next_transition': 15755}.
<a id="trace-15736"></a>
- 130.40s–130.40s (×1), actor 2, squad 0 (trace 15736): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 130.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500442980073639, 'next_transition': 15755}.
<a id="trace-15737"></a>
- 130.40s–130.40s (×1), actor 2, squad 0 (trace 15737): Assaulting. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 130.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500442980073639, 'next_transition': 15755}.
<a id="trace-15755"></a>
- 130.75s–130.75s (×1), actor 2, squad 0 (trace 15755): Reorganise: completed/failed drill. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10498807604252547, 'next_transition': 15956}.
<a id="trace-15760"></a>
- 130.75s–130.75s (×1), actor 2, squad 0 (trace 15760): MoveTactically. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10498807604252547, 'next_transition': 15956}.
<a id="trace-15761"></a>
- 130.75s–130.75s (×1), actor 2, squad 0 (trace 15761): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10498807604252547, 'next_transition': 15956}.
<a id="trace-15956"></a>
<a id="trace-15958"></a>
<a id="trace-15982"></a>
<a id="trace-15984"></a>
<a id="trace-16007"></a>
<a id="trace-16009"></a>
- 130.80s–131.80s (×6), actor 5, squad 0 (trace 15956): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 15305. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2100120743883286, 'next_transition': 15982}.
<a id="trace-16031"></a>
- 132.10s–132.10s (×1), actor 5, squad 0 (trace 16031): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 132.10s, trace 16031. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20331479916941148, 'next_transition': 16051}.
<a id="trace-16051"></a>
<a id="trace-16053"></a>
<a id="trace-16072"></a>
<a id="trace-16074"></a>
<a id="trace-16103"></a>
<a id="trace-16105"></a>
- 132.30s–133.30s (×6), actor 5, squad 0 (trace 16051): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 132.10s, trace 16031. Next observer evidence: {'until': 132.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7641748797407495, 'next_transition': 16072}.
<a id="trace-16114"></a>
- 133.70s–133.70s (×1), actor 2, squad 0 (trace 16114): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25189534769031174, 'next_transition': 16116}.
<a id="trace-16116"></a>
<a id="trace-16118"></a>
<a id="trace-16139"></a>
<a id="trace-16141"></a>
- 133.80s–134.30s (×4), actor 5, squad 0 (trace 16116): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 132.10s, trace 16031. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.5039813273763896, 'next_transition': 16139}.
<a id="trace-16147"></a>
- 134.45s–134.45s (×1), actor 2, squad 0 (trace 16147): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299922360324843, 'next_transition': 16175}.
<a id="trace-16148"></a>
- 134.45s–134.45s (×1), actor 2, squad 0 (trace 16148): rearward bound: one stationary suppressing element. Knowledge: actor memory at 130.00s, trace 15302. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299922360324843, 'next_transition': 16175}.
<a id="trace-16175"></a>
<a id="trace-16177"></a>
<a id="trace-16254"></a>
<a id="trace-16256"></a>
<a id="trace-16272"></a>
<a id="trace-16274"></a>
<a id="trace-16296"></a>
<a id="trace-16298"></a>
<a id="trace-16319"></a>
<a id="trace-16321"></a>
<a id="trace-16338"></a>
<a id="trace-16340"></a>
<a id="trace-16349"></a>
<a id="trace-16351"></a>
<a id="trace-16370"></a>
<a id="trace-16372"></a>
<a id="trace-16378"></a>
<a id="trace-16380"></a>
<a id="trace-16393"></a>
<a id="trace-16395"></a>
<a id="trace-16402"></a>
<a id="trace-16404"></a>
- 134.80s–139.80s (×22), actor 5, squad 0 (trace 16175): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 132.10s, trace 16031. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299922360324837, 'next_transition': 16254}.
<a id="trace-1898"></a>
- 140.15s–140.15s (×1), actor 5, squad 0 (events line 1898): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16428"></a>
- 140.15s–140.15s (×1), actor 5, squad 0 (trace 16428): renew committed intent (75 s lifetime). Knowledge: actor memory at 140.15s, trace 16428. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149907376755132, 'next_transition': 16479}.
<a id="trace-16479"></a>
<a id="trace-16481"></a>
<a id="trace-16492"></a>
<a id="trace-16494"></a>
<a id="trace-16505"></a>
<a id="trace-16507"></a>
<a id="trace-16515"></a>
<a id="trace-16517"></a>
<a id="trace-16531"></a>
<a id="trace-16533"></a>
<a id="trace-16539"></a>
<a id="trace-16541"></a>
<a id="trace-16553"></a>
<a id="trace-16555"></a>
<a id="trace-16561"></a>
<a id="trace-16563"></a>
<a id="trace-16577"></a>
<a id="trace-16579"></a>
<a id="trace-16586"></a>
<a id="trace-16588"></a>
<a id="trace-16660"></a>
<a id="trace-16662"></a>
<a id="trace-16670"></a>
<a id="trace-16672"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16709"></a>
<a id="trace-16711"></a>
<a id="trace-16718"></a>
<a id="trace-16720"></a>
<a id="trace-16731"></a>
<a id="trace-16733"></a>
<a id="trace-16739"></a>
<a id="trace-16741"></a>
<a id="trace-16755"></a>
<a id="trace-16757"></a>
<a id="trace-16764"></a>
<a id="trace-16766"></a>
<a id="trace-16837"></a>
<a id="trace-16839"></a>
<a id="trace-16849"></a>
<a id="trace-16851"></a>
<a id="trace-16862"></a>
<a id="trace-16864"></a>
<a id="trace-16873"></a>
<a id="trace-16875"></a>
<a id="trace-16888"></a>
<a id="trace-16890"></a>
<a id="trace-16895"></a>
<a id="trace-16897"></a>
<a id="trace-16916"></a>
<a id="trace-16918"></a>
<a id="trace-16924"></a>
<a id="trace-16926"></a>
<a id="trace-16939"></a>
<a id="trace-16941"></a>
<a id="trace-16948"></a>
<a id="trace-16950"></a>
<a id="trace-17019"></a>
<a id="trace-17021"></a>
- 140.30s–155.30s (×60), actor 5, squad 0 (trace 16479): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.15s, trace 16428. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5233994376774318, 'next_transition': 16492}.
<a id="trace-17028"></a>
- 155.55s–155.55s (×1), actor 2, squad 0 (trace 17028): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 155.00s, trace 16954. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17035}.
<a id="trace-17035"></a>
<a id="trace-17037"></a>
<a id="trace-17062"></a>
<a id="trace-17064"></a>
<a id="trace-17077"></a>
<a id="trace-17079"></a>
<a id="trace-17095"></a>
<a id="trace-17097"></a>
<a id="trace-17103"></a>
<a id="trace-17105"></a>
<a id="trace-17119"></a>
<a id="trace-17121"></a>
<a id="trace-17129"></a>
<a id="trace-17131"></a>
<a id="trace-17144"></a>
<a id="trace-17146"></a>
<a id="trace-17160"></a>
<a id="trace-17162"></a>
<a id="trace-17229"></a>
<a id="trace-17231"></a>
<a id="trace-17240"></a>
<a id="trace-17242"></a>
<a id="trace-17257"></a>
<a id="trace-17259"></a>
<a id="trace-17267"></a>
<a id="trace-17269"></a>
<a id="trace-17284"></a>
<a id="trace-17286"></a>
<a id="trace-17298"></a>
<a id="trace-17300"></a>
<a id="trace-17308"></a>
<a id="trace-17310"></a>
<a id="trace-17316"></a>
<a id="trace-17318"></a>
<a id="trace-17330"></a>
<a id="trace-17332"></a>
<a id="trace-17341"></a>
<a id="trace-17343"></a>
<a id="trace-17412"></a>
<a id="trace-17414"></a>
<a id="trace-17424"></a>
<a id="trace-17426"></a>
<a id="trace-17445"></a>
<a id="trace-17447"></a>
<a id="trace-17458"></a>
<a id="trace-17460"></a>
<a id="trace-17471"></a>
<a id="trace-17473"></a>
<a id="trace-17482"></a>
<a id="trace-17484"></a>
<a id="trace-17494"></a>
<a id="trace-17496"></a>
<a id="trace-17504"></a>
<a id="trace-17506"></a>
<a id="trace-17523"></a>
<a id="trace-17525"></a>
<a id="trace-17532"></a>
<a id="trace-17534"></a>
<a id="trace-17603"></a>
<a id="trace-17605"></a>
<a id="trace-17614"></a>
<a id="trace-17616"></a>
<a id="trace-17628"></a>
<a id="trace-17630"></a>
<a id="trace-17641"></a>
<a id="trace-17643"></a>
<a id="trace-17659"></a>
<a id="trace-17661"></a>
<a id="trace-17665"></a>
<a id="trace-17667"></a>
<a id="trace-17681"></a>
<a id="trace-17683"></a>
<a id="trace-17694"></a>
<a id="trace-17696"></a>
<a id="trace-17713"></a>
<a id="trace-17715"></a>
<a id="trace-17722"></a>
<a id="trace-17724"></a>
<a id="trace-17795"></a>
<a id="trace-17797"></a>
<a id="trace-17806"></a>
<a id="trace-17808"></a>
<a id="trace-17825"></a>
<a id="trace-17827"></a>
<a id="trace-17838"></a>
<a id="trace-17840"></a>
- 155.80s–176.80s (×86), actor 5, squad 0 (trace 17035): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 16956. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17062}.
<a id="trace-1979"></a>
- 173.75s–173.75s (×1), actor 5, squad 1 (events line 1979): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 177, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1993}.
<a id="trace-17692"></a>
- 173.75s–173.75s (×1), actor 5, squad 1 (trace 17692): renew committed intent (75 s lifetime). Knowledge: actor memory at 173.75s, trace 17692. Next observer evidence: {'until': 177, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1993}.
<a id="trace-1992"></a>
- 177.10s–177.10s (×1), actor 5, squad 0 (events line 1992): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1993"></a>
- 177.10s–177.10s (×1), actor 5, squad 1 (events line 1993): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17848"></a>
- 177.10s–177.10s (×1), actor 5, squad 0 (trace 17848): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339974 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.10s, trace 17848. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17861}.
<a id="trace-17849"></a>
- 177.10s–177.10s (×1), actor 5, squad 0 (trace 17849): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339974 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.10s, trace 17849. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17861}.
<a id="trace-17850"></a>
- 177.10s–177.10s (×1), actor 5, squad 1 (trace 17850): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339974 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.10s, trace 17850. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17887}.
<a id="trace-17851"></a>
- 177.10s–177.10s (×1), actor 5, squad 1 (trace 17851): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339974 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.10s, trace 17851. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17887}.
<a id="trace-17861"></a>
<a id="trace-17863"></a>
<a id="trace-17869"></a>
<a id="trace-17871"></a>
<a id="trace-17880"></a>
<a id="trace-17882"></a>
<a id="trace-17946"></a>
<a id="trace-17948"></a>
- 177.30s–178.80s (×8), actor 5, squad 0 (trace 17861): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.10s, trace 17851. Next observer evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17869}.
<a id="trace-17887"></a>
- 178.30s–178.30s (×1), actor 9, squad 1 (trace 17887): Withdraw to received rally. Knowledge: actor memory at 175.00s, trace 17733. Next observer evidence: {'until': 189.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 18430}.
<a id="trace-17888"></a>
- 178.30s–178.30s (×1), actor 9, squad 1 (trace 17888): rearward bound: one stationary suppressing element. Knowledge: actor memory at 175.00s, trace 17733. Next observer evidence: {'until': 189.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 18430}.
<a id="trace-17954"></a>
- 178.85s–178.85s (×1), actor 2, squad 0 (trace 17954): Withdraw to received rally. Knowledge: actor memory at 175.00s, trace 17729. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17993}.
<a id="trace-17955"></a>
- 178.85s–178.85s (×1), actor 2, squad 0 (trace 17955): rearward bound: one stationary suppressing element. Knowledge: actor memory at 175.00s, trace 17729. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17993}.
<a id="trace-17993"></a>
<a id="trace-17995"></a>
<a id="trace-18008"></a>
<a id="trace-18010"></a>
<a id="trace-18085"></a>
<a id="trace-18087"></a>
<a id="trace-18114"></a>
<a id="trace-18116"></a>
<a id="trace-18133"></a>
<a id="trace-18135"></a>
<a id="trace-18144"></a>
<a id="trace-18146"></a>
<a id="trace-18166"></a>
<a id="trace-18168"></a>
<a id="trace-18180"></a>
<a id="trace-18182"></a>
<a id="trace-18192"></a>
<a id="trace-18194"></a>
<a id="trace-18207"></a>
<a id="trace-18209"></a>
<a id="trace-18222"></a>
<a id="trace-18224"></a>
<a id="trace-18233"></a>
<a id="trace-18235"></a>
<a id="trace-18305"></a>
<a id="trace-18307"></a>
<a id="trace-18319"></a>
<a id="trace-18321"></a>
<a id="trace-18333"></a>
<a id="trace-18335"></a>
<a id="trace-18344"></a>
<a id="trace-18346"></a>
<a id="trace-18363"></a>
<a id="trace-18365"></a>
<a id="trace-18374"></a>
<a id="trace-18376"></a>
<a id="trace-18390"></a>
<a id="trace-18392"></a>
<a id="trace-18405"></a>
<a id="trace-18407"></a>
<a id="trace-18422"></a>
<a id="trace-18424"></a>
<a id="trace-18435"></a>
<a id="trace-18437"></a>
<a id="trace-18514"></a>
<a id="trace-18516"></a>
<a id="trace-18527"></a>
<a id="trace-18529"></a>
<a id="trace-18542"></a>
<a id="trace-18544"></a>
<a id="trace-18551"></a>
<a id="trace-18553"></a>
<a id="trace-18564"></a>
<a id="trace-18566"></a>
<a id="trace-18575"></a>
<a id="trace-18577"></a>
<a id="trace-18586"></a>
<a id="trace-18588"></a>
<a id="trace-18595"></a>
<a id="trace-18597"></a>
<a id="trace-18611"></a>
<a id="trace-18613"></a>
<a id="trace-18622"></a>
<a id="trace-18624"></a>
<a id="trace-18700"></a>
<a id="trace-18702"></a>
<a id="trace-18716"></a>
<a id="trace-18718"></a>
<a id="trace-18729"></a>
<a id="trace-18731"></a>
<a id="trace-18736"></a>
<a id="trace-18738"></a>
<a id="trace-18749"></a>
<a id="trace-18751"></a>
<a id="trace-18760"></a>
<a id="trace-18762"></a>
<a id="trace-18772"></a>
<a id="trace-18774"></a>
<a id="trace-18781"></a>
<a id="trace-18783"></a>
<a id="trace-18798"></a>
<a id="trace-18800"></a>
<a id="trace-18806"></a>
<a id="trace-18808"></a>
<a id="trace-18880"></a>
<a id="trace-18882"></a>
<a id="trace-18895"></a>
<a id="trace-18897"></a>
<a id="trace-18908"></a>
<a id="trace-18910"></a>
<a id="trace-18922"></a>
<a id="trace-18924"></a>
<a id="trace-18942"></a>
<a id="trace-18944"></a>
<a id="trace-18950"></a>
<a id="trace-18952"></a>
<a id="trace-18963"></a>
<a id="trace-18965"></a>
<a id="trace-18969"></a>
<a id="trace-18971"></a>
<a id="trace-18987"></a>
<a id="trace-18989"></a>
<a id="trace-18997"></a>
<a id="trace-18999"></a>
<a id="trace-19069"></a>
<a id="trace-19071"></a>
<a id="trace-19079"></a>
<a id="trace-19081"></a>
<a id="trace-19094"></a>
<a id="trace-19096"></a>
<a id="trace-19104"></a>
<a id="trace-19106"></a>
<a id="trace-19120"></a>
<a id="trace-19122"></a>
<a id="trace-19126"></a>
<a id="trace-19128"></a>
<a id="trace-19144"></a>
<a id="trace-19146"></a>
<a id="trace-19153"></a>
<a id="trace-19155"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
<a id="trace-19185"></a>
<a id="trace-19187"></a>
<a id="trace-19259"></a>
<a id="trace-19261"></a>
<a id="trace-19271"></a>
<a id="trace-19273"></a>
<a id="trace-19286"></a>
<a id="trace-19288"></a>
<a id="trace-19296"></a>
<a id="trace-19298"></a>
<a id="trace-19311"></a>
<a id="trace-19313"></a>
<a id="trace-19321"></a>
<a id="trace-19323"></a>
<a id="trace-19333"></a>
<a id="trace-19335"></a>
<a id="trace-19342"></a>
<a id="trace-19344"></a>
<a id="trace-19360"></a>
<a id="trace-19362"></a>
<a id="trace-19368"></a>
<a id="trace-19370"></a>
<a id="trace-19445"></a>
<a id="trace-19447"></a>
<a id="trace-19463"></a>
<a id="trace-19465"></a>
<a id="trace-19478"></a>
<a id="trace-19480"></a>
<a id="trace-19490"></a>
<a id="trace-19492"></a>
<a id="trace-19505"></a>
<a id="trace-19507"></a>
<a id="trace-19514"></a>
<a id="trace-19516"></a>
<a id="trace-19527"></a>
<a id="trace-19529"></a>
<a id="trace-19538"></a>
<a id="trace-19540"></a>
<a id="trace-19557"></a>
<a id="trace-19559"></a>
<a id="trace-19563"></a>
<a id="trace-19565"></a>
<a id="trace-19636"></a>
<a id="trace-19638"></a>
<a id="trace-19650"></a>
<a id="trace-19652"></a>
<a id="trace-19664"></a>
<a id="trace-19666"></a>
<a id="trace-19673"></a>
<a id="trace-19675"></a>
<a id="trace-19692"></a>
<a id="trace-19694"></a>
<a id="trace-19704"></a>
<a id="trace-19706"></a>
<a id="trace-19716"></a>
<a id="trace-19718"></a>
<a id="trace-19725"></a>
<a id="trace-19727"></a>
<a id="trace-19745"></a>
<a id="trace-19747"></a>
<a id="trace-19753"></a>
<a id="trace-19755"></a>
<a id="trace-19828"></a>
<a id="trace-19830"></a>
<a id="trace-19846"></a>
<a id="trace-19848"></a>
<a id="trace-19857"></a>
<a id="trace-19859"></a>
<a id="trace-19866"></a>
<a id="trace-19868"></a>
<a id="trace-19882"></a>
<a id="trace-19884"></a>
<a id="trace-19891"></a>
<a id="trace-19893"></a>
<a id="trace-19905"></a>
<a id="trace-19907"></a>
<a id="trace-19915"></a>
<a id="trace-19917"></a>
<a id="trace-19932"></a>
<a id="trace-19934"></a>
<a id="trace-19939"></a>
<a id="trace-19941"></a>
<a id="trace-20013"></a>
<a id="trace-20015"></a>
<a id="trace-20028"></a>
<a id="trace-20030"></a>
<a id="trace-20043"></a>
<a id="trace-20045"></a>
<a id="trace-20054"></a>
<a id="trace-20056"></a>
<a id="trace-20073"></a>
<a id="trace-20075"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
<a id="trace-20094"></a>
<a id="trace-20096"></a>
<a id="trace-20104"></a>
<a id="trace-20106"></a>
<a id="trace-20119"></a>
<a id="trace-20121"></a>
<a id="trace-20130"></a>
<a id="trace-20132"></a>
<a id="trace-20208"></a>
<a id="trace-20210"></a>
<a id="trace-20230"></a>
<a id="trace-20232"></a>
<a id="trace-20242"></a>
<a id="trace-20244"></a>
<a id="trace-20258"></a>
<a id="trace-20260"></a>
- 179.30s–237.30s (×232), actor 5, squad 0 (trace 17993): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.10s, trace 17851. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18008}.
<a id="trace-18430"></a>
- 189.50s–189.50s (×1), actor 9, squad 1 (trace 18430): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 185.00s, trace 18244. Next observer evidence: {'until': 219.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2179}.
<a id="trace-18431"></a>
- 189.50s–189.50s (×1), actor 9, squad 1 (trace 18431): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 185.00s, trace 18244. Next observer evidence: {'until': 219.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2179}.
<a id="trace-2178"></a>
- 237.60s–237.60s (×1), actor 5, squad 0 (events line 2178): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2179"></a>
- 237.60s–237.60s (×1), actor 5, squad 1 (events line 2179): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20265"></a>
- 237.60s–237.60s (×1), actor 5, squad 0 (trace 20265): renew committed intent (75 s lifetime). Knowledge: actor memory at 237.60s, trace 20265. Next observer evidence: {'until': 237.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20271}.
<a id="trace-20266"></a>
- 237.60s–237.60s (×1), actor 5, squad 1 (trace 20266): renew committed intent (75 s lifetime). Knowledge: actor memory at 237.60s, trace 20266. Next observer evidence: {'until': 267.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2351}.
<a id="trace-20271"></a>
<a id="trace-20273"></a>
<a id="trace-20287"></a>
<a id="trace-20289"></a>
<a id="trace-20296"></a>
<a id="trace-20298"></a>
<a id="trace-20314"></a>
<a id="trace-20316"></a>
<a id="trace-20324"></a>
<a id="trace-20326"></a>
<a id="trace-20400"></a>
<a id="trace-20402"></a>
<a id="trace-20412"></a>
<a id="trace-20414"></a>
<a id="trace-20428"></a>
<a id="trace-20430"></a>
<a id="trace-20437"></a>
<a id="trace-20439"></a>
<a id="trace-20456"></a>
<a id="trace-20458"></a>
<a id="trace-20462"></a>
<a id="trace-20464"></a>
<a id="trace-20474"></a>
<a id="trace-20476"></a>
<a id="trace-20487"></a>
<a id="trace-20489"></a>
<a id="trace-20503"></a>
<a id="trace-20505"></a>
<a id="trace-20511"></a>
<a id="trace-20513"></a>
<a id="trace-20587"></a>
<a id="trace-20589"></a>
<a id="trace-20601"></a>
<a id="trace-20603"></a>
<a id="trace-20616"></a>
<a id="trace-20618"></a>
<a id="trace-20629"></a>
<a id="trace-20631"></a>
<a id="trace-20645"></a>
<a id="trace-20647"></a>
<a id="trace-20653"></a>
<a id="trace-20655"></a>
<a id="trace-20667"></a>
<a id="trace-20669"></a>
<a id="trace-20680"></a>
<a id="trace-20682"></a>
<a id="trace-20695"></a>
<a id="trace-20697"></a>
<a id="trace-20703"></a>
<a id="trace-20705"></a>
<a id="trace-20779"></a>
<a id="trace-20781"></a>
<a id="trace-20793"></a>
<a id="trace-20795"></a>
<a id="trace-20808"></a>
<a id="trace-20810"></a>
<a id="trace-20819"></a>
<a id="trace-20821"></a>
<a id="trace-20837"></a>
<a id="trace-20839"></a>
<a id="trace-20846"></a>
<a id="trace-20848"></a>
<a id="trace-20862"></a>
<a id="trace-20864"></a>
<a id="trace-20871"></a>
<a id="trace-20873"></a>
<a id="trace-20886"></a>
<a id="trace-20888"></a>
<a id="trace-20896"></a>
<a id="trace-20898"></a>
<a id="trace-20973"></a>
<a id="trace-20975"></a>
<a id="trace-20986"></a>
<a id="trace-20988"></a>
<a id="trace-20999"></a>
<a id="trace-21001"></a>
<a id="trace-21006"></a>
<a id="trace-21008"></a>
<a id="trace-21023"></a>
<a id="trace-21025"></a>
<a id="trace-21033"></a>
<a id="trace-21035"></a>
<a id="trace-21046"></a>
<a id="trace-21048"></a>
<a id="trace-21057"></a>
<a id="trace-21059"></a>
<a id="trace-21073"></a>
<a id="trace-21075"></a>
<a id="trace-21081"></a>
<a id="trace-21083"></a>
<a id="trace-21159"></a>
<a id="trace-21161"></a>
<a id="trace-21174"></a>
<a id="trace-21176"></a>
<a id="trace-21188"></a>
<a id="trace-21190"></a>
<a id="trace-21201"></a>
<a id="trace-21203"></a>
<a id="trace-21216"></a>
<a id="trace-21218"></a>
<a id="trace-21224"></a>
<a id="trace-21226"></a>
<a id="trace-21237"></a>
<a id="trace-21239"></a>
<a id="trace-21246"></a>
<a id="trace-21248"></a>
<a id="trace-21261"></a>
<a id="trace-21263"></a>
<a id="trace-21272"></a>
<a id="trace-21274"></a>
<a id="trace-21347"></a>
<a id="trace-21349"></a>
<a id="trace-21360"></a>
<a id="trace-21362"></a>
<a id="trace-21372"></a>
<a id="trace-21374"></a>
<a id="trace-21384"></a>
<a id="trace-21386"></a>
<a id="trace-21401"></a>
<a id="trace-21403"></a>
<a id="trace-21416"></a>
<a id="trace-21418"></a>
<a id="trace-21432"></a>
<a id="trace-21434"></a>
<a id="trace-21440"></a>
<a id="trace-21442"></a>
<a id="trace-21455"></a>
<a id="trace-21457"></a>
<a id="trace-21462"></a>
<a id="trace-21464"></a>
<a id="trace-21534"></a>
<a id="trace-21536"></a>
<a id="trace-21544"></a>
<a id="trace-21546"></a>
<a id="trace-21561"></a>
<a id="trace-21563"></a>
<a id="trace-21569"></a>
<a id="trace-21571"></a>
<a id="trace-21585"></a>
<a id="trace-21587"></a>
<a id="trace-21595"></a>
<a id="trace-21597"></a>
<a id="trace-21610"></a>
<a id="trace-21612"></a>
<a id="trace-21617"></a>
<a id="trace-21619"></a>
<a id="trace-21639"></a>
<a id="trace-21641"></a>
<a id="trace-21648"></a>
<a id="trace-21650"></a>
<a id="trace-21724"></a>
<a id="trace-21726"></a>
<a id="trace-21734"></a>
<a id="trace-21736"></a>
<a id="trace-21745"></a>
<a id="trace-21747"></a>
<a id="trace-21755"></a>
<a id="trace-21757"></a>
<a id="trace-21770"></a>
<a id="trace-21772"></a>
<a id="trace-21778"></a>
<a id="trace-21780"></a>
<a id="trace-21793"></a>
<a id="trace-21795"></a>
<a id="trace-21805"></a>
<a id="trace-21807"></a>
<a id="trace-21821"></a>
<a id="trace-21823"></a>
<a id="trace-21828"></a>
<a id="trace-21830"></a>
<a id="trace-21902"></a>
<a id="trace-21904"></a>
<a id="trace-21914"></a>
<a id="trace-21916"></a>
<a id="trace-21931"></a>
<a id="trace-21933"></a>
<a id="trace-21948"></a>
<a id="trace-21950"></a>
<a id="trace-21962"></a>
<a id="trace-21964"></a>
<a id="trace-21970"></a>
<a id="trace-21972"></a>
<a id="trace-21983"></a>
<a id="trace-21985"></a>
<a id="trace-21990"></a>
<a id="trace-21992"></a>
<a id="trace-22008"></a>
<a id="trace-22010"></a>
<a id="trace-22017"></a>
<a id="trace-22019"></a>
<a id="trace-22092"></a>
<a id="trace-22094"></a>
<a id="trace-22106"></a>
<a id="trace-22108"></a>
<a id="trace-22119"></a>
<a id="trace-22121"></a>
<a id="trace-22130"></a>
<a id="trace-22132"></a>
<a id="trace-22146"></a>
<a id="trace-22148"></a>
<a id="trace-22156"></a>
<a id="trace-22158"></a>
<a id="trace-22171"></a>
<a id="trace-22173"></a>
<a id="trace-22185"></a>
<a id="trace-22187"></a>
<a id="trace-22202"></a>
<a id="trace-22204"></a>
<a id="trace-22210"></a>
<a id="trace-22212"></a>
<a id="trace-22282"></a>
<a id="trace-22284"></a>
<a id="trace-22295"></a>
<a id="trace-22297"></a>
<a id="trace-22309"></a>
<a id="trace-22311"></a>
<a id="trace-22320"></a>
<a id="trace-22322"></a>
<a id="trace-22337"></a>
<a id="trace-22339"></a>
<a id="trace-22344"></a>
<a id="trace-22346"></a>
<a id="trace-22358"></a>
<a id="trace-22360"></a>
<a id="trace-22367"></a>
<a id="trace-22369"></a>
<a id="trace-22386"></a>
<a id="trace-22388"></a>
<a id="trace-22398"></a>
<a id="trace-22400"></a>
<a id="trace-22474"></a>
<a id="trace-22476"></a>
<a id="trace-22488"></a>
<a id="trace-22490"></a>
<a id="trace-22504"></a>
<a id="trace-22506"></a>
<a id="trace-22514"></a>
<a id="trace-22516"></a>
<a id="trace-22528"></a>
<a id="trace-22530"></a>
<a id="trace-22538"></a>
<a id="trace-22540"></a>
- 237.80s–297.80s (×242), actor 5, squad 0 (trace 20271): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 237.60s, trace 20266. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20287}.
<a id="trace-2350"></a>
- 298.05s–298.05s (×1), actor 5, squad 0 (events line 2350): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2351"></a>
- 298.05s–298.05s (×1), actor 5, squad 1 (events line 2351): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22545"></a>
- 298.05s–298.05s (×1), actor 5, squad 0 (trace 22545): renew committed intent (75 s lifetime). Knowledge: actor memory at 298.05s, trace 22545. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22556}.
<a id="trace-22546"></a>
- 298.05s–298.05s (×1), actor 5, squad 1 (trace 22546): renew committed intent (75 s lifetime). Knowledge: actor memory at 298.05s, trace 22546. Next observer evidence: {'until': 328, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2524}.
<a id="trace-22556"></a>
<a id="trace-22558"></a>
<a id="trace-22564"></a>
<a id="trace-22566"></a>
<a id="trace-22581"></a>
<a id="trace-22583"></a>
<a id="trace-22593"></a>
<a id="trace-22595"></a>
<a id="trace-22669"></a>
<a id="trace-22671"></a>
<a id="trace-22684"></a>
<a id="trace-22686"></a>
<a id="trace-22702"></a>
<a id="trace-22704"></a>
<a id="trace-22711"></a>
<a id="trace-22713"></a>
<a id="trace-22726"></a>
<a id="trace-22728"></a>
<a id="trace-22737"></a>
<a id="trace-22739"></a>
<a id="trace-22753"></a>
<a id="trace-22755"></a>
<a id="trace-22760"></a>
<a id="trace-22762"></a>
<a id="trace-22776"></a>
<a id="trace-22778"></a>
<a id="trace-22782"></a>
<a id="trace-22784"></a>
<a id="trace-22859"></a>
<a id="trace-22861"></a>
<a id="trace-22869"></a>
<a id="trace-22871"></a>
<a id="trace-22884"></a>
<a id="trace-22886"></a>
<a id="trace-22897"></a>
<a id="trace-22899"></a>
<a id="trace-22911"></a>
<a id="trace-22913"></a>
<a id="trace-22919"></a>
<a id="trace-22921"></a>
<a id="trace-22936"></a>
<a id="trace-22938"></a>
<a id="trace-22945"></a>
<a id="trace-22947"></a>
<a id="trace-22958"></a>
<a id="trace-22960"></a>
<a id="trace-22970"></a>
<a id="trace-22972"></a>
<a id="trace-23048"></a>
<a id="trace-23050"></a>
<a id="trace-23059"></a>
<a id="trace-23061"></a>
<a id="trace-23071"></a>
<a id="trace-23073"></a>
<a id="trace-23083"></a>
<a id="trace-23085"></a>
<a id="trace-23095"></a>
<a id="trace-23097"></a>
<a id="trace-23103"></a>
<a id="trace-23105"></a>
<a id="trace-23120"></a>
<a id="trace-23122"></a>
<a id="trace-23129"></a>
<a id="trace-23131"></a>
<a id="trace-23146"></a>
<a id="trace-23148"></a>
<a id="trace-23157"></a>
<a id="trace-23159"></a>
<a id="trace-23231"></a>
<a id="trace-23233"></a>
<a id="trace-23244"></a>
<a id="trace-23246"></a>
<a id="trace-23262"></a>
<a id="trace-23264"></a>
<a id="trace-23273"></a>
<a id="trace-23275"></a>
<a id="trace-23286"></a>
<a id="trace-23288"></a>
<a id="trace-23297"></a>
<a id="trace-23299"></a>
<a id="trace-23312"></a>
<a id="trace-23314"></a>
<a id="trace-23321"></a>
<a id="trace-23323"></a>
<a id="trace-23336"></a>
<a id="trace-23338"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23418"></a>
<a id="trace-23420"></a>
<a id="trace-23434"></a>
<a id="trace-23436"></a>
<a id="trace-23453"></a>
<a id="trace-23455"></a>
<a id="trace-23463"></a>
<a id="trace-23465"></a>
<a id="trace-23475"></a>
<a id="trace-23477"></a>
<a id="trace-23481"></a>
<a id="trace-23483"></a>
<a id="trace-23496"></a>
<a id="trace-23498"></a>
<a id="trace-23506"></a>
<a id="trace-23508"></a>
<a id="trace-23523"></a>
<a id="trace-23525"></a>
<a id="trace-23534"></a>
<a id="trace-23536"></a>
<a id="trace-23608"></a>
<a id="trace-23610"></a>
<a id="trace-23620"></a>
<a id="trace-23622"></a>
<a id="trace-23635"></a>
<a id="trace-23637"></a>
<a id="trace-23642"></a>
<a id="trace-23644"></a>
<a id="trace-23658"></a>
<a id="trace-23660"></a>
<a id="trace-23674"></a>
<a id="trace-23676"></a>
<a id="trace-23684"></a>
<a id="trace-23686"></a>
<a id="trace-23692"></a>
<a id="trace-23694"></a>
<a id="trace-23708"></a>
<a id="trace-23710"></a>
<a id="trace-23717"></a>
<a id="trace-23719"></a>
<a id="trace-23791"></a>
<a id="trace-23793"></a>
<a id="trace-23806"></a>
<a id="trace-23808"></a>
<a id="trace-23823"></a>
<a id="trace-23825"></a>
<a id="trace-23832"></a>
<a id="trace-23834"></a>
<a id="trace-23850"></a>
<a id="trace-23852"></a>
<a id="trace-23862"></a>
<a id="trace-23864"></a>
<a id="trace-23874"></a>
<a id="trace-23876"></a>
<a id="trace-23884"></a>
<a id="trace-23886"></a>
<a id="trace-23904"></a>
<a id="trace-23906"></a>
<a id="trace-23913"></a>
<a id="trace-23915"></a>
<a id="trace-23986"></a>
<a id="trace-23988"></a>
<a id="trace-23997"></a>
<a id="trace-23999"></a>
<a id="trace-24009"></a>
<a id="trace-24011"></a>
<a id="trace-24018"></a>
<a id="trace-24020"></a>
<a id="trace-24037"></a>
<a id="trace-24039"></a>
<a id="trace-24047"></a>
<a id="trace-24049"></a>
<a id="trace-24061"></a>
<a id="trace-24063"></a>
<a id="trace-24070"></a>
<a id="trace-24072"></a>
<a id="trace-24089"></a>
<a id="trace-24091"></a>
<a id="trace-24099"></a>
<a id="trace-24101"></a>
<a id="trace-24172"></a>
<a id="trace-24174"></a>
<a id="trace-24184"></a>
<a id="trace-24186"></a>
<a id="trace-24202"></a>
<a id="trace-24204"></a>
<a id="trace-24213"></a>
<a id="trace-24215"></a>
<a id="trace-24227"></a>
<a id="trace-24229"></a>
<a id="trace-24234"></a>
<a id="trace-24236"></a>
<a id="trace-24247"></a>
<a id="trace-24249"></a>
<a id="trace-24255"></a>
<a id="trace-24257"></a>
<a id="trace-24272"></a>
<a id="trace-24274"></a>
<a id="trace-24285"></a>
<a id="trace-24287"></a>
<a id="trace-24359"></a>
<a id="trace-24361"></a>
<a id="trace-24372"></a>
<a id="trace-24374"></a>
<a id="trace-24389"></a>
<a id="trace-24391"></a>
<a id="trace-24398"></a>
<a id="trace-24400"></a>
<a id="trace-24417"></a>
<a id="trace-24419"></a>
<a id="trace-24427"></a>
<a id="trace-24429"></a>
<a id="trace-24441"></a>
<a id="trace-24443"></a>
<a id="trace-24451"></a>
<a id="trace-24453"></a>
<a id="trace-24466"></a>
<a id="trace-24468"></a>
<a id="trace-24473"></a>
<a id="trace-24475"></a>
<a id="trace-24547"></a>
<a id="trace-24549"></a>
<a id="trace-24560"></a>
<a id="trace-24562"></a>
<a id="trace-24575"></a>
<a id="trace-24577"></a>
<a id="trace-24588"></a>
<a id="trace-24590"></a>
<a id="trace-24603"></a>
<a id="trace-24605"></a>
<a id="trace-24613"></a>
<a id="trace-24615"></a>
<a id="trace-24627"></a>
<a id="trace-24629"></a>
<a id="trace-24640"></a>
<a id="trace-24642"></a>
<a id="trace-24660"></a>
<a id="trace-24662"></a>
<a id="trace-24668"></a>
<a id="trace-24670"></a>
<a id="trace-24744"></a>
<a id="trace-24746"></a>
<a id="trace-24757"></a>
<a id="trace-24759"></a>
<a id="trace-24771"></a>
<a id="trace-24773"></a>
<a id="trace-24781"></a>
<a id="trace-24783"></a>
<a id="trace-24794"></a>
<a id="trace-24796"></a>
<a id="trace-24804"></a>
<a id="trace-24806"></a>
- 298.30s–357.80s (×240), actor 5, squad 0 (trace 22556): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 298.05s, trace 22546. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22564}.
<a id="trace-2523"></a>
- 358.05s–358.05s (×1), actor 5, squad 0 (events line 2523): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2524"></a>
- 358.05s–358.05s (×1), actor 5, squad 1 (events line 2524): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24813"></a>
- 358.05s–358.05s (×1), actor 5, squad 0 (trace 24813): renew committed intent (75 s lifetime). Knowledge: actor memory at 358.05s, trace 24813. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24824}.
<a id="trace-24814"></a>
- 358.05s–358.05s (×1), actor 5, squad 1 (trace 24814): renew committed intent (75 s lifetime). Knowledge: actor memory at 358.05s, trace 24814. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-24824"></a>
<a id="trace-24826"></a>
<a id="trace-24833"></a>
<a id="trace-24835"></a>
<a id="trace-24851"></a>
<a id="trace-24853"></a>
<a id="trace-24859"></a>
<a id="trace-24861"></a>
- 358.30s–359.80s (×8), actor 5, squad 0 (trace 24824): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 358.05s, trace 24814. Next observer evidence: {'until': 358.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24833}.

## Net delivery

261 matched order/radio deliveries; 488 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.490s; maximum 2.450s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2850: estimate 9.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2851: estimate 9.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2852: estimate 9.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 2853: estimate 9.97; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2860: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2865: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2866: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2868: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2870: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2871: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2872: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2873: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2875: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2876: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2877: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2878: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2879: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3873: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3878: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3879: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3881: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3883: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3884: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3885: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3886: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3888: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3889: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3890: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3891: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3892: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4205: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4210: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4211: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4213: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4215: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4216: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4217: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4218: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4220: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4221: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4222: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4223: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4224: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4317: estimate 12.24; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4318: estimate 12.24; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4440: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4445: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4446: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4449: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4450: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4451: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4452: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4454: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4455: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4456: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4457: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4458: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 5770: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5775: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5776: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5778: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5779: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5780: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5781: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5782: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5784: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5785: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5786: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5787: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5788: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6085: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6090: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6091: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 6093: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6094: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6095: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6096: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6097: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6099: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6100: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6101: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 6102: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 6103: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 6484: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6489: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6490: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6492: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6493: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6494: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6495: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6496: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6497: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6498: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6499: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6500: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6501: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6502: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 7832: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7837: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7838: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 7840: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7841: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7842: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7843: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7844: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7845: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7846: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7847: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7848: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 7849: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 7850: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 8120: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 8122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8125: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8126: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8128: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8129: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8130: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8131: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8132: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8133: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8134: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8135: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8136: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8137: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8138: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 8365: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 8367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 8368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8370: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8371: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 8373: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8374: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8375: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 8376: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8377: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8378: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8379: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8380: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8381: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 8382: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 8383: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 8573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8576: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8577: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 8579: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8580: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8581: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8582: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8583: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8584: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8585: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8586: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8587: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 8588: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 8589: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 8829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 8830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 8831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 8832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 8833: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 8834: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 8835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 8836: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 8837: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 8838: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 8839: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 8840: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 8841: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 8842: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 8843: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 8844: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 8845: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 8846: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 9051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 9052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 9053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 9054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 9055: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 9056: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 9057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 9058: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 9059: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 9060: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 9061: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 9062: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 9063: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 9064: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 9065: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 9066: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 9067: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 9068: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 9070: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 9406: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 9407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 9408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 9409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 9410: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 9411: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 9412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 9413: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 9414: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 9415: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 9416: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 9417: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 9418: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 9419: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 9420: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 9421: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 9422: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 9423: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 10825: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 10826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 10827: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10829: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 10830: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 10831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 10832: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10833: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10834: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10835: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10836: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10837: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10838: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10839: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10840: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 10841: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 10842: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 11593: estimate 11.49; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11994: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 11995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 11996: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11998: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11999: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 12000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 12001: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12002: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12003: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12004: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12005: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12006: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12007: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12008: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12009: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 12010: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 12011: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 97.55s leader 5, trace 12196: estimate 12.11; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 13184: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 13185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 13186: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 13187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 13188: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 13189: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 13190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 13191: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 13192: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 13193: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 13194: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 13195: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 13196: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 13197: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 13198: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 13199: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 13200: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 13201: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 103.05s leader 5, trace 13404: estimate 12.08; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 13477: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 13478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 13479: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 13480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 13481: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 13482: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 13483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 13484: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 13485: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 13486: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 13487: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 13488: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 13489: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 13490: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 13491: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 13492: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 13493: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 13494: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.05s leader 5, trace 13495: estimate 12.02; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 13717: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 13718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 13719: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 13720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 13721: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 13722: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 13723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 13724: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 13725: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 13726: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 13727: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 13728: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 13729: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 13730: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 13731: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 13732: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 13733: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 13734: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 113.75s leader 5, trace 14020: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 113.75s leader 5, trace 14021: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 14065: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 14066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 14067: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 14068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 14069: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 14070: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 14071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 14072: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 14073: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 14074: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 14075: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 14076: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 14077: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 14078: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 14079: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 14080: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 14081: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 14082: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 14506: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 14507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 14508: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 14509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 14510: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 14511: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 14512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 14513: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 14514: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 14515: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 14516: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 14517: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 14518: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 14519: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 14520: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 14521: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 14522: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 14523: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 15071: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 15072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 15073: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 15074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 15075: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 15076: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 15077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 15078: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 15079: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 15080: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 15081: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 15082: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 15083: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 15084: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 15085: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 15086: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 15087: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 15088: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 15302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 15303: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 15304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 15305: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 15306: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 15307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 15308: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 15309: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 15310: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 15311: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 15312: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 15313: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 15314: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 15315: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 15316: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 15317: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 15318: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 132.10s leader 5, trace 16031: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 16187: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 16188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 16189: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 16190: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 16191: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 16192: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 16193: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 16194: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 16195: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 16196: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 16197: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 16198: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 16199: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 16200: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 16201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 16412: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 16413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 16414: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 16415: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 16416: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 16417: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 16418: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 16419: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 16420: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 16421: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 16422: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 16423: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 16424: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 16425: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 16426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.15s leader 5, trace 16428: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 16595: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 16596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 16597: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 16598: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 16599: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 16600: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 16601: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 16602: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 16603: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 16604: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 16605: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 16606: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 16607: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 16608: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 16609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 16772: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 16773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 16774: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 16775: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 16776: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 16777: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 16778: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 16779: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 16780: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 16781: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 16782: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 16783: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 16784: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 16785: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 16786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 16954: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 16955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 16956: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 16957: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 16958: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 16959: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 16960: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 16961: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 16962: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 16963: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 16964: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 16965: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 16966: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 16967: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 16968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 17165: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 17166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 17167: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 17168: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 17169: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 17170: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 17171: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 17172: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17173: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 17174: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17175: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17176: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 17177: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17178: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 17179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 17348: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 17349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 17350: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 17351: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 17352: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 17353: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 17354: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 17355: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 17356: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 17357: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 17358: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 17359: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 17360: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 17361: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 17362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 17539: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 17540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 17541: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 17542: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 17543: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 17544: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 17545: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 17546: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 17547: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 17548: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 17549: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 17550: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 17551: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 17552: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 17553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 173.75s leader 5, trace 17692: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 17729: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17731: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 17732: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 17733: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17734: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 17735: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 17736: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17737: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17738: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17739: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17740: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17741: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17742: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 17743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.10s leader 5, trace 17848: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.10s leader 5, trace 17849: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.10s leader 5, trace 17850: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.10s leader 5, trace 17851: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 18013: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 18014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 18015: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 18016: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 18017: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 18018: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 18019: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 18020: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 18021: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 18022: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 18023: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 18024: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 18025: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 18026: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 18027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 18240: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 18241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 18242: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 18243: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 18244: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18245: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18246: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18247: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18248: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 18249: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18250: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18251: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18252: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18253: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 18447: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 18449: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 18450: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 18451: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 18452: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 18453: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 18454: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18455: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 18456: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18457: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18458: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 18459: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18460: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 18461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 18630: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 18631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 18632: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 18633: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 18634: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 18635: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 18636: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 18637: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 18638: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 18639: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 18640: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 18641: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 18642: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 18643: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 18644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 18814: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 18815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 18816: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 18817: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 18818: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 18819: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 18820: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 18821: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 18822: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 18823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 18824: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 18825: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 18826: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 18827: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 18828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 19003: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 19004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 19005: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 19006: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 19007: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 19008: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 19009: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 19010: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 19011: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 19012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19013: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19014: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 19015: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19016: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 19017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 19194: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 19195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 19196: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 19197: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 19198: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 19199: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 19200: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 19201: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 19202: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 19203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 19204: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 19205: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 19206: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 19207: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 19208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 19380: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 19381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 19382: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 19383: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 19384: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 19385: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 19386: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 19387: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 19388: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 19389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 19390: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 19391: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 19392: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 19393: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 19394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 19571: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 19572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 19573: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 19574: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 19575: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 19576: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 19577: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 19578: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 19579: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 19580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 19581: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 19582: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 19583: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 19584: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 19585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 19762: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 19763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 19764: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 19765: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 19766: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 19767: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 19768: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 19769: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 19770: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 19771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 19772: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 19773: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 19774: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 19775: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 19776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 19948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 19949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 19950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 19951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 19952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 19953: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 19954: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 19955: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 19956: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 19957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 19958: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 19959: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 19960: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 19961: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 19962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 20139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 20140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 20141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 20142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 20143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 20144: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 20145: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 20146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 20147: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 20148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 20149: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 20150: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 20151: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 20152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 20153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 237.60s leader 5, trace 20265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 237.60s leader 5, trace 20266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 20332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 20333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 20334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 20335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 20336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 20337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 20338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 20339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 20340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 20341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 20342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 20343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 20344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 20345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 20346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 20521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 20522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 20523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 20524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 20525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 20526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 20530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 20535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 20712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 20713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 20715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 20716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 20717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 20718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 20719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 20721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 20723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 20725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 20726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 20904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 20905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 20906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 20907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 20908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 20909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 20910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 20911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 20913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 20915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 20916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 20917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 20918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 21092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 21093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 21094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 21095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 21096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 21097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 21098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 21099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 21100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 21101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 21104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 2, trace 21280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 21281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 21282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 21283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 21284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 21285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 21286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 21287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 21288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 21289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 21290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 21291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 21292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 21293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 21294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 2, trace 21468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 21469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 21470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 21471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 21472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 21473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 21474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 21475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 21476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 21477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 21478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 21479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 21480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 21481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 21482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 2, trace 21659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 21660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 21661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 21662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 21663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 21664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 21665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 21666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 21668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 21670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 21673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 2, trace 21837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 21838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 21840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 21841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 21842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 21843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 21844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 21846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 21848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 21850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 21851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 2, trace 22025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 22026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 22027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 22028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 22029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 22030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 22031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 22032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 22033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 22034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 22037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 2, trace 22216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 22217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 22218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 22219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 22220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 22221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 22222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 22223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 22224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 22225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 22226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 22227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 22228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 22229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 2, trace 22407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 22408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 22409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 22410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 22411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 22412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 22413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 22414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 22415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 22416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 22417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 22418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 22419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 22420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 22421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 298.05s leader 5, trace 22545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 298.05s leader 5, trace 22546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 2, trace 22603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 22604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 22605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 22606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 22607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 22612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 22613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 22614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 22615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 22616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 22617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 2, trace 22793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 22794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 22795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 22796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 22797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 22799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 22802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 22804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 22806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 22807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 2, trace 22981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 22982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 22983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 22984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 22985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 22986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 22987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 22988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 22990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 22991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 22992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 22993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 22994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 22995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 2, trace 23166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 23167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 23168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 23169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 23170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 2, trace 23353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 23354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 23355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 23356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 23357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 23358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 23359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 23360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 23361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 23362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 23363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 23364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 23365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 23366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 23367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 2, trace 23542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 23543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 23544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 23545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 23546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 23547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 23548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 23549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 23551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 23553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 23554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 23555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 23556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 2, trace 23725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 23726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 23727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 23728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 23729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 23730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 23731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 23732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 23734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 23735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 23736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 23737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 23738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 23739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 2, trace 23921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 23922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 23923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 23924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 23925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 23927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 23930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 23931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 23932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 23934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 23935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 2, trace 24105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 24106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 24107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 24108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 24109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 24110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 24112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 24117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 2, trace 24293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 24294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 24295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 24296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 24297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 24298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 24305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 2, trace 24481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 24482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 24484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 24485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 2, trace 24677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 24678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 24679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 24680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 24681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 24682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 24683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 24684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 24686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 24688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 24689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 24690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 24691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.05s leader 5, trace 24813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.05s leader 5, trace 24814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 2, trace 24865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 24866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 24867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 24868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 24869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 24870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 24871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 24872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 24873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 24874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 24875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 24876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 24877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 24878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 24879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Vale incapacitated
- 1: Rook incapacitated
- 1: Reed killed in action
- 1: Ash incapacitated

## Outcome attribution

- 177.10s, evidence 1992: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.10s, evidence 1993: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.10s, evidence 17848: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339974 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17861}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.10s, evidence 17849: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339974 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17861}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.10s, evidence 17850: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339974 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17887}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.10s, evidence 17851: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339974 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17887}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 237.60s, evidence 2178: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 237.60s, evidence 2179: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 298.05s, evidence 2350: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 298.05s, evidence 2351: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 358.05s, evidence 2523: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 358.05s, evidence 2524: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
