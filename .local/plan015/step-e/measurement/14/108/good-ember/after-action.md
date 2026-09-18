# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/14/108/good-ember/battle-108-1789673948098405877`

## Battle summary

**Draw** · 360 s · 556 shots.

### Turning points

- 26.4s, squad 4: contact (events line 305). First recorded contact.
- 52.5s, squad 0: help call ([trace 9856](#trace-9856)). No completion observed before termination.
- 79.8s, squad 0: withdrawal ([trace 12570](#trace-12570)). 123.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 237.9s, squad 0: withdrawal ([trace 19142](#trace-19142)). 278.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 255.8s, squad 0: help call ([trace 20558](#trace-20558)). No completion observed before termination.
- 327.3s, squad 0: help call ([trace 23501](#trace-23501)). No completion observed before termination.
- 331.5s, squad 0: withdrawal ([trace 23781](#trace-23781)). 358.9s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 109 shots, 5/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 447 shots, 5/8 lost.

### Decisions and attribution

At 249.4s, squad 0 chose FightHere: nearest known group ([trace 20202](#trace-20202)), followed by 2 shots and 0 own casualties; estimate 5.2 against 0 distinct squad-reported contacts; At 41.4s, squad 0 chose FightHere: nearest known group ([trace 3992](#trace-3992)), followed by 1 shots and 0 own casualties; estimate 10.1 against 0 distinct squad-reported contacts; At 45.5s, squad 0 chose prepared a base of fire ([trace 4203](#trace-4203)), followed by 1 shots and 0 own casualties; estimate 9.9 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1358](#trace-1358)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.845019769596115, 'next_transition': 1387}.
- 41.4s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.290502 retreat threshold=0.220000 initiative=requires intent ([trace 3991](#trace-3991)). Following evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06963312286343243, 'next_transition': 4016}.

### Communication

258 matched deliveries (mean 0.34s, max 5.25s); 250 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 26.45s, squad 4, contact, evidence events line 305: First recorded contact; .
- 52.55s, squad 0, help call, evidence 9856: NeedSupport; No completion observed before termination.
- 79.85s, squad 0, withdrawal, evidence 12570: BreakContact: believed ratio at least two without superiority; 123.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 237.95s, squad 0, withdrawal, evidence 19142: BreakContact: believed ratio at least two without superiority; 278.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 255.75s, squad 0, help call, evidence 20558: NeedSupport; No completion observed before termination.
- 327.30s, squad 0, help call, evidence 23501: NeedSupport; No completion observed before termination.
- 331.45s, squad 0, withdrawal, evidence 23781: BreakContact: believed ratio at least two without superiority; 358.9s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.922556537320201, 'next_transition': 788}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.922556537320201, 'next_transition': 788}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.922556537320201, 'next_transition': 788}.
<a id="trace-451"></a>
<a id="trace-472"></a>
<a id="trace-494"></a>
<a id="trace-515"></a>
<a id="trace-529"></a>
<a id="trace-548"></a>
<a id="trace-569"></a>
<a id="trace-648"></a>
<a id="trace-665"></a>
<a id="trace-689"></a>
<a id="trace-710"></a>
<a id="trace-727"></a>
<a id="trace-745"></a>
<a id="trace-767"></a>
<a id="trace-790"></a>
<a id="trace-803"></a>
<a id="trace-813"></a>
<a id="trace-897"></a>
<a id="trace-908"></a>
<a id="trace-1234"></a>
<a id="trace-1255"></a>
<a id="trace-1284"></a>
<a id="trace-1308"></a>
<a id="trace-1331"></a>
<a id="trace-1357"></a>
<a id="trace-1389"></a>
<a id="trace-1413"></a>
<a id="trace-1492"></a>
<a id="trace-1512"></a>
<a id="trace-1535"></a>
<a id="trace-1561"></a>
<a id="trace-1578"></a>
<a id="trace-1597"></a>
<a id="trace-1621"></a>
<a id="trace-1639"></a>
<a id="trace-1838"></a>
<a id="trace-1859"></a>
<a id="trace-1950"></a>
<a id="trace-1989"></a>
<a id="trace-2003"></a>
<a id="trace-2037"></a>
<a id="trace-2065"></a>
<a id="trace-2078"></a>
<a id="trace-2098"></a>
<a id="trace-2114"></a>
<a id="trace-2128"></a>
<a id="trace-2146"></a>
<a id="trace-2359"></a>
<a id="trace-2375"></a>
<a id="trace-2399"></a>
<a id="trace-2410"></a>
<a id="trace-2435"></a>
<a id="trace-2455"></a>
<a id="trace-2475"></a>
<a id="trace-2491"></a>
<a id="trace-2504"></a>
<a id="trace-2755"></a>
<a id="trace-2845"></a>
<a id="trace-2868"></a>
<a id="trace-2897"></a>
<a id="trace-2909"></a>
<a id="trace-2933"></a>
<a id="trace-2953"></a>
<a id="trace-2979"></a>
<a id="trace-3007"></a>
<a id="trace-3042"></a>
<a id="trace-3077"></a>
<a id="trace-3167"></a>
<a id="trace-3204"></a>
<a id="trace-3241"></a>
<a id="trace-3268"></a>
<a id="trace-3529"></a>
<a id="trace-3549"></a>
<a id="trace-3592"></a>
<a id="trace-3642"></a>
<a id="trace-3681"></a>
<a id="trace-3734"></a>
<a id="trace-3861"></a>
<a id="trace-3919"></a>
<a id="trace-3980"></a>
<a id="trace-4018"></a>
<a id="trace-4044"></a>
<a id="trace-4070"></a>
<a id="trace-4094"></a>
<a id="trace-4107"></a>
<a id="trace-4118"></a>
<a id="trace-4128"></a>
<a id="trace-4201"></a>
<a id="trace-6911"></a>
<a id="trace-6927"></a>
<a id="trace-6953"></a>
<a id="trace-6968"></a>
<a id="trace-7216"></a>
<a id="trace-7263"></a>
<a id="trace-7295"></a>
<a id="trace-7315"></a>
<a id="trace-7336"></a>
<a id="trace-7442"></a>
<a id="trace-7460"></a>
<a id="trace-7473"></a>
<a id="trace-9822"></a>
<a id="trace-9842"></a>
<a id="trace-9878"></a>
<a id="trace-9925"></a>
<a id="trace-9951"></a>
<a id="trace-9994"></a>
<a id="trace-10069"></a>
<a id="trace-10192"></a>
<a id="trace-10236"></a>
<a id="trace-10277"></a>
<a id="trace-10300"></a>
<a id="trace-10323"></a>
<a id="trace-10338"></a>
<a id="trace-10356"></a>
<a id="trace-10365"></a>
<a id="trace-10377"></a>
<a id="trace-10385"></a>
<a id="trace-10801"></a>
<a id="trace-10820"></a>
<a id="trace-10842"></a>
<a id="trace-10851"></a>
<a id="trace-10870"></a>
<a id="trace-10890"></a>
<a id="trace-10900"></a>
<a id="trace-10907"></a>
<a id="trace-10920"></a>
<a id="trace-10931"></a>
<a id="trace-11005"></a>
<a id="trace-11421"></a>
<a id="trace-11442"></a>
<a id="trace-11453"></a>
<a id="trace-11469"></a>
<a id="trace-11496"></a>
<a id="trace-11504"></a>
<a id="trace-11516"></a>
<a id="trace-11526"></a>
<a id="trace-11611"></a>
<a id="trace-11623"></a>
<a id="trace-11634"></a>
<a id="trace-11698"></a>
<a id="trace-11714"></a>
<a id="trace-11726"></a>
<a id="trace-11740"></a>
<a id="trace-11747"></a>
<a id="trace-11763"></a>
<a id="trace-11794"></a>
<a id="trace-11875"></a>
<a id="trace-11944"></a>
<a id="trace-12364"></a>
<a id="trace-12400"></a>
<a id="trace-12441"></a>
<a id="trace-12468"></a>
<a id="trace-12511"></a>
<a id="trace-12533"></a>
<a id="trace-12553"></a>
<a id="trace-12566"></a>
<a id="trace-12965"></a>
<a id="trace-12979"></a>
<a id="trace-13007"></a>
<a id="trace-13021"></a>
<a id="trace-13048"></a>
<a id="trace-13067"></a>
<a id="trace-13084"></a>
<a id="trace-13095"></a>
<a id="trace-13111"></a>
<a id="trace-13122"></a>
<a id="trace-13204"></a>
<a id="trace-13212"></a>
<a id="trace-13230"></a>
<a id="trace-13258"></a>
<a id="trace-13293"></a>
<a id="trace-13325"></a>
<a id="trace-13366"></a>
<a id="trace-13391"></a>
<a id="trace-13434"></a>
<a id="trace-13469"></a>
<a id="trace-13574"></a>
<a id="trace-13631"></a>
<a id="trace-13694"></a>
<a id="trace-13822"></a>
<a id="trace-13925"></a>
<a id="trace-14022"></a>
<a id="trace-14389"></a>
<a id="trace-14414"></a>
<a id="trace-14490"></a>
<a id="trace-14511"></a>
<a id="trace-14533"></a>
<a id="trace-14548"></a>
<a id="trace-14567"></a>
<a id="trace-14645"></a>
<a id="trace-14664"></a>
<a id="trace-14681"></a>
<a id="trace-14701"></a>
<a id="trace-14721"></a>
<a id="trace-14795"></a>
<a id="trace-14810"></a>
<a id="trace-14893"></a>
<a id="trace-14921"></a>
<a id="trace-14943"></a>
<a id="trace-15021"></a>
<a id="trace-15039"></a>
<a id="trace-15060"></a>
<a id="trace-15085"></a>
<a id="trace-15100"></a>
<a id="trace-15175"></a>
<a id="trace-15200"></a>
<a id="trace-15223"></a>
<a id="trace-15241"></a>
<a id="trace-15263"></a>
<a id="trace-15351"></a>
<a id="trace-15374"></a>
<a id="trace-15396"></a>
<a id="trace-15413"></a>
<a id="trace-15425"></a>
<a id="trace-15497"></a>
<a id="trace-15509"></a>
<a id="trace-15521"></a>
<a id="trace-15534"></a>
<a id="trace-15548"></a>
<a id="trace-15624"></a>
<a id="trace-15637"></a>
<a id="trace-15647"></a>
<a id="trace-15658"></a>
<a id="trace-15673"></a>
<a id="trace-15747"></a>
<a id="trace-15768"></a>
<a id="trace-15779"></a>
<a id="trace-15788"></a>
<a id="trace-15801"></a>
<a id="trace-15873"></a>
<a id="trace-15888"></a>
<a id="trace-15902"></a>
<a id="trace-15916"></a>
<a id="trace-15927"></a>
<a id="trace-15999"></a>
<a id="trace-16014"></a>
<a id="trace-16024"></a>
<a id="trace-16037"></a>
<a id="trace-16055"></a>
<a id="trace-16126"></a>
<a id="trace-16141"></a>
<a id="trace-16153"></a>
<a id="trace-16163"></a>
<a id="trace-16178"></a>
<a id="trace-16252"></a>
<a id="trace-16269"></a>
<a id="trace-16280"></a>
<a id="trace-16292"></a>
<a id="trace-16303"></a>
<a id="trace-16375"></a>
<a id="trace-16391"></a>
<a id="trace-16401"></a>
<a id="trace-16417"></a>
<a id="trace-16430"></a>
<a id="trace-16501"></a>
<a id="trace-16516"></a>
<a id="trace-16526"></a>
<a id="trace-16538"></a>
<a id="trace-16556"></a>
<a id="trace-16629"></a>
<a id="trace-16643"></a>
<a id="trace-16655"></a>
<a id="trace-16665"></a>
<a id="trace-16677"></a>
<a id="trace-16752"></a>
<a id="trace-16771"></a>
<a id="trace-16782"></a>
<a id="trace-16794"></a>
<a id="trace-16806"></a>
<a id="trace-16877"></a>
<a id="trace-16894"></a>
<a id="trace-16912"></a>
<a id="trace-16922"></a>
<a id="trace-16935"></a>
<a id="trace-17007"></a>
<a id="trace-17020"></a>
<a id="trace-17034"></a>
<a id="trace-17048"></a>
<a id="trace-17064"></a>
<a id="trace-17137"></a>
<a id="trace-17151"></a>
<a id="trace-17161"></a>
<a id="trace-17171"></a>
<a id="trace-17186"></a>
<a id="trace-17260"></a>
<a id="trace-17278"></a>
<a id="trace-17289"></a>
<a id="trace-17299"></a>
<a id="trace-17312"></a>
<a id="trace-17384"></a>
<a id="trace-17400"></a>
<a id="trace-17418"></a>
<a id="trace-17432"></a>
<a id="trace-17442"></a>
<a id="trace-17514"></a>
<a id="trace-17529"></a>
<a id="trace-17542"></a>
<a id="trace-17556"></a>
<a id="trace-17723"></a>
<a id="trace-17805"></a>
<a id="trace-17829"></a>
<a id="trace-17858"></a>
<a id="trace-17881"></a>
<a id="trace-17903"></a>
<a id="trace-17991"></a>
<a id="trace-18014"></a>
<a id="trace-18035"></a>
<a id="trace-18054"></a>
<a id="trace-18075"></a>
<a id="trace-18166"></a>
<a id="trace-18188"></a>
<a id="trace-18459"></a>
<a id="trace-18486"></a>
<a id="trace-18516"></a>
<a id="trace-18603"></a>
<a id="trace-18621"></a>
<a id="trace-18645"></a>
<a id="trace-18668"></a>
<a id="trace-19002"></a>
<a id="trace-19083"></a>
<a id="trace-19104"></a>
<a id="trace-19130"></a>
<a id="trace-19407"></a>
<a id="trace-19429"></a>
<a id="trace-19508"></a>
<a id="trace-19568"></a>
<a id="trace-19654"></a>
<a id="trace-19736"></a>
<a id="trace-19802"></a>
<a id="trace-19944"></a>
<a id="trace-20019"></a>
<a id="trace-20079"></a>
<a id="trace-20154"></a>
<a id="trace-20196"></a>
<a id="trace-20391"></a>
<a id="trace-20413"></a>
<a id="trace-20434"></a>
<a id="trace-20462"></a>
<a id="trace-20481"></a>
<a id="trace-20552"></a>
<a id="trace-20576"></a>
<a id="trace-20596"></a>
<a id="trace-20615"></a>
<a id="trace-20633"></a>
<a id="trace-20708"></a>
<a id="trace-20728"></a>
<a id="trace-20745"></a>
<a id="trace-20762"></a>
<a id="trace-20783"></a>
<a id="trace-20860"></a>
<a id="trace-20877"></a>
<a id="trace-21024"></a>
<a id="trace-21047"></a>
<a id="trace-21074"></a>
<a id="trace-21157"></a>
<a id="trace-21168"></a>
<a id="trace-21183"></a>
<a id="trace-21204"></a>
<a id="trace-21230"></a>
<a id="trace-21299"></a>
<a id="trace-21318"></a>
<a id="trace-21336"></a>
<a id="trace-21360"></a>
<a id="trace-21386"></a>
<a id="trace-21468"></a>
<a id="trace-21492"></a>
<a id="trace-21510"></a>
<a id="trace-21521"></a>
<a id="trace-21624"></a>
<a id="trace-21708"></a>
<a id="trace-21733"></a>
<a id="trace-21747"></a>
<a id="trace-21765"></a>
<a id="trace-21787"></a>
<a id="trace-21865"></a>
<a id="trace-21878"></a>
<a id="trace-21895"></a>
<a id="trace-21915"></a>
<a id="trace-21940"></a>
<a id="trace-22066"></a>
<a id="trace-22084"></a>
<a id="trace-22103"></a>
<a id="trace-22121"></a>
<a id="trace-22135"></a>
<a id="trace-22212"></a>
<a id="trace-22232"></a>
<a id="trace-22248"></a>
<a id="trace-22265"></a>
<a id="trace-22286"></a>
<a id="trace-22360"></a>
<a id="trace-22490"></a>
<a id="trace-22507"></a>
<a id="trace-22530"></a>
<a id="trace-22549"></a>
<a id="trace-22619"></a>
<a id="trace-22634"></a>
<a id="trace-22650"></a>
<a id="trace-22671"></a>
<a id="trace-22685"></a>
<a id="trace-22931"></a>
<a id="trace-22944"></a>
<a id="trace-22962"></a>
<a id="trace-22981"></a>
<a id="trace-22997"></a>
<a id="trace-23074"></a>
<a id="trace-23094"></a>
<a id="trace-23117"></a>
<a id="trace-23135"></a>
<a id="trace-23159"></a>
<a id="trace-23241"></a>
<a id="trace-23261"></a>
<a id="trace-23496"></a>
<a id="trace-23638"></a>
<a id="trace-23672"></a>
<a id="trace-23751"></a>
<a id="trace-23774"></a>
<a id="trace-23952"></a>
<a id="trace-23999"></a>
<a id="trace-24059"></a>
<a id="trace-24188"></a>
<a id="trace-24245"></a>
<a id="trace-24298"></a>
<a id="trace-24323"></a>
<a id="trace-24354"></a>
<a id="trace-24424"></a>
<a id="trace-24441"></a>
<a id="trace-24457"></a>
<a id="trace-24468"></a>
<a id="trace-24490"></a>
<a id="trace-24560"></a>
<a id="trace-24577"></a>
<a id="trace-24586"></a>
<a id="trace-24597"></a>
<a id="trace-24609"></a>
<a id="trace-24677"></a>
<a id="trace-24689"></a>
<a id="trace-24701"></a>
<a id="trace-24714"></a>
<a id="trace-24728"></a>
<a id="trace-24799"></a>
<a id="trace-24811"></a>
<a id="trace-24821"></a>
<a id="trace-24836"></a>
<a id="trace-24854"></a>
- 1.60s–359.30s (×444), actor 37, squad 4 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249916668197334, 'next_transition': 472}.
<a id="trace-788"></a>
<a id="trace-801"></a>
<a id="trace-811"></a>
<a id="trace-895"></a>
<a id="trace-906"></a>
- 8.70s–10.70s (×5), actor 5, squad 0 (trace 788): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 583. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7574999486961818, 'next_transition': 801}.
<a id="trace-916"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 916): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 818. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37874811178187695, 'next_transition': 1232}.
<a id="trace-1232"></a>
<a id="trace-1329"></a>
- 11.20s–13.20s (×2), actor 5, squad 0 (trace 1232): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 823. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.466304481842693, 'next_transition': 1329}.
<a id="trace-171"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 171): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.845019769596115, 'next_transition': 1387}.
<a id="trace-1358"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1358): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1358. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.845019769596115, 'next_transition': 1387}.
<a id="trace-1359"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1359): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1359. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.845019769596115, 'next_transition': 1387}.
<a id="trace-1387"></a>
<a id="trace-1411"></a>
<a id="trace-1490"></a>
<a id="trace-1510"></a>
<a id="trace-1533"></a>
<a id="trace-1559"></a>
<a id="trace-1576"></a>
<a id="trace-1595"></a>
<a id="trace-1637"></a>
- 14.20s–18.75s (×9), actor 5, squad 0 (trace 1387): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 1359. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0331234578243493, 'next_transition': 1411}.
<a id="trace-1645"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1645): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1417. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2945606155130642, 'next_transition': 1836}.
<a id="trace-1646"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1646): received platoon directive. Knowledge: actor memory at 15.00s, trace 1417. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2945606155130642, 'next_transition': 1836}.
<a id="trace-1836"></a>
<a id="trace-1857"></a>
<a id="trace-1948"></a>
<a id="trace-1987"></a>
<a id="trace-2035"></a>
<a id="trace-2096"></a>
<a id="trace-2126"></a>
<a id="trace-2144"></a>
- 19.25s–24.75s (×8), actor 5, squad 0 (trace 1836): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1422. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4424964309336319, 'next_transition': 1857}.
<a id="trace-2148"></a>
- 24.80s–24.80s (×1), actor 0, squad 0 (trace 2148): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1867. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23535456700861304, 'next_transition': 2357}.
<a id="trace-2357"></a>
<a id="trace-2373"></a>
<a id="trace-2433"></a>
<a id="trace-2473"></a>
- 25.25s–28.25s (×4), actor 5, squad 0 (trace 2357): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2291. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362508616209894, 'next_transition': 2373}.
<a id="trace-2520"></a>
- 29.55s–29.55s (×1), actor 0, squad 0 (trace 2520): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2286. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06374876832143528, 'next_transition': 2753}.
<a id="trace-2521"></a>
- 29.55s–29.55s (×1), actor 0, squad 0 (trace 2521): bounding overwatch. Knowledge: actor memory at 25.00s, trace 2286. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06374876832143528, 'next_transition': 2753}.
<a id="trace-2522"></a>
- 29.55s–29.55s (×1), actor 0, squad 0 (trace 2522): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2286. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06374876832143528, 'next_transition': 2753}.
<a id="trace-2753"></a>
<a id="trace-2843"></a>
<a id="trace-2866"></a>
<a id="trace-2907"></a>
<a id="trace-2931"></a>
<a id="trace-2977"></a>
- 29.75s–33.25s (×6), actor 5, squad 0 (trace 2753): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2291. Next observer evidence: {'until': 30.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.2095733288587482, 'next_transition': 2843}.
<a id="trace-2980"></a>
- 33.25s–33.25s (×1), actor 0, squad 0 (trace 2980): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 2762. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2076694558734924, 'next_transition': 3005}.
<a id="trace-3005"></a>
<a id="trace-3040"></a>
<a id="trace-3075"></a>
<a id="trace-3165"></a>
<a id="trace-3202"></a>
<a id="trace-3266"></a>
- 33.75s–36.75s (×6), actor 5, squad 0 (trace 3005): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2767. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24555712084256937, 'next_transition': 3040}.
<a id="trace-3277"></a>
- 37.10s–37.10s (×1), actor 0, squad 0 (trace 3277): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 3089. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0003249269341853733, 'next_transition': 3527}.
<a id="trace-3527"></a>
<a id="trace-3590"></a>
<a id="trace-3640"></a>
<a id="trace-3732"></a>
<a id="trace-3859"></a>
<a id="trace-3917"></a>
- 37.25s–40.75s (×6), actor 5, squad 0 (trace 3527): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3094. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14153625353933566, 'next_transition': 3590}.
<a id="trace-3924"></a>
- 40.80s–40.80s (×1), actor 0, squad 0 (trace 3924): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 3754. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12064753536525542, 'next_transition': 3978}.
<a id="trace-3978"></a>
- 41.25s–41.25s (×1), actor 5, squad 0 (trace 3978): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3759. Next observer evidence: None.
<a id="trace-599"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (events line 599): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3991"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 3991): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.290502 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 3991. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06963312286343243, 'next_transition': 4016}.
<a id="trace-3992"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 3992): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.290502 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 3992. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06963312286343243, 'next_transition': 4016}.
<a id="trace-4016"></a>
<a id="trace-4042"></a>
<a id="trace-4068"></a>
<a id="trace-4092"></a>
<a id="trace-4105"></a>
- 41.75s–43.75s (×5), actor 5, squad 0 (trace 4016): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.35s, trace 3992. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12905166262610682, 'next_transition': 4042}.
<a id="trace-4203"></a>
- 45.45s–45.45s (×1), actor 0, squad 0 (trace 4203): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 4131. Next observer evidence: {'until': 45.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.012803227681428605, 'next_transition': 6909}.
<a id="trace-6629"></a>
- 45.45s–45.45s (×1), actor 0, squad 0 (trace 6629): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 4131. Next observer evidence: {'until': 45.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.012803227681428605, 'next_transition': 6909}.
<a id="trace-6630"></a>
- 45.45s–45.45s (×1), actor 0, squad 0 (trace 6630): MoveTactically. Knowledge: actor memory at 45.00s, trace 4131. Next observer evidence: {'until': 45.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.012803227681428605, 'next_transition': 6909}.
<a id="trace-6631"></a>
- 45.45s–45.45s (×1), actor 0, squad 0 (trace 6631): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 4131. Next observer evidence: {'until': 45.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.012803227681428605, 'next_transition': 6909}.
<a id="trace-6909"></a>
<a id="trace-6925"></a>
<a id="trace-6951"></a>
<a id="trace-6966"></a>
- 45.75s–47.25s (×4), actor 5, squad 0 (trace 6909): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4136. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15737514075648984, 'next_transition': 6925}.
<a id="trace-6969"></a>
- 47.25s–47.25s (×1), actor 0, squad 0 (trace 6969): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 4131. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7134001438490897, 'next_transition': 7214}.
<a id="trace-6970"></a>
- 47.25s–47.25s (×1), actor 0, squad 0 (trace 6970): received platoon directive. Knowledge: actor memory at 45.00s, trace 4131. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7134001438490897, 'next_transition': 7214}.
<a id="trace-7214"></a>
<a id="trace-7293"></a>
<a id="trace-7313"></a>
<a id="trace-7334"></a>
<a id="trace-7440"></a>
<a id="trace-7458"></a>
<a id="trace-7471"></a>
- 47.75s–51.25s (×7), actor 5, squad 0 (trace 7214): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4136. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.2567983328511347, 'next_transition': 7293}.
<a id="trace-7476"></a>
- 51.70s–51.70s (×1), actor 0, squad 0 (trace 7476): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 7359. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.037391545835923926, 'next_transition': 9840}.
<a id="trace-7478"></a>
- 51.70s–51.70s (×1), actor 0, squad 0 (trace 7478): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 7359. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.037391545835923926, 'next_transition': 9840}.
<a id="trace-9505"></a>
- 51.70s–51.70s (×1), actor 0, squad 0 (trace 9505): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 7359. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.037391545835923926, 'next_transition': 9840}.
<a id="trace-9506"></a>
- 51.70s–51.70s (×1), actor 0, squad 0 (trace 9506): MoveTactically. Knowledge: actor memory at 50.00s, trace 7359. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.037391545835923926, 'next_transition': 9840}.
<a id="trace-9507"></a>
- 51.70s–51.70s (×1), actor 0, squad 0 (trace 9507): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 7359. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.037391545835923926, 'next_transition': 9840}.
<a id="trace-9840"></a>
- 52.25s–52.25s (×1), actor 5, squad 0 (trace 9840): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7363. Next observer evidence: {'until': 52.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9856}.
<a id="trace-9856"></a>
- 52.55s–52.55s (×1), actor 0, squad 0 (trace 9856): NeedSupport. Knowledge: actor memory at 50.00s, trace 7359. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0003343284465972808, 'next_transition': 9876}.
<a id="trace-9876"></a>
<a id="trace-9923"></a>
<a id="trace-9949"></a>
<a id="trace-9992"></a>
<a id="trace-10067"></a>
<a id="trace-10234"></a>
<a id="trace-10275"></a>
<a id="trace-10298"></a>
<a id="trace-10321"></a>
<a id="trace-10336"></a>
<a id="trace-10354"></a>
<a id="trace-10363"></a>
- 52.75s–58.75s (×12), actor 5, squad 0 (trace 9876): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7363. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9788468982550655, 'next_transition': 9923}.
<a id="trace-10368"></a>
- 59.00s–59.00s (×1), actor 1, squad 0 (trace 10368): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 55.00s, trace 10100. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4000173943510689, 'next_transition': 10375}.
<a id="trace-10375"></a>
<a id="trace-10383"></a>
- 59.25s–59.75s (×2), actor 5, squad 0 (trace 10375): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 10103. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999952320970961, 'next_transition': 10383}.
<a id="trace-10402"></a>
- 60.00s–60.00s (×1), actor 1, squad 0 (trace 10402): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 10389. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3999963679045402, 'next_transition': 10799}.
<a id="trace-10407"></a>
- 60.00s–60.00s (×1), actor 1, squad 0 (trace 10407): MoveTactically. Knowledge: actor memory at 60.00s, trace 10389. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3999963679045402, 'next_transition': 10799}.
<a id="trace-10408"></a>
- 60.00s–60.00s (×1), actor 1, squad 0 (trace 10408): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 60.00s, trace 10389. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3999963679045402, 'next_transition': 10799}.
<a id="trace-10799"></a>
<a id="trace-10818"></a>
<a id="trace-10840"></a>
<a id="trace-10849"></a>
<a id="trace-10868"></a>
<a id="trace-10888"></a>
<a id="trace-10929"></a>
<a id="trace-11003"></a>
- 60.25s–65.25s (×8), actor 5, squad 0 (trace 10799): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 10392. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8262456790301204, 'next_transition': 10818}.
<a id="trace-11007"></a>
- 65.45s–65.45s (×1), actor 1, squad 0 (trace 11007): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 65.00s, trace 10937. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41449544160916196, 'next_transition': 11398}.
<a id="trace-11398"></a>
<a id="trace-11451"></a>
<a id="trace-11467"></a>
<a id="trace-11514"></a>
<a id="trace-11524"></a>
- 65.75s–69.75s (×5), actor 5, squad 0 (trace 11398): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 10940. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.9899938005622992, 'next_transition': 11451}.
<a id="trace-900"></a>
- 69.80s–69.80s (×1), actor 5, squad 0 (events line 900): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11527"></a>
- 69.80s–69.80s (×1), actor 5, squad 0 (trace 11527): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.847021 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 69.80s, trace 11527. Next observer evidence: {'until': 70.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5107648426663174, 'next_transition': 11609}.
<a id="trace-11528"></a>
- 69.80s–69.80s (×1), actor 5, squad 0 (trace 11528): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.847021 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 69.80s, trace 11528. Next observer evidence: {'until': 70.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5107648426663174, 'next_transition': 11609}.
<a id="trace-11609"></a>
<a id="trace-11621"></a>
<a id="trace-11632"></a>
- 70.25s–71.25s (×3), actor 5, squad 0 (trace 11609): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 11535. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2015098790149535, 'next_transition': 11621}.
<a id="trace-11642"></a>
- 71.65s–71.65s (×1), actor 1, squad 0 (trace 11642): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 70.00s, trace 11532. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04834166666666665, 'next_transition': 11712}.
<a id="trace-11712"></a>
<a id="trace-11738"></a>
<a id="trace-11745"></a>
<a id="trace-11761"></a>
<a id="trace-11792"></a>
<a id="trace-11873"></a>
- 72.25s–75.25s (×6), actor 5, squad 0 (trace 11712): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 11535. Next observer evidence: {'until': 73.2, 'shots': 9, 'casualties': 0, 'mean_displacement': 0.971247730653829, 'next_transition': 11738}.
<a id="trace-11884"></a>
- 75.70s–75.70s (×1), actor 1, squad 0 (trace 11884): received platoon directive. Knowledge: actor memory at 75.00s, trace 11808. Next observer evidence: None.
<a id="trace-11942"></a>
- 75.75s–75.75s (×1), actor 5, squad 0 (trace 11942): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 11811. Next observer evidence: {'until': 76.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 0.31538198915768334, 'next_transition': 11981}.
<a id="trace-11981"></a>
- 76.20s–76.20s (×1), actor 1, squad 0 (trace 11981): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 11808. Next observer evidence: None.
<a id="trace-11982"></a>
- 76.20s–76.20s (×1), actor 1, squad 0 (trace 11982): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 75.00s, trace 11808. Next observer evidence: None.
<a id="trace-12362"></a>
<a id="trace-12398"></a>
<a id="trace-12439"></a>
<a id="trace-12466"></a>
<a id="trace-12531"></a>
- 76.25s–78.75s (×5), actor 5, squad 0 (trace 12362): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 11811. Next observer evidence: {'until': 76.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.2029714657909609, 'next_transition': 12398}.
<a id="trace-12570"></a>
- 79.85s–79.85s (×1), actor 1, squad 0 (trace 12570): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 75.00s, trace 11808. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27110967181706874, 'next_transition': 12963}.
<a id="trace-12571"></a>
- 79.85s–79.85s (×1), actor 1, squad 0 (trace 12571): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 11808. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27110967181706874, 'next_transition': 12963}.
<a id="trace-12963"></a>
- 80.25s–80.25s (×1), actor 5, squad 0 (trace 12963): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 12896. Next observer evidence: {'until': 81.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.7792840777674428, 'next_transition': 12997}.
<a id="trace-12997"></a>
- 81.20s–81.20s (×1), actor 1, squad 0 (trace 12997): Fixing. Knowledge: actor memory at 80.00s, trace 12893. Next observer evidence: None.
<a id="trace-13005"></a>
<a id="trace-13046"></a>
<a id="trace-13065"></a>
<a id="trace-13082"></a>
<a id="trace-13093"></a>
<a id="trace-13109"></a>
<a id="trace-13120"></a>
<a id="trace-13202"></a>
<a id="trace-13256"></a>
<a id="trace-13323"></a>
<a id="trace-13364"></a>
<a id="trace-13432"></a>
<a id="trace-13467"></a>
<a id="trace-13572"></a>
<a id="trace-13629"></a>
- 81.25s–90.75s (×15), actor 5, squad 0 (trace 13005): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 12896. Next observer evidence: {'until': 82.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.0837013617527478, 'next_transition': 13046}.
<a id="trace-13632"></a>
- 90.75s–90.75s (×1), actor 1, squad 0 (trace 13632): support established: element delivered fire on threat area. Knowledge: actor memory at 90.00s, trace 13481. Next observer evidence: {'until': 91.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.315911196280938, 'next_transition': 13692}.
<a id="trace-13692"></a>
<a id="trace-13755"></a>
<a id="trace-13824"></a>
<a id="trace-13872"></a>
<a id="trace-13927"></a>
<a id="trace-13984"></a>
<a id="trace-14042"></a>
- 91.25s–94.75s (×7), actor 5, squad 0 (trace 13692): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 13484. Next observer evidence: {'until': 91.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21061601473385314, 'next_transition': 13755}.
<a id="trace-14124"></a>
- 95.25s–95.25s (×1), actor 1, squad 0 (trace 14124): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 14051. Next observer evidence: {'until': 95.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14314}.
<a id="trace-14146"></a>
- 95.25s–95.25s (×1), actor 1, squad 0 (trace 14146): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 14051. Next observer evidence: {'until': 95.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14314}.
<a id="trace-14314"></a>
<a id="trace-14332"></a>
<a id="trace-14347"></a>
<a id="trace-14357"></a>
<a id="trace-14368"></a>
<a id="trace-14391"></a>
<a id="trace-14400"></a>
<a id="trace-14416"></a>
<a id="trace-14513"></a>
<a id="trace-14522"></a>
<a id="trace-14535"></a>
<a id="trace-14540"></a>
<a id="trace-14555"></a>
<a id="trace-14569"></a>
- 95.75s–104.25s (×14), actor 5, squad 0 (trace 14314): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14054. Next observer evidence: {'until': 96.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14332}.
<a id="trace-14572"></a>
- 104.45s–104.45s (×1), actor 1, squad 0 (trace 14572): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 100.00s, trace 14426. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.690554751412411, 'next_transition': 14666}.
<a id="trace-14666"></a>
<a id="trace-14683"></a>
<a id="trace-14688"></a>
<a id="trace-14703"></a>
<a id="trace-14723"></a>
<a id="trace-14727"></a>
<a id="trace-14802"></a>
<a id="trace-14812"></a>
<a id="trace-14816"></a>
- 106.25s–111.75s (×9), actor 5, squad 0 (trace 14666): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 14588. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7289549261501498, 'next_transition': 14683}.
<a id="trace-14819"></a>
- 111.85s–111.85s (×1), actor 1, squad 0 (trace 14819): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 14731. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5354899421633903, 'next_transition': 14905}.
<a id="trace-14832"></a>
- 111.85s–111.85s (×1), actor 1, squad 0 (trace 14832): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 14731. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5354899421633903, 'next_transition': 14905}.
<a id="trace-14905"></a>
<a id="trace-14923"></a>
<a id="trace-14930"></a>
<a id="trace-14945"></a>
<a id="trace-15023"></a>
<a id="trace-15028"></a>
<a id="trace-15041"></a>
<a id="trace-15062"></a>
<a id="trace-15069"></a>
<a id="trace-15087"></a>
<a id="trace-15107"></a>
<a id="trace-15177"></a>
<a id="trace-15187"></a>
<a id="trace-15202"></a>
<a id="trace-15209"></a>
<a id="trace-15225"></a>
<a id="trace-15243"></a>
<a id="trace-15247"></a>
- 112.75s–123.75s (×18), actor 5, squad 0 (trace 14905): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 14733. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.070773943573682, 'next_transition': 14923}.
<a id="trace-15249"></a>
- 123.85s–123.85s (×1), actor 1, squad 0 (trace 15249): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 120.00s, trace 15110. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15265}.
<a id="trace-15265"></a>
<a id="trace-15276"></a>
<a id="trace-15362"></a>
<a id="trace-15376"></a>
<a id="trace-15390"></a>
<a id="trace-15398"></a>
<a id="trace-15403"></a>
<a id="trace-15418"></a>
<a id="trace-15427"></a>
<a id="trace-15432"></a>
<a id="trace-15499"></a>
<a id="trace-15511"></a>
<a id="trace-15517"></a>
<a id="trace-15523"></a>
<a id="trace-15536"></a>
<a id="trace-15540"></a>
<a id="trace-15558"></a>
<a id="trace-15631"></a>
<a id="trace-15639"></a>
<a id="trace-15643"></a>
<a id="trace-15653"></a>
<a id="trace-15660"></a>
<a id="trace-15666"></a>
- 124.25s–138.80s (×23), actor 5, squad 0 (trace 15265): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 15112. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15276}.
<a id="trace-1650"></a>
- 138.95s–138.95s (×1), actor 5, squad 0 (events line 1650): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15675}.
<a id="trace-15667"></a>
- 138.95s–138.95s (×1), actor 5, squad 0 (trace 15667): renew committed intent (75 s lifetime). Knowledge: actor memory at 138.95s, trace 15667. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15675}.
<a id="trace-15675"></a>
<a id="trace-15682"></a>
<a id="trace-15749"></a>
<a id="trace-15757"></a>
<a id="trace-15770"></a>
<a id="trace-15774"></a>
<a id="trace-15781"></a>
<a id="trace-15790"></a>
<a id="trace-15796"></a>
<a id="trace-15809"></a>
<a id="trace-15875"></a>
<a id="trace-15890"></a>
<a id="trace-15894"></a>
<a id="trace-15904"></a>
<a id="trace-15918"></a>
<a id="trace-15922"></a>
<a id="trace-15935"></a>
<a id="trace-16001"></a>
<a id="trace-16009"></a>
<a id="trace-16016"></a>
<a id="trace-16030"></a>
<a id="trace-16039"></a>
<a id="trace-16045"></a>
<a id="trace-16057"></a>
<a id="trace-16062"></a>
<a id="trace-16128"></a>
<a id="trace-16136"></a>
<a id="trace-16143"></a>
<a id="trace-16149"></a>
<a id="trace-16155"></a>
<a id="trace-16165"></a>
<a id="trace-16169"></a>
<a id="trace-16180"></a>
<a id="trace-16185"></a>
<a id="trace-16254"></a>
<a id="trace-16260"></a>
<a id="trace-16271"></a>
<a id="trace-16282"></a>
<a id="trace-16287"></a>
<a id="trace-16294"></a>
<a id="trace-16305"></a>
<a id="trace-16377"></a>
<a id="trace-16383"></a>
<a id="trace-16403"></a>
<a id="trace-16412"></a>
<a id="trace-16419"></a>
<a id="trace-16425"></a>
<a id="trace-16436"></a>
<a id="trace-16503"></a>
<a id="trace-16509"></a>
<a id="trace-16521"></a>
<a id="trace-16528"></a>
<a id="trace-16533"></a>
<a id="trace-16540"></a>
<a id="trace-16558"></a>
<a id="trace-16565"></a>
<a id="trace-16631"></a>
<a id="trace-16637"></a>
<a id="trace-16645"></a>
<a id="trace-16649"></a>
<a id="trace-16659"></a>
<a id="trace-16667"></a>
<a id="trace-16679"></a>
<a id="trace-16686"></a>
<a id="trace-16754"></a>
<a id="trace-16766"></a>
<a id="trace-16773"></a>
<a id="trace-16777"></a>
<a id="trace-16784"></a>
<a id="trace-16787"></a>
<a id="trace-16796"></a>
<a id="trace-16800"></a>
<a id="trace-16808"></a>
<a id="trace-16813"></a>
<a id="trace-16879"></a>
<a id="trace-16889"></a>
<a id="trace-16896"></a>
<a id="trace-16904"></a>
<a id="trace-16914"></a>
<a id="trace-16924"></a>
<a id="trace-16928"></a>
<a id="trace-16937"></a>
<a id="trace-16942"></a>
<a id="trace-17009"></a>
<a id="trace-17015"></a>
<a id="trace-17022"></a>
<a id="trace-17028"></a>
<a id="trace-17036"></a>
<a id="trace-17041"></a>
<a id="trace-17050"></a>
<a id="trace-17054"></a>
<a id="trace-17066"></a>
<a id="trace-17071"></a>
<a id="trace-17139"></a>
<a id="trace-17145"></a>
<a id="trace-17153"></a>
<a id="trace-17157"></a>
<a id="trace-17173"></a>
<a id="trace-17179"></a>
<a id="trace-17188"></a>
<a id="trace-17193"></a>
<a id="trace-17271"></a>
<a id="trace-17280"></a>
<a id="trace-17284"></a>
<a id="trace-17291"></a>
<a id="trace-17294"></a>
<a id="trace-17301"></a>
<a id="trace-17307"></a>
<a id="trace-17320"></a>
<a id="trace-17386"></a>
<a id="trace-17394"></a>
<a id="trace-17402"></a>
<a id="trace-17408"></a>
<a id="trace-17420"></a>
<a id="trace-17423"></a>
- 139.30s–207.80s (×115), actor 5, squad 0 (trace 15675): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 138.95s, trace 15667. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15682}.
<a id="trace-1948"></a>
- 208.00s–208.00s (×1), actor 5, squad 0 (events line 1948): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17434}.
<a id="trace-17425"></a>
- 208.00s–208.00s (×1), actor 5, squad 0 (trace 17425): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 208.00s, trace 17425. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17434}.
<a id="trace-17426"></a>
- 208.00s–208.00s (×1), actor 5, squad 0 (trace 17426): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 208.00s, trace 17426. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17434}.
<a id="trace-17434"></a>
<a id="trace-17444"></a>
<a id="trace-17516"></a>
<a id="trace-17524"></a>
<a id="trace-17531"></a>
<a id="trace-17535"></a>
<a id="trace-17544"></a>
<a id="trace-17547"></a>
<a id="trace-17565"></a>
- 208.30s–213.80s (×9), actor 5, squad 0 (trace 17434): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 208.00s, trace 17426. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17444}.
<a id="trace-17566"></a>
- 213.85s–213.85s (×1), actor 1, squad 0 (trace 17566): MoveTactically. Knowledge: actor memory at 210.00s, trace 17451. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17725}.
<a id="trace-17567"></a>
- 213.85s–213.85s (×1), actor 1, squad 0 (trace 17567): traveling. Knowledge: actor memory at 210.00s, trace 17451. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17725}.
<a id="trace-17568"></a>
- 213.85s–213.85s (×1), actor 1, squad 0 (trace 17568): received platoon directive. Knowledge: actor memory at 210.00s, trace 17451. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17725}.
<a id="trace-17725"></a>
<a id="trace-17735"></a>
<a id="trace-17807"></a>
<a id="trace-17849"></a>
<a id="trace-17860"></a>
<a id="trace-17866"></a>
<a id="trace-17883"></a>
<a id="trace-17905"></a>
<a id="trace-17915"></a>
<a id="trace-17993"></a>
<a id="trace-18006"></a>
<a id="trace-18024"></a>
<a id="trace-18044"></a>
<a id="trace-18056"></a>
<a id="trace-18063"></a>
<a id="trace-18077"></a>
<a id="trace-18097"></a>
<a id="trace-18168"></a>
<a id="trace-18173"></a>
<a id="trace-18190"></a>
- 214.30s–226.30s (×20), actor 5, squad 0 (trace 17725): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 17453. Next observer evidence: {'until': 214.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750712618799145, 'next_transition': 17735}.
<a id="trace-18193"></a>
- 226.45s–226.45s (×1), actor 1, squad 0 (trace 18193): traveling overwatch. Knowledge: actor memory at 225.00s, trace 18099. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0395245493008525, 'next_transition': 18461}.
<a id="trace-18194"></a>
- 226.45s–226.45s (×1), actor 1, squad 0 (trace 18194): matching received arrivals: traveling stage complete. Knowledge: actor memory at 225.00s, trace 18099. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0395245493008525, 'next_transition': 18461}.
<a id="trace-18461"></a>
<a id="trace-18472"></a>
<a id="trace-18488"></a>
<a id="trace-18504"></a>
<a id="trace-18527"></a>
<a id="trace-18611"></a>
<a id="trace-18623"></a>
<a id="trace-18629"></a>
<a id="trace-18647"></a>
<a id="trace-18659"></a>
- 227.30s–232.80s (×10), actor 5, squad 0 (trace 18461): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 18101. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4189865884435737, 'next_transition': 18472}.
<a id="trace-18678"></a>
- 233.75s–233.75s (×1), actor 1, squad 0 (trace 18678): ReactToContact: cover and return fire. Knowledge: actor memory at 230.00s, trace 18535. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28350123665585214, 'next_transition': 18992}.
<a id="trace-18679"></a>
- 233.75s–233.75s (×1), actor 1, squad 0 (trace 18679): bounding overwatch. Knowledge: actor memory at 230.00s, trace 18535. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28350123665585214, 'next_transition': 18992}.
<a id="trace-18680"></a>
- 233.75s–233.75s (×1), actor 1, squad 0 (trace 18680): new contact inside 100 m. Knowledge: actor memory at 230.00s, trace 18535. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28350123665585214, 'next_transition': 18992}.
<a id="trace-18992"></a>
<a id="trace-19004"></a>
<a id="trace-19015"></a>
<a id="trace-19085"></a>
<a id="trace-19106"></a>
<a id="trace-19120"></a>
<a id="trace-19132"></a>
<a id="trace-19140"></a>
- 233.80s–237.80s (×8), actor 5, squad 0 (trace 18992): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 18537. Next observer evidence: {'until': 234.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5039989934275662, 'next_transition': 19004}.
<a id="trace-19142"></a>
- 237.95s–237.95s (×1), actor 1, squad 0 (trace 19142): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 235.00s, trace 19021. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19409}.
<a id="trace-19143"></a>
- 237.95s–237.95s (×1), actor 1, squad 0 (trace 19143): rearward bound: one stationary suppressing element. Knowledge: actor memory at 235.00s, trace 19021. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19409}.
<a id="trace-19409"></a>
<a id="trace-19419"></a>
<a id="trace-19431"></a>
<a id="trace-19440"></a>
<a id="trace-19510"></a>
<a id="trace-19536"></a>
<a id="trace-19603"></a>
<a id="trace-19656"></a>
<a id="trace-19777"></a>
<a id="trace-19804"></a>
<a id="trace-19843"></a>
<a id="trace-19946"></a>
<a id="trace-19972"></a>
<a id="trace-20021"></a>
<a id="trace-20081"></a>
<a id="trace-20156"></a>
- 238.30s–248.30s (×16), actor 5, squad 0 (trace 19409): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 19023. Next observer evidence: {'until': 238.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09449970226408125, 'next_transition': 19419}.
<a id="trace-20171"></a>
- 248.75s–248.75s (×1), actor 1, squad 0 (trace 20171): support established: element delivered fire on threat area. Knowledge: actor memory at 245.00s, trace 19864. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21671977417478788, 'next_transition': 20178}.
<a id="trace-20178"></a>
<a id="trace-20198"></a>
- 248.80s–249.30s (×2), actor 5, squad 0 (trace 20178): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 19866. Next observer evidence: {'until': 249.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6854377458879137, 'next_transition': 20198}.
<a id="trace-2373"></a>
- 249.40s–249.40s (×1), actor 5, squad 0 (events line 2373): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20201"></a>
- 249.40s–249.40s (×1), actor 5, squad 0 (trace 20201): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.112985 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 249.40s, trace 20201. Next observer evidence: {'until': 249.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5039839176640455, 'next_transition': 20214}.
<a id="trace-20202"></a>
- 249.40s–249.40s (×1), actor 5, squad 0 (trace 20202): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.112985 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 249.40s, trace 20202. Next observer evidence: {'until': 249.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5039839176640455, 'next_transition': 20214}.
<a id="trace-20214"></a>
- 249.80s–249.80s (×1), actor 5, squad 0 (trace 20214): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 249.40s, trace 20202. Next observer evidence: {'until': 250, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520120257765494, 'next_transition': 20225}.
<a id="trace-20225"></a>
- 250.00s–250.00s (×1), actor 1, squad 0 (trace 20225): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 250.00s, trace 20217. Next observer evidence: {'until': 250.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18899898585971278, 'next_transition': 20393}.
<a id="trace-20226"></a>
- 250.00s–250.00s (×1), actor 1, squad 0 (trace 20226): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 250.00s, trace 20217. Next observer evidence: {'until': 250.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18899898585971278, 'next_transition': 20393}.
<a id="trace-20393"></a>
<a id="trace-20402"></a>
<a id="trace-20415"></a>
<a id="trace-20423"></a>
<a id="trace-20436"></a>
<a id="trace-20455"></a>
<a id="trace-20464"></a>
<a id="trace-20470"></a>
<a id="trace-20483"></a>
<a id="trace-20490"></a>
<a id="trace-20554"></a>
- 250.30s–255.30s (×11), actor 5, squad 0 (trace 20393): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 20219. Next observer evidence: {'until': 250.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20402}.
<a id="trace-20558"></a>
- 255.75s–255.75s (×1), actor 1, squad 0 (trace 20558): NeedSupport. Knowledge: actor memory at 255.00s, trace 20491. Next observer evidence: {'until': 255.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19272004808621865, 'next_transition': 20562}.
<a id="trace-20562"></a>
<a id="trace-20586"></a>
<a id="trace-20598"></a>
<a id="trace-20604"></a>
<a id="trace-20617"></a>
<a id="trace-20627"></a>
- 255.80s–258.80s (×6), actor 5, squad 0 (trace 20562): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 20493. Next observer evidence: {'until': 256.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0265993843243213, 'next_transition': 20586}.
<a id="trace-20638"></a>
- 259.75s–259.75s (×1), actor 1, squad 0 (trace 20638): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 255.00s, trace 20491. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1927195557549382, 'next_transition': 20641}.
<a id="trace-20641"></a>
<a id="trace-20716"></a>
<a id="trace-20730"></a>
<a id="trace-20752"></a>
<a id="trace-20764"></a>
<a id="trace-20772"></a>
<a id="trace-20785"></a>
<a id="trace-20794"></a>
<a id="trace-20879"></a>
<a id="trace-20887"></a>
- 259.80s–266.80s (×10), actor 5, squad 0 (trace 20641): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 20493. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0266235766076015, 'next_transition': 20716}.
<a id="trace-20894"></a>
- 267.25s–267.25s (×1), actor 1, squad 0 (trace 20894): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 265.00s, trace 20800. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21029}.
<a id="trace-20967"></a>
- 267.25s–267.25s (×1), actor 1, squad 0 (trace 20967): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 265.00s, trace 20800. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21029}.
<a id="trace-21029"></a>
<a id="trace-21062"></a>
<a id="trace-21076"></a>
<a id="trace-21085"></a>
<a id="trace-21162"></a>
<a id="trace-21173"></a>
<a id="trace-21185"></a>
<a id="trace-21192"></a>
<a id="trace-21206"></a>
<a id="trace-21215"></a>
<a id="trace-21232"></a>
<a id="trace-21236"></a>
<a id="trace-21301"></a>
<a id="trace-21320"></a>
<a id="trace-21327"></a>
<a id="trace-21338"></a>
<a id="trace-21342"></a>
- 267.80s–277.80s (×17), actor 5, squad 0 (trace 21029): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 20802. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5985118712558405, 'next_transition': 21062}.
<a id="trace-21353"></a>
- 278.25s–278.25s (×1), actor 1, squad 0 (trace 21353): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 275.00s, trace 21239. Next observer evidence: None.
<a id="trace-21362"></a>
<a id="trace-21372"></a>
<a id="trace-21388"></a>
<a id="trace-21401"></a>
<a id="trace-21470"></a>
<a id="trace-21494"></a>
<a id="trace-21512"></a>
<a id="trace-21516"></a>
<a id="trace-21523"></a>
- 278.30s–283.30s (×9), actor 5, squad 0 (trace 21362): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 21241. Next observer evidence: {'until': 278.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21372}.
<a id="trace-21524"></a>
- 283.35s–283.35s (×1), actor 1, squad 0 (trace 21524): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 280.00s, trace 21402. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21608}.
<a id="trace-21525"></a>
- 283.35s–283.35s (×1), actor 1, squad 0 (trace 21525): MoveTactically. Knowledge: actor memory at 280.00s, trace 21402. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21608}.
<a id="trace-21526"></a>
- 283.35s–283.35s (×1), actor 1, squad 0 (trace 21526): . Knowledge: actor memory at 280.00s, trace 21402. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21608}.
<a id="trace-21608"></a>
<a id="trace-21626"></a>
<a id="trace-21642"></a>
<a id="trace-21710"></a>
<a id="trace-21717"></a>
<a id="trace-21735"></a>
<a id="trace-21739"></a>
<a id="trace-21749"></a>
<a id="trace-21754"></a>
<a id="trace-21767"></a>
<a id="trace-21776"></a>
<a id="trace-21789"></a>
<a id="trace-21795"></a>
<a id="trace-21867"></a>
<a id="trace-21880"></a>
<a id="trace-21885"></a>
<a id="trace-21897"></a>
<a id="trace-21903"></a>
<a id="trace-21947"></a>
- 283.80s–294.80s (×19), actor 5, squad 0 (trace 21608): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 21404. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21626}.
<a id="trace-21959"></a>
- 295.20s–295.20s (×1), actor 1, squad 0 (trace 21959): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 295.00s, trace 21949. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22071}.
<a id="trace-22071"></a>
<a id="trace-22086"></a>
<a id="trace-22092"></a>
<a id="trace-22105"></a>
<a id="trace-22123"></a>
<a id="trace-22128"></a>
<a id="trace-22137"></a>
<a id="trace-22214"></a>
<a id="trace-22220"></a>
<a id="trace-22234"></a>
<a id="trace-22250"></a>
<a id="trace-22259"></a>
<a id="trace-22267"></a>
<a id="trace-22294"></a>
<a id="trace-22362"></a>
- 295.80s–305.30s (×15), actor 5, squad 0 (trace 22071): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 21951. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18898991843598512, 'next_transition': 22086}.
<a id="trace-22366"></a>
- 305.65s–305.65s (×1), actor 1, squad 0 (trace 22366): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 305.00s, trace 22300. Next observer evidence: {'until': 305.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519732088933263, 'next_transition': 22371}.
<a id="trace-22371"></a>
- 305.80s–305.80s (×1), actor 5, squad 0 (trace 22371): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 22302. Next observer evidence: {'until': 306.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18900991533779393, 'next_transition': 22383}.
<a id="trace-22383"></a>
- 306.25s–306.25s (×1), actor 1, squad 0 (trace 22383): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 305.00s, trace 22300. Next observer evidence: {'until': 307.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22509}.
<a id="trace-22509"></a>
<a id="trace-22556"></a>
<a id="trace-22621"></a>
<a id="trace-22625"></a>
<a id="trace-22636"></a>
<a id="trace-22644"></a>
<a id="trace-22652"></a>
<a id="trace-22673"></a>
<a id="trace-22687"></a>
<a id="trace-22694"></a>
- 307.30s–314.80s (×10), actor 5, squad 0 (trace 22509): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 22302. Next observer evidence: {'until': 309.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2927765005352665, 'next_transition': 22556}.
<a id="trace-22757"></a>
- 315.25s–315.25s (×1), actor 1, squad 0 (trace 22757): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 315.00s, trace 22695. Next observer evidence: {'until': 315.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22935}.
<a id="trace-22935"></a>
<a id="trace-22946"></a>
<a id="trace-22958"></a>
<a id="trace-22964"></a>
- 315.80s–317.30s (×4), actor 5, squad 0 (trace 22935): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.00s, trace 22697. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22946}.
<a id="trace-22984"></a>
- 318.40s–318.40s (×1), actor 5, squad 0 (trace 22984): renew committed intent (75 s lifetime). Knowledge: actor memory at 318.40s, trace 22984. Next observer evidence: {'until': 318.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19271871170997126, 'next_transition': 2704}.
<a id="trace-2704"></a>
- 318.40s–318.40s (×1), actor 5, squad 0 (events line 2704): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7708749265085137, 'next_transition': 22999}.
<a id="trace-22999"></a>
<a id="trace-23004"></a>
<a id="trace-23082"></a>
<a id="trace-23096"></a>
<a id="trace-23107"></a>
<a id="trace-23119"></a>
<a id="trace-23124"></a>
<a id="trace-23137"></a>
<a id="trace-23144"></a>
<a id="trace-23161"></a>
<a id="trace-23169"></a>
<a id="trace-23243"></a>
<a id="trace-23247"></a>
- 319.30s–325.80s (×13), actor 5, squad 0 (trace 22999): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 318.40s, trace 22984. Next observer evidence: {'until': 319.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.578158173388774, 'next_transition': 23004}.
<a id="trace-23269"></a>
- 326.65s–326.65s (×1), actor 1, squad 0 (trace 23269): matching received arrivals: deployment leg complete. Knowledge: actor memory at 325.00s, trace 23178. Next observer evidence: {'until': 326.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23273}.
<a id="trace-23273"></a>
- 326.80s–326.80s (×1), actor 5, squad 0 (trace 23273): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 23180. Next observer evidence: {'until': 327, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23278}.
<a id="trace-23278"></a>
- 327.05s–327.05s (×1), actor 1, squad 0 (trace 23278): Reorganise: completed/failed drill. Knowledge: actor memory at 325.00s, trace 23178. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23498}.
<a id="trace-23282"></a>
- 327.05s–327.05s (×1), actor 1, squad 0 (trace 23282): ReactToContact: cover and return fire. Knowledge: actor memory at 325.00s, trace 23178. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23498}.
<a id="trace-23283"></a>
- 327.05s–327.05s (×1), actor 1, squad 0 (trace 23283): Reorganise complete: known contact. Knowledge: actor memory at 325.00s, trace 23178. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23498}.
<a id="trace-23498"></a>
- 327.30s–327.30s (×1), actor 5, squad 0 (trace 23498): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 23180. Next observer evidence: {'until': 327.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23509}.
<a id="trace-23499"></a>
- 327.30s–327.30s (×1), actor 1, squad 0 (trace 23499): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 325.00s, trace 23178. Next observer evidence: {'until': 327.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23509}.
<a id="trace-23501"></a>
- 327.30s–327.30s (×1), actor 1, squad 0 (trace 23501): NeedSupport. Knowledge: actor memory at 325.00s, trace 23178. Next observer evidence: {'until': 327.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23509}.
<a id="trace-23509"></a>
- 327.70s–327.70s (×1), actor 1, squad 0 (trace 23509): Reorganise: completed/failed drill. Knowledge: actor memory at 325.00s, trace 23178. Next observer evidence: {'until': 327.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23624}.
<a id="trace-23512"></a>
- 327.70s–327.70s (×1), actor 1, squad 0 (trace 23512): ReactToContact: cover and return fire. Knowledge: actor memory at 325.00s, trace 23178. Next observer evidence: {'until': 327.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23624}.
<a id="trace-23513"></a>
- 327.70s–327.70s (×1), actor 1, squad 0 (trace 23513): Reorganise complete: known contact. Knowledge: actor memory at 325.00s, trace 23178. Next observer evidence: {'until': 327.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23624}.
<a id="trace-23624"></a>
<a id="trace-23640"></a>
<a id="trace-23674"></a>
<a id="trace-23753"></a>
<a id="trace-23762"></a>
<a id="trace-23776"></a>
- 327.80s–331.30s (×6), actor 5, squad 0 (trace 23624): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 23180. Next observer evidence: {'until': 328.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23640}.
<a id="trace-23781"></a>
- 331.45s–331.45s (×1), actor 1, squad 0 (trace 23781): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 330.00s, trace 23686. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30722689799077146, 'next_transition': 23954}.
<a id="trace-23782"></a>
- 331.45s–331.45s (×1), actor 1, squad 0 (trace 23782): rearward bound: one stationary suppressing element. Knowledge: actor memory at 330.00s, trace 23686. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30722689799077146, 'next_transition': 23954}.
<a id="trace-23954"></a>
<a id="trace-23966"></a>
<a id="trace-24028"></a>
<a id="trace-24061"></a>
<a id="trace-24097"></a>
<a id="trace-24190"></a>
<a id="trace-24219"></a>
<a id="trace-24247"></a>
<a id="trace-24268"></a>
<a id="trace-24308"></a>
<a id="trace-24342"></a>
<a id="trace-24359"></a>
<a id="trace-24426"></a>
<a id="trace-24431"></a>
<a id="trace-24443"></a>
<a id="trace-24447"></a>
<a id="trace-24464"></a>
- 332.30s–342.80s (×17), actor 5, squad 0 (trace 23954): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 23687. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5686668247861629, 'next_transition': 23966}.
<a id="trace-24472"></a>
- 343.45s–343.45s (×1), actor 1, squad 0 (trace 24472): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 340.00s, trace 24362. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400036706401218, 'next_transition': 24477}.
<a id="trace-24473"></a>
- 343.45s–343.45s (×1), actor 1, squad 0 (trace 24473): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 340.00s, trace 24362. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400036706401218, 'next_transition': 24477}.
<a id="trace-24477"></a>
<a id="trace-24492"></a>
<a id="trace-24562"></a>
<a id="trace-24579"></a>
<a id="trace-24582"></a>
<a id="trace-24588"></a>
<a id="trace-24593"></a>
<a id="trace-24599"></a>
<a id="trace-24602"></a>
<a id="trace-24611"></a>
<a id="trace-24615"></a>
<a id="trace-24679"></a>
<a id="trace-24683"></a>
<a id="trace-24691"></a>
<a id="trace-24697"></a>
<a id="trace-24703"></a>
<a id="trace-24716"></a>
<a id="trace-24735"></a>
<a id="trace-24813"></a>
<a id="trace-24823"></a>
<a id="trace-24831"></a>
<a id="trace-24838"></a>
<a id="trace-24842"></a>
- 343.80s–358.80s (×23), actor 5, squad 0 (trace 24477): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 24363. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400037440392766, 'next_transition': 24492}.
<a id="trace-24844"></a>
- 358.90s–358.90s (×1), actor 1, squad 0 (trace 24844): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 355.00s, trace 24738. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24856}.
<a id="trace-24856"></a>
<a id="trace-24868"></a>
- 359.30s–359.80s (×2), actor 5, squad 0 (trace 24856): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 355.00s, trace 24739. Next observer evidence: {'until': 359.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24868}.

