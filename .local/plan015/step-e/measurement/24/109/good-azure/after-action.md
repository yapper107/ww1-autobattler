# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/24/109/good-azure/battle-109-1789674208819051054`

## Battle summary

**Ember** · 360 s · 335 shots.

### Turning points

- 14.9s, squad 1: contact (events line 175). First recorded contact.
- 37.9s, squad 1: help call ([trace 7239](#trace-7239)). No completion observed before termination.
- 39.5s, squad 0: help answer ([trace 10239](#trace-10239)). 49.7s, squad 0: took cover and returned fire.
- 48.0s, squad 0: help call ([trace 12983](#trace-12983)). 49.4s, squad 1: answered a neighbour with support by fire.
- 49.4s, squad 1: help answer ([trace 13054](#trace-13054)). 54.9s, squad 1: took cover and returned fire.
- 58.2s, squad 1: withdrawal ([trace 15087](#trace-15087)). 166.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 60.2s, squad 0: assault ([trace 15718](#trace-15718)). 69.6s, squad 0: new loss of own base of fire.
- 66.7s, squad 1: help call ([trace 16567](#trace-16567)). 78.7s, squad 0: answered a neighbour with support by fire.
- 78.7s, squad 0: help answer ([trace 17934](#trace-17934)). 84.8s, squad 0: took cover and returned fire.
- 86.8s, squad 0: withdrawal ([trace 19444](#trace-19444)). No completion observed before termination.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose new loss of own base of fire, broke contact and 4 further drill types; no completed objective recorded; 66 shots, 8/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 15 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 200 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 54 shots, 0/2 lost.

### Decisions and attribution

At 84.8s, squad 0 chose took cover and returned fire ([trace 19099](#trace-19099)), followed by 0 shots and 1 own casualties; estimate 11.7 against 0 distinct squad-reported contacts; At 22.8s, squad 1 chose took cover and returned fire ([trace 3643](#trace-3643)), followed by 1 shots and 0 own casualties; estimate 10.4 against 0 distinct squad-reported contacts; At 29.8s, squad 1 chose FightHere: nearest known group ([trace 5629](#trace-5629)), followed by 1 shots and 0 own casualties; estimate 10.0 against 7 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 684](#trace-684)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9342707804880179, 'next_transition': 703}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 686](#trace-686)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409999119592868, 'next_transition': 818}.

### Communication

221 matched deliveries (mean 0.47s, max 2.50s); 497 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.90s, squad 1, contact, evidence events line 175: First recorded contact; .
- 37.85s, squad 1, help call, evidence 7239: NeedSupport; No completion observed before termination.
- 39.50s, squad 0, help answer, evidence 10239: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 49.7s, squad 0: took cover and returned fire.
- 48.05s, squad 0, help call, evidence 12983: NeedSupport; 49.4s, squad 1: answered a neighbour with support by fire.
- 49.35s, squad 1, help answer, evidence 13054: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 54.9s, squad 1: took cover and returned fire.
- 58.20s, squad 1, withdrawal, evidence 15087: BreakContact: believed ratio at least two without superiority; 166.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 60.20s, squad 0, assault, evidence 15718: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 69.6s, squad 0: new loss of own base of fire.
- 66.65s, squad 1, help call, evidence 16567: NeedSupport; 78.7s, squad 0: answered a neighbour with support by fire.
- 78.70s, squad 0, help answer, evidence 17934: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 84.8s, squad 0: took cover and returned fire.
- 86.75s, squad 0, withdrawal, evidence 19444: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 129.90s, squad 0, help call, evidence 21110: NeedSupport; 166.9s, squad 1: answered a neighbour with support by fire.
- 132.40s, squad 1, help call, evidence 21224: NeedSupport; No completion observed before termination.
- 166.85s, squad 1, help answer, evidence 22285: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 173.7s, squad 1: Withdraw to received rally.
- 173.70s, squad 1, withdrawal, evidence 23260: Withdraw to received rally; 217.2s, squad 1: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8702984214707237, 'next_transition': 570}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8702984214707237, 'next_transition': 570}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8702984214707237, 'next_transition': 570}.
<a id="trace-327"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 327): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528790231665454, 'next_transition': 87}.
<a id="trace-328"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 328): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528790231665454, 'next_transition': 87}.
<a id="trace-329"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 329): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528790231665454, 'next_transition': 87}.
<a id="trace-570"></a>
<a id="trace-572"></a>
<a id="trace-598"></a>
<a id="trace-600"></a>
<a id="trace-633"></a>
<a id="trace-635"></a>
<a id="trace-654"></a>
<a id="trace-656"></a>
<a id="trace-675"></a>
<a id="trace-677"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 570): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600168965496865, 'next_transition': 598}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9342707804880179, 'next_transition': 703}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409999119592868, 'next_transition': 818}.
<a id="trace-684"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 684): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 684. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9342707804880179, 'next_transition': 703}.
<a id="trace-685"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 685): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 685. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9342707804880179, 'next_transition': 703}.
<a id="trace-686"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 686): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 686. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409999119592868, 'next_transition': 818}.
<a id="trace-687"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 687): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 687. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409999119592868, 'next_transition': 818}.
<a id="trace-703"></a>
<a id="trace-705"></a>
<a id="trace-731"></a>
<a id="trace-733"></a>
<a id="trace-811"></a>
<a id="trace-813"></a>
<a id="trace-936"></a>
<a id="trace-938"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 687. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9432388664978519, 'next_transition': 731}.
<a id="trace-818"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 818): traveling overwatch. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: None.
<a id="trace-819"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 819): received platoon directive. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: None.
<a id="trace-865"></a>
- 5.30s–5.30s (×1), actor 8, squad 1 (trace 865): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 17.313665067652423, 'next_transition': 1745}.
<a id="trace-940"></a>
<a id="trace-1037"></a>
<a id="trace-1076"></a>
<a id="trace-1078"></a>
<a id="trace-1126"></a>
<a id="trace-1128"></a>
<a id="trace-1193"></a>
<a id="trace-1195"></a>
<a id="trace-1245"></a>
<a id="trace-1247"></a>
<a id="trace-1273"></a>
<a id="trace-1275"></a>
<a id="trace-1302"></a>
<a id="trace-1304"></a>
<a id="trace-1391"></a>
<a id="trace-1393"></a>
<a id="trace-1420"></a>
<a id="trace-1422"></a>
<a id="trace-1443"></a>
<a id="trace-1445"></a>
<a id="trace-1464"></a>
<a id="trace-1466"></a>
<a id="trace-1503"></a>
<a id="trace-1505"></a>
<a id="trace-1523"></a>
<a id="trace-1525"></a>
<a id="trace-1537"></a>
<a id="trace-1539"></a>
<a id="trace-1737"></a>
<a id="trace-1739"></a>
<a id="trace-2207"></a>
<a id="trace-2209"></a>
<a id="trace-2382"></a>
<a id="trace-2384"></a>
<a id="trace-2666"></a>
<a id="trace-2668"></a>
<a id="trace-2836"></a>
<a id="trace-2838"></a>
<a id="trace-2896"></a>
<a id="trace-2898"></a>
<a id="trace-2980"></a>
<a id="trace-2982"></a>
<a id="trace-3015"></a>
<a id="trace-3017"></a>
<a id="trace-3050"></a>
<a id="trace-3052"></a>
<a id="trace-3203"></a>
<a id="trace-3205"></a>
<a id="trace-3228"></a>
<a id="trace-3230"></a>
<a id="trace-3553"></a>
<a id="trace-3555"></a>
<a id="trace-3574"></a>
<a id="trace-3576"></a>
<a id="trace-3622"></a>
<a id="trace-3624"></a>
<a id="trace-3640"></a>
<a id="trace-3642"></a>
<a id="trace-3779"></a>
<a id="trace-3781"></a>
<a id="trace-3824"></a>
<a id="trace-3826"></a>
<a id="trace-3887"></a>
<a id="trace-3889"></a>
<a id="trace-3989"></a>
<a id="trace-3991"></a>
<a id="trace-4013"></a>
<a id="trace-4015"></a>
<a id="trace-4441"></a>
<a id="trace-4443"></a>
<a id="trace-4857"></a>
<a id="trace-4859"></a>
<a id="trace-4897"></a>
<a id="trace-4899"></a>
<a id="trace-5343"></a>
<a id="trace-5345"></a>
<a id="trace-5375"></a>
<a id="trace-5377"></a>
<a id="trace-5582"></a>
<a id="trace-5584"></a>
<a id="trace-5619"></a>
<a id="trace-5621"></a>
<a id="trace-5739"></a>
<a id="trace-5741"></a>
<a id="trace-5779"></a>
<a id="trace-5781"></a>
<a id="trace-5818"></a>
<a id="trace-5820"></a>
<a id="trace-5856"></a>
<a id="trace-5858"></a>
<a id="trace-6331"></a>
<a id="trace-6333"></a>
<a id="trace-6808"></a>
<a id="trace-6810"></a>
<a id="trace-6849"></a>
<a id="trace-6851"></a>
<a id="trace-6924"></a>
<a id="trace-6926"></a>
<a id="trace-6986"></a>
<a id="trace-6988"></a>
<a id="trace-7021"></a>
<a id="trace-7023"></a>
<a id="trace-7126"></a>
<a id="trace-7128"></a>
<a id="trace-7146"></a>
<a id="trace-7148"></a>
<a id="trace-7192"></a>
<a id="trace-7194"></a>
<a id="trace-7216"></a>
<a id="trace-7218"></a>
<a id="trace-7234"></a>
<a id="trace-7236"></a>
<a id="trace-7269"></a>
<a id="trace-7271"></a>
<a id="trace-10201"></a>
<a id="trace-10203"></a>
<a id="trace-10222"></a>
<a id="trace-10224"></a>
<a id="trace-12028"></a>
<a id="trace-12030"></a>
<a id="trace-12133"></a>
<a id="trace-12135"></a>
<a id="trace-12155"></a>
<a id="trace-12157"></a>
<a id="trace-12178"></a>
<a id="trace-12180"></a>
<a id="trace-12209"></a>
<a id="trace-12211"></a>
<a id="trace-12266"></a>
<a id="trace-12268"></a>
<a id="trace-12290"></a>
<a id="trace-12292"></a>
<a id="trace-12698"></a>
<a id="trace-12700"></a>
<a id="trace-12731"></a>
<a id="trace-12733"></a>
<a id="trace-12773"></a>
<a id="trace-12775"></a>
<a id="trace-12863"></a>
<a id="trace-12865"></a>
<a id="trace-12895"></a>
<a id="trace-12897"></a>
<a id="trace-12922"></a>
<a id="trace-12924"></a>
<a id="trace-12938"></a>
<a id="trace-12940"></a>
<a id="trace-12958"></a>
<a id="trace-12960"></a>
<a id="trace-12973"></a>
<a id="trace-12975"></a>
<a id="trace-13007"></a>
<a id="trace-13009"></a>
<a id="trace-14439"></a>
<a id="trace-14441"></a>
<a id="trace-14465"></a>
<a id="trace-14467"></a>
<a id="trace-14506"></a>
<a id="trace-14508"></a>
<a id="trace-14524"></a>
<a id="trace-14526"></a>
<a id="trace-14557"></a>
<a id="trace-14559"></a>
<a id="trace-14610"></a>
<a id="trace-14612"></a>
<a id="trace-14635"></a>
<a id="trace-14637"></a>
<a id="trace-14676"></a>
<a id="trace-14678"></a>
<a id="trace-14931"></a>
<a id="trace-14933"></a>
<a id="trace-14948"></a>
<a id="trace-14950"></a>
<a id="trace-14983"></a>
<a id="trace-14985"></a>
<a id="trace-15043"></a>
<a id="trace-15045"></a>
<a id="trace-15069"></a>
<a id="trace-15071"></a>
<a id="trace-15216"></a>
<a id="trace-15218"></a>
<a id="trace-15246"></a>
<a id="trace-15248"></a>
<a id="trace-15290"></a>
<a id="trace-15292"></a>
<a id="trace-15340"></a>
<a id="trace-15342"></a>
<a id="trace-16027"></a>
<a id="trace-16029"></a>
<a id="trace-16136"></a>
<a id="trace-16138"></a>
<a id="trace-16184"></a>
<a id="trace-16186"></a>
<a id="trace-16212"></a>
<a id="trace-16214"></a>
<a id="trace-16239"></a>
<a id="trace-16241"></a>
<a id="trace-16272"></a>
<a id="trace-16274"></a>
<a id="trace-16297"></a>
<a id="trace-16299"></a>
<a id="trace-16473"></a>
<a id="trace-16475"></a>
<a id="trace-16515"></a>
<a id="trace-16517"></a>
<a id="trace-16542"></a>
<a id="trace-16544"></a>
<a id="trace-16587"></a>
<a id="trace-16589"></a>
<a id="trace-16649"></a>
<a id="trace-16651"></a>
<a id="trace-16700"></a>
<a id="trace-16702"></a>
<a id="trace-16723"></a>
<a id="trace-16725"></a>
<a id="trace-17046"></a>
<a id="trace-17048"></a>
<a id="trace-17207"></a>
<a id="trace-17209"></a>
<a id="trace-17243"></a>
<a id="trace-17245"></a>
<a id="trace-17294"></a>
<a id="trace-17296"></a>
<a id="trace-17342"></a>
<a id="trace-17344"></a>
<a id="trace-17390"></a>
<a id="trace-17392"></a>
<a id="trace-17468"></a>
<a id="trace-17470"></a>
<a id="trace-17501"></a>
<a id="trace-17503"></a>
<a id="trace-17531"></a>
<a id="trace-17533"></a>
<a id="trace-17612"></a>
<a id="trace-17614"></a>
<a id="trace-17629"></a>
<a id="trace-17631"></a>
<a id="trace-17656"></a>
<a id="trace-17658"></a>
<a id="trace-17902"></a>
<a id="trace-17904"></a>
<a id="trace-17919"></a>
<a id="trace-17921"></a>
<a id="trace-18855"></a>
<a id="trace-18857"></a>
<a id="trace-18870"></a>
<a id="trace-18872"></a>
<a id="trace-18955"></a>
<a id="trace-18957"></a>
<a id="trace-18971"></a>
<a id="trace-18973"></a>
<a id="trace-19005"></a>
<a id="trace-19007"></a>
<a id="trace-19025"></a>
<a id="trace-19027"></a>
<a id="trace-19035"></a>
<a id="trace-19037"></a>
<a id="trace-19051"></a>
<a id="trace-19053"></a>
<a id="trace-19064"></a>
<a id="trace-19066"></a>
<a id="trace-19399"></a>
<a id="trace-19401"></a>
<a id="trace-19428"></a>
<a id="trace-19430"></a>
<a id="trace-19511"></a>
<a id="trace-19513"></a>
<a id="trace-19525"></a>
<a id="trace-19527"></a>
<a id="trace-19543"></a>
<a id="trace-19545"></a>
<a id="trace-19552"></a>
<a id="trace-19554"></a>
<a id="trace-19574"></a>
<a id="trace-19576"></a>
<a id="trace-19585"></a>
<a id="trace-19587"></a>
<a id="trace-19719"></a>
<a id="trace-19721"></a>
<a id="trace-19747"></a>
<a id="trace-19749"></a>
<a id="trace-19798"></a>
<a id="trace-19800"></a>
<a id="trace-19808"></a>
<a id="trace-19810"></a>
<a id="trace-19823"></a>
<a id="trace-19825"></a>
<a id="trace-19835"></a>
<a id="trace-19837"></a>
<a id="trace-19932"></a>
<a id="trace-19934"></a>
<a id="trace-19941"></a>
<a id="trace-19943"></a>
<a id="trace-19959"></a>
<a id="trace-19961"></a>
<a id="trace-19966"></a>
<a id="trace-19968"></a>
<a id="trace-20005"></a>
<a id="trace-20007"></a>
<a id="trace-20031"></a>
<a id="trace-20033"></a>
<a id="trace-20114"></a>
<a id="trace-20116"></a>
<a id="trace-20125"></a>
<a id="trace-20127"></a>
<a id="trace-20140"></a>
<a id="trace-20142"></a>
<a id="trace-20151"></a>
<a id="trace-20153"></a>
<a id="trace-20218"></a>
<a id="trace-20220"></a>
<a id="trace-20231"></a>
<a id="trace-20233"></a>
<a id="trace-20252"></a>
<a id="trace-20254"></a>
<a id="trace-20260"></a>
<a id="trace-20262"></a>
<a id="trace-20284"></a>
<a id="trace-20286"></a>
<a id="trace-20298"></a>
<a id="trace-20300"></a>
<a id="trace-20378"></a>
<a id="trace-20380"></a>
<a id="trace-20393"></a>
<a id="trace-20395"></a>
<a id="trace-20401"></a>
<a id="trace-20403"></a>
<a id="trace-20419"></a>
<a id="trace-20421"></a>
<a id="trace-20437"></a>
<a id="trace-20439"></a>
<a id="trace-20445"></a>
<a id="trace-20447"></a>
<a id="trace-20460"></a>
<a id="trace-20462"></a>
<a id="trace-20469"></a>
<a id="trace-20471"></a>
<a id="trace-20543"></a>
<a id="trace-20545"></a>
<a id="trace-20555"></a>
<a id="trace-20557"></a>
<a id="trace-20563"></a>
<a id="trace-20565"></a>
<a id="trace-20571"></a>
<a id="trace-20573"></a>
<a id="trace-20580"></a>
<a id="trace-20582"></a>
<a id="trace-20586"></a>
<a id="trace-20588"></a>
<a id="trace-20599"></a>
<a id="trace-20601"></a>
<a id="trace-20607"></a>
<a id="trace-20609"></a>
<a id="trace-20618"></a>
<a id="trace-20620"></a>
<a id="trace-20695"></a>
<a id="trace-20697"></a>
<a id="trace-20703"></a>
<a id="trace-20705"></a>
<a id="trace-20716"></a>
<a id="trace-20718"></a>
<a id="trace-20726"></a>
<a id="trace-20728"></a>
<a id="trace-20741"></a>
<a id="trace-20743"></a>
<a id="trace-20772"></a>
<a id="trace-20774"></a>
<a id="trace-20789"></a>
<a id="trace-20791"></a>
<a id="trace-20803"></a>
<a id="trace-20805"></a>
<a id="trace-20879"></a>
<a id="trace-20881"></a>
<a id="trace-20907"></a>
<a id="trace-20909"></a>
<a id="trace-20939"></a>
<a id="trace-20941"></a>
<a id="trace-20946"></a>
<a id="trace-20948"></a>
<a id="trace-20957"></a>
<a id="trace-20959"></a>
<a id="trace-21055"></a>
<a id="trace-21057"></a>
<a id="trace-21066"></a>
<a id="trace-21068"></a>
<a id="trace-21072"></a>
<a id="trace-21074"></a>
<a id="trace-21085"></a>
<a id="trace-21087"></a>
<a id="trace-21090"></a>
<a id="trace-21092"></a>
<a id="trace-21107"></a>
<a id="trace-21109"></a>
<a id="trace-21182"></a>
<a id="trace-21184"></a>
<a id="trace-21187"></a>
<a id="trace-21189"></a>
<a id="trace-21200"></a>
<a id="trace-21202"></a>
<a id="trace-21206"></a>
<a id="trace-21208"></a>
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21241"></a>
<a id="trace-21243"></a>
<a id="trace-21257"></a>
<a id="trace-21259"></a>
<a id="trace-21262"></a>
<a id="trace-21264"></a>
<a id="trace-21275"></a>
<a id="trace-21277"></a>
<a id="trace-21281"></a>
<a id="trace-21283"></a>
<a id="trace-21351"></a>
<a id="trace-21353"></a>
<a id="trace-21356"></a>
<a id="trace-21358"></a>
<a id="trace-21368"></a>
<a id="trace-21370"></a>
<a id="trace-21372"></a>
<a id="trace-21374"></a>
<a id="trace-21384"></a>
<a id="trace-21386"></a>
<a id="trace-21405"></a>
<a id="trace-21407"></a>
<a id="trace-21413"></a>
<a id="trace-21415"></a>
<a id="trace-21432"></a>
<a id="trace-21434"></a>
<a id="trace-21438"></a>
<a id="trace-21440"></a>
<a id="trace-21512"></a>
<a id="trace-21514"></a>
<a id="trace-21519"></a>
<a id="trace-21521"></a>
<a id="trace-21538"></a>
<a id="trace-21540"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
<a id="trace-21558"></a>
<a id="trace-21560"></a>
<a id="trace-21575"></a>
<a id="trace-21577"></a>
<a id="trace-21583"></a>
<a id="trace-21585"></a>
<a id="trace-21602"></a>
<a id="trace-21604"></a>
<a id="trace-21610"></a>
<a id="trace-21612"></a>
<a id="trace-21712"></a>
<a id="trace-21714"></a>
<a id="trace-21719"></a>
<a id="trace-21721"></a>
<a id="trace-21728"></a>
<a id="trace-21730"></a>
<a id="trace-21734"></a>
<a id="trace-21736"></a>
<a id="trace-21742"></a>
<a id="trace-21744"></a>
<a id="trace-21747"></a>
<a id="trace-21749"></a>
<a id="trace-21755"></a>
<a id="trace-21757"></a>
<a id="trace-21762"></a>
<a id="trace-21764"></a>
<a id="trace-21830"></a>
<a id="trace-21832"></a>
<a id="trace-21835"></a>
<a id="trace-21837"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-21876"></a>
<a id="trace-21878"></a>
<a id="trace-21891"></a>
<a id="trace-21893"></a>
<a id="trace-21904"></a>
<a id="trace-21906"></a>
<a id="trace-21976"></a>
<a id="trace-21978"></a>
<a id="trace-21989"></a>
<a id="trace-21991"></a>
<a id="trace-21993"></a>
<a id="trace-21995"></a>
<a id="trace-22002"></a>
<a id="trace-22004"></a>
<a id="trace-22010"></a>
<a id="trace-22012"></a>
<a id="trace-22021"></a>
<a id="trace-22023"></a>
<a id="trace-22029"></a>
<a id="trace-22031"></a>
<a id="trace-22118"></a>
<a id="trace-22120"></a>
<a id="trace-22123"></a>
<a id="trace-22125"></a>
<a id="trace-22138"></a>
<a id="trace-22140"></a>
<a id="trace-22159"></a>
<a id="trace-22161"></a>
<a id="trace-22164"></a>
<a id="trace-22166"></a>
<a id="trace-22177"></a>
<a id="trace-22179"></a>
<a id="trace-22183"></a>
<a id="trace-22185"></a>
<a id="trace-22254"></a>
<a id="trace-22256"></a>
<a id="trace-22276"></a>
<a id="trace-22278"></a>
<a id="trace-23037"></a>
<a id="trace-23039"></a>
<a id="trace-23054"></a>
<a id="trace-23056"></a>
<a id="trace-23078"></a>
<a id="trace-23080"></a>
<a id="trace-23119"></a>
<a id="trace-23121"></a>
<a id="trace-23124"></a>
<a id="trace-23126"></a>
<a id="trace-23191"></a>
<a id="trace-23193"></a>
<a id="trace-23209"></a>
<a id="trace-23211"></a>
<a id="trace-23216"></a>
<a id="trace-23218"></a>
<a id="trace-23239"></a>
<a id="trace-23241"></a>
<a id="trace-23255"></a>
<a id="trace-23257"></a>
<a id="trace-23316"></a>
<a id="trace-23318"></a>
<a id="trace-23332"></a>
<a id="trace-23334"></a>
<a id="trace-23351"></a>
<a id="trace-23353"></a>
<a id="trace-23419"></a>
<a id="trace-23421"></a>
<a id="trace-23430"></a>
<a id="trace-23432"></a>
<a id="trace-23449"></a>
<a id="trace-23451"></a>
<a id="trace-23454"></a>
<a id="trace-23456"></a>
<a id="trace-23469"></a>
<a id="trace-23471"></a>
<a id="trace-23487"></a>
<a id="trace-23489"></a>
<a id="trace-23492"></a>
<a id="trace-23494"></a>
<a id="trace-23511"></a>
<a id="trace-23513"></a>
<a id="trace-23591"></a>
<a id="trace-23593"></a>
<a id="trace-23597"></a>
<a id="trace-23599"></a>
<a id="trace-23610"></a>
<a id="trace-23612"></a>
<a id="trace-23617"></a>
<a id="trace-23619"></a>
<a id="trace-23629"></a>
<a id="trace-23631"></a>
<a id="trace-23634"></a>
<a id="trace-23636"></a>
<a id="trace-23648"></a>
<a id="trace-23650"></a>
<a id="trace-23654"></a>
<a id="trace-23656"></a>
<a id="trace-23673"></a>
<a id="trace-23675"></a>
<a id="trace-23681"></a>
<a id="trace-23683"></a>
<a id="trace-23839"></a>
<a id="trace-23841"></a>
<a id="trace-23847"></a>
<a id="trace-23849"></a>
<a id="trace-23869"></a>
<a id="trace-23871"></a>
<a id="trace-23883"></a>
<a id="trace-23885"></a>
<a id="trace-23899"></a>
<a id="trace-23901"></a>
<a id="trace-23907"></a>
<a id="trace-23909"></a>
<a id="trace-23979"></a>
<a id="trace-23981"></a>
<a id="trace-24001"></a>
<a id="trace-24003"></a>
<a id="trace-24026"></a>
<a id="trace-24028"></a>
<a id="trace-24042"></a>
<a id="trace-24044"></a>
<a id="trace-24057"></a>
<a id="trace-24059"></a>
<a id="trace-24065"></a>
<a id="trace-24067"></a>
<a id="trace-24139"></a>
<a id="trace-24141"></a>
<a id="trace-24169"></a>
<a id="trace-24171"></a>
<a id="trace-24190"></a>
<a id="trace-24192"></a>
<a id="trace-24203"></a>
<a id="trace-24205"></a>
<a id="trace-24218"></a>
<a id="trace-24220"></a>
<a id="trace-24226"></a>
<a id="trace-24228"></a>
<a id="trace-24296"></a>
<a id="trace-24298"></a>
<a id="trace-24358"></a>
<a id="trace-24360"></a>
<a id="trace-24379"></a>
<a id="trace-24381"></a>
<a id="trace-24391"></a>
<a id="trace-24393"></a>
<a id="trace-24421"></a>
<a id="trace-24423"></a>
<a id="trace-24524"></a>
<a id="trace-24526"></a>
<a id="trace-24538"></a>
<a id="trace-24540"></a>
<a id="trace-24545"></a>
<a id="trace-24547"></a>
<a id="trace-24569"></a>
<a id="trace-24571"></a>
<a id="trace-24580"></a>
<a id="trace-24582"></a>
<a id="trace-24586"></a>
<a id="trace-24588"></a>
<a id="trace-24651"></a>
<a id="trace-24653"></a>
<a id="trace-24661"></a>
<a id="trace-24663"></a>
<a id="trace-24735"></a>
<a id="trace-24737"></a>
<a id="trace-24765"></a>
<a id="trace-24767"></a>
<a id="trace-24773"></a>
<a id="trace-24775"></a>
<a id="trace-24791"></a>
<a id="trace-24793"></a>
<a id="trace-24803"></a>
<a id="trace-24805"></a>
<a id="trace-24813"></a>
<a id="trace-24815"></a>
<a id="trace-24823"></a>
<a id="trace-24825"></a>
<a id="trace-24839"></a>
<a id="trace-24841"></a>
<a id="trace-24849"></a>
<a id="trace-24851"></a>
<a id="trace-24916"></a>
<a id="trace-24918"></a>
<a id="trace-24924"></a>
<a id="trace-24926"></a>
<a id="trace-24934"></a>
<a id="trace-24936"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-24957"></a>
<a id="trace-24959"></a>
<a id="trace-24970"></a>
<a id="trace-24972"></a>
<a id="trace-24987"></a>
<a id="trace-24989"></a>
<a id="trace-25004"></a>
<a id="trace-25006"></a>
<a id="trace-25104"></a>
<a id="trace-25106"></a>
<a id="trace-25113"></a>
<a id="trace-25115"></a>
<a id="trace-25132"></a>
<a id="trace-25134"></a>
<a id="trace-25141"></a>
<a id="trace-25143"></a>
<a id="trace-25207"></a>
<a id="trace-25209"></a>
<a id="trace-25226"></a>
<a id="trace-25228"></a>
<a id="trace-25238"></a>
<a id="trace-25240"></a>
<a id="trace-25255"></a>
<a id="trace-25257"></a>
<a id="trace-25273"></a>
<a id="trace-25275"></a>
<a id="trace-25351"></a>
<a id="trace-25353"></a>
<a id="trace-25375"></a>
<a id="trace-25377"></a>
<a id="trace-25381"></a>
<a id="trace-25383"></a>
<a id="trace-25394"></a>
<a id="trace-25396"></a>
<a id="trace-25404"></a>
<a id="trace-25406"></a>
<a id="trace-25437"></a>
<a id="trace-25439"></a>
<a id="trace-25508"></a>
<a id="trace-25510"></a>
<a id="trace-25515"></a>
<a id="trace-25517"></a>
<a id="trace-25530"></a>
<a id="trace-25532"></a>
<a id="trace-25543"></a>
<a id="trace-25545"></a>
<a id="trace-25556"></a>
<a id="trace-25558"></a>
<a id="trace-25563"></a>
<a id="trace-25565"></a>
<a id="trace-25576"></a>
<a id="trace-25578"></a>
<a id="trace-25588"></a>
<a id="trace-25590"></a>
<a id="trace-25603"></a>
<a id="trace-25605"></a>
<a id="trace-25609"></a>
<a id="trace-25611"></a>
<a id="trace-25695"></a>
<a id="trace-25697"></a>
<a id="trace-25703"></a>
<a id="trace-25705"></a>
<a id="trace-25715"></a>
<a id="trace-25717"></a>
<a id="trace-25723"></a>
<a id="trace-25725"></a>
<a id="trace-25742"></a>
<a id="trace-25744"></a>
<a id="trace-25749"></a>
<a id="trace-25751"></a>
<a id="trace-25765"></a>
<a id="trace-25767"></a>
<a id="trace-25771"></a>
<a id="trace-25773"></a>
<a id="trace-25842"></a>
<a id="trace-25844"></a>
<a id="trace-25856"></a>
<a id="trace-25858"></a>
<a id="trace-25869"></a>
<a id="trace-25871"></a>
<a id="trace-25876"></a>
<a id="trace-25878"></a>
<a id="trace-25953"></a>
<a id="trace-25955"></a>
<a id="trace-25969"></a>
<a id="trace-25971"></a>
<a id="trace-25980"></a>
<a id="trace-25982"></a>
<a id="trace-25997"></a>
<a id="trace-25999"></a>
<a id="trace-26005"></a>
<a id="trace-26007"></a>
<a id="trace-26088"></a>
<a id="trace-26090"></a>
<a id="trace-26101"></a>
<a id="trace-26103"></a>
<a id="trace-26108"></a>
<a id="trace-26110"></a>
<a id="trace-26123"></a>
<a id="trace-26125"></a>
<a id="trace-26130"></a>
<a id="trace-26132"></a>
<a id="trace-26144"></a>
<a id="trace-26146"></a>
<a id="trace-26152"></a>
<a id="trace-26154"></a>
<a id="trace-26165"></a>
<a id="trace-26167"></a>
<a id="trace-26172"></a>
<a id="trace-26174"></a>
<a id="trace-26243"></a>
<a id="trace-26245"></a>
<a id="trace-26250"></a>
<a id="trace-26252"></a>
<a id="trace-26265"></a>
<a id="trace-26267"></a>
<a id="trace-26277"></a>
<a id="trace-26279"></a>
<a id="trace-26296"></a>
<a id="trace-26298"></a>
<a id="trace-26315"></a>
<a id="trace-26317"></a>
<a id="trace-26329"></a>
<a id="trace-26331"></a>
<a id="trace-26337"></a>
<a id="trace-26339"></a>
<a id="trace-26407"></a>
<a id="trace-26409"></a>
<a id="trace-26415"></a>
<a id="trace-26417"></a>
<a id="trace-26438"></a>
<a id="trace-26440"></a>
<a id="trace-26506"></a>
<a id="trace-26508"></a>
<a id="trace-26537"></a>
<a id="trace-26539"></a>
<a id="trace-26549"></a>
<a id="trace-26551"></a>
<a id="trace-26566"></a>
<a id="trace-26568"></a>
<a id="trace-26576"></a>
<a id="trace-26578"></a>
<a id="trace-26645"></a>
<a id="trace-26647"></a>
<a id="trace-26666"></a>
<a id="trace-26668"></a>
<a id="trace-26673"></a>
<a id="trace-26675"></a>
<a id="trace-26686"></a>
<a id="trace-26688"></a>
<a id="trace-26695"></a>
<a id="trace-26697"></a>
<a id="trace-26711"></a>
<a id="trace-26713"></a>
<a id="trace-26720"></a>
<a id="trace-26722"></a>
<a id="trace-26745"></a>
<a id="trace-26747"></a>
<a id="trace-26814"></a>
<a id="trace-26816"></a>
<a id="trace-26832"></a>
<a id="trace-26834"></a>
<a id="trace-26840"></a>
<a id="trace-26842"></a>
<a id="trace-26854"></a>
<a id="trace-26856"></a>
<a id="trace-26871"></a>
<a id="trace-26873"></a>
<a id="trace-26879"></a>
<a id="trace-26881"></a>
<a id="trace-26978"></a>
<a id="trace-26980"></a>
<a id="trace-27000"></a>
<a id="trace-27002"></a>
<a id="trace-27014"></a>
<a id="trace-27016"></a>
<a id="trace-27021"></a>
<a id="trace-27023"></a>
<a id="trace-27043"></a>
<a id="trace-27045"></a>
<a id="trace-27053"></a>
<a id="trace-27055"></a>
<a id="trace-27146"></a>
<a id="trace-27148"></a>
<a id="trace-27259"></a>
<a id="trace-27261"></a>
<a id="trace-27278"></a>
<a id="trace-27280"></a>
<a id="trace-27285"></a>
<a id="trace-27287"></a>
<a id="trace-27301"></a>
<a id="trace-27303"></a>
<a id="trace-27318"></a>
<a id="trace-27320"></a>
<a id="trace-27405"></a>
<a id="trace-27407"></a>
<a id="trace-27413"></a>
<a id="trace-27415"></a>
<a id="trace-27424"></a>
<a id="trace-27426"></a>
<a id="trace-27491"></a>
<a id="trace-27493"></a>
<a id="trace-27502"></a>
<a id="trace-27504"></a>
<a id="trace-27527"></a>
<a id="trace-27529"></a>
<a id="trace-27543"></a>
<a id="trace-27545"></a>
<a id="trace-27559"></a>
<a id="trace-27561"></a>
<a id="trace-27636"></a>
<a id="trace-27638"></a>
<a id="trace-27648"></a>
<a id="trace-27650"></a>
<a id="trace-27655"></a>
<a id="trace-27657"></a>
<a id="trace-27668"></a>
<a id="trace-27670"></a>
<a id="trace-27683"></a>
<a id="trace-27685"></a>
<a id="trace-27691"></a>
<a id="trace-27693"></a>
<a id="trace-27701"></a>
<a id="trace-27703"></a>
<a id="trace-27778"></a>
<a id="trace-27780"></a>
<a id="trace-27792"></a>
<a id="trace-27794"></a>
<a id="trace-27813"></a>
<a id="trace-27815"></a>
<a id="trace-27824"></a>
<a id="trace-27826"></a>
<a id="trace-27841"></a>
<a id="trace-27843"></a>
<a id="trace-27852"></a>
<a id="trace-27854"></a>
<a id="trace-27864"></a>
<a id="trace-27866"></a>
<a id="trace-27874"></a>
<a id="trace-27876"></a>
<a id="trace-27884"></a>
<a id="trace-27886"></a>
<a id="trace-27949"></a>
<a id="trace-27951"></a>
<a id="trace-27957"></a>
<a id="trace-27959"></a>
<a id="trace-27969"></a>
<a id="trace-27971"></a>
<a id="trace-27976"></a>
<a id="trace-27978"></a>
<a id="trace-27986"></a>
<a id="trace-27988"></a>
<a id="trace-28006"></a>
<a id="trace-28008"></a>
<a id="trace-28020"></a>
<a id="trace-28022"></a>
<a id="trace-28027"></a>
<a id="trace-28029"></a>
<a id="trace-28040"></a>
<a id="trace-28042"></a>
<a id="trace-28046"></a>
<a id="trace-28048"></a>
<a id="trace-28114"></a>
<a id="trace-28116"></a>
<a id="trace-28119"></a>
<a id="trace-28121"></a>
<a id="trace-28129"></a>
<a id="trace-28131"></a>
<a id="trace-28135"></a>
<a id="trace-28137"></a>
<a id="trace-28144"></a>
<a id="trace-28146"></a>
<a id="trace-28152"></a>
<a id="trace-28154"></a>
<a id="trace-28170"></a>
<a id="trace-28172"></a>
<a id="trace-28191"></a>
<a id="trace-28193"></a>
<a id="trace-28264"></a>
<a id="trace-28266"></a>
<a id="trace-28274"></a>
<a id="trace-28276"></a>
<a id="trace-28286"></a>
<a id="trace-28288"></a>
<a id="trace-28291"></a>
<a id="trace-28293"></a>
<a id="trace-28300"></a>
<a id="trace-28302"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28323"></a>
<a id="trace-28325"></a>
<a id="trace-28411"></a>
<a id="trace-28413"></a>
<a id="trace-28426"></a>
<a id="trace-28428"></a>
<a id="trace-28433"></a>
<a id="trace-28435"></a>
<a id="trace-28443"></a>
<a id="trace-28445"></a>
<a id="trace-28449"></a>
<a id="trace-28451"></a>
<a id="trace-28463"></a>
<a id="trace-28465"></a>
<a id="trace-28528"></a>
<a id="trace-28530"></a>
<a id="trace-28533"></a>
<a id="trace-28535"></a>
<a id="trace-28555"></a>
<a id="trace-28557"></a>
<a id="trace-28571"></a>
<a id="trace-28573"></a>
<a id="trace-28583"></a>
<a id="trace-28585"></a>
<a id="trace-28595"></a>
<a id="trace-28597"></a>
<a id="trace-28600"></a>
<a id="trace-28602"></a>
<a id="trace-28614"></a>
<a id="trace-28616"></a>
<a id="trace-28681"></a>
<a id="trace-28683"></a>
<a id="trace-28687"></a>
<a id="trace-28689"></a>
<a id="trace-28699"></a>
<a id="trace-28701"></a>
<a id="trace-28720"></a>
<a id="trace-28722"></a>
<a id="trace-28737"></a>
<a id="trace-28739"></a>
<a id="trace-28745"></a>
<a id="trace-28747"></a>
<a id="trace-28767"></a>
<a id="trace-28769"></a>
<a id="trace-28832"></a>
<a id="trace-28834"></a>
<a id="trace-28849"></a>
<a id="trace-28851"></a>
<a id="trace-28859"></a>
<a id="trace-28861"></a>
<a id="trace-28875"></a>
<a id="trace-28877"></a>
<a id="trace-28880"></a>
<a id="trace-28882"></a>
<a id="trace-28895"></a>
<a id="trace-28897"></a>
<a id="trace-28908"></a>
<a id="trace-28910"></a>
<a id="trace-28987"></a>
<a id="trace-28989"></a>
<a id="trace-28999"></a>
<a id="trace-29001"></a>
<a id="trace-29003"></a>
<a id="trace-29005"></a>
<a id="trace-29012"></a>
<a id="trace-29014"></a>
<a id="trace-29018"></a>
<a id="trace-29020"></a>
<a id="trace-29027"></a>
<a id="trace-29029"></a>
<a id="trace-29042"></a>
<a id="trace-29044"></a>
<a id="trace-29051"></a>
<a id="trace-29053"></a>
<a id="trace-29139"></a>
<a id="trace-29141"></a>
<a id="trace-29148"></a>
<a id="trace-29150"></a>
<a id="trace-29164"></a>
<a id="trace-29166"></a>
<a id="trace-29170"></a>
<a id="trace-29172"></a>
<a id="trace-29181"></a>
<a id="trace-29183"></a>
<a id="trace-29186"></a>
<a id="trace-29188"></a>
<a id="trace-29195"></a>
<a id="trace-29197"></a>
<a id="trace-29265"></a>
<a id="trace-29267"></a>
<a id="trace-29270"></a>
<a id="trace-29272"></a>
<a id="trace-29283"></a>
<a id="trace-29285"></a>
<a id="trace-29310"></a>
<a id="trace-29312"></a>
<a id="trace-29323"></a>
<a id="trace-29325"></a>
<a id="trace-29329"></a>
<a id="trace-29331"></a>
<a id="trace-29348"></a>
<a id="trace-29350"></a>
<a id="trace-29356"></a>
<a id="trace-29358"></a>
<a id="trace-29421"></a>
<a id="trace-29423"></a>
<a id="trace-29426"></a>
<a id="trace-29428"></a>
<a id="trace-29436"></a>
<a id="trace-29438"></a>
<a id="trace-29440"></a>
<a id="trace-29442"></a>
<a id="trace-29455"></a>
<a id="trace-29457"></a>
<a id="trace-29472"></a>
<a id="trace-29474"></a>
<a id="trace-29495"></a>
<a id="trace-29497"></a>
<a id="trace-29564"></a>
<a id="trace-29566"></a>
<a id="trace-29578"></a>
<a id="trace-29580"></a>
<a id="trace-29591"></a>
<a id="trace-29593"></a>
<a id="trace-29595"></a>
<a id="trace-29597"></a>
<a id="trace-29604"></a>
<a id="trace-29606"></a>
<a id="trace-29609"></a>
<a id="trace-29611"></a>
<a id="trace-29618"></a>
<a id="trace-29620"></a>
<a id="trace-29623"></a>
<a id="trace-29625"></a>
<a id="trace-29635"></a>
<a id="trace-29637"></a>
<a id="trace-29641"></a>
<a id="trace-29643"></a>
<a id="trace-29708"></a>
<a id="trace-29710"></a>
<a id="trace-29717"></a>
<a id="trace-29719"></a>
<a id="trace-29735"></a>
<a id="trace-29737"></a>
<a id="trace-29758"></a>
<a id="trace-29760"></a>
<a id="trace-29767"></a>
<a id="trace-29769"></a>
<a id="trace-29775"></a>
<a id="trace-29777"></a>
<a id="trace-29781"></a>
<a id="trace-29783"></a>
<a id="trace-29790"></a>
<a id="trace-29792"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 940): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625256004234635, 'next_transition': 1037}.
<a id="trace-958"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 958): traveling overwatch. Knowledge: actor memory at 5.00s, trace 738. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299964284120284, 'next_transition': 1033}.
<a id="trace-959"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 959): received platoon directive. Knowledge: actor memory at 5.00s, trace 738. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299964284120284, 'next_transition': 1033}.
<a id="trace-1033"></a>
<a id="trace-1035"></a>
<a id="trace-1072"></a>
<a id="trace-1074"></a>
<a id="trace-1122"></a>
<a id="trace-1124"></a>
<a id="trace-1158"></a>
<a id="trace-1160"></a>
<a id="trace-1189"></a>
<a id="trace-1191"></a>
<a id="trace-1241"></a>
<a id="trace-1243"></a>
<a id="trace-1269"></a>
<a id="trace-1271"></a>
<a id="trace-1298"></a>
<a id="trace-1300"></a>
<a id="trace-1387"></a>
<a id="trace-1389"></a>
<a id="trace-1416"></a>
<a id="trace-1418"></a>
<a id="trace-1439"></a>
<a id="trace-1441"></a>
<a id="trace-1460"></a>
<a id="trace-1462"></a>
<a id="trace-1483"></a>
<a id="trace-1485"></a>
<a id="trace-1499"></a>
<a id="trace-1501"></a>
<a id="trace-1519"></a>
<a id="trace-1521"></a>
<a id="trace-1533"></a>
<a id="trace-1535"></a>
<a id="trace-1563"></a>
<a id="trace-1565"></a>
- 6.20s–14.20s (×34), actor 5, squad 0 (trace 1033): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 743. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2403274465362717, 'next_transition': 1072}.
<a id="trace-1571"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 1571): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1310. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1733}.
<a id="trace-1733"></a>
<a id="trace-1735"></a>
<a id="trace-2203"></a>
<a id="trace-2205"></a>
<a id="trace-2378"></a>
<a id="trace-2380"></a>
<a id="trace-2662"></a>
<a id="trace-2664"></a>
<a id="trace-2832"></a>
<a id="trace-2834"></a>
<a id="trace-2892"></a>
<a id="trace-2894"></a>
<a id="trace-2932"></a>
<a id="trace-2934"></a>
<a id="trace-2976"></a>
<a id="trace-2978"></a>
- 14.70s–18.25s (×16), actor 5, squad 0 (trace 1733): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1315. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01968726650655188, 'next_transition': 2203}.
<a id="trace-1745"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1745): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1318. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150014525760161, 'next_transition': 1937}.
<a id="trace-1746"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1746): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1318. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150014525760161, 'next_transition': 1937}.
<a id="trace-1747"></a>
<a id="trace-1937"></a>
<a id="trace-2064"></a>
<a id="trace-2219"></a>
<a id="trace-2411"></a>
<a id="trace-2531"></a>
<a id="trace-2682"></a>
- 14.90s–16.50s (×7), actor 8, squad 1 (trace 1747): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1318. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150014525760161, 'next_transition': 1937}.
<a id="trace-278"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (events line 278): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-279"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (events line 279): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2993"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 2993): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.620869 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2993. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625025064895994, 'next_transition': 3011}.
<a id="trace-2994"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 2994): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.620869 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2994. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625025064895994, 'next_transition': 3011}.
<a id="trace-2995"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 2995): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.620869 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2995. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6828293248945358, 'next_transition': 3055}.
<a id="trace-2996"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 2996): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.620869 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 2996. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6828293248945358, 'next_transition': 3055}.
<a id="trace-3011"></a>
<a id="trace-3013"></a>
<a id="trace-3034"></a>
<a id="trace-3036"></a>
<a id="trace-3046"></a>
<a id="trace-3048"></a>
<a id="trace-3199"></a>
<a id="trace-3201"></a>
<a id="trace-3224"></a>
<a id="trace-3226"></a>
- 18.75s–20.75s (×10), actor 5, squad 0 (trace 3011): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 2996. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087362352943993, 'next_transition': 3034}.
<a id="trace-3055"></a>
- 19.85s–19.85s (×1), actor 8, squad 1 (trace 3055): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1879. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2574138097014222, 'next_transition': 3134}.
<a id="trace-3057"></a>
- 19.85s–19.85s (×1), actor 8, squad 1 (trace 3057): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 15.00s, trace 1879. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2574138097014222, 'next_transition': 3134}.
<a id="trace-3134"></a>
- 20.15s–20.15s (×1), actor 8, squad 1 (trace 3134): MoveTactically. Knowledge: actor memory at 20.00s, trace 3067. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.330367443158487, 'next_transition': 3643}.
<a id="trace-3135"></a>
- 20.15s–20.15s (×1), actor 8, squad 1 (trace 3135): received platoon directive. Knowledge: actor memory at 20.00s, trace 3067. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.330367443158487, 'next_transition': 3643}.
<a id="trace-3237"></a>
- 21.00s–21.00s (×1), actor 0, squad 0 (trace 3237): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3059. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937394959931818, 'next_transition': 3549}.
<a id="trace-3238"></a>
- 21.00s–21.00s (×1), actor 0, squad 0 (trace 3238): bounding overwatch. Knowledge: actor memory at 20.00s, trace 3059. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937394959931818, 'next_transition': 3549}.
<a id="trace-3239"></a>
- 21.00s–21.00s (×1), actor 0, squad 0 (trace 3239): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3059. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937394959931818, 'next_transition': 3549}.
<a id="trace-3549"></a>
<a id="trace-3551"></a>
<a id="trace-3570"></a>
<a id="trace-3572"></a>
<a id="trace-3618"></a>
<a id="trace-3620"></a>
<a id="trace-3636"></a>
<a id="trace-3638"></a>
<a id="trace-3775"></a>
<a id="trace-3777"></a>
<a id="trace-3820"></a>
<a id="trace-3822"></a>
<a id="trace-3855"></a>
<a id="trace-3857"></a>
<a id="trace-3883"></a>
<a id="trace-3885"></a>
- 21.25s–24.75s (×16), actor 5, squad 0 (trace 3549): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3064. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875078554034983, 'next_transition': 3570}.
<a id="trace-3643"></a>
- 22.80s–22.80s (×1), actor 8, squad 1 (trace 3643): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3067. Next observer evidence: {'until': 26, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.961687684087427, 'next_transition': 4427}.
<a id="trace-3644"></a>
- 22.80s–22.80s (×1), actor 8, squad 1 (trace 3644): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3067. Next observer evidence: {'until': 26, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.961687684087427, 'next_transition': 4427}.
<a id="trace-3890"></a>
- 24.75s–24.75s (×1), actor 0, squad 0 (trace 3890): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3059. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.141874979606456, 'next_transition': 3985}.
<a id="trace-3985"></a>
<a id="trace-3987"></a>
<a id="trace-4009"></a>
<a id="trace-4011"></a>
- 25.25s–25.75s (×4), actor 5, squad 0 (trace 3985): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3902. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43312976034883843, 'next_transition': 4009}.
<a id="trace-4026"></a>
- 26.00s–26.00s (×1), actor 0, squad 0 (trace 4026): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3897. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09575999202258648, 'next_transition': 4437}.
<a id="trace-4427"></a>
- 26.15s–26.15s (×1), actor 8, squad 1 (trace 4427): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3905. Next observer evidence: {'until': 29, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6802308880253207, 'next_transition': 5437}.
<a id="trace-4437"></a>
<a id="trace-4439"></a>
- 26.25s–26.25s (×2), actor 5, squad 0 (trace 4437): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3902. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19135955149458672, 'next_transition': 4853}.
<a id="trace-4444"></a>
- 26.25s–26.25s (×1), actor 0, squad 0 (trace 4444): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3897. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19135955149458672, 'next_transition': 4853}.
<a id="trace-4853"></a>
<a id="trace-4855"></a>
<a id="trace-4893"></a>
<a id="trace-4895"></a>
- 26.75s–27.25s (×4), actor 5, squad 0 (trace 4853): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3902. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3737752131350933, 'next_transition': 4893}.
<a id="trace-4900"></a>
- 27.25s–27.25s (×1), actor 0, squad 0 (trace 4900): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3897. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4469332538881098, 'next_transition': 5339}.
<a id="trace-5339"></a>
<a id="trace-5341"></a>
<a id="trace-5371"></a>
<a id="trace-5373"></a>
<a id="trace-5425"></a>
<a id="trace-5427"></a>
<a id="trace-5578"></a>
<a id="trace-5580"></a>
<a id="trace-5615"></a>
<a id="trace-5617"></a>
<a id="trace-5735"></a>
<a id="trace-5737"></a>
<a id="trace-5775"></a>
<a id="trace-5777"></a>
- 27.75s–30.75s (×14), actor 5, squad 0 (trace 5339): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3902. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7008973880072611, 'next_transition': 5371}.
<a id="trace-5437"></a>
- 29.00s–29.00s (×1), actor 8, squad 1 (trace 5437): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3905. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7943882549484224, 'next_transition': 497}.
<a id="trace-497"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (events line 497): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5628"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 5628): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.798338 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 5628. Next observer evidence: {'until': 32.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.3668368698328153, 'next_transition': 6339}.
<a id="trace-5629"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 5629): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.798338 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 5629. Next observer evidence: {'until': 32.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.3668368698328153, 'next_transition': 6339}.
<a id="trace-5782"></a>
- 30.75s–30.75s (×1), actor 0, squad 0 (trace 5782): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 5650. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725012409170476, 'next_transition': 5814}.
<a id="trace-5814"></a>
<a id="trace-5816"></a>
<a id="trace-5852"></a>
<a id="trace-5854"></a>
- 31.25s–31.75s (×4), actor 5, squad 0 (trace 5814): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5655. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3502347366086196, 'next_transition': 5852}.
<a id="trace-5883"></a>
- 32.05s–32.05s (×1), actor 0, squad 0 (trace 5883): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 5650. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.225721455791784, 'next_transition': 6327}.
<a id="trace-6327"></a>
<a id="trace-6329"></a>
- 32.25s–32.25s (×2), actor 5, squad 0 (trace 6327): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5655. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19746303088897496, 'next_transition': 6358}.
<a id="trace-6339"></a>
- 32.35s–32.35s (×1), actor 8, squad 1 (trace 6339): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 5658. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22374907485842271, 'next_transition': 6345}.
<a id="trace-6345"></a>
- 32.40s–32.40s (×1), actor 8, squad 1 (trace 6345): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 5658. Next observer evidence: {'until': 37, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.193280363297178, 'next_transition': 628}.
<a id="trace-6358"></a>
- 32.55s–32.55s (×1), actor 0, squad 0 (trace 6358): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 5650. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22752834316907988, 'next_transition': 6804}.
<a id="trace-6804"></a>
<a id="trace-6806"></a>
<a id="trace-6845"></a>
<a id="trace-6847"></a>
<a id="trace-6920"></a>
<a id="trace-6922"></a>
<a id="trace-6982"></a>
<a id="trace-6984"></a>
<a id="trace-7017"></a>
<a id="trace-7019"></a>
<a id="trace-7122"></a>
<a id="trace-7124"></a>
<a id="trace-7142"></a>
<a id="trace-7144"></a>
<a id="trace-7169"></a>
<a id="trace-7171"></a>
<a id="trace-7188"></a>
<a id="trace-7190"></a>
<a id="trace-7212"></a>
<a id="trace-7214"></a>
- 32.75s–37.25s (×20), actor 5, squad 0 (trace 6804): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5655. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.251993367514719, 'next_transition': 6845}.
<a id="trace-628"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (events line 628): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7199"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 7199): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.656268 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 7199. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599825337281465, 'next_transition': 7239}.
<a id="trace-7200"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 7200): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.656268 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 7200. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599825337281465, 'next_transition': 7239}.
<a id="trace-7224"></a>
- 37.45s–37.45s (×1), actor 1, squad 0 (trace 7224): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 7030. Next observer evidence: {'until': 37.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1800004649058882, 'next_transition': 7230}.
<a id="trace-7230"></a>
<a id="trace-7232"></a>
<a id="trace-7265"></a>
<a id="trace-7267"></a>
- 37.75s–38.25s (×4), actor 5, squad 0 (trace 7230): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 7200. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5465135454458122, 'next_transition': 7265}.
<a id="trace-7239"></a>
- 37.85s–37.85s (×1), actor 8, squad 1 (trace 7239): NeedSupport. Knowledge: actor memory at 35.00s, trace 7037. Next observer evidence: {'until': 38.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450093777841575, 'next_transition': 7275}.
<a id="trace-7275"></a>
- 38.40s–38.40s (×1), actor 8, squad 1 (trace 7275): received platoon directive; retain contact cover stage. Knowledge: actor memory at 35.00s, trace 7037. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.670056400433773, 'next_transition': 738}.
<a id="trace-7278"></a>
- 38.70s–38.70s (×1), actor 1, squad 0 (trace 7278): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 7030. Next observer evidence: None.
<a id="trace-9834"></a>
- 38.70s–38.70s (×1), actor 1, squad 0 (trace 9834): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 7030. Next observer evidence: None.
<a id="trace-9835"></a>
- 38.70s–38.70s (×1), actor 1, squad 0 (trace 9835): MoveTactically. Knowledge: actor memory at 35.00s, trace 7030. Next observer evidence: None.
<a id="trace-9836"></a>
- 38.70s–38.70s (×1), actor 1, squad 0 (trace 9836): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 7030. Next observer evidence: None.
<a id="trace-10197"></a>
<a id="trace-10199"></a>
<a id="trace-10218"></a>
<a id="trace-10220"></a>
- 38.75s–39.25s (×4), actor 5, squad 0 (trace 10197): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 7200. Next observer evidence: {'until': 39.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.2700008016012288, 'next_transition': 10218}.
<a id="trace-10239"></a>
- 39.50s–39.50s (×1), actor 1, squad 0 (trace 10239): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 7030. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05871754758057891, 'next_transition': 12024}.
<a id="trace-10240"></a>
- 39.50s–39.50s (×1), actor 1, squad 0 (trace 10240): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 35.00s, trace 7030. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05871754758057891, 'next_transition': 12024}.
<a id="trace-12024"></a>
<a id="trace-12026"></a>
<a id="trace-12129"></a>
<a id="trace-12131"></a>
<a id="trace-12151"></a>
<a id="trace-12153"></a>
<a id="trace-12174"></a>
<a id="trace-12176"></a>
<a id="trace-12205"></a>
<a id="trace-12207"></a>
- 39.75s–41.75s (×10), actor 5, squad 0 (trace 12024): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 7200. Next observer evidence: {'until': 40.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.6268116233846633, 'next_transition': 12129}.
<a id="trace-737"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 737): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-738"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 738): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12221"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 12221): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.584173 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 12221. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3324257041207213, 'next_transition': 12248}.
<a id="trace-12222"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 12222): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.584173 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 12222. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3324257041207213, 'next_transition': 12248}.
<a id="trace-12223"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 12223): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.584173 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 12223. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.204954541056346, 'next_transition': 12560}.
<a id="trace-12224"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 12224): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.584173 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 12224. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.204954541056346, 'next_transition': 12560}.
<a id="trace-12225"></a>
- 42.10s–42.10s (×1), actor 1, squad 0 (trace 12225): Fixing. Knowledge: actor memory at 40.00s, trace 12047. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3324257041207213, 'next_transition': 12248}.
<a id="trace-12226"></a>
- 42.10s–42.10s (×1), actor 8, squad 1 (trace 12226): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 40.00s, trace 12054. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.204954541056346, 'next_transition': 12560}.
<a id="trace-12248"></a>
<a id="trace-12250"></a>
<a id="trace-12261"></a>
<a id="trace-12263"></a>
<a id="trace-12285"></a>
<a id="trace-12287"></a>
<a id="trace-12693"></a>
<a id="trace-12695"></a>
<a id="trace-12725"></a>
<a id="trace-12727"></a>
- 42.25s–44.25s (×10), actor 5, squad 0 (trace 12248): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 12224. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4901500071283947, 'next_transition': 12261}.
<a id="trace-12560"></a>
- 43.40s–43.40s (×1), actor 8, squad 1 (trace 12560): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 40.00s, trace 12054. Next observer evidence: None.
<a id="trace-12561"></a>
- 43.40s–43.40s (×1), actor 8, squad 1 (trace 12561): answered caller: no covered flank; Reorganise then supported fire and movement. Knowledge: actor memory at 40.00s, trace 12054. Next observer evidence: None.
<a id="trace-12562"></a>
- 43.45s–43.45s (×1), actor 8, squad 1 (trace 12562): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 12054. Next observer evidence: None.
<a id="trace-12565"></a>
- 43.45s–43.45s (×1), actor 8, squad 1 (trace 12565): MoveTactically. Knowledge: actor memory at 40.00s, trace 12054. Next observer evidence: None.
<a id="trace-12566"></a>
- 43.45s–43.45s (×1), actor 8, squad 1 (trace 12566): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 40.00s, trace 12054. Next observer evidence: None.
<a id="trace-12635"></a>
- 43.50s–43.50s (×1), actor 8, squad 1 (trace 12635): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 40.00s, trace 12054. Next observer evidence: {'until': 49.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 7.605175699303927, 'next_transition': 13054}.
<a id="trace-779"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (events line 779): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12751"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 12751): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.582882 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 12751. Next observer evidence: None.
<a id="trace-12752"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 12752): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.582882 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 12752. Next observer evidence: None.
<a id="trace-12767"></a>
<a id="trace-12769"></a>
<a id="trace-12857"></a>
<a id="trace-12859"></a>
<a id="trace-12889"></a>
<a id="trace-12891"></a>
<a id="trace-12916"></a>
<a id="trace-12918"></a>
<a id="trace-12932"></a>
<a id="trace-12934"></a>
<a id="trace-12952"></a>
<a id="trace-12954"></a>
<a id="trace-12967"></a>
<a id="trace-12969"></a>
- 44.75s–47.75s (×14), actor 5, squad 0 (trace 12767): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.60s, trace 12752. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9342875903381104, 'next_transition': 12857}.
<a id="trace-12983"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 12983): NeedSupport. Knowledge: actor memory at 45.00s, trace 12783. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2884833466745774, 'next_transition': 13001}.
<a id="trace-13001"></a>
<a id="trace-13003"></a>
<a id="trace-13026"></a>
<a id="trace-13028"></a>
<a id="trace-13044"></a>
<a id="trace-13046"></a>
- 48.25s–49.25s (×6), actor 5, squad 0 (trace 13001): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 12787. Next observer evidence: {'until': 48.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6254261458293847, 'next_transition': 13026}.
<a id="trace-13054"></a>
- 49.35s–49.35s (×1), actor 8, squad 1 (trace 13054): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 12790. Next observer evidence: {'until': 49.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299683966686171, 'next_transition': 13932}.
<a id="trace-13055"></a>
- 49.35s–49.35s (×1), actor 8, squad 1 (trace 13055): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 12790. Next observer evidence: {'until': 49.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299683966686171, 'next_transition': 13932}.
<a id="trace-13932"></a>
- 49.40s–49.40s (×1), actor 8, squad 1 (trace 13932): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 45.00s, trace 12790. Next observer evidence: {'until': 53.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 5.152047554662344, 'next_transition': 878}.
<a id="trace-13938"></a>
- 49.45s–49.45s (×1), actor 1, squad 0 (trace 13938): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 45.00s, trace 12783. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999355813231903, 'next_transition': 13947}.
<a id="trace-13947"></a>
- 49.70s–49.70s (×1), actor 1, squad 0 (trace 13947): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 12783. Next observer evidence: None.
<a id="trace-13952"></a>
- 49.70s–49.70s (×1), actor 1, squad 0 (trace 13952): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 12783. Next observer evidence: None.
<a id="trace-13953"></a>
- 49.70s–49.70s (×1), actor 1, squad 0 (trace 13953): Reorganise complete: known contact. Knowledge: actor memory at 45.00s, trace 12783. Next observer evidence: None.
<a id="trace-14338"></a>
<a id="trace-14340"></a>
<a id="trace-14433"></a>
<a id="trace-14435"></a>
<a id="trace-14459"></a>
<a id="trace-14461"></a>
- 49.75s–50.75s (×6), actor 5, squad 0 (trace 14338): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 12787. Next observer evidence: {'until': 50.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2600036300813384, 'next_transition': 14433}.
<a id="trace-14488"></a>
- 51.05s–51.05s (×1), actor 5, squad 0 (trace 14488): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 51.05s, trace 14488. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000288345065995, 'next_transition': 14500}.
<a id="trace-14500"></a>
<a id="trace-14502"></a>
<a id="trace-14518"></a>
<a id="trace-14520"></a>
<a id="trace-14551"></a>
<a id="trace-14553"></a>
<a id="trace-14581"></a>
<a id="trace-14583"></a>
<a id="trace-14604"></a>
<a id="trace-14606"></a>
- 51.25s–53.25s (×10), actor 5, squad 0 (trace 14500): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 51.05s, trace 14488. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8373732498889958, 'next_transition': 14518}.
<a id="trace-878"></a>
- 53.35s–53.35s (×1), actor 5, squad 1 (events line 878): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14618"></a>
- 53.35s–53.35s (×1), actor 5, squad 1 (trace 14618): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.491682 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 14618. Next observer evidence: {'until': 54.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.836599999999999, 'next_transition': 14680}.
<a id="trace-14619"></a>
- 53.35s–53.35s (×1), actor 5, squad 1 (trace 14619): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.491682 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 14619. Next observer evidence: {'until': 54.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.836599999999999, 'next_transition': 14680}.
<a id="trace-14625"></a>
- 53.55s–53.55s (×1), actor 1, squad 0 (trace 14625): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 14356. Next observer evidence: {'until': 53.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3149918964835668, 'next_transition': 14629}.
<a id="trace-14629"></a>
<a id="trace-14631"></a>
<a id="trace-14656"></a>
<a id="trace-14658"></a>
<a id="trace-14670"></a>
<a id="trace-14672"></a>
<a id="trace-14926"></a>
<a id="trace-14928"></a>
<a id="trace-14943"></a>
<a id="trace-14945"></a>
<a id="trace-14977"></a>
<a id="trace-14979"></a>
<a id="trace-15007"></a>
<a id="trace-15009"></a>
<a id="trace-15037"></a>
<a id="trace-15039"></a>
<a id="trace-15063"></a>
<a id="trace-15065"></a>
<a id="trace-15210"></a>
<a id="trace-15212"></a>
<a id="trace-15240"></a>
<a id="trace-15242"></a>
<a id="trace-15284"></a>
<a id="trace-15286"></a>
<a id="trace-15334"></a>
<a id="trace-15336"></a>
- 53.75s–59.75s (×26), actor 5, squad 0 (trace 14629): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.35s, trace 14619. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9285371764846696, 'next_transition': 14656}.
<a id="trace-14680"></a>
- 54.85s–54.85s (×1), actor 8, squad 1 (trace 14680): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 14362. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.187902307880519, 'next_transition': 15087}.
<a id="trace-14681"></a>
- 54.85s–54.85s (×1), actor 8, squad 1 (trace 14681): received platoon directive. Knowledge: actor memory at 50.00s, trace 14362. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.187902307880519, 'next_transition': 15087}.
<a id="trace-15087"></a>
- 58.20s–58.20s (×1), actor 8, squad 1 (trace 15087): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 14858. Next observer evidence: {'until': 64.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.176236400182747, 'next_transition': 16354}.
<a id="trace-15088"></a>
- 58.20s–58.20s (×1), actor 8, squad 1 (trace 15088): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 14858. Next observer evidence: {'until': 64.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.176236400182747, 'next_transition': 16354}.
<a id="trace-15456"></a>
- 60.20s–60.20s (×1), actor 1, squad 0 (trace 15456): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 15364. Next observer evidence: None.
<a id="trace-15718"></a>
- 60.20s–60.20s (×1), actor 1, squad 0 (trace 15718): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 60.00s, trace 15364. Next observer evidence: None.
<a id="trace-15719"></a>
- 60.20s–60.20s (×1), actor 1, squad 0 (trace 15719): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 60.00s, trace 15364. Next observer evidence: None.
<a id="trace-16003"></a>
- 60.20s–60.20s (×1), actor 1, squad 0 (trace 16003): Assaulting. Knowledge: actor memory at 60.00s, trace 15364. Next observer evidence: None.
<a id="trace-16021"></a>
<a id="trace-16023"></a>
<a id="trace-16085"></a>
<a id="trace-16087"></a>
<a id="trace-16130"></a>
<a id="trace-16132"></a>
<a id="trace-16178"></a>
<a id="trace-16180"></a>
<a id="trace-16206"></a>
<a id="trace-16208"></a>
<a id="trace-16233"></a>
<a id="trace-16235"></a>
<a id="trace-16266"></a>
<a id="trace-16268"></a>
<a id="trace-16292"></a>
<a id="trace-16294"></a>
<a id="trace-16339"></a>
<a id="trace-16341"></a>
<a id="trace-16369"></a>
<a id="trace-16371"></a>
<a id="trace-16468"></a>
<a id="trace-16470"></a>
- 60.25s–65.25s (×22), actor 5, squad 0 (trace 16021): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 15367. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11948758560573935, 'next_transition': 16085}.
<a id="trace-16354"></a>
- 64.40s–64.40s (×1), actor 8, squad 1 (trace 16354): support established: element delivered fire on threat area. Knowledge: actor memory at 60.00s, trace 15370. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3966525730050168, 'next_transition': 16567}.
<a id="trace-16480"></a>
- 65.35s–65.35s (×1), actor 5, squad 0 (trace 16480): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 65.35s, trace 16480. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5221874822171356, 'next_transition': 16509}.
<a id="trace-16509"></a>
<a id="trace-16511"></a>
<a id="trace-16536"></a>
<a id="trace-16538"></a>
- 65.75s–66.25s (×4), actor 5, squad 0 (trace 16509): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.35s, trace 16480. Next observer evidence: {'until': 66.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6540792313592637, 'next_transition': 16536}.
<a id="trace-16545"></a>
<a id="trace-16566"></a>
- 66.25s–66.65s (×2), actor 5, squad 0 (trace 16545): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 66.25s, trace 16545. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26726823249011045, 'next_transition': 16566}.
<a id="trace-16567"></a>
- 66.65s–66.65s (×1), actor 8, squad 1 (trace 16567): NeedSupport. Knowledge: actor memory at 65.00s, trace 16388. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.1581409102505145, 'next_transition': 1171}.
<a id="trace-16581"></a>
<a id="trace-16583"></a>
- 66.75s–66.75s (×2), actor 5, squad 0 (trace 16581): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.65s, trace 16566. Next observer evidence: {'until': 69.4, 'shots': 4, 'casualties': 1, 'mean_displacement': 2.493528509513974, 'next_transition': 16733}.
<a id="trace-16733"></a>
- 69.60s–69.60s (×1), actor 1, squad 0 (trace 16733): new loss of own base of fire. Knowledge: actor memory at 65.00s, trace 16382. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36665931011091935, 'next_transition': 1170}.
<a id="trace-16734"></a>
- 69.60s–69.60s (×1), actor 1, squad 0 (trace 16734): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 16382. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36665931011091935, 'next_transition': 1170}.
<a id="trace-1170"></a>
- 70.15s–70.15s (×1), actor 6, squad 0 (events line 1170): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1171"></a>
- 70.15s–70.15s (×1), actor 6, squad 1 (events line 1171): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17069"></a>
- 70.15s–70.15s (×1), actor 6, squad 0 (trace 17069): renew committed intent (75 s lifetime). Knowledge: actor memory at 70.15s, trace 17069. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08889882185945987, 'next_transition': 17124}.
<a id="trace-17070"></a>
- 70.15s–70.15s (×1), actor 6, squad 1 (trace 17070): renew committed intent (75 s lifetime). Knowledge: actor memory at 70.15s, trace 17070. Next observer evidence: {'until': 70.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2089787446435927, 'next_transition': 17184}.
<a id="trace-17124"></a>
<a id="trace-17126"></a>
<a id="trace-17201"></a>
<a id="trace-17203"></a>
<a id="trace-17288"></a>
<a id="trace-17290"></a>
<a id="trace-17384"></a>
<a id="trace-17386"></a>
<a id="trace-17495"></a>
<a id="trace-17497"></a>
<a id="trace-17606"></a>
<a id="trace-17608"></a>
- 70.25s–75.25s (×12), actor 6, squad 0 (trace 17124): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 70.15s, trace 17070. Next observer evidence: {'until': 71.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.45435882730159544, 'next_transition': 17201}.
<a id="trace-17184"></a>
- 70.95s–70.95s (×1), actor 8, squad 1 (trace 17184): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 70.00s, trace 17056. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4756374774973064, 'next_transition': 17393}.
<a id="trace-17393"></a>
- 73.25s–73.25s (×1), actor 8, squad 1 (trace 17393): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 17056. Next observer evidence: {'until': 90, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.511654159416148, 'next_transition': 19610}.
<a id="trace-17394"></a>
- 73.25s–73.25s (×1), actor 8, squad 1 (trace 17394): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 17056. Next observer evidence: {'until': 90, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.511654159416148, 'next_transition': 19610}.
<a id="trace-17647"></a>
- 76.20s–76.20s (×1), actor 6, squad 0 (trace 17647): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 76.20s, trace 17647. Next observer evidence: None.
<a id="trace-17650"></a>
<a id="trace-17652"></a>
- 76.25s–76.25s (×2), actor 6, squad 0 (trace 17650): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 76.20s, trace 17647. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49505734841505, 'next_transition': 17670}.
<a id="trace-17670"></a>
- 76.70s–76.70s (×1), actor 1, squad 0 (trace 17670): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 75.00s, trace 17536. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9423174537114524, 'next_transition': 17683}.
<a id="trace-17683"></a>
<a id="trace-17685"></a>
- 77.25s–77.25s (×2), actor 6, squad 0 (trace 17683): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 76.20s, trace 17647. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200168003121356, 'next_transition': 17699}.
<a id="trace-17699"></a>
- 77.70s–77.70s (×1), actor 1, squad 0 (trace 17699): Reorganise: completed/failed drill. Knowledge: actor memory at 75.00s, trace 17536. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299918535628504, 'next_transition': 17913}.
<a id="trace-17702"></a>
- 77.70s–77.70s (×1), actor 1, squad 0 (trace 17702): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 17536. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299918535628504, 'next_transition': 17913}.
<a id="trace-17703"></a>
- 77.70s–77.70s (×1), actor 1, squad 0 (trace 17703): Reorganise complete: known contact. Knowledge: actor memory at 75.00s, trace 17536. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299918535628504, 'next_transition': 17913}.
<a id="trace-17913"></a>
<a id="trace-17915"></a>
- 78.25s–78.25s (×2), actor 6, squad 0 (trace 17913): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 76.20s, trace 17647. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11001355618488316, 'next_transition': 17934}.
<a id="trace-17934"></a>
- 78.70s–78.70s (×1), actor 1, squad 0 (trace 17934): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 17536. Next observer evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19967315306659397, 'next_transition': 18842}.
<a id="trace-17935"></a>
- 78.70s–78.70s (×1), actor 1, squad 0 (trace 17935): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 75.00s, trace 17536. Next observer evidence: {'until': 78.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19967315306659397, 'next_transition': 18842}.
<a id="trace-18842"></a>
- 78.95s–78.95s (×1), actor 1, squad 0 (trace 18842): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 75.00s, trace 17536. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38575445275747905, 'next_transition': 18850}.
<a id="trace-18850"></a>
<a id="trace-18949"></a>
<a id="trace-18951"></a>
<a id="trace-18985"></a>
<a id="trace-18987"></a>
- 79.25s–81.25s (×5), actor 6, squad 0 (trace 18850): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 76.20s, trace 17647. Next observer evidence: {'until': 80.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2230738682113789, 'next_transition': 18949}.
<a id="trace-1358"></a>
- 81.45s–81.45s (×1), actor 6, squad 0 (events line 1358): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18993"></a>
- 81.45s–81.45s (×1), actor 6, squad 0 (trace 18993): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.320920 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.45s, trace 18993. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7957299573745384, 'next_transition': 19019}.
<a id="trace-18994"></a>
- 81.45s–81.45s (×1), actor 6, squad 0 (trace 18994): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.320920 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.45s, trace 18994. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7957299573745384, 'next_transition': 19019}.
<a id="trace-19019"></a>
<a id="trace-19021"></a>
<a id="trace-19045"></a>
<a id="trace-19047"></a>
<a id="trace-19076"></a>
<a id="trace-19078"></a>
- 82.25s–84.25s (×6), actor 6, squad 0 (trace 19019): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 81.45s, trace 18994. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.107691133815496, 'next_transition': 19045}.
<a id="trace-19099"></a>
- 84.80s–84.80s (×1), actor 1, squad 0 (trace 19099): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 18876. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6764546676183739, 'next_transition': 19393}.
<a id="trace-19100"></a>
- 84.80s–84.80s (×1), actor 1, squad 0 (trace 19100): received platoon directive. Knowledge: actor memory at 80.00s, trace 18876. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6764546676183739, 'next_transition': 19393}.
<a id="trace-19393"></a>
<a id="trace-19395"></a>
<a id="trace-19422"></a>
<a id="trace-19424"></a>
- 85.25s–86.25s (×4), actor 6, squad 0 (trace 19393): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 85.00s, trace 19322. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0475096803560373, 'next_transition': 19422}.
<a id="trace-19444"></a>
- 86.75s–86.75s (×1), actor 1, squad 0 (trace 19444): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 85.00s, trace 19320. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8572931682044364, 'next_transition': 19505}.
<a id="trace-19445"></a>
- 86.75s–86.75s (×1), actor 1, squad 0 (trace 19445): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 19320. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8572931682044364, 'next_transition': 19505}.
<a id="trace-19505"></a>
<a id="trace-19507"></a>
<a id="trace-19537"></a>
<a id="trace-19539"></a>
<a id="trace-19568"></a>
<a id="trace-19570"></a>
<a id="trace-19713"></a>
<a id="trace-19715"></a>
<a id="trace-19741"></a>
<a id="trace-19743"></a>
<a id="trace-19768"></a>
<a id="trace-19770"></a>
<a id="trace-19792"></a>
<a id="trace-19794"></a>
<a id="trace-19818"></a>
<a id="trace-19905"></a>
<a id="trace-19926"></a>
<a id="trace-19928"></a>
<a id="trace-19953"></a>
<a id="trace-19955"></a>
- 87.25s–97.25s (×20), actor 6, squad 0 (trace 19505): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 85.00s, trace 19322. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2602812318224847, 'next_transition': 19537}.
<a id="trace-19610"></a>
- 90.10s–90.10s (×1), actor 8, squad 1 (trace 19610): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 19595. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999999930833335, 'next_transition': 20156}.
<a id="trace-19611"></a>
- 90.10s–90.10s (×1), actor 8, squad 1 (trace 19611): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 19595. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999999930833335, 'next_transition': 20156}.
<a id="trace-19972"></a>
- 98.20s–98.20s (×1), actor 1, squad 0 (trace 19972): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 19841. Next observer evidence: None.
<a id="trace-19994"></a>
- 98.20s–98.20s (×1), actor 1, squad 0 (trace 19994): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 19841. Next observer evidence: None.
<a id="trace-19999"></a>
<a id="trace-20001"></a>
<a id="trace-20025"></a>
<a id="trace-20027"></a>
<a id="trace-20108"></a>
<a id="trace-20110"></a>
<a id="trace-20134"></a>
<a id="trace-20136"></a>
<a id="trace-20212"></a>
<a id="trace-20214"></a>
<a id="trace-20246"></a>
<a id="trace-20248"></a>
<a id="trace-20278"></a>
<a id="trace-20280"></a>
<a id="trace-20365"></a>
<a id="trace-20367"></a>
<a id="trace-20387"></a>
<a id="trace-20389"></a>
<a id="trace-20408"></a>
<a id="trace-20410"></a>
<a id="trace-20431"></a>
<a id="trace-20433"></a>
<a id="trace-20454"></a>
<a id="trace-20456"></a>
<a id="trace-20537"></a>
<a id="trace-20539"></a>
- 98.25s–110.25s (×26), actor 6, squad 0 (trace 19999): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 95.00s, trace 19842. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24011499999999986, 'next_transition': 20025}.
<a id="trace-20156"></a>
- 102.10s–102.10s (×1), actor 8, squad 1 (trace 20156): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 20046. Next observer evidence: {'until': 113.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1482}.
<a id="trace-20157"></a>
- 102.10s–102.10s (×1), actor 8, squad 1 (trace 20157): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 20046. Next observer evidence: {'until': 113.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1482}.
<a id="trace-1482"></a>
- 113.50s–113.50s (×1), actor 1, squad 1 (events line 1482): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 132.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21224}.
<a id="trace-20604"></a>
- 113.50s–113.50s (×1), actor 1, squad 1 (trace 20604): renew committed intent (75 s lifetime). Knowledge: actor memory at 113.50s, trace 20604. Next observer evidence: {'until': 132.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21224}.
<a id="trace-20612"></a>
<a id="trace-20614"></a>
<a id="trace-20689"></a>
<a id="trace-20691"></a>
<a id="trace-20710"></a>
<a id="trace-20712"></a>
- 114.25s–116.25s (×6), actor 1, squad 0 (trace 20612): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 113.50s, trace 20604. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9531298215940476, 'next_transition': 20689}.
<a id="trace-1489"></a>
- 116.30s–116.30s (×1), actor 1, squad 0 (events line 1489): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1379690153954085, 'next_transition': 20735}.
<a id="trace-20719"></a>
- 116.30s–116.30s (×1), actor 1, squad 0 (trace 20719): renew committed intent (75 s lifetime). Knowledge: actor memory at 116.30s, trace 20719. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1379690153954085, 'next_transition': 20735}.
<a id="trace-20735"></a>
<a id="trace-20737"></a>
<a id="trace-20759"></a>
<a id="trace-20761"></a>
<a id="trace-20769"></a>
<a id="trace-20780"></a>
<a id="trace-20783"></a>
<a id="trace-20785"></a>
<a id="trace-20799"></a>
<a id="trace-20823"></a>
<a id="trace-20873"></a>
<a id="trace-20875"></a>
<a id="trace-20885"></a>
<a id="trace-20893"></a>
<a id="trace-20895"></a>
<a id="trace-20897"></a>
<a id="trace-20905"></a>
<a id="trace-20912"></a>
<a id="trace-20915"></a>
<a id="trace-20917"></a>
<a id="trace-20933"></a>
<a id="trace-20935"></a>
<a id="trace-20951"></a>
<a id="trace-20953"></a>
<a id="trace-21030"></a>
<a id="trace-21032"></a>
<a id="trace-21044"></a>
<a id="trace-21046"></a>
<a id="trace-21060"></a>
<a id="trace-21062"></a>
<a id="trace-21079"></a>
<a id="trace-21081"></a>
<a id="trace-21097"></a>
<a id="trace-21099"></a>
- 117.25s–129.30s (×34), actor 1, squad 0 (trace 20735): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 116.30s, trace 20719. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2111297948609783, 'next_transition': 20759}.
<a id="trace-21110"></a>
- 129.90s–129.90s (×1), actor 1, squad 0 (trace 21110): NeedSupport. Knowledge: actor memory at 125.00s, trace 20968. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8148464395209674, 'next_transition': 21176}.
<a id="trace-21176"></a>
<a id="trace-21178"></a>
<a id="trace-21194"></a>
<a id="trace-21196"></a>
<a id="trace-21215"></a>
<a id="trace-21217"></a>
<a id="trace-21251"></a>
<a id="trace-21253"></a>
<a id="trace-21269"></a>
<a id="trace-21271"></a>
<a id="trace-21345"></a>
<a id="trace-21347"></a>
<a id="trace-21362"></a>
<a id="trace-21364"></a>
<a id="trace-21378"></a>
<a id="trace-21380"></a>
<a id="trace-21399"></a>
<a id="trace-21401"></a>
<a id="trace-21426"></a>
<a id="trace-21428"></a>
<a id="trace-21506"></a>
<a id="trace-21508"></a>
<a id="trace-21527"></a>
<a id="trace-21529"></a>
<a id="trace-21544"></a>
<a id="trace-21546"></a>
<a id="trace-21555"></a>
<a id="trace-21565"></a>
<a id="trace-21569"></a>
<a id="trace-21571"></a>
<a id="trace-21581"></a>
<a id="trace-21590"></a>
<a id="trace-21596"></a>
<a id="trace-21598"></a>
<a id="trace-21608"></a>
<a id="trace-21630"></a>
<a id="trace-21681"></a>
<a id="trace-21683"></a>
<a id="trace-21692"></a>
<a id="trace-21705"></a>
- 130.30s–146.05s (×40), actor 1, squad 0 (trace 21176): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.00s, trace 21115. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.050429022643799, 'next_transition': 21194}.
<a id="trace-21224"></a>
- 132.40s–132.40s (×1), actor 8, squad 1 (trace 21224): NeedSupport. Knowledge: actor memory at 130.00s, trace 21116. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21826}.
<a id="trace-1577"></a>
- 149.30s–149.30s (×1), actor 8, squad 0 (events line 1577): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0, 'next_transition': None}.
<a id="trace-21758"></a>
- 149.30s–149.30s (×1), actor 8, squad 0 (trace 21758): renew committed intent (75 s lifetime). Knowledge: actor memory at 149.30s, trace 21758. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0, 'next_transition': None}.
<a id="trace-21826"></a>
<a id="trace-21844"></a>
- 150.30s–151.30s (×2), actor 8, squad 1 (trace 21826): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 150.00s, trace 21765. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21844}.
<a id="trace-1582"></a>
- 152.10s–152.10s (×1), actor 8, squad 1 (events line 1582): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21857"></a>
- 152.10s–152.10s (×1), actor 8, squad 1 (trace 21857): renew committed intent (75 s lifetime). Knowledge: actor memory at 152.10s, trace 21857. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21861}.
<a id="trace-21861"></a>
<a id="trace-21884"></a>
<a id="trace-21900"></a>
<a id="trace-21972"></a>
<a id="trace-21985"></a>
<a id="trace-21998"></a>
<a id="trace-22017"></a>
<a id="trace-22042"></a>
<a id="trace-22114"></a>
<a id="trace-22130"></a>
<a id="trace-22144"></a>
<a id="trace-22155"></a>
<a id="trace-22173"></a>
<a id="trace-22250"></a>
<a id="trace-22272"></a>
- 152.30s–166.30s (×15), actor 8, squad 1 (trace 21861): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 152.10s, trace 21857. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21884}.
<a id="trace-22281"></a>
- 166.80s–166.80s (×1), actor 8, squad 1 (trace 22281): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 165.00s, trace 22186. Next observer evidence: None.
<a id="trace-22285"></a>
- 166.85s–166.85s (×1), actor 8, squad 1 (trace 22285): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 165.00s, trace 22186. Next observer evidence: None.
<a id="trace-22286"></a>
- 166.85s–166.85s (×1), actor 8, squad 1 (trace 22286): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 165.00s, trace 22186. Next observer evidence: None.
<a id="trace-23026"></a>
- 166.90s–166.90s (×1), actor 8, squad 1 (trace 23026): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 165.00s, trace 22186. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23033}.
<a id="trace-23033"></a>
<a id="trace-23074"></a>
<a id="trace-23115"></a>
<a id="trace-23187"></a>
<a id="trace-23205"></a>
- 167.30s–171.30s (×5), actor 8, squad 1 (trace 23033): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 165.00s, trace 22186. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9071846904021246, 'next_transition': 23074}.
<a id="trace-1647"></a>
- 171.80s–171.80s (×1), actor 8, squad 1 (events line 1647): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361686476584934, 'next_transition': 23232}.
<a id="trace-23219"></a>
- 171.80s–171.80s (×1), actor 8, squad 1 (trace 23219): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.286998 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.80s, trace 23219. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361686476584934, 'next_transition': 23232}.
<a id="trace-23220"></a>
- 171.80s–171.80s (×1), actor 8, squad 1 (trace 23220): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.286998 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 171.80s, trace 23220. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361686476584934, 'next_transition': 23232}.
<a id="trace-23232"></a>
<a id="trace-23251"></a>
- 172.30s–173.30s (×2), actor 8, squad 1 (trace 23232): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 171.80s, trace 23220. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339833684847427, 'next_transition': 23251}.
<a id="trace-23260"></a>
- 173.70s–173.70s (×1), actor 8, squad 1 (trace 23260): Withdraw to received rally. Knowledge: actor memory at 171.80s, trace 23220. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39692945531920426, 'next_transition': 23328}.
<a id="trace-23261"></a>
- 173.70s–173.70s (×1), actor 8, squad 1 (trace 23261): rearward bound: one stationary suppressing element. Knowledge: actor memory at 171.80s, trace 23220. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39692945531920426, 'next_transition': 23328}.
<a id="trace-23328"></a>
<a id="trace-23415"></a>
<a id="trace-23445"></a>
<a id="trace-23465"></a>
<a id="trace-23483"></a>
<a id="trace-23507"></a>
<a id="trace-23587"></a>
<a id="trace-23606"></a>
<a id="trace-23625"></a>
<a id="trace-23644"></a>
<a id="trace-23669"></a>
<a id="trace-23751"></a>
- 174.30s–185.30s (×12), actor 8, squad 1 (trace 23328): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 171.80s, trace 23220. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.992286758047734, 'next_transition': 23415}.
<a id="trace-23766"></a>
- 185.50s–185.50s (×1), actor 8, squad 1 (trace 23766): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 185.00s, trace 23689. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17007718835869723, 'next_transition': 23835}.
<a id="trace-23767"></a>
- 185.50s–185.50s (×1), actor 8, squad 1 (trace 23767): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 185.00s, trace 23689. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17007718835869723, 'next_transition': 23835}.
<a id="trace-23835"></a>
<a id="trace-23857"></a>
<a id="trace-23879"></a>
<a id="trace-23895"></a>
<a id="trace-23975"></a>
<a id="trace-23997"></a>
<a id="trace-24022"></a>
<a id="trace-24038"></a>
<a id="trace-24053"></a>
<a id="trace-24130"></a>
<a id="trace-24148"></a>
<a id="trace-24165"></a>
<a id="trace-24186"></a>
<a id="trace-24214"></a>
<a id="trace-24292"></a>
- 186.30s–200.30s (×15), actor 8, squad 1 (trace 23835): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 185.00s, trace 23689. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.329096556757408, 'next_transition': 23857}.
<a id="trace-24301"></a>
- 200.50s–200.50s (×1), actor 8, squad 1 (trace 24301): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 200.00s, trace 24231. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24369}.
<a id="trace-24302"></a>
- 200.50s–200.50s (×1), actor 8, squad 1 (trace 24302): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 200.00s, trace 24231. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24369}.
<a id="trace-24369"></a>
<a id="trace-24387"></a>
<a id="trace-24409"></a>
<a id="trace-24429"></a>
<a id="trace-24515"></a>
<a id="trace-24534"></a>
<a id="trace-24551"></a>
<a id="trace-24576"></a>
- 201.30s–208.30s (×8), actor 8, squad 1 (trace 24369): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 200.00s, trace 24231. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237255320641336, 'next_transition': 24387}.
<a id="trace-24591"></a>
- 208.90s–208.90s (×1), actor 8, squad 1 (trace 24591): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 205.00s, trace 24448. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24647}.
<a id="trace-24592"></a>
- 208.90s–208.90s (×1), actor 8, squad 1 (trace 24592): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 205.00s, trace 24448. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24647}.
<a id="trace-24647"></a>
<a id="trace-24731"></a>
<a id="trace-24761"></a>
<a id="trace-24787"></a>
<a id="trace-24809"></a>
<a id="trace-24835"></a>
<a id="trace-24912"></a>
<a id="trace-24930"></a>
- 209.30s–216.30s (×8), actor 8, squad 1 (trace 24647): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 205.00s, trace 24448. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8504847206152495, 'next_transition': 24731}.
<a id="trace-24948"></a>
- 217.15s–217.15s (×1), actor 8, squad 1 (trace 24948): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 215.00s, trace 24852. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22682157084369023, 'next_transition': 24953}.
<a id="trace-24953"></a>
<a id="trace-24983"></a>
<a id="trace-25021"></a>
<a id="trace-25100"></a>
- 217.30s–220.30s (×4), actor 8, squad 1 (trace 24953): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 215.00s, trace 24852. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24983}.
<a id="trace-1844"></a>
- 220.60s–220.60s (×1), actor 8, squad 1 (events line 1844): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25109"></a>
- 220.60s–220.60s (×1), actor 8, squad 1 (trace 25109): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.474395 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 220.60s, trace 25109. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25126}.
<a id="trace-25110"></a>
- 220.60s–220.60s (×1), actor 8, squad 1 (trace 25110): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.474395 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 220.60s, trace 25110. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25126}.
<a id="trace-25126"></a>
<a id="trace-25137"></a>
- 221.30s–222.30s (×2), actor 8, squad 1 (trace 25126): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 220.60s, trace 25110. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25137}.
<a id="trace-25144"></a>
- 222.50s–222.50s (×1), actor 8, squad 1 (trace 25144): MoveTactically. Knowledge: actor memory at 220.60s, trace 25110. Next observer evidence: None.
<a id="trace-25145"></a>
- 222.50s–222.50s (×1), actor 8, squad 1 (trace 25145): traveling overwatch. Knowledge: actor memory at 220.60s, trace 25110. Next observer evidence: None.
<a id="trace-25146"></a>
- 222.50s–222.50s (×1), actor 8, squad 1 (trace 25146): received platoon directive. Knowledge: actor memory at 220.60s, trace 25110. Next observer evidence: None.
<a id="trace-25152"></a>
- 222.55s–222.55s (×1), actor 8, squad 1 (trace 25152): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 220.60s, trace 25110. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339770720786177, 'next_transition': 25222}.
<a id="trace-25222"></a>
<a id="trace-25251"></a>
<a id="trace-25347"></a>
<a id="trace-25371"></a>
<a id="trace-25390"></a>
<a id="trace-25414"></a>
<a id="trace-25429"></a>
<a id="trace-25504"></a>
<a id="trace-25526"></a>
<a id="trace-25552"></a>
<a id="trace-25572"></a>
<a id="trace-25676"></a>
<a id="trace-25691"></a>
<a id="trace-25711"></a>
<a id="trace-25738"></a>
<a id="trace-25761"></a>
<a id="trace-25838"></a>
<a id="trace-25865"></a>
- 223.30s–241.30s (×18), actor 8, squad 1 (trace 25222): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 220.60s, trace 25110. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.133983074168217, 'next_transition': 25251}.
<a id="trace-25882"></a>
- 241.90s–241.90s (×1), actor 8, squad 1 (trace 25882): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 240.00s, trace 25774. Next observer evidence: None.
<a id="trace-25886"></a>
- 241.95s–241.95s (×1), actor 8, squad 1 (trace 25886): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 240.00s, trace 25774. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25942}.
<a id="trace-25942"></a>
<a id="trace-25965"></a>
<a id="trace-25993"></a>
<a id="trace-26076"></a>
<a id="trace-26097"></a>
<a id="trace-26140"></a>
<a id="trace-26161"></a>
<a id="trace-26239"></a>
<a id="trace-26261"></a>
<a id="trace-26288"></a>
<a id="trace-26306"></a>
<a id="trace-26403"></a>
<a id="trace-26426"></a>
- 242.30s–256.30s (×13), actor 8, squad 1 (trace 25942): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 240.00s, trace 25774. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3148249672437084, 'next_transition': 25965}.
<a id="trace-26442"></a>
- 256.95s–256.95s (×1), actor 8, squad 1 (trace 26442): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 255.00s, trace 26340. Next observer evidence: {'until': 257, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26445}.
<a id="trace-26445"></a>
- 257.00s–257.00s (×1), actor 8, squad 1 (trace 26445): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 255.00s, trace 26340. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26502}.
<a id="trace-26502"></a>
<a id="trace-26533"></a>
<a id="trace-26562"></a>
<a id="trace-26641"></a>
<a id="trace-26662"></a>
<a id="trace-26682"></a>
<a id="trace-26707"></a>
<a id="trace-26729"></a>
<a id="trace-26810"></a>
<a id="trace-26828"></a>
<a id="trace-26850"></a>
<a id="trace-26867"></a>
<a id="trace-26886"></a>
<a id="trace-26992"></a>
<a id="trace-27010"></a>
<a id="trace-27029"></a>
<a id="trace-27049"></a>
<a id="trace-27122"></a>
<a id="trace-27142"></a>
- 257.30s–276.30s (×19), actor 8, squad 1 (trace 26502): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 255.00s, trace 26340. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9709060055350838, 'next_transition': 26533}.
<a id="trace-27153"></a>
- 276.70s–276.70s (×1), actor 8, squad 1 (trace 27153): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 275.00s, trace 27063. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27274}.
<a id="trace-27274"></a>
<a id="trace-27297"></a>
<a id="trace-27324"></a>
<a id="trace-27401"></a>
<a id="trace-27420"></a>
- 277.30s–281.30s (×5), actor 8, squad 1 (trace 27274): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 275.00s, trace 27063. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0772976177106308, 'next_transition': 27297}.
<a id="trace-27428"></a>
- 281.35s–281.35s (×1), actor 8, squad 1 (trace 27428): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 280.00s, trace 27337. Next observer evidence: {'until': 282.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27487}.
<a id="trace-27487"></a>
- 282.30s–282.30s (×1), actor 8, squad 1 (trace 27487): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 280.00s, trace 27337. Next observer evidence: None.
<a id="trace-2098"></a>
- 282.35s–282.35s (×1), actor 8, squad 1 (events line 2098): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27494"></a>
- 282.35s–282.35s (×1), actor 8, squad 1 (trace 27494): renew committed intent (75 s lifetime). Knowledge: actor memory at 282.35s, trace 27494. Next observer evidence: {'until': 283.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2599893412247585, 'next_transition': 27510}.
<a id="trace-27510"></a>
<a id="trace-27625"></a>
<a id="trace-27644"></a>
<a id="trace-27664"></a>
<a id="trace-27679"></a>
<a id="trace-27697"></a>
<a id="trace-27774"></a>
<a id="trace-27809"></a>
<a id="trace-27831"></a>
<a id="trace-27848"></a>
<a id="trace-27870"></a>
- 283.30s–294.30s (×11), actor 8, squad 1 (trace 27510): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=8. Knowledge: actor memory at 282.35s, trace 27494. Next observer evidence: {'until': 285.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.150009108716988, 'next_transition': 27625}.
<a id="trace-27989"></a>
- 297.40s–297.40s (×1), actor 9, squad 1 (trace 27989): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 295.00s, trace 27887. Next observer evidence: {'until': 297.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27993}.
<a id="trace-27993"></a>
- 297.45s–297.45s (×1), actor 9, squad 1 (trace 27993): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 295.00s, trace 27887. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28016}.
<a id="trace-28016"></a>
<a id="trace-28036"></a>
- 298.30s–299.30s (×2), actor 9, squad 1 (trace 28016): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 295.00s, trace 27887. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28036}.
<a id="trace-2180"></a>
- 299.85s–299.85s (×1), actor 9, squad 1 (events line 2180): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28049"></a>
- 299.85s–299.85s (×1), actor 9, squad 1 (trace 28049): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 299.85s, trace 28049. Next observer evidence: {'until': 300.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28110}.
<a id="trace-28050"></a>
- 299.85s–299.85s (×1), actor 9, squad 1 (trace 28050): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 299.85s, trace 28050. Next observer evidence: {'until': 300.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28110}.
<a id="trace-28110"></a>
<a id="trace-28125"></a>
- 300.30s–301.30s (×2), actor 9, squad 1 (trace 28110): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 300.00s, trace 28052. Next observer evidence: {'until': 301.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28125}.
<a id="trace-28132"></a>
- 301.50s–301.50s (×1), actor 9, squad 1 (trace 28132): received platoon directive. Knowledge: actor memory at 300.00s, trace 28052. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28140}.
<a id="trace-28140"></a>
<a id="trace-28158"></a>
<a id="trace-28183"></a>
<a id="trace-28255"></a>
<a id="trace-28282"></a>
<a id="trace-28296"></a>
<a id="trace-28313"></a>
<a id="trace-28388"></a>
<a id="trace-28407"></a>
<a id="trace-28422"></a>
<a id="trace-28439"></a>
<a id="trace-28455"></a>
<a id="trace-28524"></a>
<a id="trace-28551"></a>
<a id="trace-28567"></a>
<a id="trace-28591"></a>
<a id="trace-28605"></a>
<a id="trace-28677"></a>
<a id="trace-28695"></a>
<a id="trace-28709"></a>
<a id="trace-28733"></a>
<a id="trace-28757"></a>
<a id="trace-28828"></a>
<a id="trace-28842"></a>
<a id="trace-28871"></a>
<a id="trace-28891"></a>
<a id="trace-28973"></a>
<a id="trace-28995"></a>
<a id="trace-29008"></a>
<a id="trace-29023"></a>
<a id="trace-29038"></a>
<a id="trace-29113"></a>
<a id="trace-29135"></a>
<a id="trace-29160"></a>
<a id="trace-29177"></a>
<a id="trace-29191"></a>
<a id="trace-29261"></a>
<a id="trace-29279"></a>
<a id="trace-29298"></a>
<a id="trace-29319"></a>
<a id="trace-29344"></a>
<a id="trace-29417"></a>
<a id="trace-29432"></a>
<a id="trace-29446"></a>
<a id="trace-29461"></a>
<a id="trace-29486"></a>
<a id="trace-29560"></a>
<a id="trace-29587"></a>
<a id="trace-29600"></a>
<a id="trace-29614"></a>
<a id="trace-29631"></a>
<a id="trace-29704"></a>
<a id="trace-29731"></a>
<a id="trace-29754"></a>
<a id="trace-29786"></a>
- 302.30s–359.30s (×55), actor 9, squad 1 (trace 28140): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 300.00s, trace 28052. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28158}.

