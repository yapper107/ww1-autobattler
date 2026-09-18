# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/28/108/good-azure/battle-108-1789674293960885996`

## Battle summary

**Ember** · 360 s · 368 shots.

### Turning points

- 14.8s, squad 4: contact (events line 177). First recorded contact.
- 33.6s, squad 0: assault ([trace 7131](#trace-7131)). 34.2s, squad 0: advanced tactically.
- 37.9s, squad 1: help call ([trace 7615](#trace-7615)). No completion observed before termination.
- 38.0s, squad 0: help call ([trace 7626](#trace-7626)). 63.2s, squad 1: answered a neighbour with support by fire.
- 51.9s, squad 0: assault ([trace 9600](#trace-9600)). 52.2s, squad 0: advanced tactically.
- 62.0s, squad 0: help call ([trace 10292](#trace-10292)). 63.2s, squad 1: answered a neighbour with support by fire.
- 63.2s, squad 1: help answer ([trace 10616](#trace-10616)). 99.3s, squad 1: advanced tactically.
- 110.8s, squad 0: assault ([trace 16301](#trace-16301)). 111.1s, squad 0: advanced tactically.
- 118.7s, squad 0: help call ([trace 18137](#trace-18137)). 119.9s, squad 1: answered a neighbour with support by fire.
- 119.9s, squad 1: help answer ([trace 18181](#trace-18181)). 123.3s, squad 1: advanced tactically.
- 7 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 37 shots, 8/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 6 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 270 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 55 shots, 1/2 lost.

### Decisions and attribution

At 123.1s, squad 0 chose leader risk threshold crossed without support ([trace 18477](#trace-18477)), followed by 0 shots and 1 own casualties; estimate 12.1 against 0 distinct squad-reported contacts; At 220.4s, squad 0 chose advanced tactically ([trace 27369](#trace-27369)), followed by 0 shots and 1 own casualties; estimate 10.3 against 0 distinct squad-reported contacts; At 250.3s, squad 0 chose renewed the existing objective ([trace 28944](#trace-28944)), followed by 0 shots and 1 own casualties; estimate 9.2 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 660](#trace-660)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449925900764828, 'next_transition': 679}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 662](#trace-662)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 793}.

### Communication

273 matched deliveries (mean 0.50s, max 2.50s); 512 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.80s, squad 4, contact, evidence events line 177: First recorded contact; .
- 33.60s, squad 0, assault, evidence 7131: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 34.2s, squad 0: advanced tactically.
- 37.85s, squad 1, help call, evidence 7615: NeedSupport; No completion observed before termination.
- 38.05s, squad 0, help call, evidence 7626: NeedSupport; 63.2s, squad 1: answered a neighbour with support by fire.
- 51.85s, squad 0, assault, evidence 9600: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 52.2s, squad 0: advanced tactically.
- 62.05s, squad 0, help call, evidence 10292: NeedSupport; 63.2s, squad 1: answered a neighbour with support by fire.
- 63.25s, squad 1, help answer, evidence 10616: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 99.3s, squad 1: advanced tactically.
- 110.85s, squad 0, assault, evidence 16301: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 111.1s, squad 0: advanced tactically.
- 118.70s, squad 0, help call, evidence 18137: NeedSupport; 119.9s, squad 1: answered a neighbour with support by fire.
- 119.90s, squad 1, help answer, evidence 18181: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 123.3s, squad 1: advanced tactically.
- 139.65s, squad 1, withdrawal, evidence 20383: BreakContact: believed ratio at least two without superiority; 159.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 220.15s, squad 0, help call, evidence 27303: NeedSupport; 221.8s, squad 1: answered a neighbour with support by fire.
- 221.80s, squad 1, help answer, evidence 27733: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 224.2s, squad 1: answered a neighbour with support by fire.
- 222.50s, squad 0, withdrawal, evidence 27752: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 222.50s, squad 0, help call, evidence 27954: NeedSupport; 224.2s, squad 1: answered a neighbour with support by fire.
- 224.15s, squad 1, help answer, evidence 28012: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 226.7s, squad 1: advanced tactically.
- 259.85s, squad 1, withdrawal, evidence 29178: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791554998100756, 'next_transition': 546}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791554998100756, 'next_transition': 546}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791554998100756, 'next_transition': 546}.
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
<a id="trace-605"></a>
<a id="trace-607"></a>
<a id="trace-630"></a>
<a id="trace-632"></a>
<a id="trace-649"></a>
<a id="trace-651"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 546): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259977561068375, 'next_transition': 574}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449925900764828, 'next_transition': 679}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 793}.
<a id="trace-660"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 660): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 660. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449925900764828, 'next_transition': 679}.
<a id="trace-661"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 661): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 661. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449925900764828, 'next_transition': 679}.
<a id="trace-662"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 662): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 662. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 793}.
<a id="trace-663"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 663): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 663. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.41005767816957, 'next_transition': 793}.
<a id="trace-679"></a>
<a id="trace-681"></a>
<a id="trace-705"></a>
<a id="trace-707"></a>
<a id="trace-787"></a>
<a id="trace-789"></a>
<a id="trace-847"></a>
<a id="trace-849"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 679): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 663. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449919534912736, 'next_transition': 705}.
<a id="trace-793"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 793): traveling overwatch. Knowledge: actor memory at 5.00s, trace 722. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.468364541584725, 'next_transition': 1724}.
<a id="trace-794"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 794): received platoon directive. Knowledge: actor memory at 5.00s, trace 722. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.468364541584725, 'next_transition': 1724}.
<a id="trace-851"></a>
<a id="trace-853"></a>
<a id="trace-999"></a>
<a id="trace-1001"></a>
<a id="trace-1038"></a>
<a id="trace-1040"></a>
<a id="trace-1080"></a>
<a id="trace-1082"></a>
<a id="trace-1118"></a>
<a id="trace-1120"></a>
<a id="trace-1152"></a>
<a id="trace-1154"></a>
<a id="trace-1199"></a>
<a id="trace-1201"></a>
<a id="trace-1234"></a>
<a id="trace-1236"></a>
<a id="trace-1353"></a>
<a id="trace-1355"></a>
<a id="trace-1377"></a>
<a id="trace-1379"></a>
<a id="trace-1401"></a>
<a id="trace-1403"></a>
<a id="trace-1426"></a>
<a id="trace-1428"></a>
<a id="trace-1452"></a>
<a id="trace-1454"></a>
<a id="trace-1468"></a>
<a id="trace-1470"></a>
<a id="trace-1494"></a>
<a id="trace-1496"></a>
<a id="trace-1541"></a>
<a id="trace-1543"></a>
<a id="trace-1715"></a>
<a id="trace-1717"></a>
<a id="trace-2476"></a>
<a id="trace-2478"></a>
<a id="trace-2821"></a>
<a id="trace-2823"></a>
<a id="trace-3321"></a>
<a id="trace-3323"></a>
<a id="trace-4023"></a>
<a id="trace-4025"></a>
<a id="trace-4080"></a>
<a id="trace-4082"></a>
<a id="trace-4175"></a>
<a id="trace-4177"></a>
<a id="trace-4276"></a>
<a id="trace-4278"></a>
<a id="trace-4334"></a>
<a id="trace-4336"></a>
<a id="trace-4659"></a>
<a id="trace-4661"></a>
<a id="trace-4686"></a>
<a id="trace-4688"></a>
<a id="trace-4727"></a>
<a id="trace-4729"></a>
<a id="trace-4755"></a>
<a id="trace-4757"></a>
<a id="trace-4784"></a>
<a id="trace-4786"></a>
<a id="trace-4808"></a>
<a id="trace-4810"></a>
<a id="trace-5366"></a>
<a id="trace-5368"></a>
<a id="trace-5416"></a>
<a id="trace-5418"></a>
<a id="trace-5535"></a>
<a id="trace-5537"></a>
<a id="trace-5562"></a>
<a id="trace-5564"></a>
<a id="trace-5602"></a>
<a id="trace-5604"></a>
<a id="trace-5629"></a>
<a id="trace-5631"></a>
<a id="trace-5647"></a>
<a id="trace-5649"></a>
<a id="trace-5665"></a>
<a id="trace-5667"></a>
<a id="trace-5685"></a>
<a id="trace-5687"></a>
<a id="trace-5703"></a>
<a id="trace-5705"></a>
<a id="trace-5830"></a>
<a id="trace-5832"></a>
<a id="trace-5876"></a>
<a id="trace-5878"></a>
<a id="trace-5897"></a>
<a id="trace-5899"></a>
<a id="trace-5912"></a>
<a id="trace-5914"></a>
<a id="trace-7368"></a>
<a id="trace-7370"></a>
<a id="trace-7384"></a>
<a id="trace-7386"></a>
<a id="trace-7479"></a>
<a id="trace-7481"></a>
<a id="trace-7513"></a>
<a id="trace-7515"></a>
<a id="trace-7535"></a>
<a id="trace-7537"></a>
<a id="trace-7572"></a>
<a id="trace-7574"></a>
<a id="trace-7602"></a>
<a id="trace-7604"></a>
<a id="trace-7646"></a>
<a id="trace-7648"></a>
<a id="trace-7662"></a>
<a id="trace-7664"></a>
<a id="trace-7680"></a>
<a id="trace-7682"></a>
<a id="trace-7695"></a>
<a id="trace-7697"></a>
<a id="trace-7926"></a>
<a id="trace-7928"></a>
<a id="trace-7958"></a>
<a id="trace-7960"></a>
<a id="trace-7990"></a>
<a id="trace-7992"></a>
<a id="trace-8072"></a>
<a id="trace-8074"></a>
<a id="trace-8191"></a>
<a id="trace-8193"></a>
<a id="trace-8214"></a>
<a id="trace-8216"></a>
<a id="trace-8236"></a>
<a id="trace-8238"></a>
<a id="trace-8313"></a>
<a id="trace-8315"></a>
<a id="trace-8328"></a>
<a id="trace-8330"></a>
<a id="trace-8354"></a>
<a id="trace-8356"></a>
<a id="trace-8370"></a>
<a id="trace-8372"></a>
<a id="trace-8537"></a>
<a id="trace-8539"></a>
<a id="trace-8551"></a>
<a id="trace-8553"></a>
<a id="trace-8587"></a>
<a id="trace-8589"></a>
<a id="trace-8610"></a>
<a id="trace-8612"></a>
<a id="trace-8638"></a>
<a id="trace-8640"></a>
<a id="trace-8658"></a>
<a id="trace-8660"></a>
<a id="trace-8742"></a>
<a id="trace-8744"></a>
<a id="trace-8760"></a>
<a id="trace-8762"></a>
<a id="trace-8780"></a>
<a id="trace-8782"></a>
<a id="trace-8792"></a>
<a id="trace-8794"></a>
<a id="trace-9801"></a>
<a id="trace-9803"></a>
<a id="trace-9821"></a>
<a id="trace-9823"></a>
<a id="trace-9858"></a>
<a id="trace-9860"></a>
<a id="trace-9893"></a>
<a id="trace-9895"></a>
<a id="trace-9908"></a>
<a id="trace-9910"></a>
<a id="trace-9921"></a>
<a id="trace-9923"></a>
<a id="trace-10002"></a>
<a id="trace-10004"></a>
<a id="trace-10027"></a>
<a id="trace-10029"></a>
<a id="trace-10055"></a>
<a id="trace-10057"></a>
<a id="trace-10074"></a>
<a id="trace-10076"></a>
<a id="trace-10086"></a>
<a id="trace-10088"></a>
<a id="trace-10097"></a>
<a id="trace-10099"></a>
<a id="trace-10125"></a>
<a id="trace-10127"></a>
<a id="trace-10145"></a>
<a id="trace-10147"></a>
<a id="trace-10155"></a>
<a id="trace-10157"></a>
<a id="trace-10252"></a>
<a id="trace-10254"></a>
<a id="trace-10281"></a>
<a id="trace-10283"></a>
<a id="trace-10314"></a>
<a id="trace-10316"></a>
<a id="trace-10597"></a>
<a id="trace-10599"></a>
<a id="trace-10613"></a>
<a id="trace-10615"></a>
<a id="trace-10640"></a>
<a id="trace-10642"></a>
<a id="trace-10665"></a>
<a id="trace-10667"></a>
<a id="trace-10801"></a>
<a id="trace-10803"></a>
<a id="trace-11127"></a>
<a id="trace-11129"></a>
<a id="trace-11276"></a>
<a id="trace-11278"></a>
<a id="trace-11306"></a>
<a id="trace-11308"></a>
<a id="trace-11317"></a>
<a id="trace-11319"></a>
<a id="trace-11416"></a>
<a id="trace-11418"></a>
<a id="trace-11433"></a>
<a id="trace-11435"></a>
<a id="trace-11445"></a>
<a id="trace-11447"></a>
<a id="trace-11469"></a>
<a id="trace-11471"></a>
<a id="trace-11481"></a>
<a id="trace-11483"></a>
<a id="trace-11506"></a>
<a id="trace-11508"></a>
<a id="trace-11787"></a>
<a id="trace-11789"></a>
<a id="trace-11814"></a>
<a id="trace-11816"></a>
<a id="trace-11831"></a>
<a id="trace-11833"></a>
<a id="trace-11918"></a>
<a id="trace-11920"></a>
<a id="trace-11937"></a>
<a id="trace-11939"></a>
<a id="trace-11958"></a>
<a id="trace-11960"></a>
<a id="trace-11972"></a>
<a id="trace-11974"></a>
<a id="trace-11997"></a>
<a id="trace-11999"></a>
<a id="trace-12014"></a>
<a id="trace-12016"></a>
<a id="trace-12039"></a>
<a id="trace-12041"></a>
<a id="trace-12056"></a>
<a id="trace-12058"></a>
<a id="trace-12214"></a>
<a id="trace-12216"></a>
<a id="trace-12228"></a>
<a id="trace-12230"></a>
<a id="trace-12332"></a>
<a id="trace-12334"></a>
<a id="trace-12359"></a>
<a id="trace-12361"></a>
<a id="trace-12387"></a>
<a id="trace-12389"></a>
<a id="trace-12412"></a>
<a id="trace-12414"></a>
<a id="trace-12443"></a>
<a id="trace-12445"></a>
<a id="trace-12464"></a>
<a id="trace-12466"></a>
<a id="trace-12487"></a>
<a id="trace-12489"></a>
<a id="trace-12503"></a>
<a id="trace-12505"></a>
<a id="trace-12593"></a>
<a id="trace-12595"></a>
<a id="trace-12626"></a>
<a id="trace-12628"></a>
<a id="trace-12640"></a>
<a id="trace-12642"></a>
<a id="trace-12670"></a>
<a id="trace-12672"></a>
<a id="trace-12717"></a>
<a id="trace-12719"></a>
<a id="trace-12741"></a>
<a id="trace-12743"></a>
<a id="trace-12771"></a>
<a id="trace-12773"></a>
<a id="trace-12783"></a>
<a id="trace-12785"></a>
<a id="trace-12883"></a>
<a id="trace-12885"></a>
<a id="trace-13284"></a>
<a id="trace-13286"></a>
<a id="trace-13524"></a>
<a id="trace-13526"></a>
<a id="trace-13582"></a>
<a id="trace-13584"></a>
<a id="trace-13598"></a>
<a id="trace-13600"></a>
<a id="trace-13628"></a>
<a id="trace-13630"></a>
<a id="trace-13652"></a>
<a id="trace-13654"></a>
<a id="trace-13734"></a>
<a id="trace-13745"></a>
<a id="trace-13764"></a>
<a id="trace-13776"></a>
<a id="trace-13799"></a>
<a id="trace-14116"></a>
<a id="trace-14155"></a>
<a id="trace-14157"></a>
<a id="trace-14179"></a>
<a id="trace-14181"></a>
<a id="trace-14192"></a>
<a id="trace-14194"></a>
<a id="trace-14278"></a>
<a id="trace-14280"></a>
<a id="trace-14294"></a>
<a id="trace-14296"></a>
<a id="trace-14314"></a>
<a id="trace-14316"></a>
<a id="trace-14366"></a>
<a id="trace-14368"></a>
<a id="trace-14387"></a>
<a id="trace-14389"></a>
<a id="trace-15060"></a>
<a id="trace-15062"></a>
<a id="trace-15079"></a>
<a id="trace-15081"></a>
<a id="trace-15097"></a>
<a id="trace-15099"></a>
<a id="trace-15205"></a>
<a id="trace-15207"></a>
<a id="trace-15243"></a>
<a id="trace-15245"></a>
<a id="trace-15265"></a>
<a id="trace-15267"></a>
<a id="trace-15292"></a>
<a id="trace-15294"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15348"></a>
<a id="trace-15350"></a>
<a id="trace-15375"></a>
<a id="trace-15377"></a>
<a id="trace-15477"></a>
<a id="trace-15479"></a>
<a id="trace-15495"></a>
<a id="trace-15497"></a>
<a id="trace-17331"></a>
<a id="trace-17333"></a>
<a id="trace-17347"></a>
<a id="trace-17349"></a>
<a id="trace-17390"></a>
<a id="trace-17392"></a>
<a id="trace-17435"></a>
<a id="trace-17437"></a>
<a id="trace-17463"></a>
<a id="trace-17465"></a>
<a id="trace-17494"></a>
<a id="trace-17496"></a>
<a id="trace-17513"></a>
<a id="trace-17515"></a>
<a id="trace-17594"></a>
<a id="trace-17596"></a>
<a id="trace-17628"></a>
<a id="trace-17630"></a>
<a id="trace-17659"></a>
<a id="trace-17661"></a>
<a id="trace-18102"></a>
<a id="trace-18104"></a>
<a id="trace-18123"></a>
<a id="trace-18125"></a>
<a id="trace-18143"></a>
<a id="trace-18145"></a>
<a id="trace-18160"></a>
<a id="trace-18162"></a>
<a id="trace-18174"></a>
<a id="trace-18176"></a>
<a id="trace-18261"></a>
<a id="trace-18263"></a>
<a id="trace-18275"></a>
<a id="trace-18277"></a>
<a id="trace-18325"></a>
<a id="trace-18327"></a>
<a id="trace-18464"></a>
<a id="trace-18466"></a>
<a id="trace-18485"></a>
<a id="trace-18487"></a>
<a id="trace-18499"></a>
<a id="trace-18501"></a>
<a id="trace-18513"></a>
<a id="trace-18515"></a>
<a id="trace-18519"></a>
<a id="trace-18521"></a>
<a id="trace-18885"></a>
<a id="trace-18887"></a>
<a id="trace-18901"></a>
<a id="trace-18903"></a>
<a id="trace-18917"></a>
<a id="trace-18919"></a>
<a id="trace-18935"></a>
<a id="trace-18937"></a>
<a id="trace-18947"></a>
<a id="trace-18949"></a>
<a id="trace-18973"></a>
<a id="trace-18975"></a>
<a id="trace-18987"></a>
<a id="trace-18989"></a>
<a id="trace-19002"></a>
<a id="trace-19004"></a>
<a id="trace-19677"></a>
<a id="trace-19679"></a>
<a id="trace-19693"></a>
<a id="trace-19695"></a>
<a id="trace-19710"></a>
<a id="trace-19712"></a>
<a id="trace-19734"></a>
<a id="trace-19736"></a>
<a id="trace-19759"></a>
<a id="trace-19761"></a>
<a id="trace-19907"></a>
<a id="trace-19909"></a>
<a id="trace-19935"></a>
<a id="trace-19937"></a>
<a id="trace-20050"></a>
<a id="trace-20052"></a>
<a id="trace-20072"></a>
<a id="trace-20074"></a>
<a id="trace-20092"></a>
<a id="trace-20094"></a>
<a id="trace-20110"></a>
<a id="trace-20112"></a>
<a id="trace-20344"></a>
<a id="trace-20346"></a>
<a id="trace-20377"></a>
<a id="trace-20379"></a>
<a id="trace-20519"></a>
<a id="trace-20521"></a>
<a id="trace-20557"></a>
<a id="trace-20559"></a>
<a id="trace-20571"></a>
<a id="trace-20573"></a>
<a id="trace-20590"></a>
<a id="trace-20592"></a>
<a id="trace-20596"></a>
<a id="trace-20598"></a>
<a id="trace-20757"></a>
<a id="trace-20759"></a>
<a id="trace-20784"></a>
<a id="trace-20786"></a>
<a id="trace-20863"></a>
<a id="trace-20865"></a>
<a id="trace-21016"></a>
<a id="trace-21018"></a>
<a id="trace-21035"></a>
<a id="trace-21037"></a>
<a id="trace-21222"></a>
<a id="trace-21224"></a>
<a id="trace-21382"></a>
<a id="trace-21384"></a>
<a id="trace-21398"></a>
<a id="trace-21400"></a>
<a id="trace-21477"></a>
<a id="trace-21479"></a>
<a id="trace-21494"></a>
<a id="trace-21496"></a>
<a id="trace-21517"></a>
<a id="trace-21519"></a>
<a id="trace-21529"></a>
<a id="trace-21531"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
<a id="trace-21564"></a>
<a id="trace-21566"></a>
<a id="trace-21872"></a>
<a id="trace-21874"></a>
<a id="trace-22190"></a>
<a id="trace-22192"></a>
<a id="trace-22209"></a>
<a id="trace-22211"></a>
<a id="trace-22297"></a>
<a id="trace-22299"></a>
<a id="trace-22311"></a>
<a id="trace-22313"></a>
<a id="trace-22326"></a>
<a id="trace-22328"></a>
<a id="trace-22364"></a>
<a id="trace-22366"></a>
<a id="trace-22374"></a>
<a id="trace-22376"></a>
<a id="trace-22393"></a>
<a id="trace-22395"></a>
<a id="trace-22412"></a>
<a id="trace-22414"></a>
<a id="trace-22420"></a>
<a id="trace-22422"></a>
<a id="trace-22763"></a>
<a id="trace-22765"></a>
<a id="trace-22776"></a>
<a id="trace-22778"></a>
<a id="trace-22801"></a>
<a id="trace-22803"></a>
<a id="trace-22808"></a>
<a id="trace-22810"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22831"></a>
<a id="trace-22833"></a>
<a id="trace-22853"></a>
<a id="trace-22855"></a>
<a id="trace-22871"></a>
<a id="trace-22873"></a>
<a id="trace-22875"></a>
<a id="trace-22877"></a>
<a id="trace-22947"></a>
<a id="trace-22949"></a>
<a id="trace-22953"></a>
<a id="trace-22955"></a>
<a id="trace-22970"></a>
<a id="trace-22972"></a>
<a id="trace-22976"></a>
<a id="trace-22978"></a>
<a id="trace-22990"></a>
<a id="trace-22992"></a>
<a id="trace-23016"></a>
<a id="trace-23018"></a>
<a id="trace-23378"></a>
<a id="trace-23380"></a>
<a id="trace-23388"></a>
<a id="trace-23390"></a>
<a id="trace-23401"></a>
<a id="trace-23403"></a>
<a id="trace-23428"></a>
<a id="trace-23430"></a>
<a id="trace-23435"></a>
<a id="trace-23437"></a>
<a id="trace-23453"></a>
<a id="trace-23455"></a>
<a id="trace-23457"></a>
<a id="trace-23459"></a>
<a id="trace-23472"></a>
<a id="trace-23474"></a>
<a id="trace-23480"></a>
<a id="trace-23482"></a>
<a id="trace-23554"></a>
<a id="trace-23556"></a>
<a id="trace-23560"></a>
<a id="trace-23562"></a>
<a id="trace-23572"></a>
<a id="trace-23574"></a>
<a id="trace-23578"></a>
<a id="trace-23580"></a>
<a id="trace-23854"></a>
<a id="trace-23856"></a>
<a id="trace-23875"></a>
<a id="trace-23877"></a>
<a id="trace-23887"></a>
<a id="trace-23889"></a>
<a id="trace-23903"></a>
<a id="trace-23905"></a>
<a id="trace-23908"></a>
<a id="trace-23910"></a>
<a id="trace-23986"></a>
<a id="trace-23988"></a>
<a id="trace-24000"></a>
<a id="trace-24002"></a>
<a id="trace-24014"></a>
<a id="trace-24016"></a>
<a id="trace-24020"></a>
<a id="trace-24022"></a>
<a id="trace-24032"></a>
<a id="trace-24034"></a>
<a id="trace-24057"></a>
<a id="trace-24059"></a>
<a id="trace-24066"></a>
<a id="trace-24068"></a>
<a id="trace-24082"></a>
<a id="trace-24084"></a>
<a id="trace-24087"></a>
<a id="trace-24089"></a>
<a id="trace-24430"></a>
<a id="trace-24432"></a>
<a id="trace-24451"></a>
<a id="trace-24453"></a>
<a id="trace-24473"></a>
<a id="trace-24475"></a>
<a id="trace-24502"></a>
<a id="trace-24504"></a>
<a id="trace-24529"></a>
<a id="trace-24531"></a>
<a id="trace-24546"></a>
<a id="trace-24548"></a>
<a id="trace-24564"></a>
<a id="trace-24566"></a>
<a id="trace-24573"></a>
<a id="trace-24575"></a>
<a id="trace-24660"></a>
<a id="trace-24662"></a>
<a id="trace-24971"></a>
<a id="trace-24973"></a>
<a id="trace-24987"></a>
<a id="trace-24989"></a>
<a id="trace-25008"></a>
<a id="trace-25010"></a>
<a id="trace-25025"></a>
<a id="trace-25027"></a>
<a id="trace-25054"></a>
<a id="trace-25056"></a>
<a id="trace-25091"></a>
<a id="trace-25093"></a>
<a id="trace-25101"></a>
<a id="trace-25103"></a>
<a id="trace-25205"></a>
<a id="trace-25207"></a>
<a id="trace-25215"></a>
<a id="trace-25217"></a>
<a id="trace-25236"></a>
<a id="trace-25269"></a>
<a id="trace-25294"></a>
<a id="trace-25296"></a>
<a id="trace-25301"></a>
<a id="trace-25303"></a>
<a id="trace-25395"></a>
<a id="trace-25397"></a>
<a id="trace-25413"></a>
<a id="trace-25415"></a>
<a id="trace-25425"></a>
<a id="trace-25427"></a>
<a id="trace-25443"></a>
<a id="trace-25445"></a>
<a id="trace-26015"></a>
<a id="trace-26017"></a>
<a id="trace-26035"></a>
<a id="trace-26037"></a>
<a id="trace-26047"></a>
<a id="trace-26049"></a>
<a id="trace-26071"></a>
<a id="trace-26073"></a>
<a id="trace-26153"></a>
<a id="trace-26155"></a>
<a id="trace-26189"></a>
<a id="trace-26191"></a>
<a id="trace-26227"></a>
<a id="trace-26229"></a>
<a id="trace-26259"></a>
<a id="trace-26261"></a>
<a id="trace-26286"></a>
<a id="trace-26288"></a>
<a id="trace-26971"></a>
<a id="trace-26973"></a>
<a id="trace-26981"></a>
<a id="trace-26983"></a>
<a id="trace-27004"></a>
<a id="trace-27006"></a>
<a id="trace-27018"></a>
<a id="trace-27020"></a>
<a id="trace-27029"></a>
<a id="trace-27031"></a>
<a id="trace-27044"></a>
<a id="trace-27046"></a>
<a id="trace-27074"></a>
<a id="trace-27076"></a>
<a id="trace-27097"></a>
<a id="trace-27099"></a>
<a id="trace-27169"></a>
<a id="trace-27171"></a>
<a id="trace-27176"></a>
<a id="trace-27178"></a>
<a id="trace-27190"></a>
<a id="trace-27192"></a>
<a id="trace-27214"></a>
<a id="trace-27216"></a>
<a id="trace-27226"></a>
<a id="trace-27228"></a>
<a id="trace-27245"></a>
<a id="trace-27247"></a>
<a id="trace-27259"></a>
<a id="trace-27261"></a>
<a id="trace-27273"></a>
<a id="trace-27275"></a>
<a id="trace-27281"></a>
<a id="trace-27283"></a>
<a id="trace-27362"></a>
<a id="trace-27364"></a>
<a id="trace-27717"></a>
<a id="trace-27719"></a>
<a id="trace-27967"></a>
<a id="trace-27969"></a>
<a id="trace-27990"></a>
<a id="trace-27992"></a>
<a id="trace-28005"></a>
<a id="trace-28007"></a>
<a id="trace-28025"></a>
<a id="trace-28027"></a>
<a id="trace-28032"></a>
<a id="trace-28034"></a>
<a id="trace-28113"></a>
<a id="trace-28115"></a>
<a id="trace-28127"></a>
<a id="trace-28129"></a>
<a id="trace-28138"></a>
<a id="trace-28140"></a>
<a id="trace-28155"></a>
<a id="trace-28157"></a>
<a id="trace-28167"></a>
<a id="trace-28169"></a>
<a id="trace-28189"></a>
<a id="trace-28191"></a>
<a id="trace-28213"></a>
<a id="trace-28215"></a>
<a id="trace-28288"></a>
<a id="trace-28290"></a>
<a id="trace-28296"></a>
<a id="trace-28298"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28330"></a>
<a id="trace-28332"></a>
<a id="trace-28340"></a>
<a id="trace-28342"></a>
<a id="trace-28359"></a>
<a id="trace-28361"></a>
<a id="trace-28367"></a>
<a id="trace-28369"></a>
<a id="trace-28382"></a>
<a id="trace-28384"></a>
<a id="trace-28389"></a>
<a id="trace-28391"></a>
<a id="trace-28459"></a>
<a id="trace-28461"></a>
<a id="trace-28490"></a>
<a id="trace-28492"></a>
<a id="trace-28507"></a>
<a id="trace-28509"></a>
<a id="trace-28625"></a>
<a id="trace-28627"></a>
<a id="trace-28635"></a>
<a id="trace-28637"></a>
<a id="trace-28649"></a>
<a id="trace-28651"></a>
<a id="trace-28687"></a>
<a id="trace-28689"></a>
<a id="trace-28705"></a>
<a id="trace-28707"></a>
<a id="trace-28712"></a>
<a id="trace-28714"></a>
<a id="trace-28784"></a>
<a id="trace-28786"></a>
<a id="trace-28793"></a>
<a id="trace-28795"></a>
<a id="trace-28810"></a>
<a id="trace-28812"></a>
<a id="trace-28834"></a>
<a id="trace-28836"></a>
<a id="trace-28849"></a>
<a id="trace-28851"></a>
<a id="trace-28869"></a>
<a id="trace-28871"></a>
<a id="trace-28951"></a>
<a id="trace-28953"></a>
<a id="trace-28959"></a>
<a id="trace-28961"></a>
<a id="trace-28964"></a>
<a id="trace-28966"></a>
<a id="trace-28976"></a>
<a id="trace-28978"></a>
<a id="trace-28994"></a>
<a id="trace-28996"></a>
<a id="trace-29007"></a>
<a id="trace-29009"></a>
<a id="trace-29016"></a>
<a id="trace-29018"></a>
<a id="trace-29080"></a>
<a id="trace-29082"></a>
<a id="trace-29091"></a>
<a id="trace-29093"></a>
<a id="trace-29110"></a>
<a id="trace-29112"></a>
<a id="trace-29116"></a>
<a id="trace-29118"></a>
<a id="trace-29126"></a>
<a id="trace-29128"></a>
<a id="trace-29135"></a>
<a id="trace-29137"></a>
<a id="trace-29151"></a>
<a id="trace-29153"></a>
<a id="trace-29168"></a>
<a id="trace-29170"></a>
<a id="trace-29173"></a>
<a id="trace-29175"></a>
<a id="trace-29296"></a>
<a id="trace-29298"></a>
<a id="trace-29323"></a>
<a id="trace-29325"></a>
<a id="trace-29344"></a>
<a id="trace-29346"></a>
<a id="trace-29352"></a>
<a id="trace-29354"></a>
<a id="trace-29377"></a>
<a id="trace-29379"></a>
<a id="trace-29387"></a>
<a id="trace-29389"></a>
<a id="trace-29399"></a>
<a id="trace-29401"></a>
<a id="trace-29409"></a>
<a id="trace-29411"></a>
<a id="trace-29474"></a>
<a id="trace-29476"></a>
<a id="trace-29483"></a>
<a id="trace-29485"></a>
<a id="trace-29498"></a>
<a id="trace-29500"></a>
<a id="trace-29506"></a>
<a id="trace-29508"></a>
<a id="trace-29524"></a>
<a id="trace-29526"></a>
<a id="trace-29532"></a>
<a id="trace-29534"></a>
<a id="trace-29554"></a>
<a id="trace-29556"></a>
<a id="trace-29561"></a>
<a id="trace-29563"></a>
<a id="trace-29578"></a>
<a id="trace-29580"></a>
<a id="trace-29595"></a>
<a id="trace-29597"></a>
<a id="trace-29661"></a>
<a id="trace-29663"></a>
<a id="trace-29673"></a>
<a id="trace-29675"></a>
<a id="trace-29689"></a>
<a id="trace-29691"></a>
<a id="trace-29700"></a>
<a id="trace-29702"></a>
<a id="trace-29722"></a>
<a id="trace-29724"></a>
<a id="trace-29741"></a>
<a id="trace-29743"></a>
<a id="trace-29750"></a>
<a id="trace-29752"></a>
<a id="trace-29762"></a>
<a id="trace-29764"></a>
<a id="trace-29772"></a>
<a id="trace-29774"></a>
<a id="trace-29836"></a>
<a id="trace-29838"></a>
<a id="trace-29851"></a>
<a id="trace-29853"></a>
<a id="trace-29870"></a>
<a id="trace-29872"></a>
<a id="trace-29890"></a>
<a id="trace-29892"></a>
<a id="trace-29898"></a>
<a id="trace-29900"></a>
<a id="trace-29914"></a>
<a id="trace-29916"></a>
<a id="trace-29922"></a>
<a id="trace-29924"></a>
<a id="trace-29936"></a>
<a id="trace-29938"></a>
<a id="trace-29943"></a>
<a id="trace-29945"></a>
<a id="trace-30030"></a>
<a id="trace-30032"></a>
<a id="trace-30041"></a>
<a id="trace-30043"></a>
<a id="trace-30055"></a>
<a id="trace-30057"></a>
<a id="trace-30075"></a>
<a id="trace-30077"></a>
<a id="trace-30089"></a>
<a id="trace-30091"></a>
<a id="trace-30096"></a>
<a id="trace-30098"></a>
<a id="trace-30178"></a>
<a id="trace-30180"></a>
<a id="trace-30186"></a>
<a id="trace-30188"></a>
<a id="trace-30200"></a>
<a id="trace-30202"></a>
<a id="trace-30208"></a>
<a id="trace-30210"></a>
<a id="trace-30234"></a>
<a id="trace-30236"></a>
<a id="trace-30248"></a>
<a id="trace-30250"></a>
<a id="trace-30263"></a>
<a id="trace-30265"></a>
<a id="trace-30281"></a>
<a id="trace-30283"></a>
<a id="trace-30287"></a>
<a id="trace-30289"></a>
<a id="trace-30352"></a>
<a id="trace-30354"></a>
<a id="trace-30373"></a>
<a id="trace-30375"></a>
<a id="trace-30381"></a>
<a id="trace-30383"></a>
<a id="trace-30400"></a>
<a id="trace-30402"></a>
<a id="trace-30438"></a>
<a id="trace-30440"></a>
<a id="trace-30448"></a>
<a id="trace-30450"></a>
<a id="trace-30521"></a>
<a id="trace-30523"></a>
<a id="trace-30542"></a>
<a id="trace-30544"></a>
<a id="trace-30562"></a>
<a id="trace-30564"></a>
<a id="trace-30570"></a>
<a id="trace-30572"></a>
<a id="trace-30601"></a>
<a id="trace-30603"></a>
<a id="trace-30611"></a>
<a id="trace-30613"></a>
<a id="trace-30676"></a>
<a id="trace-30678"></a>
<a id="trace-30688"></a>
<a id="trace-30690"></a>
<a id="trace-30703"></a>
<a id="trace-30705"></a>
<a id="trace-30711"></a>
<a id="trace-30713"></a>
<a id="trace-30727"></a>
<a id="trace-30729"></a>
<a id="trace-30743"></a>
<a id="trace-30745"></a>
<a id="trace-30761"></a>
<a id="trace-30763"></a>
<a id="trace-30768"></a>
<a id="trace-30770"></a>
<a id="trace-30780"></a>
<a id="trace-30782"></a>
<a id="trace-30786"></a>
<a id="trace-30788"></a>
<a id="trace-30850"></a>
<a id="trace-30852"></a>
<a id="trace-30861"></a>
<a id="trace-30863"></a>
<a id="trace-30893"></a>
<a id="trace-30895"></a>
<a id="trace-30905"></a>
<a id="trace-30907"></a>
<a id="trace-30921"></a>
<a id="trace-30923"></a>
<a id="trace-30932"></a>
<a id="trace-30934"></a>
<a id="trace-30954"></a>
<a id="trace-30956"></a>
<a id="trace-31023"></a>
<a id="trace-31025"></a>
<a id="trace-31031"></a>
<a id="trace-31033"></a>
<a id="trace-31053"></a>
<a id="trace-31055"></a>
<a id="trace-31063"></a>
<a id="trace-31065"></a>
<a id="trace-31076"></a>
<a id="trace-31078"></a>
<a id="trace-31092"></a>
<a id="trace-31094"></a>
<a id="trace-31099"></a>
<a id="trace-31101"></a>
<a id="trace-31119"></a>
<a id="trace-31121"></a>
<a id="trace-31190"></a>
<a id="trace-31192"></a>
<a id="trace-31217"></a>
<a id="trace-31219"></a>
<a id="trace-31225"></a>
<a id="trace-31227"></a>
<a id="trace-31236"></a>
<a id="trace-31238"></a>
<a id="trace-31260"></a>
<a id="trace-31262"></a>
<a id="trace-31271"></a>
<a id="trace-31273"></a>
<a id="trace-31282"></a>
<a id="trace-31284"></a>
<a id="trace-31353"></a>
<a id="trace-31355"></a>
<a id="trace-31408"></a>
<a id="trace-31410"></a>
<a id="trace-31416"></a>
<a id="trace-31418"></a>
<a id="trace-31431"></a>
<a id="trace-31433"></a>
<a id="trace-31441"></a>
<a id="trace-31443"></a>
<a id="trace-31458"></a>
<a id="trace-31460"></a>
<a id="trace-31522"></a>
<a id="trace-31524"></a>
<a id="trace-31530"></a>
<a id="trace-31532"></a>
<a id="trace-31544"></a>
<a id="trace-31546"></a>
<a id="trace-31570"></a>
<a id="trace-31572"></a>
<a id="trace-31578"></a>
<a id="trace-31580"></a>
<a id="trace-31598"></a>
<a id="trace-31600"></a>
<a id="trace-31622"></a>
<a id="trace-31624"></a>
<a id="trace-31631"></a>
<a id="trace-31633"></a>
<a id="trace-31694"></a>
<a id="trace-31696"></a>
<a id="trace-31706"></a>
<a id="trace-31708"></a>
<a id="trace-31741"></a>
<a id="trace-31743"></a>
<a id="trace-31761"></a>
<a id="trace-31763"></a>
<a id="trace-31768"></a>
<a id="trace-31770"></a>
<a id="trace-31784"></a>
<a id="trace-31786"></a>
<a id="trace-31790"></a>
<a id="trace-31792"></a>
<a id="trace-31858"></a>
<a id="trace-31860"></a>
<a id="trace-31885"></a>
<a id="trace-31887"></a>
<a id="trace-31897"></a>
<a id="trace-31899"></a>
<a id="trace-31907"></a>
<a id="trace-31909"></a>
<a id="trace-31930"></a>
<a id="trace-31932"></a>
<a id="trace-31937"></a>
<a id="trace-31939"></a>
<a id="trace-31952"></a>
<a id="trace-31954"></a>
<a id="trace-31960"></a>
<a id="trace-31962"></a>
<a id="trace-32035"></a>
<a id="trace-32037"></a>
<a id="trace-32059"></a>
<a id="trace-32061"></a>
<a id="trace-32077"></a>
<a id="trace-32079"></a>
<a id="trace-32089"></a>
<a id="trace-32091"></a>
<a id="trace-32103"></a>
<a id="trace-32105"></a>
<a id="trace-32110"></a>
<a id="trace-32112"></a>
<a id="trace-32199"></a>
<a id="trace-32201"></a>
<a id="trace-32214"></a>
<a id="trace-32216"></a>
<a id="trace-32222"></a>
<a id="trace-32224"></a>
<a id="trace-32237"></a>
<a id="trace-32239"></a>
<a id="trace-32248"></a>
<a id="trace-32250"></a>
<a id="trace-32266"></a>
<a id="trace-32268"></a>
<a id="trace-32285"></a>
<a id="trace-32287"></a>
<a id="trace-32295"></a>
<a id="trace-32297"></a>
<a id="trace-32301"></a>
<a id="trace-32303"></a>
<a id="trace-32366"></a>
<a id="trace-32368"></a>
<a id="trace-32374"></a>
<a id="trace-32376"></a>
<a id="trace-32390"></a>
<a id="trace-32392"></a>
<a id="trace-32398"></a>
<a id="trace-32400"></a>
<a id="trace-32416"></a>
<a id="trace-32418"></a>
<a id="trace-32432"></a>
<a id="trace-32434"></a>
<a id="trace-32446"></a>
<a id="trace-32448"></a>
<a id="trace-32456"></a>
<a id="trace-32458"></a>
<a id="trace-32470"></a>
<a id="trace-32472"></a>
<a id="trace-32547"></a>
<a id="trace-32549"></a>
<a id="trace-32560"></a>
<a id="trace-32562"></a>
<a id="trace-32568"></a>
<a id="trace-32570"></a>
<a id="trace-32582"></a>
<a id="trace-32584"></a>
<a id="trace-32610"></a>
<a id="trace-32612"></a>
<a id="trace-32622"></a>
<a id="trace-32624"></a>
<a id="trace-32633"></a>
<a id="trace-32635"></a>
- 5.70s–359.80s (×1090), actor 37, squad 4 (trace 851): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 729. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624536610865512, 'next_transition': 999}.
<a id="trace-869"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 869): traveling overwatch. Knowledge: actor memory at 5.00s, trace 714. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629981674596387, 'next_transition': 995}.
<a id="trace-870"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 870): received platoon directive. Knowledge: actor memory at 5.00s, trace 714. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629981674596387, 'next_transition': 995}.
<a id="trace-995"></a>
<a id="trace-997"></a>
<a id="trace-1034"></a>
<a id="trace-1036"></a>
<a id="trace-1076"></a>
<a id="trace-1078"></a>
<a id="trace-1114"></a>
<a id="trace-1116"></a>
<a id="trace-1148"></a>
<a id="trace-1150"></a>
<a id="trace-1195"></a>
<a id="trace-1197"></a>
<a id="trace-1230"></a>
<a id="trace-1232"></a>
<a id="trace-1256"></a>
<a id="trace-1258"></a>
<a id="trace-1349"></a>
<a id="trace-1351"></a>
<a id="trace-1373"></a>
<a id="trace-1375"></a>
<a id="trace-1397"></a>
<a id="trace-1399"></a>
<a id="trace-1422"></a>
<a id="trace-1424"></a>
<a id="trace-1448"></a>
<a id="trace-1450"></a>
<a id="trace-1464"></a>
<a id="trace-1466"></a>
<a id="trace-1490"></a>
<a id="trace-1492"></a>
<a id="trace-1503"></a>
<a id="trace-1505"></a>
<a id="trace-1537"></a>
<a id="trace-1539"></a>
- 6.20s–14.20s (×34), actor 5, squad 0 (trace 995): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 719. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2057764017015788, 'next_transition': 1034}.
<a id="trace-1549"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 1549): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1268. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1711}.
<a id="trace-1711"></a>
<a id="trace-1713"></a>
<a id="trace-2472"></a>
<a id="trace-2474"></a>
- 14.70s–15.20s (×4), actor 5, squad 0 (trace 1711): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1273. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.019685436399785483, 'next_transition': 2472}.
<a id="trace-1724"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1724): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1276. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0761758767589846, 'next_transition': 1975}.
<a id="trace-1725"></a>
- 14.90s–14.90s (×1), actor 8, squad 1 (trace 1725): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1276. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0761758767589846, 'next_transition': 1975}.
<a id="trace-1726"></a>
<a id="trace-1975"></a>
<a id="trace-2241"></a>
<a id="trace-2846"></a>
<a id="trace-3073"></a>
- 14.90s–16.10s (×5), actor 8, squad 1 (trace 1726): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1276. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0761758767589846, 'next_transition': 1975}.
<a id="trace-2495"></a>
- 15.40s–15.40s (×1), actor 0, squad 0 (trace 2495): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1949. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07179634419009438, 'next_transition': 2817}.
<a id="trace-2496"></a>
- 15.40s–15.40s (×1), actor 0, squad 0 (trace 2496): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1949. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07179634419009438, 'next_transition': 2817}.
<a id="trace-2497"></a>
- 15.40s–15.40s (×1), actor 0, squad 0 (trace 2497): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1949. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07179634419009438, 'next_transition': 2817}.
<a id="trace-2817"></a>
<a id="trace-2819"></a>
<a id="trace-3317"></a>
<a id="trace-3319"></a>
- 15.70s–16.25s (×4), actor 5, squad 0 (trace 2817): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1954. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5367641499247479, 'next_transition': 3317}.
<a id="trace-3365"></a>
- 16.65s–16.65s (×1), actor 0, squad 0 (trace 3365): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1949. Next observer evidence: None.
<a id="trace-3673"></a>
<a id="trace-3675"></a>
- 16.75s–16.75s (×2), actor 5, squad 0 (trace 3673): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1954. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0623767060659826, 'next_transition': 3705}.
<a id="trace-3705"></a>
- 17.20s–17.20s (×1), actor 0, squad 0 (trace 3705): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1949. Next observer evidence: None.
<a id="trace-4019"></a>
<a id="trace-4021"></a>
<a id="trace-4076"></a>
<a id="trace-4078"></a>
<a id="trace-4171"></a>
<a id="trace-4173"></a>
- 17.25s–18.25s (×6), actor 5, squad 0 (trace 4019): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1954. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5454939364742424, 'next_transition': 4076}.
<a id="trace-347"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (events line 347): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-348"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (events line 348): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4211"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 4211): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810601 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4211. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750088221553976, 'next_transition': 4228}.
<a id="trace-4212"></a>
- 18.55s–18.55s (×1), actor 5, squad 0 (trace 4212): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810601 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4212. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750088221553976, 'next_transition': 4228}.
<a id="trace-4213"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 4213): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810601 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4213. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7140350000000002, 'next_transition': 4301}.
<a id="trace-4214"></a>
- 18.55s–18.55s (×1), actor 5, squad 1 (trace 4214): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.810601 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 18.55s, trace 4214. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7140350000000002, 'next_transition': 4301}.
<a id="trace-4228"></a>
<a id="trace-4230"></a>
<a id="trace-4271"></a>
<a id="trace-4273"></a>
<a id="trace-4329"></a>
<a id="trace-4331"></a>
<a id="trace-4653"></a>
<a id="trace-4655"></a>
- 18.75s–20.25s (×8), actor 5, squad 0 (trace 4228): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 18.55s, trace 4214. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44572190127691613, 'next_transition': 4271}.
<a id="trace-4301"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 4301): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 15.00s, trace 1957. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.007085000000000008, 'next_transition': 4444}.
<a id="trace-4303"></a>
- 19.45s–19.45s (×1), actor 8, squad 1 (trace 4303): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 15.00s, trace 1957. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.007085000000000008, 'next_transition': 4444}.
<a id="trace-4444"></a>
- 20.15s–20.15s (×1), actor 8, squad 1 (trace 4444): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4373. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0010649999999996496, 'next_transition': 5129}.
<a id="trace-4676"></a>
- 20.70s–20.70s (×1), actor 0, squad 0 (trace 4676): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4365. Next observer evidence: None.
<a id="trace-4680"></a>
<a id="trace-4682"></a>
<a id="trace-4721"></a>
<a id="trace-4723"></a>
<a id="trace-4749"></a>
<a id="trace-4751"></a>
<a id="trace-4778"></a>
<a id="trace-4780"></a>
<a id="trace-4802"></a>
<a id="trace-4804"></a>
- 20.75s–22.75s (×10), actor 5, squad 0 (trace 4680): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4370. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32350173933365534, 'next_transition': 4721}.
<a id="trace-4811"></a>
- 22.75s–22.75s (×1), actor 0, squad 0 (trace 4811): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4365. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15042102735571042, 'next_transition': 5330}.
<a id="trace-5129"></a>
- 22.85s–22.85s (×1), actor 8, squad 1 (trace 5129): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 4373. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5586}.
<a id="trace-5330"></a>
- 23.00s–23.00s (×1), actor 0, squad 0 (trace 5330): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 4365. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.048031461091095386, 'next_transition': 5337}.
<a id="trace-5337"></a>
<a id="trace-5339"></a>
<a id="trace-5360"></a>
<a id="trace-5362"></a>
<a id="trace-5410"></a>
<a id="trace-5412"></a>
<a id="trace-5439"></a>
<a id="trace-5441"></a>
<a id="trace-5529"></a>
<a id="trace-5531"></a>
<a id="trace-5556"></a>
<a id="trace-5558"></a>
<a id="trace-5598"></a>
<a id="trace-5600"></a>
- 23.25s–26.25s (×14), actor 5, squad 0 (trace 5337): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4370. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09553859841119389, 'next_transition': 5360}.
<a id="trace-5586"></a>
- 26.20s–26.20s (×1), actor 8, squad 1 (trace 5586): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5456. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 527}.
<a id="trace-5588"></a>
- 26.20s–26.20s (×1), actor 8, squad 1 (trace 5588): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 5456. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 527}.
<a id="trace-5612"></a>
- 26.45s–26.45s (×1), actor 0, squad 0 (trace 5612): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5448. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05670024147049559, 'next_transition': 5625}.
<a id="trace-5625"></a>
<a id="trace-5627"></a>
<a id="trace-5643"></a>
<a id="trace-5645"></a>
<a id="trace-5661"></a>
<a id="trace-5663"></a>
<a id="trace-5681"></a>
<a id="trace-5683"></a>
<a id="trace-5699"></a>
<a id="trace-5701"></a>
<a id="trace-5722"></a>
<a id="trace-5724"></a>
<a id="trace-5743"></a>
<a id="trace-5745"></a>
<a id="trace-5826"></a>
<a id="trace-5828"></a>
<a id="trace-5841"></a>
<a id="trace-5843"></a>
<a id="trace-5861"></a>
<a id="trace-5863"></a>
<a id="trace-5871"></a>
<a id="trace-5873"></a>
<a id="trace-5892"></a>
<a id="trace-5894"></a>
<a id="trace-5907"></a>
<a id="trace-5909"></a>
<a id="trace-5921"></a>
<a id="trace-5923"></a>
- 26.75s–33.25s (×28), actor 5, squad 0 (trace 5625): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5453. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05670077182014369, 'next_transition': 5643}.
<a id="trace-527"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 527): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5849"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 5849): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.661693 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 5849. Next observer evidence: {'until': 32.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5915}.
<a id="trace-5850"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 5850): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.661693 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 5850. Next observer evidence: {'until': 32.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5915}.
<a id="trace-5915"></a>
- 32.90s–32.90s (×1), actor 8, squad 1 (trace 5915): received platoon directive; retain held slots. Knowledge: actor memory at 30.00s, trace 5757. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 704}.
<a id="trace-5927"></a>
- 33.60s–33.60s (×1), actor 1, squad 0 (trace 5927): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 5750. Next observer evidence: None.
<a id="trace-7131"></a>
- 33.60s–33.60s (×1), actor 1, squad 0 (trace 7131): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 30.00s, trace 5750. Next observer evidence: None.
<a id="trace-7132"></a>
- 33.60s–33.60s (×1), actor 1, squad 0 (trace 7132): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 30.00s, trace 5750. Next observer evidence: None.
<a id="trace-7139"></a>
- 33.60s–33.60s (×1), actor 1, squad 0 (trace 7139): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 30.00s, trace 5750. Next observer evidence: None.
<a id="trace-7140"></a>
- 33.60s–33.60s (×1), actor 1, squad 0 (trace 7140): Assaulting. Knowledge: actor memory at 30.00s, trace 5750. Next observer evidence: None.
<a id="trace-7153"></a>
<a id="trace-7155"></a>
- 33.75s–33.75s (×2), actor 5, squad 0 (trace 7153): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 5850. Next observer evidence: {'until': 34, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35998586933718546, 'next_transition': 7171}.
<a id="trace-7171"></a>
- 34.15s–34.15s (×1), actor 1, squad 0 (trace 7171): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 5750. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0992182710296975, 'next_transition': 7361}.
<a id="trace-7177"></a>
- 34.15s–34.15s (×1), actor 1, squad 0 (trace 7177): MoveTactically. Knowledge: actor memory at 30.00s, trace 5750. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0992182710296975, 'next_transition': 7361}.
<a id="trace-7178"></a>
- 34.15s–34.15s (×1), actor 1, squad 0 (trace 7178): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 30.00s, trace 5750. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0992182710296975, 'next_transition': 7361}.
<a id="trace-7361"></a>
<a id="trace-7363"></a>
<a id="trace-7377"></a>
<a id="trace-7379"></a>
<a id="trace-7474"></a>
<a id="trace-7476"></a>
<a id="trace-7508"></a>
<a id="trace-7510"></a>
<a id="trace-7530"></a>
<a id="trace-7532"></a>
<a id="trace-7567"></a>
<a id="trace-7569"></a>
<a id="trace-7598"></a>
<a id="trace-7600"></a>
<a id="trace-7607"></a>
<a id="trace-7609"></a>
- 34.25s–37.75s (×16), actor 5, squad 0 (trace 7361): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 5850. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7377}.
<a id="trace-704"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (events line 704): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7589"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 7589): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.590929 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 7589. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7615}.
<a id="trace-7590"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 7590): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.590929 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 7590. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7615}.
<a id="trace-7615"></a>
- 37.85s–37.85s (×1), actor 8, squad 1 (trace 7615): NeedSupport. Knowledge: actor memory at 35.00s, trace 7410. Next observer evidence: {'until': 47, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 8525}.
<a id="trace-7626"></a>
- 38.05s–38.05s (×1), actor 1, squad 0 (trace 7626): NeedSupport. Knowledge: actor memory at 35.00s, trace 7403. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000237937897844, 'next_transition': 7642}.
<a id="trace-7642"></a>
<a id="trace-7644"></a>
<a id="trace-7658"></a>
<a id="trace-7660"></a>
<a id="trace-7676"></a>
<a id="trace-7678"></a>
<a id="trace-7691"></a>
<a id="trace-7693"></a>
- 38.25s–39.75s (×8), actor 5, squad 0 (trace 7642): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 7590. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3942566399677199, 'next_transition': 7658}.
<a id="trace-7699"></a>
- 39.85s–39.85s (×1), actor 1, squad 0 (trace 7699): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 7403. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7922}.
<a id="trace-7922"></a>
<a id="trace-7924"></a>
<a id="trace-7954"></a>
<a id="trace-7956"></a>
<a id="trace-7986"></a>
<a id="trace-7988"></a>
<a id="trace-8005"></a>
<a id="trace-8007"></a>
<a id="trace-8019"></a>
<a id="trace-8021"></a>
<a id="trace-8044"></a>
<a id="trace-8046"></a>
<a id="trace-8068"></a>
<a id="trace-8070"></a>
- 40.25s–43.25s (×14), actor 5, squad 0 (trace 7922): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7852. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.018523548168066752, 'next_transition': 7954}.
<a id="trace-8077"></a>
- 43.35s–43.35s (×1), actor 1, squad 0 (trace 8077): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 40.00s, trace 7848. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16304711757335544, 'next_transition': 8187}.
<a id="trace-8187"></a>
<a id="trace-8189"></a>
- 43.75s–43.75s (×2), actor 5, squad 0 (trace 8187): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7852. Next observer evidence: {'until': 44, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04441658414307405, 'next_transition': 8196}.
<a id="trace-8196"></a>
- 44.05s–44.05s (×1), actor 5, squad 0 (trace 8196): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 44.05s, trace 8196. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08620313788739165, 'next_transition': 8209}.
<a id="trace-8209"></a>
<a id="trace-8211"></a>
<a id="trace-8231"></a>
<a id="trace-8233"></a>
<a id="trace-8308"></a>
<a id="trace-8310"></a>
<a id="trace-8323"></a>
<a id="trace-8325"></a>
<a id="trace-8349"></a>
<a id="trace-8351"></a>
<a id="trace-8365"></a>
<a id="trace-8367"></a>
- 44.25s–46.75s (×12), actor 5, squad 0 (trace 8209): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.05s, trace 8196. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17853847760853883, 'next_transition': 8231}.
<a id="trace-8376"></a>
- 47.05s–47.05s (×1), actor 1, squad 0 (trace 8376): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 8240. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000033981755997, 'next_transition': 8532}.
<a id="trace-8377"></a>
- 47.05s–47.05s (×1), actor 1, squad 0 (trace 8377): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 8240. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18000033981755997, 'next_transition': 8532}.
<a id="trace-8525"></a>
- 47.10s–47.10s (×1), actor 9, squad 1 (trace 8525): MoveTactically. Knowledge: actor memory at 45.00s, trace 8247. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10616}.
<a id="trace-8526"></a>
- 47.10s–47.10s (×1), actor 9, squad 1 (trace 8526): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 8247. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10616}.
<a id="trace-8532"></a>
<a id="trace-8534"></a>
<a id="trace-8546"></a>
<a id="trace-8548"></a>
<a id="trace-8582"></a>
<a id="trace-8584"></a>
<a id="trace-8605"></a>
<a id="trace-8607"></a>
<a id="trace-8632"></a>
<a id="trace-8634"></a>
<a id="trace-8652"></a>
<a id="trace-8654"></a>
<a id="trace-8738"></a>
<a id="trace-8740"></a>
- 47.25s–50.25s (×14), actor 5, squad 0 (trace 8532): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 8244. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2548494501812632, 'next_transition': 8546}.
<a id="trace-8752"></a>
- 50.65s–50.65s (×1), actor 1, squad 0 (trace 8752): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 8666. Next observer evidence: None.
<a id="trace-8756"></a>
<a id="trace-8758"></a>
<a id="trace-8776"></a>
<a id="trace-8778"></a>
<a id="trace-8788"></a>
<a id="trace-8790"></a>
- 50.75s–51.75s (×6), actor 5, squad 0 (trace 8756): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8670. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26999389437163035, 'next_transition': 8776}.
<a id="trace-8797"></a>
- 51.85s–51.85s (×1), actor 1, squad 0 (trace 8797): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 8666. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9630}.
<a id="trace-9600"></a>
- 51.85s–51.85s (×1), actor 1, squad 0 (trace 9600): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 50.00s, trace 8666. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9630}.
<a id="trace-9601"></a>
- 51.85s–51.85s (×1), actor 1, squad 0 (trace 9601): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 50.00s, trace 8666. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9630}.
<a id="trace-9608"></a>
- 51.85s–51.85s (×1), actor 1, squad 0 (trace 9608): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 50.00s, trace 8666. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9630}.
<a id="trace-9609"></a>
- 51.85s–51.85s (×1), actor 1, squad 0 (trace 9609): Assaulting. Knowledge: actor memory at 50.00s, trace 8666. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9630}.
<a id="trace-9630"></a>
- 52.20s–52.20s (×1), actor 1, squad 0 (trace 9630): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 8666. Next observer evidence: None.
<a id="trace-9636"></a>
- 52.20s–52.20s (×1), actor 1, squad 0 (trace 9636): MoveTactically. Knowledge: actor memory at 50.00s, trace 8666. Next observer evidence: None.
<a id="trace-9637"></a>
- 52.20s–52.20s (×1), actor 1, squad 0 (trace 9637): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 50.00s, trace 8666. Next observer evidence: None.
<a id="trace-9797"></a>
<a id="trace-9799"></a>
<a id="trace-9817"></a>
<a id="trace-9819"></a>
<a id="trace-9854"></a>
<a id="trace-9856"></a>
<a id="trace-9889"></a>
<a id="trace-9891"></a>
<a id="trace-9904"></a>
<a id="trace-9906"></a>
<a id="trace-9917"></a>
<a id="trace-9919"></a>
<a id="trace-9998"></a>
<a id="trace-10000"></a>
<a id="trace-10023"></a>
<a id="trace-10025"></a>
- 52.25s–55.75s (×16), actor 5, squad 0 (trace 9797): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8670. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9817}.
<a id="trace-10040"></a>
- 56.05s–56.05s (×1), actor 5, squad 0 (trace 10040): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 56.05s, trace 10040. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14542243618190656, 'next_transition': 10051}.
<a id="trace-10051"></a>
<a id="trace-10053"></a>
<a id="trace-10070"></a>
<a id="trace-10072"></a>
<a id="trace-10082"></a>
<a id="trace-10084"></a>
<a id="trace-10093"></a>
<a id="trace-10095"></a>
<a id="trace-10107"></a>
<a id="trace-10109"></a>
<a id="trace-10121"></a>
<a id="trace-10123"></a>
<a id="trace-10141"></a>
<a id="trace-10143"></a>
<a id="trace-10151"></a>
<a id="trace-10153"></a>
<a id="trace-10232"></a>
<a id="trace-10234"></a>
<a id="trace-10248"></a>
<a id="trace-10250"></a>
<a id="trace-10268"></a>
<a id="trace-10270"></a>
<a id="trace-10277"></a>
<a id="trace-10279"></a>
- 56.25s–61.75s (×24), actor 5, squad 0 (trace 10051): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 56.05s, trace 10040. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19404660851640013, 'next_transition': 10070}.
<a id="trace-10292"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 10292): NeedSupport. Knowledge: actor memory at 60.00s, trace 10158. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11250000767806591, 'next_transition': 10310}.
<a id="trace-10310"></a>
<a id="trace-10312"></a>
- 62.25s–62.25s (×2), actor 5, squad 0 (trace 10310): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 10162. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04500020773194686, 'next_transition': 10323}.
<a id="trace-10323"></a>
- 62.65s–62.65s (×1), actor 1, squad 0 (trace 10323): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 60.00s, trace 10158. Next observer evidence: None.
<a id="trace-10593"></a>
<a id="trace-10595"></a>
<a id="trace-10609"></a>
<a id="trace-10611"></a>
<a id="trace-10636"></a>
<a id="trace-10638"></a>
<a id="trace-10661"></a>
<a id="trace-10663"></a>
<a id="trace-10673"></a>
<a id="trace-10675"></a>
<a id="trace-10759"></a>
<a id="trace-10761"></a>
<a id="trace-10774"></a>
<a id="trace-10776"></a>
<a id="trace-10797"></a>
<a id="trace-10799"></a>
<a id="trace-10808"></a>
<a id="trace-10810"></a>
<a id="trace-10821"></a>
<a id="trace-10823"></a>
- 62.75s–67.25s (×20), actor 5, squad 0 (trace 10593): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 10162. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10609}.
<a id="trace-10616"></a>
- 63.25s–63.25s (×1), actor 9, squad 1 (trace 10616): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 10165. Next observer evidence: None.
<a id="trace-10617"></a>
- 63.25s–63.25s (×1), actor 9, squad 1 (trace 10617): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 60.00s, trace 10165. Next observer evidence: None.
<a id="trace-10621"></a>
- 63.30s–63.30s (×1), actor 9, squad 1 (trace 10621): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 60.00s, trace 10165. Next observer evidence: {'until': 93.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1367}.
<a id="trace-10827"></a>
- 67.45s–67.45s (×1), actor 1, squad 0 (trace 10827): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 65.00s, trace 10690. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11123}.
<a id="trace-11123"></a>
<a id="trace-11125"></a>
- 67.75s–67.75s (×2), actor 5, squad 0 (trace 11123): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 10694. Next observer evidence: {'until': 68, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11134}.
<a id="trace-11134"></a>
- 68.05s–68.05s (×1), actor 1, squad 0 (trace 11134): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 65.00s, trace 10690. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022499999999999836, 'next_transition': 11256}.
<a id="trace-11256"></a>
<a id="trace-11258"></a>
<a id="trace-11272"></a>
<a id="trace-11274"></a>
<a id="trace-11302"></a>
<a id="trace-11304"></a>
<a id="trace-11313"></a>
<a id="trace-11315"></a>
<a id="trace-11401"></a>
<a id="trace-11403"></a>
<a id="trace-11412"></a>
<a id="trace-11414"></a>
<a id="trace-11429"></a>
<a id="trace-11431"></a>
<a id="trace-11441"></a>
<a id="trace-11443"></a>
<a id="trace-11465"></a>
<a id="trace-11467"></a>
<a id="trace-11477"></a>
<a id="trace-11479"></a>
<a id="trace-11502"></a>
<a id="trace-11504"></a>
- 68.25s–73.25s (×22), actor 5, squad 0 (trace 11256): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 10694. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20249166031384705, 'next_transition': 11272}.
<a id="trace-11512"></a>
- 73.45s–73.45s (×1), actor 1, squad 0 (trace 11512): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 70.00s, trace 11321. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15678315715454508, 'next_transition': 11783}.
<a id="trace-11783"></a>
<a id="trace-11785"></a>
<a id="trace-11810"></a>
<a id="trace-11812"></a>
<a id="trace-11827"></a>
<a id="trace-11829"></a>
<a id="trace-11914"></a>
<a id="trace-11916"></a>
<a id="trace-11933"></a>
<a id="trace-11935"></a>
<a id="trace-11954"></a>
<a id="trace-11956"></a>
<a id="trace-11968"></a>
<a id="trace-11970"></a>
<a id="trace-11993"></a>
<a id="trace-11995"></a>
<a id="trace-12010"></a>
<a id="trace-12012"></a>
<a id="trace-12035"></a>
<a id="trace-12037"></a>
<a id="trace-12052"></a>
<a id="trace-12054"></a>
- 73.75s–78.75s (×22), actor 5, squad 0 (trace 11783): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 11325. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022505110719340967, 'next_transition': 11810}.
<a id="trace-12062"></a>
- 78.85s–78.85s (×1), actor 1, squad 0 (trace 12062): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 11837. Next observer evidence: None.
<a id="trace-1158"></a>
- 78.95s–78.95s (×1), actor 5, squad 0 (events line 1158): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12202"></a>
- 78.95s–78.95s (×1), actor 5, squad 0 (trace 12202): renew committed intent (75 s lifetime). Knowledge: actor memory at 78.95s, trace 12202. Next observer evidence: {'until': 79.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12224}.
<a id="trace-12224"></a>
<a id="trace-12226"></a>
<a id="trace-12315"></a>
<a id="trace-12317"></a>
<a id="trace-12328"></a>
<a id="trace-12330"></a>
<a id="trace-12355"></a>
<a id="trace-12357"></a>
<a id="trace-12383"></a>
<a id="trace-12385"></a>
<a id="trace-12408"></a>
<a id="trace-12410"></a>
<a id="trace-12421"></a>
<a id="trace-12423"></a>
<a id="trace-12438"></a>
<a id="trace-12440"></a>
<a id="trace-12459"></a>
<a id="trace-12461"></a>
<a id="trace-12481"></a>
<a id="trace-12483"></a>
<a id="trace-12497"></a>
<a id="trace-12499"></a>
<a id="trace-12587"></a>
<a id="trace-12589"></a>
<a id="trace-12620"></a>
<a id="trace-12622"></a>
<a id="trace-12634"></a>
<a id="trace-12636"></a>
<a id="trace-12664"></a>
<a id="trace-12666"></a>
<a id="trace-12680"></a>
<a id="trace-12682"></a>
<a id="trace-12711"></a>
<a id="trace-12713"></a>
<a id="trace-12735"></a>
<a id="trace-12737"></a>
<a id="trace-12765"></a>
<a id="trace-12767"></a>
<a id="trace-12777"></a>
<a id="trace-12779"></a>
<a id="trace-12860"></a>
<a id="trace-12862"></a>
<a id="trace-12877"></a>
<a id="trace-12879"></a>
- 79.75s–90.75s (×44), actor 5, squad 0 (trace 12224): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 78.95s, trace 12202. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20249685908173895, 'next_transition': 12315}.
<a id="trace-12889"></a>
- 91.05s–91.05s (×1), actor 1, squad 0 (trace 12889): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 90.00s, trace 12788. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22752474738307332, 'next_transition': 13278}.
<a id="trace-13278"></a>
<a id="trace-13280"></a>
- 91.25s–91.25s (×2), actor 5, squad 0 (trace 13278): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 12792. Next observer evidence: {'until': 91.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24479347568561197, 'next_transition': 13291}.
<a id="trace-13291"></a>
- 91.50s–91.50s (×1), actor 1, squad 0 (trace 13291): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 12788. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24480555084681502, 'next_transition': 13483}.
<a id="trace-13472"></a>
- 91.50s–91.50s (×1), actor 1, squad 0 (trace 13472): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 90.00s, trace 12788. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24480555084681502, 'next_transition': 13483}.
<a id="trace-13483"></a>
<a id="trace-13485"></a>
<a id="trace-13518"></a>
<a id="trace-13520"></a>
<a id="trace-13553"></a>
<a id="trace-13555"></a>
<a id="trace-13576"></a>
<a id="trace-13578"></a>
<a id="trace-13592"></a>
<a id="trace-13594"></a>
<a id="trace-13622"></a>
<a id="trace-13624"></a>
<a id="trace-13646"></a>
<a id="trace-13648"></a>
<a id="trace-13730"></a>
<a id="trace-13732"></a>
<a id="trace-13741"></a>
<a id="trace-13743"></a>
<a id="trace-13760"></a>
<a id="trace-13762"></a>
<a id="trace-13772"></a>
<a id="trace-13774"></a>
<a id="trace-13795"></a>
<a id="trace-13797"></a>
- 91.75s–97.25s (×24), actor 5, squad 0 (trace 13483): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 12792. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7344041535830016, 'next_transition': 13518}.
<a id="trace-13808"></a>
- 97.65s–97.65s (×1), actor 1, squad 0 (trace 13808): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 13661. Next observer evidence: None.
<a id="trace-14112"></a>
<a id="trace-14114"></a>
<a id="trace-14130"></a>
<a id="trace-14132"></a>
<a id="trace-14151"></a>
<a id="trace-14153"></a>
<a id="trace-14175"></a>
<a id="trace-14177"></a>
<a id="trace-14188"></a>
<a id="trace-14190"></a>
<a id="trace-14274"></a>
<a id="trace-14276"></a>
<a id="trace-14290"></a>
<a id="trace-14292"></a>
<a id="trace-14310"></a>
<a id="trace-14312"></a>
<a id="trace-14328"></a>
<a id="trace-14330"></a>
<a id="trace-14347"></a>
<a id="trace-14349"></a>
<a id="trace-14362"></a>
<a id="trace-14364"></a>
<a id="trace-14383"></a>
<a id="trace-14385"></a>
- 97.75s–103.25s (×24), actor 5, squad 0 (trace 14112): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 13665. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07364857142857144, 'next_transition': 14130}.
<a id="trace-1367"></a>
- 98.15s–98.15s (×1), actor 5, squad 1 (events line 1367): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14122"></a>
- 98.15s–98.15s (×1), actor 5, squad 1 (trace 14122): renew committed intent (75 s lifetime). Knowledge: actor memory at 98.15s, trace 14122. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14182}.
<a id="trace-14182"></a>
- 99.35s–99.35s (×1), actor 9, squad 1 (trace 14182): MoveTactically. Knowledge: actor memory at 95.00s, trace 13668. Next observer evidence: {'until': 119.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18181}.
<a id="trace-14183"></a>
- 99.35s–99.35s (×1), actor 9, squad 1 (trace 14183): received platoon directive. Knowledge: actor memory at 95.00s, trace 13668. Next observer evidence: {'until': 119.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18181}.
<a id="trace-14392"></a>
- 103.70s–103.70s (×1), actor 1, squad 0 (trace 14392): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 14197. Next observer evidence: None.
<a id="trace-14393"></a>
- 103.70s–103.70s (×1), actor 1, squad 0 (trace 14393): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 100.00s, trace 14197. Next observer evidence: None.
<a id="trace-15056"></a>
<a id="trace-15058"></a>
<a id="trace-15075"></a>
<a id="trace-15077"></a>
<a id="trace-15093"></a>
<a id="trace-15095"></a>
<a id="trace-15186"></a>
<a id="trace-15188"></a>
<a id="trace-15200"></a>
<a id="trace-15202"></a>
<a id="trace-15222"></a>
<a id="trace-15224"></a>
<a id="trace-15237"></a>
<a id="trace-15239"></a>
<a id="trace-15259"></a>
<a id="trace-15261"></a>
- 103.75s–107.25s (×16), actor 5, squad 0 (trace 15056): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 14201. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3962765692235219, 'next_transition': 15075}.
<a id="trace-15268"></a>
- 107.30s–107.30s (×1), actor 1, squad 0 (trace 15268): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 105.00s, trace 15115. Next observer evidence: {'until': 107.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45590352437561055, 'next_transition': 15286}.
<a id="trace-15286"></a>
<a id="trace-15288"></a>
<a id="trace-15322"></a>
<a id="trace-15324"></a>
<a id="trace-15342"></a>
<a id="trace-15344"></a>
<a id="trace-15369"></a>
<a id="trace-15371"></a>
<a id="trace-15391"></a>
<a id="trace-15393"></a>
<a id="trace-15471"></a>
<a id="trace-15473"></a>
<a id="trace-15489"></a>
<a id="trace-15491"></a>
- 107.75s–110.75s (×14), actor 5, squad 0 (trace 15286): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 15119. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6426836537907359, 'next_transition': 15322}.
<a id="trace-15498"></a>
- 110.85s–110.85s (×1), actor 1, squad 0 (trace 15498): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 110.00s, trace 15403. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06960093976611584, 'next_transition': 16668}.
<a id="trace-16301"></a>
- 110.85s–110.85s (×1), actor 1, squad 0 (trace 16301): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 110.00s, trace 15403. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06960093976611584, 'next_transition': 16668}.
<a id="trace-16302"></a>
- 110.85s–110.85s (×1), actor 1, squad 0 (trace 16302): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 110.00s, trace 15403. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06960093976611584, 'next_transition': 16668}.
<a id="trace-16651"></a>
- 110.85s–110.85s (×1), actor 1, squad 0 (trace 16651): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 110.00s, trace 15403. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06960093976611584, 'next_transition': 16668}.
<a id="trace-16652"></a>
- 110.85s–110.85s (×1), actor 1, squad 0 (trace 16652): Assaulting. Knowledge: actor memory at 110.00s, trace 15403. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06960093976611584, 'next_transition': 16668}.
<a id="trace-16668"></a>
- 111.10s–111.10s (×1), actor 1, squad 0 (trace 16668): Reorganise: completed/failed drill. Knowledge: actor memory at 110.00s, trace 15403. Next observer evidence: {'until': 111.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06382949545308927, 'next_transition': 17325}.
<a id="trace-16674"></a>
- 111.10s–111.10s (×1), actor 1, squad 0 (trace 16674): MoveTactically. Knowledge: actor memory at 110.00s, trace 15403. Next observer evidence: {'until': 111.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06382949545308927, 'next_transition': 17325}.
<a id="trace-16675"></a>
- 111.10s–111.10s (×1), actor 1, squad 0 (trace 16675): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 110.00s, trace 15403. Next observer evidence: {'until': 111.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06382949545308927, 'next_transition': 17325}.
<a id="trace-17325"></a>
<a id="trace-17327"></a>
<a id="trace-17341"></a>
<a id="trace-17343"></a>
<a id="trace-17384"></a>
<a id="trace-17386"></a>
<a id="trace-17417"></a>
<a id="trace-17419"></a>
<a id="trace-17431"></a>
<a id="trace-17433"></a>
<a id="trace-17459"></a>
<a id="trace-17461"></a>
<a id="trace-17490"></a>
<a id="trace-17492"></a>
<a id="trace-17509"></a>
<a id="trace-17511"></a>
<a id="trace-17590"></a>
<a id="trace-17592"></a>
<a id="trace-17609"></a>
<a id="trace-17611"></a>
<a id="trace-17624"></a>
<a id="trace-17626"></a>
<a id="trace-17655"></a>
<a id="trace-17657"></a>
- 111.25s–117.25s (×24), actor 5, squad 0 (trace 17325): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15407. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1266430384335176, 'next_transition': 17341}.
<a id="trace-17665"></a>
- 117.30s–117.30s (×1), actor 1, squad 0 (trace 17665): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 17518. Next observer evidence: {'until': 118.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.5375778999036354, 'next_transition': 18116}.
<a id="trace-18116"></a>
<a id="trace-18118"></a>
- 118.25s–118.25s (×2), actor 5, squad 0 (trace 18116): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 17522. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46618679291838955, 'next_transition': 18137}.
<a id="trace-18137"></a>
- 118.70s–118.70s (×1), actor 1, squad 0 (trace 18137): NeedSupport. Knowledge: actor memory at 115.00s, trace 17518. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8568021655320152, 'next_transition': 18153}.
<a id="trace-18153"></a>
<a id="trace-18155"></a>
<a id="trace-18255"></a>
<a id="trace-18257"></a>
<a id="trace-18287"></a>
<a id="trace-18289"></a>
<a id="trace-18319"></a>
<a id="trace-18321"></a>
- 119.25s–122.25s (×8), actor 5, squad 0 (trace 18153): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 17522. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4280045669920511, 'next_transition': 18255}.
<a id="trace-18181"></a>
- 119.90s–119.90s (×1), actor 9, squad 1 (trace 18181): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 115.00s, trace 17525. Next observer evidence: None.
<a id="trace-18182"></a>
- 119.90s–119.90s (×1), actor 9, squad 1 (trace 18182): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 115.00s, trace 17525. Next observer evidence: None.
<a id="trace-18185"></a>
- 119.95s–119.95s (×1), actor 9, squad 1 (trace 18185): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 115.00s, trace 17525. Next observer evidence: {'until': 122, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1614}.
<a id="trace-1614"></a>
- 122.15s–122.15s (×1), actor 5, squad 1 (events line 1614): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18493}.
<a id="trace-18312"></a>
- 122.15s–122.15s (×1), actor 5, squad 1 (trace 18312): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.517110 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 122.15s, trace 18312. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18493}.
<a id="trace-18313"></a>
- 122.15s–122.15s (×1), actor 5, squad 1 (trace 18313): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.517110 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 122.15s, trace 18313. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18493}.
<a id="trace-18333"></a>
- 122.35s–122.35s (×1), actor 1, squad 0 (trace 18333): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 120.00s, trace 18186. Next observer evidence: {'until': 123, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.722388544187174, 'next_transition': 18477}.
<a id="trace-18477"></a>
- 123.10s–123.10s (×1), actor 5, squad 0 (trace 18477): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 123.10s, trace 18477. Next observer evidence: {'until': 124.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.9939441579583077, 'next_transition': 18526}.
<a id="trace-18493"></a>
- 123.35s–123.35s (×1), actor 9, squad 1 (trace 18493): MoveTactically. Knowledge: actor memory at 120.00s, trace 18192. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1670}.
<a id="trace-18494"></a>
- 123.35s–123.35s (×1), actor 9, squad 1 (trace 18494): received platoon directive. Knowledge: actor memory at 120.00s, trace 18192. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1670}.
<a id="trace-18526"></a>
- 124.95s–124.95s (×1), actor 1, squad 0 (trace 18526): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 18186. Next observer evidence: {'until': 127.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 1.0528368229024219, 'next_transition': 18929}.
<a id="trace-18929"></a>
<a id="trace-18931"></a>
<a id="trace-18961"></a>
<a id="trace-18963"></a>
<a id="trace-18981"></a>
<a id="trace-18983"></a>
- 127.25s–129.30s (×6), actor 1, squad 0 (trace 18929): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 125.00s, trace 18819. Next observer evidence: {'until': 128.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6300011627068633, 'next_transition': 18961}.
<a id="trace-1669"></a>
- 129.35s–129.35s (×1), actor 1, squad 0 (events line 1669): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1670"></a>
- 129.35s–129.35s (×1), actor 1, squad 1 (events line 1670): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18990"></a>
- 129.35s–129.35s (×1), actor 1, squad 0 (trace 18990): renew committed intent (75 s lifetime). Knowledge: actor memory at 129.35s, trace 18990. Next observer evidence: {'until': 130.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.35720000002733104, 'next_transition': 19066}.
<a id="trace-18991"></a>
- 129.35s–129.35s (×1), actor 1, squad 1 (trace 18991): renew committed intent (75 s lifetime). Knowledge: actor memory at 129.35s, trace 18991. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20075}.
<a id="trace-19066"></a>
- 130.25s–130.25s (×1), actor 1, squad 0 (trace 19066): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 19005. Next observer evidence: None.
<a id="trace-19671"></a>
<a id="trace-19673"></a>
<a id="trace-19703"></a>
<a id="trace-19705"></a>
<a id="trace-19732"></a>
<a id="trace-19751"></a>
<a id="trace-19757"></a>
- 130.30s–132.30s (×7), actor 1, squad 0 (trace 19671): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.00s, trace 19005. Next observer evidence: {'until': 131.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3924640001718208, 'next_transition': 19703}.
<a id="trace-19764"></a>
- 132.40s–132.40s (×1), actor 1, squad 0 (trace 19764): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 130.00s, trace 19005. Next observer evidence: {'until': 132.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23230103666578777, 'next_transition': 19905}.
<a id="trace-19905"></a>
<a id="trace-19926"></a>
<a id="trace-19928"></a>
<a id="trace-19933"></a>
<a id="trace-19947"></a>
<a id="trace-19957"></a>
<a id="trace-19959"></a>
<a id="trace-19964"></a>
<a id="trace-19972"></a>
<a id="trace-20041"></a>
<a id="trace-20043"></a>
<a id="trace-20048"></a>
<a id="trace-20057"></a>
<a id="trace-20063"></a>
<a id="trace-20065"></a>
<a id="trace-20070"></a>
<a id="trace-20090"></a>
<a id="trace-20101"></a>
<a id="trace-20103"></a>
<a id="trace-20108"></a>
<a id="trace-20121"></a>
- 132.80s–137.80s (×21), actor 1, squad 0 (trace 19905): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.00s, trace 19005. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23908106019507264, 'next_transition': 19926}.
<a id="trace-20075"></a>
- 136.35s–136.35s (×1), actor 9, squad 1 (trace 20075): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 19981. Next observer evidence: {'until': 139.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20383}.
<a id="trace-20076"></a>
- 136.35s–136.35s (×1), actor 9, squad 1 (trace 20076): new contact inside 100 m. Knowledge: actor memory at 135.00s, trace 19981. Next observer evidence: {'until': 139.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20383}.
<a id="trace-20128"></a>
- 138.15s–138.15s (×1), actor 1, squad 0 (trace 20128): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 135.00s, trace 19976. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21671625528722496, 'next_transition': 20327}.
<a id="trace-20327"></a>
<a id="trace-20329"></a>
<a id="trace-20334"></a>
<a id="trace-20371"></a>
<a id="trace-20373"></a>
<a id="trace-20513"></a>
<a id="trace-20515"></a>
<a id="trace-20551"></a>
<a id="trace-20553"></a>
<a id="trace-20584"></a>
<a id="trace-20586"></a>
- 138.30s–142.30s (×11), actor 1, squad 0 (trace 20327): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 135.00s, trace 19976. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7684836409769433, 'next_transition': 20371}.
<a id="trace-20383"></a>
- 139.65s–139.65s (×1), actor 9, squad 1 (trace 20383): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 135.00s, trace 19981. Next observer evidence: {'until': 150.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.00007756577306, 'next_transition': 21484}.
<a id="trace-20384"></a>
- 139.65s–139.65s (×1), actor 9, squad 1 (trace 20384): rearward bound: one stationary suppressing element. Knowledge: actor memory at 135.00s, trace 19981. Next observer evidence: {'until': 150.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.00007756577306, 'next_transition': 21484}.
<a id="trace-20603"></a>
- 143.05s–143.05s (×1), actor 1, squad 0 (trace 20603): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 140.00s, trace 20447. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23105410948731836, 'next_transition': 20746}.
<a id="trace-20746"></a>
<a id="trace-20748"></a>
<a id="trace-20773"></a>
<a id="trace-20775"></a>
<a id="trace-20857"></a>
<a id="trace-20859"></a>
- 143.30s–145.30s (×6), actor 1, squad 0 (trace 20746): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 140.00s, trace 20447. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2956129312378057, 'next_transition': 20773}.
<a id="trace-20871"></a>
- 145.65s–145.65s (×1), actor 1, squad 0 (trace 20871): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 145.00s, trace 20789. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6501672677475316, 'next_transition': 21010}.
<a id="trace-21010"></a>
<a id="trace-21012"></a>
<a id="trace-21049"></a>
- 146.30s–147.30s (×3), actor 1, squad 0 (trace 21010): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 145.00s, trace 20789. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.90217328544104, 'next_transition': 21049}.
<a id="trace-21057"></a>
- 147.45s–147.45s (×1), actor 1, squad 0 (trace 21057): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 145.00s, trace 20789. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6578215536018927, 'next_transition': 21247}.
<a id="trace-21247"></a>
<a id="trace-21249"></a>
- 148.30s–148.30s (×2), actor 1, squad 0 (trace 21247): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 145.00s, trace 20789. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4649515385608277, 'next_transition': 21263}.
<a id="trace-21263"></a>
- 148.65s–148.65s (×1), actor 1, squad 0 (trace 21263): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 145.00s, trace 20789. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0281309420535856, 'next_transition': 21376}.
<a id="trace-21376"></a>
<a id="trace-21378"></a>
<a id="trace-21471"></a>
<a id="trace-21473"></a>
<a id="trace-21511"></a>
<a id="trace-21513"></a>
<a id="trace-21544"></a>
<a id="trace-21546"></a>
<a id="trace-21583"></a>
<a id="trace-21585"></a>
- 149.30s–153.30s (×10), actor 1, squad 0 (trace 21376): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 145.00s, trace 20789. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5321412283100404, 'next_transition': 21471}.
<a id="trace-21484"></a>
- 150.50s–150.50s (×1), actor 9, squad 1 (trace 21484): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 21407. Next observer evidence: {'until': 159.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22416}.
<a id="trace-21485"></a>
- 150.50s–150.50s (×1), actor 9, squad 1 (trace 21485): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 21407. Next observer evidence: {'until': 159.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22416}.
<a id="trace-21592"></a>
- 153.55s–153.55s (×1), actor 1, squad 0 (trace 21592): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 150.00s, trace 21402. Next observer evidence: {'until': 154, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6501605076313473, 'next_transition': 21877}.
<a id="trace-21859"></a>
- 153.55s–153.55s (×1), actor 1, squad 0 (trace 21859): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 150.00s, trace 21402. Next observer evidence: {'until': 154, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6501605076313473, 'next_transition': 21877}.
<a id="trace-21877"></a>
- 154.00s–154.00s (×1), actor 1, squad 0 (trace 21877): recovering: retry accepted element corridor in column. Knowledge: actor memory at 150.00s, trace 21402. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21671978706331255, 'next_transition': 22178}.
<a id="trace-22158"></a>
- 154.00s–154.00s (×1), actor 1, squad 0 (trace 22158): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 150.00s, trace 21402. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21671978706331255, 'next_transition': 22178}.
<a id="trace-22178"></a>
- 154.25s–154.25s (×1), actor 1, squad 0 (trace 22178): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 150.00s, trace 21402. Next observer evidence: None.
<a id="trace-22184"></a>
<a id="trace-22186"></a>
<a id="trace-22291"></a>
<a id="trace-22293"></a>
<a id="trace-22320"></a>
<a id="trace-22322"></a>
<a id="trace-22358"></a>
<a id="trace-22360"></a>
- 154.30s–157.30s (×8), actor 1, squad 0 (trace 22184): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 150.00s, trace 21402. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5223093657080301, 'next_transition': 22291}.
<a id="trace-1898"></a>
- 157.50s–157.50s (×1), actor 1, squad 0 (events line 1898): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37925284007683435, 'next_transition': 22387}.
<a id="trace-22368"></a>
- 157.50s–157.50s (×1), actor 1, squad 0 (trace 22368): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.517425 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 157.50s, trace 22368. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37925284007683435, 'next_transition': 22387}.
<a id="trace-22369"></a>
- 157.50s–157.50s (×1), actor 1, squad 0 (trace 22369): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.517425 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 157.50s, trace 22369. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37925284007683435, 'next_transition': 22387}.
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22406"></a>
<a id="trace-22408"></a>
- 158.30s–159.30s (×4), actor 1, squad 0 (trace 22387): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 157.50s, trace 22369. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09141045115302736, 'next_transition': 22406}.
<a id="trace-22416"></a>
- 159.70s–159.70s (×1), actor 9, squad 1 (trace 22416): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 155.00s, trace 22225. Next observer evidence: {'until': 189.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2081}.
<a id="trace-22442"></a>
- 160.05s–160.05s (×1), actor 1, squad 0 (trace 22442): received platoon directive. Knowledge: actor memory at 160.00s, trace 22423. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07270220698163159, 'next_transition': 22757}.
<a id="trace-22697"></a>
- 160.05s–160.05s (×1), actor 1, squad 0 (trace 22697): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 160.00s, trace 22423. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07270220698163159, 'next_transition': 22757}.
<a id="trace-22757"></a>
<a id="trace-22759"></a>
- 160.30s–160.30s (×2), actor 1, squad 0 (trace 22757): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 160.00s, trace 22423. Next observer evidence: {'until': 160.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1441287325275567, 'next_transition': 22768}.
<a id="trace-22768"></a>
- 160.65s–160.65s (×1), actor 1, squad 0 (trace 22768): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 160.00s, trace 22423. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22894956259403526, 'next_transition': 22795}.
<a id="trace-22795"></a>
<a id="trace-22797"></a>
<a id="trace-22819"></a>
<a id="trace-22821"></a>
<a id="trace-22847"></a>
<a id="trace-22849"></a>
<a id="trace-22865"></a>
<a id="trace-22867"></a>
<a id="trace-22941"></a>
<a id="trace-22943"></a>
- 161.30s–165.30s (×10), actor 1, squad 0 (trace 22795): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 160.00s, trace 22423. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3688256159650519, 'next_transition': 22819}.
<a id="trace-1935"></a>
- 165.90s–165.90s (×1), actor 1, squad 0 (events line 1935): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22956"></a>
- 165.90s–165.90s (×1), actor 1, squad 0 (trace 22956): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.525030 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 165.90s, trace 22956. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22964}.
<a id="trace-22957"></a>
- 165.90s–165.90s (×1), actor 1, squad 0 (trace 22957): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.525030 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 165.90s, trace 22957. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22964}.
<a id="trace-22964"></a>
<a id="trace-22966"></a>
<a id="trace-22984"></a>
<a id="trace-22986"></a>
<a id="trace-23010"></a>
<a id="trace-23012"></a>
- 166.30s–168.30s (×6), actor 1, squad 0 (trace 22964): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 165.90s, trace 22957. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22984}.
<a id="trace-23021"></a>
- 168.85s–168.85s (×1), actor 1, squad 0 (trace 23021): received platoon directive. Knowledge: actor memory at 165.90s, trace 22957. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519990287044773, 'next_transition': 23281}.
<a id="trace-23268"></a>
- 168.85s–168.85s (×1), actor 1, squad 0 (trace 23268): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 165.90s, trace 22957. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519990287044773, 'next_transition': 23281}.
<a id="trace-23281"></a>
<a id="trace-23283"></a>
- 169.30s–169.30s (×2), actor 1, squad 0 (trace 23281): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 165.90s, trace 22957. Next observer evidence: {'until': 169.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12599983506338402, 'next_transition': 23289}.
<a id="trace-23289"></a>
- 169.40s–169.40s (×1), actor 1, squad 0 (trace 23289): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 165.90s, trace 22957. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4410003549431679, 'next_transition': 23372}.
<a id="trace-23372"></a>
<a id="trace-23374"></a>
<a id="trace-23395"></a>
<a id="trace-23397"></a>
<a id="trace-23422"></a>
<a id="trace-23424"></a>
<a id="trace-23449"></a>
<a id="trace-23466"></a>
<a id="trace-23468"></a>
- 170.30s–174.30s (×9), actor 1, squad 0 (trace 23372): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 170.00s, trace 23297. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5010084107278041, 'next_transition': 23395}.
<a id="trace-1986"></a>
- 174.35s–174.35s (×1), actor 1, squad 0 (events line 1986): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23476"></a>
- 174.35s–174.35s (×1), actor 1, squad 0 (trace 23476): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.528189 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 174.35s, trace 23476. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3205750462278684, 'next_transition': 23549}.
<a id="trace-23477"></a>
- 174.35s–174.35s (×1), actor 1, squad 0 (trace 23477): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.528189 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 174.35s, trace 23477. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3205750462278684, 'next_transition': 23549}.
<a id="trace-23549"></a>
<a id="trace-23566"></a>
<a id="trace-23568"></a>
- 175.30s–176.30s (×3), actor 1, squad 0 (trace 23549): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 175.00s, trace 23484. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23566}.
<a id="trace-23582"></a>
- 177.25s–177.25s (×1), actor 1, squad 0 (trace 23582): received platoon directive. Knowledge: actor memory at 175.00s, trace 23484. Next observer evidence: None.
<a id="trace-23833"></a>
- 177.25s–177.25s (×1), actor 1, squad 0 (trace 23833): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 175.00s, trace 23484. Next observer evidence: None.
<a id="trace-23844"></a>
<a id="trace-23846"></a>
- 177.30s–177.30s (×2), actor 1, squad 0 (trace 23844): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 175.00s, trace 23484. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23866}.
<a id="trace-23866"></a>
- 178.25s–178.25s (×1), actor 1, squad 0 (trace 23866): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 175.00s, trace 23484. Next observer evidence: None.
<a id="trace-23869"></a>
<a id="trace-23871"></a>
<a id="trace-23897"></a>
<a id="trace-23899"></a>
<a id="trace-23980"></a>
<a id="trace-23982"></a>
<a id="trace-24008"></a>
<a id="trace-24010"></a>
<a id="trace-24026"></a>
<a id="trace-24028"></a>
- 178.30s–182.30s (×10), actor 1, squad 0 (trace 23869): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 175.00s, trace 23484. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23513188088389878, 'next_transition': 23897}.
<a id="trace-2008"></a>
- 182.80s–182.80s (×1), actor 1, squad 0 (events line 2008): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24051}.
<a id="trace-24039"></a>
- 182.80s–182.80s (×1), actor 1, squad 0 (trace 24039): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.540279 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 182.80s, trace 24039. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24051}.
<a id="trace-24040"></a>
- 182.80s–182.80s (×1), actor 1, squad 0 (trace 24040): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.540279 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 182.80s, trace 24040. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24051}.
<a id="trace-24051"></a>
<a id="trace-24053"></a>
<a id="trace-24076"></a>
<a id="trace-24078"></a>
- 183.30s–184.30s (×4), actor 1, squad 0 (trace 24051): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 182.80s, trace 24040. Next observer evidence: {'until': 184.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.018572894227879652, 'next_transition': 24076}.
<a id="trace-24154"></a>
- 185.25s–185.25s (×1), actor 1, squad 0 (trace 24154): received platoon directive. Knowledge: actor memory at 185.00s, trace 24092. Next observer evidence: None.
<a id="trace-24405"></a>
- 185.25s–185.25s (×1), actor 1, squad 0 (trace 24405): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 185.00s, trace 24092. Next observer evidence: None.
<a id="trace-24416"></a>
<a id="trace-24418"></a>
- 185.30s–185.30s (×2), actor 1, squad 0 (trace 24416): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 185.00s, trace 24092. Next observer evidence: {'until': 185.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16358011859636248, 'next_transition': 24428}.
<a id="trace-24428"></a>
- 185.75s–185.75s (×1), actor 1, squad 0 (trace 24428): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 185.00s, trace 24092. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2545541802995977, 'next_transition': 24445}.
<a id="trace-24445"></a>
<a id="trace-24447"></a>
<a id="trace-24487"></a>
<a id="trace-24489"></a>
<a id="trace-24500"></a>
<a id="trace-24520"></a>
<a id="trace-24522"></a>
<a id="trace-24527"></a>
- 186.30s–188.30s (×8), actor 1, squad 0 (trace 24445): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 185.00s, trace 24092. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18292019970468015, 'next_transition': 24487}.
<a id="trace-2057"></a>
- 188.40s–188.40s (×1), actor 1, squad 0 (events line 2057): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24533"></a>
- 188.40s–188.40s (×1), actor 1, squad 0 (trace 24533): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.606354 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 188.40s, trace 24533. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09698244173044948, 'next_transition': 24544}.
<a id="trace-24534"></a>
- 188.40s–188.40s (×1), actor 1, squad 0 (trace 24534): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.606354 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 188.40s, trace 24534. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09698244173044948, 'next_transition': 24544}.
<a id="trace-24544"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24562"></a>
<a id="trace-24571"></a>
<a id="trace-24645"></a>
<a id="trace-24650"></a>
<a id="trace-24658"></a>
- 188.80s–190.80s (×8), actor 1, squad 0 (trace 24544): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 188.40s, trace 24534. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24555}.
<a id="trace-24665"></a>
- 191.05s–191.05s (×1), actor 1, squad 0 (trace 24665): received platoon directive. Knowledge: actor memory at 190.00s, trace 24578. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08913864843040872, 'next_transition': 24962}.
<a id="trace-24948"></a>
- 191.05s–191.05s (×1), actor 1, squad 0 (trace 24948): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 190.00s, trace 24578. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08913864843040872, 'next_transition': 24962}.
<a id="trace-2081"></a>
- 191.25s–191.25s (×1), actor 1, squad 1 (events line 2081): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27733}.
<a id="trace-24959"></a>
- 191.25s–191.25s (×1), actor 1, squad 1 (trace 24959): renew committed intent (75 s lifetime). Knowledge: actor memory at 191.25s, trace 24959. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27733}.
<a id="trace-24962"></a>
<a id="trace-24964"></a>
<a id="trace-24968"></a>
<a id="trace-24985"></a>
<a id="trace-25000"></a>
<a id="trace-25002"></a>
<a id="trace-25006"></a>
<a id="trace-25023"></a>
<a id="trace-25046"></a>
<a id="trace-25048"></a>
<a id="trace-25052"></a>
<a id="trace-25085"></a>
<a id="trace-25087"></a>
<a id="trace-25171"></a>
<a id="trace-25173"></a>
<a id="trace-25198"></a>
<a id="trace-25200"></a>
<a id="trace-25227"></a>
<a id="trace-25229"></a>
<a id="trace-25234"></a>
<a id="trace-25246"></a>
<a id="trace-25260"></a>
<a id="trace-25262"></a>
<a id="trace-25267"></a>
<a id="trace-25288"></a>
<a id="trace-25290"></a>
<a id="trace-25377"></a>
<a id="trace-25379"></a>
<a id="trace-25407"></a>
<a id="trace-25409"></a>
<a id="trace-25437"></a>
<a id="trace-25439"></a>
- 191.30s–202.30s (×32), actor 1, squad 0 (trace 24962): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 191.25s, trace 24959. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24985}.
<a id="trace-25448"></a>
- 202.65s–202.65s (×1), actor 1, squad 0 (trace 25448): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 200.00s, trace 25312. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23207903413277106, 'next_transition': 26029}.
<a id="trace-26029"></a>
<a id="trace-26031"></a>
<a id="trace-26064"></a>
<a id="trace-26066"></a>
<a id="trace-26146"></a>
<a id="trace-26148"></a>
<a id="trace-26180"></a>
<a id="trace-26182"></a>
<a id="trace-26187"></a>
<a id="trace-26200"></a>
<a id="trace-26210"></a>
<a id="trace-26212"></a>
<a id="trace-26217"></a>
<a id="trace-26225"></a>
<a id="trace-26242"></a>
<a id="trace-26244"></a>
<a id="trace-26249"></a>
<a id="trace-26257"></a>
<a id="trace-26268"></a>
<a id="trace-26270"></a>
<a id="trace-26275"></a>
<a id="trace-26284"></a>
- 203.30s–209.80s (×22), actor 1, squad 0 (trace 26029): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 200.00s, trace 25312. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4033509684986944, 'next_transition': 26064}.
<a id="trace-26351"></a>
- 210.25s–210.25s (×1), actor 1, squad 0 (trace 26351): ReactToContact: cover and return fire. Knowledge: actor memory at 210.00s, trace 26290. Next observer evidence: None.
<a id="trace-26352"></a>
- 210.25s–210.25s (×1), actor 1, squad 0 (trace 26352): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 210.00s, trace 26290. Next observer evidence: None.
<a id="trace-26962"></a>
<a id="trace-26964"></a>
<a id="trace-26969"></a>
- 210.30s–210.30s (×3), actor 1, squad 0 (trace 26962): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 210.00s, trace 26290. Next observer evidence: {'until': 210.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07098146034352909, 'next_transition': 26974}.
<a id="trace-26974"></a>
- 210.40s–210.40s (×1), actor 1, squad 0 (trace 26974): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 210.40s, trace 26974. Next observer evidence: {'until': 210.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14655509614561332, 'next_transition': 26979}.
<a id="trace-26979"></a>
<a id="trace-26995"></a>
<a id="trace-26997"></a>
<a id="trace-27002"></a>
<a id="trace-27023"></a>
<a id="trace-27025"></a>
<a id="trace-27063"></a>
<a id="trace-27065"></a>
- 210.80s–213.30s (×8), actor 1, squad 0 (trace 26979): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 210.40s, trace 26974. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3289640809313967, 'next_transition': 26995}.
<a id="trace-27078"></a>
- 213.95s–213.95s (×1), actor 1, squad 0 (trace 27078): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 210.40s, trace 26974. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418069721372243, 'next_transition': 27087}.
<a id="trace-27087"></a>
<a id="trace-27089"></a>
<a id="trace-27163"></a>
<a id="trace-27165"></a>
<a id="trace-27184"></a>
<a id="trace-27186"></a>
<a id="trace-27208"></a>
<a id="trace-27210"></a>
<a id="trace-27239"></a>
<a id="trace-27241"></a>
<a id="trace-27267"></a>
<a id="trace-27269"></a>
- 214.30s–219.30s (×12), actor 1, squad 0 (trace 27087): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 210.40s, trace 26974. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3544850548129554, 'next_transition': 27163}.
<a id="trace-27301"></a>
- 220.15s–220.15s (×1), actor 1, squad 0 (trace 27301): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14375694379364395, 'next_transition': 27356}.
<a id="trace-27303"></a>
- 220.15s–220.15s (×1), actor 1, squad 0 (trace 27303): NeedSupport. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14375694379364395, 'next_transition': 27356}.
<a id="trace-27356"></a>
<a id="trace-27358"></a>
- 220.30s–220.30s (×2), actor 1, squad 0 (trace 27356): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 220.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13786109756643544, 'next_transition': 27365}.
<a id="trace-27365"></a>
- 220.40s–220.40s (×1), actor 1, squad 0 (trace 27365): Reorganise: completed/failed drill. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.31761556252103823, 'next_transition': 27711}.
<a id="trace-27369"></a>
- 220.40s–220.40s (×1), actor 1, squad 0 (trace 27369): MoveTactically. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.31761556252103823, 'next_transition': 27711}.
<a id="trace-27370"></a>
- 220.40s–220.40s (×1), actor 1, squad 0 (trace 27370): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.31761556252103823, 'next_transition': 27711}.
<a id="trace-27711"></a>
<a id="trace-27713"></a>
<a id="trace-27740"></a>
<a id="trace-27742"></a>
- 221.30s–222.30s (×4), actor 1, squad 0 (trace 27711): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1231185607518155, 'next_transition': 27740}.
<a id="trace-27733"></a>
- 221.80s–221.80s (×1), actor 9, squad 1 (trace 27733): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 220.00s, trace 27287. Next observer evidence: None.
<a id="trace-27734"></a>
- 221.80s–221.80s (×1), actor 9, squad 1 (trace 27734): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 220.00s, trace 27287. Next observer evidence: None.
<a id="trace-27736"></a>
- 221.85s–221.85s (×1), actor 9, squad 1 (trace 27736): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 220.00s, trace 27287. Next observer evidence: {'until': 224, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28012}.
<a id="trace-27752"></a>
- 222.50s–222.50s (×1), actor 1, squad 0 (trace 27752): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4867973159139045, 'next_transition': 27984}.
<a id="trace-27753"></a>
- 222.50s–222.50s (×1), actor 1, squad 0 (trace 27753): rearward bound: one stationary suppressing element. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4867973159139045, 'next_transition': 27984}.
<a id="trace-27954"></a>
- 222.50s–222.50s (×1), actor 1, squad 0 (trace 27954): NeedSupport. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4867973159139045, 'next_transition': 27984}.
<a id="trace-27984"></a>
<a id="trace-27986"></a>
<a id="trace-28019"></a>
<a id="trace-28021"></a>
<a id="trace-28104"></a>
<a id="trace-28106"></a>
<a id="trace-28121"></a>
<a id="trace-28123"></a>
<a id="trace-28149"></a>
<a id="trace-28151"></a>
<a id="trace-28182"></a>
<a id="trace-28184"></a>
<a id="trace-28196"></a>
<a id="trace-28204"></a>
<a id="trace-28206"></a>
<a id="trace-28211"></a>
<a id="trace-28220"></a>
<a id="trace-28279"></a>
<a id="trace-28281"></a>
<a id="trace-28286"></a>
<a id="trace-28294"></a>
<a id="trace-28302"></a>
<a id="trace-28304"></a>
<a id="trace-28309"></a>
<a id="trace-28315"></a>
<a id="trace-28322"></a>
<a id="trace-28328"></a>
<a id="trace-28338"></a>
<a id="trace-28350"></a>
<a id="trace-28352"></a>
<a id="trace-28357"></a>
<a id="trace-28365"></a>
<a id="trace-28373"></a>
<a id="trace-28375"></a>
<a id="trace-28380"></a>
<a id="trace-28387"></a>
<a id="trace-28448"></a>
<a id="trace-28450"></a>
<a id="trace-28454"></a>
<a id="trace-28465"></a>
<a id="trace-28467"></a>
<a id="trace-28478"></a>
<a id="trace-28480"></a>
<a id="trace-28500"></a>
<a id="trace-28502"></a>
<a id="trace-28517"></a>
<a id="trace-28519"></a>
<a id="trace-28529"></a>
<a id="trace-28590"></a>
<a id="trace-28592"></a>
<a id="trace-28597"></a>
<a id="trace-28616"></a>
<a id="trace-28618"></a>
<a id="trace-28623"></a>
<a id="trace-28640"></a>
<a id="trace-28642"></a>
<a id="trace-28647"></a>
<a id="trace-28659"></a>
<a id="trace-28669"></a>
<a id="trace-28671"></a>
<a id="trace-28676"></a>
<a id="trace-28685"></a>
<a id="trace-28696"></a>
<a id="trace-28698"></a>
<a id="trace-28703"></a>
<a id="trace-28710"></a>
<a id="trace-28775"></a>
<a id="trace-28777"></a>
<a id="trace-28782"></a>
<a id="trace-28791"></a>
<a id="trace-28801"></a>
<a id="trace-28803"></a>
<a id="trace-28808"></a>
<a id="trace-28823"></a>
<a id="trace-28825"></a>
<a id="trace-28843"></a>
<a id="trace-28845"></a>
<a id="trace-28863"></a>
<a id="trace-28865"></a>
- 223.30s–249.30s (×79), actor 1, squad 0 (trace 27984): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 27284. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7450977566730035, 'next_transition': 28019}.
<a id="trace-28012"></a>
- 224.15s–224.15s (×1), actor 9, squad 1 (trace 28012): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 220.00s, trace 27287. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28016}.
<a id="trace-28013"></a>
- 224.15s–224.15s (×1), actor 9, squad 1 (trace 28013): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 220.00s, trace 27287. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28016}.
<a id="trace-28016"></a>
- 224.20s–224.20s (×1), actor 9, squad 1 (trace 28016): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 220.00s, trace 27287. Next observer evidence: {'until': 225, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2360}.
<a id="trace-2360"></a>
- 225.00s–225.00s (×1), actor 1, squad 1 (events line 2360): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 226.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28131}.
<a id="trace-28045"></a>
- 225.00s–225.00s (×1), actor 1, squad 1 (trace 28045): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.295519 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 225.00s, trace 28045. Next observer evidence: {'until': 226.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28131}.
<a id="trace-28046"></a>
- 225.00s–225.00s (×1), actor 1, squad 1 (trace 28046): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.295519 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 225.00s, trace 28046. Next observer evidence: {'until': 226.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28131}.
<a id="trace-28131"></a>
- 226.65s–226.65s (×1), actor 9, squad 1 (trace 28131): MoveTactically. Knowledge: actor memory at 225.00s, trace 28037. Next observer evidence: None.
<a id="trace-28132"></a>
- 226.65s–226.65s (×1), actor 9, squad 1 (trace 28132): received platoon directive. Knowledge: actor memory at 225.00s, trace 28037. Next observer evidence: None.
<a id="trace-28136"></a>
- 226.70s–226.70s (×1), actor 9, squad 1 (trace 28136): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 225.00s, trace 28037. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29003}.
<a id="trace-2426"></a>
- 250.30s–250.30s (×1), actor 1, squad 0 (events line 2426): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 253.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 2435}.
<a id="trace-28937"></a>
<a id="trace-28939"></a>
- 250.30s–250.30s (×2), actor 1, squad 0 (trace 28937): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.00s, trace 28882. Next observer evidence: {'until': 253.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 2435}.
<a id="trace-28944"></a>
- 250.30s–250.30s (×1), actor 1, squad 0 (trace 28944): renew committed intent (75 s lifetime). Knowledge: actor memory at 250.30s, trace 28944. Next observer evidence: {'until': 253.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 2435}.
<a id="trace-2435"></a>
- 253.65s–253.65s (×1), actor 9, squad 0 (events line 2435): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28990"></a>
- 253.65s–253.65s (×1), actor 9, squad 0 (trace 28990): renew committed intent (75 s lifetime). Knowledge: actor memory at 253.65s, trace 28990. Next observer evidence: {'until': 283.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0, 'next_transition': None}.
<a id="trace-29003"></a>
<a id="trace-29076"></a>
<a id="trace-29106"></a>
<a id="trace-29122"></a>
- 254.30s–257.30s (×4), actor 9, squad 1 (trace 29003): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 253.65s, trace 28990. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29076}.
<a id="trace-2466"></a>
- 258.20s–258.20s (×1), actor 9, squad 1 (events line 2466): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29142"></a>
- 258.20s–258.20s (×1), actor 9, squad 1 (trace 29142): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.189085 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 258.20s, trace 29142. Next observer evidence: None.
<a id="trace-29143"></a>
- 258.20s–258.20s (×1), actor 9, squad 1 (trace 29143): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.189085 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 258.20s, trace 29143. Next observer evidence: None.
<a id="trace-29147"></a>
<a id="trace-29164"></a>
- 258.30s–259.30s (×2), actor 9, squad 1 (trace 29147): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 258.20s, trace 29143. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29164}.
<a id="trace-29178"></a>
- 259.85s–259.85s (×1), actor 9, squad 1 (trace 29178): Withdraw to received rally. Knowledge: actor memory at 258.20s, trace 29143. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749999999999886, 'next_transition': 29292}.
<a id="trace-29179"></a>
- 259.85s–259.85s (×1), actor 9, squad 1 (trace 29179): rearward bound: one stationary suppressing element. Knowledge: actor memory at 258.20s, trace 29143. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749999999999886, 'next_transition': 29292}.
<a id="trace-29292"></a>
<a id="trace-29319"></a>
<a id="trace-29340"></a>
<a id="trace-29373"></a>
<a id="trace-29395"></a>
<a id="trace-29494"></a>
<a id="trace-29520"></a>
<a id="trace-29550"></a>
<a id="trace-29574"></a>
<a id="trace-29657"></a>
- 260.30s–270.30s (×10), actor 9, squad 1 (trace 29292): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 260.00s, trace 29233. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1499999999999986, 'next_transition': 29319}.
<a id="trace-29678"></a>
- 271.10s–271.10s (×1), actor 9, squad 1 (trace 29678): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 270.00s, trace 29598. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29685}.
<a id="trace-29679"></a>
- 271.10s–271.10s (×1), actor 9, squad 1 (trace 29679): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 270.00s, trace 29598. Next observer evidence: {'until': 271.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29685}.
<a id="trace-29685"></a>
<a id="trace-29709"></a>
<a id="trace-29737"></a>
<a id="trace-29758"></a>
<a id="trace-29832"></a>
<a id="trace-29866"></a>
<a id="trace-29886"></a>
<a id="trace-29910"></a>
<a id="trace-29932"></a>
<a id="trace-30006"></a>
<a id="trace-30026"></a>
<a id="trace-30051"></a>
<a id="trace-30085"></a>
<a id="trace-30104"></a>
<a id="trace-30174"></a>
<a id="trace-30196"></a>
<a id="trace-30217"></a>
<a id="trace-30244"></a>
<a id="trace-30277"></a>
<a id="trace-30348"></a>
<a id="trace-30369"></a>
<a id="trace-30390"></a>
<a id="trace-30412"></a>
<a id="trace-30434"></a>
<a id="trace-30511"></a>
<a id="trace-30538"></a>
<a id="trace-30558"></a>
<a id="trace-30582"></a>
<a id="trace-30597"></a>
<a id="trace-30672"></a>
<a id="trace-30699"></a>
<a id="trace-30723"></a>
<a id="trace-30757"></a>
<a id="trace-30776"></a>
<a id="trace-30869"></a>
<a id="trace-30889"></a>
<a id="trace-30917"></a>
<a id="trace-30950"></a>
<a id="trace-31019"></a>
<a id="trace-31039"></a>
<a id="trace-31059"></a>
<a id="trace-31088"></a>
<a id="trace-31111"></a>
<a id="trace-31186"></a>
<a id="trace-31213"></a>
<a id="trace-31232"></a>
<a id="trace-31256"></a>
<a id="trace-31278"></a>
<a id="trace-31349"></a>
- 271.30s–320.30s (×49), actor 9, squad 1 (trace 29685): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 270.00s, trace 29598. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29709}.
<a id="trace-3017"></a>
- 320.85s–320.85s (×1), actor 9, squad 1 (events line 3017): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31366"></a>
- 320.85s–320.85s (×1), actor 9, squad 1 (trace 31366): renew committed intent (75 s lifetime). Knowledge: actor memory at 320.85s, trace 31366. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31376}.
<a id="trace-31376"></a>
<a id="trace-31404"></a>
<a id="trace-31427"></a>
<a id="trace-31518"></a>
<a id="trace-31540"></a>
<a id="trace-31566"></a>
<a id="trace-31594"></a>
<a id="trace-31618"></a>
<a id="trace-31690"></a>
<a id="trace-31713"></a>
<a id="trace-31730"></a>
<a id="trace-31757"></a>
<a id="trace-31780"></a>
<a id="trace-31854"></a>
<a id="trace-31903"></a>
<a id="trace-31926"></a>
<a id="trace-31948"></a>
<a id="trace-32021"></a>
<a id="trace-32073"></a>
<a id="trace-32099"></a>
<a id="trace-32118"></a>
<a id="trace-32188"></a>
<a id="trace-32210"></a>
<a id="trace-32233"></a>
<a id="trace-32262"></a>
<a id="trace-32291"></a>
<a id="trace-32362"></a>
<a id="trace-32386"></a>
<a id="trace-32452"></a>
<a id="trace-32537"></a>
<a id="trace-32556"></a>
<a id="trace-32578"></a>
<a id="trace-32601"></a>
<a id="trace-32618"></a>
- 321.30s–359.30s (×34), actor 9, squad 1 (trace 31376): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 320.85s, trace 31366. Next observer evidence: {'until': 322.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31404}.

