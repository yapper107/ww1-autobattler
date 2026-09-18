# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/29/107/good-azure/battle-107-1789674311070851107`

## Battle summary

**Azure** · 208 s · 926 shots.

### Turning points

- 29.9s, squad 4: contact (events line 316). First recorded contact.
- 53.6s, squad 0: help call ([trace 8604](#trace-8604)). No completion observed before termination.
- 81.5s, squad 0: help call ([trace 10709](#trace-10709)). No completion observed before termination.
- 199.3s, squad 0: help call ([trace 15317](#trace-15317)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 661 shots, 5/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 265 shots, 8/8 lost.

### Decisions and attribution

At 47.1s, squad 0 chose prepared a base of fire ([trace 4732](#trace-4732)), followed by 2 shots and 0 own casualties; estimate 9.3 against 0 distinct squad-reported contacts; At 47.1s, squad 0 chose advanced tactically ([trace 8007](#trace-8007)), followed by 2 shots and 0 own casualties; estimate 9.3 against 0 distinct squad-reported contacts; At 100.5s, squad 0 chose renewed the existing objective ([trace 12094](#trace-12094)), followed by 1 shots and 0 own casualties; estimate 8.9 against 2 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 536](#trace-536)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150217031523333, 'next_transition': 550}.
- 39.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.641560 retreat threshold=0.500000 initiative=delegated ([trace 4317](#trace-4317)). Following evidence: None.

### Communication

181 matched deliveries (mean 0.35s, max 2.25s); 79 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 29.95s, squad 4, contact, evidence events line 316: First recorded contact; .
- 53.60s, squad 0, help call, evidence 8604: NeedSupport; No completion observed before termination.
- 81.45s, squad 0, help call, evidence 10709: NeedSupport; No completion observed before termination.
- 199.30s, squad 0, help call, evidence 15317: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757855577036504, 'next_transition': 451}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757855577036504, 'next_transition': 451}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.757855577036504, 'next_transition': 451}.
<a id="trace-451"></a>
<a id="trace-471"></a>
<a id="trace-492"></a>
<a id="trace-514"></a>
<a id="trace-528"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2299751769664327, 'next_transition': 471}.
<a id="trace-78"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 78): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150217031523333, 'next_transition': 550}.
<a id="trace-536"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 536): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 536. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150217031523333, 'next_transition': 550}.
<a id="trace-537"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 537): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 537. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150217031523333, 'next_transition': 550}.
<a id="trace-550"></a>
<a id="trace-572"></a>
<a id="trace-649"></a>
<a id="trace-668"></a>
<a id="trace-690"></a>
<a id="trace-713"></a>
<a id="trace-731"></a>
<a id="trace-750"></a>
<a id="trace-773"></a>
<a id="trace-792"></a>
<a id="trace-809"></a>
<a id="trace-818"></a>
<a id="trace-902"></a>
<a id="trace-914"></a>
- 4.20s–10.70s (×14), actor 5, squad 0 (trace 550): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 537. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149642502898536, 'next_transition': 572}.
<a id="trace-715"></a>
<a id="trace-775"></a>
<a id="trace-794"></a>
<a id="trace-820"></a>
<a id="trace-904"></a>
<a id="trace-916"></a>
<a id="trace-1235"></a>
<a id="trace-1287"></a>
<a id="trace-1388"></a>
<a id="trace-1411"></a>
<a id="trace-1510"></a>
<a id="trace-1573"></a>
<a id="trace-1594"></a>
<a id="trace-1617"></a>
<a id="trace-1636"></a>
<a id="trace-1670"></a>
<a id="trace-1755"></a>
<a id="trace-1782"></a>
<a id="trace-1805"></a>
<a id="trace-1827"></a>
<a id="trace-1836"></a>
<a id="trace-1845"></a>
<a id="trace-1859"></a>
<a id="trace-2195"></a>
<a id="trace-2214"></a>
<a id="trace-2303"></a>
<a id="trace-2322"></a>
<a id="trace-2392"></a>
<a id="trace-2404"></a>
<a id="trace-2421"></a>
<a id="trace-2436"></a>
<a id="trace-2451"></a>
<a id="trace-2466"></a>
<a id="trace-2555"></a>
<a id="trace-2570"></a>
<a id="trace-2585"></a>
<a id="trace-2592"></a>
<a id="trace-2612"></a>
<a id="trace-2624"></a>
<a id="trace-2637"></a>
<a id="trace-2646"></a>
<a id="trace-2818"></a>
<a id="trace-2919"></a>
<a id="trace-3326"></a>
<a id="trace-3345"></a>
<a id="trace-3773"></a>
<a id="trace-3831"></a>
<a id="trace-4272"></a>
<a id="trace-4295"></a>
<a id="trace-4449"></a>
<a id="trace-4500"></a>
<a id="trace-4522"></a>
<a id="trace-4554"></a>
<a id="trace-4565"></a>
<a id="trace-4584"></a>
<a id="trace-4589"></a>
<a id="trace-4604"></a>
<a id="trace-4694"></a>
<a id="trace-4703"></a>
<a id="trace-4717"></a>
<a id="trace-4726"></a>
<a id="trace-8328"></a>
<a id="trace-8334"></a>
<a id="trace-8390"></a>
<a id="trace-8402"></a>
<a id="trace-8498"></a>
<a id="trace-8510"></a>
<a id="trace-8537"></a>
<a id="trace-8551"></a>
<a id="trace-8566"></a>
<a id="trace-8581"></a>
<a id="trace-8596"></a>
<a id="trace-8617"></a>
<a id="trace-8646"></a>
<a id="trace-8725"></a>
<a id="trace-8735"></a>
<a id="trace-8774"></a>
<a id="trace-8790"></a>
<a id="trace-8802"></a>
<a id="trace-8996"></a>
<a id="trace-9020"></a>
<a id="trace-9039"></a>
<a id="trace-9147"></a>
<a id="trace-9170"></a>
<a id="trace-9185"></a>
<a id="trace-9255"></a>
<a id="trace-9281"></a>
<a id="trace-9322"></a>
<a id="trace-9371"></a>
<a id="trace-9532"></a>
<a id="trace-9578"></a>
<a id="trace-9622"></a>
<a id="trace-9670"></a>
<a id="trace-9709"></a>
<a id="trace-9751"></a>
<a id="trace-9827"></a>
<a id="trace-9867"></a>
<a id="trace-9890"></a>
<a id="trace-9988"></a>
<a id="trace-10018"></a>
<a id="trace-10040"></a>
<a id="trace-10058"></a>
<a id="trace-10073"></a>
<a id="trace-10088"></a>
<a id="trace-10106"></a>
<a id="trace-10116"></a>
<a id="trace-10134"></a>
<a id="trace-10206"></a>
<a id="trace-10211"></a>
<a id="trace-10233"></a>
<a id="trace-10522"></a>
<a id="trace-10545"></a>
<a id="trace-10571"></a>
<a id="trace-10592"></a>
<a id="trace-10723"></a>
<a id="trace-11196"></a>
<a id="trace-11215"></a>
<a id="trace-11241"></a>
<a id="trace-11253"></a>
<a id="trace-11297"></a>
<a id="trace-11390"></a>
<a id="trace-11400"></a>
<a id="trace-11422"></a>
<a id="trace-11443"></a>
<a id="trace-11456"></a>
<a id="trace-11493"></a>
<a id="trace-11610"></a>
<a id="trace-11693"></a>
<a id="trace-11720"></a>
<a id="trace-11732"></a>
<a id="trace-11750"></a>
<a id="trace-11766"></a>
<a id="trace-11782"></a>
<a id="trace-11793"></a>
<a id="trace-11808"></a>
<a id="trace-11827"></a>
<a id="trace-11909"></a>
<a id="trace-11927"></a>
<a id="trace-11938"></a>
<a id="trace-11955"></a>
<a id="trace-11962"></a>
<a id="trace-11976"></a>
<a id="trace-11997"></a>
<a id="trace-12006"></a>
<a id="trace-12016"></a>
<a id="trace-12103"></a>
<a id="trace-12305"></a>
<a id="trace-12325"></a>
<a id="trace-12336"></a>
<a id="trace-12352"></a>
<a id="trace-12445"></a>
<a id="trace-12461"></a>
<a id="trace-12467"></a>
<a id="trace-12479"></a>
<a id="trace-12488"></a>
<a id="trace-12500"></a>
<a id="trace-12511"></a>
<a id="trace-12524"></a>
<a id="trace-12529"></a>
<a id="trace-12625"></a>
<a id="trace-12641"></a>
<a id="trace-12653"></a>
<a id="trace-12667"></a>
<a id="trace-12676"></a>
<a id="trace-12688"></a>
<a id="trace-12778"></a>
- 6.70s–115.25s (×166), actor 37, squad 4 (trace 715): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 592. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 775}.
<a id="trace-922"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 922): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 824. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787591084459744, 'next_transition': 1233}.
<a id="trace-1233"></a>
<a id="trace-1258"></a>
<a id="trace-1285"></a>
<a id="trace-1310"></a>
<a id="trace-1332"></a>
<a id="trace-1358"></a>
<a id="trace-1386"></a>
<a id="trace-1409"></a>
<a id="trace-1489"></a>
<a id="trace-1508"></a>
<a id="trace-1532"></a>
<a id="trace-1556"></a>
<a id="trace-1571"></a>
<a id="trace-1592"></a>
<a id="trace-1615"></a>
<a id="trace-1634"></a>
<a id="trace-1656"></a>
<a id="trace-1668"></a>
<a id="trace-1753"></a>
<a id="trace-1780"></a>
<a id="trace-1793"></a>
<a id="trace-1803"></a>
<a id="trace-1825"></a>
<a id="trace-1834"></a>
<a id="trace-1843"></a>
<a id="trace-1857"></a>
- 11.20s–23.75s (×26), actor 5, squad 0 (trace 1233): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 829. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5538400222104307, 'next_transition': 1258}.
<a id="trace-1867"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1867): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1679. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2193}.
<a id="trace-1868"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1868): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1679. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2193}.
<a id="trace-2193"></a>
<a id="trace-2212"></a>
<a id="trace-2301"></a>
<a id="trace-2320"></a>
<a id="trace-2342"></a>
<a id="trace-2369"></a>
<a id="trace-2390"></a>
<a id="trace-2402"></a>
<a id="trace-2419"></a>
<a id="trace-2434"></a>
<a id="trace-2449"></a>
<a id="trace-2464"></a>
<a id="trace-2553"></a>
<a id="trace-2568"></a>
<a id="trace-2583"></a>
<a id="trace-2590"></a>
<a id="trace-2610"></a>
<a id="trace-2622"></a>
<a id="trace-2635"></a>
<a id="trace-2644"></a>
- 24.25s–33.75s (×20), actor 5, squad 0 (trace 2193): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1684. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2212}.
<a id="trace-2649"></a>
- 33.85s–33.85s (×1), actor 0, squad 0 (trace 2649): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 2469. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2816}.
<a id="trace-2816"></a>
<a id="trace-2828"></a>
<a id="trace-2909"></a>
<a id="trace-2917"></a>
- 34.25s–35.75s (×4), actor 5, squad 0 (trace 2816): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2474. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2828}.
<a id="trace-2930"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2930): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2830. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14250579127544943, 'next_transition': 3324}.
<a id="trace-2931"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2931): bounding overwatch. Knowledge: actor memory at 35.00s, trace 2830. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14250579127544943, 'next_transition': 3324}.
<a id="trace-2932"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2932): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2830. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14250579127544943, 'next_transition': 3324}.
<a id="trace-3324"></a>
<a id="trace-3343"></a>
- 36.25s–36.75s (×2), actor 5, squad 0 (trace 3324): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2835. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2958921284570156, 'next_transition': 3343}.
<a id="trace-3357"></a>
- 37.10s–37.10s (×1), actor 0, squad 0 (trace 3357): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2830. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18647668922850763, 'next_transition': 3771}.
<a id="trace-3771"></a>
<a id="trace-3806"></a>
<a id="trace-3829"></a>
- 37.25s–38.25s (×3), actor 5, squad 0 (trace 3771): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2835. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2186398302171461, 'next_transition': 3806}.
<a id="trace-3848"></a>
- 38.60s–38.60s (×1), actor 0, squad 0 (trace 3848): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 2830. Next observer evidence: None.
<a id="trace-4270"></a>
<a id="trace-4293"></a>
- 38.75s–39.25s (×2), actor 5, squad 0 (trace 4270): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2835. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4275019829747029, 'next_transition': 4293}.
<a id="trace-438"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (events line 438): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4317"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 4317): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.641560 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 4317. Next observer evidence: None.
<a id="trace-4318"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 4318): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.641560 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 4318. Next observer evidence: None.
<a id="trace-4332"></a>
<a id="trace-4447"></a>
<a id="trace-4476"></a>
<a id="trace-4498"></a>
<a id="trace-4520"></a>
- 39.75s–41.75s (×5), actor 5, squad 0 (trace 4332): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.60s, trace 4318. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28968812447198056, 'next_transition': 4447}.
<a id="trace-4546"></a>
- 42.20s–42.20s (×1), actor 0, squad 0 (trace 4546): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4358. Next observer evidence: None.
<a id="trace-4552"></a>
<a id="trace-4563"></a>
<a id="trace-4582"></a>
<a id="trace-4587"></a>
<a id="trace-4602"></a>
<a id="trace-4616"></a>
<a id="trace-4692"></a>
<a id="trace-4701"></a>
- 42.25s–45.75s (×8), actor 5, squad 0 (trace 4552): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4363. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12750658787514646, 'next_transition': 4563}.
<a id="trace-4705"></a>
- 46.10s–46.10s (×1), actor 0, squad 0 (trace 4705): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 4622. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4715}.
<a id="trace-4715"></a>
<a id="trace-4724"></a>
- 46.25s–46.75s (×2), actor 5, squad 0 (trace 4715): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4627. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4724}.
<a id="trace-4732"></a>
- 47.10s–47.10s (×1), actor 0, squad 0 (trace 4732): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 4622. Next observer evidence: {'until': 47.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8326}.
<a id="trace-8006"></a>
- 47.10s–47.10s (×1), actor 0, squad 0 (trace 8006): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 4622. Next observer evidence: {'until': 47.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8326}.
<a id="trace-8007"></a>
- 47.10s–47.10s (×1), actor 0, squad 0 (trace 8007): MoveTactically. Knowledge: actor memory at 45.00s, trace 4622. Next observer evidence: {'until': 47.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8326}.
<a id="trace-8008"></a>
- 47.10s–47.10s (×1), actor 0, squad 0 (trace 8008): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 4622. Next observer evidence: {'until': 47.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8326}.
<a id="trace-8326"></a>
<a id="trace-8332"></a>
<a id="trace-8359"></a>
<a id="trace-8388"></a>
<a id="trace-8400"></a>
<a id="trace-8413"></a>
<a id="trace-8496"></a>
<a id="trace-8508"></a>
<a id="trace-8535"></a>
<a id="trace-8549"></a>
<a id="trace-8564"></a>
<a id="trace-8579"></a>
<a id="trace-8594"></a>
- 47.25s–53.25s (×13), actor 5, squad 0 (trace 8326): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4627. Next observer evidence: {'until': 47.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8332}.
<a id="trace-8604"></a>
- 53.60s–53.60s (×1), actor 0, squad 0 (trace 8604): NeedSupport. Knowledge: actor memory at 50.00s, trace 8422. Next observer evidence: None.
<a id="trace-8615"></a>
<a id="trace-8630"></a>
<a id="trace-8644"></a>
<a id="trace-8723"></a>
<a id="trace-8733"></a>
<a id="trace-8754"></a>
<a id="trace-8772"></a>
<a id="trace-8788"></a>
<a id="trace-8800"></a>
<a id="trace-8821"></a>
- 53.75s–58.25s (×10), actor 5, squad 0 (trace 8615): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8427. Next observer evidence: {'until': 54.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.4174883150172188, 'next_transition': 8630}.
<a id="trace-8827"></a>
- 58.40s–58.40s (×1), actor 0, squad 0 (trace 8827): superiority established (8 s hysteresis). Knowledge: actor memory at 55.00s, trace 8649. Next observer evidence: {'until': 58.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23624680864727668, 'next_transition': 8994}.
<a id="trace-8994"></a>
<a id="trace-9018"></a>
<a id="trace-9037"></a>
<a id="trace-9120"></a>
<a id="trace-9145"></a>
<a id="trace-9168"></a>
<a id="trace-9183"></a>
<a id="trace-9220"></a>
<a id="trace-9253"></a>
<a id="trace-9279"></a>
<a id="trace-9320"></a>
<a id="trace-9369"></a>
<a id="trace-9416"></a>
<a id="trace-9530"></a>
<a id="trace-9576"></a>
<a id="trace-9620"></a>
<a id="trace-9668"></a>
<a id="trace-9707"></a>
<a id="trace-9749"></a>
<a id="trace-9792"></a>
<a id="trace-9825"></a>
<a id="trace-9865"></a>
<a id="trace-9888"></a>
<a id="trace-9986"></a>
<a id="trace-10016"></a>
<a id="trace-10038"></a>
<a id="trace-10056"></a>
<a id="trace-10071"></a>
<a id="trace-10086"></a>
<a id="trace-10098"></a>
<a id="trace-10104"></a>
<a id="trace-10114"></a>
<a id="trace-10132"></a>
<a id="trace-10204"></a>
<a id="trace-10209"></a>
<a id="trace-10223"></a>
<a id="trace-10231"></a>
- 58.75s–76.75s (×37), actor 5, squad 0 (trace 8994): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8654. Next observer evidence: {'until': 59.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.312525099167069, 'next_transition': 9018}.
<a id="trace-10241"></a>
- 77.15s–77.15s (×1), actor 0, squad 0 (trace 10241): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 75.00s, trace 10136. Next observer evidence: {'until': 77.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.10300489347059122, 'next_transition': 10520}.
<a id="trace-10520"></a>
<a id="trace-10533"></a>
<a id="trace-10543"></a>
<a id="trace-10569"></a>
<a id="trace-10584"></a>
<a id="trace-10590"></a>
<a id="trace-10675"></a>
<a id="trace-10690"></a>
<a id="trace-10704"></a>
- 77.25s–81.25s (×9), actor 5, squad 0 (trace 10520): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 10141. Next observer evidence: {'until': 77.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.1134054077469412, 'next_transition': 10533}.
<a id="trace-10707"></a>
- 81.45s–81.45s (×1), actor 0, squad 0 (trace 10707): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 80.00s, trace 10604. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0873082635005392, 'next_transition': 10721}.
<a id="trace-10709"></a>
- 81.45s–81.45s (×1), actor 0, squad 0 (trace 10709): NeedSupport. Knowledge: actor memory at 80.00s, trace 10604. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0873082635005392, 'next_transition': 10721}.
<a id="trace-10721"></a>
- 81.75s–81.75s (×1), actor 5, squad 0 (trace 10721): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 10609. Next observer evidence: {'until': 81.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15480063503940783, 'next_transition': 10728}.
<a id="trace-10728"></a>
- 81.95s–81.95s (×1), actor 0, squad 0 (trace 10728): Reorganise: completed/failed drill. Knowledge: actor memory at 80.00s, trace 10604. Next observer evidence: {'until': 82.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.30959441738978555, 'next_transition': 11194}.
<a id="trace-10734"></a>
- 81.95s–81.95s (×1), actor 0, squad 0 (trace 10734): MoveTactically. Knowledge: actor memory at 80.00s, trace 10604. Next observer evidence: {'until': 82.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.30959441738978555, 'next_transition': 11194}.
<a id="trace-10735"></a>
- 81.95s–81.95s (×1), actor 0, squad 0 (trace 10735): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 80.00s, trace 10604. Next observer evidence: {'until': 82.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.30959441738978555, 'next_transition': 11194}.
<a id="trace-11194"></a>
<a id="trace-11213"></a>
<a id="trace-11239"></a>
<a id="trace-11251"></a>
<a id="trace-11268"></a>
<a id="trace-11295"></a>
- 82.25s–84.75s (×6), actor 5, squad 0 (trace 11194): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 10609. Next observer evidence: {'until': 82.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29833912881172914, 'next_transition': 11213}.
<a id="trace-11305"></a>
- 84.85s–84.85s (×1), actor 0, squad 0 (trace 11305): Fixing. Knowledge: actor memory at 80.00s, trace 10604. Next observer evidence: {'until': 85.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.48121830119015246, 'next_transition': 11388}.
<a id="trace-11388"></a>
<a id="trace-11398"></a>
<a id="trace-11420"></a>
<a id="trace-11441"></a>
<a id="trace-11454"></a>
<a id="trace-11466"></a>
<a id="trace-11479"></a>
<a id="trace-11491"></a>
- 85.25s–88.75s (×8), actor 5, squad 0 (trace 11388): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 11319. Next observer evidence: {'until': 85.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.48471947191753667, 'next_transition': 11398}.
<a id="trace-11498"></a>
- 89.05s–89.05s (×1), actor 0, squad 0 (trace 11498): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 11315. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000238245191294, 'next_transition': 11608}.
<a id="trace-11608"></a>
<a id="trace-11614"></a>
<a id="trace-11691"></a>
<a id="trace-11706"></a>
<a id="trace-11718"></a>
<a id="trace-11730"></a>
<a id="trace-11748"></a>
<a id="trace-11764"></a>
<a id="trace-11780"></a>
<a id="trace-11791"></a>
<a id="trace-11806"></a>
<a id="trace-11825"></a>
<a id="trace-11907"></a>
<a id="trace-11925"></a>
<a id="trace-11936"></a>
<a id="trace-11953"></a>
<a id="trace-11960"></a>
<a id="trace-11974"></a>
<a id="trace-11995"></a>
<a id="trace-12004"></a>
<a id="trace-12014"></a>
<a id="trace-12090"></a>
- 89.25s–100.25s (×22), actor 5, squad 0 (trace 11608): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 11319. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17092601305135693, 'next_transition': 11614}.
<a id="trace-1193"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (events line 1193): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 100.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06479470758180948, 'next_transition': 12101}.
<a id="trace-12094"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (trace 12094): renew committed intent (75 s lifetime). Knowledge: actor memory at 100.55s, trace 12094. Next observer evidence: {'until': 100.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06479470758180948, 'next_transition': 12101}.
<a id="trace-12101"></a>
<a id="trace-12116"></a>
<a id="trace-12125"></a>
<a id="trace-12134"></a>
- 100.75s–102.25s (×4), actor 5, squad 0 (trace 12101): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 12094. Next observer evidence: {'until': 101.2, 'shots': 7, 'casualties': 0, 'mean_displacement': 0.349633390984931, 'next_transition': 12116}.
<a id="trace-12136"></a>
- 102.35s–102.35s (×1), actor 0, squad 0 (trace 12136): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 100.00s, trace 12019. Next observer evidence: {'until': 102.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.05346176024722103, 'next_transition': 12303}.
<a id="trace-12303"></a>
<a id="trace-12323"></a>
<a id="trace-12334"></a>
<a id="trace-12350"></a>
<a id="trace-12366"></a>
<a id="trace-12436"></a>
<a id="trace-12443"></a>
<a id="trace-12459"></a>
<a id="trace-12465"></a>
<a id="trace-12477"></a>
<a id="trace-12486"></a>
<a id="trace-12498"></a>
<a id="trace-12509"></a>
<a id="trace-12522"></a>
<a id="trace-12527"></a>
<a id="trace-12596"></a>
<a id="trace-12605"></a>
<a id="trace-12613"></a>
<a id="trace-12623"></a>
<a id="trace-12639"></a>
<a id="trace-12651"></a>
<a id="trace-12665"></a>
<a id="trace-12674"></a>
<a id="trace-12686"></a>
<a id="trace-12702"></a>
<a id="trace-12776"></a>
<a id="trace-12786"></a>
<a id="trace-12794"></a>
<a id="trace-12801"></a>
<a id="trace-12809"></a>
<a id="trace-12814"></a>
<a id="trace-12820"></a>
<a id="trace-12829"></a>
<a id="trace-12839"></a>
<a id="trace-12846"></a>
<a id="trace-12917"></a>
<a id="trace-12928"></a>
<a id="trace-12944"></a>
<a id="trace-12947"></a>
<a id="trace-12956"></a>
<a id="trace-12968"></a>
<a id="trace-12974"></a>
<a id="trace-12978"></a>
<a id="trace-12988"></a>
<a id="trace-12994"></a>
<a id="trace-13063"></a>
<a id="trace-13073"></a>
<a id="trace-13082"></a>
<a id="trace-13089"></a>
<a id="trace-13099"></a>
<a id="trace-13105"></a>
<a id="trace-13112"></a>
<a id="trace-13116"></a>
<a id="trace-13123"></a>
<a id="trace-13128"></a>
<a id="trace-13189"></a>
<a id="trace-13197"></a>
<a id="trace-13208"></a>
<a id="trace-13214"></a>
<a id="trace-13228"></a>
<a id="trace-13242"></a>
<a id="trace-13254"></a>
<a id="trace-13259"></a>
<a id="trace-13272"></a>
<a id="trace-13277"></a>
<a id="trace-13339"></a>
<a id="trace-13343"></a>
<a id="trace-13353"></a>
<a id="trace-13362"></a>
<a id="trace-13370"></a>
<a id="trace-13376"></a>
<a id="trace-13388"></a>
<a id="trace-13394"></a>
<a id="trace-13399"></a>
<a id="trace-13403"></a>
<a id="trace-13468"></a>
<a id="trace-13473"></a>
<a id="trace-13483"></a>
<a id="trace-13489"></a>
<a id="trace-13496"></a>
<a id="trace-13504"></a>
<a id="trace-13511"></a>
<a id="trace-13518"></a>
<a id="trace-13529"></a>
<a id="trace-13539"></a>
<a id="trace-13603"></a>
<a id="trace-13607"></a>
<a id="trace-13619"></a>
<a id="trace-13621"></a>
<a id="trace-13627"></a>
<a id="trace-13632"></a>
<a id="trace-13638"></a>
<a id="trace-13643"></a>
<a id="trace-13649"></a>
<a id="trace-13653"></a>
<a id="trace-13715"></a>
<a id="trace-13720"></a>
<a id="trace-13726"></a>
<a id="trace-13728"></a>
<a id="trace-13736"></a>
<a id="trace-13740"></a>
<a id="trace-13746"></a>
<a id="trace-13751"></a>
<a id="trace-13756"></a>
- 102.75s–154.30s (×104), actor 5, squad 0 (trace 12303): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 12094. Next observer evidence: {'until': 103.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12111021534679949, 'next_transition': 12323}.
<a id="trace-12837"></a>
<a id="trace-12915"></a>
<a id="trace-12942"></a>
<a id="trace-12954"></a>
<a id="trace-12972"></a>
<a id="trace-12986"></a>
<a id="trace-13061"></a>
<a id="trace-13080"></a>
<a id="trace-13097"></a>
<a id="trace-13206"></a>
<a id="trace-13226"></a>
<a id="trace-13252"></a>
<a id="trace-13270"></a>
<a id="trace-13337"></a>
<a id="trace-13351"></a>
<a id="trace-13368"></a>
<a id="trace-13386"></a>
<a id="trace-13397"></a>
<a id="trace-13466"></a>
<a id="trace-13481"></a>
<a id="trace-13494"></a>
<a id="trace-13509"></a>
<a id="trace-13527"></a>
<a id="trace-13601"></a>
<a id="trace-13617"></a>
<a id="trace-13625"></a>
<a id="trace-13636"></a>
<a id="trace-13647"></a>
<a id="trace-13713"></a>
<a id="trace-13724"></a>
<a id="trace-13734"></a>
<a id="trace-13744"></a>
<a id="trace-13754"></a>
<a id="trace-13876"></a>
<a id="trace-13894"></a>
<a id="trace-13905"></a>
<a id="trace-13921"></a>
<a id="trace-13933"></a>
<a id="trace-14003"></a>
<a id="trace-14018"></a>
<a id="trace-14031"></a>
<a id="trace-14043"></a>
<a id="trace-14129"></a>
<a id="trace-14208"></a>
<a id="trace-14227"></a>
<a id="trace-14243"></a>
<a id="trace-14262"></a>
<a id="trace-14283"></a>
<a id="trace-14355"></a>
<a id="trace-14371"></a>
<a id="trace-14388"></a>
<a id="trace-14408"></a>
<a id="trace-14426"></a>
<a id="trace-14495"></a>
<a id="trace-14511"></a>
- 119.25s–176.30s (×55), actor 38, squad 4 (trace 12837): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 115.00s, trace 12717. Next observer evidence: {'until': 120.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12915}.
<a id="trace-13757"></a>
- 154.30s–154.30s (×1), actor 0, squad 0 (trace 13757): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 150.00s, trace 13654. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13813}.
<a id="trace-13813"></a>
<a id="trace-13878"></a>
<a id="trace-13886"></a>
<a id="trace-13896"></a>
<a id="trace-13899"></a>
<a id="trace-13907"></a>
<a id="trace-13916"></a>
<a id="trace-13923"></a>
<a id="trace-13929"></a>
<a id="trace-13935"></a>
<a id="trace-13941"></a>
<a id="trace-14005"></a>
- 154.80s–160.30s (×12), actor 5, squad 0 (trace 13813): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 13657. Next observer evidence: {'until': 155.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13878}.
<a id="trace-1486"></a>
- 160.55s–160.55s (×1), actor 5, squad 0 (events line 1486): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511999552101636, 'next_transition': 14013}.
<a id="trace-14008"></a>
- 160.55s–160.55s (×1), actor 5, squad 0 (trace 14008): renew committed intent (75 s lifetime). Knowledge: actor memory at 160.55s, trace 14008. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511999552101636, 'next_transition': 14013}.
<a id="trace-14013"></a>
<a id="trace-14020"></a>
<a id="trace-14024"></a>
<a id="trace-14033"></a>
<a id="trace-14036"></a>
<a id="trace-14045"></a>
- 160.80s–163.30s (×6), actor 5, squad 0 (trace 14013): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.55s, trace 14008. Next observer evidence: {'until': 161.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.15120054645146733, 'next_transition': 14020}.
<a id="trace-14048"></a>
- 163.55s–163.55s (×1), actor 0, squad 0 (trace 14048): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 160.00s, trace 13943. Next observer evidence: {'until': 163.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14120}.
<a id="trace-14120"></a>
<a id="trace-14131"></a>
<a id="trace-14141"></a>
<a id="trace-14210"></a>
<a id="trace-14217"></a>
<a id="trace-14229"></a>
<a id="trace-14234"></a>
<a id="trace-14245"></a>
<a id="trace-14251"></a>
<a id="trace-14264"></a>
<a id="trace-14277"></a>
<a id="trace-14285"></a>
<a id="trace-14288"></a>
<a id="trace-14357"></a>
<a id="trace-14365"></a>
<a id="trace-14373"></a>
<a id="trace-14377"></a>
<a id="trace-14390"></a>
<a id="trace-14403"></a>
<a id="trace-14410"></a>
<a id="trace-14417"></a>
<a id="trace-14428"></a>
<a id="trace-14432"></a>
<a id="trace-14497"></a>
<a id="trace-14502"></a>
<a id="trace-14513"></a>
<a id="trace-14525"></a>
<a id="trace-14532"></a>
<a id="trace-14540"></a>
<a id="trace-14549"></a>
<a id="trace-14554"></a>
<a id="trace-14557"></a>
<a id="trace-14560"></a>
<a id="trace-14625"></a>
<a id="trace-14634"></a>
<a id="trace-14642"></a>
<a id="trace-14646"></a>
<a id="trace-14660"></a>
- 163.80s–182.30s (×38), actor 5, squad 0 (trace 14120): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.55s, trace 14008. Next observer evidence: {'until': 164.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14131}.
<a id="trace-14623"></a>
<a id="trace-14640"></a>
<a id="trace-14658"></a>
<a id="trace-14831"></a>
<a id="trace-14862"></a>
<a id="trace-14938"></a>
<a id="trace-14962"></a>
<a id="trace-14976"></a>
<a id="trace-14993"></a>
<a id="trace-15021"></a>
<a id="trace-15099"></a>
<a id="trace-15118"></a>
<a id="trace-15140"></a>
<a id="trace-15165"></a>
<a id="trace-15181"></a>
<a id="trace-15248"></a>
<a id="trace-15274"></a>
<a id="trace-15291"></a>
<a id="trace-15300"></a>
<a id="trace-15312"></a>
<a id="trace-15389"></a>
<a id="trace-15653"></a>
<a id="trace-15672"></a>
<a id="trace-15690"></a>
<a id="trace-15714"></a>
<a id="trace-15793"></a>
<a id="trace-16027"></a>
<a id="trace-16052"></a>
- 180.30s–207.30s (×28), actor 39, squad 4 (trace 14623): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=39. Knowledge: actor memory at 180.00s, trace 14569. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14640}.
<a id="trace-14667"></a>
- 182.75s–182.75s (×1), actor 0, squad 0 (trace 14667): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 14563. Next observer evidence: {'until': 182.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07560013587583318, 'next_transition': 14826}.
<a id="trace-14826"></a>
<a id="trace-14833"></a>
<a id="trace-14846"></a>
<a id="trace-14864"></a>
<a id="trace-14875"></a>
<a id="trace-14940"></a>
<a id="trace-14950"></a>
<a id="trace-14964"></a>
<a id="trace-14969"></a>
<a id="trace-14978"></a>
<a id="trace-14983"></a>
<a id="trace-14995"></a>
<a id="trace-15012"></a>
<a id="trace-15023"></a>
<a id="trace-15031"></a>
<a id="trace-15101"></a>
<a id="trace-15108"></a>
<a id="trace-15120"></a>
<a id="trace-15126"></a>
<a id="trace-15142"></a>
<a id="trace-15159"></a>
<a id="trace-15167"></a>
<a id="trace-15173"></a>
<a id="trace-15183"></a>
<a id="trace-15186"></a>
<a id="trace-15250"></a>
<a id="trace-15260"></a>
<a id="trace-15276"></a>
<a id="trace-15287"></a>
<a id="trace-15293"></a>
<a id="trace-15296"></a>
<a id="trace-15302"></a>
<a id="trace-15307"></a>
<a id="trace-15314"></a>
- 182.80s–199.30s (×34), actor 5, squad 0 (trace 14826): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 14566. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.151200265468609, 'next_transition': 14833}.
<a id="trace-15315"></a>
- 199.30s–199.30s (×1), actor 2, squad 0 (trace 15315): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 195.00s, trace 15191. Next observer evidence: {'until': 199.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.233130642357992, 'next_transition': 15324}.
<a id="trace-15317"></a>
- 199.30s–199.30s (×1), actor 2, squad 0 (trace 15317): NeedSupport. Knowledge: actor memory at 195.00s, trace 15191. Next observer evidence: {'until': 199.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.233130642357992, 'next_transition': 15324}.
<a id="trace-15324"></a>
<a id="trace-15391"></a>
- 199.80s–200.30s (×2), actor 5, squad 0 (trace 15324): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 15193. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1854756631778144, 'next_transition': 15391}.
<a id="trace-15392"></a>
- 200.30s–200.30s (×1), actor 2, squad 0 (trace 15392): Reorganise: completed/failed drill. Knowledge: actor memory at 200.00s, trace 15328. Next observer evidence: {'until': 200.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.4910165810137188, 'next_transition': 15638}.
<a id="trace-15395"></a>
- 200.30s–200.30s (×1), actor 2, squad 0 (trace 15395): MoveTactically. Knowledge: actor memory at 200.00s, trace 15328. Next observer evidence: {'until': 200.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.4910165810137188, 'next_transition': 15638}.
<a id="trace-15396"></a>
- 200.30s–200.30s (×1), actor 2, squad 0 (trace 15396): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 200.00s, trace 15328. Next observer evidence: {'until': 200.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.4910165810137188, 'next_transition': 15638}.
<a id="trace-15638"></a>
<a id="trace-15655"></a>
<a id="trace-15668"></a>
<a id="trace-15674"></a>
<a id="trace-15685"></a>
- 200.80s–202.80s (×5), actor 5, squad 0 (trace 15638): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 15330. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.259878719494958, 'next_transition': 15655}.
<a id="trace-15687"></a>
- 203.10s–203.10s (×1), actor 5, squad 0 (trace 15687): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 203.10s, trace 15687. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23909539515232842, 'next_transition': 15692}.
<a id="trace-15692"></a>
- 203.30s–203.30s (×1), actor 5, squad 0 (trace 15692): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 203.10s, trace 15687. Next observer evidence: {'until': 203.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48456823585025666, 'next_transition': 1683}.
<a id="trace-1683"></a>
- 203.75s–203.75s (×1), actor 5, squad 0 (events line 1683): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 203.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24547335395529268, 'next_transition': 15705}.
<a id="trace-15702"></a>
- 203.75s–203.75s (×1), actor 5, squad 0 (trace 15702): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.293395 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 203.75s, trace 15702. Next observer evidence: {'until': 203.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24547335395529268, 'next_transition': 15705}.
<a id="trace-15703"></a>
- 203.75s–203.75s (×1), actor 5, squad 0 (trace 15703): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.293395 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 203.75s, trace 15703. Next observer evidence: {'until': 203.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24547335395529268, 'next_transition': 15705}.
<a id="trace-15705"></a>
<a id="trace-15716"></a>
<a id="trace-15731"></a>
<a id="trace-15795"></a>
<a id="trace-15802"></a>
- 203.80s–205.80s (×5), actor 5, squad 0 (trace 15705): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 203.75s, trace 15703. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43508048901839014, 'next_transition': 15716}.
<a id="trace-15805"></a>
- 206.10s–206.10s (×1), actor 2, squad 0 (trace 15805): ReactToContact: cover and return fire. Knowledge: actor memory at 205.00s, trace 15734. Next observer evidence: {'until': 206.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1836450484740489, 'next_transition': 16029}.
<a id="trace-15806"></a>
- 206.10s–206.10s (×1), actor 2, squad 0 (trace 15806): received platoon directive. Knowledge: actor memory at 205.00s, trace 15734. Next observer evidence: {'until': 206.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1836450484740489, 'next_transition': 16029}.
<a id="trace-16029"></a>
<a id="trace-16037"></a>
<a id="trace-16054"></a>
<a id="trace-16061"></a>
- 206.30s–207.80s (×4), actor 5, squad 0 (trace 16029): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 15736. Next observer evidence: {'until': 206.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6934400127746009, 'next_transition': 16037}.

