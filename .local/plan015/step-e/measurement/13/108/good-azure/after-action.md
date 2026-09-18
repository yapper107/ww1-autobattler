# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/13/108/good-azure/battle-108-1789673919086987134`

## Battle summary

**Ember** · 360 s · 926 shots.

### Turning points

- 25.6s, squad 4: contact (events line 297). First recorded contact.
- 64.8s, squad 1: help call ([trace 17641](#trace-17641)). 66.5s, squad 0: answered a neighbour with support by fire.
- 66.5s, squad 0: help answer ([trace 17849](#trace-17849)). 74.7s, squad 0: prepared a base of fire.
- 75.9s, squad 1: assault ([trace 25170](#trace-25170)). 100.0s, squad 1: effective fire without superiority for 15 s after expected support.
- 76.0s, squad 0: help call ([trace 25289](#trace-25289)). No completion observed before termination.
- 83.1s, squad 0: withdrawal ([trace 26342](#trace-26342)). 116.1s, squad 0: took cover and returned fire.
- 91.7s, squad 0: help call ([trace 27270](#trace-27270)). 149.7s, squad 1: answered a neighbour with support by fire.
- 119.6s, squad 0: withdrawal ([trace 28673](#trace-28673)). 155.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 149.7s, squad 1: help answer ([trace 29715](#trace-29715)). 156.6s, squad 1: Withdraw to received rally.
- 156.6s, squad 1: withdrawal ([trace 29951](#trace-29951)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 4 further drill types; withdrew; 103 shots, 8/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 5 further drill types; withdrew; 64 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 528 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 231 shots, 0/4 lost.

### Decisions and attribution

At 77.8s, squad 1 chose FightHere: nearest known group ([trace 26030](#trace-26030)), followed by 10 shots and 0 own casualties; estimate 15.1 against 9 distinct squad-reported contacts; At 53.2s, squad 1 chose prepared a base of fire ([trace 13785](#trace-13785)), followed by 5 shots and 0 own casualties; estimate 15.4 against 0 distinct squad-reported contacts; At 53.2s, squad 1 chose advanced tactically ([trace 15909](#trace-15909)), followed by 5 shots and 0 own casualties; estimate 15.4 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 828](#trace-828)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150084276405323, 'next_transition': 847}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 830](#trace-830)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0260459405976565, 'next_transition': 1005}.

### Communication

213 matched deliveries (mean 0.47s, max 2.00s); 260 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.65s, squad 4, contact, evidence events line 297: First recorded contact; .
- 64.75s, squad 1, help call, evidence 17641: NeedSupport; 66.5s, squad 0: answered a neighbour with support by fire.
- 66.50s, squad 0, help answer, evidence 17849: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 74.7s, squad 0: prepared a base of fire.
- 75.90s, squad 1, assault, evidence 25170: radio opportunity: covered route from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map; 100.0s, squad 1: effective fire without superiority for 15 s after expected support.
- 75.95s, squad 0, help call, evidence 25289: NeedSupport; No completion observed before termination.
- 83.10s, squad 0, withdrawal, evidence 26342: BreakContact: believed ratio at least two without superiority; 116.1s, squad 0: took cover and returned fire.
- 91.70s, squad 0, help call, evidence 27270: NeedSupport; 149.7s, squad 1: answered a neighbour with support by fire.
- 119.60s, squad 0, withdrawal, evidence 28673: BreakContact: believed ratio at least two without superiority; 155.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 149.65s, squad 1, help answer, evidence 29715: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 156.6s, squad 1: Withdraw to received rally.
- 156.55s, squad 1, withdrawal, evidence 29951: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577999853779547, 'next_transition': 702}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577999853779547, 'next_transition': 702}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577999853779547, 'next_transition': 702}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544314408416074, 'next_transition': 103}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544314408416074, 'next_transition': 103}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544314408416074, 'next_transition': 103}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-728"></a>
<a id="trace-730"></a>
<a id="trace-765"></a>
<a id="trace-767"></a>
<a id="trace-792"></a>
<a id="trace-794"></a>
<a id="trace-816"></a>
<a id="trace-818"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2300051604607332, 'next_transition': 728}.
<a id="trace-102"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 102): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150084276405323, 'next_transition': 847}.
<a id="trace-103"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 103): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0260459405976565, 'next_transition': 1005}.
<a id="trace-828"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 828): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 828. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150084276405323, 'next_transition': 847}.
<a id="trace-829"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 829): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 829. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150084276405323, 'next_transition': 847}.
<a id="trace-830"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 830): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 830. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0260459405976565, 'next_transition': 1005}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0260459405976565, 'next_transition': 1005}.
<a id="trace-847"></a>
<a id="trace-849"></a>
<a id="trace-878"></a>
<a id="trace-880"></a>
<a id="trace-961"></a>
<a id="trace-963"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 847): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150034205820509, 'next_transition': 878}.
<a id="trace-994"></a>
<a id="trace-996"></a>
<a id="trace-1551"></a>
<a id="trace-1553"></a>
<a id="trace-1604"></a>
<a id="trace-1606"></a>
<a id="trace-1646"></a>
<a id="trace-1648"></a>
<a id="trace-1695"></a>
<a id="trace-1697"></a>
<a id="trace-1735"></a>
<a id="trace-1737"></a>
<a id="trace-1795"></a>
<a id="trace-1797"></a>
<a id="trace-1822"></a>
<a id="trace-1824"></a>
<a id="trace-1943"></a>
<a id="trace-1945"></a>
<a id="trace-1973"></a>
<a id="trace-1975"></a>
<a id="trace-1999"></a>
<a id="trace-2001"></a>
<a id="trace-2034"></a>
<a id="trace-2036"></a>
<a id="trace-2063"></a>
<a id="trace-2065"></a>
<a id="trace-2098"></a>
<a id="trace-2100"></a>
<a id="trace-2121"></a>
<a id="trace-2123"></a>
<a id="trace-2171"></a>
<a id="trace-2173"></a>
<a id="trace-2198"></a>
<a id="trace-2200"></a>
<a id="trace-2284"></a>
<a id="trace-2286"></a>
<a id="trace-2315"></a>
<a id="trace-2317"></a>
<a id="trace-2623"></a>
<a id="trace-2625"></a>
<a id="trace-2690"></a>
<a id="trace-2692"></a>
<a id="trace-2905"></a>
<a id="trace-2907"></a>
<a id="trace-2940"></a>
<a id="trace-2942"></a>
<a id="trace-3005"></a>
<a id="trace-3007"></a>
<a id="trace-3034"></a>
<a id="trace-3036"></a>
<a id="trace-3135"></a>
<a id="trace-3137"></a>
<a id="trace-3165"></a>
<a id="trace-3167"></a>
<a id="trace-3195"></a>
<a id="trace-3197"></a>
<a id="trace-3222"></a>
<a id="trace-3224"></a>
<a id="trace-3257"></a>
<a id="trace-3259"></a>
<a id="trace-3281"></a>
<a id="trace-3283"></a>
<a id="trace-3333"></a>
<a id="trace-3335"></a>
<a id="trace-3371"></a>
<a id="trace-3373"></a>
<a id="trace-3489"></a>
<a id="trace-3491"></a>
<a id="trace-3512"></a>
<a id="trace-3514"></a>
<a id="trace-3551"></a>
<a id="trace-3553"></a>
<a id="trace-3574"></a>
<a id="trace-3576"></a>
<a id="trace-3593"></a>
<a id="trace-3595"></a>
<a id="trace-3607"></a>
<a id="trace-3609"></a>
<a id="trace-3632"></a>
<a id="trace-3634"></a>
<a id="trace-3649"></a>
<a id="trace-3651"></a>
<a id="trace-3876"></a>
<a id="trace-3878"></a>
<a id="trace-3920"></a>
<a id="trace-3922"></a>
<a id="trace-3945"></a>
<a id="trace-3947"></a>
<a id="trace-3956"></a>
<a id="trace-3958"></a>
<a id="trace-4006"></a>
<a id="trace-4008"></a>
<a id="trace-4017"></a>
<a id="trace-4019"></a>
<a id="trace-4098"></a>
<a id="trace-4100"></a>
<a id="trace-4717"></a>
<a id="trace-4719"></a>
<a id="trace-4756"></a>
<a id="trace-4758"></a>
<a id="trace-4791"></a>
<a id="trace-4793"></a>
<a id="trace-4817"></a>
<a id="trace-4819"></a>
<a id="trace-5520"></a>
<a id="trace-5522"></a>
<a id="trace-6182"></a>
<a id="trace-6184"></a>
<a id="trace-6233"></a>
<a id="trace-6235"></a>
<a id="trace-6278"></a>
<a id="trace-6280"></a>
<a id="trace-6378"></a>
<a id="trace-6380"></a>
<a id="trace-6671"></a>
<a id="trace-6673"></a>
<a id="trace-6725"></a>
<a id="trace-6727"></a>
<a id="trace-7398"></a>
<a id="trace-7400"></a>
<a id="trace-7670"></a>
<a id="trace-7672"></a>
<a id="trace-7728"></a>
<a id="trace-7730"></a>
<a id="trace-7773"></a>
<a id="trace-7775"></a>
<a id="trace-7871"></a>
<a id="trace-7873"></a>
<a id="trace-7901"></a>
<a id="trace-7903"></a>
<a id="trace-8653"></a>
<a id="trace-8655"></a>
<a id="trace-8684"></a>
<a id="trace-8686"></a>
<a id="trace-8724"></a>
<a id="trace-8726"></a>
<a id="trace-8761"></a>
<a id="trace-8763"></a>
<a id="trace-8788"></a>
<a id="trace-8790"></a>
<a id="trace-9071"></a>
<a id="trace-9073"></a>
<a id="trace-9141"></a>
<a id="trace-9143"></a>
<a id="trace-13268"></a>
<a id="trace-13270"></a>
<a id="trace-13415"></a>
<a id="trace-13417"></a>
<a id="trace-13491"></a>
<a id="trace-13493"></a>
<a id="trace-13598"></a>
<a id="trace-13600"></a>
<a id="trace-13649"></a>
<a id="trace-13651"></a>
<a id="trace-13709"></a>
<a id="trace-13711"></a>
<a id="trace-13767"></a>
<a id="trace-13769"></a>
<a id="trace-16037"></a>
<a id="trace-16039"></a>
<a id="trace-16064"></a>
<a id="trace-16066"></a>
<a id="trace-16108"></a>
<a id="trace-16110"></a>
<a id="trace-16145"></a>
<a id="trace-16147"></a>
<a id="trace-16231"></a>
<a id="trace-16233"></a>
<a id="trace-16597"></a>
<a id="trace-16599"></a>
<a id="trace-16618"></a>
<a id="trace-16620"></a>
<a id="trace-16655"></a>
<a id="trace-16657"></a>
<a id="trace-16688"></a>
<a id="trace-16712"></a>
<a id="trace-16781"></a>
<a id="trace-16804"></a>
<a id="trace-16824"></a>
<a id="trace-16826"></a>
<a id="trace-16989"></a>
<a id="trace-16991"></a>
<a id="trace-17238"></a>
<a id="trace-17240"></a>
<a id="trace-17330"></a>
<a id="trace-17332"></a>
<a id="trace-17391"></a>
<a id="trace-17393"></a>
<a id="trace-17447"></a>
<a id="trace-17449"></a>
<a id="trace-17519"></a>
<a id="trace-17521"></a>
<a id="trace-17591"></a>
<a id="trace-17593"></a>
<a id="trace-17838"></a>
<a id="trace-17840"></a>
<a id="trace-20766"></a>
<a id="trace-20768"></a>
<a id="trace-20997"></a>
<a id="trace-20999"></a>
<a id="trace-21072"></a>
<a id="trace-21074"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21447"></a>
<a id="trace-21449"></a>
<a id="trace-21511"></a>
<a id="trace-21513"></a>
<a id="trace-21558"></a>
<a id="trace-21560"></a>
<a id="trace-21603"></a>
<a id="trace-21605"></a>
<a id="trace-21634"></a>
<a id="trace-21636"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21684"></a>
<a id="trace-21686"></a>
<a id="trace-21706"></a>
<a id="trace-21708"></a>
<a id="trace-24799"></a>
<a id="trace-24801"></a>
<a id="trace-24888"></a>
<a id="trace-24890"></a>
<a id="trace-24906"></a>
<a id="trace-24908"></a>
<a id="trace-25329"></a>
<a id="trace-25331"></a>
<a id="trace-25946"></a>
<a id="trace-25948"></a>
<a id="trace-25993"></a>
<a id="trace-25995"></a>
<a id="trace-26026"></a>
<a id="trace-26028"></a>
<a id="trace-26057"></a>
<a id="trace-26059"></a>
<a id="trace-26096"></a>
<a id="trace-26098"></a>
<a id="trace-26120"></a>
<a id="trace-26122"></a>
<a id="trace-26140"></a>
<a id="trace-26142"></a>
<a id="trace-26241"></a>
<a id="trace-26243"></a>
<a id="trace-26269"></a>
<a id="trace-26271"></a>
<a id="trace-26288"></a>
<a id="trace-26290"></a>
<a id="trace-26320"></a>
<a id="trace-26322"></a>
<a id="trace-26767"></a>
<a id="trace-26769"></a>
<a id="trace-26786"></a>
<a id="trace-26788"></a>
<a id="trace-26817"></a>
<a id="trace-26819"></a>
<a id="trace-26845"></a>
<a id="trace-26847"></a>
<a id="trace-26926"></a>
<a id="trace-26928"></a>
<a id="trace-26972"></a>
<a id="trace-26974"></a>
<a id="trace-26993"></a>
<a id="trace-26995"></a>
<a id="trace-27027"></a>
<a id="trace-27029"></a>
<a id="trace-27052"></a>
<a id="trace-27054"></a>
<a id="trace-27069"></a>
<a id="trace-27071"></a>
<a id="trace-27089"></a>
<a id="trace-27091"></a>
<a id="trace-27099"></a>
<a id="trace-27101"></a>
<a id="trace-27185"></a>
<a id="trace-27187"></a>
<a id="trace-27257"></a>
<a id="trace-27259"></a>
<a id="trace-27295"></a>
<a id="trace-27297"></a>
<a id="trace-27332"></a>
<a id="trace-27334"></a>
<a id="trace-27360"></a>
<a id="trace-27362"></a>
<a id="trace-27449"></a>
<a id="trace-27451"></a>
<a id="trace-27483"></a>
<a id="trace-27485"></a>
<a id="trace-27524"></a>
<a id="trace-27526"></a>
<a id="trace-27548"></a>
<a id="trace-27570"></a>
<a id="trace-27572"></a>
<a id="trace-27806"></a>
<a id="trace-27808"></a>
<a id="trace-27838"></a>
<a id="trace-27840"></a>
<a id="trace-27872"></a>
<a id="trace-27874"></a>
<a id="trace-27919"></a>
<a id="trace-27921"></a>
<a id="trace-27999"></a>
<a id="trace-28001"></a>
<a id="trace-28029"></a>
<a id="trace-28031"></a>
<a id="trace-28055"></a>
<a id="trace-28081"></a>
<a id="trace-28083"></a>
<a id="trace-28108"></a>
<a id="trace-28191"></a>
<a id="trace-28271"></a>
<a id="trace-28273"></a>
<a id="trace-28303"></a>
<a id="trace-28328"></a>
<a id="trace-28330"></a>
<a id="trace-28434"></a>
<a id="trace-28583"></a>
<a id="trace-28585"></a>
<a id="trace-28618"></a>
<a id="trace-28620"></a>
<a id="trace-28645"></a>
<a id="trace-28647"></a>
<a id="trace-28667"></a>
<a id="trace-28669"></a>
<a id="trace-28886"></a>
<a id="trace-28888"></a>
<a id="trace-28923"></a>
<a id="trace-28986"></a>
<a id="trace-28988"></a>
<a id="trace-29009"></a>
<a id="trace-29011"></a>
<a id="trace-29084"></a>
<a id="trace-29102"></a>
<a id="trace-29104"></a>
<a id="trace-29127"></a>
<a id="trace-29129"></a>
<a id="trace-29186"></a>
<a id="trace-29264"></a>
<a id="trace-29266"></a>
<a id="trace-29291"></a>
<a id="trace-29293"></a>
<a id="trace-29307"></a>
<a id="trace-29309"></a>
<a id="trace-29322"></a>
<a id="trace-29324"></a>
<a id="trace-29413"></a>
<a id="trace-29415"></a>
<a id="trace-29428"></a>
<a id="trace-29442"></a>
<a id="trace-29444"></a>
<a id="trace-29459"></a>
<a id="trace-29461"></a>
<a id="trace-29525"></a>
<a id="trace-29539"></a>
<a id="trace-29541"></a>
<a id="trace-29556"></a>
<a id="trace-29558"></a>
<a id="trace-29568"></a>
<a id="trace-29570"></a>
<a id="trace-29584"></a>
<a id="trace-29649"></a>
<a id="trace-29651"></a>
<a id="trace-29665"></a>
<a id="trace-29667"></a>
<a id="trace-29679"></a>
<a id="trace-29681"></a>
<a id="trace-29692"></a>
<a id="trace-29694"></a>
<a id="trace-29709"></a>
<a id="trace-29785"></a>
<a id="trace-29787"></a>
<a id="trace-29808"></a>
<a id="trace-29825"></a>
<a id="trace-29827"></a>
<a id="trace-29839"></a>
<a id="trace-29841"></a>
<a id="trace-29856"></a>
<a id="trace-29858"></a>
<a id="trace-29929"></a>
<a id="trace-29931"></a>
<a id="trace-29947"></a>
<a id="trace-29949"></a>
<a id="trace-30026"></a>
<a id="trace-30028"></a>
<a id="trace-30069"></a>
<a id="trace-30071"></a>
<a id="trace-30135"></a>
<a id="trace-30145"></a>
<a id="trace-30147"></a>
<a id="trace-30160"></a>
<a id="trace-30162"></a>
<a id="trace-30174"></a>
<a id="trace-30176"></a>
<a id="trace-30192"></a>
<a id="trace-30194"></a>
<a id="trace-30267"></a>
<a id="trace-30269"></a>
<a id="trace-30281"></a>
<a id="trace-30283"></a>
<a id="trace-30296"></a>
<a id="trace-30298"></a>
<a id="trace-30314"></a>
<a id="trace-30316"></a>
<a id="trace-30331"></a>
<a id="trace-30333"></a>
<a id="trace-30398"></a>
<a id="trace-30400"></a>
<a id="trace-30414"></a>
<a id="trace-30416"></a>
<a id="trace-30431"></a>
<a id="trace-30433"></a>
<a id="trace-30446"></a>
<a id="trace-30461"></a>
<a id="trace-30463"></a>
<a id="trace-30527"></a>
<a id="trace-30529"></a>
<a id="trace-30542"></a>
<a id="trace-30558"></a>
<a id="trace-30560"></a>
<a id="trace-30580"></a>
<a id="trace-30582"></a>
<a id="trace-30594"></a>
<a id="trace-30596"></a>
<a id="trace-30672"></a>
<a id="trace-30674"></a>
<a id="trace-30693"></a>
<a id="trace-30695"></a>
<a id="trace-30709"></a>
<a id="trace-30725"></a>
<a id="trace-30727"></a>
<a id="trace-30797"></a>
<a id="trace-30810"></a>
<a id="trace-30812"></a>
<a id="trace-30826"></a>
<a id="trace-30839"></a>
<a id="trace-30858"></a>
<a id="trace-30860"></a>
<a id="trace-30928"></a>
<a id="trace-30930"></a>
<a id="trace-30944"></a>
<a id="trace-30962"></a>
<a id="trace-30975"></a>
<a id="trace-30977"></a>
<a id="trace-30991"></a>
<a id="trace-30993"></a>
<a id="trace-31064"></a>
<a id="trace-31066"></a>
<a id="trace-31079"></a>
<a id="trace-31094"></a>
<a id="trace-31096"></a>
<a id="trace-31116"></a>
<a id="trace-31129"></a>
<a id="trace-31131"></a>
<a id="trace-31197"></a>
<a id="trace-31199"></a>
<a id="trace-31213"></a>
<a id="trace-31215"></a>
<a id="trace-31232"></a>
<a id="trace-31246"></a>
<a id="trace-31248"></a>
<a id="trace-31265"></a>
<a id="trace-31267"></a>
<a id="trace-31335"></a>
<a id="trace-31348"></a>
<a id="trace-31350"></a>
<a id="trace-31383"></a>
<a id="trace-31385"></a>
<a id="trace-31397"></a>
<a id="trace-31399"></a>
<a id="trace-31467"></a>
<a id="trace-31488"></a>
<a id="trace-31490"></a>
<a id="trace-31501"></a>
<a id="trace-31516"></a>
<a id="trace-31532"></a>
<a id="trace-31534"></a>
<a id="trace-31602"></a>
<a id="trace-31604"></a>
<a id="trace-31620"></a>
<a id="trace-31622"></a>
<a id="trace-31636"></a>
<a id="trace-31638"></a>
<a id="trace-31654"></a>
<a id="trace-31666"></a>
<a id="trace-31668"></a>
<a id="trace-31735"></a>
<a id="trace-31751"></a>
<a id="trace-31768"></a>
<a id="trace-31770"></a>
<a id="trace-31785"></a>
<a id="trace-31787"></a>
<a id="trace-31801"></a>
<a id="trace-31803"></a>
<a id="trace-31888"></a>
<a id="trace-31890"></a>
<a id="trace-31902"></a>
<a id="trace-31904"></a>
<a id="trace-31924"></a>
<a id="trace-31926"></a>
<a id="trace-31938"></a>
<a id="trace-31940"></a>
<a id="trace-32006"></a>
<a id="trace-32008"></a>
<a id="trace-32029"></a>
<a id="trace-32031"></a>
<a id="trace-32042"></a>
<a id="trace-32044"></a>
<a id="trace-32058"></a>
<a id="trace-32143"></a>
<a id="trace-32158"></a>
<a id="trace-32160"></a>
<a id="trace-32174"></a>
<a id="trace-32176"></a>
<a id="trace-32194"></a>
<a id="trace-32206"></a>
<a id="trace-32275"></a>
<a id="trace-32295"></a>
<a id="trace-32297"></a>
<a id="trace-32307"></a>
<a id="trace-32309"></a>
<a id="trace-32324"></a>
<a id="trace-32326"></a>
<a id="trace-32347"></a>
<a id="trace-32349"></a>
<a id="trace-32410"></a>
<a id="trace-32412"></a>
<a id="trace-32430"></a>
<a id="trace-32432"></a>
<a id="trace-32445"></a>
<a id="trace-32461"></a>
<a id="trace-32463"></a>
<a id="trace-32478"></a>
<a id="trace-32547"></a>
<a id="trace-32565"></a>
<a id="trace-32567"></a>
<a id="trace-32578"></a>
<a id="trace-32580"></a>
<a id="trace-32595"></a>
<a id="trace-32610"></a>
<a id="trace-32679"></a>
<a id="trace-32697"></a>
<a id="trace-32710"></a>
<a id="trace-32728"></a>
<a id="trace-32743"></a>
<a id="trace-32745"></a>
<a id="trace-32809"></a>
<a id="trace-32811"></a>
<a id="trace-32832"></a>
<a id="trace-32834"></a>
<a id="trace-32859"></a>
<a id="trace-32861"></a>
<a id="trace-32883"></a>
<a id="trace-32885"></a>
<a id="trace-32947"></a>
<a id="trace-32964"></a>
<a id="trace-32976"></a>
<a id="trace-32994"></a>
<a id="trace-32996"></a>
<a id="trace-33012"></a>
<a id="trace-33079"></a>
<a id="trace-33098"></a>
<a id="trace-33100"></a>
<a id="trace-33110"></a>
<a id="trace-33112"></a>
<a id="trace-33126"></a>
<a id="trace-33128"></a>
<a id="trace-33149"></a>
<a id="trace-33151"></a>
<a id="trace-33214"></a>
<a id="trace-33232"></a>
<a id="trace-33234"></a>
<a id="trace-33252"></a>
<a id="trace-33254"></a>
<a id="trace-33264"></a>
<a id="trace-33266"></a>
<a id="trace-33284"></a>
<a id="trace-33349"></a>
<a id="trace-33351"></a>
<a id="trace-33369"></a>
<a id="trace-33371"></a>
<a id="trace-33385"></a>
<a id="trace-33387"></a>
<a id="trace-33401"></a>
<a id="trace-33403"></a>
<a id="trace-33421"></a>
<a id="trace-33423"></a>
<a id="trace-33485"></a>
<a id="trace-33487"></a>
<a id="trace-33505"></a>
<a id="trace-33517"></a>
<a id="trace-33519"></a>
<a id="trace-33538"></a>
<a id="trace-33540"></a>
<a id="trace-33557"></a>
<a id="trace-33559"></a>
<a id="trace-33624"></a>
<a id="trace-33642"></a>
<a id="trace-33656"></a>
<a id="trace-33658"></a>
<a id="trace-33670"></a>
<a id="trace-33693"></a>
<a id="trace-33695"></a>
<a id="trace-33757"></a>
<a id="trace-33759"></a>
<a id="trace-33775"></a>
<a id="trace-33777"></a>
<a id="trace-33796"></a>
<a id="trace-33798"></a>
<a id="trace-33809"></a>
<a id="trace-33811"></a>
<a id="trace-33827"></a>
<a id="trace-33829"></a>
<a id="trace-33895"></a>
<a id="trace-33915"></a>
<a id="trace-33929"></a>
<a id="trace-33931"></a>
<a id="trace-33946"></a>
<a id="trace-33948"></a>
<a id="trace-33967"></a>
<a id="trace-33969"></a>
<a id="trace-34030"></a>
<a id="trace-34032"></a>
<a id="trace-34048"></a>
<a id="trace-34050"></a>
<a id="trace-34068"></a>
<a id="trace-34070"></a>
<a id="trace-34082"></a>
<a id="trace-34100"></a>
<a id="trace-34172"></a>
<a id="trace-34183"></a>
<a id="trace-34185"></a>
<a id="trace-34201"></a>
<a id="trace-34203"></a>
<a id="trace-34216"></a>
<a id="trace-34218"></a>
<a id="trace-34236"></a>
<a id="trace-34303"></a>
<a id="trace-34319"></a>
<a id="trace-34321"></a>
<a id="trace-34338"></a>
<a id="trace-34351"></a>
<a id="trace-34353"></a>
<a id="trace-34370"></a>
<a id="trace-34372"></a>
<a id="trace-34437"></a>
<a id="trace-34455"></a>
<a id="trace-34472"></a>
<a id="trace-34484"></a>
<a id="trace-34486"></a>
<a id="trace-34505"></a>
<a id="trace-34571"></a>
<a id="trace-34584"></a>
<a id="trace-34586"></a>
<a id="trace-34605"></a>
<a id="trace-34607"></a>
<a id="trace-34618"></a>
<a id="trace-34620"></a>
<a id="trace-34637"></a>
<a id="trace-34639"></a>
<a id="trace-34711"></a>
<a id="trace-34723"></a>
<a id="trace-34725"></a>
<a id="trace-34739"></a>
<a id="trace-34753"></a>
<a id="trace-34773"></a>
<a id="trace-34841"></a>
<a id="trace-34843"></a>
<a id="trace-34858"></a>
<a id="trace-34860"></a>
<a id="trace-34876"></a>
<a id="trace-34878"></a>
<a id="trace-34889"></a>
<a id="trace-34905"></a>
<a id="trace-34978"></a>
<a id="trace-34980"></a>
<a id="trace-34991"></a>
<a id="trace-35007"></a>
<a id="trace-35009"></a>
<a id="trace-35027"></a>
<a id="trace-35029"></a>
<a id="trace-35041"></a>
<a id="trace-35110"></a>
<a id="trace-35112"></a>
<a id="trace-35126"></a>
<a id="trace-35128"></a>
<a id="trace-35144"></a>
<a id="trace-35146"></a>
<a id="trace-35160"></a>
<a id="trace-35162"></a>
<a id="trace-35180"></a>
<a id="trace-35182"></a>
<a id="trace-35252"></a>
<a id="trace-35266"></a>
<a id="trace-35280"></a>
<a id="trace-35282"></a>
<a id="trace-35293"></a>
<a id="trace-35295"></a>
<a id="trace-35314"></a>
<a id="trace-35316"></a>
<a id="trace-35383"></a>
<a id="trace-35385"></a>
<a id="trace-35400"></a>
<a id="trace-35416"></a>
<a id="trace-35418"></a>
<a id="trace-35431"></a>
<a id="trace-35433"></a>
<a id="trace-35447"></a>
<a id="trace-35449"></a>
- 5.70s–359.30s (×708), actor 37, squad 4 (trace 994): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 905. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625192520379565, 'next_transition': 1551}.
<a id="trace-1005"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1005): received platoon directive. Knowledge: actor memory at 5.00s, trace 896. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.885886723893403, 'next_transition': 2701}.
<a id="trace-1220"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1220): received platoon directive. Knowledge: actor memory at 5.00s, trace 888. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.54034121668137, 'next_transition': 1547}.
<a id="trace-1547"></a>
<a id="trace-1549"></a>
<a id="trace-1600"></a>
<a id="trace-1602"></a>
<a id="trace-1642"></a>
<a id="trace-1644"></a>
<a id="trace-1691"></a>
<a id="trace-1693"></a>
<a id="trace-1731"></a>
<a id="trace-1733"></a>
<a id="trace-1791"></a>
<a id="trace-1793"></a>
<a id="trace-1818"></a>
<a id="trace-1820"></a>
<a id="trace-1847"></a>
<a id="trace-1849"></a>
<a id="trace-1939"></a>
<a id="trace-1941"></a>
<a id="trace-1969"></a>
<a id="trace-1971"></a>
<a id="trace-1995"></a>
<a id="trace-1997"></a>
<a id="trace-2030"></a>
<a id="trace-2032"></a>
<a id="trace-2059"></a>
<a id="trace-2061"></a>
<a id="trace-2094"></a>
<a id="trace-2096"></a>
<a id="trace-2117"></a>
<a id="trace-2119"></a>
<a id="trace-2141"></a>
<a id="trace-2143"></a>
<a id="trace-2167"></a>
<a id="trace-2169"></a>
<a id="trace-2194"></a>
<a id="trace-2196"></a>
<a id="trace-2280"></a>
<a id="trace-2282"></a>
<a id="trace-2311"></a>
<a id="trace-2313"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1547): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 893. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149888449010137, 'next_transition': 1600}.
<a id="trace-2322"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2322): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2204. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06374861027897015, 'next_transition': 2619}.
<a id="trace-2619"></a>
<a id="trace-2621"></a>
<a id="trace-2662"></a>
<a id="trace-2664"></a>
<a id="trace-2686"></a>
<a id="trace-2688"></a>
<a id="trace-2901"></a>
<a id="trace-2903"></a>
<a id="trace-2936"></a>
<a id="trace-2938"></a>
<a id="trace-2970"></a>
<a id="trace-2972"></a>
<a id="trace-3001"></a>
<a id="trace-3003"></a>
<a id="trace-3030"></a>
<a id="trace-3032"></a>
<a id="trace-3131"></a>
<a id="trace-3133"></a>
<a id="trace-3161"></a>
<a id="trace-3163"></a>
<a id="trace-3191"></a>
<a id="trace-3193"></a>
<a id="trace-3218"></a>
<a id="trace-3220"></a>
<a id="trace-3253"></a>
<a id="trace-3255"></a>
<a id="trace-3277"></a>
<a id="trace-3279"></a>
<a id="trace-3307"></a>
<a id="trace-3309"></a>
<a id="trace-3329"></a>
<a id="trace-3331"></a>
<a id="trace-3367"></a>
<a id="trace-3369"></a>
<a id="trace-3395"></a>
<a id="trace-3397"></a>
<a id="trace-3485"></a>
<a id="trace-3487"></a>
<a id="trace-3508"></a>
<a id="trace-3510"></a>
<a id="trace-3547"></a>
<a id="trace-3549"></a>
<a id="trace-3570"></a>
<a id="trace-3572"></a>
<a id="trace-3589"></a>
<a id="trace-3591"></a>
<a id="trace-3603"></a>
<a id="trace-3605"></a>
<a id="trace-3628"></a>
<a id="trace-3630"></a>
<a id="trace-3645"></a>
<a id="trace-3647"></a>
- 16.25s–28.75s (×52), actor 5, squad 0 (trace 2619): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2209. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749974325954527, 'next_transition': 2662}.
<a id="trace-2701"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2701): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2212. Next observer evidence: {'until': 29.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 10.685803824135698, 'next_transition': 3679}.
<a id="trace-2702"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2702): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2212. Next observer evidence: {'until': 29.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 10.685803824135698, 'next_transition': 3679}.
<a id="trace-3662"></a>
- 29.20s–29.20s (×1), actor 0, squad 0 (trace 3662): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 3411. Next observer evidence: None.
<a id="trace-3667"></a>
<a id="trace-3669"></a>
<a id="trace-3783"></a>
<a id="trace-3785"></a>
<a id="trace-3872"></a>
<a id="trace-3874"></a>
<a id="trace-3884"></a>
<a id="trace-3886"></a>
<a id="trace-3905"></a>
<a id="trace-3907"></a>
<a id="trace-3916"></a>
<a id="trace-3918"></a>
<a id="trace-3941"></a>
<a id="trace-3943"></a>
<a id="trace-3952"></a>
<a id="trace-3954"></a>
<a id="trace-3973"></a>
<a id="trace-3975"></a>
- 29.25s–33.25s (×18), actor 5, squad 0 (trace 3667): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3416. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3783}.
<a id="trace-3679"></a>
- 29.55s–29.55s (×1), actor 9, squad 1 (trace 3679): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 3420. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 16.1810211294483, 'next_transition': 6415}.
<a id="trace-366"></a>
- 33.45s–33.45s (×1), actor 5, squad 0 (events line 366): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3978"></a>
- 33.45s–33.45s (×1), actor 5, squad 0 (trace 3978): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 3978. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3983}.
<a id="trace-3979"></a>
- 33.45s–33.45s (×1), actor 5, squad 0 (trace 3979): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 3979. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3983}.
<a id="trace-3983"></a>
<a id="trace-3985"></a>
<a id="trace-4002"></a>
<a id="trace-4004"></a>
<a id="trace-4013"></a>
<a id="trace-4015"></a>
<a id="trace-4094"></a>
<a id="trace-4096"></a>
- 33.75s–35.25s (×8), actor 5, squad 0 (trace 3983): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 33.45s, trace 3979. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4002}.
<a id="trace-4101"></a>
- 35.25s–35.25s (×1), actor 0, squad 0 (trace 4101): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 4022. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4713}.
<a id="trace-4108"></a>
- 35.25s–35.25s (×1), actor 0, squad 0 (trace 4108): MoveTactically. Knowledge: actor memory at 35.00s, trace 4022. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4713}.
<a id="trace-4109"></a>
- 35.25s–35.25s (×1), actor 0, squad 0 (trace 4109): traveling overwatch. Knowledge: actor memory at 35.00s, trace 4022. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4713}.
<a id="trace-4110"></a>
- 35.25s–35.25s (×1), actor 0, squad 0 (trace 4110): Reorganise complete. Knowledge: actor memory at 35.00s, trace 4022. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4713}.
<a id="trace-4713"></a>
<a id="trace-4715"></a>
<a id="trace-4752"></a>
<a id="trace-4754"></a>
<a id="trace-4787"></a>
<a id="trace-4789"></a>
<a id="trace-4813"></a>
<a id="trace-4815"></a>
<a id="trace-4835"></a>
<a id="trace-4837"></a>
- 35.75s–37.75s (×10), actor 5, squad 0 (trace 4713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4027. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13781211574209462, 'next_transition': 4752}.
<a id="trace-4859"></a>
- 38.00s–38.00s (×1), actor 0, squad 0 (trace 4859): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4022. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37875465556535415, 'next_transition': 5516}.
<a id="trace-4860"></a>
- 38.00s–38.00s (×1), actor 0, squad 0 (trace 4860): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4022. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37875465556535415, 'next_transition': 5516}.
<a id="trace-4861"></a>
- 38.00s–38.00s (×1), actor 0, squad 0 (trace 4861): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4022. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37875465556535415, 'next_transition': 5516}.
<a id="trace-5516"></a>
<a id="trace-5518"></a>
- 38.25s–38.25s (×2), actor 5, squad 0 (trace 5516): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4027. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7574994851137968, 'next_transition': 6178}.
<a id="trace-5523"></a>
- 38.25s–38.25s (×1), actor 0, squad 0 (trace 5523): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4022. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7574994851137968, 'next_transition': 6178}.
<a id="trace-6178"></a>
<a id="trace-6180"></a>
<a id="trace-6229"></a>
<a id="trace-6231"></a>
<a id="trace-6274"></a>
<a id="trace-6276"></a>
<a id="trace-6374"></a>
<a id="trace-6376"></a>
<a id="trace-6667"></a>
<a id="trace-6669"></a>
<a id="trace-6721"></a>
<a id="trace-6723"></a>
<a id="trace-7013"></a>
<a id="trace-7015"></a>
- 38.75s–41.75s (×14), actor 5, squad 0 (trace 6178): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4027. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0964561696318627, 'next_transition': 6229}.
<a id="trace-6415"></a>
- 40.70s–40.70s (×1), actor 9, squad 1 (trace 6415): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 40.00s, trace 6296. Next observer evidence: {'until': 41.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.19587807956878575, 'next_transition': 6760}.
<a id="trace-6760"></a>
- 41.70s–41.70s (×1), actor 9, squad 1 (trace 6760): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 6296. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2650776332615705, 'next_transition': 572}.
<a id="trace-6761"></a>
- 41.70s–41.70s (×1), actor 9, squad 1 (trace 6761): bounding overwatch. Knowledge: actor memory at 40.00s, trace 6296. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2650776332615705, 'next_transition': 572}.
<a id="trace-6762"></a>
- 41.70s–41.70s (×1), actor 9, squad 1 (trace 6762): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 6296. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2650776332615705, 'next_transition': 572}.
<a id="trace-7033"></a>
- 42.05s–42.05s (×1), actor 0, squad 0 (trace 7033): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 6288. Next observer evidence: None.
<a id="trace-571"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 571): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-572"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 572): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7041"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 7041): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.547538 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 7041. Next observer evidence: {'until': 42.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3956441275193792, 'next_transition': 7066}.
<a id="trace-7042"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 7042): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.547538 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 7042. Next observer evidence: {'until': 42.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3956441275193792, 'next_transition': 7066}.
<a id="trace-7043"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 7043): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.547538 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 7043. Next observer evidence: {'until': 43, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.6682450441588734, 'next_transition': 7139}.
<a id="trace-7044"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 7044): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.547538 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 7044. Next observer evidence: {'until': 43, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.6682450441588734, 'next_transition': 7139}.
<a id="trace-7066"></a>
<a id="trace-7068"></a>
<a id="trace-7116"></a>
<a id="trace-7118"></a>
<a id="trace-7394"></a>
<a id="trace-7396"></a>
<a id="trace-7666"></a>
<a id="trace-7668"></a>
<a id="trace-7724"></a>
<a id="trace-7726"></a>
<a id="trace-7769"></a>
<a id="trace-7771"></a>
<a id="trace-7866"></a>
<a id="trace-7868"></a>
- 42.25s–45.25s (×14), actor 5, squad 0 (trace 7066): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 7044. Next observer evidence: {'until': 42.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.7611260767122501, 'next_transition': 7116}.
<a id="trace-7139"></a>
<a id="trace-7418"></a>
- 43.15s–43.65s (×2), actor 9, squad 1 (trace 7139): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 6296. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.034963189860263, 'next_transition': 7418}.
<a id="trace-7891"></a>
- 45.65s–45.65s (×1), actor 0, squad 0 (trace 7891): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 7778. Next observer evidence: None.
<a id="trace-7896"></a>
<a id="trace-7898"></a>
- 45.75s–45.75s (×2), actor 5, squad 0 (trace 7896): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7783. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21920139364697214, 'next_transition': 7915}.
<a id="trace-7915"></a>
- 45.90s–45.90s (×1), actor 0, squad 0 (trace 7915): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 7778. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42131086614069824, 'next_transition': 8648}.
<a id="trace-8648"></a>
<a id="trace-8650"></a>
<a id="trace-8679"></a>
<a id="trace-8681"></a>
<a id="trace-8718"></a>
<a id="trace-8720"></a>
<a id="trace-8755"></a>
<a id="trace-8757"></a>
<a id="trace-8782"></a>
<a id="trace-8784"></a>
<a id="trace-9065"></a>
<a id="trace-9067"></a>
<a id="trace-9135"></a>
<a id="trace-9137"></a>
- 46.25s–49.25s (×14), actor 5, squad 0 (trace 8648): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7783. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2849967296310123, 'next_transition': 8679}.
<a id="trace-8766"></a>
- 47.85s–47.85s (×1), actor 9, squad 1 (trace 8766): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 7786. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40322311419637424, 'next_transition': 8798}.
<a id="trace-8798"></a>
- 48.35s–48.35s (×1), actor 9, squad 1 (trace 8798): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 7786. Next observer evidence: {'until': 49.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.464571534101356, 'next_transition': 13018}.
<a id="trace-9180"></a>
- 49.60s–49.60s (×1), actor 0, squad 0 (trace 9180): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 7778. Next observer evidence: None.
<a id="trace-9182"></a>
- 49.60s–49.60s (×1), actor 0, squad 0 (trace 9182): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 7778. Next observer evidence: None.
<a id="trace-12753"></a>
- 49.60s–49.60s (×1), actor 0, squad 0 (trace 12753): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 7778. Next observer evidence: None.
<a id="trace-12754"></a>
- 49.60s–49.60s (×1), actor 0, squad 0 (trace 12754): MoveTactically. Knowledge: actor memory at 45.00s, trace 7778. Next observer evidence: None.
<a id="trace-12755"></a>
- 49.60s–49.60s (×1), actor 0, squad 0 (trace 12755): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 7778. Next observer evidence: None.
<a id="trace-13018"></a>
- 49.65s–49.65s (×1), actor 9, squad 1 (trace 13018): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 7786. Next observer evidence: {'until': 53.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 1.1850444264433484, 'next_transition': 13783}.
<a id="trace-13262"></a>
<a id="trace-13264"></a>
<a id="trace-13409"></a>
<a id="trace-13411"></a>
<a id="trace-13485"></a>
<a id="trace-13487"></a>
<a id="trace-13592"></a>
<a id="trace-13594"></a>
<a id="trace-13643"></a>
<a id="trace-13645"></a>
<a id="trace-13703"></a>
<a id="trace-13705"></a>
<a id="trace-13761"></a>
<a id="trace-13763"></a>
<a id="trace-16031"></a>
<a id="trace-16033"></a>
<a id="trace-16058"></a>
<a id="trace-16060"></a>
<a id="trace-16102"></a>
<a id="trace-16104"></a>
<a id="trace-16139"></a>
<a id="trace-16141"></a>
<a id="trace-16225"></a>
<a id="trace-16227"></a>
- 49.75s–55.25s (×24), actor 5, squad 0 (trace 13262): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7783. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026606846941832702, 'next_transition': 13409}.
<a id="trace-13783"></a>
- 53.20s–53.20s (×1), actor 9, squad 1 (trace 13783): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 13311. Next observer evidence: {'until': 64.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 11.027505534176063, 'next_transition': 17641}.
<a id="trace-13785"></a>
- 53.20s–53.20s (×1), actor 9, squad 1 (trace 13785): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 13311. Next observer evidence: {'until': 64.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 11.027505534176063, 'next_transition': 17641}.
<a id="trace-15908"></a>
- 53.20s–53.20s (×1), actor 9, squad 1 (trace 15908): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 13311. Next observer evidence: {'until': 64.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 11.027505534176063, 'next_transition': 17641}.
<a id="trace-15909"></a>
- 53.20s–53.20s (×1), actor 9, squad 1 (trace 15909): MoveTactically. Knowledge: actor memory at 50.00s, trace 13311. Next observer evidence: {'until': 64.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 11.027505534176063, 'next_transition': 17641}.
<a id="trace-15910"></a>
- 53.20s–53.20s (×1), actor 9, squad 1 (trace 15910): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 13311. Next observer evidence: {'until': 64.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 11.027505534176063, 'next_transition': 17641}.
<a id="trace-16249"></a>
- 55.65s–55.65s (×1), actor 0, squad 0 (trace 16249): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 16150. Next observer evidence: None.
<a id="trace-16591"></a>
<a id="trace-16593"></a>
<a id="trace-16612"></a>
<a id="trace-16614"></a>
<a id="trace-16649"></a>
<a id="trace-16651"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16706"></a>
<a id="trace-16708"></a>
<a id="trace-16746"></a>
<a id="trace-16748"></a>
<a id="trace-16775"></a>
<a id="trace-16777"></a>
<a id="trace-16798"></a>
<a id="trace-16800"></a>
<a id="trace-16818"></a>
<a id="trace-16820"></a>
<a id="trace-16917"></a>
<a id="trace-16919"></a>
<a id="trace-16983"></a>
<a id="trace-16985"></a>
- 55.75s–60.75s (×22), actor 5, squad 0 (trace 16591): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 16155. Next observer evidence: {'until': 56.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4501733527110261, 'next_transition': 16612}.
<a id="trace-17003"></a>
- 60.95s–60.95s (×1), actor 0, squad 0 (trace 17003): superiority established (8 s hysteresis). Knowledge: actor memory at 60.00s, trace 16828. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3152662913301426, 'next_transition': 17179}.
<a id="trace-17179"></a>
<a id="trace-17181"></a>
<a id="trace-17232"></a>
<a id="trace-17234"></a>
<a id="trace-17324"></a>
<a id="trace-17326"></a>
<a id="trace-17385"></a>
<a id="trace-17387"></a>
<a id="trace-17441"></a>
<a id="trace-17443"></a>
<a id="trace-17513"></a>
<a id="trace-17515"></a>
<a id="trace-17585"></a>
<a id="trace-17587"></a>
<a id="trace-17634"></a>
<a id="trace-17636"></a>
<a id="trace-17751"></a>
<a id="trace-17753"></a>
<a id="trace-17794"></a>
<a id="trace-17796"></a>
<a id="trace-17832"></a>
<a id="trace-17834"></a>
- 61.25s–66.25s (×22), actor 5, squad 0 (trace 17179): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 16833. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3152675413301431, 'next_transition': 17232}.
<a id="trace-17641"></a>
- 64.75s–64.75s (×1), actor 9, squad 1 (trace 17641): NeedSupport. Knowledge: actor memory at 60.00s, trace 16836. Next observer evidence: {'until': 68.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 5.205838256724406, 'next_transition': 20822}.
<a id="trace-17849"></a>
- 66.50s–66.50s (×1), actor 0, squad 0 (trace 17849): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 17667. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3527054036978707, 'next_transition': 20669}.
<a id="trace-17850"></a>
- 66.50s–66.50s (×1), actor 0, squad 0 (trace 17850): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 65.00s, trace 17667. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3527054036978707, 'next_transition': 20669}.
<a id="trace-20669"></a>
<a id="trace-20671"></a>
<a id="trace-20715"></a>
<a id="trace-20717"></a>
<a id="trace-20760"></a>
<a id="trace-20762"></a>
<a id="trace-20812"></a>
<a id="trace-20814"></a>
<a id="trace-20991"></a>
<a id="trace-20993"></a>
<a id="trace-21066"></a>
<a id="trace-21068"></a>
- 66.75s–69.25s (×12), actor 5, squad 0 (trace 20669): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 17672. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0778538577298835, 'next_transition': 20715}.
<a id="trace-20822"></a>
- 68.30s–68.30s (×1), actor 9, squad 1 (trace 20822): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 65.00s, trace 17675. Next observer evidence: {'until': 69.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.37118510448142833, 'next_transition': 21132}.
<a id="trace-21082"></a>
- 69.35s–69.35s (×1), actor 5, squad 0 (trace 21082): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.538683 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 21082. Next observer evidence: None.
<a id="trace-21083"></a>
- 69.35s–69.35s (×1), actor 5, squad 0 (trace 21083): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.538683 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 21083. Next observer evidence: None.
<a id="trace-1346"></a>
- 69.35s–69.35s (×1), actor 5, squad 0 (events line 1346): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5647504217256379, 'next_transition': 21123}.
<a id="trace-21123"></a>
<a id="trace-21125"></a>
<a id="trace-21404"></a>
<a id="trace-21406"></a>
<a id="trace-21441"></a>
<a id="trace-21443"></a>
<a id="trace-21505"></a>
<a id="trace-21507"></a>
<a id="trace-21552"></a>
<a id="trace-21554"></a>
<a id="trace-21598"></a>
<a id="trace-21600"></a>
<a id="trace-21629"></a>
<a id="trace-21631"></a>
<a id="trace-21658"></a>
<a id="trace-21660"></a>
<a id="trace-21679"></a>
<a id="trace-21681"></a>
<a id="trace-21700"></a>
<a id="trace-21702"></a>
- 69.75s–74.25s (×20), actor 5, squad 0 (trace 21123): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 69.35s, trace 21083. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6882452568219302, 'next_transition': 21404}.
<a id="trace-21132"></a>
- 69.75s–69.75s (×1), actor 9, squad 1 (trace 21132): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 65.00s, trace 17675. Next observer evidence: {'until': 73.4, 'shots': 6, 'casualties': 1, 'mean_displacement': 0.12081812966420037, 'next_transition': 21669}.
<a id="trace-21300"></a>
- 69.75s–69.75s (×1), actor 9, squad 1 (trace 21300): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 65.00s, trace 17675. Next observer evidence: {'until': 73.4, 'shots': 6, 'casualties': 1, 'mean_displacement': 0.12081812966420037, 'next_transition': 21669}.
<a id="trace-21669"></a>
- 73.45s–73.45s (×1), actor 9, squad 1 (trace 21669): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 70.00s, trace 21327. Next observer evidence: {'until': 74.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21726}.
<a id="trace-21710"></a>
- 74.30s–74.30s (×1), actor 0, squad 0 (trace 21710): support established: element delivered fire on threat area. Knowledge: actor memory at 70.00s, trace 21319. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4515203503546313, 'next_transition': 21961}.
<a id="trace-21711"></a>
- 74.30s–74.30s (×1), actor 0, squad 0 (trace 21711): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 70.00s, trace 21319. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4515203503546313, 'next_transition': 21961}.
<a id="trace-21712"></a>
- 74.30s–74.30s (×1), actor 0, squad 0 (trace 21712): Fixing. Knowledge: actor memory at 70.00s, trace 21319. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4515203503546313, 'next_transition': 21961}.
<a id="trace-21726"></a>
- 74.45s–74.45s (×1), actor 9, squad 1 (trace 21726): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 21327. Next observer evidence: {'until': 75.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25170}.
<a id="trace-21729"></a>
- 74.45s–74.45s (×1), actor 9, squad 1 (trace 21729): MoveTactically. Knowledge: actor memory at 70.00s, trace 21327. Next observer evidence: {'until': 75.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25170}.
<a id="trace-21730"></a>
- 74.45s–74.45s (×1), actor 9, squad 1 (trace 21730): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 70.00s, trace 21327. Next observer evidence: {'until': 75.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25170}.
<a id="trace-21961"></a>
- 74.65s–74.65s (×1), actor 0, squad 0 (trace 21961): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 70.00s, trace 21319. Next observer evidence: None.
<a id="trace-21962"></a>
- 74.65s–74.65s (×1), actor 0, squad 0 (trace 21962): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 70.00s, trace 21319. Next observer evidence: None.
<a id="trace-24793"></a>
<a id="trace-24795"></a>
<a id="trace-24882"></a>
<a id="trace-24884"></a>
<a id="trace-24900"></a>
<a id="trace-24902"></a>
- 74.75s–75.75s (×6), actor 5, squad 0 (trace 24793): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 21324. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7783574455959162, 'next_transition': 24882}.
<a id="trace-25170"></a>
- 75.90s–75.90s (×1), actor 9, squad 1 (trace 25170): radio opportunity: covered route from own side; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 24821. Next observer evidence: {'until': 77.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1625}.
<a id="trace-25171"></a>
- 75.90s–75.90s (×1), actor 9, squad 1 (trace 25171): radio assault committed: wait for delivered support evidence. Knowledge: actor memory at 75.00s, trace 24821. Next observer evidence: {'until': 77.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1625}.
<a id="trace-25273"></a>
- 75.90s–75.90s (×1), actor 9, squad 1 (trace 25273): Assaulting. Knowledge: actor memory at 75.00s, trace 24821. Next observer evidence: {'until': 77.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1625}.
<a id="trace-25288"></a>
- 75.95s–75.95s (×1), actor 0, squad 0 (trace 25288): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 75.00s, trace 24814. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46706973958124587, 'next_transition': 25323}.
<a id="trace-25289"></a>
- 75.95s–75.95s (×1), actor 0, squad 0 (trace 25289): NeedSupport. Knowledge: actor memory at 75.00s, trace 24814. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46706973958124587, 'next_transition': 25323}.
<a id="trace-25323"></a>
<a id="trace-25325"></a>
- 76.25s–76.25s (×2), actor 5, squad 0 (trace 25323): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 24818. Next observer evidence: None.
<a id="trace-25335"></a>
- 76.35s–76.35s (×1), actor 0, squad 0 (trace 25335): Reorganise: completed/failed drill. Knowledge: actor memory at 75.00s, trace 24814. Next observer evidence: {'until': 76.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18397722772863062, 'next_transition': 1591}.
<a id="trace-25341"></a>
- 76.35s–76.35s (×1), actor 0, squad 0 (trace 25341): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 24814. Next observer evidence: {'until': 76.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18397722772863062, 'next_transition': 1591}.
<a id="trace-25342"></a>
- 76.35s–76.35s (×1), actor 0, squad 0 (trace 25342): Reorganise complete: known contact. Knowledge: actor memory at 75.00s, trace 24814. Next observer evidence: {'until': 76.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18397722772863062, 'next_transition': 1591}.
<a id="trace-1591"></a>
- 76.55s–76.55s (×1), actor 5, squad 0 (events line 1591): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25931"></a>
- 76.55s–76.55s (×1), actor 5, squad 0 (trace 25931): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.480524 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 76.55s, trace 25931. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16939876290007727, 'next_transition': 25940}.
<a id="trace-25932"></a>
- 76.55s–76.55s (×1), actor 5, squad 0 (trace 25932): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.480524 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 76.55s, trace 25932. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16939876290007727, 'next_transition': 25940}.
<a id="trace-25940"></a>
<a id="trace-25942"></a>
<a id="trace-25987"></a>
<a id="trace-25989"></a>
<a id="trace-26020"></a>
<a id="trace-26022"></a>
<a id="trace-26051"></a>
<a id="trace-26053"></a>
<a id="trace-26090"></a>
<a id="trace-26092"></a>
<a id="trace-26134"></a>
<a id="trace-26136"></a>
- 76.75s–79.75s (×12), actor 5, squad 0 (trace 25940): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 76.55s, trace 25932. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3769388608183042, 'next_transition': 25987}.
<a id="trace-1625"></a>
- 77.75s–77.75s (×1), actor 5, squad 1 (events line 1625): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 90.8, 'shots': 10, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27191}.
<a id="trace-26029"></a>
- 77.75s–77.75s (×1), actor 5, squad 1 (trace 26029): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.421004 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 77.75s, trace 26029. Next observer evidence: {'until': 90.8, 'shots': 10, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27191}.
<a id="trace-26030"></a>
- 77.75s–77.75s (×1), actor 5, squad 1 (trace 26030): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.421004 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 77.75s, trace 26030. Next observer evidence: {'until': 90.8, 'shots': 10, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27191}.
<a id="trace-26166"></a>
- 80.00s–80.00s (×1), actor 0, squad 0 (trace 26166): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 80.00s, trace 26147. Next observer evidence: None.
<a id="trace-26168"></a>
- 80.05s–80.05s (×1), actor 5, squad 0 (trace 26168): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 80.05s, trace 26168. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25103425346233216, 'next_transition': 26220}.
<a id="trace-26220"></a>
<a id="trace-26222"></a>
<a id="trace-26235"></a>
<a id="trace-26237"></a>
<a id="trace-26263"></a>
<a id="trace-26265"></a>
<a id="trace-26282"></a>
<a id="trace-26284"></a>
<a id="trace-26314"></a>
<a id="trace-26316"></a>
<a id="trace-26332"></a>
<a id="trace-26334"></a>
- 80.25s–82.75s (×12), actor 5, squad 0 (trace 26220): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.05s, trace 26168. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5087648776657843, 'next_transition': 26235}.
<a id="trace-26342"></a>
- 83.10s–83.10s (×1), actor 0, squad 0 (trace 26342): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 80.00s, trace 26147. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05808463581731018, 'next_transition': 26761}.
<a id="trace-26343"></a>
- 83.10s–83.10s (×1), actor 0, squad 0 (trace 26343): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 26147. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05808463581731018, 'next_transition': 26761}.
<a id="trace-26761"></a>
<a id="trace-26763"></a>
<a id="trace-26780"></a>
<a id="trace-26782"></a>
<a id="trace-26811"></a>
<a id="trace-26813"></a>
<a id="trace-26839"></a>
<a id="trace-26841"></a>
<a id="trace-26920"></a>
<a id="trace-26922"></a>
<a id="trace-26964"></a>
<a id="trace-26966"></a>
- 83.25s–86.25s (×12), actor 5, squad 0 (trace 26761): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.05s, trace 26168. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08158639349425148, 'next_transition': 26780}.
<a id="trace-26975"></a>
- 86.25s–86.25s (×1), actor 0, squad 0 (trace 26975): support established: element delivered fire on threat area. Knowledge: actor memory at 85.00s, trace 26854. Next observer evidence: {'until': 87.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.021461613697483204, 'next_transition': 27019}.
<a id="trace-27019"></a>
<a id="trace-27021"></a>
<a id="trace-27045"></a>
<a id="trace-27047"></a>
<a id="trace-27081"></a>
<a id="trace-27083"></a>
<a id="trace-27163"></a>
<a id="trace-27165"></a>
<a id="trace-27249"></a>
<a id="trace-27251"></a>
- 87.25s–91.25s (×10), actor 5, squad 0 (trace 27019): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 26856. Next observer evidence: {'until': 88.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27045}.
<a id="trace-27191"></a>
- 90.95s–90.95s (×1), actor 9, squad 1 (trace 27191): support established: element delivered fire on threat area. Knowledge: actor memory at 90.00s, trace 27107. Next observer evidence: {'until': 100, 'shots': 5, 'casualties': 0, 'mean_displacement': 2.754273918914305, 'next_transition': 27601}.
<a id="trace-27192"></a>
- 90.95s–90.95s (×1), actor 9, squad 1 (trace 27192): support established: next buddy rush, at most five seconds. Knowledge: actor memory at 90.00s, trace 27107. Next observer evidence: {'until': 100, 'shots': 5, 'casualties': 0, 'mean_displacement': 2.754273918914305, 'next_transition': 27601}.
<a id="trace-27270"></a>
- 91.70s–91.70s (×1), actor 0, squad 0 (trace 27270): NeedSupport. Knowledge: actor memory at 90.00s, trace 27103. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2594447978376131, 'next_transition': 27287}.
<a id="trace-27287"></a>
<a id="trace-27289"></a>
<a id="trace-27324"></a>
<a id="trace-27326"></a>
<a id="trace-27356"></a>
<a id="trace-27358"></a>
<a id="trace-27445"></a>
<a id="trace-27447"></a>
<a id="trace-27479"></a>
<a id="trace-27481"></a>
- 92.25s–96.25s (×10), actor 5, squad 0 (trace 27287): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 27105. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18648971085893745, 'next_transition': 27324}.
<a id="trace-27510"></a>
- 96.85s–96.85s (×1), actor 0, squad 0 (trace 27510): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 95.00s, trace 27378. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6899374729112809, 'next_transition': 27520}.
<a id="trace-27520"></a>
<a id="trace-27522"></a>
<a id="trace-27543"></a>
<a id="trace-27545"></a>
<a id="trace-27566"></a>
<a id="trace-27568"></a>
<a id="trace-27802"></a>
<a id="trace-27804"></a>
<a id="trace-27834"></a>
<a id="trace-27836"></a>
<a id="trace-27868"></a>
<a id="trace-27870"></a>
<a id="trace-27893"></a>
<a id="trace-27895"></a>
<a id="trace-27915"></a>
<a id="trace-27917"></a>
<a id="trace-27995"></a>
<a id="trace-27997"></a>
<a id="trace-28025"></a>
<a id="trace-28027"></a>
<a id="trace-28051"></a>
<a id="trace-28053"></a>
<a id="trace-28077"></a>
<a id="trace-28079"></a>
<a id="trace-28104"></a>
<a id="trace-28106"></a>
<a id="trace-28186"></a>
<a id="trace-28188"></a>
<a id="trace-28267"></a>
<a id="trace-28269"></a>
<a id="trace-28298"></a>
<a id="trace-28300"></a>
<a id="trace-28324"></a>
<a id="trace-28326"></a>
<a id="trace-28353"></a>
<a id="trace-28355"></a>
<a id="trace-28430"></a>
<a id="trace-28432"></a>
- 97.25s–115.25s (×38), actor 5, squad 0 (trace 27520): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 27380. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4850822348320722, 'next_transition': 27543}.
<a id="trace-27601"></a>
- 100.00s–100.00s (×1), actor 9, squad 1 (trace 27601): effective fire without superiority for 15 s after expected support. Knowledge: actor memory at 100.00s, trace 27589. Next observer evidence: {'until': 108.4, 'shots': 4, 'casualties': 0, 'mean_displacement': 13.779260580193322, 'next_transition': 28088}.
<a id="trace-27602"></a>
- 100.00s–100.00s (×1), actor 9, squad 1 (trace 27602): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 27589. Next observer evidence: {'until': 108.4, 'shots': 4, 'casualties': 0, 'mean_displacement': 13.779260580193322, 'next_transition': 28088}.
<a id="trace-28088"></a>
- 108.40s–108.40s (×1), actor 9, squad 1 (trace 28088): support established: element delivered fire on threat area. Knowledge: actor memory at 105.00s, trace 27939. Next observer evidence: {'until': 110.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.242496388514371, 'next_transition': 28207}.
<a id="trace-28207"></a>
- 110.90s–110.90s (×1), actor 9, squad 1 (trace 28207): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 28129. Next observer evidence: {'until': 119.4, 'shots': 4, 'casualties': 1, 'mean_displacement': 1.804560676376663, 'next_transition': 28672}.
<a id="trace-28208"></a>
- 110.90s–110.90s (×1), actor 9, squad 1 (trace 28208): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 28129. Next observer evidence: {'until': 119.4, 'shots': 4, 'casualties': 1, 'mean_displacement': 1.804560676376663, 'next_transition': 28672}.
<a id="trace-28447"></a>
- 116.05s–116.05s (×1), actor 0, squad 0 (trace 28447): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 115.00s, trace 28372. Next observer evidence: None.
<a id="trace-28448"></a>
- 116.10s–116.10s (×1), actor 0, squad 0 (trace 28448): Reorganise: completed/failed drill. Knowledge: actor memory at 115.00s, trace 28372. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28579}.
<a id="trace-28450"></a>
- 116.10s–116.10s (×1), actor 0, squad 0 (trace 28450): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 28372. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28579}.
<a id="trace-28451"></a>
- 116.10s–116.10s (×1), actor 0, squad 0 (trace 28451): Reorganise complete: known contact. Knowledge: actor memory at 115.00s, trace 28372. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28579}.
<a id="trace-28579"></a>
<a id="trace-28581"></a>
<a id="trace-28614"></a>
<a id="trace-28616"></a>
<a id="trace-28641"></a>
<a id="trace-28643"></a>
<a id="trace-28663"></a>
<a id="trace-28665"></a>
- 116.25s–119.25s (×8), actor 5, squad 0 (trace 28579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 28373. Next observer evidence: {'until': 117.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.537500002285714, 'next_transition': 28614}.
<a id="trace-28672"></a>
- 119.40s–119.40s (×1), actor 9, squad 1 (trace 28672): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 115.00s, trace 28374. Next observer evidence: {'until': 132.4, 'shots': 6, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2076}.
<a id="trace-28673"></a>
- 119.60s–119.60s (×1), actor 0, squad 0 (trace 28673): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 115.00s, trace 28372. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05829499999999932, 'next_transition': 28882}.
<a id="trace-28674"></a>
- 119.60s–119.60s (×1), actor 0, squad 0 (trace 28674): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 28372. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05829499999999932, 'next_transition': 28882}.
<a id="trace-28882"></a>
<a id="trace-28884"></a>
<a id="trace-28918"></a>
<a id="trace-28920"></a>
<a id="trace-28961"></a>
<a id="trace-28963"></a>
<a id="trace-28982"></a>
<a id="trace-28984"></a>
<a id="trace-29005"></a>
<a id="trace-29007"></a>
<a id="trace-29079"></a>
<a id="trace-29081"></a>
<a id="trace-29098"></a>
<a id="trace-29100"></a>
<a id="trace-29123"></a>
<a id="trace-29125"></a>
<a id="trace-29145"></a>
<a id="trace-29147"></a>
<a id="trace-29181"></a>
<a id="trace-29183"></a>
- 120.25s–129.30s (×20), actor 5, squad 0 (trace 28882): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 28814. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.752565000000001, 'next_transition': 28918}.
<a id="trace-2076"></a>
- 132.40s–132.40s (×1), actor 0, squad 1 (events line 2076): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29312"></a>
- 132.40s–132.40s (×1), actor 0, squad 1 (trace 29312): renew committed intent (75 s lifetime). Knowledge: actor memory at 132.40s, trace 29312. Next observer evidence: {'until': 149.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29712}.
<a id="trace-29318"></a>
<a id="trace-29320"></a>
<a id="trace-29331"></a>
<a id="trace-29333"></a>
<a id="trace-29395"></a>
<a id="trace-29397"></a>
<a id="trace-29409"></a>
<a id="trace-29411"></a>
<a id="trace-29424"></a>
<a id="trace-29426"></a>
- 133.30s–137.30s (×10), actor 0, squad 0 (trace 29318): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 132.40s, trace 29312. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29331}.
<a id="trace-2081"></a>
- 138.05s–138.05s (×1), actor 0, squad 0 (events line 2081): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29438}.
<a id="trace-29434"></a>
- 138.05s–138.05s (×1), actor 0, squad 0 (trace 29434): renew committed intent (75 s lifetime). Knowledge: actor memory at 138.05s, trace 29434. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29438}.
<a id="trace-29438"></a>
<a id="trace-29440"></a>
<a id="trace-29455"></a>
<a id="trace-29457"></a>
<a id="trace-29520"></a>
<a id="trace-29522"></a>
<a id="trace-29535"></a>
<a id="trace-29537"></a>
<a id="trace-29552"></a>
<a id="trace-29554"></a>
<a id="trace-29564"></a>
<a id="trace-29566"></a>
<a id="trace-29580"></a>
<a id="trace-29582"></a>
<a id="trace-29645"></a>
<a id="trace-29647"></a>
<a id="trace-29661"></a>
<a id="trace-29663"></a>
<a id="trace-29675"></a>
<a id="trace-29677"></a>
<a id="trace-29688"></a>
<a id="trace-29690"></a>
<a id="trace-29704"></a>
<a id="trace-29706"></a>
<a id="trace-29781"></a>
<a id="trace-29783"></a>
<a id="trace-29804"></a>
<a id="trace-29806"></a>
<a id="trace-29821"></a>
<a id="trace-29823"></a>
<a id="trace-29835"></a>
<a id="trace-29837"></a>
<a id="trace-29852"></a>
<a id="trace-29854"></a>
- 138.30s–154.30s (×34), actor 0, squad 0 (trace 29438): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 138.05s, trace 29434. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29455}.
<a id="trace-29712"></a>
- 149.60s–149.60s (×1), actor 9, squad 1 (trace 29712): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 145.00s, trace 29593. Next observer evidence: None.
<a id="trace-29715"></a>
- 149.65s–149.65s (×1), actor 9, squad 1 (trace 29715): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 145.00s, trace 29593. Next observer evidence: None.
<a id="trace-29716"></a>
- 149.65s–149.65s (×1), actor 9, squad 1 (trace 29716): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 145.00s, trace 29593. Next observer evidence: None.
<a id="trace-29719"></a>
- 149.70s–149.70s (×1), actor 9, squad 1 (trace 29719): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 145.00s, trace 29593. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2109}.
<a id="trace-2109"></a>
- 154.90s–154.90s (×1), actor 0, squad 1 (events line 2109): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29864"></a>
- 154.90s–154.90s (×1), actor 0, squad 1 (trace 29864): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.137486 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 154.90s, trace 29864. Next observer evidence: {'until': 156.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29951}.
<a id="trace-29865"></a>
- 154.90s–154.90s (×1), actor 0, squad 1 (trace 29865): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.137486 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 154.90s, trace 29865. Next observer evidence: {'until': 156.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29951}.
<a id="trace-29920"></a>
- 155.20s–155.20s (×1), actor 0, squad 0 (trace 29920): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 155.00s, trace 29868. Next observer evidence: None.
<a id="trace-29925"></a>
<a id="trace-29927"></a>
<a id="trace-29943"></a>
<a id="trace-29945"></a>
<a id="trace-30022"></a>
<a id="trace-30024"></a>
<a id="trace-30042"></a>
<a id="trace-30044"></a>
<a id="trace-30066"></a>
- 155.30s–159.30s (×9), actor 0, squad 0 (trace 29925): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 155.00s, trace 29868. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29943}.
<a id="trace-29951"></a>
- 156.55s–156.55s (×1), actor 9, squad 1 (trace 29951): Withdraw to received rally. Knowledge: actor memory at 155.00s, trace 29869. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.002600000000005, 'next_transition': 30172}.
<a id="trace-29952"></a>
- 156.55s–156.55s (×1), actor 9, squad 1 (trace 29952): rearward bound: one stationary suppressing element. Knowledge: actor memory at 155.00s, trace 29869. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.002600000000005, 'next_transition': 30172}.
<a id="trace-30172"></a>
<a id="trace-30190"></a>
- 163.30s–164.30s (×2), actor 9, squad 1 (trace 30172): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 160.00s, trace 30080. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.150099999999995, 'next_transition': 30190}.
<a id="trace-2146"></a>
- 164.85s–164.85s (×1), actor 9, squad 1 (events line 2146): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30202"></a>
- 164.85s–164.85s (×1), actor 9, squad 1 (trace 30202): renew committed intent (75 s lifetime). Knowledge: actor memory at 164.85s, trace 30202. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259999999999998, 'next_transition': 30265}.
<a id="trace-30265"></a>
<a id="trace-30279"></a>
<a id="trace-30294"></a>
- 165.30s–167.30s (×3), actor 9, squad 1 (trace 30265): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 165.00s, trace 30206. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1500000000000057, 'next_transition': 30279}.
<a id="trace-30299"></a>
- 167.30s–167.30s (×1), actor 9, squad 1 (trace 30299): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 165.00s, trace 30206. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30312}.
<a id="trace-30300"></a>
- 167.30s–167.30s (×1), actor 9, squad 1 (trace 30300): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 165.00s, trace 30206. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30312}.
<a id="trace-30312"></a>
<a id="trace-30329"></a>
<a id="trace-30396"></a>
<a id="trace-30412"></a>
<a id="trace-30429"></a>
<a id="trace-30443"></a>
<a id="trace-30459"></a>
<a id="trace-30525"></a>
<a id="trace-30539"></a>
<a id="trace-30556"></a>
<a id="trace-30578"></a>
<a id="trace-30592"></a>
<a id="trace-30659"></a>
<a id="trace-30670"></a>
<a id="trace-30691"></a>
<a id="trace-30706"></a>
<a id="trace-30723"></a>
<a id="trace-30794"></a>
<a id="trace-30808"></a>
<a id="trace-30824"></a>
<a id="trace-30837"></a>
<a id="trace-30856"></a>
<a id="trace-30926"></a>
<a id="trace-30942"></a>
<a id="trace-30960"></a>
<a id="trace-30973"></a>
<a id="trace-30989"></a>
<a id="trace-31062"></a>
<a id="trace-31077"></a>
<a id="trace-31092"></a>
<a id="trace-31114"></a>
<a id="trace-31127"></a>
<a id="trace-31195"></a>
<a id="trace-31211"></a>
<a id="trace-31230"></a>
<a id="trace-31244"></a>
<a id="trace-31263"></a>
<a id="trace-31333"></a>
<a id="trace-31346"></a>
<a id="trace-31362"></a>
<a id="trace-31381"></a>
<a id="trace-31395"></a>
<a id="trace-31465"></a>
<a id="trace-31486"></a>
<a id="trace-31498"></a>
<a id="trace-31514"></a>
<a id="trace-31530"></a>
<a id="trace-31600"></a>
<a id="trace-31618"></a>
<a id="trace-31634"></a>
<a id="trace-31652"></a>
<a id="trace-31733"></a>
<a id="trace-31748"></a>
<a id="trace-31766"></a>
<a id="trace-31783"></a>
<a id="trace-31799"></a>
<a id="trace-31869"></a>
- 168.30s–225.30s (×57), actor 9, squad 1 (trace 30312): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 165.00s, trace 30206. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30329}.
<a id="trace-2526"></a>
- 225.60s–225.60s (×1), actor 9, squad 1 (events line 2526): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31875"></a>
- 225.60s–225.60s (×1), actor 9, squad 1 (trace 31875): renew committed intent (75 s lifetime). Knowledge: actor memory at 225.60s, trace 31875. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31886}.
<a id="trace-31886"></a>
<a id="trace-31900"></a>
<a id="trace-31922"></a>
<a id="trace-31936"></a>
<a id="trace-32004"></a>
<a id="trace-32027"></a>
<a id="trace-32040"></a>
<a id="trace-32056"></a>
<a id="trace-32072"></a>
<a id="trace-32140"></a>
<a id="trace-32156"></a>
<a id="trace-32172"></a>
<a id="trace-32191"></a>
<a id="trace-32204"></a>
<a id="trace-32272"></a>
<a id="trace-32293"></a>
<a id="trace-32305"></a>
<a id="trace-32322"></a>
<a id="trace-32345"></a>
<a id="trace-32428"></a>
<a id="trace-32442"></a>
<a id="trace-32459"></a>
<a id="trace-32476"></a>
<a id="trace-32544"></a>
<a id="trace-32563"></a>
<a id="trace-32576"></a>
<a id="trace-32592"></a>
<a id="trace-32607"></a>
<a id="trace-32676"></a>
<a id="trace-32695"></a>
<a id="trace-32708"></a>
<a id="trace-32726"></a>
<a id="trace-32741"></a>
<a id="trace-32807"></a>
<a id="trace-32830"></a>
<a id="trace-32843"></a>
<a id="trace-32857"></a>
<a id="trace-32881"></a>
<a id="trace-32961"></a>
<a id="trace-32974"></a>
<a id="trace-32992"></a>
<a id="trace-33009"></a>
<a id="trace-33077"></a>
<a id="trace-33096"></a>
<a id="trace-33108"></a>
<a id="trace-33124"></a>
<a id="trace-33147"></a>
<a id="trace-33211"></a>
<a id="trace-33230"></a>
<a id="trace-33250"></a>
<a id="trace-33262"></a>
<a id="trace-33281"></a>
<a id="trace-33347"></a>
<a id="trace-33367"></a>
<a id="trace-33383"></a>
<a id="trace-33399"></a>
<a id="trace-33419"></a>
<a id="trace-33483"></a>
<a id="trace-33502"></a>
<a id="trace-33515"></a>
- 226.30s–287.30s (×60), actor 9, squad 1 (trace 31886): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 225.60s, trace 31875. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31900}.
<a id="trace-2957"></a>
- 287.35s–287.35s (×1), actor 9, squad 1 (events line 2957): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-33520"></a>
- 287.35s–287.35s (×1), actor 9, squad 1 (trace 33520): renew committed intent (75 s lifetime). Knowledge: actor memory at 287.35s, trace 33520. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33536}.
<a id="trace-33536"></a>
<a id="trace-33555"></a>
<a id="trace-33621"></a>
<a id="trace-33640"></a>
<a id="trace-33654"></a>
<a id="trace-33668"></a>
<a id="trace-33691"></a>
<a id="trace-33755"></a>
<a id="trace-33773"></a>
<a id="trace-33794"></a>
<a id="trace-33807"></a>
<a id="trace-33825"></a>
<a id="trace-33892"></a>
<a id="trace-33912"></a>
<a id="trace-33927"></a>
<a id="trace-33944"></a>
<a id="trace-33965"></a>
<a id="trace-34046"></a>
<a id="trace-34066"></a>
<a id="trace-34079"></a>
<a id="trace-34097"></a>
<a id="trace-34169"></a>
<a id="trace-34181"></a>
<a id="trace-34199"></a>
<a id="trace-34214"></a>
<a id="trace-34234"></a>
<a id="trace-34300"></a>
<a id="trace-34317"></a>
<a id="trace-34335"></a>
<a id="trace-34349"></a>
<a id="trace-34368"></a>
<a id="trace-34434"></a>
<a id="trace-34452"></a>
<a id="trace-34469"></a>
<a id="trace-34482"></a>
<a id="trace-34568"></a>
<a id="trace-34582"></a>
<a id="trace-34603"></a>
<a id="trace-34616"></a>
<a id="trace-34635"></a>
<a id="trace-34709"></a>
<a id="trace-34721"></a>
<a id="trace-34737"></a>
<a id="trace-34750"></a>
<a id="trace-34771"></a>
<a id="trace-34839"></a>
<a id="trace-34874"></a>
<a id="trace-34886"></a>
<a id="trace-34903"></a>
<a id="trace-34976"></a>
<a id="trace-35005"></a>
<a id="trace-35025"></a>
<a id="trace-35039"></a>
<a id="trace-35108"></a>
<a id="trace-35124"></a>
<a id="trace-35142"></a>
<a id="trace-35158"></a>
- 288.30s–348.30s (×57), actor 9, squad 1 (trace 33536): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 287.35s, trace 33520. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33555}.
<a id="trace-3397"></a>
- 348.95s–348.95s (×1), actor 9, squad 1 (events line 3397): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-35168"></a>
- 348.95s–348.95s (×1), actor 9, squad 1 (trace 35168): renew committed intent (75 s lifetime). Knowledge: actor memory at 348.95s, trace 35168. Next observer evidence: {'until': 349.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35178}.
<a id="trace-35178"></a>
<a id="trace-35249"></a>
<a id="trace-35263"></a>
<a id="trace-35312"></a>
<a id="trace-35381"></a>
<a id="trace-35397"></a>
<a id="trace-35414"></a>
<a id="trace-35429"></a>
<a id="trace-35445"></a>
- 349.30s–359.30s (×9), actor 9, squad 1 (trace 35178): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 348.95s, trace 35168. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35249}.

