# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/28/109/good-azure/battle-109-1789674303068098613`

## Battle summary

**Ember** · 360 s · 297 shots.

### Turning points

- 14.8s, squad 4: contact (events line 176). First recorded contact.
- 32.0s, squad 0: help call ([trace 8881](#trace-8881)). 33.6s, squad 1: answered a neighbour with support by fire.
- 33.6s, squad 1: help answer ([trace 9358](#trace-9358)). 42.0s, squad 1: took cover and returned fire.
- 37.9s, squad 1: help call ([trace 10695](#trace-10695)). 39.6s, squad 0: answered a neighbour with support by fire.
- 39.6s, squad 0: help answer ([trace 11722](#trace-11722)). 58.8s, squad 0: took cover and returned fire.
- 45.4s, squad 1: withdrawal ([trace 15228](#trace-15228)). 85.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 60.4s, squad 0: help call ([trace 16545](#trace-16545)). 85.1s, squad 1: answered a neighbour with support by fire.
- 62.2s, squad 0: withdrawal ([trace 16610](#trace-16610)). 100.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 85.1s, squad 1: help answer ([trace 17979](#trace-17979)). 89.6s, squad 1: Withdraw to received rally.
- 89.6s, squad 1: withdrawal ([trace 18134](#trace-18134)). No completion observed before termination.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 21 shots, 7/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 5 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 160 shots, 3/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 111 shots, 0/2 lost.

### Decisions and attribution

At 38.0s, squad 0 chose took cover and returned fire ([trace 10707](#trace-10707)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 315](#trace-315)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 660](#trace-660)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449857692509513, 'next_transition': 679}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 662](#trace-662)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 794}.

### Communication

216 matched deliveries (mean 0.46s, max 2.60s); 506 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.80s, squad 4, contact, evidence events line 176: First recorded contact; .
- 31.95s, squad 0, help call, evidence 8881: NeedSupport; 33.6s, squad 1: answered a neighbour with support by fire.
- 33.60s, squad 1, help answer, evidence 9358: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 42.0s, squad 1: took cover and returned fire.
- 37.85s, squad 1, help call, evidence 10695: NeedSupport; 39.6s, squad 0: answered a neighbour with support by fire.
- 39.60s, squad 0, help answer, evidence 11722: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 58.8s, squad 0: took cover and returned fire.
- 45.35s, squad 1, withdrawal, evidence 15228: BreakContact: believed ratio at least two without superiority; 85.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 60.35s, squad 0, help call, evidence 16545: NeedSupport; 85.1s, squad 1: answered a neighbour with support by fire.
- 62.20s, squad 0, withdrawal, evidence 16610: BreakContact: believed ratio at least two without superiority; 100.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 85.05s, squad 1, help answer, evidence 17979: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 89.6s, squad 1: Withdraw to received rally.
- 89.55s, squad 1, withdrawal, evidence 18134: Withdraw to received rally; No completion observed before termination.
- 107.55s, squad 0, withdrawal, evidence 19058: Withdraw to received rally; 154.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 226.75s, squad 0, withdrawal, evidence 26005: BreakContact: believed ratio at least two without superiority; 266.8s, squad 0: advanced tactically.
- 244.70s, squad 0, help call, evidence 26971: NeedSupport; No completion observed before termination.
- 272.40s, squad 0, withdrawal, evidence 27960: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870302701331465, 'next_transition': 546}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870302701331465, 'next_transition': 546}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870302701331465, 'next_transition': 546}.
<a id="trace-315"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 315): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528712357641876, 'next_transition': 87}.
<a id="trace-316"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 316): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528712357641876, 'next_transition': 87}.
<a id="trace-317"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 317): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528712357641876, 'next_transition': 87}.
<a id="trace-546"></a>
<a id="trace-548"></a>
<a id="trace-574"></a>
<a id="trace-576"></a>
<a id="trace-609"></a>
<a id="trace-611"></a>
<a id="trace-630"></a>
<a id="trace-632"></a>
<a id="trace-651"></a>
<a id="trace-653"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 546): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259977561068375, 'next_transition': 574}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449857692509513, 'next_transition': 679}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 794}.
<a id="trace-660"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 660): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 660. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449857692509513, 'next_transition': 679}.
<a id="trace-661"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 661): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 661. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449857692509513, 'next_transition': 679}.
<a id="trace-662"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 662): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 662. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 794}.
<a id="trace-663"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 663): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 663. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 794}.
<a id="trace-679"></a>
<a id="trace-681"></a>
<a id="trace-707"></a>
<a id="trace-709"></a>
<a id="trace-787"></a>
<a id="trace-789"></a>
<a id="trace-849"></a>
<a id="trace-851"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 679): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 663. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449919534912734, 'next_transition': 707}.
<a id="trace-794"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 794): traveling overwatch. Knowledge: actor memory at 5.00s, trace 722. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.468364541584725, 'next_transition': 1718}.
<a id="trace-795"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 795): received platoon directive. Knowledge: actor memory at 5.00s, trace 722. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.468364541584725, 'next_transition': 1718}.
<a id="trace-853"></a>
<a id="trace-997"></a>
<a id="trace-1036"></a>
<a id="trace-1038"></a>
<a id="trace-1080"></a>
<a id="trace-1082"></a>
<a id="trace-1146"></a>
<a id="trace-1148"></a>
<a id="trace-1196"></a>
<a id="trace-1198"></a>
<a id="trace-1228"></a>
<a id="trace-1230"></a>
<a id="trace-1255"></a>
<a id="trace-1257"></a>
<a id="trace-1349"></a>
<a id="trace-1351"></a>
<a id="trace-1375"></a>
<a id="trace-1377"></a>
<a id="trace-1397"></a>
<a id="trace-1399"></a>
<a id="trace-1422"></a>
<a id="trace-1424"></a>
<a id="trace-1462"></a>
<a id="trace-1464"></a>
<a id="trace-1488"></a>
<a id="trace-1490"></a>
<a id="trace-1501"></a>
<a id="trace-1503"></a>
<a id="trace-1709"></a>
<a id="trace-1711"></a>
<a id="trace-2470"></a>
<a id="trace-2472"></a>
<a id="trace-2818"></a>
<a id="trace-2820"></a>
<a id="trace-3315"></a>
<a id="trace-3317"></a>
<a id="trace-3675"></a>
<a id="trace-3677"></a>
<a id="trace-3724"></a>
<a id="trace-3726"></a>
<a id="trace-4158"></a>
<a id="trace-4160"></a>
<a id="trace-4209"></a>
<a id="trace-4211"></a>
<a id="trace-4285"></a>
<a id="trace-4287"></a>
<a id="trace-4381"></a>
<a id="trace-4383"></a>
<a id="trace-4402"></a>
<a id="trace-4404"></a>
<a id="trace-4615"></a>
<a id="trace-4617"></a>
<a id="trace-4630"></a>
<a id="trace-4632"></a>
<a id="trace-4659"></a>
<a id="trace-4661"></a>
<a id="trace-4673"></a>
<a id="trace-4675"></a>
<a id="trace-4890"></a>
<a id="trace-4892"></a>
<a id="trace-4913"></a>
<a id="trace-4915"></a>
<a id="trace-8100"></a>
<a id="trace-8102"></a>
<a id="trace-8187"></a>
<a id="trace-8189"></a>
<a id="trace-8215"></a>
<a id="trace-8217"></a>
<a id="trace-8245"></a>
<a id="trace-8247"></a>
<a id="trace-8258"></a>
<a id="trace-8260"></a>
<a id="trace-8278"></a>
<a id="trace-8280"></a>
<a id="trace-8295"></a>
<a id="trace-8297"></a>
<a id="trace-8314"></a>
<a id="trace-8316"></a>
<a id="trace-8342"></a>
<a id="trace-8344"></a>
<a id="trace-8359"></a>
<a id="trace-8361"></a>
<a id="trace-8435"></a>
<a id="trace-8437"></a>
<a id="trace-8814"></a>
<a id="trace-8816"></a>
<a id="trace-8841"></a>
<a id="trace-8843"></a>
<a id="trace-8854"></a>
<a id="trace-8856"></a>
<a id="trace-8911"></a>
<a id="trace-8913"></a>
<a id="trace-9267"></a>
<a id="trace-9269"></a>
<a id="trace-9320"></a>
<a id="trace-9322"></a>
<a id="trace-10437"></a>
<a id="trace-10439"></a>
<a id="trace-10476"></a>
<a id="trace-10478"></a>
<a id="trace-10509"></a>
<a id="trace-10511"></a>
<a id="trace-10586"></a>
<a id="trace-10588"></a>
<a id="trace-10603"></a>
<a id="trace-10605"></a>
<a id="trace-10648"></a>
<a id="trace-10650"></a>
<a id="trace-10668"></a>
<a id="trace-10670"></a>
<a id="trace-10687"></a>
<a id="trace-10689"></a>
<a id="trace-11174"></a>
<a id="trace-11176"></a>
<a id="trace-11661"></a>
<a id="trace-11663"></a>
<a id="trace-11701"></a>
<a id="trace-11703"></a>
<a id="trace-14792"></a>
<a id="trace-14794"></a>
<a id="trace-14901"></a>
<a id="trace-14903"></a>
<a id="trace-14941"></a>
<a id="trace-14943"></a>
<a id="trace-14975"></a>
<a id="trace-14977"></a>
<a id="trace-14999"></a>
<a id="trace-15001"></a>
<a id="trace-15054"></a>
<a id="trace-15056"></a>
<a id="trace-15084"></a>
<a id="trace-15086"></a>
<a id="trace-15099"></a>
<a id="trace-15101"></a>
<a id="trace-15124"></a>
<a id="trace-15126"></a>
<a id="trace-15145"></a>
<a id="trace-15147"></a>
<a id="trace-15225"></a>
<a id="trace-15227"></a>
<a id="trace-15295"></a>
<a id="trace-15297"></a>
<a id="trace-15315"></a>
<a id="trace-15317"></a>
<a id="trace-15330"></a>
<a id="trace-15332"></a>
<a id="trace-15348"></a>
<a id="trace-15362"></a>
<a id="trace-15380"></a>
<a id="trace-15538"></a>
<a id="trace-15540"></a>
<a id="trace-15557"></a>
<a id="trace-15559"></a>
<a id="trace-15581"></a>
<a id="trace-15583"></a>
<a id="trace-15594"></a>
<a id="trace-15596"></a>
<a id="trace-15627"></a>
<a id="trace-15629"></a>
<a id="trace-15654"></a>
<a id="trace-15656"></a>
<a id="trace-15662"></a>
<a id="trace-15664"></a>
<a id="trace-15694"></a>
<a id="trace-15696"></a>
<a id="trace-15788"></a>
<a id="trace-15790"></a>
<a id="trace-15818"></a>
<a id="trace-15820"></a>
<a id="trace-15853"></a>
<a id="trace-15855"></a>
<a id="trace-15900"></a>
<a id="trace-15902"></a>
<a id="trace-15917"></a>
<a id="trace-15919"></a>
<a id="trace-15937"></a>
<a id="trace-15939"></a>
<a id="trace-15946"></a>
<a id="trace-15948"></a>
<a id="trace-16445"></a>
<a id="trace-16447"></a>
<a id="trace-16458"></a>
<a id="trace-16460"></a>
<a id="trace-16537"></a>
<a id="trace-16539"></a>
<a id="trace-16580"></a>
<a id="trace-16582"></a>
<a id="trace-16600"></a>
<a id="trace-16602"></a>
<a id="trace-16985"></a>
<a id="trace-16987"></a>
<a id="trace-17002"></a>
<a id="trace-17004"></a>
<a id="trace-17018"></a>
<a id="trace-17020"></a>
<a id="trace-17034"></a>
<a id="trace-17036"></a>
<a id="trace-17146"></a>
<a id="trace-17148"></a>
<a id="trace-17157"></a>
<a id="trace-17159"></a>
<a id="trace-17169"></a>
<a id="trace-17171"></a>
<a id="trace-17185"></a>
<a id="trace-17187"></a>
<a id="trace-17209"></a>
<a id="trace-17211"></a>
<a id="trace-17231"></a>
<a id="trace-17233"></a>
<a id="trace-17250"></a>
<a id="trace-17252"></a>
<a id="trace-17263"></a>
<a id="trace-17265"></a>
<a id="trace-17358"></a>
<a id="trace-17360"></a>
<a id="trace-17371"></a>
<a id="trace-17373"></a>
<a id="trace-17387"></a>
<a id="trace-17389"></a>
<a id="trace-17399"></a>
<a id="trace-17401"></a>
<a id="trace-17418"></a>
<a id="trace-17420"></a>
<a id="trace-17425"></a>
<a id="trace-17427"></a>
<a id="trace-17447"></a>
<a id="trace-17449"></a>
<a id="trace-17565"></a>
<a id="trace-17567"></a>
<a id="trace-17646"></a>
<a id="trace-17648"></a>
<a id="trace-17658"></a>
<a id="trace-17660"></a>
<a id="trace-17682"></a>
<a id="trace-17684"></a>
<a id="trace-17729"></a>
<a id="trace-17731"></a>
<a id="trace-17749"></a>
<a id="trace-17751"></a>
<a id="trace-17779"></a>
<a id="trace-17781"></a>
<a id="trace-17791"></a>
<a id="trace-17793"></a>
<a id="trace-17867"></a>
<a id="trace-17869"></a>
<a id="trace-17877"></a>
<a id="trace-17879"></a>
<a id="trace-17902"></a>
<a id="trace-17904"></a>
<a id="trace-17913"></a>
<a id="trace-17915"></a>
<a id="trace-17926"></a>
<a id="trace-17928"></a>
<a id="trace-17935"></a>
<a id="trace-17937"></a>
<a id="trace-17942"></a>
<a id="trace-17944"></a>
<a id="trace-18036"></a>
<a id="trace-18038"></a>
<a id="trace-18061"></a>
<a id="trace-18063"></a>
<a id="trace-18083"></a>
<a id="trace-18085"></a>
<a id="trace-18093"></a>
<a id="trace-18095"></a>
<a id="trace-18110"></a>
<a id="trace-18112"></a>
<a id="trace-18117"></a>
<a id="trace-18119"></a>
<a id="trace-18131"></a>
<a id="trace-18133"></a>
<a id="trace-18192"></a>
<a id="trace-18194"></a>
<a id="trace-18263"></a>
<a id="trace-18265"></a>
<a id="trace-18449"></a>
<a id="trace-18451"></a>
<a id="trace-18510"></a>
<a id="trace-18512"></a>
<a id="trace-18516"></a>
<a id="trace-18518"></a>
<a id="trace-18535"></a>
<a id="trace-18537"></a>
<a id="trace-18541"></a>
<a id="trace-18543"></a>
<a id="trace-18636"></a>
<a id="trace-18638"></a>
<a id="trace-18645"></a>
<a id="trace-18647"></a>
<a id="trace-18661"></a>
<a id="trace-18663"></a>
<a id="trace-18670"></a>
<a id="trace-18672"></a>
<a id="trace-18688"></a>
<a id="trace-18690"></a>
<a id="trace-18709"></a>
<a id="trace-18711"></a>
<a id="trace-18789"></a>
<a id="trace-18791"></a>
<a id="trace-18804"></a>
<a id="trace-18806"></a>
<a id="trace-18827"></a>
<a id="trace-18829"></a>
<a id="trace-18844"></a>
<a id="trace-18846"></a>
<a id="trace-18866"></a>
<a id="trace-18868"></a>
<a id="trace-18878"></a>
<a id="trace-18880"></a>
<a id="trace-18908"></a>
<a id="trace-18910"></a>
<a id="trace-18921"></a>
<a id="trace-18923"></a>
<a id="trace-18936"></a>
<a id="trace-18938"></a>
<a id="trace-18944"></a>
<a id="trace-18946"></a>
<a id="trace-19022"></a>
<a id="trace-19024"></a>
<a id="trace-19037"></a>
<a id="trace-19039"></a>
<a id="trace-19042"></a>
<a id="trace-19044"></a>
<a id="trace-19219"></a>
<a id="trace-19221"></a>
<a id="trace-19235"></a>
<a id="trace-19237"></a>
<a id="trace-19252"></a>
<a id="trace-19254"></a>
<a id="trace-19274"></a>
<a id="trace-19276"></a>
<a id="trace-19285"></a>
<a id="trace-19287"></a>
<a id="trace-19372"></a>
<a id="trace-19374"></a>
<a id="trace-19378"></a>
<a id="trace-19380"></a>
<a id="trace-19393"></a>
<a id="trace-19395"></a>
<a id="trace-19400"></a>
<a id="trace-19402"></a>
<a id="trace-19413"></a>
<a id="trace-19415"></a>
<a id="trace-19422"></a>
<a id="trace-19424"></a>
<a id="trace-19437"></a>
<a id="trace-19439"></a>
<a id="trace-19445"></a>
<a id="trace-19447"></a>
<a id="trace-19460"></a>
<a id="trace-19462"></a>
<a id="trace-19541"></a>
<a id="trace-19543"></a>
<a id="trace-19547"></a>
<a id="trace-19549"></a>
<a id="trace-19567"></a>
<a id="trace-19569"></a>
<a id="trace-19583"></a>
<a id="trace-19585"></a>
<a id="trace-19598"></a>
<a id="trace-19600"></a>
<a id="trace-19626"></a>
<a id="trace-19628"></a>
<a id="trace-19642"></a>
<a id="trace-19644"></a>
<a id="trace-19758"></a>
<a id="trace-19760"></a>
<a id="trace-19830"></a>
<a id="trace-19832"></a>
<a id="trace-19870"></a>
<a id="trace-19872"></a>
<a id="trace-19921"></a>
<a id="trace-19923"></a>
<a id="trace-19932"></a>
<a id="trace-19934"></a>
<a id="trace-19949"></a>
<a id="trace-19951"></a>
<a id="trace-20055"></a>
<a id="trace-20057"></a>
<a id="trace-20070"></a>
<a id="trace-20072"></a>
<a id="trace-20079"></a>
<a id="trace-20081"></a>
<a id="trace-20100"></a>
<a id="trace-20102"></a>
<a id="trace-20109"></a>
<a id="trace-20111"></a>
<a id="trace-20141"></a>
<a id="trace-20143"></a>
<a id="trace-20211"></a>
<a id="trace-20213"></a>
<a id="trace-20221"></a>
<a id="trace-20223"></a>
<a id="trace-20242"></a>
<a id="trace-20244"></a>
<a id="trace-20249"></a>
<a id="trace-20251"></a>
<a id="trace-20262"></a>
<a id="trace-20264"></a>
<a id="trace-20271"></a>
<a id="trace-20273"></a>
<a id="trace-20345"></a>
<a id="trace-20347"></a>
<a id="trace-20354"></a>
<a id="trace-20356"></a>
<a id="trace-20376"></a>
<a id="trace-20378"></a>
<a id="trace-20389"></a>
<a id="trace-20391"></a>
<a id="trace-20466"></a>
<a id="trace-20468"></a>
<a id="trace-20475"></a>
<a id="trace-20477"></a>
<a id="trace-20500"></a>
<a id="trace-20502"></a>
<a id="trace-20506"></a>
<a id="trace-20508"></a>
<a id="trace-20522"></a>
<a id="trace-20524"></a>
<a id="trace-20549"></a>
<a id="trace-20551"></a>
<a id="trace-20663"></a>
<a id="trace-20665"></a>
<a id="trace-20682"></a>
<a id="trace-20684"></a>
<a id="trace-20692"></a>
<a id="trace-20694"></a>
<a id="trace-20769"></a>
<a id="trace-20771"></a>
<a id="trace-20775"></a>
<a id="trace-20777"></a>
<a id="trace-20804"></a>
<a id="trace-20806"></a>
<a id="trace-20824"></a>
<a id="trace-20826"></a>
<a id="trace-20831"></a>
<a id="trace-20833"></a>
<a id="trace-20856"></a>
<a id="trace-20858"></a>
<a id="trace-20863"></a>
<a id="trace-20865"></a>
<a id="trace-20882"></a>
<a id="trace-20884"></a>
<a id="trace-20894"></a>
<a id="trace-20896"></a>
<a id="trace-20989"></a>
<a id="trace-20991"></a>
<a id="trace-20995"></a>
<a id="trace-20997"></a>
<a id="trace-21014"></a>
<a id="trace-21016"></a>
<a id="trace-21022"></a>
<a id="trace-21024"></a>
<a id="trace-21042"></a>
<a id="trace-21044"></a>
<a id="trace-21048"></a>
<a id="trace-21050"></a>
<a id="trace-21068"></a>
<a id="trace-21070"></a>
<a id="trace-21082"></a>
<a id="trace-21084"></a>
<a id="trace-21153"></a>
<a id="trace-21155"></a>
<a id="trace-21161"></a>
<a id="trace-21163"></a>
<a id="trace-21181"></a>
<a id="trace-21183"></a>
<a id="trace-21270"></a>
<a id="trace-21272"></a>
<a id="trace-21300"></a>
<a id="trace-21302"></a>
<a id="trace-21322"></a>
<a id="trace-21324"></a>
<a id="trace-21414"></a>
<a id="trace-21416"></a>
<a id="trace-21449"></a>
<a id="trace-21451"></a>
<a id="trace-21461"></a>
<a id="trace-21463"></a>
<a id="trace-21476"></a>
<a id="trace-21478"></a>
<a id="trace-21488"></a>
<a id="trace-21490"></a>
<a id="trace-21503"></a>
<a id="trace-21505"></a>
<a id="trace-21514"></a>
<a id="trace-21516"></a>
<a id="trace-21657"></a>
<a id="trace-21659"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21689"></a>
<a id="trace-21691"></a>
<a id="trace-21736"></a>
<a id="trace-21738"></a>
<a id="trace-21742"></a>
<a id="trace-21744"></a>
<a id="trace-21758"></a>
<a id="trace-21760"></a>
<a id="trace-21766"></a>
<a id="trace-21768"></a>
<a id="trace-21892"></a>
<a id="trace-21894"></a>
<a id="trace-21921"></a>
<a id="trace-21923"></a>
<a id="trace-21942"></a>
<a id="trace-21944"></a>
<a id="trace-21956"></a>
<a id="trace-21958"></a>
<a id="trace-21969"></a>
<a id="trace-21971"></a>
<a id="trace-21997"></a>
<a id="trace-21999"></a>
<a id="trace-22005"></a>
<a id="trace-22007"></a>
<a id="trace-22074"></a>
<a id="trace-22076"></a>
<a id="trace-22095"></a>
<a id="trace-22097"></a>
<a id="trace-22104"></a>
<a id="trace-22106"></a>
<a id="trace-22126"></a>
<a id="trace-22128"></a>
<a id="trace-22146"></a>
<a id="trace-22148"></a>
<a id="trace-22154"></a>
<a id="trace-22156"></a>
<a id="trace-22170"></a>
<a id="trace-22172"></a>
<a id="trace-22179"></a>
<a id="trace-22181"></a>
<a id="trace-22252"></a>
<a id="trace-22254"></a>
<a id="trace-22258"></a>
<a id="trace-22260"></a>
<a id="trace-22280"></a>
<a id="trace-22282"></a>
<a id="trace-22288"></a>
<a id="trace-22290"></a>
<a id="trace-22306"></a>
<a id="trace-22308"></a>
<a id="trace-22331"></a>
<a id="trace-22333"></a>
<a id="trace-22337"></a>
<a id="trace-22339"></a>
<a id="trace-22514"></a>
<a id="trace-22516"></a>
<a id="trace-22604"></a>
<a id="trace-22606"></a>
<a id="trace-22623"></a>
<a id="trace-22625"></a>
<a id="trace-22640"></a>
<a id="trace-22642"></a>
<a id="trace-22655"></a>
<a id="trace-22657"></a>
<a id="trace-22671"></a>
<a id="trace-22673"></a>
<a id="trace-22693"></a>
<a id="trace-22695"></a>
<a id="trace-22705"></a>
<a id="trace-22707"></a>
<a id="trace-22717"></a>
<a id="trace-22719"></a>
<a id="trace-22730"></a>
<a id="trace-22732"></a>
<a id="trace-22741"></a>
<a id="trace-22743"></a>
<a id="trace-22834"></a>
<a id="trace-22836"></a>
<a id="trace-22848"></a>
<a id="trace-22850"></a>
<a id="trace-22876"></a>
<a id="trace-22878"></a>
<a id="trace-22889"></a>
<a id="trace-22891"></a>
<a id="trace-22919"></a>
<a id="trace-22921"></a>
<a id="trace-22930"></a>
<a id="trace-22932"></a>
<a id="trace-22999"></a>
<a id="trace-23001"></a>
<a id="trace-23021"></a>
<a id="trace-23023"></a>
<a id="trace-23041"></a>
<a id="trace-23043"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23099"></a>
<a id="trace-23101"></a>
<a id="trace-23111"></a>
<a id="trace-23113"></a>
<a id="trace-23199"></a>
<a id="trace-23201"></a>
<a id="trace-23232"></a>
<a id="trace-23234"></a>
<a id="trace-23396"></a>
<a id="trace-23398"></a>
<a id="trace-23408"></a>
<a id="trace-23410"></a>
<a id="trace-23429"></a>
<a id="trace-23431"></a>
<a id="trace-23438"></a>
<a id="trace-23440"></a>
<a id="trace-23513"></a>
<a id="trace-23515"></a>
<a id="trace-23530"></a>
<a id="trace-23532"></a>
<a id="trace-23558"></a>
<a id="trace-23560"></a>
<a id="trace-23580"></a>
<a id="trace-23582"></a>
<a id="trace-23613"></a>
<a id="trace-23615"></a>
<a id="trace-23714"></a>
<a id="trace-23716"></a>
<a id="trace-23733"></a>
<a id="trace-23735"></a>
<a id="trace-23742"></a>
<a id="trace-23744"></a>
<a id="trace-23777"></a>
<a id="trace-23779"></a>
<a id="trace-23795"></a>
<a id="trace-23797"></a>
<a id="trace-23808"></a>
<a id="trace-23810"></a>
<a id="trace-23831"></a>
<a id="trace-23833"></a>
<a id="trace-23840"></a>
<a id="trace-23842"></a>
<a id="trace-23910"></a>
<a id="trace-23912"></a>
<a id="trace-23933"></a>
<a id="trace-23935"></a>
<a id="trace-23939"></a>
<a id="trace-23941"></a>
<a id="trace-23952"></a>
<a id="trace-23954"></a>
<a id="trace-23963"></a>
<a id="trace-23965"></a>
<a id="trace-23977"></a>
<a id="trace-23979"></a>
<a id="trace-23985"></a>
<a id="trace-23987"></a>
<a id="trace-24003"></a>
<a id="trace-24005"></a>
<a id="trace-24011"></a>
<a id="trace-24013"></a>
<a id="trace-24090"></a>
<a id="trace-24092"></a>
<a id="trace-24102"></a>
<a id="trace-24104"></a>
<a id="trace-24116"></a>
<a id="trace-24118"></a>
<a id="trace-24125"></a>
<a id="trace-24127"></a>
<a id="trace-24139"></a>
<a id="trace-24141"></a>
<a id="trace-24147"></a>
<a id="trace-24149"></a>
<a id="trace-24161"></a>
<a id="trace-24163"></a>
<a id="trace-24457"></a>
<a id="trace-24459"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24569"></a>
<a id="trace-24571"></a>
<a id="trace-24600"></a>
<a id="trace-24602"></a>
<a id="trace-25405"></a>
<a id="trace-25407"></a>
<a id="trace-25420"></a>
<a id="trace-25422"></a>
<a id="trace-25830"></a>
<a id="trace-25832"></a>
<a id="trace-25855"></a>
<a id="trace-25857"></a>
<a id="trace-25882"></a>
<a id="trace-25884"></a>
<a id="trace-25897"></a>
<a id="trace-25899"></a>
<a id="trace-25975"></a>
<a id="trace-25977"></a>
<a id="trace-26000"></a>
<a id="trace-26002"></a>
<a id="trace-26398"></a>
<a id="trace-26400"></a>
<a id="trace-26416"></a>
<a id="trace-26418"></a>
<a id="trace-26432"></a>
<a id="trace-26434"></a>
<a id="trace-26491"></a>
<a id="trace-26493"></a>
<a id="trace-26561"></a>
<a id="trace-26563"></a>
<a id="trace-26566"></a>
<a id="trace-26568"></a>
<a id="trace-26581"></a>
<a id="trace-26583"></a>
<a id="trace-26587"></a>
<a id="trace-26589"></a>
<a id="trace-26602"></a>
<a id="trace-26604"></a>
<a id="trace-26611"></a>
<a id="trace-26613"></a>
<a id="trace-26623"></a>
<a id="trace-26625"></a>
<a id="trace-26644"></a>
<a id="trace-26646"></a>
<a id="trace-26658"></a>
<a id="trace-26660"></a>
<a id="trace-26663"></a>
<a id="trace-26665"></a>
<a id="trace-26750"></a>
<a id="trace-26752"></a>
<a id="trace-26756"></a>
<a id="trace-26758"></a>
<a id="trace-26770"></a>
<a id="trace-26772"></a>
<a id="trace-26780"></a>
<a id="trace-26782"></a>
<a id="trace-26794"></a>
<a id="trace-26796"></a>
<a id="trace-26805"></a>
<a id="trace-26807"></a>
<a id="trace-26820"></a>
<a id="trace-26822"></a>
<a id="trace-26828"></a>
<a id="trace-26830"></a>
<a id="trace-26897"></a>
<a id="trace-26899"></a>
<a id="trace-26902"></a>
<a id="trace-26904"></a>
<a id="trace-26914"></a>
<a id="trace-26916"></a>
<a id="trace-26919"></a>
<a id="trace-26921"></a>
<a id="trace-26938"></a>
<a id="trace-26940"></a>
<a id="trace-26949"></a>
<a id="trace-26951"></a>
<a id="trace-26956"></a>
<a id="trace-26958"></a>
<a id="trace-26967"></a>
<a id="trace-26969"></a>
<a id="trace-26977"></a>
<a id="trace-26979"></a>
<a id="trace-27049"></a>
<a id="trace-27051"></a>
<a id="trace-27065"></a>
<a id="trace-27067"></a>
<a id="trace-27072"></a>
<a id="trace-27074"></a>
<a id="trace-27088"></a>
<a id="trace-27090"></a>
<a id="trace-27096"></a>
<a id="trace-27098"></a>
<a id="trace-27109"></a>
<a id="trace-27111"></a>
<a id="trace-27117"></a>
<a id="trace-27119"></a>
<a id="trace-27131"></a>
<a id="trace-27133"></a>
<a id="trace-27138"></a>
<a id="trace-27140"></a>
<a id="trace-27207"></a>
<a id="trace-27209"></a>
<a id="trace-27213"></a>
<a id="trace-27215"></a>
<a id="trace-27228"></a>
<a id="trace-27230"></a>
<a id="trace-27233"></a>
<a id="trace-27235"></a>
<a id="trace-27254"></a>
<a id="trace-27256"></a>
<a id="trace-27274"></a>
<a id="trace-27276"></a>
<a id="trace-27288"></a>
<a id="trace-27290"></a>
<a id="trace-27299"></a>
<a id="trace-27301"></a>
<a id="trace-27367"></a>
<a id="trace-27369"></a>
<a id="trace-27378"></a>
<a id="trace-27380"></a>
<a id="trace-27399"></a>
<a id="trace-27401"></a>
<a id="trace-27411"></a>
<a id="trace-27413"></a>
<a id="trace-27429"></a>
<a id="trace-27431"></a>
<a id="trace-27437"></a>
<a id="trace-27439"></a>
<a id="trace-27448"></a>
<a id="trace-27450"></a>
<a id="trace-27454"></a>
<a id="trace-27456"></a>
<a id="trace-27520"></a>
<a id="trace-27522"></a>
<a id="trace-27537"></a>
<a id="trace-27539"></a>
<a id="trace-27542"></a>
<a id="trace-27544"></a>
<a id="trace-27553"></a>
<a id="trace-27555"></a>
<a id="trace-27562"></a>
<a id="trace-27564"></a>
<a id="trace-27570"></a>
<a id="trace-27572"></a>
<a id="trace-27578"></a>
<a id="trace-27580"></a>
<a id="trace-27590"></a>
<a id="trace-27592"></a>
<a id="trace-27651"></a>
<a id="trace-27653"></a>
<a id="trace-27668"></a>
<a id="trace-27670"></a>
<a id="trace-27729"></a>
<a id="trace-27731"></a>
<a id="trace-27747"></a>
<a id="trace-27749"></a>
<a id="trace-27773"></a>
<a id="trace-27775"></a>
<a id="trace-27781"></a>
<a id="trace-27783"></a>
<a id="trace-27923"></a>
<a id="trace-27925"></a>
<a id="trace-27943"></a>
<a id="trace-27945"></a>
<a id="trace-27957"></a>
<a id="trace-27959"></a>
<a id="trace-28013"></a>
<a id="trace-28015"></a>
<a id="trace-28034"></a>
<a id="trace-28036"></a>
<a id="trace-28050"></a>
<a id="trace-28052"></a>
<a id="trace-28139"></a>
<a id="trace-28141"></a>
<a id="trace-28147"></a>
<a id="trace-28149"></a>
<a id="trace-28159"></a>
<a id="trace-28161"></a>
<a id="trace-28169"></a>
<a id="trace-28171"></a>
<a id="trace-28184"></a>
<a id="trace-28186"></a>
<a id="trace-28192"></a>
<a id="trace-28194"></a>
<a id="trace-28276"></a>
<a id="trace-28278"></a>
<a id="trace-28282"></a>
<a id="trace-28284"></a>
<a id="trace-28295"></a>
<a id="trace-28297"></a>
<a id="trace-28313"></a>
<a id="trace-28315"></a>
<a id="trace-28324"></a>
<a id="trace-28326"></a>
<a id="trace-28343"></a>
<a id="trace-28345"></a>
<a id="trace-28363"></a>
<a id="trace-28365"></a>
<a id="trace-28378"></a>
<a id="trace-28380"></a>
<a id="trace-28450"></a>
<a id="trace-28452"></a>
<a id="trace-28464"></a>
<a id="trace-28466"></a>
<a id="trace-28469"></a>
<a id="trace-28471"></a>
<a id="trace-28481"></a>
<a id="trace-28483"></a>
<a id="trace-28501"></a>
<a id="trace-28503"></a>
<a id="trace-28510"></a>
<a id="trace-28512"></a>
<a id="trace-28523"></a>
<a id="trace-28525"></a>
<a id="trace-28598"></a>
<a id="trace-28600"></a>
<a id="trace-28611"></a>
<a id="trace-28613"></a>
<a id="trace-28636"></a>
<a id="trace-28638"></a>
<a id="trace-28641"></a>
<a id="trace-28643"></a>
<a id="trace-28660"></a>
<a id="trace-28662"></a>
<a id="trace-28672"></a>
<a id="trace-28674"></a>
<a id="trace-28681"></a>
<a id="trace-28683"></a>
<a id="trace-28693"></a>
<a id="trace-28695"></a>
<a id="trace-28701"></a>
<a id="trace-28703"></a>
<a id="trace-28767"></a>
<a id="trace-28769"></a>
<a id="trace-28774"></a>
<a id="trace-28776"></a>
<a id="trace-28792"></a>
<a id="trace-28794"></a>
<a id="trace-28798"></a>
<a id="trace-28800"></a>
<a id="trace-28817"></a>
<a id="trace-28819"></a>
<a id="trace-28835"></a>
<a id="trace-28837"></a>
<a id="trace-28849"></a>
<a id="trace-28851"></a>
<a id="trace-28856"></a>
<a id="trace-28858"></a>
<a id="trace-28868"></a>
<a id="trace-28870"></a>
<a id="trace-28876"></a>
<a id="trace-28878"></a>
<a id="trace-28942"></a>
<a id="trace-28944"></a>
<a id="trace-28950"></a>
<a id="trace-28952"></a>
<a id="trace-28963"></a>
<a id="trace-28965"></a>
<a id="trace-28968"></a>
<a id="trace-28970"></a>
<a id="trace-28981"></a>
<a id="trace-28983"></a>
<a id="trace-28993"></a>
<a id="trace-28995"></a>
<a id="trace-29017"></a>
<a id="trace-29019"></a>
<a id="trace-29043"></a>
<a id="trace-29045"></a>
<a id="trace-29119"></a>
<a id="trace-29121"></a>
<a id="trace-29132"></a>
<a id="trace-29134"></a>
<a id="trace-29149"></a>
<a id="trace-29151"></a>
<a id="trace-29157"></a>
<a id="trace-29159"></a>
<a id="trace-29170"></a>
<a id="trace-29172"></a>
<a id="trace-29191"></a>
<a id="trace-29193"></a>
<a id="trace-29197"></a>
<a id="trace-29199"></a>
<a id="trace-29290"></a>
<a id="trace-29292"></a>
<a id="trace-29315"></a>
<a id="trace-29317"></a>
<a id="trace-29325"></a>
<a id="trace-29327"></a>
<a id="trace-29337"></a>
<a id="trace-29339"></a>
<a id="trace-29344"></a>
<a id="trace-29346"></a>
<a id="trace-29361"></a>
<a id="trace-29363"></a>
<a id="trace-29429"></a>
<a id="trace-29431"></a>
<a id="trace-29435"></a>
<a id="trace-29437"></a>
<a id="trace-29452"></a>
<a id="trace-29454"></a>
<a id="trace-29472"></a>
<a id="trace-29474"></a>
<a id="trace-29489"></a>
<a id="trace-29491"></a>
<a id="trace-29502"></a>
<a id="trace-29504"></a>
<a id="trace-29515"></a>
<a id="trace-29517"></a>
<a id="trace-29532"></a>
<a id="trace-29534"></a>
<a id="trace-29599"></a>
<a id="trace-29601"></a>
<a id="trace-29605"></a>
<a id="trace-29607"></a>
<a id="trace-29619"></a>
<a id="trace-29621"></a>
<a id="trace-29644"></a>
<a id="trace-29646"></a>
<a id="trace-29656"></a>
<a id="trace-29658"></a>
<a id="trace-29669"></a>
<a id="trace-29671"></a>
<a id="trace-29695"></a>
<a id="trace-29697"></a>
<a id="trace-29763"></a>
<a id="trace-29765"></a>
<a id="trace-29789"></a>
<a id="trace-29791"></a>
<a id="trace-29802"></a>
<a id="trace-29804"></a>
<a id="trace-29821"></a>
<a id="trace-29823"></a>
<a id="trace-29828"></a>
<a id="trace-29830"></a>
<a id="trace-29843"></a>
<a id="trace-29845"></a>
<a id="trace-29853"></a>
<a id="trace-29855"></a>
<a id="trace-29934"></a>
<a id="trace-29936"></a>
<a id="trace-29948"></a>
<a id="trace-29950"></a>
<a id="trace-29954"></a>
<a id="trace-29956"></a>
<a id="trace-29967"></a>
<a id="trace-29969"></a>
<a id="trace-29981"></a>
<a id="trace-29983"></a>
<a id="trace-29999"></a>
<a id="trace-30001"></a>
<a id="trace-30016"></a>
<a id="trace-30018"></a>
<a id="trace-30022"></a>
<a id="trace-30024"></a>
<a id="trace-30108"></a>
<a id="trace-30110"></a>
<a id="trace-30118"></a>
<a id="trace-30120"></a>
<a id="trace-30136"></a>
<a id="trace-30138"></a>
<a id="trace-30145"></a>
<a id="trace-30147"></a>
<a id="trace-30159"></a>
<a id="trace-30161"></a>
<a id="trace-30167"></a>
<a id="trace-30169"></a>
<a id="trace-30183"></a>
<a id="trace-30185"></a>
<a id="trace-30259"></a>
<a id="trace-30261"></a>
<a id="trace-30265"></a>
<a id="trace-30267"></a>
<a id="trace-30277"></a>
<a id="trace-30279"></a>
<a id="trace-30305"></a>
<a id="trace-30307"></a>
<a id="trace-30320"></a>
<a id="trace-30322"></a>
<a id="trace-30327"></a>
<a id="trace-30329"></a>
<a id="trace-30346"></a>
<a id="trace-30348"></a>
<a id="trace-30353"></a>
<a id="trace-30355"></a>
<a id="trace-30422"></a>
<a id="trace-30424"></a>
<a id="trace-30429"></a>
<a id="trace-30431"></a>
<a id="trace-30445"></a>
<a id="trace-30447"></a>
<a id="trace-30451"></a>
<a id="trace-30453"></a>
<a id="trace-30475"></a>
<a id="trace-30477"></a>
<a id="trace-30494"></a>
<a id="trace-30496"></a>
<a id="trace-30513"></a>
<a id="trace-30515"></a>
<a id="trace-30583"></a>
<a id="trace-30585"></a>
<a id="trace-30595"></a>
<a id="trace-30597"></a>
<a id="trace-30610"></a>
<a id="trace-30612"></a>
<a id="trace-30615"></a>
<a id="trace-30617"></a>
<a id="trace-30628"></a>
<a id="trace-30630"></a>
<a id="trace-30637"></a>
<a id="trace-30639"></a>
<a id="trace-30649"></a>
<a id="trace-30651"></a>
<a id="trace-30662"></a>
<a id="trace-30664"></a>
<a id="trace-30678"></a>
<a id="trace-30680"></a>
<a id="trace-30686"></a>
<a id="trace-30688"></a>
<a id="trace-30752"></a>
<a id="trace-30754"></a>
<a id="trace-30761"></a>
<a id="trace-30763"></a>
<a id="trace-30775"></a>
<a id="trace-30777"></a>
<a id="trace-30801"></a>
<a id="trace-30803"></a>
<a id="trace-30809"></a>
<a id="trace-30811"></a>
<a id="trace-30822"></a>
<a id="trace-30824"></a>
<a id="trace-30830"></a>
<a id="trace-30832"></a>
<a id="trace-30843"></a>
<a id="trace-30845"></a>
- 5.70s–359.30s (×1099), actor 37, squad 4 (trace 853): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 729. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624536610865512, 'next_transition': 997}.
<a id="trace-867"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 867): traveling overwatch. Knowledge: actor memory at 5.00s, trace 714. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299950073740715, 'next_transition': 993}.
<a id="trace-868"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 868): received platoon directive. Knowledge: actor memory at 5.00s, trace 714. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299950073740715, 'next_transition': 993}.
<a id="trace-993"></a>
<a id="trace-995"></a>
<a id="trace-1032"></a>
<a id="trace-1034"></a>
<a id="trace-1076"></a>
<a id="trace-1078"></a>
<a id="trace-1112"></a>
<a id="trace-1114"></a>
<a id="trace-1142"></a>
<a id="trace-1144"></a>
<a id="trace-1192"></a>
<a id="trace-1194"></a>
<a id="trace-1224"></a>
<a id="trace-1226"></a>
<a id="trace-1251"></a>
<a id="trace-1253"></a>
<a id="trace-1345"></a>
<a id="trace-1347"></a>
<a id="trace-1371"></a>
<a id="trace-1373"></a>
<a id="trace-1393"></a>
<a id="trace-1395"></a>
<a id="trace-1418"></a>
<a id="trace-1420"></a>
<a id="trace-1444"></a>
<a id="trace-1446"></a>
<a id="trace-1458"></a>
<a id="trace-1460"></a>
<a id="trace-1484"></a>
<a id="trace-1486"></a>
<a id="trace-1497"></a>
<a id="trace-1499"></a>
<a id="trace-1533"></a>
<a id="trace-1535"></a>
- 6.20s–14.20s (×34), actor 5, squad 0 (trace 993): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 719. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2057798665055814, 'next_transition': 1032}.
<a id="trace-1543"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 1543): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1264. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1705}.
<a id="trace-1705"></a>
<a id="trace-1707"></a>
<a id="trace-2466"></a>
<a id="trace-2468"></a>
- 14.70s–15.20s (×4), actor 5, squad 0 (trace 1705): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1269. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.019685436399785483, 'next_transition': 2466}.
<a id="trace-1718"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1718): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1272. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0761758767589846, 'next_transition': 1969}.
<a id="trace-1719"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1719): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1272. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0761758767589846, 'next_transition': 1969}.
<a id="trace-1720"></a>
<a id="trace-1969"></a>
<a id="trace-2235"></a>
<a id="trace-2840"></a>
<a id="trace-3067"></a>
- 14.90s–16.10s (×5), actor 8, squad 1 (trace 1720): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1272. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0761758767589846, 'next_transition': 1969}.
<a id="trace-2490"></a>
- 15.40s–15.40s (×1), actor 0, squad 0 (trace 2490): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1943. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07179634419009438, 'next_transition': 2814}.
<a id="trace-2491"></a>
- 15.40s–15.40s (×1), actor 0, squad 0 (trace 2491): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1943. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07179634419009438, 'next_transition': 2814}.
<a id="trace-2492"></a>
- 15.40s–15.40s (×1), actor 0, squad 0 (trace 2492): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1943. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07179634419009438, 'next_transition': 2814}.
<a id="trace-2814"></a>
<a id="trace-2816"></a>
<a id="trace-3311"></a>
<a id="trace-3313"></a>
- 15.70s–16.25s (×4), actor 5, squad 0 (trace 2814): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1948. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6155069212457634, 'next_transition': 3311}.
<a id="trace-3363"></a>
- 16.65s–16.65s (×1), actor 0, squad 0 (trace 3363): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1943. Next observer evidence: None.
<a id="trace-3671"></a>
<a id="trace-3673"></a>
<a id="trace-3720"></a>
<a id="trace-3722"></a>
- 16.75s–17.25s (×4), actor 5, squad 0 (trace 3671): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1948. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.204876443824894, 'next_transition': 3720}.
<a id="trace-3737"></a>
- 17.35s–17.35s (×1), actor 0, squad 0 (trace 3737): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1943. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5315651324609121, 'next_transition': 4067}.
<a id="trace-4067"></a>
<a id="trace-4069"></a>
<a id="trace-4154"></a>
<a id="trace-4156"></a>
- 17.75s–18.25s (×4), actor 5, squad 0 (trace 4067): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1948. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.257416008830727, 'next_transition': 4154}.
<a id="trace-345"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (events line 345): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-346"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (events line 346): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4185"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 4185): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810503 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4185. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11257296492316185, 'next_transition': 4205}.
<a id="trace-4186"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 4186): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810503 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4186. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11257296492316185, 'next_transition': 4205}.
<a id="trace-4187"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 4187): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810503 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4187. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5783600000000002, 'next_transition': 4267}.
<a id="trace-4188"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 4188): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810503 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4188. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5783600000000002, 'next_transition': 4267}.
<a id="trace-4205"></a>
<a id="trace-4207"></a>
<a id="trace-4244"></a>
<a id="trace-4246"></a>
<a id="trace-4281"></a>
<a id="trace-4283"></a>
<a id="trace-4376"></a>
<a id="trace-4378"></a>
<a id="trace-4397"></a>
<a id="trace-4399"></a>
<a id="trace-4610"></a>
<a id="trace-4612"></a>
<a id="trace-4625"></a>
<a id="trace-4627"></a>
<a id="trace-4654"></a>
<a id="trace-4656"></a>
- 18.75s–22.25s (×16), actor 5, squad 0 (trace 4205): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 4188. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14723383783090638, 'next_transition': 4244}.
<a id="trace-4267"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 4267): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1951. Next observer evidence: {'until': 20.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4405}.
<a id="trace-4269"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 4269): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 15.00s, trace 1951. Next observer evidence: {'until': 20.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4405}.
<a id="trace-4405"></a>
- 20.80s–20.80s (×1), actor 8, squad 1 (trace 4405): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4306. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4678}.
<a id="trace-4663"></a>
- 22.60s–22.60s (×1), actor 1, squad 0 (trace 4663): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4299. Next observer evidence: None.
<a id="trace-4666"></a>
<a id="trace-4668"></a>
<a id="trace-4883"></a>
<a id="trace-4885"></a>
<a id="trace-4906"></a>
<a id="trace-4908"></a>
<a id="trace-4942"></a>
<a id="trace-4944"></a>
- 22.75s–24.25s (×8), actor 5, squad 0 (trace 4666): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4303. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1670212613680653, 'next_transition': 4883}.
<a id="trace-4678"></a>
- 22.85s–22.85s (×1), actor 8, squad 1 (trace 4678): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4306. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8232}.
<a id="trace-4957"></a>
- 24.60s–24.60s (×1), actor 1, squad 0 (trace 4957): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 20.00s, trace 4299. Next observer evidence: None.
<a id="trace-7926"></a>
- 24.60s–24.60s (×1), actor 1, squad 0 (trace 7926): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 20.00s, trace 4299. Next observer evidence: None.
<a id="trace-7927"></a>
- 24.60s–24.60s (×1), actor 1, squad 0 (trace 7927): MoveTactically. Knowledge: actor memory at 20.00s, trace 4299. Next observer evidence: None.
<a id="trace-7928"></a>
- 24.60s–24.60s (×1), actor 1, squad 0 (trace 7928): contact cover complete: assessment resumes closure. Knowledge: actor memory at 20.00s, trace 4299. Next observer evidence: None.
<a id="trace-8095"></a>
<a id="trace-8097"></a>
<a id="trace-8183"></a>
<a id="trace-8185"></a>
<a id="trace-8211"></a>
<a id="trace-8213"></a>
<a id="trace-8241"></a>
<a id="trace-8243"></a>
<a id="trace-8254"></a>
<a id="trace-8256"></a>
<a id="trace-8274"></a>
<a id="trace-8276"></a>
<a id="trace-8291"></a>
<a id="trace-8293"></a>
<a id="trace-8310"></a>
<a id="trace-8312"></a>
<a id="trace-8325"></a>
<a id="trace-8327"></a>
<a id="trace-8338"></a>
<a id="trace-8340"></a>
<a id="trace-8355"></a>
<a id="trace-8357"></a>
<a id="trace-8431"></a>
<a id="trace-8433"></a>
- 24.75s–30.25s (×24), actor 5, squad 0 (trace 8095): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4303. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4949889835921108, 'next_transition': 8183}.
<a id="trace-8232"></a>
- 26.20s–26.20s (×1), actor 8, squad 1 (trace 8232): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 8113. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 530}.
<a id="trace-8234"></a>
- 26.20s–26.20s (×1), actor 8, squad 1 (trace 8234): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 8113. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 530}.
<a id="trace-8439"></a>
- 30.70s–30.70s (×1), actor 2, squad 0 (trace 8439): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 8364. Next observer evidence: None.
<a id="trace-8440"></a>
- 30.70s–30.70s (×1), actor 2, squad 0 (trace 8440): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 8364. Next observer evidence: None.
<a id="trace-8810"></a>
<a id="trace-8812"></a>
<a id="trace-8837"></a>
<a id="trace-8839"></a>
<a id="trace-8850"></a>
<a id="trace-8852"></a>
- 30.75s–31.75s (×6), actor 5, squad 0 (trace 8810): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 8367. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260002420986925, 'next_transition': 8837}.
<a id="trace-530"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 530): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8824"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 8824): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.573006 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 8824. Next observer evidence: {'until': 32.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04630500000000026, 'next_transition': 9278}.
<a id="trace-8825"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 8825): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.573006 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 8825. Next observer evidence: {'until': 32.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04630500000000026, 'next_transition': 9278}.
<a id="trace-8879"></a>
- 31.95s–31.95s (×1), actor 2, squad 0 (trace 8879): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 30.00s, trace 8364. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399950376263815, 'next_transition': 8907}.
<a id="trace-8881"></a>
- 31.95s–31.95s (×1), actor 2, squad 0 (trace 8881): NeedSupport. Knowledge: actor memory at 30.00s, trace 8364. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399950376263815, 'next_transition': 8907}.
<a id="trace-8907"></a>
<a id="trace-8909"></a>
- 32.25s–32.25s (×2), actor 5, squad 0 (trace 8907): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 8825. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400094485314914, 'next_transition': 9263}.
<a id="trace-8914"></a>
- 32.25s–32.25s (×1), actor 2, squad 0 (trace 8914): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 8364. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400094485314914, 'next_transition': 9263}.
<a id="trace-8919"></a>
- 32.25s–32.25s (×1), actor 2, squad 0 (trace 8919): MoveTactically. Knowledge: actor memory at 30.00s, trace 8364. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400094485314914, 'next_transition': 9263}.
<a id="trace-8920"></a>
- 32.25s–32.25s (×1), actor 2, squad 0 (trace 8920): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 30.00s, trace 8364. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400094485314914, 'next_transition': 9263}.
<a id="trace-9263"></a>
<a id="trace-9265"></a>
<a id="trace-9316"></a>
<a id="trace-9318"></a>
<a id="trace-10433"></a>
<a id="trace-10435"></a>
- 32.75s–33.75s (×6), actor 5, squad 0 (trace 9263): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 8825. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.837496092866326, 'next_transition': 9316}.
<a id="trace-9278"></a>
- 32.90s–32.90s (×1), actor 8, squad 1 (trace 9278): received platoon directive; retain held slots. Knowledge: actor memory at 30.00s, trace 8370. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0015299999999998093, 'next_transition': 9358}.
<a id="trace-9358"></a>
- 33.60s–33.60s (×1), actor 8, squad 1 (trace 9358): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 8370. Next observer evidence: None.
<a id="trace-9359"></a>
- 33.60s–33.60s (×1), actor 8, squad 1 (trace 9359): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 30.00s, trace 8370. Next observer evidence: None.
<a id="trace-10422"></a>
- 33.65s–33.65s (×1), actor 8, squad 1 (trace 10422): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 30.00s, trace 8370. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.045030000000000125, 'next_transition': 10695}.
<a id="trace-10460"></a>
- 34.05s–34.05s (×1), actor 5, squad 0 (trace 10460): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 34.05s, trace 10460. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249984844245066, 'next_transition': 10472}.
<a id="trace-10472"></a>
<a id="trace-10474"></a>
<a id="trace-10505"></a>
<a id="trace-10507"></a>
<a id="trace-10582"></a>
<a id="trace-10584"></a>
<a id="trace-10599"></a>
<a id="trace-10601"></a>
<a id="trace-10619"></a>
<a id="trace-10621"></a>
<a id="trace-10644"></a>
<a id="trace-10646"></a>
<a id="trace-10664"></a>
<a id="trace-10666"></a>
<a id="trace-10683"></a>
<a id="trace-10685"></a>
- 34.25s–37.75s (×16), actor 5, squad 0 (trace 10472): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.05s, trace 10460. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0500035173636832, 'next_transition': 10505}.
<a id="trace-10695"></a>
- 37.85s–37.85s (×1), actor 9, squad 1 (trace 10695): NeedSupport. Knowledge: actor memory at 35.00s, trace 10523. Next observer evidence: {'until': 40.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 793}.
<a id="trace-10707"></a>
- 38.00s–38.00s (×1), actor 2, squad 0 (trace 10707): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 10517. Next observer evidence: {'until': 38.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.315004722040764, 'next_transition': 11170}.
<a id="trace-10708"></a>
- 38.00s–38.00s (×1), actor 2, squad 0 (trace 10708): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 10517. Next observer evidence: {'until': 38.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.315004722040764, 'next_transition': 11170}.
<a id="trace-11170"></a>
<a id="trace-11172"></a>
- 38.25s–38.25s (×2), actor 5, squad 0 (trace 11170): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 10520. Next observer evidence: {'until': 38.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.709093995550646, 'next_transition': 11657}.
<a id="trace-11177"></a>
- 38.25s–38.25s (×1), actor 2, squad 0 (trace 11177): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 10517. Next observer evidence: {'until': 38.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.709093995550646, 'next_transition': 11657}.
<a id="trace-11657"></a>
<a id="trace-11659"></a>
<a id="trace-11697"></a>
<a id="trace-11699"></a>
- 38.75s–39.25s (×4), actor 5, squad 0 (trace 11657): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 10520. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4212917628357193, 'next_transition': 11697}.
<a id="trace-11722"></a>
- 39.60s–39.60s (×1), actor 2, squad 0 (trace 11722): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 10517. Next observer evidence: None.
<a id="trace-11723"></a>
- 39.60s–39.60s (×1), actor 2, squad 0 (trace 11723): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 35.00s, trace 10517. Next observer evidence: None.
<a id="trace-14788"></a>
<a id="trace-14790"></a>
- 39.75s–39.75s (×2), actor 5, squad 0 (trace 14788): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 10520. Next observer evidence: {'until': 40, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3036878444088479, 'next_transition': 14829}.
<a id="trace-14829"></a>
- 40.05s–40.05s (×1), actor 5, squad 0 (trace 14829): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 40.05s, trace 14829. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0814841723184461, 'next_transition': 14897}.
<a id="trace-14897"></a>
<a id="trace-14899"></a>
<a id="trace-14937"></a>
<a id="trace-14939"></a>
<a id="trace-14971"></a>
<a id="trace-14973"></a>
<a id="trace-14995"></a>
<a id="trace-14997"></a>
- 40.25s–41.75s (×8), actor 5, squad 0 (trace 14897): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.05s, trace 14829. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999533635033127, 'next_transition': 14937}.
<a id="trace-793"></a>
- 40.85s–40.85s (×1), actor 5, squad 1 (events line 793): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14951"></a>
- 40.85s–40.85s (×1), actor 5, squad 1 (trace 14951): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.423319 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 40.85s, trace 14951. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15012}.
<a id="trace-14952"></a>
- 40.85s–40.85s (×1), actor 5, squad 1 (trace 14952): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.423319 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 40.85s, trace 14952. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15012}.
<a id="trace-15012"></a>
- 42.05s–42.05s (×1), actor 9, squad 1 (trace 15012): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 14812. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15057}.
<a id="trace-15013"></a>
- 42.05s–42.05s (×1), actor 9, squad 1 (trace 15013): received platoon directive. Knowledge: actor memory at 40.00s, trace 14812. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15057}.
<a id="trace-813"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 813): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15021"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 15021): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.411568 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 15021. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19080623676600408, 'next_transition': 15028}.
<a id="trace-15022"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 15022): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.411568 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 15022. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19080623676600408, 'next_transition': 15028}.
<a id="trace-15028"></a>
<a id="trace-15030"></a>
<a id="trace-15049"></a>
<a id="trace-15051"></a>
<a id="trace-15078"></a>
<a id="trace-15080"></a>
<a id="trace-15093"></a>
<a id="trace-15095"></a>
<a id="trace-15118"></a>
<a id="trace-15120"></a>
<a id="trace-15139"></a>
<a id="trace-15141"></a>
<a id="trace-15219"></a>
<a id="trace-15221"></a>
<a id="trace-15289"></a>
<a id="trace-15291"></a>
<a id="trace-15309"></a>
<a id="trace-15311"></a>
<a id="trace-15324"></a>
<a id="trace-15326"></a>
<a id="trace-15342"></a>
<a id="trace-15344"></a>
<a id="trace-15356"></a>
<a id="trace-15358"></a>
<a id="trace-15374"></a>
<a id="trace-15376"></a>
<a id="trace-15391"></a>
<a id="trace-15393"></a>
<a id="trace-15406"></a>
<a id="trace-15408"></a>
<a id="trace-15437"></a>
<a id="trace-15439"></a>
<a id="trace-15532"></a>
<a id="trace-15534"></a>
<a id="trace-15553"></a>
<a id="trace-15555"></a>
<a id="trace-15577"></a>
<a id="trace-15579"></a>
<a id="trace-15590"></a>
<a id="trace-15592"></a>
<a id="trace-15623"></a>
<a id="trace-15625"></a>
- 42.25s–52.25s (×42), actor 5, squad 0 (trace 15028): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 15022. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4121153031812741, 'next_transition': 15049}.
<a id="trace-15057"></a>
- 42.80s–42.80s (×1), actor 9, squad 1 (trace 15057): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 40.00s, trace 14812. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15228}.
<a id="trace-15228"></a>
- 45.35s–45.35s (×1), actor 9, squad 1 (trace 15228): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 45.00s, trace 15157. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.924959334715897, 'next_transition': 1011}.
<a id="trace-15229"></a>
- 45.35s–45.35s (×1), actor 9, squad 1 (trace 15229): rearward bound: one stationary suppressing element. Knowledge: actor memory at 45.00s, trace 15157. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.924959334715897, 'next_transition': 1011}.
<a id="trace-1010"></a>
- 55.60s–55.60s (×1), actor 6, squad 0 (events line 1010): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1011"></a>
- 55.60s–55.60s (×1), actor 6, squad 1 (events line 1011): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15806"></a>
- 55.60s–55.60s (×1), actor 6, squad 0 (trace 15806): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.324405 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.60s, trace 15806. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6438846581985769, 'next_transition': 15847}.
<a id="trace-15807"></a>
- 55.60s–55.60s (×1), actor 6, squad 0 (trace 15807): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.324405 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.60s, trace 15807. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6438846581985769, 'next_transition': 15847}.
<a id="trace-15808"></a>
- 55.60s–55.60s (×1), actor 6, squad 1 (trace 15808): renew committed intent (75 s lifetime). Knowledge: actor memory at 55.60s, trace 15808. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15858}.
<a id="trace-15847"></a>
<a id="trace-15849"></a>
<a id="trace-15894"></a>
<a id="trace-15896"></a>
<a id="trace-15931"></a>
<a id="trace-15933"></a>
- 56.25s–58.25s (×6), actor 6, squad 0 (trace 15847): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 55.60s, trace 15808. Next observer evidence: {'until': 57.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.7110465293971802, 'next_transition': 15894}.
<a id="trace-15858"></a>
- 56.30s–56.30s (×1), actor 9, squad 1 (trace 15858): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 15718. Next observer evidence: {'until': 84.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1161}.
<a id="trace-15859"></a>
- 56.30s–56.30s (×1), actor 9, squad 1 (trace 15859): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 15718. Next observer evidence: {'until': 84.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1161}.
<a id="trace-15951"></a>
- 58.80s–58.80s (×1), actor 2, squad 0 (trace 15951): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 15714. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1720952218905768, 'next_transition': 16439}.
<a id="trace-15952"></a>
- 58.80s–58.80s (×1), actor 2, squad 0 (trace 15952): received platoon directive. Knowledge: actor memory at 55.00s, trace 15714. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1720952218905768, 'next_transition': 16439}.
<a id="trace-16439"></a>
<a id="trace-16441"></a>
<a id="trace-16531"></a>
<a id="trace-16533"></a>
- 59.25s–60.25s (×4), actor 6, squad 0 (trace 16439): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 55.60s, trace 15808. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38104466750139654, 'next_transition': 16531}.
<a id="trace-16545"></a>
- 60.35s–60.35s (×1), actor 2, squad 0 (trace 16545): NeedSupport. Knowledge: actor memory at 60.00s, trace 16467. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.46970749999999994, 'next_transition': 16574}.
<a id="trace-16574"></a>
<a id="trace-16576"></a>
- 61.25s–61.25s (×2), actor 6, squad 0 (trace 16574): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 60.00s, trace 16469. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1510625000000001, 'next_transition': 16610}.
<a id="trace-16610"></a>
- 62.20s–62.20s (×1), actor 2, squad 0 (trace 16610): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 16467. Next observer evidence: None.
<a id="trace-16611"></a>
- 62.20s–62.20s (×1), actor 2, squad 0 (trace 16611): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 16467. Next observer evidence: None.
<a id="trace-16979"></a>
<a id="trace-16981"></a>
<a id="trace-17012"></a>
<a id="trace-17014"></a>
<a id="trace-17046"></a>
<a id="trace-17048"></a>
<a id="trace-17140"></a>
<a id="trace-17142"></a>
<a id="trace-17163"></a>
<a id="trace-17165"></a>
<a id="trace-17192"></a>
<a id="trace-17194"></a>
<a id="trace-17218"></a>
<a id="trace-17244"></a>
<a id="trace-17246"></a>
<a id="trace-17333"></a>
<a id="trace-17335"></a>
<a id="trace-17352"></a>
<a id="trace-17354"></a>
<a id="trace-17381"></a>
<a id="trace-17383"></a>
<a id="trace-17412"></a>
<a id="trace-17414"></a>
<a id="trace-17441"></a>
<a id="trace-17443"></a>
- 62.25s–74.25s (×25), actor 6, squad 0 (trace 16979): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 60.00s, trace 16469. Next observer evidence: {'until': 63.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17012}.
<a id="trace-17451"></a>
- 74.40s–74.40s (×1), actor 2, squad 0 (trace 17451): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 17268. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3812605472123749, 'next_transition': 17640}.
<a id="trace-17452"></a>
- 74.40s–74.40s (×1), actor 2, squad 0 (trace 17452): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 17268. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3812605472123749, 'next_transition': 17640}.
<a id="trace-17640"></a>
<a id="trace-17642"></a>
<a id="trace-17676"></a>
<a id="trace-17678"></a>
<a id="trace-17705"></a>
<a id="trace-17707"></a>
<a id="trace-17743"></a>
<a id="trace-17745"></a>
<a id="trace-17773"></a>
<a id="trace-17775"></a>
<a id="trace-17861"></a>
<a id="trace-17863"></a>
- 75.25s–80.25s (×12), actor 6, squad 0 (trace 17640): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 75.00s, trace 17578. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1232502819768024, 'next_transition': 17676}.
<a id="trace-1161"></a>
- 84.25s–84.25s (×1), actor 2, squad 1 (events line 1161): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 85, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17976}.
<a id="trace-17954"></a>
- 84.25s–84.25s (×1), actor 2, squad 1 (trace 17954): renew committed intent (75 s lifetime). Knowledge: actor memory at 84.25s, trace 17954. Next observer evidence: {'until': 85, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17976}.
<a id="trace-17976"></a>
- 85.00s–85.00s (×1), actor 9, squad 1 (trace 17976): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 85.00s, trace 17967. Next observer evidence: None.
<a id="trace-17979"></a>
- 85.05s–85.05s (×1), actor 9, squad 1 (trace 17979): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 85.00s, trace 17967. Next observer evidence: None.
<a id="trace-17980"></a>
- 85.05s–85.05s (×1), actor 9, squad 1 (trace 17980): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 85.00s, trace 17967. Next observer evidence: None.
<a id="trace-17983"></a>
- 85.10s–85.10s (×1), actor 9, squad 1 (trace 17983): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 85.00s, trace 17967. Next observer evidence: {'until': 87.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1170}.
<a id="trace-18030"></a>
<a id="trace-18032"></a>
<a id="trace-18055"></a>
<a id="trace-18057"></a>
<a id="trace-18077"></a>
<a id="trace-18079"></a>
- 85.25s–87.25s (×6), actor 2, squad 0 (trace 18030): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 85.00s, trace 17964. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1283729657901804, 'next_transition': 18055}.
<a id="trace-1169"></a>
- 87.90s–87.90s (×1), actor 2, squad 0 (events line 1169): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1170"></a>
- 87.90s–87.90s (×1), actor 2, squad 1 (events line 1170): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18096"></a>
- 87.90s–87.90s (×1), actor 2, squad 0 (trace 18096): renew committed intent (75 s lifetime). Knowledge: actor memory at 87.90s, trace 18096. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240260463310975, 'next_transition': 18104}.
<a id="trace-18097"></a>
- 87.90s–87.90s (×1), actor 2, squad 1 (trace 18097): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368082 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.90s, trace 18097. Next observer evidence: {'until': 89.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18134}.
<a id="trace-18098"></a>
- 87.90s–87.90s (×1), actor 2, squad 1 (trace 18098): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368082 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.90s, trace 18098. Next observer evidence: {'until': 89.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18134}.
<a id="trace-18104"></a>
<a id="trace-18106"></a>
<a id="trace-18125"></a>
<a id="trace-18127"></a>
<a id="trace-18257"></a>
<a id="trace-18259"></a>
- 88.25s–90.25s (×6), actor 2, squad 0 (trace 18104): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 87.90s, trace 18098. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559826676731567, 'next_transition': 18125}.
<a id="trace-18134"></a>
- 89.55s–89.55s (×1), actor 9, squad 1 (trace 18134): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 17967. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000000000000007, 'next_transition': 18799}.
<a id="trace-18135"></a>
- 89.55s–89.55s (×1), actor 9, squad 1 (trace 18135): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 17967. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000000000000007, 'next_transition': 18799}.
<a id="trace-18272"></a>
- 90.75s–90.75s (×1), actor 2, squad 0 (trace 18272): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 18200. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4535787534374694, 'next_transition': 18443}.
<a id="trace-18375"></a>
- 90.75s–90.75s (×1), actor 2, squad 0 (trace 18375): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 18200. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4535787534374694, 'next_transition': 18443}.
<a id="trace-18443"></a>
<a id="trace-18445"></a>
<a id="trace-18472"></a>
<a id="trace-18474"></a>
<a id="trace-18504"></a>
<a id="trace-18506"></a>
<a id="trace-18529"></a>
<a id="trace-18531"></a>
<a id="trace-18610"></a>
<a id="trace-18612"></a>
<a id="trace-18630"></a>
<a id="trace-18632"></a>
<a id="trace-18657"></a>
<a id="trace-18682"></a>
<a id="trace-18684"></a>
<a id="trace-18703"></a>
<a id="trace-18705"></a>
<a id="trace-18783"></a>
<a id="trace-18785"></a>
- 91.25s–100.25s (×19), actor 2, squad 0 (trace 18443): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 90.00s, trace 18200. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8211143445029796, 'next_transition': 18472}.
<a id="trace-18793"></a>
- 100.55s–100.55s (×1), actor 2, squad 0 (trace 18793): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 18723. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399863486258439, 'next_transition': 18821}.
<a id="trace-18799"></a>
- 100.70s–100.70s (×1), actor 9, squad 1 (trace 18799): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 18726. Next observer evidence: {'until': 130.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1555}.
<a id="trace-18800"></a>
- 100.70s–100.70s (×1), actor 9, squad 1 (trace 18800): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 18726. Next observer evidence: {'until': 130.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1555}.
<a id="trace-18821"></a>
<a id="trace-18823"></a>
<a id="trace-18860"></a>
<a id="trace-18862"></a>
<a id="trace-18902"></a>
<a id="trace-18904"></a>
<a id="trace-18930"></a>
<a id="trace-18932"></a>
- 101.25s–104.25s (×8), actor 2, squad 0 (trace 18821): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 100.00s, trace 18723. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.419991486276144, 'next_transition': 18860}.
<a id="trace-1265"></a>
- 104.90s–104.90s (×1), actor 2, squad 0 (events line 1265): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19011}.
<a id="trace-18949"></a>
- 104.90s–104.90s (×1), actor 2, squad 0 (trace 18949): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395983 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 104.90s, trace 18949. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19011}.
<a id="trace-18950"></a>
- 104.90s–104.90s (×1), actor 2, squad 0 (trace 18950): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395983 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 104.90s, trace 18950. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19011}.
<a id="trace-19011"></a>
<a id="trace-19013"></a>
<a id="trace-19031"></a>
<a id="trace-19033"></a>
<a id="trace-19049"></a>
<a id="trace-19051"></a>
- 105.25s–107.25s (×6), actor 2, squad 0 (trace 19011): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 105.00s, trace 18953. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19031}.
<a id="trace-19058"></a>
- 107.55s–107.55s (×1), actor 2, squad 0 (trace 19058): Withdraw to received rally. Knowledge: actor memory at 105.00s, trace 18953. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19229}.
<a id="trace-19059"></a>
- 107.55s–107.55s (×1), actor 2, squad 0 (trace 19059): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 18953. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19229}.
<a id="trace-19229"></a>
<a id="trace-19231"></a>
<a id="trace-19268"></a>
<a id="trace-19270"></a>
<a id="trace-19366"></a>
<a id="trace-19368"></a>
<a id="trace-19387"></a>
<a id="trace-19389"></a>
<a id="trace-19407"></a>
<a id="trace-19409"></a>
<a id="trace-19431"></a>
<a id="trace-19433"></a>
<a id="trace-19454"></a>
<a id="trace-19456"></a>
<a id="trace-19535"></a>
<a id="trace-19537"></a>
<a id="trace-19561"></a>
<a id="trace-19563"></a>
<a id="trace-19592"></a>
<a id="trace-19594"></a>
<a id="trace-19617"></a>
<a id="trace-19619"></a>
<a id="trace-19636"></a>
<a id="trace-19638"></a>
- 108.25s–119.25s (×24), actor 2, squad 0 (trace 19229): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 105.00s, trace 18953. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5775101230474003, 'next_transition': 19268}.
<a id="trace-19646"></a>
- 119.35s–119.35s (×1), actor 2, squad 0 (trace 19646): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 115.00s, trace 19477. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250086875894964, 'next_transition': 19824}.
<a id="trace-19647"></a>
- 119.35s–119.35s (×1), actor 2, squad 0 (trace 19647): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 115.00s, trace 19477. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250086875894964, 'next_transition': 19824}.
<a id="trace-19824"></a>
<a id="trace-19826"></a>
<a id="trace-19854"></a>
<a id="trace-19856"></a>
<a id="trace-19883"></a>
<a id="trace-19885"></a>
<a id="trace-19915"></a>
<a id="trace-19917"></a>
<a id="trace-19943"></a>
<a id="trace-19945"></a>
<a id="trace-20023"></a>
<a id="trace-20025"></a>
<a id="trace-20044"></a>
<a id="trace-20046"></a>
<a id="trace-20064"></a>
<a id="trace-20066"></a>
<a id="trace-20094"></a>
<a id="trace-20096"></a>
<a id="trace-20122"></a>
<a id="trace-20124"></a>
<a id="trace-20205"></a>
<a id="trace-20207"></a>
<a id="trace-20236"></a>
<a id="trace-20238"></a>
<a id="trace-20256"></a>
<a id="trace-20258"></a>
- 120.25s–132.30s (×26), actor 2, squad 0 (trace 19824): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 120.00s, trace 19764. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5035812489818747, 'next_transition': 19854}.
<a id="trace-20275"></a>
- 132.85s–132.85s (×1), actor 2, squad 0 (trace 20275): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 20146. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30242045702704273, 'next_transition': 20339}.
<a id="trace-20276"></a>
- 132.85s–132.85s (×1), actor 2, squad 0 (trace 20276): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 20146. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30242045702704273, 'next_transition': 20339}.
<a id="trace-20339"></a>
<a id="trace-20341"></a>
<a id="trace-20370"></a>
<a id="trace-20372"></a>
<a id="trace-20460"></a>
<a id="trace-20462"></a>
<a id="trace-20494"></a>
<a id="trace-20496"></a>
<a id="trace-20518"></a>
<a id="trace-20545"></a>
- 133.30s–138.30s (×10), actor 2, squad 0 (trace 20339): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 130.00s, trace 20146. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.867315446943174, 'next_transition': 20370}.
<a id="trace-20554"></a>
- 138.55s–138.55s (×1), actor 2, squad 0 (trace 20554): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 20393. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.314989992786366, 'next_transition': 20676}.
<a id="trace-20555"></a>
- 138.55s–138.55s (×1), actor 2, squad 0 (trace 20555): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 20393. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.314989992786366, 'next_transition': 20676}.
<a id="trace-20676"></a>
<a id="trace-20678"></a>
<a id="trace-20763"></a>
<a id="trace-20765"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20818"></a>
<a id="trace-20820"></a>
<a id="trace-20850"></a>
<a id="trace-20852"></a>
<a id="trace-20876"></a>
<a id="trace-20878"></a>
<a id="trace-20962"></a>
<a id="trace-20964"></a>
<a id="trace-20983"></a>
<a id="trace-20985"></a>
<a id="trace-21008"></a>
<a id="trace-21010"></a>
<a id="trace-21036"></a>
<a id="trace-21038"></a>
<a id="trace-21062"></a>
<a id="trace-21064"></a>
<a id="trace-21147"></a>
<a id="trace-21149"></a>
<a id="trace-21171"></a>
- 139.30s–151.30s (×25), actor 2, squad 0 (trace 20676): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 135.00s, trace 20393. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.352435193886295, 'next_transition': 20763}.
<a id="trace-1555"></a>
- 149.05s–149.05s (×1), actor 2, squad 1 (events line 1555): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1974}.
<a id="trace-21058"></a>
- 149.05s–149.05s (×1), actor 2, squad 1 (trace 21058): renew committed intent (75 s lifetime). Knowledge: actor memory at 149.05s, trace 21058. Next observer evidence: {'until': 179, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1974}.
<a id="trace-21193"></a>
- 152.00s–152.00s (×1), actor 2, squad 0 (trace 21193): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 21087. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119538648016898, 'next_transition': 21252}.
<a id="trace-21194"></a>
- 152.00s–152.00s (×1), actor 2, squad 0 (trace 21194): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 21087. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119538648016898, 'next_transition': 21252}.
<a id="trace-21252"></a>
<a id="trace-21254"></a>
<a id="trace-21285"></a>
<a id="trace-21287"></a>
- 152.30s–153.30s (×4), actor 2, squad 0 (trace 21252): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 150.00s, trace 21087. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559769133029898, 'next_transition': 21285}.
<a id="trace-21306"></a>
- 154.00s–154.00s (×1), actor 2, squad 0 (trace 21306): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 150.00s, trace 21087. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511953864801737, 'next_transition': 21316}.
<a id="trace-21316"></a>
<a id="trace-21318"></a>
<a id="trace-21408"></a>
<a id="trace-21410"></a>
<a id="trace-21443"></a>
<a id="trace-21445"></a>
<a id="trace-21470"></a>
<a id="trace-21472"></a>
- 154.30s–157.30s (×8), actor 2, squad 0 (trace 21316): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 150.00s, trace 21087. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5669660060528795, 'next_transition': 21408}.
<a id="trace-1627"></a>
- 157.50s–157.50s (×1), actor 2, squad 0 (events line 1627): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21497}.
<a id="trace-21480"></a>
- 157.50s–157.50s (×1), actor 2, squad 0 (trace 21480): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.837021 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 157.50s, trace 21480. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21497}.
<a id="trace-21481"></a>
- 157.50s–157.50s (×1), actor 2, squad 0 (trace 21481): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.837021 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 157.50s, trace 21481. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21497}.
<a id="trace-21497"></a>
<a id="trace-21499"></a>
<a id="trace-21523"></a>
<a id="trace-21525"></a>
- 158.30s–159.30s (×4), actor 2, squad 0 (trace 21497): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 157.50s, trace 21481. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21523}.
<a id="trace-21533"></a>
- 159.75s–159.75s (×1), actor 2, squad 0 (trace 21533): MoveTactically. Knowledge: actor memory at 157.50s, trace 21481. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21651}.
<a id="trace-21534"></a>
- 159.75s–159.75s (×1), actor 2, squad 0 (trace 21534): traveling overwatch. Knowledge: actor memory at 157.50s, trace 21481. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21651}.
<a id="trace-21535"></a>
- 159.75s–159.75s (×1), actor 2, squad 0 (trace 21535): received platoon directive. Knowledge: actor memory at 157.50s, trace 21481. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21651}.
<a id="trace-21651"></a>
<a id="trace-21653"></a>
<a id="trace-21678"></a>
<a id="trace-21680"></a>
<a id="trace-21702"></a>
<a id="trace-21704"></a>
- 160.30s–162.30s (×6), actor 2, squad 0 (trace 21651): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 160.00s, trace 21591. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3674767263378769, 'next_transition': 21678}.
<a id="trace-1668"></a>
- 163.10s–163.10s (×1), actor 2, squad 0 (events line 1668): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21725"></a>
- 163.10s–163.10s (×1), actor 2, squad 0 (trace 21725): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=3.789633 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 163.10s, trace 21725. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20997704236945294, 'next_transition': 21730}.
<a id="trace-21726"></a>
- 163.10s–163.10s (×1), actor 2, squad 0 (trace 21726): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=3.789633 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 163.10s, trace 21726. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20997704236945294, 'next_transition': 21730}.
<a id="trace-21730"></a>
<a id="trace-21732"></a>
<a id="trace-21753"></a>
- 163.30s–164.30s (×3), actor 2, squad 0 (trace 21730): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 163.10s, trace 21726. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0500186966007372, 'next_transition': 21753}.
<a id="trace-21784"></a>
- 165.05s–165.05s (×1), actor 2, squad 0 (trace 21784): received platoon directive. Knowledge: actor memory at 165.00s, trace 21770. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001052185280666, 'next_transition': 21886}.
<a id="trace-21886"></a>
<a id="trace-21888"></a>
<a id="trace-21915"></a>
<a id="trace-21917"></a>
<a id="trace-21936"></a>
<a id="trace-21938"></a>
<a id="trace-21963"></a>
<a id="trace-21965"></a>
<a id="trace-21992"></a>
<a id="trace-22069"></a>
<a id="trace-22089"></a>
<a id="trace-22091"></a>
<a id="trace-22112"></a>
<a id="trace-22114"></a>
<a id="trace-22140"></a>
<a id="trace-22142"></a>
<a id="trace-22164"></a>
<a id="trace-22166"></a>
<a id="trace-22246"></a>
<a id="trace-22248"></a>
<a id="trace-22274"></a>
<a id="trace-22276"></a>
- 165.30s–176.30s (×22), actor 2, squad 0 (trace 21886): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 165.00s, trace 21770. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.049713947617266, 'next_transition': 21915}.
<a id="trace-1752"></a>
- 177.15s–177.15s (×1), actor 2, squad 0 (events line 1752): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22294"></a>
- 177.15s–177.15s (×1), actor 2, squad 0 (trace 22294): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.15s, trace 22294. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22300}.
<a id="trace-22295"></a>
- 177.15s–177.15s (×1), actor 2, squad 0 (trace 22295): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.15s, trace 22295. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22300}.
<a id="trace-22300"></a>
<a id="trace-22302"></a>
- 177.30s–177.30s (×2), actor 2, squad 0 (trace 22300): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 177.15s, trace 22295. Next observer evidence: {'until': 178, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22320}.
<a id="trace-22320"></a>
- 178.15s–178.15s (×1), actor 2, squad 0 (trace 22320): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 177.15s, trace 22295. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22325}.
<a id="trace-22325"></a>
<a id="trace-22327"></a>
- 178.30s–178.30s (×2), actor 2, squad 0 (trace 22325): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 177.15s, trace 22295. Next observer evidence: {'until': 179, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22345}.
<a id="trace-22345"></a>
- 179.15s–179.15s (×1), actor 2, squad 0 (trace 22345): traveling. Knowledge: actor memory at 177.15s, trace 22295. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22508}.
<a id="trace-22346"></a>
- 179.15s–179.15s (×1), actor 2, squad 0 (trace 22346): received platoon directive. Knowledge: actor memory at 177.15s, trace 22295. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22508}.
<a id="trace-22508"></a>
<a id="trace-22510"></a>
<a id="trace-22598"></a>
<a id="trace-22600"></a>
<a id="trace-22634"></a>
<a id="trace-22636"></a>
<a id="trace-22665"></a>
<a id="trace-22667"></a>
<a id="trace-22701"></a>
<a id="trace-22724"></a>
<a id="trace-22726"></a>
<a id="trace-22806"></a>
<a id="trace-22808"></a>
<a id="trace-22828"></a>
<a id="trace-22830"></a>
<a id="trace-22855"></a>
<a id="trace-22857"></a>
<a id="trace-22883"></a>
<a id="trace-22885"></a>
<a id="trace-22914"></a>
<a id="trace-22993"></a>
<a id="trace-22995"></a>
<a id="trace-23015"></a>
<a id="trace-23017"></a>
<a id="trace-23035"></a>
<a id="trace-23037"></a>
<a id="trace-23061"></a>
<a id="trace-23063"></a>
<a id="trace-23093"></a>
<a id="trace-23095"></a>
<a id="trace-23177"></a>
<a id="trace-23179"></a>
<a id="trace-23207"></a>
<a id="trace-23209"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
- 179.30s–197.30s (×36), actor 2, squad 0 (trace 22508): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 177.15s, trace 22295. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7349859802139816, 'next_transition': 22598}.
<a id="trace-23245"></a>
- 197.95s–197.95s (×1), actor 2, squad 0 (trace 23245): matching received arrivals: traveling stage complete. Knowledge: actor memory at 195.00s, trace 23114. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23390}.
<a id="trace-23390"></a>
<a id="trace-23392"></a>
<a id="trace-23423"></a>
<a id="trace-23425"></a>
<a id="trace-23507"></a>
<a id="trace-23509"></a>
<a id="trace-23543"></a>
<a id="trace-23545"></a>
<a id="trace-23574"></a>
<a id="trace-23576"></a>
<a id="trace-23598"></a>
<a id="trace-23600"></a>
<a id="trace-23624"></a>
<a id="trace-23626"></a>
<a id="trace-23702"></a>
<a id="trace-23704"></a>
<a id="trace-23727"></a>
<a id="trace-23729"></a>
<a id="trace-23757"></a>
<a id="trace-23759"></a>
<a id="trace-23789"></a>
<a id="trace-23791"></a>
<a id="trace-23825"></a>
<a id="trace-23827"></a>
<a id="trace-23904"></a>
<a id="trace-23906"></a>
<a id="trace-23927"></a>
<a id="trace-23929"></a>
<a id="trace-23946"></a>
<a id="trace-23948"></a>
- 198.30s–212.30s (×30), actor 2, squad 0 (trace 23390): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 195.00s, trace 23114. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1024923243892362, 'next_transition': 23423}.
<a id="trace-1974"></a>
- 210.90s–210.90s (×1), actor 2, squad 1 (events line 1974): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23919"></a>
- 210.90s–210.90s (×1), actor 2, squad 1 (trace 23919): renew committed intent (75 s lifetime). Knowledge: actor memory at 210.90s, trace 23919. Next observer evidence: {'until': 240.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27758}.
<a id="trace-23956"></a>
- 212.35s–212.35s (×1), actor 2, squad 0 (trace 23956): matching received arrivals: deployment leg complete. Knowledge: actor memory at 210.90s, trace 23919. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23971}.
<a id="trace-23971"></a>
<a id="trace-23973"></a>
<a id="trace-23997"></a>
<a id="trace-23999"></a>
<a id="trace-24084"></a>
<a id="trace-24086"></a>
<a id="trace-24112"></a>
- 213.30s–216.30s (×7), actor 2, squad 0 (trace 23971): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 210.90s, trace 23919. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23997}.
<a id="trace-2011"></a>
- 216.55s–216.55s (×1), actor 2, squad 0 (events line 2011): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24133}.
<a id="trace-24120"></a>
- 216.55s–216.55s (×1), actor 2, squad 0 (trace 24120): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 216.55s, trace 24120. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24133}.
<a id="trace-24121"></a>
- 216.55s–216.55s (×1), actor 2, squad 0 (trace 24121): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 216.55s, trace 24121. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24133}.
<a id="trace-24133"></a>
<a id="trace-24135"></a>
<a id="trace-24155"></a>
<a id="trace-24157"></a>
- 217.30s–218.30s (×4), actor 2, squad 0 (trace 24133): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 216.55s, trace 24121. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24155}.
<a id="trace-24164"></a>
- 218.35s–218.35s (×1), actor 2, squad 0 (trace 24164): Reorganise: completed/failed drill. Knowledge: actor memory at 216.55s, trace 24121. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249971294418877, 'next_transition': 24466}.
<a id="trace-24168"></a>
- 218.35s–218.35s (×1), actor 2, squad 0 (trace 24168): MoveTactically. Knowledge: actor memory at 216.55s, trace 24121. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249971294418877, 'next_transition': 24466}.
<a id="trace-24169"></a>
- 218.35s–218.35s (×1), actor 2, squad 0 (trace 24169): traveling overwatch. Knowledge: actor memory at 216.55s, trace 24121. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249971294418877, 'next_transition': 24466}.
<a id="trace-24170"></a>
- 218.35s–218.35s (×1), actor 2, squad 0 (trace 24170): Reorganise complete. Knowledge: actor memory at 216.55s, trace 24121. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249971294418877, 'next_transition': 24466}.
<a id="trace-24466"></a>
<a id="trace-24468"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24582"></a>
<a id="trace-24584"></a>
- 219.30s–221.30s (×6), actor 2, squad 0 (trace 24466): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 216.55s, trace 24121. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4784707999212614, 'next_transition': 24549}.
<a id="trace-24603"></a>
- 221.80s–221.80s (×1), actor 2, squad 0 (trace 24603): ReactToContact: cover and return fire. Knowledge: actor memory at 220.00s, trace 24489. Next observer evidence: {'until': 222, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120384081688476, 'next_transition': 2073}.
<a id="trace-24604"></a>
- 221.80s–221.80s (×1), actor 2, squad 0 (trace 24604): bounding overwatch. Knowledge: actor memory at 220.00s, trace 24489. Next observer evidence: {'until': 222, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120384081688476, 'next_transition': 2073}.
<a id="trace-24605"></a>
- 221.80s–221.80s (×1), actor 2, squad 0 (trace 24605): new contact inside 100 m. Knowledge: actor memory at 220.00s, trace 24489. Next observer evidence: {'until': 222, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120384081688476, 'next_transition': 2073}.
<a id="trace-2073"></a>
- 222.15s–222.15s (×1), actor 2, squad 0 (events line 2073): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25000"></a>
- 222.15s–222.15s (×1), actor 2, squad 0 (trace 25000): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.628944 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 222.15s, trace 25000. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511995019465636, 'next_transition': 25008}.
<a id="trace-25001"></a>
- 222.15s–222.15s (×1), actor 2, squad 0 (trace 25001): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.628944 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 222.15s, trace 25001. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511995019465636, 'next_transition': 25008}.
<a id="trace-25008"></a>
- 222.20s–222.20s (×1), actor 2, squad 0 (trace 25008): new contact inside 100 m. Knowledge: actor memory at 222.15s, trace 25001. Next observer evidence: None.
<a id="trace-25395"></a>
- 222.25s–222.25s (×1), actor 2, squad 0 (trace 25395): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 222.25s, trace 25395. Next observer evidence: None.
<a id="trace-25399"></a>
<a id="trace-25401"></a>
- 222.30s–222.30s (×2), actor 2, squad 0 (trace 25399): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 222.25s, trace 25395. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4535985058396907, 'next_transition': 25425}.
<a id="trace-25425"></a>
- 222.90s–222.90s (×1), actor 2, squad 0 (trace 25425): new contact inside 100 m. Knowledge: actor memory at 222.25s, trace 25395. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4031997493224521, 'next_transition': 25824}.
<a id="trace-25824"></a>
<a id="trace-25826"></a>
<a id="trace-25875"></a>
<a id="trace-25877"></a>
<a id="trace-25968"></a>
<a id="trace-25970"></a>
<a id="trace-25993"></a>
<a id="trace-25995"></a>
- 223.30s–226.30s (×8), actor 2, squad 0 (trace 25824): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 222.25s, trace 25395. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3936977759700675, 'next_transition': 25875}.
<a id="trace-26005"></a>
- 226.75s–226.75s (×1), actor 2, squad 0 (trace 26005): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 225.00s, trace 25903. Next observer evidence: {'until': 226.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1512124723324398, 'next_transition': 26396}.
<a id="trace-26006"></a>
- 226.75s–226.75s (×1), actor 2, squad 0 (trace 26006): rearward bound: one stationary suppressing element. Knowledge: actor memory at 225.00s, trace 25903. Next observer evidence: {'until': 226.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1512124723324398, 'next_transition': 26396}.
<a id="trace-26396"></a>
<a id="trace-26407"></a>
<a id="trace-26409"></a>
<a id="trace-26414"></a>
<a id="trace-26430"></a>
<a id="trace-26444"></a>
<a id="trace-26446"></a>
<a id="trace-26451"></a>
<a id="trace-26460"></a>
<a id="trace-26469"></a>
<a id="trace-26471"></a>
<a id="trace-26476"></a>
<a id="trace-26489"></a>
<a id="trace-26552"></a>
<a id="trace-26554"></a>
<a id="trace-26559"></a>
<a id="trace-26575"></a>
<a id="trace-26577"></a>
<a id="trace-26596"></a>
<a id="trace-26598"></a>
<a id="trace-26617"></a>
<a id="trace-26619"></a>
<a id="trace-26652"></a>
<a id="trace-26654"></a>
<a id="trace-26725"></a>
<a id="trace-26727"></a>
<a id="trace-26744"></a>
<a id="trace-26746"></a>
<a id="trace-26763"></a>
<a id="trace-26765"></a>
<a id="trace-26778"></a>
<a id="trace-26785"></a>
<a id="trace-26787"></a>
<a id="trace-26792"></a>
<a id="trace-26803"></a>
<a id="trace-26811"></a>
<a id="trace-26813"></a>
<a id="trace-26818"></a>
<a id="trace-26826"></a>
<a id="trace-26888"></a>
<a id="trace-26890"></a>
<a id="trace-26895"></a>
<a id="trace-26908"></a>
<a id="trace-26910"></a>
<a id="trace-26927"></a>
<a id="trace-26929"></a>
<a id="trace-26943"></a>
<a id="trace-26945"></a>
<a id="trace-26962"></a>
- 226.80s–244.30s (×49), actor 2, squad 0 (trace 26396): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 225.00s, trace 25903. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30239530074244064, 'next_transition': 26407}.
<a id="trace-26971"></a>
- 244.70s–244.70s (×1), actor 2, squad 0 (trace 26971): NeedSupport. Knowledge: actor memory at 240.00s, trace 26831. Next observer evidence: {'until': 245.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27039}.
<a id="trace-27039"></a>
<a id="trace-27041"></a>
<a id="trace-27059"></a>
<a id="trace-27061"></a>
<a id="trace-27082"></a>
<a id="trace-27084"></a>
<a id="trace-27103"></a>
<a id="trace-27105"></a>
<a id="trace-27125"></a>
<a id="trace-27127"></a>
<a id="trace-27201"></a>
<a id="trace-27203"></a>
<a id="trace-27222"></a>
<a id="trace-27224"></a>
<a id="trace-27242"></a>
<a id="trace-27244"></a>
<a id="trace-27262"></a>
<a id="trace-27264"></a>
<a id="trace-27282"></a>
<a id="trace-27284"></a>
<a id="trace-27361"></a>
<a id="trace-27363"></a>
<a id="trace-27389"></a>
<a id="trace-27391"></a>
<a id="trace-27405"></a>
<a id="trace-27407"></a>
<a id="trace-27423"></a>
<a id="trace-27425"></a>
<a id="trace-27442"></a>
<a id="trace-27444"></a>
<a id="trace-27514"></a>
<a id="trace-27516"></a>
<a id="trace-27531"></a>
<a id="trace-27533"></a>
<a id="trace-27547"></a>
<a id="trace-27549"></a>
- 245.30s–262.30s (×36), actor 2, squad 0 (trace 27039): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=2. Knowledge: actor memory at 245.00s, trace 26981. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27059}.
<a id="trace-27662"></a>
<a id="trace-27664"></a>
- 266.30s–266.30s (×2), actor 7, squad 0 (trace 27662): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 265.00s, trace 27593. Next observer evidence: {'until': 266.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27680}.
<a id="trace-27680"></a>
- 266.70s–266.70s (×1), actor 7, squad 0 (trace 27680): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 265.00s, trace 27593. Next observer evidence: None.
<a id="trace-27681"></a>
- 266.75s–266.75s (×1), actor 7, squad 0 (trace 27681): Reorganise: completed/failed drill. Knowledge: actor memory at 265.00s, trace 27593. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27732}.
<a id="trace-27683"></a>
- 266.75s–266.75s (×1), actor 7, squad 0 (trace 27683): MoveTactically. Knowledge: actor memory at 265.00s, trace 27593. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27732}.
<a id="trace-27684"></a>
- 266.75s–266.75s (×1), actor 7, squad 0 (trace 27684): Reorganise complete. Knowledge: actor memory at 265.00s, trace 27593. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27732}.
<a id="trace-27732"></a>
- 266.80s–266.80s (×1), actor 7, squad 0 (trace 27732): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 265.00s, trace 27593. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27741}.
<a id="trace-27741"></a>
<a id="trace-27743"></a>
- 267.30s–267.30s (×2), actor 7, squad 0 (trace 27741): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 265.00s, trace 27593. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27757}.
<a id="trace-27757"></a>
- 267.90s–267.90s (×1), actor 7, squad 0 (trace 27757): renew committed intent (75 s lifetime). Knowledge: actor memory at 267.90s, trace 27757. Next observer evidence: None.
<a id="trace-27758"></a>
- 267.90s–267.90s (×1), actor 7, squad 1 (trace 27758): renew committed intent (75 s lifetime). Knowledge: actor memory at 267.90s, trace 27758. Next observer evidence: None.
<a id="trace-2254"></a>
- 267.90s–267.90s (×1), actor 7, squad 0 (events line 2254): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27767}.
<a id="trace-2255"></a>
<a id="trace-2583"></a>
- 267.90s–329.50s (×2), actor 7, squad 1 (events line 2255): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 297.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2583}.
<a id="trace-27767"></a>
<a id="trace-27769"></a>
<a id="trace-27787"></a>
<a id="trace-27789"></a>
- 268.30s–269.30s (×4), actor 7, squad 0 (trace 27767): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 267.90s, trace 27758. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27787}.
<a id="trace-27798"></a>
- 269.60s–269.60s (×1), actor 7, squad 0 (trace 27798): ReactToContact: cover and return fire. Knowledge: actor memory at 267.90s, trace 27758. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27908}.
<a id="trace-27799"></a>
- 269.60s–269.60s (×1), actor 7, squad 0 (trace 27799): received platoon directive. Knowledge: actor memory at 267.90s, trace 27758. Next observer evidence: {'until': 270.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27908}.
<a id="trace-27908"></a>
- 270.30s–270.30s (×1), actor 7, squad 0 (trace 27908): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 270.00s, trace 27847. Next observer evidence: {'until': 270.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2272}.
<a id="trace-2272"></a>
- 270.70s–270.70s (×1), actor 7, squad 0 (events line 2272): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27917"></a>
- 270.70s–270.70s (×1), actor 7, squad 0 (trace 27917): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.238294 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 270.70s, trace 27917. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27933}.
<a id="trace-27918"></a>
- 270.70s–270.70s (×1), actor 7, squad 0 (trace 27918): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.238294 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 270.70s, trace 27918. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27933}.
<a id="trace-27933"></a>
<a id="trace-27935"></a>
<a id="trace-27951"></a>
<a id="trace-27953"></a>
- 271.30s–272.30s (×4), actor 7, squad 0 (trace 27933): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 270.70s, trace 27918. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27951}.
<a id="trace-27960"></a>
- 272.40s–272.40s (×1), actor 7, squad 0 (trace 27960): Withdraw to received rally. Knowledge: actor memory at 270.70s, trace 27918. Next observer evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28022}.
<a id="trace-27961"></a>
- 272.40s–272.40s (×1), actor 7, squad 0 (trace 27961): rearward bound: one stationary suppressing element. Knowledge: actor memory at 270.70s, trace 27918. Next observer evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28022}.
<a id="trace-28022"></a>
<a id="trace-28024"></a>
<a id="trace-28044"></a>
<a id="trace-28046"></a>
<a id="trace-28115"></a>
<a id="trace-28117"></a>
<a id="trace-28133"></a>
<a id="trace-28135"></a>
<a id="trace-28153"></a>
<a id="trace-28155"></a>
<a id="trace-28178"></a>
<a id="trace-28180"></a>
<a id="trace-28200"></a>
<a id="trace-28202"></a>
<a id="trace-28270"></a>
<a id="trace-28272"></a>
<a id="trace-28289"></a>
<a id="trace-28291"></a>
<a id="trace-28307"></a>
<a id="trace-28309"></a>
<a id="trace-28331"></a>
<a id="trace-28333"></a>
<a id="trace-28357"></a>
<a id="trace-28359"></a>
<a id="trace-28440"></a>
<a id="trace-28442"></a>
<a id="trace-28458"></a>
<a id="trace-28460"></a>
<a id="trace-28475"></a>
<a id="trace-28477"></a>
<a id="trace-28495"></a>
<a id="trace-28497"></a>
<a id="trace-28517"></a>
<a id="trace-28519"></a>
<a id="trace-28592"></a>
<a id="trace-28594"></a>
<a id="trace-28630"></a>
<a id="trace-28632"></a>
<a id="trace-28648"></a>
<a id="trace-28650"></a>
<a id="trace-28666"></a>
<a id="trace-28668"></a>
<a id="trace-28687"></a>
<a id="trace-28689"></a>
<a id="trace-28761"></a>
<a id="trace-28763"></a>
<a id="trace-28786"></a>
<a id="trace-28788"></a>
<a id="trace-28811"></a>
<a id="trace-28813"></a>
<a id="trace-28843"></a>
<a id="trace-28845"></a>
<a id="trace-28862"></a>
<a id="trace-28864"></a>
<a id="trace-28936"></a>
<a id="trace-28938"></a>
<a id="trace-28957"></a>
<a id="trace-28959"></a>
<a id="trace-28975"></a>
<a id="trace-28977"></a>
<a id="trace-29002"></a>
<a id="trace-29004"></a>
<a id="trace-29032"></a>
<a id="trace-29034"></a>
<a id="trace-29106"></a>
<a id="trace-29108"></a>
<a id="trace-29126"></a>
<a id="trace-29128"></a>
<a id="trace-29143"></a>
<a id="trace-29145"></a>
<a id="trace-29164"></a>
<a id="trace-29166"></a>
<a id="trace-29186"></a>
<a id="trace-29262"></a>
<a id="trace-29264"></a>
<a id="trace-29284"></a>
<a id="trace-29286"></a>
<a id="trace-29309"></a>
<a id="trace-29311"></a>
<a id="trace-29331"></a>
<a id="trace-29333"></a>
<a id="trace-29351"></a>
<a id="trace-29353"></a>
<a id="trace-29423"></a>
<a id="trace-29425"></a>
<a id="trace-29446"></a>
<a id="trace-29448"></a>
<a id="trace-29466"></a>
<a id="trace-29468"></a>
<a id="trace-29497"></a>
<a id="trace-29522"></a>
<a id="trace-29524"></a>
<a id="trace-29593"></a>
<a id="trace-29595"></a>
<a id="trace-29615"></a>
<a id="trace-29629"></a>
<a id="trace-29631"></a>
<a id="trace-29650"></a>
<a id="trace-29652"></a>
<a id="trace-29682"></a>
<a id="trace-29684"></a>
<a id="trace-29757"></a>
<a id="trace-29759"></a>
<a id="trace-29779"></a>
<a id="trace-29781"></a>
<a id="trace-29798"></a>
<a id="trace-29815"></a>
<a id="trace-29817"></a>
<a id="trace-29837"></a>
<a id="trace-29839"></a>
<a id="trace-29916"></a>
<a id="trace-29918"></a>
<a id="trace-29942"></a>
<a id="trace-29944"></a>
- 273.30s–331.30s (×114), actor 7, squad 0 (trace 28022): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 270.70s, trace 27918. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28044}.
<a id="trace-29848"></a>
- 329.50s–329.50s (×1), actor 7, squad 1 (trace 29848): renew committed intent (75 s lifetime). Knowledge: actor memory at 329.50s, trace 29848. Next observer evidence: {'until': 359.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-2604"></a>
- 332.30s–332.30s (×1), actor 7, squad 0 (events line 2604): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29961"></a>
<a id="trace-29963"></a>
- 332.30s–332.30s (×2), actor 7, squad 0 (trace 29961): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 330.00s, trace 29856. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29993}.
<a id="trace-29970"></a>
- 332.30s–332.30s (×1), actor 7, squad 0 (trace 29970): renew committed intent (75 s lifetime). Knowledge: actor memory at 332.30s, trace 29970. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29993}.
<a id="trace-29993"></a>
<a id="trace-29995"></a>
<a id="trace-30011"></a>
<a id="trace-30082"></a>
<a id="trace-30084"></a>
<a id="trace-30102"></a>
<a id="trace-30104"></a>
<a id="trace-30130"></a>
<a id="trace-30132"></a>
<a id="trace-30153"></a>
<a id="trace-30155"></a>
<a id="trace-30177"></a>
<a id="trace-30179"></a>
<a id="trace-30253"></a>
<a id="trace-30255"></a>
<a id="trace-30273"></a>
<a id="trace-30291"></a>
<a id="trace-30293"></a>
<a id="trace-30314"></a>
<a id="trace-30316"></a>
<a id="trace-30340"></a>
<a id="trace-30342"></a>
<a id="trace-30416"></a>
<a id="trace-30418"></a>
<a id="trace-30439"></a>
<a id="trace-30441"></a>
<a id="trace-30460"></a>
<a id="trace-30462"></a>
<a id="trace-30481"></a>
<a id="trace-30483"></a>
<a id="trace-30503"></a>
<a id="trace-30505"></a>
<a id="trace-30577"></a>
<a id="trace-30579"></a>
<a id="trace-30604"></a>
<a id="trace-30606"></a>
<a id="trace-30623"></a>
<a id="trace-30643"></a>
<a id="trace-30645"></a>
<a id="trace-30672"></a>
<a id="trace-30674"></a>
<a id="trace-30746"></a>
<a id="trace-30748"></a>
<a id="trace-30769"></a>
<a id="trace-30771"></a>
<a id="trace-30795"></a>
<a id="trace-30797"></a>
<a id="trace-30816"></a>
<a id="trace-30818"></a>
<a id="trace-30837"></a>
<a id="trace-30839"></a>
- 333.30s–359.30s (×51), actor 7, squad 0 (trace 29993): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 332.30s, trace 29970. Next observer evidence: {'until': 334.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30011}.

