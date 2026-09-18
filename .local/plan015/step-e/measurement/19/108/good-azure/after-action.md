# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/19/108/good-azure/battle-108-1789674072481585188`

## Battle summary

**Ember** · 162.8 s · 403 shots.

### Turning points

- 18.5s, squad 4: contact (events line 242). First recorded contact.
- 39.5s, squad 0: help call ([trace 12658](#trace-12658)). 41.0s, squad 1: answered a neighbour with support by fire.
- 41.0s, squad 1: help answer ([trace 12976](#trace-12976)). 46.4s, squad 1: answered a neighbour with support by fire.
- 44.5s, squad 0: help call ([trace 16011](#trace-16011)). 46.4s, squad 1: answered a neighbour with support by fire.
- 46.4s, squad 1: help answer ([trace 16410](#trace-16410)). 46.9s, squad 1: prepared a base of fire.
- 54.4s, squad 1: help call ([trace 25703](#trace-25703)). 56.5s, squad 0: answered a neighbour with support by fire.
- 56.5s, squad 0: help answer ([trace 25860](#trace-25860)). 64.2s, squad 0: took cover and returned fire.
- 74.3s, squad 1: withdrawal ([trace 29793](#trace-29793)). No completion observed before termination.
- 103.0s, squad 1: help call ([trace 33220](#trace-33220)). 104.2s, squad 0: answered a neighbour with support by fire.
- 104.2s, squad 0: help answer ([trace 33254](#trace-33254)). 110.3s, squad 0: Withdraw to received rally.
- 3 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose Withdraw to received rally, broke contact and 4 further drill types; no completed objective recorded; 46 shots, 8/8 lost.
- **1** — FightHere; chose prepared a base of fire, broke contact and 3 further drill types; no completed objective recorded; 30 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 231 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 96 shots, 1/4 lost.

### Decisions and attribution

At 74.3s, squad 1 chose broke contact ([trace 29793](#trace-29793)), followed by 2 shots and 1 own casualties; estimate 13.6 against 0 distinct squad-reported contacts; At 107.8s, squad 1 chose renewed the existing objective ([trace 35177](#trace-35177)), followed by 2 shots and 1 own casualties; estimate 14.7 against 4 distinct squad-reported contacts; At 46.9s, squad 1 chose prepared a base of fire ([trace 19250](#trace-19250)), followed by 4 shots and 0 own casualties; estimate 13.4 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 815](#trace-815)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945003406567007, 'next_transition': 834}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 817](#trace-817)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011193555057729, 'next_transition': 990}.

### Communication

245 matched deliveries (mean 0.48s, max 2.00s); 216 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.50s, squad 4, contact, evidence events line 242: First recorded contact; .
- 39.50s, squad 0, help call, evidence 12658: NeedSupport; 41.0s, squad 1: answered a neighbour with support by fire.
- 41.05s, squad 1, help answer, evidence 12976: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 46.4s, squad 1: answered a neighbour with support by fire.
- 44.55s, squad 0, help call, evidence 16011: NeedSupport; 46.4s, squad 1: answered a neighbour with support by fire.
- 46.40s, squad 1, help answer, evidence 16410: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 46.9s, squad 1: prepared a base of fire.
- 54.40s, squad 1, help call, evidence 25703: NeedSupport; 56.5s, squad 0: answered a neighbour with support by fire.
- 56.45s, squad 0, help answer, evidence 25860: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 64.2s, squad 0: took cover and returned fire.
- 74.30s, squad 1, withdrawal, evidence 29793: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 102.95s, squad 1, help call, evidence 33220: NeedSupport; 104.2s, squad 0: answered a neighbour with support by fire.
- 104.15s, squad 0, help answer, evidence 33254: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 110.3s, squad 0: Withdraw to received rally.
- 110.30s, squad 0, withdrawal, evidence 35293: Withdraw to received rally; 118.6s, squad 0: took cover and returned fire.
- 118.55s, squad 0, help call, evidence 35685: NeedSupport; No completion observed before termination.
- 122.80s, squad 0, withdrawal, evidence 35930: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915741010535207, 'next_transition': 686}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915741010535207, 'next_transition': 686}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915741010535207, 'next_transition': 686}.
<a id="trace-319"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 319): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54439192948231, 'next_transition': 105}.
<a id="trace-320"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 320): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54439192948231, 'next_transition': 105}.
<a id="trace-321"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 321): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54439192948231, 'next_transition': 105}.
<a id="trace-686"></a>
<a id="trace-688"></a>
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-751"></a>
<a id="trace-753"></a>
<a id="trace-779"></a>
<a id="trace-781"></a>
<a id="trace-803"></a>
<a id="trace-805"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600042882246691, 'next_transition': 713}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945003406567007, 'next_transition': 834}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011193555057729, 'next_transition': 990}.
<a id="trace-815"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 815): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 815. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945003406567007, 'next_transition': 834}.
<a id="trace-816"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 816): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 816. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945003406567007, 'next_transition': 834}.
<a id="trace-817"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 817): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 817. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011193555057729, 'next_transition': 990}.
<a id="trace-818"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 818): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 818. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011193555057729, 'next_transition': 990}.
<a id="trace-834"></a>
<a id="trace-836"></a>
<a id="trace-865"></a>
<a id="trace-867"></a>
<a id="trace-948"></a>
<a id="trace-950"></a>
<a id="trace-975"></a>
<a id="trace-977"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 834): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 818. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449803163100912, 'next_transition': 865}.
<a id="trace-979"></a>
<a id="trace-981"></a>
<a id="trace-1131"></a>
<a id="trace-1133"></a>
<a id="trace-1185"></a>
<a id="trace-1187"></a>
<a id="trace-1226"></a>
<a id="trace-1228"></a>
<a id="trace-1276"></a>
<a id="trace-1278"></a>
<a id="trace-1318"></a>
<a id="trace-1320"></a>
<a id="trace-1382"></a>
<a id="trace-1384"></a>
<a id="trace-1407"></a>
<a id="trace-1409"></a>
<a id="trace-1528"></a>
<a id="trace-1530"></a>
<a id="trace-1559"></a>
<a id="trace-1561"></a>
<a id="trace-1582"></a>
<a id="trace-1584"></a>
<a id="trace-1611"></a>
<a id="trace-1613"></a>
<a id="trace-1634"></a>
<a id="trace-1636"></a>
<a id="trace-1647"></a>
<a id="trace-1649"></a>
<a id="trace-1677"></a>
<a id="trace-1679"></a>
<a id="trace-1721"></a>
<a id="trace-1723"></a>
<a id="trace-1896"></a>
<a id="trace-1898"></a>
<a id="trace-2144"></a>
<a id="trace-2146"></a>
<a id="trace-2168"></a>
<a id="trace-2170"></a>
<a id="trace-2199"></a>
<a id="trace-2201"></a>
<a id="trace-2265"></a>
<a id="trace-2267"></a>
<a id="trace-2297"></a>
<a id="trace-2299"></a>
<a id="trace-2329"></a>
<a id="trace-2331"></a>
<a id="trace-2371"></a>
<a id="trace-2373"></a>
<a id="trace-2677"></a>
<a id="trace-2679"></a>
<a id="trace-2780"></a>
<a id="trace-2782"></a>
<a id="trace-3139"></a>
<a id="trace-3141"></a>
<a id="trace-3178"></a>
<a id="trace-3180"></a>
<a id="trace-3570"></a>
<a id="trace-3572"></a>
<a id="trace-3963"></a>
<a id="trace-3965"></a>
<a id="trace-4369"></a>
<a id="trace-4371"></a>
<a id="trace-4490"></a>
<a id="trace-4492"></a>
<a id="trace-4944"></a>
<a id="trace-4946"></a>
<a id="trace-5123"></a>
<a id="trace-5125"></a>
<a id="trace-5549"></a>
<a id="trace-5551"></a>
<a id="trace-5875"></a>
<a id="trace-5877"></a>
<a id="trace-6342"></a>
<a id="trace-6344"></a>
<a id="trace-6392"></a>
<a id="trace-6394"></a>
<a id="trace-6455"></a>
<a id="trace-6457"></a>
<a id="trace-6510"></a>
<a id="trace-6512"></a>
<a id="trace-6558"></a>
<a id="trace-6560"></a>
<a id="trace-7035"></a>
<a id="trace-7037"></a>
<a id="trace-7101"></a>
<a id="trace-7103"></a>
<a id="trace-7564"></a>
<a id="trace-7566"></a>
<a id="trace-8446"></a>
<a id="trace-8448"></a>
<a id="trace-11886"></a>
<a id="trace-11888"></a>
<a id="trace-11932"></a>
<a id="trace-11934"></a>
<a id="trace-12056"></a>
<a id="trace-12058"></a>
<a id="trace-12105"></a>
<a id="trace-12107"></a>
<a id="trace-12138"></a>
<a id="trace-12140"></a>
<a id="trace-12159"></a>
<a id="trace-12161"></a>
<a id="trace-12177"></a>
<a id="trace-12179"></a>
<a id="trace-12213"></a>
<a id="trace-12215"></a>
<a id="trace-12228"></a>
<a id="trace-12230"></a>
<a id="trace-12248"></a>
<a id="trace-12250"></a>
<a id="trace-12677"></a>
<a id="trace-12679"></a>
<a id="trace-12769"></a>
<a id="trace-12771"></a>
<a id="trace-12952"></a>
<a id="trace-12954"></a>
<a id="trace-15779"></a>
<a id="trace-15781"></a>
<a id="trace-15936"></a>
<a id="trace-15938"></a>
<a id="trace-15966"></a>
<a id="trace-15968"></a>
<a id="trace-15994"></a>
<a id="trace-15996"></a>
<a id="trace-16037"></a>
<a id="trace-16039"></a>
<a id="trace-16123"></a>
<a id="trace-16125"></a>
<a id="trace-16362"></a>
<a id="trace-16364"></a>
<a id="trace-16404"></a>
<a id="trace-16406"></a>
<a id="trace-19244"></a>
<a id="trace-19246"></a>
<a id="trace-22078"></a>
<a id="trace-22080"></a>
<a id="trace-22112"></a>
<a id="trace-22114"></a>
<a id="trace-22152"></a>
<a id="trace-22154"></a>
<a id="trace-22212"></a>
<a id="trace-22214"></a>
<a id="trace-22264"></a>
<a id="trace-22266"></a>
<a id="trace-22318"></a>
<a id="trace-22320"></a>
<a id="trace-22434"></a>
<a id="trace-22436"></a>
<a id="trace-22485"></a>
<a id="trace-22487"></a>
<a id="trace-22504"></a>
<a id="trace-22506"></a>
<a id="trace-22522"></a>
<a id="trace-22524"></a>
<a id="trace-25597"></a>
<a id="trace-25599"></a>
<a id="trace-25621"></a>
<a id="trace-25623"></a>
<a id="trace-25651"></a>
<a id="trace-25653"></a>
<a id="trace-25676"></a>
<a id="trace-25678"></a>
<a id="trace-25699"></a>
<a id="trace-25701"></a>
<a id="trace-25724"></a>
<a id="trace-25726"></a>
<a id="trace-25815"></a>
<a id="trace-25817"></a>
<a id="trace-25834"></a>
<a id="trace-25836"></a>
<a id="trace-25854"></a>
<a id="trace-25856"></a>
<a id="trace-28490"></a>
<a id="trace-28492"></a>
<a id="trace-28520"></a>
<a id="trace-28522"></a>
<a id="trace-28549"></a>
<a id="trace-28551"></a>
<a id="trace-28611"></a>
<a id="trace-28613"></a>
<a id="trace-28639"></a>
<a id="trace-28641"></a>
<a id="trace-28658"></a>
<a id="trace-28660"></a>
<a id="trace-28760"></a>
<a id="trace-28762"></a>
<a id="trace-28787"></a>
<a id="trace-28789"></a>
<a id="trace-28809"></a>
<a id="trace-28811"></a>
<a id="trace-28827"></a>
<a id="trace-28829"></a>
<a id="trace-28852"></a>
<a id="trace-28854"></a>
<a id="trace-28880"></a>
<a id="trace-28882"></a>
<a id="trace-29084"></a>
<a id="trace-29086"></a>
<a id="trace-29227"></a>
<a id="trace-29229"></a>
<a id="trace-29279"></a>
<a id="trace-29281"></a>
<a id="trace-29317"></a>
<a id="trace-29319"></a>
<a id="trace-29342"></a>
<a id="trace-29344"></a>
<a id="trace-29358"></a>
<a id="trace-29360"></a>
<a id="trace-29663"></a>
<a id="trace-29665"></a>
<a id="trace-29679"></a>
<a id="trace-29681"></a>
<a id="trace-29693"></a>
<a id="trace-29695"></a>
<a id="trace-29709"></a>
<a id="trace-29711"></a>
<a id="trace-29727"></a>
<a id="trace-29729"></a>
<a id="trace-29751"></a>
<a id="trace-29753"></a>
<a id="trace-29771"></a>
<a id="trace-29773"></a>
<a id="trace-29788"></a>
<a id="trace-29790"></a>
<a id="trace-29937"></a>
<a id="trace-29939"></a>
<a id="trace-30018"></a>
<a id="trace-30020"></a>
<a id="trace-30034"></a>
<a id="trace-30036"></a>
<a id="trace-30058"></a>
<a id="trace-30060"></a>
<a id="trace-30070"></a>
<a id="trace-30072"></a>
<a id="trace-30090"></a>
<a id="trace-30092"></a>
<a id="trace-30107"></a>
<a id="trace-30109"></a>
<a id="trace-30124"></a>
<a id="trace-30126"></a>
<a id="trace-30136"></a>
<a id="trace-30138"></a>
<a id="trace-30151"></a>
<a id="trace-30153"></a>
<a id="trace-30165"></a>
<a id="trace-30167"></a>
<a id="trace-30265"></a>
<a id="trace-30267"></a>
<a id="trace-30295"></a>
<a id="trace-30297"></a>
<a id="trace-30310"></a>
<a id="trace-30312"></a>
<a id="trace-30337"></a>
<a id="trace-30339"></a>
<a id="trace-30366"></a>
<a id="trace-30368"></a>
<a id="trace-30384"></a>
<a id="trace-30386"></a>
<a id="trace-30405"></a>
<a id="trace-30407"></a>
<a id="trace-30423"></a>
<a id="trace-30425"></a>
<a id="trace-30500"></a>
<a id="trace-30502"></a>
<a id="trace-30532"></a>
<a id="trace-30534"></a>
<a id="trace-30550"></a>
<a id="trace-30552"></a>
<a id="trace-30573"></a>
<a id="trace-30575"></a>
<a id="trace-30611"></a>
<a id="trace-30613"></a>
<a id="trace-30623"></a>
<a id="trace-30625"></a>
<a id="trace-30649"></a>
<a id="trace-30651"></a>
<a id="trace-30668"></a>
<a id="trace-30670"></a>
<a id="trace-32539"></a>
<a id="trace-32541"></a>
<a id="trace-32562"></a>
<a id="trace-32564"></a>
<a id="trace-32605"></a>
<a id="trace-32607"></a>
<a id="trace-32645"></a>
<a id="trace-32647"></a>
<a id="trace-32658"></a>
<a id="trace-32660"></a>
<a id="trace-32681"></a>
<a id="trace-32683"></a>
<a id="trace-32696"></a>
<a id="trace-32698"></a>
<a id="trace-32769"></a>
<a id="trace-32771"></a>
<a id="trace-32780"></a>
<a id="trace-32782"></a>
<a id="trace-32800"></a>
<a id="trace-32802"></a>
<a id="trace-32816"></a>
<a id="trace-32818"></a>
<a id="trace-32835"></a>
<a id="trace-32837"></a>
<a id="trace-32850"></a>
<a id="trace-32852"></a>
<a id="trace-32878"></a>
<a id="trace-32880"></a>
<a id="trace-32897"></a>
<a id="trace-32899"></a>
<a id="trace-32912"></a>
<a id="trace-32914"></a>
<a id="trace-32995"></a>
<a id="trace-32997"></a>
<a id="trace-33003"></a>
<a id="trace-33005"></a>
<a id="trace-33163"></a>
<a id="trace-33165"></a>
<a id="trace-33214"></a>
<a id="trace-33216"></a>
<a id="trace-33235"></a>
<a id="trace-33237"></a>
<a id="trace-33243"></a>
<a id="trace-33245"></a>
<a id="trace-35017"></a>
<a id="trace-35019"></a>
<a id="trace-35033"></a>
<a id="trace-35035"></a>
<a id="trace-35119"></a>
<a id="trace-35121"></a>
<a id="trace-35144"></a>
<a id="trace-35146"></a>
<a id="trace-35162"></a>
<a id="trace-35164"></a>
<a id="trace-35172"></a>
<a id="trace-35174"></a>
<a id="trace-35194"></a>
<a id="trace-35196"></a>
<a id="trace-35202"></a>
<a id="trace-35204"></a>
<a id="trace-35215"></a>
<a id="trace-35217"></a>
<a id="trace-35290"></a>
<a id="trace-35292"></a>
<a id="trace-35430"></a>
<a id="trace-35432"></a>
<a id="trace-35449"></a>
<a id="trace-35451"></a>
<a id="trace-35462"></a>
<a id="trace-35464"></a>
<a id="trace-35480"></a>
<a id="trace-35482"></a>
<a id="trace-35511"></a>
<a id="trace-35513"></a>
<a id="trace-35522"></a>
<a id="trace-35524"></a>
<a id="trace-35540"></a>
<a id="trace-35542"></a>
<a id="trace-35550"></a>
<a id="trace-35552"></a>
<a id="trace-35624"></a>
<a id="trace-35626"></a>
<a id="trace-35643"></a>
<a id="trace-35645"></a>
<a id="trace-35659"></a>
<a id="trace-35661"></a>
<a id="trace-35669"></a>
<a id="trace-35671"></a>
<a id="trace-35680"></a>
<a id="trace-35682"></a>
<a id="trace-35760"></a>
<a id="trace-35762"></a>
<a id="trace-35777"></a>
<a id="trace-35779"></a>
<a id="trace-35795"></a>
<a id="trace-35797"></a>
<a id="trace-35865"></a>
<a id="trace-35867"></a>
<a id="trace-35877"></a>
<a id="trace-35879"></a>
<a id="trace-35916"></a>
<a id="trace-35918"></a>
<a id="trace-35926"></a>
<a id="trace-35928"></a>
<a id="trace-36008"></a>
<a id="trace-36010"></a>
<a id="trace-36018"></a>
<a id="trace-36020"></a>
<a id="trace-36030"></a>
<a id="trace-36032"></a>
<a id="trace-36041"></a>
<a id="trace-36043"></a>
<a id="trace-36105"></a>
<a id="trace-36107"></a>
<a id="trace-36115"></a>
<a id="trace-36117"></a>
<a id="trace-36125"></a>
<a id="trace-36127"></a>
<a id="trace-36141"></a>
<a id="trace-36143"></a>
<a id="trace-36153"></a>
<a id="trace-36155"></a>
<a id="trace-36179"></a>
<a id="trace-36181"></a>
<a id="trace-36190"></a>
<a id="trace-36192"></a>
<a id="trace-36200"></a>
<a id="trace-36202"></a>
<a id="trace-36264"></a>
<a id="trace-36266"></a>
<a id="trace-36274"></a>
<a id="trace-36276"></a>
<a id="trace-36284"></a>
<a id="trace-36286"></a>
<a id="trace-36288"></a>
<a id="trace-36290"></a>
<a id="trace-36299"></a>
<a id="trace-36301"></a>
<a id="trace-36305"></a>
<a id="trace-36307"></a>
<a id="trace-36316"></a>
<a id="trace-36318"></a>
<a id="trace-36413"></a>
<a id="trace-36415"></a>
<a id="trace-36432"></a>
<a id="trace-36434"></a>
<a id="trace-36439"></a>
<a id="trace-36441"></a>
<a id="trace-36451"></a>
<a id="trace-36453"></a>
<a id="trace-36472"></a>
<a id="trace-36474"></a>
<a id="trace-36481"></a>
<a id="trace-36483"></a>
<a id="trace-36552"></a>
<a id="trace-36554"></a>
<a id="trace-36580"></a>
<a id="trace-36582"></a>
<a id="trace-36594"></a>
<a id="trace-36596"></a>
<a id="trace-36606"></a>
<a id="trace-36608"></a>
<a id="trace-36613"></a>
<a id="trace-36615"></a>
<a id="trace-36631"></a>
<a id="trace-36633"></a>
<a id="trace-36650"></a>
<a id="trace-36652"></a>
<a id="trace-36717"></a>
<a id="trace-36719"></a>
<a id="trace-36738"></a>
<a id="trace-36740"></a>
<a id="trace-36746"></a>
<a id="trace-36748"></a>
<a id="trace-36770"></a>
<a id="trace-36772"></a>
<a id="trace-36799"></a>
<a id="trace-36801"></a>
<a id="trace-36810"></a>
<a id="trace-36812"></a>
<a id="trace-36874"></a>
<a id="trace-36876"></a>
<a id="trace-36884"></a>
<a id="trace-36886"></a>
<a id="trace-36893"></a>
<a id="trace-36895"></a>
<a id="trace-36898"></a>
<a id="trace-36900"></a>
<a id="trace-36910"></a>
<a id="trace-36912"></a>
<a id="trace-36920"></a>
<a id="trace-36922"></a>
<a id="trace-36941"></a>
<a id="trace-36943"></a>
<a id="trace-36955"></a>
<a id="trace-36957"></a>
<a id="trace-36962"></a>
<a id="trace-36964"></a>
<a id="trace-37031"></a>
<a id="trace-37041"></a>
<a id="trace-37058"></a>
<a id="trace-37072"></a>
<a id="trace-37074"></a>
<a id="trace-37081"></a>
<a id="trace-37083"></a>
<a id="trace-37093"></a>
<a id="trace-37095"></a>
<a id="trace-37111"></a>
<a id="trace-37113"></a>
<a id="trace-37119"></a>
<a id="trace-37121"></a>
<a id="trace-37188"></a>
<a id="trace-37190"></a>
<a id="trace-37202"></a>
<a id="trace-37204"></a>
<a id="trace-37218"></a>
<a id="trace-37220"></a>
<a id="trace-37228"></a>
<a id="trace-37230"></a>
<a id="trace-37241"></a>
<a id="trace-37243"></a>
<a id="trace-37253"></a>
<a id="trace-37255"></a>
- 5.70s–162.80s (×501), actor 37, squad 4 (trace 979): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 892. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624898124449623, 'next_transition': 1131}.
<a id="trace-990"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 990): traveling overwatch. Knowledge: actor memory at 5.00s, trace 883. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.152134051431477, 'next_transition': 1975}.
<a id="trace-991"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 991): received platoon directive. Knowledge: actor memory at 5.00s, trace 883. Next observer evidence: {'until': 15, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.152134051431477, 'next_transition': 1975}.
<a id="trace-1052"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1052): traveling overwatch. Knowledge: actor memory at 5.00s, trace 875. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299885063357676, 'next_transition': 1127}.
<a id="trace-1053"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1053): received platoon directive. Knowledge: actor memory at 5.00s, trace 875. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299885063357676, 'next_transition': 1127}.
<a id="trace-1127"></a>
<a id="trace-1129"></a>
<a id="trace-1181"></a>
<a id="trace-1183"></a>
<a id="trace-1222"></a>
<a id="trace-1224"></a>
<a id="trace-1272"></a>
<a id="trace-1274"></a>
<a id="trace-1314"></a>
<a id="trace-1316"></a>
<a id="trace-1378"></a>
<a id="trace-1380"></a>
<a id="trace-1403"></a>
<a id="trace-1405"></a>
<a id="trace-1432"></a>
<a id="trace-1434"></a>
<a id="trace-1524"></a>
<a id="trace-1526"></a>
<a id="trace-1555"></a>
<a id="trace-1557"></a>
<a id="trace-1578"></a>
<a id="trace-1580"></a>
<a id="trace-1607"></a>
<a id="trace-1609"></a>
<a id="trace-1630"></a>
<a id="trace-1632"></a>
<a id="trace-1643"></a>
<a id="trace-1645"></a>
<a id="trace-1673"></a>
<a id="trace-1675"></a>
<a id="trace-1692"></a>
<a id="trace-1694"></a>
<a id="trace-1717"></a>
<a id="trace-1719"></a>
- 6.20s–14.20s (×34), actor 5, squad 0 (trace 1127): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 880. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.212640499278767, 'next_transition': 1181}.
<a id="trace-1732"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 1732): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1443. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1892}.
<a id="trace-1892"></a>
<a id="trace-1894"></a>
<a id="trace-2140"></a>
<a id="trace-2142"></a>
<a id="trace-2164"></a>
<a id="trace-2166"></a>
<a id="trace-2195"></a>
<a id="trace-2197"></a>
<a id="trace-2237"></a>
<a id="trace-2239"></a>
<a id="trace-2261"></a>
<a id="trace-2263"></a>
<a id="trace-2293"></a>
<a id="trace-2295"></a>
<a id="trace-2325"></a>
<a id="trace-2327"></a>
<a id="trace-2347"></a>
<a id="trace-2349"></a>
<a id="trace-2367"></a>
<a id="trace-2369"></a>
- 14.70s–19.25s (×20), actor 5, squad 0 (trace 1892): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1448. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.01968699800947317, 'next_transition': 2140}.
<a id="trace-1975"></a>
- 15.10s–15.10s (×1), actor 8, squad 1 (trace 1975): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1913. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.272941261224352, 'next_transition': 367}.
<a id="trace-2374"></a>
- 19.25s–19.25s (×1), actor 0, squad 0 (trace 2374): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1905. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725043152547196, 'next_transition': 2673}.
<a id="trace-2375"></a>
- 19.25s–19.25s (×1), actor 0, squad 0 (trace 2375): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1905. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725043152547196, 'next_transition': 2673}.
<a id="trace-2376"></a>
- 19.25s–19.25s (×1), actor 0, squad 0 (trace 2376): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1905. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725043152547196, 'next_transition': 2673}.
<a id="trace-2673"></a>
<a id="trace-2675"></a>
<a id="trace-2776"></a>
<a id="trace-2778"></a>
- 19.75s–20.25s (×4), actor 5, squad 0 (trace 2673): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1910. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5123522203433791, 'next_transition': 2776}.
<a id="trace-2783"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 2783): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2688. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4328739898865085, 'next_transition': 3135}.
<a id="trace-3135"></a>
<a id="trace-3137"></a>
<a id="trace-3174"></a>
<a id="trace-3176"></a>
- 20.75s–21.25s (×4), actor 5, squad 0 (trace 3135): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2693. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3781314965061027, 'next_transition': 3174}.
<a id="trace-3181"></a>
- 21.25s–21.25s (×1), actor 0, squad 0 (trace 3181): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2688. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.775899187340387, 'next_transition': 3566}.
<a id="trace-3566"></a>
<a id="trace-3568"></a>
- 21.75s–21.75s (×2), actor 5, squad 0 (trace 3566): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2693. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9656218881431956, 'next_transition': 3959}.
<a id="trace-3573"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 3573): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2688. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9656218881431956, 'next_transition': 3959}.
<a id="trace-3959"></a>
<a id="trace-3961"></a>
- 22.25s–22.25s (×2), actor 5, squad 0 (trace 3959): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2693. Next observer evidence: None.
<a id="trace-3966"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 3966): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2688. Next observer evidence: None.
<a id="trace-366"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (events line 366): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-367"></a>
- 22.30s–22.30s (×1), actor 5, squad 1 (events line 367): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4310"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 4310): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.254932 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 4310. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4113035539132316, 'next_transition': 4365}.
<a id="trace-4311"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 4311): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.254932 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 4311. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4113035539132316, 'next_transition': 4365}.
<a id="trace-4312"></a>
- 22.30s–22.30s (×1), actor 5, squad 1 (trace 4312): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.254932 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 4312. Next observer evidence: {'until': 23.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7799809758668443, 'next_transition': 4514}.
<a id="trace-4313"></a>
- 22.30s–22.30s (×1), actor 5, squad 1 (trace 4313): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.254932 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 4313. Next observer evidence: {'until': 23.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7799809758668443, 'next_transition': 4514}.
<a id="trace-4365"></a>
<a id="trace-4367"></a>
<a id="trace-4436"></a>
<a id="trace-4438"></a>
<a id="trace-4486"></a>
<a id="trace-4488"></a>
<a id="trace-4940"></a>
<a id="trace-4942"></a>
<a id="trace-5008"></a>
<a id="trace-5010"></a>
<a id="trace-5119"></a>
<a id="trace-5121"></a>
<a id="trace-5545"></a>
<a id="trace-5547"></a>
- 22.75s–25.75s (×14), actor 5, squad 0 (trace 4365): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 22.30s, trace 4313. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8462940734398814, 'next_transition': 4436}.
<a id="trace-4514"></a>
- 23.90s–23.90s (×1), actor 8, squad 1 (trace 4514): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2696. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2037068303986365, 'next_transition': 5145}.
<a id="trace-4515"></a>
- 23.90s–23.90s (×1), actor 8, squad 1 (trace 4515): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2696. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2037068303986365, 'next_transition': 5145}.
<a id="trace-4516"></a>
<a id="trace-5145"></a>
<a id="trace-5885"></a>
- 23.90s–26.30s (×3), actor 8, squad 1 (trace 4516): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2696. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2037068303986365, 'next_transition': 5145}.
<a id="trace-5566"></a>
- 26.15s–26.15s (×1), actor 0, squad 0 (trace 5566): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5034. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.146111074097813, 'next_transition': 5871}.
<a id="trace-5871"></a>
<a id="trace-5873"></a>
<a id="trace-6338"></a>
<a id="trace-6340"></a>
- 26.25s–26.75s (×4), actor 5, squad 0 (trace 5871): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5039. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2954230946193344, 'next_transition': 6338}.
<a id="trace-6376"></a>
- 27.15s–27.15s (×1), actor 0, squad 0 (trace 6376): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 5034. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.028402408596147143, 'next_transition': 6388}.
<a id="trace-6388"></a>
<a id="trace-6390"></a>
<a id="trace-6451"></a>
<a id="trace-6453"></a>
<a id="trace-6506"></a>
<a id="trace-6508"></a>
<a id="trace-6554"></a>
<a id="trace-6556"></a>
<a id="trace-6600"></a>
<a id="trace-6602"></a>
- 27.25s–29.25s (×10), actor 5, squad 0 (trace 6388): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5039. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14556724453057357, 'next_transition': 6451}.
<a id="trace-6617"></a>
- 29.45s–29.45s (×1), actor 0, squad 0 (trace 6617): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 5034. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2020108375823104, 'next_transition': 6935}.
<a id="trace-6935"></a>
<a id="trace-6937"></a>
<a id="trace-7031"></a>
<a id="trace-7033"></a>
<a id="trace-7058"></a>
<a id="trace-7060"></a>
<a id="trace-7086"></a>
<a id="trace-7088"></a>
<a id="trace-7097"></a>
<a id="trace-7099"></a>
<a id="trace-7560"></a>
<a id="trace-7562"></a>
<a id="trace-8442"></a>
<a id="trace-8444"></a>
<a id="trace-8482"></a>
<a id="trace-8484"></a>
<a id="trace-8939"></a>
<a id="trace-8941"></a>
- 29.75s–33.75s (×18), actor 5, squad 0 (trace 6935): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5039. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.39577279289600775, 'next_transition': 7031}.
<a id="trace-6973"></a>
- 30.00s–30.00s (×1), actor 8, squad 1 (trace 6973): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6955. Next observer evidence: {'until': 32, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.514907071444483, 'next_transition': 7112}.
<a id="trace-7112"></a>
<a id="trace-7572"></a>
<a id="trace-8008"></a>
<a id="trace-8488"></a>
- 32.00s–33.30s (×4), actor 8, squad 1 (trace 7112): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 6955. Next observer evidence: {'until': 32.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.08062000000000014, 'next_transition': 7572}.
<a id="trace-8944"></a>
- 33.75s–33.75s (×1), actor 1, squad 0 (trace 8944): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6948. Next observer evidence: {'until': 34, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37861700894480343, 'next_transition': 8971}.
<a id="trace-8971"></a>
- 34.10s–34.10s (×1), actor 1, squad 0 (trace 8971): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 6948. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999612813666949, 'next_transition': 11881}.
<a id="trace-11560"></a>
- 34.10s–34.10s (×1), actor 1, squad 0 (trace 11560): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 6948. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999612813666949, 'next_transition': 11881}.
<a id="trace-11561"></a>
- 34.10s–34.10s (×1), actor 1, squad 0 (trace 11561): MoveTactically. Knowledge: actor memory at 30.00s, trace 6948. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999612813666949, 'next_transition': 11881}.
<a id="trace-11562"></a>
- 34.10s–34.10s (×1), actor 1, squad 0 (trace 11562): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 6948. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999612813666949, 'next_transition': 11881}.
<a id="trace-11881"></a>
<a id="trace-11883"></a>
<a id="trace-11927"></a>
<a id="trace-11929"></a>
<a id="trace-12052"></a>
<a id="trace-12054"></a>
<a id="trace-12101"></a>
<a id="trace-12103"></a>
<a id="trace-12134"></a>
<a id="trace-12136"></a>
<a id="trace-12155"></a>
<a id="trace-12157"></a>
<a id="trace-12172"></a>
<a id="trace-12174"></a>
<a id="trace-12185"></a>
<a id="trace-12187"></a>
<a id="trace-12206"></a>
<a id="trace-12208"></a>
<a id="trace-12221"></a>
<a id="trace-12223"></a>
<a id="trace-12241"></a>
<a id="trace-12243"></a>
- 34.25s–39.25s (×22), actor 5, squad 0 (trace 11881): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6952. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25760548042865994, 'next_transition': 11927}.
<a id="trace-12182"></a>
- 37.45s–37.45s (×1), actor 8, squad 1 (trace 12182): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 11964. Next observer evidence: {'until': 39.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.5222862554592844, 'next_transition': 12254}.
<a id="trace-12254"></a>
- 39.40s–39.40s (×1), actor 8, squad 1 (trace 12254): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 11964. Next observer evidence: {'until': 41, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.693123664159256, 'next_transition': 12976}.
<a id="trace-12656"></a>
- 39.50s–39.50s (×1), actor 2, squad 0 (trace 12656): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 35.00s, trace 11958. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200179051745803, 'next_transition': 12670}.
<a id="trace-12658"></a>
- 39.50s–39.50s (×1), actor 2, squad 0 (trace 12658): NeedSupport. Knowledge: actor memory at 35.00s, trace 11958. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200179051745803, 'next_transition': 12670}.
<a id="trace-12670"></a>
<a id="trace-12672"></a>
<a id="trace-12764"></a>
<a id="trace-12766"></a>
- 39.75s–40.25s (×4), actor 5, squad 0 (trace 12670): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 11961. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599813713338495, 'next_transition': 12764}.
<a id="trace-12778"></a>
- 40.35s–40.35s (×1), actor 2, squad 0 (trace 12778): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 12684. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8306927686159321, 'next_transition': 12947}.
<a id="trace-12783"></a>
- 40.35s–40.35s (×1), actor 2, squad 0 (trace 12783): MoveTactically. Knowledge: actor memory at 40.00s, trace 12684. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8306927686159321, 'next_transition': 12947}.
<a id="trace-12784"></a>
- 40.35s–40.35s (×1), actor 2, squad 0 (trace 12784): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 40.00s, trace 12684. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8306927686159321, 'next_transition': 12947}.
<a id="trace-12947"></a>
<a id="trace-12949"></a>
<a id="trace-15773"></a>
<a id="trace-15775"></a>
<a id="trace-15823"></a>
<a id="trace-15825"></a>
<a id="trace-15863"></a>
<a id="trace-15865"></a>
<a id="trace-15894"></a>
<a id="trace-15896"></a>
<a id="trace-15931"></a>
<a id="trace-15933"></a>
- 40.75s–43.25s (×12), actor 5, squad 0 (trace 12947): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 12687. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8375013191782326, 'next_transition': 15773}.
<a id="trace-12976"></a>
- 41.05s–41.05s (×1), actor 8, squad 1 (trace 12976): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 12690. Next observer evidence: {'until': 44.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.029362017226062, 'next_transition': 952}.
<a id="trace-12977"></a>
- 41.05s–41.05s (×1), actor 8, squad 1 (trace 12977): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 12690. Next observer evidence: {'until': 44.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.029362017226062, 'next_transition': 952}.
<a id="trace-917"></a>
- 43.35s–43.35s (×1), actor 5, squad 0 (events line 917): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15942"></a>
- 43.35s–43.35s (×1), actor 5, squad 0 (trace 15942): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.590984 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 43.35s, trace 15942. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8481863802859402, 'next_transition': 15961}.
<a id="trace-15943"></a>
- 43.35s–43.35s (×1), actor 5, squad 0 (trace 15943): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.590984 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 43.35s, trace 15943. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8481863802859402, 'next_transition': 15961}.
<a id="trace-15961"></a>
<a id="trace-15963"></a>
<a id="trace-15988"></a>
<a id="trace-15990"></a>
- 43.75s–44.25s (×4), actor 5, squad 0 (trace 15961): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 43.35s, trace 15943. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4456919586046209, 'next_transition': 15988}.
<a id="trace-16011"></a>
- 44.55s–44.55s (×1), actor 2, squad 0 (trace 16011): NeedSupport. Knowledge: actor memory at 40.00s, trace 12684. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27338958926794515, 'next_transition': 16031}.
<a id="trace-952"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (events line 952): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16019"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 16019): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.593486 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 16019. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.979651094292721, 'next_transition': 16410}.
<a id="trace-16020"></a>
- 44.60s–44.60s (×1), actor 5, squad 1 (trace 16020): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.593486 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 16020. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.979651094292721, 'next_transition': 16410}.
<a id="trace-16031"></a>
<a id="trace-16033"></a>
<a id="trace-16117"></a>
<a id="trace-16119"></a>
- 44.75s–45.25s (×4), actor 5, squad 0 (trace 16031): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.60s, trace 16020. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.382285998703849, 'next_transition': 16117}.
<a id="trace-16127"></a>
- 45.40s–45.40s (×1), actor 2, squad 0 (trace 16127): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 16043. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4350447603242986, 'next_transition': 16356}.
<a id="trace-16128"></a>
- 45.40s–45.40s (×1), actor 2, squad 0 (trace 16128): received platoon directive. Knowledge: actor memory at 45.00s, trace 16043. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4350447603242986, 'next_transition': 16356}.
<a id="trace-16356"></a>
<a id="trace-16358"></a>
<a id="trace-16398"></a>
<a id="trace-16400"></a>
<a id="trace-19238"></a>
<a id="trace-19240"></a>
<a id="trace-22074"></a>
<a id="trace-22076"></a>
<a id="trace-22108"></a>
<a id="trace-22110"></a>
<a id="trace-22147"></a>
<a id="trace-22149"></a>
<a id="trace-22207"></a>
<a id="trace-22209"></a>
<a id="trace-22258"></a>
<a id="trace-22260"></a>
- 45.75s–49.25s (×16), actor 5, squad 0 (trace 16356): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 16046. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1803641527518118, 'next_transition': 16398}.
<a id="trace-16410"></a>
- 46.40s–46.40s (×1), actor 8, squad 1 (trace 16410): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 16049. Next observer evidence: {'until': 46.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7991793541338503, 'next_transition': 19250}.
<a id="trace-16411"></a>
- 46.40s–46.40s (×1), actor 8, squad 1 (trace 16411): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 16049. Next observer evidence: {'until': 46.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7991793541338503, 'next_transition': 19250}.
<a id="trace-19250"></a>
- 46.90s–46.90s (×1), actor 8, squad 1 (trace 19250): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 16049. Next observer evidence: {'until': 54.4, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.954283801698864, 'next_transition': 25703}.
<a id="trace-19251"></a>
- 46.90s–46.90s (×1), actor 8, squad 1 (trace 19251): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 45.00s, trace 16049. Next observer evidence: {'until': 54.4, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.954283801698864, 'next_transition': 25703}.
<a id="trace-22299"></a>
- 49.60s–49.60s (×1), actor 2, squad 0 (trace 22299): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 16043. Next observer evidence: None.
<a id="trace-22312"></a>
<a id="trace-22314"></a>
<a id="trace-22428"></a>
<a id="trace-22430"></a>
<a id="trace-22479"></a>
<a id="trace-22481"></a>
<a id="trace-22498"></a>
<a id="trace-22500"></a>
<a id="trace-22516"></a>
<a id="trace-22518"></a>
- 49.75s–51.75s (×10), actor 5, squad 0 (trace 22312): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 16046. Next observer evidence: {'until': 50.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.41789490839493576, 'next_transition': 22428}.
<a id="trace-22530"></a>
- 51.80s–51.80s (×1), actor 2, squad 0 (trace 22530): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 22344. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2836885398560703, 'next_transition': 25591}.
<a id="trace-25425"></a>
- 51.80s–51.80s (×1), actor 2, squad 0 (trace 25425): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 22344. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2836885398560703, 'next_transition': 25591}.
<a id="trace-25426"></a>
- 51.80s–51.80s (×1), actor 2, squad 0 (trace 25426): MoveTactically. Knowledge: actor memory at 50.00s, trace 22344. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2836885398560703, 'next_transition': 25591}.
<a id="trace-25427"></a>
- 51.80s–51.80s (×1), actor 2, squad 0 (trace 25427): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 22344. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2836885398560703, 'next_transition': 25591}.
<a id="trace-25569"></a>
- 51.80s–51.80s (×1), actor 2, squad 0 (trace 25569): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 50.00s, trace 22344. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2836885398560703, 'next_transition': 25591}.
<a id="trace-25591"></a>
<a id="trace-25593"></a>
<a id="trace-25615"></a>
<a id="trace-25617"></a>
<a id="trace-25645"></a>
<a id="trace-25647"></a>
<a id="trace-25670"></a>
<a id="trace-25672"></a>
<a id="trace-25693"></a>
<a id="trace-25695"></a>
<a id="trace-25718"></a>
<a id="trace-25720"></a>
<a id="trace-25809"></a>
<a id="trace-25811"></a>
<a id="trace-25828"></a>
<a id="trace-25830"></a>
<a id="trace-25848"></a>
<a id="trace-25850"></a>
- 52.25s–56.25s (×18), actor 5, squad 0 (trace 25591): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 22347. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3019242781872164, 'next_transition': 25615}.
<a id="trace-25703"></a>
- 54.40s–54.40s (×1), actor 8, squad 1 (trace 25703): NeedSupport. Knowledge: actor memory at 50.00s, trace 22350. Next observer evidence: {'until': 69, 'shots': 6, 'casualties': 2, 'mean_displacement': 2.46094033950886, 'next_transition': 29326}.
<a id="trace-25860"></a>
- 56.45s–56.45s (×1), actor 2, squad 0 (trace 25860): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 25733. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4573252997571447, 'next_transition': 28484}.
<a id="trace-25861"></a>
- 56.45s–56.45s (×1), actor 2, squad 0 (trace 25861): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 55.00s, trace 25733. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4573252997571447, 'next_transition': 28484}.
<a id="trace-28484"></a>
<a id="trace-28486"></a>
<a id="trace-28514"></a>
<a id="trace-28516"></a>
<a id="trace-28543"></a>
<a id="trace-28545"></a>
<a id="trace-28573"></a>
<a id="trace-28575"></a>
<a id="trace-28605"></a>
<a id="trace-28607"></a>
<a id="trace-28633"></a>
<a id="trace-28635"></a>
<a id="trace-28653"></a>
<a id="trace-28655"></a>
- 56.75s–59.75s (×14), actor 5, squad 0 (trace 28484): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 25736. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2104324188798496, 'next_transition': 28514}.
<a id="trace-28686"></a>
- 60.05s–60.05s (×1), actor 5, squad 0 (trace 28686): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 60.05s, trace 28686. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725059523137686, 'next_transition': 28737}.
<a id="trace-28737"></a>
<a id="trace-28739"></a>
<a id="trace-28755"></a>
<a id="trace-28757"></a>
<a id="trace-28771"></a>
<a id="trace-28773"></a>
<a id="trace-28782"></a>
<a id="trace-28784"></a>
<a id="trace-28804"></a>
<a id="trace-28806"></a>
<a id="trace-28821"></a>
<a id="trace-28823"></a>
<a id="trace-28846"></a>
<a id="trace-28848"></a>
<a id="trace-28874"></a>
<a id="trace-28876"></a>
- 60.25s–63.75s (×16), actor 5, squad 0 (trace 28737): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.05s, trace 28686. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450056886715599, 'next_transition': 28755}.
<a id="trace-28883"></a>
- 63.80s–63.80s (×1), actor 4, squad 0 (trace 28883): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 28666. Next observer evidence: {'until': 64, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4249669809290062, 'next_transition': 28896}.
<a id="trace-28896"></a>
- 64.15s–64.15s (×1), actor 4, squad 0 (trace 28896): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 28666. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575010558694765, 'next_transition': 29079}.
<a id="trace-28899"></a>
- 64.15s–64.15s (×1), actor 4, squad 0 (trace 28899): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 28666. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575010558694765, 'next_transition': 29079}.
<a id="trace-28900"></a>
- 64.15s–64.15s (×1), actor 4, squad 0 (trace 28900): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 28666. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575010558694765, 'next_transition': 29079}.
<a id="trace-29079"></a>
<a id="trace-29081"></a>
<a id="trace-29103"></a>
<a id="trace-29105"></a>
<a id="trace-29185"></a>
<a id="trace-29187"></a>
<a id="trace-29205"></a>
<a id="trace-29207"></a>
<a id="trace-29222"></a>
<a id="trace-29224"></a>
<a id="trace-29243"></a>
<a id="trace-29245"></a>
<a id="trace-29264"></a>
<a id="trace-29266"></a>
<a id="trace-29274"></a>
<a id="trace-29276"></a>
- 64.25s–67.75s (×16), actor 5, squad 0 (trace 29079): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.05s, trace 28686. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09386007459185879, 'next_transition': 29103}.
<a id="trace-29288"></a>
- 67.95s–67.95s (×1), actor 4, squad 0 (trace 29288): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 65.00s, trace 29116. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29299}.
<a id="trace-29299"></a>
<a id="trace-29301"></a>
<a id="trace-29312"></a>
<a id="trace-29314"></a>
<a id="trace-29335"></a>
<a id="trace-29337"></a>
<a id="trace-29351"></a>
<a id="trace-29353"></a>
<a id="trace-29640"></a>
<a id="trace-29642"></a>
<a id="trace-29658"></a>
<a id="trace-29660"></a>
<a id="trace-29674"></a>
<a id="trace-29676"></a>
<a id="trace-29688"></a>
<a id="trace-29690"></a>
<a id="trace-29704"></a>
<a id="trace-29706"></a>
<a id="trace-29722"></a>
<a id="trace-29724"></a>
<a id="trace-29746"></a>
<a id="trace-29748"></a>
<a id="trace-29766"></a>
<a id="trace-29768"></a>
<a id="trace-29783"></a>
<a id="trace-29785"></a>
<a id="trace-29932"></a>
<a id="trace-29934"></a>
<a id="trace-30013"></a>
<a id="trace-30015"></a>
<a id="trace-30029"></a>
<a id="trace-30031"></a>
<a id="trace-30054"></a>
<a id="trace-30056"></a>
<a id="trace-30066"></a>
<a id="trace-30068"></a>
<a id="trace-30086"></a>
<a id="trace-30088"></a>
<a id="trace-30103"></a>
<a id="trace-30105"></a>
<a id="trace-30120"></a>
<a id="trace-30122"></a>
<a id="trace-30132"></a>
<a id="trace-30134"></a>
<a id="trace-30161"></a>
<a id="trace-30163"></a>
<a id="trace-30245"></a>
<a id="trace-30247"></a>
<a id="trace-30261"></a>
<a id="trace-30263"></a>
<a id="trace-30291"></a>
<a id="trace-30293"></a>
<a id="trace-30306"></a>
<a id="trace-30308"></a>
<a id="trace-30333"></a>
<a id="trace-30335"></a>
<a id="trace-30346"></a>
<a id="trace-30348"></a>
<a id="trace-30362"></a>
<a id="trace-30364"></a>
<a id="trace-30380"></a>
<a id="trace-30382"></a>
<a id="trace-30401"></a>
<a id="trace-30403"></a>
<a id="trace-30419"></a>
<a id="trace-30421"></a>
<a id="trace-30496"></a>
<a id="trace-30498"></a>
- 68.25s–85.25s (×68), actor 5, squad 0 (trace 29299): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 29117. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29312}.
<a id="trace-29326"></a>
- 69.05s–69.05s (×1), actor 9, squad 1 (trace 29326): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 65.00s, trace 29121. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3678813467002641, 'next_transition': 29380}.
<a id="trace-29380"></a>
- 70.05s–70.05s (×1), actor 9, squad 1 (trace 29380): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 29366. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.699660607629525, 'next_transition': 1509}.
<a id="trace-29383"></a>
- 70.05s–70.05s (×1), actor 9, squad 1 (trace 29383): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 29366. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.699660607629525, 'next_transition': 1509}.
<a id="trace-29384"></a>
- 70.05s–70.05s (×1), actor 9, squad 1 (trace 29384): Reorganise complete: known contact. Knowledge: actor memory at 70.00s, trace 29366. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.699660607629525, 'next_transition': 1509}.
<a id="trace-1509"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (events line 1509): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29733"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 29733): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.270972 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 29733. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.119466724073726, 'next_transition': 29760}.
<a id="trace-29734"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 29734): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.270972 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 29734. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.119466724073726, 'next_transition': 29760}.
<a id="trace-29760"></a>
- 73.50s–73.50s (×1), actor 9, squad 1 (trace 29760): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 70.00s, trace 29366. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.054424059246439, 'next_transition': 29793}.
<a id="trace-29793"></a>
- 74.30s–74.30s (×1), actor 9, squad 1 (trace 29793): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 29366. Next observer evidence: {'until': 102.8, 'shots': 2, 'casualties': 1, 'mean_displacement': 5.795364018593439, 'next_transition': 33220}.
<a id="trace-29794"></a>
- 74.30s–74.30s (×1), actor 9, squad 1 (trace 29794): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 29366. Next observer evidence: {'until': 102.8, 'shots': 2, 'casualties': 1, 'mean_displacement': 5.795364018593439, 'next_transition': 33220}.
<a id="trace-30522"></a>
- 86.10s–86.10s (×1), actor 4, squad 0 (trace 30522): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 85.00s, trace 30431. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750201905451855, 'next_transition': 30528}.
<a id="trace-30528"></a>
<a id="trace-30530"></a>
<a id="trace-30546"></a>
<a id="trace-30548"></a>
<a id="trace-30569"></a>
<a id="trace-30571"></a>
<a id="trace-30586"></a>
<a id="trace-30588"></a>
<a id="trace-30607"></a>
<a id="trace-30609"></a>
<a id="trace-30619"></a>
<a id="trace-30621"></a>
<a id="trace-30645"></a>
<a id="trace-30647"></a>
<a id="trace-30664"></a>
<a id="trace-30666"></a>
<a id="trace-30743"></a>
<a id="trace-30745"></a>
- 86.25s–90.25s (×18), actor 5, squad 0 (trace 30528): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 30432. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149790257798927, 'next_transition': 30546}.
<a id="trace-30756"></a>
- 90.60s–90.60s (×1), actor 4, squad 0 (trace 30756): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 30672. Next observer evidence: {'until': 90.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18585942836858987, 'next_transition': 32535}.
<a id="trace-32521"></a>
- 90.60s–90.60s (×1), actor 4, squad 0 (trace 32521): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 90.00s, trace 30672. Next observer evidence: {'until': 90.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18585942836858987, 'next_transition': 32535}.
<a id="trace-32522"></a>
- 90.60s–90.60s (×1), actor 4, squad 0 (trace 32522): MoveTactically. Knowledge: actor memory at 90.00s, trace 30672. Next observer evidence: {'until': 90.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18585942836858987, 'next_transition': 32535}.
<a id="trace-32523"></a>
- 90.60s–90.60s (×1), actor 4, squad 0 (trace 32523): contact cover complete: assessment resumes closure. Knowledge: actor memory at 90.00s, trace 30672. Next observer evidence: {'until': 90.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18585942836858987, 'next_transition': 32535}.
<a id="trace-32535"></a>
<a id="trace-32537"></a>
<a id="trace-32558"></a>
<a id="trace-32560"></a>
<a id="trace-32576"></a>
<a id="trace-32578"></a>
<a id="trace-32601"></a>
<a id="trace-32603"></a>
<a id="trace-32614"></a>
<a id="trace-32616"></a>
<a id="trace-32641"></a>
<a id="trace-32643"></a>
<a id="trace-32654"></a>
<a id="trace-32656"></a>
<a id="trace-32677"></a>
<a id="trace-32679"></a>
<a id="trace-32692"></a>
<a id="trace-32694"></a>
<a id="trace-32765"></a>
<a id="trace-32767"></a>
<a id="trace-32776"></a>
<a id="trace-32778"></a>
<a id="trace-32796"></a>
<a id="trace-32798"></a>
<a id="trace-32812"></a>
<a id="trace-32814"></a>
<a id="trace-32831"></a>
<a id="trace-32833"></a>
<a id="trace-32846"></a>
<a id="trace-32848"></a>
<a id="trace-32864"></a>
<a id="trace-32866"></a>
<a id="trace-32874"></a>
<a id="trace-32876"></a>
<a id="trace-32893"></a>
<a id="trace-32895"></a>
<a id="trace-32908"></a>
<a id="trace-32910"></a>
<a id="trace-32989"></a>
<a id="trace-32991"></a>
- 90.75s–100.25s (×40), actor 5, squad 0 (trace 32535): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 30673. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4247078994920742, 'next_transition': 32558}.
<a id="trace-33012"></a>
- 100.85s–100.85s (×1), actor 4, squad 0 (trace 33012): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 32921. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3314275123696821, 'next_transition': 33157}.
<a id="trace-33013"></a>
- 100.85s–100.85s (×1), actor 4, squad 0 (trace 33013): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 100.00s, trace 32921. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3314275123696821, 'next_transition': 33157}.
<a id="trace-33157"></a>
<a id="trace-33159"></a>
<a id="trace-33193"></a>
<a id="trace-33195"></a>
- 101.25s–102.25s (×4), actor 5, squad 0 (trace 33157): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 32922. Next observer evidence: {'until': 102.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3314275123696821, 'next_transition': 33193}.
<a id="trace-33220"></a>
- 102.95s–102.95s (×1), actor 9, squad 1 (trace 33220): NeedSupport. Knowledge: actor memory at 100.00s, trace 32924. Next observer evidence: {'until': 107.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.14886399598291053, 'next_transition': 1811}.
<a id="trace-33254"></a>
- 104.15s–104.15s (×1), actor 4, squad 0 (trace 33254): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 32921. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1200645887179899, 'next_transition': 35132}.
<a id="trace-33255"></a>
- 104.15s–104.15s (×1), actor 4, squad 0 (trace 33255): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 100.00s, trace 32921. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1200645887179899, 'next_transition': 35132}.
<a id="trace-35132"></a>
<a id="trace-35134"></a>
<a id="trace-35156"></a>
<a id="trace-35158"></a>
- 106.25s–107.25s (×4), actor 4, squad 0 (trace 35132): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 105.00s, trace 35039. Next observer evidence: {'until': 107.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35156}.
<a id="trace-1810"></a>
- 107.85s–107.85s (×1), actor 4, squad 0 (events line 1810): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35188}.
<a id="trace-1811"></a>
- 107.85s–107.85s (×1), actor 4, squad 1 (events line 1811): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 137.8, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.06262902362323772, 'next_transition': None}.
<a id="trace-35175"></a>
- 107.85s–107.85s (×1), actor 4, squad 0 (trace 35175): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.203718 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 107.85s, trace 35175. Next observer evidence: {'until': 108.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35188}.
<a id="trace-35176"></a>
- 107.85s–107.85s (×1), actor 4, squad 0 (trace 35176): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.203718 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 107.85s, trace 35176. Next observer evidence: {'until': 108.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35188}.
<a id="trace-35177"></a>
- 107.85s–107.85s (×1), actor 4, squad 1 (trace 35177): renew committed intent (75 s lifetime). Knowledge: actor memory at 107.85s, trace 35177. Next observer evidence: {'until': 137.8, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.06262902362323772, 'next_transition': None}.
<a id="trace-35188"></a>
<a id="trace-35190"></a>
<a id="trace-35209"></a>
<a id="trace-35211"></a>
<a id="trace-35241"></a>
<a id="trace-35286"></a>
- 108.25s–110.25s (×6), actor 4, squad 0 (trace 35188): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 107.85s, trace 35177. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35209}.
<a id="trace-35293"></a>
- 110.30s–110.30s (×1), actor 4, squad 0 (trace 35293): Withdraw to received rally. Knowledge: actor memory at 110.00s, trace 35225. Next observer evidence: {'until': 110.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13526678601933348, 'next_transition': 35427}.
<a id="trace-35294"></a>
- 110.30s–110.30s (×1), actor 4, squad 0 (trace 35294): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 35225. Next observer evidence: {'until': 110.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13526678601933348, 'next_transition': 35427}.
<a id="trace-35427"></a>
<a id="trace-35437"></a>
<a id="trace-35445"></a>
<a id="trace-35459"></a>
<a id="trace-35471"></a>
<a id="trace-35474"></a>
<a id="trace-35476"></a>
<a id="trace-35488"></a>
<a id="trace-35501"></a>
<a id="trace-35505"></a>
<a id="trace-35507"></a>
<a id="trace-35519"></a>
<a id="trace-35534"></a>
<a id="trace-35536"></a>
<a id="trace-35573"></a>
<a id="trace-35618"></a>
<a id="trace-35620"></a>
- 110.55s–115.25s (×17), actor 4, squad 0 (trace 35427): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=4. Knowledge: actor memory at 110.00s, trace 35225. Next observer evidence: {'until': 111, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5583243563556937, 'next_transition': 35437}.
<a id="trace-35684"></a>
- 118.55s–118.55s (×1), actor 7, squad 0 (trace 35684): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 115.00s, trace 35558. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35691}.
<a id="trace-35685"></a>
- 118.55s–118.55s (×1), actor 7, squad 0 (trace 35685): NeedSupport. Knowledge: actor memory at 115.00s, trace 35558. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35691}.
<a id="trace-35691"></a>
- 118.60s–118.60s (×1), actor 7, squad 0 (trace 35691): Reorganise: completed/failed drill. Knowledge: actor memory at 115.00s, trace 35558. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874869693525108, 'next_transition': 35771}.
<a id="trace-35693"></a>
- 118.60s–118.60s (×1), actor 7, squad 0 (trace 35693): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 35558. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874869693525108, 'next_transition': 35771}.
<a id="trace-35694"></a>
- 118.60s–118.60s (×1), actor 7, squad 0 (trace 35694): Reorganise complete: known contact. Knowledge: actor memory at 115.00s, trace 35558. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874869693525108, 'next_transition': 35771}.
<a id="trace-35771"></a>
<a id="trace-35773"></a>
<a id="trace-35861"></a>
- 119.25s–120.25s (×3), actor 7, squad 0 (trace 35771): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 115.00s, trace 35558. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1500382173713373, 'next_transition': 35861}.
<a id="trace-1876"></a>
- 120.90s–120.90s (×1), actor 7, squad 0 (events line 1876): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0396934644403617, 'next_transition': 35889}.
<a id="trace-35881"></a>
- 120.90s–120.90s (×1), actor 7, squad 0 (trace 35881): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.790770 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 120.90s, trace 35881. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0396934644403617, 'next_transition': 35889}.
<a id="trace-35882"></a>
- 120.90s–120.90s (×1), actor 7, squad 0 (trace 35882): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.790770 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 120.90s, trace 35882. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0396934644403617, 'next_transition': 35889}.
<a id="trace-35889"></a>
- 121.25s–121.25s (×1), actor 7, squad 0 (trace 35889): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 120.90s, trace 35882. Next observer evidence: {'until': 121.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1455791244606373, 'next_transition': 35905}.
<a id="trace-35905"></a>
- 121.95s–121.95s (×1), actor 7, squad 0 (trace 35905): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 120.90s, trace 35882. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35912}.
<a id="trace-35912"></a>
- 122.25s–122.25s (×1), actor 7, squad 0 (trace 35912): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 120.90s, trace 35882. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35923}.
<a id="trace-35923"></a>
- 122.60s–122.60s (×1), actor 7, squad 0 (trace 35923): received platoon directive; retain contact cover stage. Knowledge: actor memory at 120.90s, trace 35882. Next observer evidence: None.
<a id="trace-35924"></a>
- 122.65s–122.65s (×1), actor 7, squad 0 (trace 35924): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 120.90s, trace 35882. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35929}.
<a id="trace-35929"></a>
- 122.80s–122.80s (×1), actor 7, squad 0 (trace 35929): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 122.80s, trace 35929. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9263221957828705, 'next_transition': 36004}.
<a id="trace-35930"></a>
- 122.80s–122.80s (×1), actor 7, squad 0 (trace 35930): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 122.80s, trace 35929. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9263221957828705, 'next_transition': 36004}.
<a id="trace-35931"></a>
- 122.80s–122.80s (×1), actor 7, squad 0 (trace 35931): rearward bound: one stationary suppressing element. Knowledge: actor memory at 122.80s, trace 35929. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9263221957828705, 'next_transition': 36004}.
<a id="trace-36004"></a>
<a id="trace-36026"></a>
<a id="trace-36101"></a>
<a id="trace-36121"></a>
<a id="trace-36137"></a>
<a id="trace-36163"></a>
<a id="trace-36186"></a>
<a id="trace-36260"></a>
<a id="trace-36280"></a>
<a id="trace-36295"></a>
<a id="trace-36312"></a>
<a id="trace-36333"></a>
<a id="trace-36409"></a>
<a id="trace-36428"></a>
<a id="trace-36447"></a>
<a id="trace-36463"></a>
<a id="trace-36477"></a>
<a id="trace-36548"></a>
<a id="trace-36576"></a>
<a id="trace-36602"></a>
<a id="trace-36623"></a>
<a id="trace-36641"></a>
<a id="trace-36713"></a>
<a id="trace-36734"></a>
<a id="trace-36758"></a>
<a id="trace-36781"></a>
<a id="trace-36795"></a>
<a id="trace-36870"></a>
<a id="trace-36889"></a>
<a id="trace-36906"></a>
<a id="trace-36929"></a>
<a id="trace-36951"></a>
<a id="trace-37027"></a>
<a id="trace-37054"></a>
<a id="trace-37068"></a>
<a id="trace-37089"></a>
<a id="trace-37107"></a>
<a id="trace-37184"></a>
<a id="trace-37214"></a>
<a id="trace-37237"></a>
- 123.25s–162.30s (×40), actor 7, squad 0 (trace 36004): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 122.80s, trace 35929. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6960730251920412, 'next_transition': 36026}.

