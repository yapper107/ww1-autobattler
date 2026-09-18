# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/4/108/good-azure/battle-108-1789673710163999262`

## Battle summary

**Ember** · 120.7 s · 187 shots.

### Turning points

- 24.6s, squad 4: contact (events line 225). First recorded contact.
- 47.8s, squad 0: help call ([trace 2568](#trace-2568)). No completion observed before termination.
- 69.2s, squad 0: withdrawal ([trace 3933](#trace-3933)). 95.1s, squad 0: took cover and returned fire.
- 86.7s, squad 0: help call ([trace 4767](#trace-4767)). No completion observed before termination.
- 98.6s, squad 0: withdrawal ([trace 5188](#trace-5188)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; no completed objective recorded; 15 shots, 6/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 172 shots, 0/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 401](#trace-401)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 26.0s, squad 0 chose took cover and returned fire ([trace 1499](#trace-1499)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 400](#trace-400)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399844189882085, 'next_transition': 414}.
- 29.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.506919 retreat threshold=0.500000 initiative=delegated ([trace 1839](#trace-1839)). Following evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560127817163482, 'next_transition': 1913}.

### Communication

81 matched deliveries (mean 0.29s, max 1.35s); 71 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 24.60s, squad 4, contact, evidence events line 225: First recorded contact; .
- 47.80s, squad 0, help call, evidence 2568: NeedSupport; No completion observed before termination.
- 69.15s, squad 0, withdrawal, evidence 3933: BreakContact: believed ratio at least two without superiority; 95.1s, squad 0: took cover and returned fire.
- 86.65s, squad 0, help call, evidence 4767: NeedSupport; No completion observed before termination.
- 98.55s, squad 0, withdrawal, evidence 5188: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737450955996155, 'next_transition': 334}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737450955996155, 'next_transition': 334}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737450955996155, 'next_transition': 334}.
<a id="trace-334"></a>
<a id="trace-353"></a>
<a id="trace-369"></a>
<a id="trace-384"></a>
<a id="trace-395"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 334): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260013408446737, 'next_transition': 353}.
<a id="trace-60"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 60): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399844189882085, 'next_transition': 414}.
<a id="trace-400"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 400): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 400. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399844189882085, 'next_transition': 414}.
<a id="trace-401"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 401): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399844189882085, 'next_transition': 414}.
<a id="trace-414"></a>
<a id="trace-433"></a>
<a id="trace-507"></a>
<a id="trace-519"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400077263624559, 'next_transition': 433}.
<a id="trace-521"></a>
<a id="trace-616"></a>
<a id="trace-639"></a>
<a id="trace-663"></a>
<a id="trace-683"></a>
<a id="trace-709"></a>
<a id="trace-747"></a>
<a id="trace-761"></a>
<a id="trace-854"></a>
<a id="trace-869"></a>
<a id="trace-883"></a>
<a id="trace-895"></a>
<a id="trace-906"></a>
<a id="trace-917"></a>
<a id="trace-928"></a>
<a id="trace-949"></a>
<a id="trace-958"></a>
<a id="trace-1092"></a>
<a id="trace-1107"></a>
<a id="trace-1122"></a>
<a id="trace-1148"></a>
<a id="trace-1160"></a>
<a id="trace-1176"></a>
<a id="trace-1197"></a>
<a id="trace-1205"></a>
<a id="trace-1285"></a>
<a id="trace-1301"></a>
<a id="trace-1314"></a>
<a id="trace-1329"></a>
<a id="trace-1349"></a>
<a id="trace-1359"></a>
<a id="trace-1383"></a>
<a id="trace-1395"></a>
<a id="trace-1486"></a>
<a id="trace-1492"></a>
<a id="trace-1737"></a>
<a id="trace-1750"></a>
<a id="trace-1773"></a>
<a id="trace-1784"></a>
<a id="trace-1802"></a>
<a id="trace-1823"></a>
<a id="trace-1915"></a>
<a id="trace-1943"></a>
<a id="trace-1962"></a>
<a id="trace-1976"></a>
<a id="trace-2002"></a>
<a id="trace-2009"></a>
<a id="trace-2080"></a>
<a id="trace-2090"></a>
<a id="trace-2098"></a>
<a id="trace-2104"></a>
<a id="trace-2115"></a>
<a id="trace-2128"></a>
<a id="trace-2135"></a>
<a id="trace-2297"></a>
<a id="trace-2304"></a>
<a id="trace-2382"></a>
<a id="trace-2387"></a>
<a id="trace-2397"></a>
<a id="trace-2429"></a>
<a id="trace-2439"></a>
<a id="trace-2449"></a>
<a id="trace-2461"></a>
<a id="trace-2530"></a>
<a id="trace-2535"></a>
<a id="trace-2541"></a>
<a id="trace-2545"></a>
<a id="trace-2554"></a>
<a id="trace-2559"></a>
<a id="trace-2580"></a>
<a id="trace-2585"></a>
<a id="trace-2612"></a>
<a id="trace-2617"></a>
<a id="trace-2799"></a>
<a id="trace-2810"></a>
<a id="trace-2825"></a>
<a id="trace-2832"></a>
<a id="trace-2849"></a>
<a id="trace-2862"></a>
<a id="trace-2872"></a>
<a id="trace-2879"></a>
<a id="trace-3000"></a>
<a id="trace-3009"></a>
<a id="trace-3087"></a>
<a id="trace-3098"></a>
<a id="trace-3114"></a>
<a id="trace-3129"></a>
<a id="trace-3139"></a>
<a id="trace-3149"></a>
<a id="trace-3171"></a>
<a id="trace-3182"></a>
<a id="trace-3190"></a>
<a id="trace-3288"></a>
<a id="trace-3307"></a>
<a id="trace-3322"></a>
<a id="trace-3333"></a>
<a id="trace-3344"></a>
<a id="trace-3354"></a>
<a id="trace-3558"></a>
<a id="trace-3868"></a>
<a id="trace-3897"></a>
<a id="trace-3926"></a>
<a id="trace-4126"></a>
<a id="trace-4130"></a>
<a id="trace-4220"></a>
<a id="trace-4227"></a>
<a id="trace-4231"></a>
<a id="trace-4253"></a>
<a id="trace-4265"></a>
<a id="trace-4278"></a>
<a id="trace-4287"></a>
<a id="trace-4300"></a>
<a id="trace-4306"></a>
<a id="trace-4376"></a>
<a id="trace-4382"></a>
<a id="trace-4395"></a>
<a id="trace-4408"></a>
<a id="trace-4418"></a>
<a id="trace-4424"></a>
<a id="trace-4435"></a>
<a id="trace-4439"></a>
<a id="trace-4446"></a>
<a id="trace-4448"></a>
<a id="trace-4519"></a>
<a id="trace-4533"></a>
<a id="trace-4538"></a>
<a id="trace-4545"></a>
<a id="trace-4554"></a>
<a id="trace-4558"></a>
<a id="trace-4669"></a>
<a id="trace-4676"></a>
<a id="trace-4746"></a>
<a id="trace-4762"></a>
<a id="trace-4773"></a>
<a id="trace-4782"></a>
<a id="trace-4802"></a>
<a id="trace-4809"></a>
<a id="trace-4818"></a>
<a id="trace-4823"></a>
<a id="trace-4899"></a>
<a id="trace-4906"></a>
<a id="trace-4916"></a>
<a id="trace-4929"></a>
<a id="trace-4932"></a>
<a id="trace-4939"></a>
<a id="trace-4941"></a>
<a id="trace-5124"></a>
<a id="trace-5135"></a>
<a id="trace-5145"></a>
<a id="trace-5154"></a>
<a id="trace-5168"></a>
<a id="trace-5174"></a>
<a id="trace-5296"></a>
<a id="trace-5307"></a>
<a id="trace-5309"></a>
<a id="trace-5379"></a>
<a id="trace-5388"></a>
<a id="trace-5397"></a>
<a id="trace-5412"></a>
<a id="trace-5419"></a>
<a id="trace-5425"></a>
<a id="trace-5434"></a>
<a id="trace-5436"></a>
<a id="trace-5509"></a>
<a id="trace-5519"></a>
<a id="trace-5529"></a>
<a id="trace-5534"></a>
<a id="trace-5545"></a>
<a id="trace-5550"></a>
<a id="trace-5560"></a>
<a id="trace-5628"></a>
<a id="trace-5637"></a>
<a id="trace-5641"></a>
<a id="trace-5648"></a>
<a id="trace-5652"></a>
<a id="trace-5662"></a>
<a id="trace-5665"></a>
<a id="trace-5673"></a>
<a id="trace-5677"></a>
<a id="trace-5746"></a>
<a id="trace-5757"></a>
<a id="trace-5767"></a>
<a id="trace-5770"></a>
<a id="trace-5778"></a>
<a id="trace-5782"></a>
<a id="trace-5789"></a>
<a id="trace-5793"></a>
<a id="trace-5861"></a>
- 5.70s–120.25s (×188), actor 37, squad 4 (trace 521): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 446. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22947479268293206, 'next_transition': 616}.
<a id="trace-530"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 530): traveling overwatch. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300022930209063, 'next_transition': 614}.
<a id="trace-531"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 531): received platoon directive. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300022930209063, 'next_transition': 614}.
<a id="trace-614"></a>
<a id="trace-637"></a>
<a id="trace-661"></a>
<a id="trace-681"></a>
<a id="trace-707"></a>
<a id="trace-745"></a>
<a id="trace-759"></a>
<a id="trace-772"></a>
<a id="trace-852"></a>
<a id="trace-867"></a>
<a id="trace-881"></a>
<a id="trace-893"></a>
<a id="trace-904"></a>
<a id="trace-915"></a>
<a id="trace-926"></a>
<a id="trace-935"></a>
<a id="trace-947"></a>
<a id="trace-956"></a>
- 6.20s–14.70s (×18), actor 5, squad 0 (trace 614): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 440. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1519918241457512, 'next_transition': 637}.
<a id="trace-959"></a>
- 14.70s–14.70s (×1), actor 0, squad 0 (trace 959): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 776. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1090}.
<a id="trace-1090"></a>
<a id="trace-1105"></a>
<a id="trace-1120"></a>
<a id="trace-1136"></a>
<a id="trace-1146"></a>
<a id="trace-1158"></a>
<a id="trace-1174"></a>
<a id="trace-1185"></a>
<a id="trace-1195"></a>
<a id="trace-1203"></a>
<a id="trace-1283"></a>
<a id="trace-1299"></a>
<a id="trace-1312"></a>
<a id="trace-1327"></a>
<a id="trace-1347"></a>
<a id="trace-1357"></a>
<a id="trace-1373"></a>
<a id="trace-1381"></a>
<a id="trace-1393"></a>
<a id="trace-1408"></a>
<a id="trace-1484"></a>
<a id="trace-1490"></a>
- 15.20s–25.75s (×22), actor 5, squad 0 (trace 1090): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1019. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574968800396449, 'next_transition': 1105}.
<a id="trace-1499"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 1499): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1412. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17964460053115983, 'next_transition': 1735}.
<a id="trace-1500"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 1500): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1412. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17964460053115983, 'next_transition': 1735}.
<a id="trace-1501"></a>
- 25.95s–25.95s (×1), actor 0, squad 0 (trace 1501): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1412. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17964460053115983, 'next_transition': 1735}.
<a id="trace-1735"></a>
<a id="trace-1748"></a>
<a id="trace-1771"></a>
<a id="trace-1782"></a>
<a id="trace-1800"></a>
<a id="trace-1821"></a>
<a id="trace-1830"></a>
<a id="trace-1837"></a>
- 26.25s–29.75s (×8), actor 5, squad 0 (trace 1735): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1415. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.023577490442274796, 'next_transition': 1748}.
<a id="trace-279"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 279): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1839"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 1839): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.506919 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 1839. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560127817163482, 'next_transition': 1913}.
<a id="trace-1840"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 1840): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.506919 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 1840. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560127817163482, 'next_transition': 1913}.
<a id="trace-1913"></a>
<a id="trace-1922"></a>
- 30.25s–30.75s (×2), actor 5, squad 0 (trace 1913): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1845. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.751898873580978, 'next_transition': 1922}.
<a id="trace-1926"></a>
- 30.90s–30.90s (×1), actor 1, squad 0 (trace 1926): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 1843. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4835049503118298, 'next_transition': 1936}.
<a id="trace-1936"></a>
<a id="trace-1941"></a>
<a id="trace-1960"></a>
- 31.25s–32.25s (×3), actor 5, squad 0 (trace 1936): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1845. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200092718083406, 'next_transition': 1941}.
<a id="trace-1963"></a>
- 32.40s–32.40s (×1), actor 1, squad 0 (trace 1963): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 1843. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1974}.
<a id="trace-1974"></a>
<a id="trace-1984"></a>
<a id="trace-1992"></a>
- 32.75s–33.75s (×3), actor 5, squad 0 (trace 1974): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1845. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8114533051538059, 'next_transition': 1984}.
<a id="trace-1995"></a>
- 34.05s–34.05s (×1), actor 5, squad 0 (trace 1995): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 34.05s, trace 1995. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.050660912111804755, 'next_transition': 2000}.
<a id="trace-2000"></a>
<a id="trace-2007"></a>
<a id="trace-2078"></a>
<a id="trace-2088"></a>
<a id="trace-2096"></a>
<a id="trace-2102"></a>
<a id="trace-2113"></a>
<a id="trace-2118"></a>
<a id="trace-2126"></a>
<a id="trace-2133"></a>
- 34.25s–38.75s (×10), actor 5, squad 0 (trace 2000): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.05s, trace 1995. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.051274913086225615, 'next_transition': 2007}.
<a id="trace-2137"></a>
- 38.80s–38.80s (×1), actor 1, squad 0 (trace 2137): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 2010. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2295}.
<a id="trace-2295"></a>
<a id="trace-2302"></a>
<a id="trace-2380"></a>
<a id="trace-2385"></a>
<a id="trace-2395"></a>
<a id="trace-2399"></a>
<a id="trace-2405"></a>
<a id="trace-2411"></a>
- 39.25s–42.75s (×8), actor 5, squad 0 (trace 2295): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2012. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2302}.
<a id="trace-2419"></a>
- 42.80s–42.80s (×1), actor 1, squad 0 (trace 2419): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 2313. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2427}.
<a id="trace-2421"></a>
- 42.80s–42.80s (×1), actor 1, squad 0 (trace 2421): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 40.00s, trace 2313. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2427}.
<a id="trace-2427"></a>
<a id="trace-2437"></a>
<a id="trace-2447"></a>
<a id="trace-2459"></a>
<a id="trace-2528"></a>
<a id="trace-2533"></a>
<a id="trace-2539"></a>
<a id="trace-2543"></a>
<a id="trace-2552"></a>
<a id="trace-2557"></a>
- 43.25s–47.75s (×10), actor 5, squad 0 (trace 2427): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2315. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 2437}.
<a id="trace-2566"></a>
- 47.80s–47.80s (×1), actor 4, squad 0 (trace 2566): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 2464. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450316317457333, 'next_transition': 2578}.
<a id="trace-2568"></a>
- 47.80s–47.80s (×1), actor 4, squad 0 (trace 2568): NeedSupport. Knowledge: actor memory at 45.00s, trace 2464. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450316317457333, 'next_transition': 2578}.
<a id="trace-2578"></a>
<a id="trace-2583"></a>
- 48.25s–48.75s (×2), actor 5, squad 0 (trace 2578): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 2465. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299683841273314, 'next_transition': 2583}.
<a id="trace-2586"></a>
- 48.80s–48.80s (×1), actor 4, squad 0 (trace 2586): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 2464. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7740918114151552, 'next_transition': 2610}.
<a id="trace-2589"></a>
- 48.80s–48.80s (×1), actor 4, squad 0 (trace 2589): MoveTactically. Knowledge: actor memory at 45.00s, trace 2464. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7740918114151552, 'next_transition': 2610}.
<a id="trace-2590"></a>
- 48.80s–48.80s (×1), actor 4, squad 0 (trace 2590): Reorganise complete. Knowledge: actor memory at 45.00s, trace 2464. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7740918114151552, 'next_transition': 2610}.
<a id="trace-2610"></a>
<a id="trace-2615"></a>
- 49.25s–49.75s (×2), actor 5, squad 0 (trace 2610): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 2465. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2615}.
<a id="trace-2618"></a>
- 49.80s–49.80s (×1), actor 4, squad 0 (trace 2618): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 2464. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03938620475496583, 'next_transition': 2797}.
<a id="trace-2797"></a>
<a id="trace-2808"></a>
<a id="trace-2823"></a>
<a id="trace-2830"></a>
<a id="trace-2847"></a>
<a id="trace-2860"></a>
<a id="trace-2870"></a>
<a id="trace-2877"></a>
- 50.25s–53.75s (×8), actor 5, squad 0 (trace 2797): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 2729. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498503337460276, 'next_transition': 2808}.
<a id="trace-2884"></a>
- 53.85s–53.85s (×1), actor 4, squad 0 (trace 2884): traveling overwatch. Knowledge: actor memory at 50.00s, trace 2728. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662301060010134, 'next_transition': 2998}.
<a id="trace-2885"></a>
- 53.85s–53.85s (×1), actor 4, squad 0 (trace 2885): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 50.00s, trace 2728. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8662301060010134, 'next_transition': 2998}.
<a id="trace-2998"></a>
<a id="trace-3007"></a>
<a id="trace-3085"></a>
<a id="trace-3096"></a>
<a id="trace-3112"></a>
<a id="trace-3127"></a>
<a id="trace-3137"></a>
<a id="trace-3147"></a>
<a id="trace-3162"></a>
<a id="trace-3169"></a>
<a id="trace-3180"></a>
<a id="trace-3188"></a>
<a id="trace-3267"></a>
<a id="trace-3286"></a>
<a id="trace-3296"></a>
<a id="trace-3305"></a>
<a id="trace-3320"></a>
<a id="trace-3331"></a>
<a id="trace-3342"></a>
<a id="trace-3352"></a>
- 54.25s–63.75s (×20), actor 5, squad 0 (trace 2998): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 2729. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300021318024822, 'next_transition': 3007}.
<a id="trace-3355"></a>
- 64.00s–64.00s (×1), actor 4, squad 0 (trace 3355): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 3192. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630017335862001, 'next_transition': 3556}.
<a id="trace-3356"></a>
- 64.00s–64.00s (×1), actor 4, squad 0 (trace 3356): bounding overwatch. Knowledge: actor memory at 60.00s, trace 3192. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630017335862001, 'next_transition': 3556}.
<a id="trace-3357"></a>
- 64.00s–64.00s (×1), actor 4, squad 0 (trace 3357): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 3192. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630017335862001, 'next_transition': 3556}.
<a id="trace-3556"></a>
<a id="trace-3574"></a>
- 64.25s–64.75s (×2), actor 5, squad 0 (trace 3556): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3193. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9927699023172757, 'next_transition': 3574}.
<a id="trace-3590"></a>
- 65.00s–65.00s (×1), actor 4, squad 0 (trace 3590): new contact inside 100 m. Knowledge: actor memory at 65.00s, trace 3580. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.531714546898698, 'next_transition': 3835}.
<a id="trace-3835"></a>
<a id="trace-3848"></a>
<a id="trace-3866"></a>
<a id="trace-3877"></a>
<a id="trace-3890"></a>
<a id="trace-3895"></a>
<a id="trace-3914"></a>
<a id="trace-3924"></a>
- 65.25s–68.75s (×8), actor 5, squad 0 (trace 3835): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 3581. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9422923813263333, 'next_transition': 3848}.
<a id="trace-3933"></a>
- 69.15s–69.15s (×1), actor 4, squad 0 (trace 3933): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 3580. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149917415904979, 'next_transition': 4124}.
<a id="trace-3934"></a>
- 69.15s–69.15s (×1), actor 4, squad 0 (trace 3934): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 3580. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149917415904979, 'next_transition': 4124}.
<a id="trace-4124"></a>
<a id="trace-4128"></a>
<a id="trace-4200"></a>
<a id="trace-4218"></a>
<a id="trace-4225"></a>
<a id="trace-4229"></a>
<a id="trace-4251"></a>
<a id="trace-4263"></a>
<a id="trace-4276"></a>
<a id="trace-4285"></a>
<a id="trace-4298"></a>
<a id="trace-4304"></a>
<a id="trace-4374"></a>
<a id="trace-4380"></a>
<a id="trace-4393"></a>
<a id="trace-4415"></a>
<a id="trace-4432"></a>
- 69.25s–78.25s (×17), actor 5, squad 0 (trace 4124): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 3581. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299989611014567, 'next_transition': 4128}.
<a id="trace-4441"></a>
- 79.00s–79.00s (×1), actor 4, squad 0 (trace 4441): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 4307. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000843676174308, 'next_transition': 4443}.
<a id="trace-4443"></a>
<a id="trace-4514"></a>
- 79.25s–80.25s (×2), actor 5, squad 0 (trace 4443): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4308. Next observer evidence: {'until': 80.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5775003787047498, 'next_transition': 4514}.
<a id="trace-4522"></a>
- 81.05s–81.05s (×1), actor 4, squad 0 (trace 4522): support established: element delivered fire on threat area. Knowledge: actor memory at 80.00s, trace 4451. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4530}.
<a id="trace-4523"></a>
- 81.05s–81.05s (×1), actor 4, squad 0 (trace 4523): Fixing. Knowledge: actor memory at 80.00s, trace 4451. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4530}.
<a id="trace-4530"></a>
<a id="trace-4542"></a>
<a id="trace-4551"></a>
- 81.25s–83.25s (×3), actor 5, squad 0 (trace 4530): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4452. Next observer evidence: {'until': 82.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4542}.
<a id="trace-4559"></a>
- 84.05s–84.05s (×1), actor 4, squad 0 (trace 4559): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 4451. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4666}.
<a id="trace-4560"></a>
- 84.05s–84.05s (×1), actor 4, squad 0 (trace 4560): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 4451. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4666}.
<a id="trace-4666"></a>
<a id="trace-4743"></a>
<a id="trace-4759"></a>
- 84.25s–86.25s (×3), actor 5, squad 0 (trace 4666): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4452. Next observer evidence: {'until': 85.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.03558567517664637, 'next_transition': 4743}.
<a id="trace-4767"></a>
- 86.65s–86.65s (×1), actor 4, squad 0 (trace 4767): NeedSupport. Knowledge: actor memory at 85.00s, trace 4679. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6954424371004673, 'next_transition': 4779}.
<a id="trace-4779"></a>
<a id="trace-4799"></a>
<a id="trace-4815"></a>
- 87.25s–89.25s (×3), actor 5, squad 0 (trace 4779): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4680. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4308040728984779, 'next_transition': 4799}.
<a id="trace-4824"></a>
- 89.85s–89.85s (×1), actor 5, squad 0 (trace 4824): renew committed intent (75 s lifetime). Knowledge: actor memory at 89.85s, trace 4824. Next observer evidence: None.
<a id="trace-762"></a>
- 89.85s–89.85s (×1), actor 5, squad 0 (events line 762): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199972586683025, 'next_transition': 4891}.
<a id="trace-4891"></a>
<a id="trace-4903"></a>
<a id="trace-4913"></a>
<a id="trace-4926"></a>
<a id="trace-4936"></a>
- 90.25s–94.25s (×5), actor 5, squad 0 (trace 4891): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 4827. Next observer evidence: {'until': 91.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.37329637072989486, 'next_transition': 4903}.
<a id="trace-4957"></a>
- 95.05s–95.05s (×1), actor 4, squad 0 (trace 4957): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 95.00s, trace 4945. Next observer evidence: None.
<a id="trace-4958"></a>
- 95.10s–95.10s (×1), actor 4, squad 0 (trace 4958): Reorganise: completed/failed drill. Knowledge: actor memory at 95.00s, trace 4945. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11047027077453936, 'next_transition': 5121}.
<a id="trace-4960"></a>
- 95.10s–95.10s (×1), actor 4, squad 0 (trace 4960): ReactToContact: cover and return fire. Knowledge: actor memory at 95.00s, trace 4945. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11047027077453936, 'next_transition': 5121}.
<a id="trace-4961"></a>
- 95.10s–95.10s (×1), actor 4, squad 0 (trace 4961): Reorganise complete: known contact. Knowledge: actor memory at 95.00s, trace 4945. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11047027077453936, 'next_transition': 5121}.
<a id="trace-5121"></a>
<a id="trace-5142"></a>
- 95.25s–96.25s (×2), actor 5, squad 0 (trace 5121): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 4946. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.148166854453643, 'next_transition': 5142}.
<a id="trace-789"></a>
- 97.05s–97.05s (×1), actor 5, squad 0 (events line 789): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5161"></a>
- 97.05s–97.05s (×1), actor 5, squad 0 (trace 5161): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.127178 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 97.05s, trace 5161. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418056294867235, 'next_transition': 5165}.
<a id="trace-5162"></a>
- 97.05s–97.05s (×1), actor 5, squad 0 (trace 5162): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.127178 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 97.05s, trace 5162. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418056294867235, 'next_transition': 5165}.
<a id="trace-5165"></a>
- 97.25s–97.25s (×1), actor 5, squad 0 (trace 5165): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 97.05s, trace 5162. Next observer evidence: {'until': 98.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.1622857597662364, 'next_transition': 5185}.
<a id="trace-5185"></a>
- 98.45s–98.45s (×1), actor 4, squad 0 (trace 5185): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 95.00s, trace 4945. Next observer evidence: None.
<a id="trace-5187"></a>
- 98.45s–98.45s (×1), actor 4, squad 0 (trace 5187): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 95.00s, trace 4945. Next observer evidence: None.
<a id="trace-5188"></a>
- 98.55s–98.55s (×1), actor 4, squad 0 (trace 5188): Withdraw to received rally. Knowledge: actor memory at 95.00s, trace 4945. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599989303368477, 'next_transition': 5304}.
<a id="trace-5189"></a>
- 98.55s–98.55s (×1), actor 4, squad 0 (trace 5189): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 4945. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599989303368477, 'next_transition': 5304}.
<a id="trace-5304"></a>
<a id="trace-5376"></a>
<a id="trace-5394"></a>
<a id="trace-5404"></a>
<a id="trace-5416"></a>
<a id="trace-5431"></a>
<a id="trace-5501"></a>
<a id="trace-5513"></a>
<a id="trace-5526"></a>
<a id="trace-5542"></a>
<a id="trace-5557"></a>
- 99.25s–109.25s (×11), actor 5, squad 0 (trace 5304): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 97.05s, trace 5162. Next observer evidence: {'until': 100.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5386281616183293, 'next_transition': 5376}.
<a id="trace-5659"></a>
<a id="trace-5670"></a>
- 113.25s–114.25s (×2), actor 4, squad 0 (trace 5659): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 110.00s, trace 5566. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9705922286933883, 'next_transition': 5670}.
<a id="trace-867"></a>
- 115.20s–115.20s (×1), actor 4, squad 0 (events line 867): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5739"></a>
- 115.20s–115.20s (×1), actor 4, squad 0 (trace 5739): renew committed intent (75 s lifetime). Knowledge: actor memory at 115.20s, trace 5739. Next observer evidence: None.
<a id="trace-5742"></a>
<a id="trace-5754"></a>
<a id="trace-5764"></a>
<a id="trace-5775"></a>
<a id="trace-5786"></a>
<a id="trace-5858"></a>
- 115.25s–120.25s (×6), actor 4, squad 0 (trace 5742): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 115.20s, trace 5739. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3300455616632083, 'next_transition': 5754}.