## Net delivery

258 matched order/radio deliveries; 250 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.339s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2762: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2763: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2764: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2770: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2771: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2772: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2773: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2774: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2775: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2776: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2777: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3089: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3090: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3091: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3095: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3097: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3098: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3099: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3100: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3101: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3102: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3103: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3104: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3754: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3755: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 3756: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 3757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3759: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3760: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3762: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3763: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 3764: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 3765: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3766: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3767: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3768: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3769: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 3991: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 3992: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4131: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4132: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 4133: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 4134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4136: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4137: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4139: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4140: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 4141: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4142: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4143: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4144: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4145: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 7359: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7360: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7363: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7364: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7366: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7367: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7368: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7369: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7370: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7371: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7372: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 10099: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 10100: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 10101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10103: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10104: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10106: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10107: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10108: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10109: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10110: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10111: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10112: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 10389: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 10390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10392: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 10393: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10395: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10396: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10397: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10398: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10399: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10400: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10401: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 10937: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 10938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 10939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 10940: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 10941: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 10942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 10943: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 10944: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 10945: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 10946: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 10947: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 10948: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 10949: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.80s leader 5, trace 11527: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.80s leader 5, trace 11528: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 11532: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 11533: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11535: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11536: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 11537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11538: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11539: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11540: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11541: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11542: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11543: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11544: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 11808: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 11809: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 11810: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11811: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11812: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 11813: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11814: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11815: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11816: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11817: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11818: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11819: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11820: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 12893: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 12894: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 12895: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 12896: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 12897: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 12898: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 12899: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 12900: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 12901: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 12902: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 12903: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 12904: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 12905: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 13128: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13129: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13130: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13131: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13132: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 13133: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13134: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13135: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13136: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13137: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13138: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13139: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 13481: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 13482: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 13483: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 13484: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 13485: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 13486: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 13487: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 13488: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 13489: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 13490: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 13491: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 13492: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14051: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 14052: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14053: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14054: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14055: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14056: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14057: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14058: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14059: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14060: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 14426: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14427: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14428: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14429: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 14430: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14431: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14432: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14433: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14434: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 14586: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 14587: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 14588: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 14589: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 14590: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 14591: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 14592: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 14593: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 14594: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 14731: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 14732: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 14733: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 14734: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 14735: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 14736: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 14737: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 14738: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 14739: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 14960: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 14961: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 14962: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 14963: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 14964: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 14965: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 14966: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 14967: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 14968: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 15110: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 15111: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 15112: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 15113: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 15114: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 15115: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 15116: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 15117: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 15118: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 15284: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 15285: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 15286: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 15287: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 15288: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 15289: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 15290: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 15291: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 15292: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 15433: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 15434: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 15435: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 15436: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 15437: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 15438: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 15439: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 15440: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 15441: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 15560: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 15561: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 15562: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 15563: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 15564: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 15565: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 15566: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 15567: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 15568: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.95s leader 5, trace 15667: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 15685: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 15686: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 15687: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 15688: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 15689: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 15690: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 15691: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 15692: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 15693: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 15810: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 15811: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 15812: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 15813: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 15814: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 15815: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 15816: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 15817: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 15818: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 15936: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 15937: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 15938: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 15939: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 15940: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 15941: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 15942: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 15943: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 15944: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 16064: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 16065: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 16066: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 16067: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 16068: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 16069: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 16070: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 16071: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 16072: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 16186: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 16187: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 16188: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 16189: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 16190: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 16191: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 16192: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 16193: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 16194: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 16311: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 16312: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16313: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 16314: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 16315: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16316: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16317: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16318: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16319: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 16439: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 16440: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 16441: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 16442: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 16443: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 16444: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 16445: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 16446: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 16447: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 16566: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 16567: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 16568: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 16569: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 16570: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 16571: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 16572: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 16573: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 16574: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 16687: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 16688: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 16689: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 16690: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 16691: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 16692: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 16693: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 16694: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 16695: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 16815: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 16816: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 16817: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 16818: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 16819: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 16820: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 16821: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 16822: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 16823: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 16943: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 16944: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 16945: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 16946: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 16947: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 16948: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 16949: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 16950: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 16951: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 17073: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 17074: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 17075: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 17076: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 17077: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 17078: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 17079: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 17080: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 17081: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 17198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 17199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 17200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 17201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 17202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 17203: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 17204: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 17205: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 17206: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 17321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 17322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 17323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 17324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 17325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 17326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 17327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 17328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 17329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 208.00s leader 5, trace 17425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 208.00s leader 5, trace 17426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 17451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 17452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 17453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 17454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 17455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 17456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 17457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 17458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 17459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 17737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 17738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 17739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 17740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 17741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 17742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 17743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 17744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 17745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 17916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 17917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 17918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 17919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 17920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 17921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 17922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 17923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 17924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 18099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 18100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 18101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 18102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 18103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 18104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 18105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 18106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 18107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 18535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 18536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 18537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 18538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 18539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 18540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 18541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 18542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 18543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 19021: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 19022: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 19023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 19024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 19025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 19026: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 19027: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 19028: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 19029: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 19441: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 19442: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 19443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 19444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 19445: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 19446: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 19447: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 19448: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 19864: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 19865: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 19866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 19867: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 19868: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 19869: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 19870: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 19871: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 249.40s leader 5, trace 20201: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 249.40s leader 5, trace 20202: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 20217: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 20218: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20219: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 20220: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 20221: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20222: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 20223: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20224: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 20491: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 20492: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 20493: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 20494: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 20495: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20496: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 20497: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20498: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 20642: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 20643: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 20644: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 20645: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 20646: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 20647: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 20648: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 20649: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 20800: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 20801: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 20802: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 20803: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 20804: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 20805: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 20806: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 20807: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 21089: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 21090: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 21091: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 21092: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 21093: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 21094: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 21095: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 21096: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 21239: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 21240: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 21241: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 21242: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 21243: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21244: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 21245: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21246: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 21402: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 21403: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21404: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 21405: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 21406: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21407: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 21408: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21409: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 21647: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 21648: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 21649: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 21650: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 21651: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 21652: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 21653: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 21654: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 21802: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 21803: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 21804: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 21805: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 21806: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 21807: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 21808: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 21809: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 21949: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 21950: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 21951: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 21952: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 21953: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 21954: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 21955: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 21956: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 22145: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 22146: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 22147: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 22148: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 22149: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22150: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 22151: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 22152: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 22300: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 22301: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 22302: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 22303: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 22304: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22305: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 22306: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22307: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 22558: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 22559: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 22560: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 22561: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 22562: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22563: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 22564: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 22565: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 22695: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 22696: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 22697: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 22698: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 22699: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 22700: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 22701: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 22702: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 318.40s leader 5, trace 22984: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 23009: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 23010: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 23011: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 23012: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 23013: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 23014: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 23015: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 23016: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 23178: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 23179: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 23180: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 23181: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 23182: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23183: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 23184: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23185: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 23686: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 23687: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 23688: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 23689: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23690: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 23691: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 23692: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 24110: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 24111: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 24112: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 24113: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 24114: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 24115: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 24116: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 24362: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 24363: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 24364: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24365: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24366: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24367: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 24503: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 24504: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 24505: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24506: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24507: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24508: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 24619: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24620: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 24621: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24622: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24623: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24624: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 24738: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 24739: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 24740: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24741: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 24742: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24743: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 24870: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 24871: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 24872: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 24873: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 24874: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 24875: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Orin incapacitated
- 1: Soren incapacitated
- 1: Vale killed in action
- 1: Voss incapacitated
- 1: Holt incapacitated
- 1: Kest incapacitated
- 1: Ash killed in action
- 1: Pike incapacitated
- 1: Tern incapacitated
- 1: Reed incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