## Net delivery

221 matched order/radio deliveries; 497 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.469s; maximum 2.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1879: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1888: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2993: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2994: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2995: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 2996: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3064: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3065: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3067: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3069: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3070: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3071: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3072: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3074: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3075: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3076: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3077: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3078: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3897: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3902: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3903: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3905: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3907: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3908: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3909: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3910: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3912: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3913: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3914: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3915: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3916: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 5628: estimate 10.02; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 5629: estimate 10.02; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5650: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5651: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5655: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5656: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 5658: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5659: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5660: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5661: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5662: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5663: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5664: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5665: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5666: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5667: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5668: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5669: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7030: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7034: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7035: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 7037: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7038: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7039: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7040: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7041: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7042: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7043: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7044: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7045: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7046: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7047: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7048: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 7199: estimate 12.19; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 7200: estimate 12.19; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 12047: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 12048: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 12049: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 12050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 12051: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 12052: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 12053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 12054: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 12055: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 12056: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 12057: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 12058: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 12059: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 12060: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 12061: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 12062: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 12063: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 12064: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 12065: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 12221: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 12222: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 12223: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 12224: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 12751: estimate 12.01; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 12752: estimate 12.01; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 12783: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 12784: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 12785: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 12786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 12787: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 12788: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 12789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 12790: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 12791: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 12792: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 12793: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 12794: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 12795: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 12796: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 12797: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 12798: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 12799: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 12800: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 12801: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 14356: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 14357: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 14358: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 14359: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 14360: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 14361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 14362: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 14363: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 14364: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 14365: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 14366: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 14367: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 14368: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 14369: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 14370: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 14371: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 14372: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 14373: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 51.05s leader 5, trace 14488: estimate 12.17; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 14618: estimate 12.20; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 14619: estimate 12.20; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 14852: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 14853: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 14854: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 14855: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 14856: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 14857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 14858: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 14859: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 14860: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 14861: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 14862: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 14863: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 14864: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 14865: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 14866: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 14867: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 14868: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 14869: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 15364: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 15365: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 15366: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 15367: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 15368: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 15369: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 15370: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 15371: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 15372: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 15373: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 15374: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 15375: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 15376: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 15377: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 15378: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 15379: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 15380: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 15381: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 16382: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 16383: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 16384: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 16385: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 16386: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 16387: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 16388: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 16389: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 16390: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 16391: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 16392: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 16393: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 16394: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 16395: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 16396: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 16397: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 16398: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 16399: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.35s leader 5, trace 16480: estimate 12.03; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.25s leader 5, trace 16545: estimate 12.00; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.65s leader 5, trace 16566: estimate 12.07; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 17051: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 17052: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 17053: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 17054: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 17055: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 17056: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 17057: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 17058: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 17059: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 17060: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 17061: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 17062: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 17063: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 17064: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 17065: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 17066: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 17067: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.15s leader 6, trace 17069: estimate 12.03; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.15s leader 6, trace 17070: estimate 12.03; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 17536: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 17537: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 17538: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 17539: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 17540: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 17541: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 17542: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 17543: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 17544: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 17545: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 17546: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 17547: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 17548: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 17549: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 17550: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 17551: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 76.20s leader 6, trace 17647: estimate 12.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 18876: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 18877: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 18878: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 18879: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 18880: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 18881: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 18882: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 18883: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 18884: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 18885: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 18886: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 18887: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 18888: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 18889: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 18890: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.45s leader 6, trace 18993: estimate 12.46; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.45s leader 6, trace 18994: estimate 12.46; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 19320: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 19321: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 19322: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 19323: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 19324: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 19325: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 19326: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 19327: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 19328: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 19329: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 19330: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 19331: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 19332: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 19333: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 19334: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 19593: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 19594: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 19595: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 19596: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 19597: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 19598: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 19599: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 19600: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 19601: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 19602: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 19603: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 19604: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 19605: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 19606: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 19841: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 19842: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 19843: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 19844: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 19845: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 19846: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 19847: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 19848: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 19849: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 19850: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 19851: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 19852: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 19853: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 19854: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 20044: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 20045: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 20046: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 20047: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 20048: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 20049: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 20050: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 20051: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 20052: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 20053: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 20054: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 20055: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 20056: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 20057: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 20302: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 20303: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 20304: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 20305: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 20306: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 20307: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 20308: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 20309: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 20310: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 20311: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 20312: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 20313: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 20314: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 20315: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 20474: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 20475: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 20476: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 20477: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 20478: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 20479: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 20480: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 20481: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 20482: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 20483: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 20484: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 20485: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 20486: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 20487: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 113.50s leader 1, trace 20604: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 20629: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 20630: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 20631: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 20632: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 20633: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 20634: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 20635: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 20636: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 20637: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 20638: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 20639: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 20640: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 20641: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 116.30s leader 1, trace 20719: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 20807: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 20808: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 20809: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 20810: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 20811: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 20812: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 20813: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 20814: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 20815: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 20816: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 20817: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 20818: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 20819: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 20968: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 20969: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 20970: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 20971: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 20972: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 20973: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 20974: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 20975: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 20976: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 20977: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 20978: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 20979: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 20980: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 21115: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 21116: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 21117: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 21118: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 21119: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 21120: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 21121: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 21122: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 21123: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 21124: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 21125: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 21126: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 21127: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 21284: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 21285: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 21286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 21287: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 21288: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 21289: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 21290: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 21291: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 21292: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 21293: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 21294: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 21295: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 21296: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 21445: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 21446: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 21447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 21448: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 21449: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 21450: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 21451: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 21452: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 21453: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 21454: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 21455: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 21456: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 21457: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 21614: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 21615: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 21616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 21617: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 21618: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 21619: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 21620: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 21621: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 21622: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 21623: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 21624: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 21625: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 21626: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 149.30s leader 8, trace 21758: estimate 10.08; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 21765: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 21766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 21767: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 21768: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 21769: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 21770: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 21771: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 21772: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 21773: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 21774: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 21775: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 21776: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 152.10s leader 8, trace 21857: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 21911: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 21912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 21913: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 21914: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 21915: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 21916: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 21917: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 21918: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 21919: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 21920: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 21921: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 21922: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 22053: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 22054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 22055: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 22056: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 22057: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 22058: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 22059: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 22060: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 22061: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 22062: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 22063: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 22064: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 22186: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 22187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 22188: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 22189: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 22190: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 22191: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 22192: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 22193: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 22194: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 22195: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 22196: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 22197: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 23127: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 23128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 23129: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 23130: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 23131: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 23132: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 23133: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 23134: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 23135: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 23136: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 23137: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 23138: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.80s leader 8, trace 23219: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.80s leader 8, trace 23220: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 23356: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 23357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 23358: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 23359: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 23360: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 23361: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 23362: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 23363: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 23364: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 23365: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 23366: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 23367: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 23525: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 23526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 23527: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 23528: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 23529: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 23530: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 23531: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 23532: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 23533: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 23534: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 23535: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 23536: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 23689: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 23690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 23691: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 23692: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 23693: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 23694: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 23695: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 23696: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 23697: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 23698: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 23699: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 23700: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 23912: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 23913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 23914: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 23915: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 23916: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 23917: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 23918: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 23919: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 23920: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 23921: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 23922: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 23923: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 24069: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 24070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 24071: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 24072: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 24073: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 24074: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 24075: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 24076: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 24077: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 24078: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 24079: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 24080: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 24231: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 24232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 24233: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 24234: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 24235: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 24236: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 24237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 24238: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 24239: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 24240: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 24241: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 24242: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 24448: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 24449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 24450: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 24451: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 24452: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 24453: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 24454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 24455: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 24456: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 24457: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 24458: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 24459: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 24664: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 24665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 24666: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 24667: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 24668: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 24669: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 24670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 24671: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 24672: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 24673: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 24674: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 24675: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 24852: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 24853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 24854: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24855: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 24856: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 24857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 24858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 24859: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24860: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 24861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 24862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 25039: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 25040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 25041: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 25042: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 25043: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 25044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 25045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 25046: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 25047: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 25048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 25049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 25050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.60s leader 8, trace 25109: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.60s leader 8, trace 25110: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 25279: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 25280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 25281: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 25282: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 25283: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 25284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 25285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 25286: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 25287: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 25288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 25289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 25290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 25440: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 25441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 25442: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 25443: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 25444: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 25445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 25446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 25447: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 25448: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 25449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 25450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 25451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 25612: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 25613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 25614: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 25615: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 25616: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 25617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 25618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 25619: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 25620: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 25621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 25622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 25623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 25774: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 25775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 25776: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 25777: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 25778: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 25779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 25780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 25781: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 25782: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 25783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 25784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 25785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 26015: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 26016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 26017: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 26018: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 26019: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 26020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 26021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 26022: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 26023: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 26024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 26025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 26026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 26178: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 26179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 26180: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 26181: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 26182: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 26183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 26184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 26185: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 26186: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 26187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 26188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 26189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 8, trace 26340: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 26341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 26342: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 26343: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 26344: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 26345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 26346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 26347: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 26348: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 26349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 26350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 26351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 8, trace 26582: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 26583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 26584: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 26585: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 26586: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 26587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 26588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 26589: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 26590: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 26591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 26592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 26593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 8, trace 26749: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 26750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 26751: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 26752: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 26753: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 26754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 26755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 26756: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 26757: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 26758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 26759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 26760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 8, trace 26904: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 26905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 26906: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 26907: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 26908: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 26909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 26910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 26911: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 26912: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 26913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 26914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 26915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 8, trace 27063: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 27064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 27065: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 27066: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 27067: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 27068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 27069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 27070: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 27071: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 27072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 27073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 27074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 8, trace 27337: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 27338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 27339: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 27340: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 27341: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 27342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 27343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 27344: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 27345: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 27346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 27347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 27348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 282.35s leader 8, trace 27494: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 8, trace 27562: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 27563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 27564: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 27565: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 27566: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 27567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 27568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 27569: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 27570: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 27571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 27572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 27573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 8, trace 27714: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 27715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 27716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 27717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 27718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 27719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 27720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 27721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 27722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 27723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 27724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 27725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 27887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 27888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 27889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 27890: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 27891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 27892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 27893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 27894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 27895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 27896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 27897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 299.85s leader 9, trace 28049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 299.85s leader 9, trace 28050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 28052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 28053: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28054: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 28055: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 28056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 28057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 28058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 28059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 28060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 28061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 28196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 28197: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 28198: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 28199: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 28200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 28201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 28202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 28203: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 28204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 28205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 28206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 28327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 28328: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 28329: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 28330: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 28331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 28332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 28333: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 28334: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 28335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 28336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 28337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 28466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 28467: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 28468: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 28469: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 28470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 28471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 28472: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 28473: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 28474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 28475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 28476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 28619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 28620: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 28621: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 28622: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 28623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 28624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 28625: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 28626: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 28627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 28628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 28629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 28770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 28771: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 28772: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 28773: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 28774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 28775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 28776: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 28777: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 28778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 28779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 28780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 28912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 28913: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 28914: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 28915: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 28916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 28917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 28918: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 28919: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 28920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 28921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 28922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 29055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 29056: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 29057: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 29058: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 29059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 29060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 29061: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 29062: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 29063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 29064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 29065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 29203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 29204: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 29205: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 29206: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 29207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 29208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 29209: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 29210: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 29211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 29212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 29213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 29359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 29360: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 29361: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 29362: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 29363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 29364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 29365: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 29366: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 29367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 29368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 29369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 29501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 29502: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 29503: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 29504: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 29505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 29506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 29507: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 29508: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 29509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 29510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 29511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 29644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 29645: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 29646: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 29647: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 29648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 29649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 29650: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 29651: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 29652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 29653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 29654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 29797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 29798: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 29799: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 29800: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 29801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 29802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 29803: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 29804: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 29805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 29806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 29807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Soren killed in action
- 1: Iven incapacitated
- 1: Tern killed in action
- 1: Reed incapacitated
- 1: Ash killed in action
- 1: Moss incapacitated
- 1: Rook killed in action
- 1: Bren killed in action

## Outcome attribution

- 171.80s, evidence 1647: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361686476584934, 'next_transition': 23232}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.80s, evidence 23219: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.286998 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361686476584934, 'next_transition': 23232}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.80s, evidence 23220: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.286998 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45361686476584934, 'next_transition': 23232}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