## Net delivery

81 matched order/radio deliveries; 71 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.292s; maximum 1.350s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1419: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1422: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1423: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 1839: estimate 7.89; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 1840: estimate 7.89; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 1844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1845: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1846: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 1847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1848: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1849: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 1850: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1851: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1852: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 1853: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.05s leader 5, trace 1995: estimate 7.78; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2010: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2012: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2013: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2015: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2016: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2017: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2018: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2019: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2020: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2313: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2315: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2316: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2318: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2319: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2320: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2321: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2322: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2323: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 2464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2465: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2466: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 2467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2468: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2469: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 2470: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2471: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2472: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 2473: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 2728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 2729: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 2730: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 2731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 2732: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 2733: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 2734: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 2735: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 2736: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 2737: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3012: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3013: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3015: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3016: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3017: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3018: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3019: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3020: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3193: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3194: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3196: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3197: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3198: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3199: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3200: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3201: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 3580: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3581: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3582: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 3583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3584: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3585: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 3586: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3587: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3588: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 3589: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4133: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4134: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4135: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4137: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4138: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4139: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4140: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4141: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4142: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4307: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4308: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4309: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4311: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4312: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4313: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4314: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4315: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4316: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4451: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4452: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4453: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4454: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4455: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4456: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4457: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4458: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4459: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 4679: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4680: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 4681: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4682: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4683: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 4684: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4685: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4686: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 4687: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 89.85s leader 5, trace 4824: estimate 7.85; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 4826: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 4827: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 4828: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 4829: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 4830: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 4831: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 4832: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 4833: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 4834: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 4945: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 4946: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 4947: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 4948: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 4949: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 4950: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 4951: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 4952: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 4953: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 97.05s leader 5, trace 5161: estimate 7.86; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 97.05s leader 5, trace 5162: estimate 7.86; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5311: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5312: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5313: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5314: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5315: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5316: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5317: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5318: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5438: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5439: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5440: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5441: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5442: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5443: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5444: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5445: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 5566: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5567: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5568: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 5569: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5570: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5571: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 5572: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 5678: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 5679: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 5680: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 5681: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 5682: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 5683: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 5684: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.20s leader 4, trace 5739: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 5796: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 5797: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 5798: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 5799: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 5800: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 5801: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 5802: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Rook incapacitated
- 1: Moss killed in action
- 1: Reed incapacitated
- 1: Iven killed in action
- 1: Tern killed in action

## Outcome attribution

- 97.05s, evidence 789: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 97.05s, evidence 5161: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.127178 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418056294867235, 'next_transition': 5165}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 97.05s, evidence 5162: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.127178 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418056294867235, 'next_transition': 5165}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 115.20s, evidence 867: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