## Net delivery

245 matched order/radio deliveries; 216 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.485s; maximum 2.000s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 1915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 1916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 1927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 1928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2688: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2700: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2701: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2710: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2711: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 4310: estimate 4.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 4311: estimate 4.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 4312: estimate 4.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 4313: estimate 4.43; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5034: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5039: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5040: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5042: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 5044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 5045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5046: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5047: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5050: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5051: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5052: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5054: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5055: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 5056: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 5057: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6947: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6948: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6949: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6951: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6952: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6953: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6954: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 6955: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6956: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 6957: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 6958: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6959: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6960: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6961: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6962: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6963: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6964: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6965: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6967: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6968: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 6969: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 6970: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 11957: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 11958: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 11959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 11960: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 11961: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 11962: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 11963: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 11964: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 11965: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 11966: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 11967: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 11968: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 11969: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 11970: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 11971: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 11972: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 11973: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 11974: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 11975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 11976: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 11977: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 11978: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 11979: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 12684: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 12685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 12686: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 12687: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 12688: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 12689: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 12690: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 12691: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 12692: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 12693: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 12694: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 12695: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 12696: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 12697: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 12698: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 12699: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 12700: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 12701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 12702: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 12703: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 12704: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 12705: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.35s leader 5, trace 15942: estimate 13.54; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 43.35s leader 5, trace 15943: estimate 13.54; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 16019: estimate 13.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 16020: estimate 13.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 16043: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 16044: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 16045: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 16046: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 16047: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 16048: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 16049: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 16050: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 16051: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 16052: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 16053: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 16054: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 16055: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 16056: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 16057: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 16058: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 16059: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 16060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 16061: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 16062: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 16063: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 16064: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 22344: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 22345: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 22346: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 22347: estimate 14.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 22348: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 22349: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 22350: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 22351: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 22352: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 22353: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 22354: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 22355: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 22356: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 22357: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 22358: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 22359: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 22360: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 22361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 22362: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 22363: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 22364: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 22365: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 25733: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 25734: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 25735: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 25736: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 25737: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 25738: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 25739: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 25740: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 25741: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 25742: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 25743: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 25744: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 25745: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 25746: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 25747: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 25748: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 25749: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 25750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 25751: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 25752: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 25753: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 25754: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 28666: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 28667: estimate 15.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 28668: estimate 15.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 28669: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 28670: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 28671: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 28672: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 28673: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 28674: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 28675: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 28676: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 28677: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 28678: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 28679: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 28680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 28681: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 28682: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 28683: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 28684: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.05s leader 5, trace 28686: estimate 15.61; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 29116: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 29117: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 29118: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 29119: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 29120: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 29121: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 29122: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 29123: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 29124: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 29125: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 29126: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 29127: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 29128: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 29129: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 29130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 29131: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 29132: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 29133: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 29362: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 29363: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 29364: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 29365: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 29366: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 29367: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 29368: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 29369: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 29370: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 29371: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 29372: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 29373: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 29374: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 29375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 29376: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 29377: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 29378: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 29733: estimate 14.76; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 29734: estimate 14.76; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 29941: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 29942: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 29943: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 29944: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 29945: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 29946: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 29947: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 29948: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 29949: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 29950: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 29951: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 29952: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 29953: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 29954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 29955: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 29956: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 29957: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 30171: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 30172: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 30173: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 30174: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 30175: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 30176: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 30177: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 30178: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 30179: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 30180: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 30181: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 30182: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 30183: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 30184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 30185: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 30186: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 30187: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 30431: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 30432: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 30433: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 30434: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 30435: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 30436: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 30437: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 30438: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 30439: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 30440: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 30441: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 30442: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 30443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 30444: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 30445: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 30446: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 30672: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 30673: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 30674: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 30675: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 30676: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 30677: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 30678: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 30679: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 30680: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 30681: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 30682: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 30683: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 30684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 30685: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 30686: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 30687: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 32701: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 32702: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 32703: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 32704: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 32705: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 32706: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 32707: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 32708: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 32709: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 32710: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 32711: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 32712: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 32713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 32714: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 32715: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 32716: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 32921: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 32922: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 32923: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 32924: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 32925: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 32926: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 32927: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 32928: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 32929: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 32930: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 32931: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 32932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 32933: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 32934: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 32935: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 35039: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 35040: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 35041: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 35042: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 35043: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 35044: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 35045: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 35046: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 35047: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 35048: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 35049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 35050: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 35051: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 35052: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.85s leader 4, trace 35175: estimate 14.73; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.85s leader 4, trace 35176: estimate 14.73; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.85s leader 4, trace 35177: estimate 14.73; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 35225: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 35226: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 35227: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 35228: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 35229: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 35230: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 35231: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 35232: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 35233: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 35234: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 35235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 35236: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 35237: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 35238: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 35557: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 35558: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 35559: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 35560: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 35561: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 35562: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 35563: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 35564: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 35565: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 35566: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 35567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 35568: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 35569: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 35570: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 35802: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 35803: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 35804: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 35805: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 35806: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 35807: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 35808: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 35809: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 35810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 35811: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 35812: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 35813: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.90s leader 7, trace 35881: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.90s leader 7, trace 35882: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 7, trace 35929: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 36046: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 36047: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 36048: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 36049: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 36050: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 36051: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 36052: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 36053: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 36054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 36055: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 36056: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 36057: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 36206: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 36207: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 36208: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 36209: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 36210: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 36211: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 36212: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 36213: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 36214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 36215: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 36216: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 36217: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 36351: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 36352: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 36353: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 36354: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 36355: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 36356: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 36357: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 36358: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 36359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 36360: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 36361: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 36362: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 36492: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 36493: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 36494: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 36495: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 36496: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 36497: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 36498: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 36499: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 36500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 36501: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 36502: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 36503: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 36656: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 36657: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 36658: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 36659: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 36660: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 36661: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 36662: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 36663: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 36664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 36665: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 36666: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 36667: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 36816: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 36817: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 36818: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 36819: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 36820: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 36821: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 36822: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 36823: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 36824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 36825: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 36826: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 36827: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 36973: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 36974: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 36975: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 36976: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 36977: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 36978: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 36979: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 36980: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 36981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 36982: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 36983: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 36984: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 37126: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 37127: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 37128: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 37129: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 37130: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 37131: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 37132: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 37133: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 37134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 37135: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 37136: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 37137: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Rook incapacitated
- 1: Dane incapacitated
- 1: Ash incapacitated
- 1: Soren killed in action
- 1: Seth incapacitated
- 1: Bren killed in action
- 1: Ellis incapacitated
- 1: Moss incapacitated
- 1: Iven incapacitated
- 1: Tern killed in action
- 1: Cole incapacitated
- 1: Reed killed in action

## Outcome attribution

- 107.85s, evidence 1810: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 108.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35188}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 107.85s, evidence 35175: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.203718 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 108.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35188}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 107.85s, evidence 35176: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.203718 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 108.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35188}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