## Net delivery

181 matched order/radio deliveries; 79 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.349s; maximum 2.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2480: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 2832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 2833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2838: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2839: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 2840: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 2841: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2842: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2843: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2844: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2845: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 4317: estimate 7.85; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 4318: estimate 7.85; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4358: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4363: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4364: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4366: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4367: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4368: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4369: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4370: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4371: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4372: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4373: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4622: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 4624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 4625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4627: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4628: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4630: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4631: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 4632: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 4633: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4634: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4635: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4636: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4637: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 8422: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8427: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8428: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8429: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8430: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8431: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8432: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8433: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8434: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8435: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8436: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8437: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 8649: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8650: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8651: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8654: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8655: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8656: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8657: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8658: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8659: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8660: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8661: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8662: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8663: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8664: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 9044: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9045: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9046: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9049: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9050: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9051: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9052: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9053: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9054: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9055: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9056: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9057: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9058: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9059: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 9441: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9442: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 9443: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9444: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9445: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9446: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9447: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9448: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9449: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9450: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9451: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9452: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9453: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9454: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9455: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9456: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 9902: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9903: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 9904: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 9905: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9906: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9907: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9908: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9909: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9910: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9911: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9912: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9913: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9914: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9915: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9916: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9917: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 10136: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 10137: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 10138: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 10139: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 10140: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 10141: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 10142: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 10143: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 10144: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 10145: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 10146: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 10147: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 10148: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 10149: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 10604: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10605: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 10606: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 10607: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10608: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10609: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10610: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10611: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10612: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10613: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10614: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10615: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10616: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10617: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 11315: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 11316: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 11317: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11318: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11319: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11320: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 11321: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11322: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11323: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11324: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11325: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11326: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11327: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 11619: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11620: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 11621: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11622: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11623: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11624: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 11625: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11626: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11627: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11628: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11629: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11630: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11631: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 11831: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11832: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 11833: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11834: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11835: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11836: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 11837: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11838: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11839: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 11840: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 11841: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 11842: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 11843: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 12019: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 12020: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 12021: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 12022: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12023: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12024: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 12025: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12026: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12027: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12028: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12029: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12030: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 12094: estimate 8.94; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 12369: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 12370: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 12371: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 12372: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 12373: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 12374: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 12375: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12376: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 12377: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12378: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12379: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12380: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 12531: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12532: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 12533: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 12534: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12535: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 12536: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 12537: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12538: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 12539: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12540: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12541: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12542: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 12707: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12708: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 12709: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12710: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12711: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 12712: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 12713: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12714: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 12715: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12716: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12717: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12718: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 12848: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 12849: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 12850: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 12851: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 12852: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 12853: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 12854: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 12855: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 12856: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 12999: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 13000: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13001: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13002: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13003: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 13004: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13005: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13006: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13007: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 13129: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 13130: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 13131: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 13132: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 13133: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 13134: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 13135: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 13136: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 13278: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 13279: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 13280: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 13281: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 13282: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 13283: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 13284: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 13285: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 13405: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 13406: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 13407: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 13408: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 13409: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 13410: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 13411: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 13412: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 13542: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 13543: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 13544: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 13545: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 13546: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 13547: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 13548: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 13549: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 13654: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 13655: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 13656: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 13657: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 13658: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 13659: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 13660: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 13661: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 13815: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 13816: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 13817: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 13818: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 13819: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 13820: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 13821: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 13822: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 13943: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 13944: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 13945: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 13946: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 13947: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 13948: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 13949: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 13950: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.55s leader 5, trace 14008: estimate 7.95; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 14147: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 14148: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 14149: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 14150: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 14151: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 14152: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 14153: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 14154: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 14291: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 14292: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 14293: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 14294: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 14295: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 14296: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 14297: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 14298: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 14436: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 14437: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 14438: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 14439: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 14440: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 14441: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 14442: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 14443: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 14563: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 14564: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 14565: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 14566: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 14567: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 14568: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 14569: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 14877: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 14878: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 14879: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 14880: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 14881: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 14882: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 14883: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 15034: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 15035: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 15036: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 15037: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 15038: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 15039: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 15040: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 15190: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 15191: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 15192: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 15193: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 15194: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 15195: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 15328: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 15329: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 15330: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 15331: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 15332: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 203.10s leader 5, trace 15687: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 203.75s leader 5, trace 15702: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 203.75s leader 5, trace 15703: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 15734: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 15735: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 15736: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 15737: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 15738: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Flint killed in action
- 1: Orin incapacitated
- 1: Ash killed in action
- 1: Kest incapacitated
- 1: Rook incapacitated
- 1: Lark incapacitated
- 1: Voss killed in action
- 1: Bram killed in action
- 1: Holt incapacitated
- 1: Reed incapacitated
- 1: Vale killed in action
- 1: Soren incapacitated
- 1: Pike killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