## Net delivery

216 matched order/radio deliveries; 506 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.458s; maximum 2.600s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1943: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1951: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1953: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1956: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1958: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1960: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4185: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4186: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4187: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4188: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4303: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4304: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4306: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4308: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4309: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4310: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4311: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4312: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4313: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4314: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4315: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4316: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4317: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 8106: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 8107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 8108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 8109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 8110: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 8111: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 8112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 8113: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 8114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 8115: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 8116: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 8117: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 8118: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 8119: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 8120: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 8121: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 8122: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 8123: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 8124: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 8364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 8365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 8366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 8367: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 8368: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 8369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 8370: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 8371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 8372: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 8373: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 8374: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 8375: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 8376: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 8377: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 8378: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 8379: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 8380: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 8381: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 8824: estimate 12.22; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 8825: estimate 12.22; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.05s leader 5, trace 10460: estimate 12.09; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 10518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10520: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10521: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10524: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10525: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10526: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10527: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 10528: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10529: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10530: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 10531: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10532: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10533: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 14806: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 14807: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 14808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 14809: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 14810: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 14811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 14812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 14813: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 14814: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 14815: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 14816: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 14817: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 14818: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 14819: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 14820: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 14821: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 14822: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.05s leader 5, trace 14829: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.85s leader 5, trace 14951: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.85s leader 5, trace 14952: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 15021: estimate 12.15; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 15022: estimate 12.15; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 15151: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 15152: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 15153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 15154: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 15155: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 15156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 15157: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 15158: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 15159: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 15160: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 15161: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 15162: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 15163: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 15164: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 15165: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 15166: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 15463: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 15464: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 15465: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 15466: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 15467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 15468: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 15469: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 15470: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 15471: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 15472: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 15473: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 15474: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 15475: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 15476: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 15477: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 15714: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 15715: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 15716: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 15717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 15718: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 15719: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 15720: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 15721: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 15722: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 15723: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 15724: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 15725: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.60s leader 6, trace 15806: estimate 12.33; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.60s leader 6, trace 15807: estimate 12.33; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.60s leader 6, trace 15808: estimate 12.33; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 16467: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 16468: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 16469: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 16470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 16471: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 16472: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 16473: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 16474: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 16475: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 16476: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 16477: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 16478: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 17076: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 17077: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 17078: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 17079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 17080: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 17081: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 17082: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 17083: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 17084: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 17085: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 17086: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 17087: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 17268: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 17269: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 17270: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 17271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 17272: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 17273: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 17274: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 17275: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 17276: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 17277: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 17278: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 17279: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 17576: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 17577: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 17578: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 17579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 17580: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 17581: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 17582: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 17583: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 17584: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 17585: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 17586: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 17587: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 17797: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 17798: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 17799: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 17800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 17801: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 17802: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 17803: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 17804: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 17805: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 17806: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 17807: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 17808: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.25s leader 2, trace 17954: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 17964: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 17965: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 17966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 17967: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 17968: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 17969: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 17970: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 17971: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 17972: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 17973: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 17974: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.90s leader 2, trace 18096: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.90s leader 2, trace 18097: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.90s leader 2, trace 18098: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 18200: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 18201: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 18202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 18203: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 18204: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 18205: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 18206: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 18207: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 18208: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 18209: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 18210: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 18550: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 18551: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 18552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 18553: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 18554: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 18555: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 18556: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 18557: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 18558: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 18559: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 18560: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 18723: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 18724: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 18725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 18726: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 18727: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 18728: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 18729: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 18730: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 18731: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 18732: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 18733: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.90s leader 2, trace 18949: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.90s leader 2, trace 18950: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 18953: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 18954: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 18955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 18956: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 18957: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 18958: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 18959: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 18960: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 18961: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 18962: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 18963: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 19305: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 19306: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 19307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 19308: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 19309: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 19310: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 19311: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 19312: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 19313: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 19314: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 19315: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 19477: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 19478: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 19479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 19480: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 19481: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 19482: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 19483: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 19484: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 19485: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 19486: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 19487: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 19764: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 19765: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 19766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 19767: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 19768: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 19769: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 19770: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 19771: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 19772: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 19773: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 19774: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 19965: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 19966: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 19967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19968: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19969: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19970: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19971: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19972: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19973: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19974: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19975: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 20146: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 20147: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 20148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 20149: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 20150: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 20151: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 20152: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 20153: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 20154: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 20155: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 20156: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 20393: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 20394: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 20395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 20396: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 20397: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 20398: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 20399: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 20400: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 20401: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 20402: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 20403: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 20701: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 20702: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 20703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 20704: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20705: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 20706: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20707: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 20708: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20709: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 20710: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20711: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 20901: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 20902: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 20903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20904: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20905: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20906: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20907: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20908: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20909: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20910: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20911: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.05s leader 2, trace 21058: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 21087: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 21088: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 21089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 21090: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 21091: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 21092: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 21093: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 21094: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 21095: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 21096: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 21097: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 21343: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 21344: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 21345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 21346: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 21347: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 21348: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 21349: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 21350: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 21351: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 21352: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 21353: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 157.50s leader 2, trace 21480: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 157.50s leader 2, trace 21481: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 21591: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 21592: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 21593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 21594: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 21595: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 21596: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 21597: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 21598: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 21599: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 21600: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 21601: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.10s leader 2, trace 21725: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.10s leader 2, trace 21726: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 21770: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 21771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 21772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 21773: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 21774: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 21775: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 21776: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 21777: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 21778: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 21779: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 21780: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 22009: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 22010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 22011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 22012: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 22013: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 22014: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 22015: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 22016: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 22017: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 22018: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 22019: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 22183: estimate 1.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 22184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 22185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 22186: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 22187: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 22188: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 22189: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 22190: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 22191: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 22192: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 22193: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.15s leader 2, trace 22294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.15s leader 2, trace 22295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 22537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 22538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 22539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 22540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 22541: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 22542: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 22543: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 22544: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 22545: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 22546: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 22547: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 22747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 22748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 22749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 22750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 22751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 22752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 22753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 22754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 22755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 22756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 22757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 22934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 22935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 22936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 22937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 22938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 22939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 22940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 22941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 22942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 22943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 22944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 23114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 23115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 23116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 23117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 23118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 23119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 23120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 23121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 23122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 23123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 23124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 23442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 23443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 23444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 23445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 23446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 23447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 23448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 23449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 23450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 23451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 23452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 23640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 23641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 23642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 23643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 23644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 23645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 23646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 23647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 23648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 23649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 23650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 23844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 23845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 23846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 23847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 23848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 23849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 23850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 23851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 23852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 23853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 23854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.90s leader 2, trace 23919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 24024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 24025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 24026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 24027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 24029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 24030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 24032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 24033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 216.55s leader 2, trace 24120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 216.55s leader 2, trace 24121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 2, trace 24489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 24490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 24491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 24492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 24493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 24494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 24495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 24496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 24497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 24498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 24499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.15s leader 2, trace 25000: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.15s leader 2, trace 25001: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.25s leader 2, trace 25395: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 2, trace 25903: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 25904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 25905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 25906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 25907: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 25908: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 25909: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 25910: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 25911: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 25912: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 25913: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 2, trace 26494: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 26495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 26496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 26497: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 26498: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 26499: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 26500: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 26501: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 26502: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 26503: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 26504: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 2, trace 26666: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 26667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 26668: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 26669: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 26670: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 26671: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 26672: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 26673: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 26674: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 26675: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 2, trace 26831: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 26832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 26833: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 26834: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 26835: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 26836: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 26837: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 26838: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 26839: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 26840: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 2, trace 26981: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 26982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 26983: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 26984: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 26985: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 26986: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 26987: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 26988: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 26989: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 26990: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 2, trace 27143: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 27144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 27145: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 27146: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 27147: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 27148: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 27149: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 27150: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 27151: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 27152: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 2, trace 27302: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 27303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 27304: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 27305: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 27306: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 27307: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 27308: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 27309: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 27310: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 27311: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 2, trace 27457: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 27458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 27459: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 27460: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 27461: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 27462: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 27463: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 27464: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 27465: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 27466: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 27593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 27594: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 27595: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 27596: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 27597: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 27598: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 27599: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 27600: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 27601: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 267.90s leader 7, trace 27757: estimate 8.47; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 267.90s leader 7, trace 27758: estimate 8.47; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 27847: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 27848: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 27849: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 27850: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 27851: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 27852: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 27853: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 27854: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 27855: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.70s leader 7, trace 27917: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.70s leader 7, trace 27918: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 28059: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 28060: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 28061: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 28062: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 28063: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 28064: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 28065: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 28066: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 28067: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 28212: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 28213: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 28214: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 28215: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 28216: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 28217: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 28218: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 28219: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 28220: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 28382: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 28383: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 28384: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 28385: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 28386: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 28387: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 28388: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 28389: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 28390: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 28536: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 28537: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 28538: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 28539: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 28540: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 28541: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 28542: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 28543: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 28544: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 28704: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 28705: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 28706: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 28707: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 28708: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 28709: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 28710: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 28711: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 28712: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 28879: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 28880: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28881: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 28882: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 28883: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 28884: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 28885: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 28886: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28887: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 29050: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 29051: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 29052: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 29053: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 29054: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 29055: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 29056: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 29057: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 29058: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 29201: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 29202: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 29203: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 29204: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 29205: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 29206: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 29207: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 29208: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 29209: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 29365: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 29366: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 29367: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 29368: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 29369: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 29370: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 29371: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 29372: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 29373: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 29537: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 29538: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29539: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 29540: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29541: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 29542: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29543: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 29544: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29545: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 29698: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 29699: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 29700: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 29701: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 29702: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 29703: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 29704: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 29705: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 29706: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 329.50s leader 7, trace 29848: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 29856: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 29857: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 29858: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 29859: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 29860: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 29861: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 29862: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 29863: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 29864: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 332.30s leader 7, trace 29970: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 30026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 30027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 30028: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 30029: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 30030: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 30031: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 30032: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 30033: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 30034: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 30194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 30195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 30196: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 30197: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 30198: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 30199: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 30200: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 30201: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 30202: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 30357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 30358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 30359: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 30360: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 30361: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 30362: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 30363: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 30364: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30365: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 30521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 30522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 30523: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 30524: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 30525: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 30526: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 30527: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 30528: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 30529: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 30689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 30690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 30691: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 30692: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 30693: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 30694: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 30695: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 30696: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 30697: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 30853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 30854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 30855: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 30856: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 30857: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 30858: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 30859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 30860: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 30861: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Rook incapacitated
- 1: Bren incapacitated
- 1: Voss incapacitated
- 1: Ash incapacitated
- 1: Flint incapacitated
- 1: Iven incapacitated
- 1: Orin killed in action
- 1: Moss killed in action
- 1: Tern killed in action
- 1: Soren incapacitated

## Outcome attribution

- 87.90s, evidence 1170: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 87.90s, evidence 18097: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368082 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 89.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18134}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 87.90s, evidence 18098: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368082 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 89.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18134}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 104.90s, evidence 1265: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19011}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 104.90s, evidence 18949: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395983 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19011}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 104.90s, evidence 18950: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.395983 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19011}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 149.05s, evidence 1555: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 179, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1974}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 210.90s, evidence 1974: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 267.90s, evidence 2255: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 297.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2583}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 270.70s, evidence 2272: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 270.70s, evidence 27917: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.238294 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27933}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 270.70s, evidence 27918: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.238294 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27933}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 329.50s, evidence 2583: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 359.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 332.30s, evidence 2604: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
