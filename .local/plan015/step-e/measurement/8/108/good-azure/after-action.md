# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/8/108/good-azure/battle-108-1789673794389883842`

## Battle summary

**Azure** · 360 s · 508 shots.

### Turning points

- 19.2s, squad 5: contact (events line 219). First recorded contact.
- 41.0s, squad 1: help call ([trace 9097](#trace-9097)). No completion observed before termination.
- 44.2s, squad 0: help answer ([trace 9278](#trace-9278)). 60.4s, squad 0: took cover and returned fire.
- 54.2s, squad 0: help call ([trace 11659](#trace-11659)). No completion observed before termination.
- 64.5s, squad 0: withdrawal ([trace 12593](#trace-12593)). 101.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 69.7s, squad 1: withdrawal ([trace 13166](#trace-13166)). 181.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 108.3s, squad 0: withdrawal ([trace 16719](#trace-16719)). No completion observed before termination.
- 134.6s, squad 0: help call ([trace 18087](#trace-18087)). No completion observed before termination.
- 186.9s, squad 1: withdrawal ([trace 20024](#trace-20024)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, Withdraw to received rally and 5 further drill types; withdrew; 74 shots, 5/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 77 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 314 shots, 7/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 43 shots, 1/2 lost.

### Decisions and attribution

At 23.6s, squad 0 chose FightHere: nearest known group ([trace 4206](#trace-4206)), followed by 0 shots and 1 own casualties; estimate 11.8 against 10 distinct squad-reported contacts; At 103.4s, squad 1 chose renewed the existing objective ([trace 14781](#trace-14781)), followed by 20 shots and 0 own casualties; estimate 11.2 against 3 distinct squad-reported contacts; At 69.7s, squad 1 chose broke contact ([trace 13166](#trace-13166)), followed by 11 shots and 0 own casualties; estimate 11.3 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449901673119365, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 827}.

### Communication

159 matched deliveries (mean 0.37s, max 2.80s); 245 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 19.20s, squad 5, contact, evidence events line 219: First recorded contact; .
- 40.95s, squad 1, help call, evidence 9097: NeedSupport; No completion observed before termination.
- 44.25s, squad 0, help answer, evidence 9278: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 60.4s, squad 0: took cover and returned fire.
- 54.15s, squad 0, help call, evidence 11659: NeedSupport; No completion observed before termination.
- 64.50s, squad 0, withdrawal, evidence 12593: BreakContact: believed ratio at least two without superiority; 101.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 69.70s, squad 1, withdrawal, evidence 13166: BreakContact: believed ratio at least two without superiority; 181.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 108.30s, squad 0, withdrawal, evidence 16719: Withdraw to received rally; No completion observed before termination.
- 134.55s, squad 0, help call, evidence 18087: NeedSupport; No completion observed before termination.
- 186.85s, squad 1, withdrawal, evidence 20024: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915567680134932, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915567680134932, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915567680134932, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528728921962358, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528728921962358, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528728921962358, 'next_transition': 87}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-639"></a>
<a id="trace-641"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-683"></a>
<a id="trace-685"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599783288097202, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449901673119365, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 827}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449901673119365, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449901673119365, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 827}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 827}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-739"></a>
<a id="trace-741"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-943"></a>
<a id="trace-945"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9447771297775882, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.96850102929632, 'next_transition': 1848}.
<a id="trace-947"></a>
<a id="trace-949"></a>
<a id="trace-1287"></a>
<a id="trace-1289"></a>
<a id="trace-1325"></a>
<a id="trace-1327"></a>
<a id="trace-1367"></a>
<a id="trace-1369"></a>
<a id="trace-1406"></a>
<a id="trace-1408"></a>
<a id="trace-1440"></a>
<a id="trace-1442"></a>
<a id="trace-1487"></a>
<a id="trace-1489"></a>
<a id="trace-1521"></a>
<a id="trace-1523"></a>
<a id="trace-1638"></a>
<a id="trace-1640"></a>
<a id="trace-1663"></a>
<a id="trace-1665"></a>
<a id="trace-1687"></a>
<a id="trace-1689"></a>
<a id="trace-1717"></a>
<a id="trace-1719"></a>
<a id="trace-1747"></a>
<a id="trace-1749"></a>
<a id="trace-1773"></a>
<a id="trace-1775"></a>
<a id="trace-1798"></a>
<a id="trace-1800"></a>
<a id="trace-1843"></a>
<a id="trace-1845"></a>
<a id="trace-1992"></a>
<a id="trace-1994"></a>
<a id="trace-2080"></a>
<a id="trace-2082"></a>
<a id="trace-2107"></a>
<a id="trace-2109"></a>
<a id="trace-2420"></a>
<a id="trace-2422"></a>
<a id="trace-2486"></a>
<a id="trace-2488"></a>
<a id="trace-2506"></a>
<a id="trace-2508"></a>
<a id="trace-2543"></a>
<a id="trace-2545"></a>
<a id="trace-2594"></a>
<a id="trace-2596"></a>
<a id="trace-3142"></a>
<a id="trace-3144"></a>
<a id="trace-3245"></a>
<a id="trace-3247"></a>
<a id="trace-3287"></a>
<a id="trace-3289"></a>
<a id="trace-3666"></a>
<a id="trace-3668"></a>
<a id="trace-4043"></a>
<a id="trace-4045"></a>
<a id="trace-4105"></a>
<a id="trace-4107"></a>
<a id="trace-4146"></a>
<a id="trace-4148"></a>
<a id="trace-4230"></a>
<a id="trace-4232"></a>
<a id="trace-4267"></a>
<a id="trace-4269"></a>
<a id="trace-4431"></a>
<a id="trace-4433"></a>
<a id="trace-4447"></a>
<a id="trace-4449"></a>
<a id="trace-4647"></a>
<a id="trace-4649"></a>
<a id="trace-4668"></a>
<a id="trace-4670"></a>
<a id="trace-4707"></a>
<a id="trace-4709"></a>
<a id="trace-4733"></a>
<a id="trace-4735"></a>
<a id="trace-4765"></a>
<a id="trace-4767"></a>
<a id="trace-7455"></a>
<a id="trace-7457"></a>
<a id="trace-7607"></a>
<a id="trace-7609"></a>
<a id="trace-7755"></a>
<a id="trace-7757"></a>
<a id="trace-7811"></a>
<a id="trace-7813"></a>
<a id="trace-7883"></a>
<a id="trace-7885"></a>
<a id="trace-8038"></a>
<a id="trace-8040"></a>
<a id="trace-8094"></a>
<a id="trace-8096"></a>
<a id="trace-8218"></a>
<a id="trace-8220"></a>
<a id="trace-8270"></a>
<a id="trace-8272"></a>
<a id="trace-8323"></a>
<a id="trace-8325"></a>
<a id="trace-8365"></a>
<a id="trace-8367"></a>
<a id="trace-8393"></a>
<a id="trace-8395"></a>
<a id="trace-8879"></a>
<a id="trace-8881"></a>
<a id="trace-8904"></a>
<a id="trace-8906"></a>
<a id="trace-8946"></a>
<a id="trace-8948"></a>
<a id="trace-8974"></a>
<a id="trace-8976"></a>
<a id="trace-9069"></a>
<a id="trace-9071"></a>
<a id="trace-9093"></a>
<a id="trace-9095"></a>
<a id="trace-9119"></a>
<a id="trace-9121"></a>
<a id="trace-9221"></a>
<a id="trace-9223"></a>
<a id="trace-9247"></a>
<a id="trace-9249"></a>
<a id="trace-9275"></a>
<a id="trace-9277"></a>
<a id="trace-11081"></a>
<a id="trace-11083"></a>
<a id="trace-11166"></a>
<a id="trace-11168"></a>
<a id="trace-11187"></a>
<a id="trace-11189"></a>
<a id="trace-11211"></a>
<a id="trace-11213"></a>
<a id="trace-11229"></a>
<a id="trace-11231"></a>
<a id="trace-11263"></a>
<a id="trace-11265"></a>
<a id="trace-11282"></a>
<a id="trace-11284"></a>
<a id="trace-11309"></a>
<a id="trace-11311"></a>
<a id="trace-11349"></a>
<a id="trace-11351"></a>
<a id="trace-11392"></a>
<a id="trace-11394"></a>
<a id="trace-11414"></a>
<a id="trace-11416"></a>
<a id="trace-11508"></a>
<a id="trace-11510"></a>
<a id="trace-11533"></a>
<a id="trace-11535"></a>
<a id="trace-11561"></a>
<a id="trace-11563"></a>
<a id="trace-11575"></a>
<a id="trace-11577"></a>
<a id="trace-11598"></a>
<a id="trace-11600"></a>
<a id="trace-11616"></a>
<a id="trace-11618"></a>
<a id="trace-11634"></a>
<a id="trace-11636"></a>
<a id="trace-11654"></a>
<a id="trace-11656"></a>
<a id="trace-11681"></a>
<a id="trace-11683"></a>
<a id="trace-11703"></a>
<a id="trace-11705"></a>
<a id="trace-11785"></a>
<a id="trace-11787"></a>
<a id="trace-11798"></a>
<a id="trace-11800"></a>
<a id="trace-11820"></a>
<a id="trace-11822"></a>
<a id="trace-11836"></a>
<a id="trace-11838"></a>
<a id="trace-11854"></a>
<a id="trace-11856"></a>
<a id="trace-11864"></a>
<a id="trace-11866"></a>
<a id="trace-11897"></a>
<a id="trace-11899"></a>
<a id="trace-11917"></a>
<a id="trace-11919"></a>
<a id="trace-11958"></a>
<a id="trace-11960"></a>
<a id="trace-12402"></a>
<a id="trace-12404"></a>
<a id="trace-12474"></a>
<a id="trace-12476"></a>
<a id="trace-12503"></a>
<a id="trace-12505"></a>
<a id="trace-12517"></a>
<a id="trace-12519"></a>
<a id="trace-12548"></a>
<a id="trace-12550"></a>
<a id="trace-12563"></a>
<a id="trace-12565"></a>
<a id="trace-12584"></a>
<a id="trace-12586"></a>
<a id="trace-13040"></a>
<a id="trace-13042"></a>
<a id="trace-13096"></a>
<a id="trace-13098"></a>
<a id="trace-13140"></a>
<a id="trace-13142"></a>
<a id="trace-13160"></a>
<a id="trace-13162"></a>
<a id="trace-13329"></a>
<a id="trace-13331"></a>
<a id="trace-13423"></a>
<a id="trace-13425"></a>
<a id="trace-13444"></a>
<a id="trace-13446"></a>
<a id="trace-13473"></a>
<a id="trace-13475"></a>
<a id="trace-13499"></a>
<a id="trace-13501"></a>
<a id="trace-13509"></a>
<a id="trace-13511"></a>
<a id="trace-13526"></a>
<a id="trace-13528"></a>
<a id="trace-13538"></a>
<a id="trace-13540"></a>
<a id="trace-13558"></a>
<a id="trace-13560"></a>
<a id="trace-13570"></a>
<a id="trace-13572"></a>
<a id="trace-13644"></a>
<a id="trace-13646"></a>
<a id="trace-13658"></a>
<a id="trace-13660"></a>
<a id="trace-13674"></a>
<a id="trace-13676"></a>
<a id="trace-13686"></a>
<a id="trace-13688"></a>
<a id="trace-13706"></a>
<a id="trace-13708"></a>
<a id="trace-13718"></a>
<a id="trace-13720"></a>
<a id="trace-13739"></a>
<a id="trace-13741"></a>
<a id="trace-13752"></a>
<a id="trace-13754"></a>
<a id="trace-13768"></a>
<a id="trace-13770"></a>
<a id="trace-13781"></a>
<a id="trace-13783"></a>
<a id="trace-13870"></a>
<a id="trace-13872"></a>
<a id="trace-13890"></a>
<a id="trace-13892"></a>
<a id="trace-13902"></a>
<a id="trace-13904"></a>
<a id="trace-13923"></a>
<a id="trace-13925"></a>
<a id="trace-13957"></a>
<a id="trace-13959"></a>
<a id="trace-13972"></a>
<a id="trace-13974"></a>
<a id="trace-13990"></a>
<a id="trace-13992"></a>
<a id="trace-14007"></a>
<a id="trace-14009"></a>
<a id="trace-14083"></a>
<a id="trace-14085"></a>
<a id="trace-14110"></a>
<a id="trace-14112"></a>
<a id="trace-14123"></a>
<a id="trace-14125"></a>
<a id="trace-14142"></a>
<a id="trace-14144"></a>
<a id="trace-14170"></a>
<a id="trace-14172"></a>
<a id="trace-14184"></a>
<a id="trace-14186"></a>
<a id="trace-14199"></a>
<a id="trace-14201"></a>
<a id="trace-14211"></a>
<a id="trace-14213"></a>
<a id="trace-14299"></a>
<a id="trace-14301"></a>
<a id="trace-14313"></a>
<a id="trace-14315"></a>
<a id="trace-14343"></a>
<a id="trace-14345"></a>
<a id="trace-14375"></a>
<a id="trace-14377"></a>
<a id="trace-14392"></a>
<a id="trace-14394"></a>
<a id="trace-14413"></a>
<a id="trace-14415"></a>
<a id="trace-14427"></a>
<a id="trace-14429"></a>
<a id="trace-14505"></a>
<a id="trace-14507"></a>
<a id="trace-14520"></a>
<a id="trace-14522"></a>
<a id="trace-14539"></a>
<a id="trace-14541"></a>
<a id="trace-14551"></a>
<a id="trace-14553"></a>
<a id="trace-14572"></a>
<a id="trace-14574"></a>
<a id="trace-14586"></a>
<a id="trace-14588"></a>
<a id="trace-14611"></a>
<a id="trace-14613"></a>
<a id="trace-14626"></a>
<a id="trace-14628"></a>
<a id="trace-14636"></a>
<a id="trace-14638"></a>
<a id="trace-14710"></a>
<a id="trace-14712"></a>
<a id="trace-14721"></a>
<a id="trace-14723"></a>
<a id="trace-14729"></a>
<a id="trace-14731"></a>
<a id="trace-14762"></a>
<a id="trace-14764"></a>
<a id="trace-14777"></a>
<a id="trace-14779"></a>
<a id="trace-14787"></a>
<a id="trace-14789"></a>
<a id="trace-14802"></a>
<a id="trace-14804"></a>
<a id="trace-14810"></a>
<a id="trace-14812"></a>
<a id="trace-14890"></a>
<a id="trace-14892"></a>
<a id="trace-16643"></a>
<a id="trace-16645"></a>
<a id="trace-16668"></a>
<a id="trace-16670"></a>
<a id="trace-16686"></a>
<a id="trace-16688"></a>
<a id="trace-16713"></a>
<a id="trace-16715"></a>
<a id="trace-16939"></a>
<a id="trace-16941"></a>
<a id="trace-16957"></a>
<a id="trace-16959"></a>
<a id="trace-17051"></a>
<a id="trace-17053"></a>
<a id="trace-17068"></a>
<a id="trace-17070"></a>
<a id="trace-17081"></a>
<a id="trace-17083"></a>
<a id="trace-17089"></a>
<a id="trace-17091"></a>
<a id="trace-17109"></a>
<a id="trace-17111"></a>
<a id="trace-17134"></a>
<a id="trace-17136"></a>
<a id="trace-17148"></a>
<a id="trace-17150"></a>
<a id="trace-17162"></a>
<a id="trace-17164"></a>
<a id="trace-17171"></a>
<a id="trace-17173"></a>
<a id="trace-17247"></a>
<a id="trace-17249"></a>
<a id="trace-17271"></a>
<a id="trace-17273"></a>
<a id="trace-17301"></a>
<a id="trace-17303"></a>
<a id="trace-17309"></a>
<a id="trace-17311"></a>
<a id="trace-17325"></a>
<a id="trace-17327"></a>
<a id="trace-17359"></a>
<a id="trace-17361"></a>
<a id="trace-17394"></a>
<a id="trace-17396"></a>
<a id="trace-17426"></a>
<a id="trace-17428"></a>
<a id="trace-17514"></a>
<a id="trace-17516"></a>
<a id="trace-17535"></a>
<a id="trace-17537"></a>
<a id="trace-17580"></a>
<a id="trace-17588"></a>
<a id="trace-17599"></a>
<a id="trace-17607"></a>
<a id="trace-17619"></a>
<a id="trace-17626"></a>
<a id="trace-17628"></a>
<a id="trace-17700"></a>
<a id="trace-17702"></a>
<a id="trace-17708"></a>
<a id="trace-17710"></a>
<a id="trace-17725"></a>
<a id="trace-17727"></a>
<a id="trace-17746"></a>
<a id="trace-17748"></a>
<a id="trace-17773"></a>
<a id="trace-17775"></a>
<a id="trace-17835"></a>
<a id="trace-17837"></a>
<a id="trace-17865"></a>
<a id="trace-17867"></a>
<a id="trace-17886"></a>
<a id="trace-17888"></a>
<a id="trace-17973"></a>
<a id="trace-17975"></a>
<a id="trace-17981"></a>
<a id="trace-17983"></a>
<a id="trace-17997"></a>
<a id="trace-17999"></a>
<a id="trace-18006"></a>
<a id="trace-18008"></a>
<a id="trace-18026"></a>
<a id="trace-18028"></a>
<a id="trace-18036"></a>
<a id="trace-18038"></a>
<a id="trace-18056"></a>
<a id="trace-18058"></a>
<a id="trace-18169"></a>
<a id="trace-18171"></a>
<a id="trace-18197"></a>
<a id="trace-18199"></a>
<a id="trace-18227"></a>
<a id="trace-18229"></a>
<a id="trace-18267"></a>
<a id="trace-18269"></a>
<a id="trace-18379"></a>
<a id="trace-18381"></a>
<a id="trace-18415"></a>
<a id="trace-18417"></a>
<a id="trace-18521"></a>
<a id="trace-18523"></a>
<a id="trace-18551"></a>
<a id="trace-18553"></a>
<a id="trace-18560"></a>
<a id="trace-18562"></a>
<a id="trace-18578"></a>
<a id="trace-18580"></a>
<a id="trace-18587"></a>
<a id="trace-18589"></a>
<a id="trace-18610"></a>
<a id="trace-18612"></a>
<a id="trace-18747"></a>
<a id="trace-18749"></a>
<a id="trace-18822"></a>
<a id="trace-18824"></a>
<a id="trace-18850"></a>
<a id="trace-18852"></a>
<a id="trace-18865"></a>
<a id="trace-18867"></a>
<a id="trace-18893"></a>
<a id="trace-18895"></a>
<a id="trace-18930"></a>
<a id="trace-18932"></a>
<a id="trace-18940"></a>
<a id="trace-18942"></a>
<a id="trace-19009"></a>
<a id="trace-19011"></a>
<a id="trace-19021"></a>
<a id="trace-19023"></a>
<a id="trace-19038"></a>
<a id="trace-19040"></a>
<a id="trace-19051"></a>
<a id="trace-19053"></a>
<a id="trace-19072"></a>
<a id="trace-19074"></a>
<a id="trace-19082"></a>
<a id="trace-19084"></a>
<a id="trace-19113"></a>
<a id="trace-19115"></a>
<a id="trace-19130"></a>
<a id="trace-19132"></a>
<a id="trace-19140"></a>
<a id="trace-19142"></a>
<a id="trace-19209"></a>
<a id="trace-19215"></a>
<a id="trace-19228"></a>
<a id="trace-19249"></a>
<a id="trace-19251"></a>
<a id="trace-19259"></a>
<a id="trace-19261"></a>
<a id="trace-19272"></a>
<a id="trace-19274"></a>
<a id="trace-19327"></a>
<a id="trace-19329"></a>
<a id="trace-19341"></a>
<a id="trace-19343"></a>
<a id="trace-19415"></a>
<a id="trace-19417"></a>
- 5.70s–160.30s (×486), actor 37, squad 4 (trace 947): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362504724995279, 'next_transition': 1287}.
<a id="trace-965"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 965): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299964431262709, 'next_transition': 1283}.
<a id="trace-1283"></a>
<a id="trace-1285"></a>
<a id="trace-1321"></a>
<a id="trace-1323"></a>
<a id="trace-1363"></a>
<a id="trace-1365"></a>
<a id="trace-1402"></a>
<a id="trace-1404"></a>
<a id="trace-1436"></a>
<a id="trace-1438"></a>
<a id="trace-1483"></a>
<a id="trace-1485"></a>
<a id="trace-1517"></a>
<a id="trace-1519"></a>
<a id="trace-1543"></a>
<a id="trace-1545"></a>
<a id="trace-1634"></a>
<a id="trace-1636"></a>
<a id="trace-1659"></a>
<a id="trace-1661"></a>
<a id="trace-1683"></a>
<a id="trace-1685"></a>
<a id="trace-1713"></a>
<a id="trace-1715"></a>
<a id="trace-1743"></a>
<a id="trace-1745"></a>
<a id="trace-1769"></a>
<a id="trace-1771"></a>
<a id="trace-1794"></a>
<a id="trace-1796"></a>
<a id="trace-1811"></a>
<a id="trace-1813"></a>
<a id="trace-1839"></a>
<a id="trace-1841"></a>
<a id="trace-1988"></a>
<a id="trace-1990"></a>
<a id="trace-2076"></a>
<a id="trace-2078"></a>
<a id="trace-2103"></a>
<a id="trace-2105"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1283): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2669833011547935, 'next_transition': 1321}.
<a id="trace-1848"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1848): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1563. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.889983417381629, 'next_transition': 2600}.
<a id="trace-1849"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1849): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1563. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.889983417381629, 'next_transition': 2600}.
<a id="trace-2112"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2112): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2002. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41891540681421946, 'next_transition': 2416}.
<a id="trace-2113"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2113): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2002. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41891540681421946, 'next_transition': 2416}.
<a id="trace-2416"></a>
<a id="trace-2418"></a>
<a id="trace-2453"></a>
<a id="trace-2455"></a>
<a id="trace-2482"></a>
<a id="trace-2484"></a>
<a id="trace-2502"></a>
<a id="trace-2504"></a>
<a id="trace-2539"></a>
<a id="trace-2541"></a>
<a id="trace-2570"></a>
<a id="trace-2572"></a>
<a id="trace-2590"></a>
<a id="trace-2592"></a>
<a id="trace-3138"></a>
<a id="trace-3140"></a>
<a id="trace-3241"></a>
<a id="trace-3243"></a>
<a id="trace-3283"></a>
<a id="trace-3285"></a>
- 16.25s–20.75s (×20), actor 5, squad 0 (trace 2416): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2007. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843806815709046, 'next_transition': 2453}.
<a id="trace-2600"></a>
- 19.35s–19.35s (×1), actor 8, squad 1 (trace 2600): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2010. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315008083864525, 'next_transition': 2777}.
<a id="trace-2601"></a>
- 19.35s–19.35s (×1), actor 8, squad 1 (trace 2601): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2010. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315008083864525, 'next_transition': 2777}.
<a id="trace-2602"></a>
<a id="trace-2777"></a>
<a id="trace-2953"></a>
- 19.35s–19.45s (×3), actor 8, squad 1 (trace 2602): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2010. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315008083864525, 'next_transition': 2777}.
<a id="trace-3300"></a>
- 20.95s–20.95s (×1), actor 0, squad 0 (trace 3300): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3163. Next observer evidence: {'until': 21.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.629992743758492, 'next_transition': 3662}.
<a id="trace-3301"></a>
- 20.95s–20.95s (×1), actor 0, squad 0 (trace 3301): bounding overwatch. Knowledge: actor memory at 20.00s, trace 3163. Next observer evidence: {'until': 21.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.629992743758492, 'next_transition': 3662}.
<a id="trace-3302"></a>
- 20.95s–20.95s (×1), actor 0, squad 0 (trace 3302): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3163. Next observer evidence: {'until': 21.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.629992743758492, 'next_transition': 3662}.
<a id="trace-3662"></a>
<a id="trace-3664"></a>
- 21.25s–21.25s (×2), actor 5, squad 0 (trace 3662): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3168. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149940946298254, 'next_transition': 3674}.
<a id="trace-3674"></a>
- 21.45s–21.45s (×1), actor 0, squad 0 (trace 3674): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3163. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149948216607803, 'next_transition': 4039}.
<a id="trace-4039"></a>
<a id="trace-4041"></a>
<a id="trace-4101"></a>
<a id="trace-4103"></a>
<a id="trace-4142"></a>
<a id="trace-4144"></a>
<a id="trace-4180"></a>
<a id="trace-4182"></a>
- 21.75s–23.25s (×8), actor 5, squad 0 (trace 4039): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3168. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7420872675397925, 'next_transition': 4101}.
<a id="trace-4152"></a>
- 22.80s–22.80s (×1), actor 8, squad 1 (trace 4152): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3171. Next observer evidence: {'until': 23.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4368295579799595, 'next_transition': 355}.
<a id="trace-354"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (events line 354): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-355"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (events line 355): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4205"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 4205): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676022 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4205. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2445797867751282, 'next_transition': 4226}.
<a id="trace-4206"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 4206): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676022 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4206. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2445797867751282, 'next_transition': 4226}.
<a id="trace-4207"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 4207): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676022 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4207. Next observer evidence: {'until': 24.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2600027926953188, 'next_transition': 4270}.
<a id="trace-4208"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 4208): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676022 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4208. Next observer evidence: {'until': 24.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2600027926953188, 'next_transition': 4270}.
<a id="trace-4226"></a>
<a id="trace-4228"></a>
<a id="trace-4262"></a>
<a id="trace-4264"></a>
<a id="trace-4288"></a>
<a id="trace-4290"></a>
<a id="trace-4426"></a>
<a id="trace-4428"></a>
<a id="trace-4442"></a>
<a id="trace-4444"></a>
<a id="trace-4642"></a>
<a id="trace-4644"></a>
- 23.75s–26.25s (×12), actor 5, squad 0 (trace 4226): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 23.55s, trace 4208. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8099862769543469, 'next_transition': 4262}.
<a id="trace-4270"></a>
- 24.25s–24.25s (×1), actor 8, squad 1 (trace 4270): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 3171. Next observer evidence: {'until': 25, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.318598149555163, 'next_transition': 4319}.
<a id="trace-4319"></a>
- 25.00s–25.00s (×1), actor 8, squad 1 (trace 4319): MoveTactically. Knowledge: actor memory at 25.00s, trace 4306. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9443721979281006, 'next_transition': 4457}.
<a id="trace-4320"></a>
- 25.00s–25.00s (×1), actor 8, squad 1 (trace 4320): received platoon directive. Knowledge: actor memory at 25.00s, trace 4306. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9443721979281006, 'next_transition': 4457}.
<a id="trace-4457"></a>
- 25.95s–25.95s (×1), actor 8, squad 1 (trace 4457): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 4306. Next observer evidence: {'until': 29.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 4.384633752309833, 'next_transition': 7486}.
<a id="trace-4458"></a>
- 25.95s–25.95s (×1), actor 8, squad 1 (trace 4458): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 4306. Next observer evidence: {'until': 29.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 4.384633752309833, 'next_transition': 7486}.
<a id="trace-4652"></a>
- 26.50s–26.50s (×1), actor 1, squad 0 (trace 4652): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4299. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0900063719286315, 'next_transition': 4661}.
<a id="trace-4661"></a>
<a id="trace-4663"></a>
<a id="trace-4700"></a>
<a id="trace-4702"></a>
<a id="trace-4726"></a>
<a id="trace-4728"></a>
<a id="trace-4760"></a>
<a id="trace-4762"></a>
- 26.75s–28.25s (×8), actor 5, squad 0 (trace 4661): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4303. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26502133423556656, 'next_transition': 4700}.
<a id="trace-4773"></a>
- 28.50s–28.50s (×1), actor 1, squad 0 (trace 4773): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 4299. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7450}.
<a id="trace-7283"></a>
- 28.50s–28.50s (×1), actor 1, squad 0 (trace 7283): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 4299. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7450}.
<a id="trace-7284"></a>
- 28.50s–28.50s (×1), actor 1, squad 0 (trace 7284): MoveTactically. Knowledge: actor memory at 25.00s, trace 4299. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7450}.
<a id="trace-7285"></a>
- 28.50s–28.50s (×1), actor 1, squad 0 (trace 7285): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 4299. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7450}.
<a id="trace-7450"></a>
<a id="trace-7452"></a>
<a id="trace-7478"></a>
<a id="trace-7480"></a>
<a id="trace-7508"></a>
<a id="trace-7510"></a>
<a id="trace-7601"></a>
<a id="trace-7603"></a>
<a id="trace-7634"></a>
<a id="trace-7636"></a>
<a id="trace-7703"></a>
<a id="trace-7705"></a>
<a id="trace-7749"></a>
<a id="trace-7751"></a>
<a id="trace-7805"></a>
<a id="trace-7807"></a>
<a id="trace-7877"></a>
<a id="trace-7879"></a>
<a id="trace-7924"></a>
<a id="trace-7926"></a>
<a id="trace-7976"></a>
<a id="trace-7978"></a>
<a id="trace-8032"></a>
<a id="trace-8034"></a>
<a id="trace-8088"></a>
<a id="trace-8090"></a>
<a id="trace-8212"></a>
<a id="trace-8214"></a>
<a id="trace-8264"></a>
<a id="trace-8266"></a>
<a id="trace-8317"></a>
<a id="trace-8319"></a>
<a id="trace-8359"></a>
<a id="trace-8361"></a>
<a id="trace-8387"></a>
<a id="trace-8389"></a>
<a id="trace-8409"></a>
<a id="trace-8411"></a>
- 28.75s–37.75s (×38), actor 5, squad 0 (trace 7450): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4303. Next observer evidence: {'until': 29.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5399984481478082, 'next_transition': 7478}.
<a id="trace-7486"></a>
- 29.30s–29.30s (×1), actor 8, squad 1 (trace 7486): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4306. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9504123646522874, 'next_transition': 7739}.
<a id="trace-7739"></a>
- 31.65s–31.65s (×1), actor 8, squad 1 (trace 7739): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 7532. Next observer evidence: {'until': 33.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6305455971385476, 'next_transition': 593}.
<a id="trace-593"></a>
- 33.45s–33.45s (×1), actor 5, squad 1 (events line 593): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7945"></a>
- 33.45s–33.45s (×1), actor 5, squad 1 (trace 7945): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.573002 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 7945. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5270225765125434, 'next_transition': 8097}.
<a id="trace-7946"></a>
- 33.45s–33.45s (×1), actor 5, squad 1 (trace 7946): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.573002 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 7946. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5270225765125434, 'next_transition': 8097}.
<a id="trace-8097"></a>
- 34.75s–34.75s (×1), actor 8, squad 1 (trace 8097): received platoon directive; retain held slots. Knowledge: actor memory at 30.00s, trace 7532. Next observer evidence: {'until': 38.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2617823032014552, 'next_transition': 824}.
<a id="trace-8420"></a>
- 38.00s–38.00s (×1), actor 1, squad 0 (trace 8420): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 8114. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39641036698448134, 'next_transition': 8873}.
<a id="trace-8421"></a>
- 38.00s–38.00s (×1), actor 1, squad 0 (trace 8421): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 8114. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39641036698448134, 'next_transition': 8873}.
<a id="trace-8873"></a>
<a id="trace-8875"></a>
<a id="trace-8898"></a>
<a id="trace-8900"></a>
<a id="trace-8941"></a>
<a id="trace-8943"></a>
<a id="trace-8969"></a>
<a id="trace-8971"></a>
<a id="trace-9064"></a>
<a id="trace-9066"></a>
<a id="trace-9088"></a>
<a id="trace-9090"></a>
<a id="trace-9113"></a>
<a id="trace-9115"></a>
- 38.25s–41.25s (×14), actor 5, squad 0 (trace 8873): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 8118. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7932444783198122, 'next_transition': 8898}.
<a id="trace-824"></a>
- 38.35s–38.35s (×1), actor 5, squad 1 (events line 824): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8882"></a>
- 38.35s–38.35s (×1), actor 5, squad 1 (trace 8882): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548240 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 8882. Next observer evidence: {'until': 39.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8987663066809969, 'next_transition': 8962}.
<a id="trace-8883"></a>
- 38.35s–38.35s (×1), actor 5, squad 1 (trace 8883): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548240 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 8883. Next observer evidence: {'until': 39.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8987663066809969, 'next_transition': 8962}.
<a id="trace-8962"></a>
- 39.65s–39.65s (×1), actor 8, squad 1 (trace 8962): received platoon directive; retain held slots. Knowledge: actor memory at 35.00s, trace 8121. Next observer evidence: {'until': 40.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9097}.
<a id="trace-9097"></a>
- 40.95s–40.95s (×1), actor 8, squad 1 (trace 9097): NeedSupport. Knowledge: actor memory at 40.00s, trace 8992. Next observer evidence: {'until': 43.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1002}.
<a id="trace-9141"></a>
- 41.65s–41.65s (×1), actor 1, squad 0 (trace 9141): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 8985. Next observer evidence: None.
<a id="trace-9152"></a>
<a id="trace-9154"></a>
<a id="trace-9176"></a>
<a id="trace-9178"></a>
<a id="trace-9194"></a>
<a id="trace-9196"></a>
<a id="trace-9215"></a>
<a id="trace-9217"></a>
<a id="trace-9241"></a>
<a id="trace-9243"></a>
<a id="trace-9269"></a>
<a id="trace-9271"></a>
- 41.75s–44.25s (×12), actor 5, squad 0 (trace 9152): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 8989. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.051124470507606, 'next_transition': 9176}.
<a id="trace-1002"></a>
- 43.35s–43.35s (×1), actor 5, squad 1 (events line 1002): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9226"></a>
- 43.35s–43.35s (×1), actor 5, squad 1 (trace 9226): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.526448 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 43.35s, trace 9226. Next observer evidence: {'until': 45.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.611570039658531, 'next_transition': 11170}.
<a id="trace-9227"></a>
- 43.35s–43.35s (×1), actor 5, squad 1 (trace 9227): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.526448 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 43.35s, trace 9227. Next observer evidence: {'until': 45.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.611570039658531, 'next_transition': 11170}.
<a id="trace-9278"></a>
- 44.25s–44.25s (×1), actor 1, squad 0 (trace 9278): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 8985. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4040362872155124, 'next_transition': 11075}.
<a id="trace-9279"></a>
- 44.25s–44.25s (×1), actor 1, squad 0 (trace 9279): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 8985. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4040362872155124, 'next_transition': 11075}.
<a id="trace-11075"></a>
<a id="trace-11077"></a>
<a id="trace-11160"></a>
<a id="trace-11162"></a>
<a id="trace-11181"></a>
<a id="trace-11183"></a>
- 44.75s–45.75s (×6), actor 5, squad 0 (trace 11075): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 43.35s, trace 9227. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9044249076498324, 'next_transition': 11160}.
<a id="trace-11170"></a>
- 45.30s–45.30s (×1), actor 8, squad 1 (trace 11170): received platoon directive; retain held slots. Knowledge: actor memory at 45.00s, trace 11093. Next observer evidence: {'until': 49.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.7000191533996567, 'next_transition': 1239}.
<a id="trace-1080"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (events line 1080): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11190"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (trace 11190): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.527106 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 11190. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34836366983032413, 'next_transition': 11205}.
<a id="trace-11191"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (trace 11191): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.527106 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 11191. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34836366983032413, 'next_transition': 11205}.
<a id="trace-11205"></a>
<a id="trace-11207"></a>
<a id="trace-11223"></a>
<a id="trace-11225"></a>
<a id="trace-11257"></a>
<a id="trace-11259"></a>
<a id="trace-11276"></a>
<a id="trace-11278"></a>
<a id="trace-11303"></a>
<a id="trace-11305"></a>
<a id="trace-11343"></a>
<a id="trace-11345"></a>
<a id="trace-11386"></a>
<a id="trace-11388"></a>
<a id="trace-11408"></a>
<a id="trace-11410"></a>
<a id="trace-11502"></a>
<a id="trace-11504"></a>
<a id="trace-11527"></a>
<a id="trace-11529"></a>
<a id="trace-11556"></a>
<a id="trace-11558"></a>
<a id="trace-11570"></a>
<a id="trace-11572"></a>
<a id="trace-11593"></a>
<a id="trace-11595"></a>
<a id="trace-11611"></a>
<a id="trace-11613"></a>
<a id="trace-11629"></a>
<a id="trace-11631"></a>
<a id="trace-11649"></a>
<a id="trace-11651"></a>
- 46.25s–53.75s (×32), actor 5, squad 0 (trace 11205): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.85s, trace 11191. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33613380502694323, 'next_transition': 11223}.
<a id="trace-1239"></a>
- 49.60s–49.60s (×1), actor 5, squad 1 (events line 1239): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11403"></a>
- 49.60s–49.60s (×1), actor 5, squad 1 (trace 11403): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.546410 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 11403. Next observer evidence: {'until': 51, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0374753551236768, 'next_transition': 11541}.
<a id="trace-11404"></a>
- 49.60s–49.60s (×1), actor 5, squad 1 (trace 11404): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.546410 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 11404. Next observer evidence: {'until': 51, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0374753551236768, 'next_transition': 11541}.
<a id="trace-11541"></a>
- 51.00s–51.00s (×1), actor 8, squad 1 (trace 11541): received platoon directive; retain held slots. Knowledge: actor memory at 50.00s, trace 11426. Next observer evidence: {'until': 54.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.400044980730255, 'next_transition': 1396}.
<a id="trace-11659"></a>
- 54.15s–54.15s (×1), actor 2, squad 0 (trace 11659): NeedSupport. Knowledge: actor memory at 50.00s, trace 11420. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.025950720178403313, 'next_transition': 11674}.
<a id="trace-11674"></a>
<a id="trace-11676"></a>
<a id="trace-11698"></a>
<a id="trace-11700"></a>
<a id="trace-11780"></a>
<a id="trace-11782"></a>
<a id="trace-11793"></a>
<a id="trace-11795"></a>
<a id="trace-11816"></a>
<a id="trace-11818"></a>
<a id="trace-11832"></a>
<a id="trace-11834"></a>
<a id="trace-11850"></a>
<a id="trace-11852"></a>
<a id="trace-11859"></a>
<a id="trace-11861"></a>
<a id="trace-11876"></a>
<a id="trace-11878"></a>
<a id="trace-11892"></a>
<a id="trace-11894"></a>
<a id="trace-11912"></a>
<a id="trace-11914"></a>
- 54.25s–59.25s (×22), actor 5, squad 0 (trace 11674): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11423. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.021653572710088873, 'next_transition': 11698}.
<a id="trace-1396"></a>
- 54.60s–54.60s (×1), actor 5, squad 1 (events line 1396): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11693"></a>
- 54.60s–54.60s (×1), actor 5, squad 1 (trace 11693): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.545350 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 54.60s, trace 11693. Next observer evidence: {'until': 56.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.9629280244382372, 'next_transition': 11811}.
<a id="trace-11694"></a>
- 54.60s–54.60s (×1), actor 5, squad 1 (trace 11694): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.545350 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 54.60s, trace 11694. Next observer evidence: {'until': 56.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.9629280244382372, 'next_transition': 11811}.
<a id="trace-11811"></a>
- 56.20s–56.20s (×1), actor 8, squad 1 (trace 11811): received platoon directive; retain held slots. Knowledge: actor memory at 55.00s, trace 11713. Next observer evidence: {'until': 60.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 2.5954909205100294, 'next_transition': 1597}.
<a id="trace-11931"></a>
- 59.35s–59.35s (×1), actor 3, squad 0 (trace 11931): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 55.00s, trace 11708. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4948968483867602, 'next_transition': 11953}.
<a id="trace-11953"></a>
<a id="trace-11955"></a>
<a id="trace-12051"></a>
<a id="trace-12053"></a>
- 59.75s–60.25s (×4), actor 5, squad 0 (trace 11953): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 11710. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45502813509872475, 'next_transition': 12051}.
<a id="trace-12063"></a>
- 60.35s–60.35s (×1), actor 3, squad 0 (trace 12063): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 11973. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2388980153161348, 'next_transition': 12397}.
<a id="trace-12067"></a>
- 60.35s–60.35s (×1), actor 3, squad 0 (trace 12067): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 11973. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2388980153161348, 'next_transition': 12397}.
<a id="trace-12068"></a>
- 60.35s–60.35s (×1), actor 3, squad 0 (trace 12068): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 11973. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2388980153161348, 'next_transition': 12397}.
<a id="trace-12397"></a>
<a id="trace-12399"></a>
- 60.75s–60.75s (×2), actor 5, squad 0 (trace 12397): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11975. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44395867818446744, 'next_transition': 12429}.
<a id="trace-1597"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (events line 1597): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12409"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (trace 12409): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.620860 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 12409. Next observer evidence: {'until': 63, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.305401887360747, 'next_transition': 12530}.
<a id="trace-12410"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (trace 12410): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.620860 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 12410. Next observer evidence: {'until': 63, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.305401887360747, 'next_transition': 12530}.
<a id="trace-12429"></a>
- 61.20s–61.20s (×1), actor 5, squad 0 (trace 12429): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 61.20s, trace 12429. Next observer evidence: None.
<a id="trace-12437"></a>
<a id="trace-12439"></a>
<a id="trace-12469"></a>
<a id="trace-12471"></a>
<a id="trace-12498"></a>
<a id="trace-12500"></a>
<a id="trace-12512"></a>
<a id="trace-12514"></a>
<a id="trace-12542"></a>
<a id="trace-12544"></a>
<a id="trace-12557"></a>
<a id="trace-12559"></a>
<a id="trace-12578"></a>
<a id="trace-12580"></a>
- 61.25s–64.25s (×14), actor 5, squad 0 (trace 12437): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 61.20s, trace 12429. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1288852022693065, 'next_transition': 12469}.
<a id="trace-12530"></a>
- 63.00s–63.00s (×1), actor 8, squad 1 (trace 12530): received platoon directive; retain held slots. Knowledge: actor memory at 60.00s, trace 11978. Next observer evidence: {'until': 68, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.7698256017559872, 'next_transition': 1831}.
<a id="trace-12590"></a>
- 64.50s–64.50s (×1), actor 3, squad 0 (trace 12590): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 11973. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12907}.
<a id="trace-12593"></a>
- 64.50s–64.50s (×1), actor 3, squad 0 (trace 12593): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 60.00s, trace 11973. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12907}.
<a id="trace-12594"></a>
- 64.50s–64.50s (×1), actor 3, squad 0 (trace 12594): rearward bound: one stationary suppressing element. Knowledge: actor memory at 60.00s, trace 11973. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12907}.
<a id="trace-12907"></a>
<a id="trace-12909"></a>
<a id="trace-12989"></a>
<a id="trace-12991"></a>
<a id="trace-13010"></a>
<a id="trace-13012"></a>
<a id="trace-13034"></a>
<a id="trace-13036"></a>
<a id="trace-13048"></a>
<a id="trace-13050"></a>
<a id="trace-13080"></a>
<a id="trace-13082"></a>
<a id="trace-13091"></a>
<a id="trace-13093"></a>
<a id="trace-13118"></a>
<a id="trace-13120"></a>
<a id="trace-13135"></a>
<a id="trace-13137"></a>
<a id="trace-13155"></a>
<a id="trace-13157"></a>
<a id="trace-13324"></a>
<a id="trace-13326"></a>
<a id="trace-13399"></a>
<a id="trace-13401"></a>
<a id="trace-13416"></a>
<a id="trace-13418"></a>
<a id="trace-13437"></a>
<a id="trace-13439"></a>
<a id="trace-13466"></a>
<a id="trace-13468"></a>
<a id="trace-13494"></a>
<a id="trace-13496"></a>
<a id="trace-13504"></a>
<a id="trace-13506"></a>
<a id="trace-13521"></a>
<a id="trace-13523"></a>
<a id="trace-13533"></a>
<a id="trace-13535"></a>
<a id="trace-13553"></a>
<a id="trace-13555"></a>
<a id="trace-13565"></a>
<a id="trace-13567"></a>
<a id="trace-13639"></a>
<a id="trace-13641"></a>
<a id="trace-13653"></a>
<a id="trace-13655"></a>
<a id="trace-13668"></a>
<a id="trace-13670"></a>
<a id="trace-13680"></a>
<a id="trace-13682"></a>
<a id="trace-13700"></a>
<a id="trace-13702"></a>
<a id="trace-13712"></a>
<a id="trace-13714"></a>
<a id="trace-13733"></a>
<a id="trace-13735"></a>
<a id="trace-13746"></a>
<a id="trace-13748"></a>
<a id="trace-13775"></a>
<a id="trace-13777"></a>
- 64.75s–79.75s (×60), actor 5, squad 0 (trace 12907): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 61.20s, trace 12429. Next observer evidence: {'until': 65.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.04537054202894224, 'next_transition': 12989}.
<a id="trace-1831"></a>
- 68.15s–68.15s (×1), actor 5, squad 1 (events line 1831): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13105"></a>
- 68.15s–68.15s (×1), actor 5, squad 1 (trace 13105): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.442315 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.15s, trace 13105. Next observer evidence: {'until': 69.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1596912803091175, 'next_transition': 13166}.
<a id="trace-13106"></a>
- 68.15s–68.15s (×1), actor 5, squad 1 (trace 13106): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.442315 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.15s, trace 13106. Next observer evidence: {'until': 69.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1596912803091175, 'next_transition': 13166}.
<a id="trace-13166"></a>
- 69.70s–69.70s (×1), actor 8, squad 1 (trace 13166): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 12921. Next observer evidence: {'until': 99.6, 'shots': 11, 'casualties': 0, 'mean_displacement': 1.3207406628241003, 'next_transition': 2059}.
<a id="trace-13167"></a>
- 69.70s–69.70s (×1), actor 8, squad 1 (trace 13167): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 12921. Next observer evidence: {'until': 99.6, 'shots': 11, 'casualties': 0, 'mean_displacement': 1.3207406628241003, 'next_transition': 2059}.
<a id="trace-13785"></a>
- 79.90s–79.90s (×1), actor 4, squad 0 (trace 13785): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 13573. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13851}.
<a id="trace-13851"></a>
<a id="trace-13853"></a>
<a id="trace-13864"></a>
<a id="trace-13866"></a>
<a id="trace-13884"></a>
<a id="trace-13886"></a>
<a id="trace-13896"></a>
<a id="trace-13898"></a>
<a id="trace-13917"></a>
<a id="trace-13919"></a>
<a id="trace-13932"></a>
<a id="trace-13934"></a>
<a id="trace-13951"></a>
<a id="trace-13953"></a>
<a id="trace-13966"></a>
<a id="trace-13968"></a>
<a id="trace-13984"></a>
<a id="trace-13986"></a>
<a id="trace-14001"></a>
<a id="trace-14003"></a>
<a id="trace-14077"></a>
<a id="trace-14079"></a>
<a id="trace-14104"></a>
<a id="trace-14106"></a>
<a id="trace-14117"></a>
<a id="trace-14119"></a>
<a id="trace-14136"></a>
<a id="trace-14138"></a>
<a id="trace-14151"></a>
<a id="trace-14153"></a>
<a id="trace-14166"></a>
<a id="trace-14168"></a>
<a id="trace-14180"></a>
<a id="trace-14182"></a>
<a id="trace-14195"></a>
<a id="trace-14197"></a>
<a id="trace-14207"></a>
<a id="trace-14209"></a>
<a id="trace-14281"></a>
<a id="trace-14283"></a>
<a id="trace-14294"></a>
<a id="trace-14296"></a>
<a id="trace-14308"></a>
<a id="trace-14310"></a>
<a id="trace-14318"></a>
<a id="trace-14320"></a>
<a id="trace-14338"></a>
<a id="trace-14340"></a>
<a id="trace-14350"></a>
<a id="trace-14352"></a>
<a id="trace-14369"></a>
<a id="trace-14371"></a>
<a id="trace-14386"></a>
<a id="trace-14388"></a>
<a id="trace-14407"></a>
<a id="trace-14409"></a>
<a id="trace-14421"></a>
<a id="trace-14423"></a>
<a id="trace-14499"></a>
<a id="trace-14501"></a>
<a id="trace-14514"></a>
<a id="trace-14516"></a>
<a id="trace-14533"></a>
<a id="trace-14535"></a>
<a id="trace-14545"></a>
<a id="trace-14547"></a>
<a id="trace-14566"></a>
<a id="trace-14568"></a>
<a id="trace-14580"></a>
<a id="trace-14582"></a>
<a id="trace-14597"></a>
<a id="trace-14599"></a>
<a id="trace-14607"></a>
<a id="trace-14609"></a>
<a id="trace-14622"></a>
<a id="trace-14624"></a>
<a id="trace-14631"></a>
<a id="trace-14633"></a>
<a id="trace-14705"></a>
<a id="trace-14707"></a>
- 80.25s–100.25s (×80), actor 5, squad 0 (trace 13851): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 13787. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875000000000032, 'next_transition': 13864}.
<a id="trace-14738"></a>
- 101.70s–101.70s (×1), actor 4, squad 0 (trace 14738): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 14639. Next observer evidence: {'until': 103.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2058}.
<a id="trace-2058"></a>
- 103.40s–103.40s (×1), actor 6, squad 0 (events line 2058): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14796}.
<a id="trace-2059"></a>
- 103.40s–103.40s (×1), actor 6, squad 1 (events line 2059): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 133.4, 'shots': 20, 'casualties': 0, 'mean_displacement': 2.4887457623469698, 'next_transition': 2475}.
<a id="trace-14780"></a>
- 103.40s–103.40s (×1), actor 6, squad 0 (trace 14780): renew committed intent (75 s lifetime). Knowledge: actor memory at 103.40s, trace 14780. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14796}.
<a id="trace-14781"></a>
- 103.40s–103.40s (×1), actor 6, squad 1 (trace 14781): renew committed intent (75 s lifetime). Knowledge: actor memory at 103.40s, trace 14781. Next observer evidence: {'until': 133.4, 'shots': 20, 'casualties': 0, 'mean_displacement': 2.4887457623469698, 'next_transition': 2475}.
<a id="trace-14796"></a>
<a id="trace-14798"></a>
<a id="trace-14876"></a>
<a id="trace-14878"></a>
- 104.25s–105.25s (×4), actor 6, squad 0 (trace 14796): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 103.40s, trace 14781. Next observer evidence: {'until': 105.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27050936416323923, 'next_transition': 14876}.
<a id="trace-14897"></a>
- 106.00s–106.00s (×1), actor 4, squad 0 (trace 14897): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 105.00s, trace 14817. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2072}.
<a id="trace-14898"></a>
- 106.00s–106.00s (×1), actor 4, squad 0 (trace 14898): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 105.00s, trace 14817. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2072}.
<a id="trace-2072"></a>
- 106.20s–106.20s (×1), actor 6, squad 0 (events line 2072): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16618"></a>
- 106.20s–106.20s (×1), actor 6, squad 0 (trace 16618): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.359696 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 106.20s, trace 16618. Next observer evidence: None.
<a id="trace-16619"></a>
- 106.20s–106.20s (×1), actor 6, squad 0 (trace 16619): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.359696 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 106.20s, trace 16619. Next observer evidence: None.
<a id="trace-16622"></a>
<a id="trace-16624"></a>
<a id="trace-16662"></a>
<a id="trace-16664"></a>
<a id="trace-16707"></a>
<a id="trace-16709"></a>
- 106.25s–108.25s (×6), actor 6, squad 0 (trace 16622): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 106.20s, trace 16619. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4739100944476273, 'next_transition': 16662}.
<a id="trace-16719"></a>
- 108.30s–108.30s (×1), actor 4, squad 0 (trace 16719): Withdraw to received rally. Knowledge: actor memory at 105.00s, trace 14817. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.865548202479798, 'next_transition': 16951}.
<a id="trace-16720"></a>
- 108.30s–108.30s (×1), actor 4, squad 0 (trace 16720): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 14817. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.865548202479798, 'next_transition': 16951}.
<a id="trace-16951"></a>
<a id="trace-16953"></a>
<a id="trace-17045"></a>
<a id="trace-17047"></a>
<a id="trace-17075"></a>
<a id="trace-17077"></a>
<a id="trace-17103"></a>
<a id="trace-17105"></a>
<a id="trace-17128"></a>
<a id="trace-17130"></a>
<a id="trace-17156"></a>
<a id="trace-17158"></a>
<a id="trace-17241"></a>
<a id="trace-17243"></a>
<a id="trace-17266"></a>
<a id="trace-17268"></a>
<a id="trace-17296"></a>
<a id="trace-17298"></a>
<a id="trace-17320"></a>
<a id="trace-17322"></a>
<a id="trace-17388"></a>
<a id="trace-17390"></a>
<a id="trace-17508"></a>
<a id="trace-17510"></a>
<a id="trace-17551"></a>
<a id="trace-17553"></a>
<a id="trace-17574"></a>
<a id="trace-17576"></a>
<a id="trace-17593"></a>
<a id="trace-17595"></a>
<a id="trace-17613"></a>
<a id="trace-17615"></a>
<a id="trace-17694"></a>
<a id="trace-17696"></a>
<a id="trace-17719"></a>
<a id="trace-17721"></a>
<a id="trace-17740"></a>
<a id="trace-17742"></a>
<a id="trace-17802"></a>
<a id="trace-17804"></a>
<a id="trace-17859"></a>
<a id="trace-17861"></a>
<a id="trace-17967"></a>
<a id="trace-17969"></a>
<a id="trace-17991"></a>
<a id="trace-17993"></a>
<a id="trace-18020"></a>
<a id="trace-18022"></a>
<a id="trace-18050"></a>
<a id="trace-18052"></a>
<a id="trace-18074"></a>
<a id="trace-18076"></a>
- 109.25s–134.30s (×52), actor 6, squad 0 (trace 16951): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 106.20s, trace 16619. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8454945213264462, 'next_transition': 17045}.
<a id="trace-18087"></a>
- 134.55s–134.55s (×1), actor 4, squad 0 (trace 18087): NeedSupport. Knowledge: actor memory at 130.00s, trace 17899. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18163}.
<a id="trace-18163"></a>
<a id="trace-18165"></a>
<a id="trace-18191"></a>
<a id="trace-18193"></a>
<a id="trace-18261"></a>
<a id="trace-18263"></a>
<a id="trace-18334"></a>
<a id="trace-18336"></a>
<a id="trace-18409"></a>
<a id="trace-18411"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18545"></a>
<a id="trace-18547"></a>
<a id="trace-18572"></a>
<a id="trace-18574"></a>
<a id="trace-18596"></a>
<a id="trace-18598"></a>
- 135.30s–143.30s (×18), actor 6, squad 0 (trace 18163): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 135.00s, trace 18103. Next observer evidence: {'until': 136.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00013333333333302258, 'next_transition': 18191}.
<a id="trace-18616"></a>
- 144.00s–144.00s (×1), actor 4, squad 0 (trace 18616): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 18445. Next observer evidence: {'until': 144.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18728}.
<a id="trace-18617"></a>
- 144.00s–144.00s (×1), actor 4, squad 0 (trace 18617): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 18445. Next observer evidence: {'until': 144.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18728}.
<a id="trace-18728"></a>
<a id="trace-18730"></a>
<a id="trace-18816"></a>
<a id="trace-18818"></a>
<a id="trace-18844"></a>
<a id="trace-18846"></a>
<a id="trace-18875"></a>
<a id="trace-18877"></a>
<a id="trace-18903"></a>
<a id="trace-18926"></a>
<a id="trace-19005"></a>
<a id="trace-19032"></a>
<a id="trace-19034"></a>
<a id="trace-19066"></a>
<a id="trace-19068"></a>
<a id="trace-19097"></a>
<a id="trace-19099"></a>
<a id="trace-19124"></a>
<a id="trace-19126"></a>
<a id="trace-19203"></a>
<a id="trace-19205"></a>
<a id="trace-19222"></a>
<a id="trace-19224"></a>
<a id="trace-19243"></a>
<a id="trace-19245"></a>
<a id="trace-19266"></a>
<a id="trace-19268"></a>
- 144.30s–158.30s (×27), actor 6, squad 0 (trace 18728): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 140.00s, trace 18446. Next observer evidence: {'until': 145.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5701814905186294, 'next_transition': 18816}.
<a id="trace-19278"></a>
- 158.40s–158.40s (×1), actor 4, squad 0 (trace 19278): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 19147. Next observer evidence: {'until': 159.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15121521763514573, 'next_transition': 19321}.
<a id="trace-19300"></a>
- 158.40s–158.40s (×1), actor 4, squad 0 (trace 19300): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 19147. Next observer evidence: {'until': 159.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15121521763514573, 'next_transition': 19321}.
<a id="trace-19321"></a>
<a id="trace-19323"></a>
<a id="trace-19409"></a>
<a id="trace-19411"></a>
<a id="trace-19435"></a>
<a id="trace-19437"></a>
<a id="trace-19450"></a>
<a id="trace-19452"></a>
<a id="trace-19462"></a>
<a id="trace-19464"></a>
<a id="trace-19473"></a>
<a id="trace-19475"></a>
<a id="trace-19542"></a>
<a id="trace-19544"></a>
<a id="trace-19561"></a>
<a id="trace-19563"></a>
<a id="trace-19572"></a>
<a id="trace-19574"></a>
- 159.30s–167.30s (×18), actor 6, squad 0 (trace 19321): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 155.00s, trace 19148. Next observer evidence: {'until': 160.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18900933078084306, 'next_transition': 19409}.
<a id="trace-19477"></a>
<a id="trace-19546"></a>
<a id="trace-19548"></a>
<a id="trace-19565"></a>
<a id="trace-19567"></a>
<a id="trace-19576"></a>
<a id="trace-19578"></a>
<a id="trace-19589"></a>
<a id="trace-19591"></a>
- 164.30s–168.30s (×9), actor 38, squad 4 (trace 19477): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 160.00s, trace 19353. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19546}.
<a id="trace-2475"></a>
- 165.40s–165.40s (×1), actor 6, squad 1 (events line 2475): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19550"></a>
- 165.40s–165.40s (×1), actor 6, squad 1 (trace 19550): renew committed intent (75 s lifetime). Knowledge: actor memory at 165.40s, trace 19550. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19899}.
<a id="trace-2478"></a>
- 168.25s–168.25s (×1), actor 6, squad 0 (events line 2478): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19583"></a>
- 168.25s–168.25s (×1), actor 6, squad 0 (trace 19583): renew committed intent (75 s lifetime). Knowledge: actor memory at 168.25s, trace 19583. Next observer evidence: None.
<a id="trace-19585"></a>
<a id="trace-19587"></a>
<a id="trace-19600"></a>
<a id="trace-19602"></a>
<a id="trace-19662"></a>
<a id="trace-19664"></a>
<a id="trace-19671"></a>
<a id="trace-19673"></a>
<a id="trace-19679"></a>
<a id="trace-19692"></a>
<a id="trace-19694"></a>
<a id="trace-19704"></a>
<a id="trace-19706"></a>
<a id="trace-19767"></a>
<a id="trace-19769"></a>
<a id="trace-19778"></a>
<a id="trace-19780"></a>
<a id="trace-19789"></a>
<a id="trace-19791"></a>
<a id="trace-19804"></a>
<a id="trace-19806"></a>
<a id="trace-19817"></a>
<a id="trace-19819"></a>
<a id="trace-19882"></a>
<a id="trace-19891"></a>
<a id="trace-19893"></a>
<a id="trace-19908"></a>
<a id="trace-19910"></a>
<a id="trace-19920"></a>
<a id="trace-19922"></a>
<a id="trace-19934"></a>
<a id="trace-19936"></a>
<a id="trace-20002"></a>
<a id="trace-20004"></a>
<a id="trace-20016"></a>
<a id="trace-20018"></a>
<a id="trace-20083"></a>
<a id="trace-20085"></a>
<a id="trace-20097"></a>
<a id="trace-20099"></a>
<a id="trace-20112"></a>
<a id="trace-20114"></a>
<a id="trace-20178"></a>
<a id="trace-20180"></a>
<a id="trace-20192"></a>
<a id="trace-20194"></a>
<a id="trace-20205"></a>
<a id="trace-20207"></a>
<a id="trace-20222"></a>
<a id="trace-20224"></a>
<a id="trace-20236"></a>
<a id="trace-20238"></a>
<a id="trace-20302"></a>
<a id="trace-20304"></a>
<a id="trace-20316"></a>
<a id="trace-20318"></a>
<a id="trace-20329"></a>
<a id="trace-20331"></a>
<a id="trace-20344"></a>
<a id="trace-20346"></a>
<a id="trace-20359"></a>
<a id="trace-20361"></a>
<a id="trace-20427"></a>
<a id="trace-20429"></a>
<a id="trace-20444"></a>
<a id="trace-20446"></a>
<a id="trace-20465"></a>
<a id="trace-20467"></a>
<a id="trace-20479"></a>
<a id="trace-20481"></a>
<a id="trace-20490"></a>
<a id="trace-20492"></a>
<a id="trace-20554"></a>
<a id="trace-20556"></a>
<a id="trace-20566"></a>
<a id="trace-20568"></a>
<a id="trace-20580"></a>
<a id="trace-20582"></a>
<a id="trace-20593"></a>
<a id="trace-20595"></a>
<a id="trace-20604"></a>
<a id="trace-20606"></a>
<a id="trace-20669"></a>
<a id="trace-20679"></a>
<a id="trace-20689"></a>
<a id="trace-20691"></a>
<a id="trace-20701"></a>
<a id="trace-20703"></a>
<a id="trace-20714"></a>
<a id="trace-20716"></a>
<a id="trace-20780"></a>
<a id="trace-20782"></a>
<a id="trace-20791"></a>
<a id="trace-20793"></a>
<a id="trace-20803"></a>
<a id="trace-20805"></a>
<a id="trace-20814"></a>
<a id="trace-20816"></a>
<a id="trace-20825"></a>
<a id="trace-20827"></a>
<a id="trace-20890"></a>
<a id="trace-20892"></a>
<a id="trace-20902"></a>
<a id="trace-20904"></a>
<a id="trace-20917"></a>
<a id="trace-20919"></a>
<a id="trace-20928"></a>
<a id="trace-20930"></a>
<a id="trace-20939"></a>
<a id="trace-20941"></a>
<a id="trace-21003"></a>
<a id="trace-21005"></a>
<a id="trace-21014"></a>
<a id="trace-21016"></a>
<a id="trace-21028"></a>
<a id="trace-21038"></a>
<a id="trace-21040"></a>
<a id="trace-21051"></a>
<a id="trace-21053"></a>
- 168.30s–229.30s (×119), actor 6, squad 0 (trace 19585): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 168.25s, trace 19583. Next observer evidence: {'until': 169.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.45359333333333335, 'next_transition': 19600}.
<a id="trace-19682"></a>
<a id="trace-19684"></a>
<a id="trace-19697"></a>
<a id="trace-19709"></a>
<a id="trace-19771"></a>
<a id="trace-19773"></a>
<a id="trace-19782"></a>
<a id="trace-19784"></a>
<a id="trace-19793"></a>
<a id="trace-19795"></a>
<a id="trace-19808"></a>
<a id="trace-19821"></a>
<a id="trace-19823"></a>
<a id="trace-19884"></a>
<a id="trace-19886"></a>
<a id="trace-19895"></a>
<a id="trace-19897"></a>
<a id="trace-19912"></a>
<a id="trace-19914"></a>
<a id="trace-19925"></a>
<a id="trace-19938"></a>
<a id="trace-19940"></a>
<a id="trace-20006"></a>
<a id="trace-20008"></a>
<a id="trace-20020"></a>
<a id="trace-20022"></a>
<a id="trace-20087"></a>
<a id="trace-20089"></a>
<a id="trace-20101"></a>
<a id="trace-20103"></a>
<a id="trace-20116"></a>
<a id="trace-20118"></a>
<a id="trace-20182"></a>
<a id="trace-20184"></a>
<a id="trace-20196"></a>
<a id="trace-20198"></a>
<a id="trace-20209"></a>
<a id="trace-20211"></a>
<a id="trace-20226"></a>
<a id="trace-20228"></a>
<a id="trace-20240"></a>
<a id="trace-20242"></a>
<a id="trace-20306"></a>
<a id="trace-20308"></a>
<a id="trace-20320"></a>
<a id="trace-20322"></a>
<a id="trace-20333"></a>
<a id="trace-20335"></a>
<a id="trace-20348"></a>
<a id="trace-20350"></a>
<a id="trace-20363"></a>
<a id="trace-20365"></a>
<a id="trace-20431"></a>
<a id="trace-20433"></a>
<a id="trace-20448"></a>
<a id="trace-20450"></a>
<a id="trace-20469"></a>
<a id="trace-20471"></a>
<a id="trace-20483"></a>
<a id="trace-20485"></a>
<a id="trace-20494"></a>
<a id="trace-20496"></a>
<a id="trace-20558"></a>
<a id="trace-20560"></a>
<a id="trace-20570"></a>
<a id="trace-20572"></a>
<a id="trace-20584"></a>
<a id="trace-20586"></a>
<a id="trace-20597"></a>
<a id="trace-20599"></a>
<a id="trace-20608"></a>
<a id="trace-20610"></a>
<a id="trace-20671"></a>
<a id="trace-20673"></a>
<a id="trace-20681"></a>
<a id="trace-20683"></a>
<a id="trace-20693"></a>
<a id="trace-20695"></a>
<a id="trace-20705"></a>
<a id="trace-20707"></a>
<a id="trace-20718"></a>
<a id="trace-20720"></a>
<a id="trace-20784"></a>
<a id="trace-20786"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20807"></a>
<a id="trace-20809"></a>
<a id="trace-20818"></a>
<a id="trace-20820"></a>
<a id="trace-20829"></a>
<a id="trace-20831"></a>
<a id="trace-20894"></a>
<a id="trace-20896"></a>
<a id="trace-20906"></a>
<a id="trace-20908"></a>
<a id="trace-20921"></a>
<a id="trace-20923"></a>
<a id="trace-20932"></a>
<a id="trace-20934"></a>
<a id="trace-20943"></a>
<a id="trace-20945"></a>
<a id="trace-21007"></a>
<a id="trace-21009"></a>
<a id="trace-21018"></a>
<a id="trace-21020"></a>
<a id="trace-21030"></a>
<a id="trace-21032"></a>
<a id="trace-21042"></a>
<a id="trace-21044"></a>
<a id="trace-21055"></a>
<a id="trace-21057"></a>
<a id="trace-21122"></a>
<a id="trace-21124"></a>
<a id="trace-21133"></a>
<a id="trace-21135"></a>
<a id="trace-21145"></a>
<a id="trace-21147"></a>
<a id="trace-21156"></a>
<a id="trace-21158"></a>
<a id="trace-21167"></a>
<a id="trace-21169"></a>
<a id="trace-21233"></a>
<a id="trace-21235"></a>
<a id="trace-21246"></a>
<a id="trace-21259"></a>
<a id="trace-21268"></a>
<a id="trace-21270"></a>
<a id="trace-21279"></a>
<a id="trace-21281"></a>
<a id="trace-21343"></a>
<a id="trace-21345"></a>
<a id="trace-21354"></a>
<a id="trace-21356"></a>
<a id="trace-21367"></a>
<a id="trace-21369"></a>
<a id="trace-21380"></a>
<a id="trace-21382"></a>
<a id="trace-21393"></a>
<a id="trace-21395"></a>
<a id="trace-21458"></a>
<a id="trace-21468"></a>
<a id="trace-21470"></a>
<a id="trace-21480"></a>
<a id="trace-21482"></a>
<a id="trace-21491"></a>
<a id="trace-21493"></a>
<a id="trace-21503"></a>
<a id="trace-21505"></a>
<a id="trace-21569"></a>
<a id="trace-21571"></a>
<a id="trace-21582"></a>
<a id="trace-21584"></a>
<a id="trace-21594"></a>
<a id="trace-21596"></a>
<a id="trace-21605"></a>
<a id="trace-21607"></a>
<a id="trace-21617"></a>
<a id="trace-21679"></a>
<a id="trace-21681"></a>
<a id="trace-21691"></a>
<a id="trace-21693"></a>
<a id="trace-21704"></a>
<a id="trace-21706"></a>
<a id="trace-21718"></a>
<a id="trace-21720"></a>
<a id="trace-21729"></a>
<a id="trace-21731"></a>
<a id="trace-21793"></a>
<a id="trace-21795"></a>
<a id="trace-21804"></a>
<a id="trace-21806"></a>
<a id="trace-21816"></a>
<a id="trace-21827"></a>
<a id="trace-21829"></a>
<a id="trace-21839"></a>
<a id="trace-21841"></a>
<a id="trace-21905"></a>
<a id="trace-21907"></a>
<a id="trace-21917"></a>
<a id="trace-21919"></a>
<a id="trace-21928"></a>
<a id="trace-21930"></a>
<a id="trace-21939"></a>
<a id="trace-21941"></a>
<a id="trace-21950"></a>
<a id="trace-21952"></a>
<a id="trace-22014"></a>
<a id="trace-22016"></a>
<a id="trace-22027"></a>
<a id="trace-22029"></a>
<a id="trace-22041"></a>
<a id="trace-22043"></a>
<a id="trace-22053"></a>
<a id="trace-22055"></a>
<a id="trace-22063"></a>
<a id="trace-22065"></a>
<a id="trace-22127"></a>
<a id="trace-22129"></a>
<a id="trace-22138"></a>
<a id="trace-22140"></a>
<a id="trace-22150"></a>
<a id="trace-22152"></a>
<a id="trace-22162"></a>
<a id="trace-22164"></a>
<a id="trace-22175"></a>
<a id="trace-22240"></a>
<a id="trace-22242"></a>
<a id="trace-22251"></a>
<a id="trace-22253"></a>
<a id="trace-22263"></a>
<a id="trace-22265"></a>
<a id="trace-22274"></a>
<a id="trace-22276"></a>
<a id="trace-22286"></a>
<a id="trace-22349"></a>
<a id="trace-22351"></a>
<a id="trace-22361"></a>
<a id="trace-22363"></a>
<a id="trace-22375"></a>
<a id="trace-22377"></a>
<a id="trace-22386"></a>
<a id="trace-22388"></a>
<a id="trace-22397"></a>
<a id="trace-22399"></a>
<a id="trace-22461"></a>
<a id="trace-22463"></a>
<a id="trace-22474"></a>
<a id="trace-22476"></a>
<a id="trace-22487"></a>
<a id="trace-22489"></a>
<a id="trace-22499"></a>
<a id="trace-22501"></a>
<a id="trace-22512"></a>
<a id="trace-22514"></a>
<a id="trace-22576"></a>
<a id="trace-22586"></a>
<a id="trace-22588"></a>
<a id="trace-22598"></a>
<a id="trace-22600"></a>
<a id="trace-22609"></a>
<a id="trace-22611"></a>
<a id="trace-22622"></a>
<a id="trace-22685"></a>
<a id="trace-22687"></a>
<a id="trace-22698"></a>
<a id="trace-22710"></a>
<a id="trace-22712"></a>
<a id="trace-22721"></a>
<a id="trace-22723"></a>
<a id="trace-22732"></a>
<a id="trace-22734"></a>
<a id="trace-22796"></a>
<a id="trace-22798"></a>
<a id="trace-22807"></a>
<a id="trace-22809"></a>
<a id="trace-22821"></a>
<a id="trace-22823"></a>
<a id="trace-22836"></a>
<a id="trace-22838"></a>
<a id="trace-22848"></a>
<a id="trace-22850"></a>
<a id="trace-22912"></a>
<a id="trace-22914"></a>
<a id="trace-22923"></a>
<a id="trace-22925"></a>
<a id="trace-22935"></a>
<a id="trace-22937"></a>
<a id="trace-22946"></a>
<a id="trace-22948"></a>
<a id="trace-22958"></a>
<a id="trace-22960"></a>
<a id="trace-23024"></a>
<a id="trace-23026"></a>
<a id="trace-23036"></a>
<a id="trace-23038"></a>
<a id="trace-23048"></a>
<a id="trace-23050"></a>
<a id="trace-23059"></a>
<a id="trace-23061"></a>
<a id="trace-23070"></a>
<a id="trace-23072"></a>
<a id="trace-23134"></a>
<a id="trace-23136"></a>
<a id="trace-23146"></a>
<a id="trace-23148"></a>
<a id="trace-23160"></a>
<a id="trace-23162"></a>
<a id="trace-23173"></a>
<a id="trace-23175"></a>
<a id="trace-23184"></a>
<a id="trace-23186"></a>
<a id="trace-23248"></a>
<a id="trace-23250"></a>
<a id="trace-23260"></a>
<a id="trace-23270"></a>
<a id="trace-23272"></a>
<a id="trace-23282"></a>
<a id="trace-23284"></a>
<a id="trace-23294"></a>
<a id="trace-23296"></a>
<a id="trace-23361"></a>
<a id="trace-23363"></a>
<a id="trace-23372"></a>
<a id="trace-23374"></a>
<a id="trace-23384"></a>
<a id="trace-23386"></a>
<a id="trace-23395"></a>
<a id="trace-23397"></a>
<a id="trace-23406"></a>
<a id="trace-23408"></a>
<a id="trace-23471"></a>
<a id="trace-23473"></a>
<a id="trace-23483"></a>
<a id="trace-23485"></a>
<a id="trace-23497"></a>
<a id="trace-23499"></a>
<a id="trace-23509"></a>
<a id="trace-23511"></a>
<a id="trace-23520"></a>
<a id="trace-23583"></a>
<a id="trace-23585"></a>
<a id="trace-23594"></a>
<a id="trace-23596"></a>
<a id="trace-23606"></a>
<a id="trace-23608"></a>
<a id="trace-23619"></a>
<a id="trace-23621"></a>
<a id="trace-23632"></a>
<a id="trace-23634"></a>
<a id="trace-23697"></a>
<a id="trace-23699"></a>
<a id="trace-23708"></a>
<a id="trace-23710"></a>
<a id="trace-23720"></a>
<a id="trace-23722"></a>
<a id="trace-23731"></a>
<a id="trace-23733"></a>
<a id="trace-23742"></a>
<a id="trace-23744"></a>
<a id="trace-23807"></a>
<a id="trace-23809"></a>
<a id="trace-23820"></a>
<a id="trace-23822"></a>
<a id="trace-23834"></a>
<a id="trace-23836"></a>
<a id="trace-23847"></a>
<a id="trace-23849"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23922"></a>
<a id="trace-23924"></a>
<a id="trace-23933"></a>
<a id="trace-23935"></a>
<a id="trace-23946"></a>
<a id="trace-23948"></a>
<a id="trace-23959"></a>
<a id="trace-23961"></a>
<a id="trace-23972"></a>
<a id="trace-23974"></a>
- 172.30s–359.30s (×360), actor 32, squad 4 (trace 19682): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=32. Knowledge: actor memory at 170.00s, trace 19613. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19697}.
<a id="trace-19899"></a>
- 181.80s–181.80s (×1), actor 9, squad 1 (trace 19899): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 180.00s, trace 19831. Next observer evidence: {'until': 185, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2503}.
<a id="trace-2503"></a>
- 185.10s–185.10s (×1), actor 6, squad 1 (events line 2503): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19952"></a>
- 185.10s–185.10s (×1), actor 6, squad 1 (trace 19952): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.334453 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.10s, trace 19952. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20024}.
<a id="trace-19953"></a>
- 185.10s–185.10s (×1), actor 6, squad 1 (trace 19953): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.334453 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 185.10s, trace 19953. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20024}.
<a id="trace-20024"></a>
- 186.85s–186.85s (×1), actor 9, squad 1 (trace 20024): Withdraw to received rally. Knowledge: actor memory at 185.00s, trace 19949. Next observer evidence: {'until': 201.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 20454}.
<a id="trace-20025"></a>
- 186.85s–186.85s (×1), actor 9, squad 1 (trace 20025): rearward bound: one stationary suppressing element. Knowledge: actor memory at 185.00s, trace 19949. Next observer evidence: {'until': 201.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 20454}.
<a id="trace-20454"></a>
- 201.60s–201.60s (×1), actor 9, squad 1 (trace 20454): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 200.00s, trace 20376. Next observer evidence: {'until': 231.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2562}.
<a id="trace-20455"></a>
- 201.60s–201.60s (×1), actor 9, squad 1 (trace 20455): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 200.00s, trace 20376. Next observer evidence: {'until': 231.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2562}.
<a id="trace-2549"></a>
- 230.10s–230.10s (×1), actor 6, squad 0 (events line 2549): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21069"></a>
- 230.10s–230.10s (×1), actor 6, squad 0 (trace 21069): renew committed intent (75 s lifetime). Knowledge: actor memory at 230.10s, trace 21069. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21118}.
<a id="trace-21118"></a>
<a id="trace-21120"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21141"></a>
<a id="trace-21143"></a>
<a id="trace-21152"></a>
<a id="trace-21154"></a>
<a id="trace-21163"></a>
<a id="trace-21165"></a>
<a id="trace-21229"></a>
<a id="trace-21231"></a>
<a id="trace-21242"></a>
<a id="trace-21244"></a>
<a id="trace-21254"></a>
<a id="trace-21256"></a>
<a id="trace-21264"></a>
<a id="trace-21266"></a>
<a id="trace-21275"></a>
<a id="trace-21277"></a>
<a id="trace-21339"></a>
<a id="trace-21341"></a>
<a id="trace-21350"></a>
<a id="trace-21352"></a>
<a id="trace-21363"></a>
<a id="trace-21365"></a>
<a id="trace-21376"></a>
<a id="trace-21378"></a>
<a id="trace-21389"></a>
<a id="trace-21391"></a>
<a id="trace-21453"></a>
<a id="trace-21455"></a>
<a id="trace-21465"></a>
<a id="trace-21476"></a>
<a id="trace-21478"></a>
<a id="trace-21487"></a>
<a id="trace-21489"></a>
<a id="trace-21499"></a>
<a id="trace-21501"></a>
<a id="trace-21565"></a>
<a id="trace-21567"></a>
<a id="trace-21578"></a>
<a id="trace-21580"></a>
<a id="trace-21590"></a>
<a id="trace-21592"></a>
<a id="trace-21601"></a>
<a id="trace-21603"></a>
<a id="trace-21612"></a>
<a id="trace-21614"></a>
<a id="trace-21675"></a>
<a id="trace-21677"></a>
<a id="trace-21687"></a>
<a id="trace-21689"></a>
<a id="trace-21700"></a>
<a id="trace-21702"></a>
<a id="trace-21714"></a>
<a id="trace-21716"></a>
<a id="trace-21725"></a>
<a id="trace-21727"></a>
<a id="trace-21789"></a>
<a id="trace-21791"></a>
<a id="trace-21800"></a>
<a id="trace-21802"></a>
<a id="trace-21812"></a>
<a id="trace-21814"></a>
<a id="trace-21823"></a>
<a id="trace-21825"></a>
<a id="trace-21835"></a>
<a id="trace-21837"></a>
<a id="trace-21901"></a>
<a id="trace-21903"></a>
<a id="trace-21913"></a>
<a id="trace-21915"></a>
<a id="trace-21925"></a>
<a id="trace-21935"></a>
<a id="trace-21937"></a>
<a id="trace-21946"></a>
<a id="trace-21948"></a>
<a id="trace-22010"></a>
<a id="trace-22012"></a>
<a id="trace-22023"></a>
<a id="trace-22025"></a>
<a id="trace-22037"></a>
<a id="trace-22039"></a>
<a id="trace-22049"></a>
<a id="trace-22051"></a>
<a id="trace-22060"></a>
<a id="trace-22123"></a>
<a id="trace-22125"></a>
<a id="trace-22134"></a>
<a id="trace-22136"></a>
<a id="trace-22146"></a>
<a id="trace-22148"></a>
<a id="trace-22158"></a>
<a id="trace-22160"></a>
<a id="trace-22171"></a>
<a id="trace-22173"></a>
<a id="trace-22236"></a>
<a id="trace-22238"></a>
<a id="trace-22247"></a>
<a id="trace-22249"></a>
<a id="trace-22259"></a>
<a id="trace-22261"></a>
<a id="trace-22270"></a>
<a id="trace-22272"></a>
<a id="trace-22281"></a>
<a id="trace-22283"></a>
<a id="trace-22345"></a>
<a id="trace-22347"></a>
<a id="trace-22359"></a>
<a id="trace-22371"></a>
<a id="trace-22373"></a>
<a id="trace-22382"></a>
<a id="trace-22384"></a>
<a id="trace-22393"></a>
<a id="trace-22395"></a>
<a id="trace-22457"></a>
<a id="trace-22459"></a>
- 230.30s–290.30s (×118), actor 6, squad 0 (trace 21118): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 230.10s, trace 21069. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21129}.
<a id="trace-2562"></a>
- 245.90s–245.90s (×1), actor 6, squad 1 (events line 2562): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21461"></a>
- 245.90s–245.90s (×1), actor 6, squad 1 (trace 21461): renew committed intent (75 s lifetime). Knowledge: actor memory at 245.90s, trace 21461. Next observer evidence: {'until': 275.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2609}.
<a id="trace-2595"></a>
- 290.75s–290.75s (×1), actor 6, squad 0 (events line 2595): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22470}.
<a id="trace-22466"></a>
- 290.75s–290.75s (×1), actor 6, squad 0 (trace 22466): renew committed intent (75 s lifetime). Knowledge: actor memory at 290.75s, trace 22466. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22470}.
<a id="trace-22470"></a>
<a id="trace-22472"></a>
<a id="trace-22483"></a>
<a id="trace-22485"></a>
<a id="trace-22495"></a>
<a id="trace-22497"></a>
<a id="trace-22510"></a>
<a id="trace-22572"></a>
<a id="trace-22574"></a>
<a id="trace-22582"></a>
<a id="trace-22584"></a>
<a id="trace-22594"></a>
<a id="trace-22596"></a>
<a id="trace-22605"></a>
<a id="trace-22607"></a>
<a id="trace-22617"></a>
<a id="trace-22619"></a>
<a id="trace-22681"></a>
<a id="trace-22683"></a>
<a id="trace-22694"></a>
<a id="trace-22696"></a>
<a id="trace-22706"></a>
<a id="trace-22708"></a>
<a id="trace-22717"></a>
<a id="trace-22719"></a>
<a id="trace-22728"></a>
<a id="trace-22730"></a>
<a id="trace-22792"></a>
<a id="trace-22794"></a>
<a id="trace-22803"></a>
<a id="trace-22805"></a>
<a id="trace-22817"></a>
<a id="trace-22819"></a>
<a id="trace-22832"></a>
<a id="trace-22834"></a>
<a id="trace-22844"></a>
<a id="trace-22846"></a>
<a id="trace-22908"></a>
<a id="trace-22910"></a>
<a id="trace-22919"></a>
<a id="trace-22921"></a>
<a id="trace-22931"></a>
<a id="trace-22933"></a>
<a id="trace-22942"></a>
<a id="trace-22944"></a>
<a id="trace-22954"></a>
<a id="trace-22956"></a>
<a id="trace-23020"></a>
<a id="trace-23022"></a>
<a id="trace-23033"></a>
<a id="trace-23044"></a>
<a id="trace-23046"></a>
<a id="trace-23055"></a>
<a id="trace-23057"></a>
<a id="trace-23066"></a>
<a id="trace-23068"></a>
<a id="trace-23130"></a>
<a id="trace-23132"></a>
<a id="trace-23142"></a>
<a id="trace-23144"></a>
<a id="trace-23156"></a>
<a id="trace-23158"></a>
<a id="trace-23169"></a>
<a id="trace-23171"></a>
<a id="trace-23180"></a>
<a id="trace-23182"></a>
<a id="trace-23244"></a>
<a id="trace-23246"></a>
<a id="trace-23255"></a>
<a id="trace-23257"></a>
<a id="trace-23266"></a>
<a id="trace-23268"></a>
<a id="trace-23278"></a>
<a id="trace-23280"></a>
<a id="trace-23290"></a>
<a id="trace-23292"></a>
<a id="trace-23357"></a>
<a id="trace-23359"></a>
<a id="trace-23368"></a>
<a id="trace-23370"></a>
<a id="trace-23380"></a>
<a id="trace-23382"></a>
<a id="trace-23391"></a>
<a id="trace-23393"></a>
<a id="trace-23402"></a>
<a id="trace-23404"></a>
<a id="trace-23467"></a>
<a id="trace-23469"></a>
<a id="trace-23479"></a>
<a id="trace-23481"></a>
<a id="trace-23493"></a>
<a id="trace-23495"></a>
<a id="trace-23505"></a>
<a id="trace-23507"></a>
<a id="trace-23516"></a>
<a id="trace-23518"></a>
<a id="trace-23579"></a>
<a id="trace-23581"></a>
<a id="trace-23590"></a>
<a id="trace-23592"></a>
<a id="trace-23602"></a>
<a id="trace-23604"></a>
<a id="trace-23615"></a>
<a id="trace-23617"></a>
<a id="trace-23628"></a>
<a id="trace-23630"></a>
<a id="trace-23693"></a>
<a id="trace-23695"></a>
<a id="trace-23704"></a>
<a id="trace-23706"></a>
<a id="trace-23716"></a>
<a id="trace-23718"></a>
<a id="trace-23727"></a>
<a id="trace-23729"></a>
<a id="trace-23738"></a>
<a id="trace-23740"></a>
<a id="trace-23803"></a>
<a id="trace-23805"></a>
<a id="trace-23816"></a>
<a id="trace-23818"></a>
<a id="trace-23830"></a>
<a id="trace-23832"></a>
- 291.30s–352.30s (×122), actor 6, squad 0 (trace 22470): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 290.75s, trace 22466. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22483}.
<a id="trace-2609"></a>
- 307.55s–307.55s (×1), actor 6, squad 1 (events line 2609): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22824"></a>
- 307.55s–307.55s (×1), actor 6, squad 1 (trace 22824): renew committed intent (75 s lifetime). Knowledge: actor memory at 307.55s, trace 22824. Next observer evidence: {'until': 337.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-2646"></a>
- 352.35s–352.35s (×1), actor 6, squad 0 (events line 2646): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23837"></a>
- 352.35s–352.35s (×1), actor 6, squad 0 (trace 23837): renew committed intent (75 s lifetime). Knowledge: actor memory at 352.35s, trace 23837. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23843}.
<a id="trace-23843"></a>
<a id="trace-23845"></a>
<a id="trace-23854"></a>
<a id="trace-23856"></a>
<a id="trace-23918"></a>
<a id="trace-23920"></a>
<a id="trace-23929"></a>
<a id="trace-23931"></a>
<a id="trace-23942"></a>
<a id="trace-23944"></a>
<a id="trace-23955"></a>
<a id="trace-23957"></a>
<a id="trace-23968"></a>
<a id="trace-23970"></a>
- 353.30s–359.30s (×14), actor 6, squad 0 (trace 23843): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 352.35s, trace 23837. Next observer evidence: {'until': 354.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23854}.