## Net delivery

273 matched order/radio deliveries; 512 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.501s; maximum 2.500s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1949: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1957: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1959: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1962: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1964: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1965: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1966: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4211: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4212: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4213: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 18.55s leader 5, trace 4214: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4365: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4370: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4371: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4373: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4375: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4376: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4377: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4378: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4379: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4380: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4381: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4382: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4383: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4384: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5448: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5453: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5454: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5456: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5458: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5459: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5460: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5461: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5462: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5463: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5464: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5465: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5466: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5467: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5749: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5754: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5755: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 5757: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5759: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5760: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5761: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5762: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5763: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5764: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5765: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5766: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5767: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5768: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 5849: estimate 12.09; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 5850: estimate 12.09; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7407: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7408: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 7410: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7412: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7413: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7414: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7415: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7416: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7417: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7418: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7419: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7420: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7421: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 7589: estimate 11.85; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 7590: estimate 11.85; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7848: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7852: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7853: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7856: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7857: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7858: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7859: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7860: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7861: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7862: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7863: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7864: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7865: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.05s leader 5, trace 8196: estimate 12.15; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8240: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8244: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8245: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8248: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8249: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8250: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8251: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8252: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8253: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8254: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8255: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8256: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8257: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8666: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8670: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8671: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 8673: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8674: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8675: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8676: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8677: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8678: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8679: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8680: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8681: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 8682: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 8683: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 9929: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 9930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 9931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 9932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 9933: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 9934: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 9935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 9936: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 9937: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 9938: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 9939: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 9940: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 9941: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 9942: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 9943: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 9944: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 9945: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 9946: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 56.05s leader 5, trace 10040: estimate 12.05; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 10158: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 10159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 10160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10162: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 10163: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 10165: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10166: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10167: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 10168: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10169: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10170: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10171: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10172: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10173: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 10174: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 10175: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 10690: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 10691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 10692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 10693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 10694: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 10695: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 10696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 10697: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 10698: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 10699: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 10700: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 10701: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 10702: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 10703: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 10704: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 10705: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 10706: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 10707: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 11321: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 11322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 11323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11325: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11326: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 11327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 11328: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11329: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11330: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 11331: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11332: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11333: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11334: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11335: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11336: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 11337: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 11338: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 11837: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 11838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 11839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 11840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11841: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11842: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 11843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 11844: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11845: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11846: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 11847: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11848: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11849: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11850: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11851: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11852: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 11853: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 11854: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.95s leader 5, trace 12202: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 12231: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 12232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 12233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 12234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 12235: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 12236: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 12237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 12238: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 12239: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 12240: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 12241: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 12242: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 12243: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 12244: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 12245: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 12246: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 12247: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 12248: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 12510: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 12511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 12512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 12513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 12514: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 12515: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 12516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 12517: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 12518: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 12519: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 12520: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 12521: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 12522: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 12523: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 12524: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 12525: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 12526: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 12527: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 12788: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 12789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 12790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 12791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 12792: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 12793: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 12794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 12795: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 12796: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 12797: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 12798: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 12799: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 12800: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 12801: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 12802: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 12803: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 12804: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 13661: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 13662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 13663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 13664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 13665: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 13666: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 13667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 13668: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 13669: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 13670: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 13671: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 13672: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 13673: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 13674: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 13675: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 13676: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 13677: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 5, trace 14122: estimate 11.58; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 14197: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 14198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 14199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14201: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14202: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 14203: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 14204: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14205: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14206: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14207: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14208: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14209: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14210: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14211: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14212: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14213: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15115: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 15116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 15117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15119: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15120: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15121: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15122: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15123: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15124: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15125: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15126: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15127: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15128: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15129: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15130: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15131: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15403: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 15404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15407: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15408: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15409: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15410: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15411: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15412: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15413: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15414: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15415: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15416: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15417: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15418: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15419: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 17518: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 17519: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 17520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 17521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 17522: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 17523: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 17524: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 17525: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 17526: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 17527: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 17528: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 17529: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 17530: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 17531: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 17532: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 17533: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 17534: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 18186: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 18187: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 18188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 18189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 18190: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 18191: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 18192: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 18193: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 18194: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 18195: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 18196: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 18197: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 18198: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 18199: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 18200: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 18201: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.15s leader 5, trace 18312: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.15s leader 5, trace 18313: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.10s leader 5, trace 18477: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 18819: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 18820: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 18821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 18822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 18823: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 18824: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 18825: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 18826: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 18827: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 18828: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 18829: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 18830: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 18831: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 18832: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 18833: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 129.35s leader 1, trace 18990: estimate 10.77; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 129.35s leader 1, trace 18991: estimate 10.77; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 19005: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 19006: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 19007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 19008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 19009: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 19010: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 19011: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 19012: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 19013: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 19014: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 19015: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 19016: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 19017: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 19018: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 19019: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 19976: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 19977: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 19978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 19979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 19980: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 19981: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 19982: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 19983: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 19984: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 19985: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 19986: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 19987: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 19988: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 19989: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 19990: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 20447: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 20448: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 20449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 20450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 20451: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 20452: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20453: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20454: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20455: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 20456: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20457: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 20458: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20459: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 20460: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20461: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 20789: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 20790: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 20791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 20792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 20793: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20794: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20795: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 20796: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20797: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20798: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20799: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20800: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20801: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20802: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20803: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 21402: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 21403: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 21404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 21405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 21406: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 21407: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 21408: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 21409: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 21410: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 21411: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 21412: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 21413: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 21414: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 21415: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 21416: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 22220: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 22221: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 22222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 22223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 22224: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 22225: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 22226: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 22227: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 22228: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 22229: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 22230: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 22231: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 22232: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 22233: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 22234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 157.50s leader 1, trace 22368: estimate 11.60; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 157.50s leader 1, trace 22369: estimate 11.60; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 22423: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 22424: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 22425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 22426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 22427: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 22428: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 22429: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 22430: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 22431: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 22432: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 22433: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 22434: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 22435: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 22436: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 22437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 22878: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 22879: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 22880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 22881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 22882: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 22883: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 22884: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 22885: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 22886: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 22887: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 22888: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 22889: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 22890: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 22891: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 22892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.90s leader 1, trace 22956: estimate 11.43; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.90s leader 1, trace 22957: estimate 11.43; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 23297: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 23298: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 23299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 23300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 23301: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 23302: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 23303: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 23304: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 23305: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 23306: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 23307: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 23308: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 23309: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 23310: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 23311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 174.35s leader 1, trace 23476: estimate 11.36; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 174.35s leader 1, trace 23477: estimate 11.36; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 23484: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 23485: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 23486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 23487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 23488: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 23489: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 23490: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 23491: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 23492: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 23493: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 23494: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 23495: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 23496: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 23497: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 23498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 23912: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 23913: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 23914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 23915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 23916: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 23917: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 23918: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 23919: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 23920: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 23921: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 23922: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 23923: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 23924: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 23925: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 23926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 182.80s leader 1, trace 24039: estimate 11.11; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 182.80s leader 1, trace 24040: estimate 11.11; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 24092: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 24093: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 24094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 24095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 24096: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 24097: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 24098: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 24099: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 24100: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 24101: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 24102: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 24103: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 24104: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 24105: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 24106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 188.40s leader 1, trace 24533: estimate 9.90; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 188.40s leader 1, trace 24534: estimate 9.90; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 24578: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 24579: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 24580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 24581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 24582: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 24583: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 24584: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 24585: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 24586: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 24587: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 24588: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 24589: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 24590: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 24591: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 24592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.25s leader 1, trace 24959: estimate 9.78; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 25106: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 25107: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 25108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 25109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 25110: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 25111: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 25112: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 25113: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 25114: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 25115: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 25116: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 25117: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 25118: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 25119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 25312: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 25313: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 25314: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 25315: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 25316: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 25317: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 25318: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 25319: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 25320: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 25321: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 25322: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 25323: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 25324: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 25325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 26081: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 26082: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 26083: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 26084: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 26085: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 26086: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 26087: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 26088: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 26089: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 26090: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 26091: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 26092: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 26093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 26290: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 26291: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 26292: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 26293: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 26294: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 26295: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 26296: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 26297: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 26298: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 26299: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 26300: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 26301: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.40s leader 1, trace 26974: estimate 10.48; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 27100: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 27101: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 27102: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 27103: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 27104: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 27105: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 27106: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 27107: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 27108: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 27109: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 27110: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 27111: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 27284: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 27285: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 27286: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 27287: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 27288: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 27289: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 27290: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 27291: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 27292: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 27293: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 27294: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 28035: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 28036: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 28037: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 28038: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 28039: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 28040: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 28041: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 28042: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 28043: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 28044: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 28045: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 28046: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 28223: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 28224: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 28225: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 28226: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 28227: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 28228: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 28229: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 28230: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 28231: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 28392: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 28393: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 28394: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 28395: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 28396: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 28397: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 28398: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 28399: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 28400: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 28532: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 28533: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 28534: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 28535: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 28536: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 28537: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 28538: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 28539: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 28540: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 28716: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 28717: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 28718: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 28719: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 28720: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 28721: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 28722: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 28723: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 28724: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 28882: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 28883: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 28884: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 28885: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 28886: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 28887: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 28888: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 28889: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 28890: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.30s leader 1, trace 28944: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.65s leader 9, trace 28990: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 29020: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 29021: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 29022: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 29023: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 29024: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 29025: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 29026: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 29027: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 258.20s leader 9, trace 29142: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 258.20s leader 9, trace 29143: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 29233: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 29234: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 29235: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 29236: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 29237: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 29238: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 29239: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 29240: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 29412: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 29413: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 29414: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 29415: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 29416: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 29417: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 29418: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 29419: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 29598: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 29599: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 29600: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 29601: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 29602: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 29603: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 29604: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 29605: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 29777: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 29778: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 29779: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 29780: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 29781: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 29782: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 29783: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 29784: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 29946: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 29947: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 29948: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 29949: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 29950: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 29951: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 29952: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 29953: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 30115: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 30116: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 30117: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 30118: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 30119: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 30120: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 30121: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 30122: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 30294: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 30295: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 30296: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 30297: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 30298: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 30299: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 30300: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 30301: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 30451: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 30452: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 30453: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 30454: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 30455: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 30456: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 30457: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 30458: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 30614: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 30615: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 30616: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 30617: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 30618: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 30619: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 30620: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 30621: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 30791: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 30792: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 30793: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 30794: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 30795: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 30796: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 30797: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 30798: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 30961: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 30962: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 30963: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 30964: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 30965: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 30966: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 30967: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 30968: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 31124: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 31125: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 31126: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 31127: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 31128: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 31129: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 31130: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 31131: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 31295: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 31296: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 31297: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 31298: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 31299: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 31300: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 31301: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 31302: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.85s leader 9, trace 31366: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 31462: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 31463: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 31464: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 31465: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 31466: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 31467: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 31468: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 31469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 31634: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 31635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 31636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 31637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 31638: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 31639: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 31640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 31641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 31799: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 31800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 31801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 31802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 31803: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 31804: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 31805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 31806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 31963: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 31964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 31965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 31966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 31967: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 31968: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 31969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 31970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 32130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 32131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 32132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 32133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 32134: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 32135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 32136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 32137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 32308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 32309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 32310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 32311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 32312: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 32313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 32314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 32315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 32473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 32474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 32475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 32476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 32477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 32478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 32479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 32480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 32636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 32637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 32638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 32639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 32640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 32641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 32642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 32643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren incapacitated
- 1: Voss incapacitated
- 1: Moss incapacitated
- 1: Iven killed in action
- 1: Quill incapacitated
- 1: Orin incapacitated
- 1: Soren killed in action
- 1: Ash incapacitated
- 1: Tern killed in action
- 1: Reed killed in action
- 1: Rook killed in action

## Outcome attribution

- 154.25s, evidence 22178: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 160.65s, evidence 22768: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22894956259403526, 'next_transition': 22795}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 169.40s, evidence 23289: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4410003549431679, 'next_transition': 23372}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 178.25s, evidence 23866: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 185.75s, evidence 24428: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2545541802995977, 'next_transition': 24445}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 258.20s, evidence 2466: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 258.20s, evidence 29142: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.189085 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 258.20s, evidence 29143: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.189085 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 320.85s, evidence 3017: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