## Net delivery

213 matched order/radio deliveries; 260 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.468s; maximum 2.000s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 3798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 3799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3800: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3801: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3802: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3803: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3804: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3805: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3806: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3807: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3808: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3809: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 3810: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 3811: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 3978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 3979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4033: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4034: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4035: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4036: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4037: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4038: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4039: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4040: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4041: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4042: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4043: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4044: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6288: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6294: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6295: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 6297: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 6298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6299: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6300: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6301: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6302: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6303: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6304: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6305: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6306: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6307: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6308: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 6309: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 6310: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 7041: estimate 14.94; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 7042: estimate 14.94; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 7043: estimate 14.94; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 7044: estimate 14.94; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 7778: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7783: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7784: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7785: estimate 15.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7786: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 7787: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 7788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7789: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7790: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7791: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7792: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7793: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7794: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7795: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7796: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7797: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7798: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 7799: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 7800: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 13303: estimate 15.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 13304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 13305: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 13306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 13307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 13308: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 13309: estimate 15.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 13310: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 13311: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 13312: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 13313: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 13314: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 13315: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 13316: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 13317: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 13318: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 13319: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 13320: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 13321: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 13322: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 13323: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 13324: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 13325: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 16150: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 16151: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 16152: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 16153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 16154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 16155: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 16156: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 16157: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 16158: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 16159: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 16160: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 16161: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 16162: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 16163: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 16164: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 16165: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 16166: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 16167: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 16168: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 16169: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 16170: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 16171: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 16828: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 16829: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 16830: estimate 15.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 16831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 16832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 16833: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 16834: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 16835: estimate 15.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 16836: estimate 15.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 16837: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 16838: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 16839: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 16840: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 16841: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 16842: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 16843: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 16844: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 16845: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 16846: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 16847: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 16848: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 16849: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 17667: estimate 15.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 17668: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 17669: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 17670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 17671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 17672: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 17673: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 17674: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 17675: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 17676: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 17677: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 17678: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 17679: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 17680: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 17681: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 17682: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 17683: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 17684: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 17685: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 17686: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 17687: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 17688: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 21082: estimate 15.21; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 21083: estimate 15.21; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 21319: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 21320: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 21321: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 21322: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 21323: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 21324: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 21325: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 21326: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 21327: estimate 15.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 21328: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 21329: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 21330: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 21331: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 21332: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 21333: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 21334: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 21335: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 21336: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 21337: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 21338: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 21339: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 21340: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 24814: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 24815: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 24816: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 24817: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 24818: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 24819: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 24820: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 24821: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 24822: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 24823: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 24824: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 24825: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 24826: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 24827: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 24828: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 24829: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 24830: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 24831: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 24832: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 24833: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 76.55s leader 5, trace 25931: estimate 15.15; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 76.55s leader 5, trace 25932: estimate 15.15; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 77.75s leader 5, trace 26029: estimate 15.13; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 77.75s leader 5, trace 26030: estimate 15.13; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 26147: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 26148: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 26149: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 26150: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 26151: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 26152: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 26153: estimate 15.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 26154: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 26155: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 26156: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 26157: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 26158: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 26159: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 26160: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 26161: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 26162: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 26163: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 26164: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 26165: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.05s leader 5, trace 26168: estimate 15.10; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 26854: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 26855: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 26856: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 26857: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 26858: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 26859: estimate 15.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 26860: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 26861: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 26862: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 26863: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 26864: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 26865: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 26866: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 26867: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 26868: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 26869: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 26870: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 26871: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 27103: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 27104: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 27105: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 27106: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 27107: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 27108: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 27109: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 27110: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 27111: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 27112: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 27113: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 27114: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 27115: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 27116: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 27117: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 27118: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 27119: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 27378: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 27379: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 27380: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 27381: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 27382: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 27383: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 27384: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 27385: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 27386: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 27387: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 27388: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 27389: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 27390: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 27391: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 27392: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 27393: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 27585: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 27586: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 27587: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 27588: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 27589: estimate 15.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 27590: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 27591: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 27592: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 27593: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 27594: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 27595: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 27596: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 27597: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 27598: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 27599: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 27600: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 27935: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 27936: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 27937: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 27938: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 27939: estimate 15.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 27940: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 27941: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 27942: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 27943: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 27944: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 27945: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 27946: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 27947: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 27948: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 27949: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 27950: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 28125: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 28126: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 28127: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 28128: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 28129: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 28130: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 28131: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 28132: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 28133: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 28134: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 28135: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 28136: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 28137: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 28138: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 28139: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 28140: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 28372: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 28373: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 28374: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 28375: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 28376: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 28377: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 28378: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 28379: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 28380: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 28381: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 28382: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 28383: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 28384: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 28813: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 28814: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 28815: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 28816: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 28817: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 28818: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 28819: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 28820: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 28821: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 28822: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 28823: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 28824: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 28825: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 29023: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 29024: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 29025: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 29026: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 29027: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 29028: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 29029: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 29030: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 29031: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 29032: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 29033: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 29034: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 29035: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 29211: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 29212: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 29213: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 29214: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 29215: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 29216: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 29217: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 29218: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 29219: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 29220: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 29221: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 29222: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 132.40s leader 0, trace 29312: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 29342: estimate 14.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 29343: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 29344: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 29345: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 29346: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 29347: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 29348: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 29349: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 29350: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 29351: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 29352: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 29353: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.05s leader 0, trace 29434: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 29466: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 29467: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 29468: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 29469: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 29470: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 29471: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 29472: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 29473: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 29474: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 29475: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 29476: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 29477: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 29592: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 29593: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 29594: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 29595: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 29596: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 29597: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 29598: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 29599: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 29600: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 29601: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 29602: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 29603: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 29726: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 29727: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 29728: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 29729: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 29730: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 29731: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 29732: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 29733: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 29734: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 29735: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 29736: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 29737: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 154.90s leader 0, trace 29864: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 154.90s leader 0, trace 29865: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 29868: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 29869: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 29870: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 29871: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 29872: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 29873: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 29874: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 29875: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 29876: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 29877: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 29878: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 29879: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 30080: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 30081: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 30082: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 30083: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 30084: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 30085: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 30086: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 30087: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 30088: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 30089: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 30090: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.85s leader 9, trace 30202: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 30206: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 30207: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 30208: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 30209: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 30210: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 30211: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 30212: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 30213: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 30214: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 30215: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 30216: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 30341: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 30342: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 30343: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 30344: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 30345: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 30346: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 30347: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 30348: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 30349: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 30350: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 30351: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 30470: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 30471: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 30472: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 30473: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 30474: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 30475: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 30476: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 30477: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 30478: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 30479: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 30480: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 30603: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 30604: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 30605: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 30606: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 30607: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 30608: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 30609: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 30610: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 30611: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 30612: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 30613: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 30741: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 30742: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 30743: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 30744: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 30745: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 30746: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 30747: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 30748: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 30749: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 30750: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 30751: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 30871: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 30872: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 30873: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 30874: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 30875: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 30876: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 30877: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 30878: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 30879: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 30880: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 30881: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 31002: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 31003: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 31004: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 31005: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 31006: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 31007: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 31008: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 31009: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 31010: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 31011: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 31012: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 31139: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 31140: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 31141: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 31142: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 31143: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 31144: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 31145: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 31146: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 31147: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 31148: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 31149: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 31279: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 31280: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 31281: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 31282: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 31283: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 31284: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 31285: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 31286: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 31287: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 31288: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 31289: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 31409: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 31410: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 31411: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 31412: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 31413: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 31414: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 31415: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 31416: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 31417: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 31418: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 31419: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 31547: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 31548: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 31549: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 31550: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 31551: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 31552: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 31553: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 31554: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 31555: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 31556: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 31557: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 31680: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 31681: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 31682: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 31683: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 31684: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 31685: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 31686: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 31687: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 31688: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 31689: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 31690: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 31816: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 31817: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 31818: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 31819: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 31820: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 31821: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 31822: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 31823: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 31824: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 31825: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 31826: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.60s leader 9, trace 31875: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 31951: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 31952: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 31953: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 31954: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 31955: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 31956: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 31957: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 31958: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 31959: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 31960: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 31961: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 32086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 32087: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 32088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 32089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 32090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 32091: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 32092: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 32093: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 32094: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 32095: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 32096: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 32218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 32219: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 32220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 32221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 32222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 32223: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 32224: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 32225: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 32226: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 32227: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 32228: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 32357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 32358: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 32359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 32360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 32361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 32362: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 32363: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 32364: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 32365: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 32366: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 32367: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 32488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 32489: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 32490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 32491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 32492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 32493: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 32494: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 32495: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 32496: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 32497: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 32498: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 32623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 32624: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 32625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 32626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 32627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 32628: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 32629: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 32630: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 32631: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 32632: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 32633: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 32754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 32755: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 32756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 32757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 32758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 32759: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 32760: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 32761: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 32762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 32763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 32764: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 32890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 32891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 32892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 32893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 32894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 32895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 32896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 32897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 32898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 32899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 32900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 33020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 33021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 33022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 33023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 33024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 33025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 33026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 33027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 33028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 33029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 33030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 33159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 33160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 33161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 33162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 33163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 33164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 33165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 33166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 33167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 33168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 33169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 33291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 33292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 33293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 33294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 33295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 33296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 33297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 33298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 33299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 33300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 33301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 33429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 33430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 33431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 33432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 33433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 33434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 33435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 33436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 33437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 33438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 33439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 287.35s leader 9, trace 33520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 33568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 33569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 33570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 33571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 33572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 33573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 33574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 33575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 33576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 33577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 33578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 33700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 33701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 33702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 33703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 33704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 33705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 33706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 33707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 33708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 33709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 33710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 33835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 33836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 33837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 33838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 33839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 33840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 33841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 33842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 33843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 33844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 33845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 33977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 33978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 33979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 33980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 33981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 33982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 33983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 33984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 33985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 33986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 33987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 34110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 34111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 34112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 34113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 34114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 34115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 34116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 34117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 34118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 34119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 34120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 34243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 34244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 34245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 34246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 34247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 34248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 34249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 34250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 34251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 34252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 34253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 34381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 34382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 34383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 34384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 34385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 34386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 34387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 34388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 34389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 34390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 34391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 34512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 34513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 34514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 34515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 34516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 34517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 34518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 34519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 34520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 34521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 34522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 34648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 34649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 34650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 34651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 34652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 34653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 34654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 34655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 34656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 34657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 34658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 34784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 34785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 34786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 34787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 34788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 34789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 34790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 34791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 34792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 34793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 34794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 34917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 34918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 34919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 34920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 34921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 34922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 34923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 34924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 34925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 34926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 34927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 35050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 35051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 35052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 35053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 35054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 35055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 35056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 35057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 35058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 35059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 35060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 348.95s leader 9, trace 35168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 35195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 35196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 35197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 35198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 35199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 35200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 35201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 35202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 35203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 35204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 35205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 35325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 35326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 35327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 35328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 35329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 35330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 35331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 35332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 35333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 35334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 35335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 35458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 35459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 35460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 35461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 35462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 35463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 35464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 35465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 35466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 35467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 35468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Voss killed in action
- 1: Dane killed in action
- 1: Tern killed in action
- 1: Rook killed in action
- 1: Ash killed in action
- 1: Moss killed in action
- 1: Holt incapacitated
- 1: Reed killed in action
- 1: Ellis incapacitated
- 1: Soren incapacitated
- 1: Iven killed in action
- 1: Vale killed in action

## Outcome attribution

- 154.90s, evidence 2109: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 154.90s, evidence 29864: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.137486 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 156.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29951}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 154.90s, evidence 29865: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.137486 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 156.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29951}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 164.85s, evidence 2146: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 225.60s, evidence 2526: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 287.35s, evidence 2957: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 348.95s, evidence 3397: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