## Net delivery

159 matched order/radio deliveries; 245 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.373s; maximum 2.800s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3171: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3173: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3174: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3175: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3176: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3181: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3182: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4205: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4206: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4207: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4208: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4303: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4304: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4306: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4308: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4309: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4310: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4311: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4312: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4313: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4314: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4315: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4316: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4317: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7525: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7527: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7529: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7530: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7532: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7533: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7534: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7535: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7536: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7537: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7538: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7539: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7540: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7541: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7542: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7543: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 7945: estimate 12.22; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 7946: estimate 12.22; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 8114: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 8115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 8116: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 8117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 8118: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 8119: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 8120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 8121: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 8122: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 8123: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 8124: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 8125: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 8126: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 8127: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 8128: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 8129: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 8130: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 8131: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 8132: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 8882: estimate 12.77; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 8883: estimate 12.77; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 8985: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 8986: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 8987: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 8988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 8989: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 8990: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 8991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 8992: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 8993: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 8994: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 8995: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 8996: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 8997: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 8998: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 8999: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 9000: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 9001: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 9002: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 9003: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.35s leader 5, trace 9226: estimate 13.30; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.35s leader 5, trace 9227: estimate 13.30; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 11086: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 11087: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 11088: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 11089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 11090: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 11091: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 11092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 11093: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 11094: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 11095: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 11096: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 11097: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 11098: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 11099: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 11100: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 11101: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 11102: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 11103: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 11104: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 11190: estimate 13.28; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 11191: estimate 13.28; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 11403: estimate 12.81; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 11404: estimate 12.81; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11419: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11420: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11421: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11423: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11424: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 11426: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11427: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11428: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11429: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11430: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11431: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11432: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11433: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11434: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11435: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11436: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11437: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.60s leader 5, trace 11693: estimate 12.84; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.60s leader 5, trace 11694: estimate 12.84; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 11708: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 11709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 11710: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 11711: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 11712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 11713: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 11714: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 11715: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 11716: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 11717: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 11718: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 11719: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 11720: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 11721: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 11722: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 11723: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 11724: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 11973: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11975: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11976: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 11978: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 11979: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11980: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11981: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11982: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11983: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11984: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11985: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11986: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11987: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 11988: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 11989: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 12409: estimate 11.27; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 12410: estimate 11.27; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 61.20s leader 5, trace 12429: estimate 11.29; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 12916: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 12917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 12918: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 12919: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 12920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 12921: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 12922: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 12923: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 12924: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 12925: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 12926: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 12927: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 12928: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 12929: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 12930: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 12931: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 12932: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.15s leader 5, trace 13105: estimate 11.30; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.15s leader 5, trace 13106: estimate 11.30; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 13334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 13335: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 13336: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 13337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 13338: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 13339: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 13340: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 13341: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 13342: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 13343: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 13344: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 13345: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 13346: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 13347: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 13348: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 13349: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13573: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13574: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13575: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 13576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 13577: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 13578: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13579: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13580: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13581: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13582: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13583: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13584: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13585: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 13586: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 13587: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13786: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13787: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13788: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 13790: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 13791: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13792: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13793: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13794: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13795: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13796: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13797: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13798: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13799: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13800: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 14011: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 14012: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 14013: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 14014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 14015: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 14016: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 14017: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 14018: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 14019: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14020: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14021: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14022: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14023: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 14024: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 14025: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14215: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14216: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14217: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 14219: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14220: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14221: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14222: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14223: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14224: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14225: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14226: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14227: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14228: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14432: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14433: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14434: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 14436: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14437: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14438: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14439: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14440: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14441: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14442: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14443: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14444: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14445: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14639: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14640: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14641: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 14642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 14643: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 14644: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14645: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14646: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14647: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14648: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14649: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14650: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14651: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14652: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 103.40s leader 6, trace 14780: estimate 11.19; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 103.40s leader 6, trace 14781: estimate 11.19; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 14817: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 14818: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 14819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 14820: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 14821: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 14822: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 14823: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 14824: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 14825: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 14826: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 14827: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 14828: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 14829: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 106.20s leader 6, trace 16618: estimate 11.12; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 106.20s leader 6, trace 16619: estimate 11.12; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 16984: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 16985: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 16986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 16987: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 16988: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16989: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16990: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16991: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16992: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16993: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16994: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16995: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16996: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 17180: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 17181: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 17182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 17183: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 17184: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 17185: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 17186: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 17187: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 17188: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 17189: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 17190: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 17191: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 17192: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 17443: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 17444: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 17445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 17446: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 17447: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 17448: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 17449: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 17450: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 17451: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 17452: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 17453: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 17454: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 17634: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 17635: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 17636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 17637: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 17638: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17639: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17640: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17641: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17642: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17643: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17644: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17645: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 17899: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 17900: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 17901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 17902: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 17903: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 17904: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 17905: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 17906: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 17907: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 17908: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 17909: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 17910: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18102: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18103: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 18104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 18105: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 18106: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18107: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18108: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18109: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18110: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18111: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18112: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18113: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 18445: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 18446: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 18447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 18448: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 18449: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 18450: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 18451: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 18452: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 18453: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 18454: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 18455: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 18754: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 18755: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 18756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 18757: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 18758: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 18759: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 18760: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 18761: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 18762: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 18945: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 18946: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 18947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 18948: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 18949: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 18950: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 18951: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 18952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 19147: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 19148: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 19149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 19150: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 19151: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 19152: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 19153: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 19154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 19347: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 19348: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 19349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 19350: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 19351: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 19352: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 19353: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 19354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 19488: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 19489: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 19490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 19491: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 19492: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 19493: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 19494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.40s leader 6, trace 19550: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 168.25s leader 6, trace 19583: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 19609: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 19610: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 19611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 19612: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 19613: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 19614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 19714: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 19715: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 19716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 19717: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 19718: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 19719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 19828: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 19829: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 19830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 19831: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 19832: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 19833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 19946: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 19947: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 19948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 19949: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 19950: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 19951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.10s leader 6, trace 19952: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.10s leader 6, trace 19953: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 20125: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 20126: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 20127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 20128: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 20129: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 20130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 20249: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 20250: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 20251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 20252: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 20253: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 20254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 20373: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 20374: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 20375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 20376: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 20377: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 20378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 20501: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 20502: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 20503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 20504: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 20505: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 20506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 20615: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 20616: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 20617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 20618: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 20619: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 20620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 20727: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 20728: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 20729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 20730: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 20731: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 20732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 20837: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 20838: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 20839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 20840: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 20841: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 20950: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 20951: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 20952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 20953: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20954: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 21063: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 21064: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 21065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 21066: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 21067: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 21068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.10s leader 6, trace 21069: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 21175: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 21176: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 21177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 21178: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 21179: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 21180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 21286: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 21287: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 21288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 21289: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 21290: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 21291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 21400: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 21401: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 21402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 21403: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 21404: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.90s leader 6, trace 21461: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 21511: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 21512: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 21513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 21514: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21515: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 21622: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 21623: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 21624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 21625: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 21626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 21736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 21737: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 21738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 21739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 21740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 21848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 21849: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 21850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 21851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 21852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 21853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 21957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 21958: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 21959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 21960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 21961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 21962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 22070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 22071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 22072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 22073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 22074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 22183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 22184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 22185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 22186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 22187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 22292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 22293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 22294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 22295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 22296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 22404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 22405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 22406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 22407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 22408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.75s leader 6, trace 22466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 22519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 22520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 22521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 22522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 22523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 22524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 22627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 22628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 22629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 22630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 22632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 22739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 22740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 22741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 22742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 22744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 307.55s leader 6, trace 22824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 22855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 22856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 22857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 22858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 22859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 22860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 22966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 22967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 22968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 22969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 22970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 22971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 23077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 23078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 23079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 23080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 23081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 23082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 23191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 23192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 23193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 23194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 23195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 23196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 23303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 23304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 23305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 23306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 23307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 23308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 23413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 23414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 23415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 23416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 23418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 23526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 23527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 23528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 23529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 23530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 23531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 23640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 23641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 23642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 23643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 23644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 23645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 23750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 23751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 23752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 23753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 23754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 23755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 352.35s leader 6, trace 23837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 23865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 23866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 23867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 23868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 23869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 23870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 23979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 23980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 23981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 23982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 23983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 23984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Rook incapacitated
- 1: Soren incapacitated
- 1: Ash incapacitated
- 1: Pike incapacitated
- 1: Flint incapacitated
- 1: Iven incapacitated
- 1: Quill killed in action
- 1: Kest killed in action
- 1: Orin incapacitated
- 1: Bram incapacitated
- 1: Bren killed in action
- 1: Lark killed in action
- 1: Holt incapacitated

## Outcome attribution

- 106.20s, evidence 2072: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 106.20s, evidence 16618: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.359696 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 106.20s, evidence 16619: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.359696 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 168.25s, evidence 2478: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 185.10s, evidence 2503: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 185.10s, evidence 19952: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.334453 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20024}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 185.10s, evidence 19953: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.334453 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20024}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 230.10s, evidence 2549: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 245.90s, evidence 2562: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 290.75s, evidence 2595: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22470}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 307.55s, evidence 2609: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 352.35s, evidence 2646: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
