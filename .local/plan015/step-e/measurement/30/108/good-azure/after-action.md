# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/30/108/good-azure/battle-108-1789674340512697499`

## Battle summary

**Ember** · 360 s · 439 shots.

### Turning points

- 26.6s, squad 4: contact (events line 254). First recorded contact.
- 57.5s, squad 1: help call ([trace 12471](#trace-12471)). No completion observed before termination.
- 59.4s, squad 0: help answer ([trace 12951](#trace-12951)). 97.1s, squad 0: answered a neighbour with support by fire.
- 75.1s, squad 0: help call ([trace 16510](#trace-16510)). 76.7s, squad 1: answered a neighbour with support by fire.
- 76.7s, squad 1: help answer ([trace 16643](#trace-16643)). 81.7s, squad 1: took cover and returned fire.
- 95.3s, squad 1: help call ([trace 17886](#trace-17886)). 97.1s, squad 0: answered a neighbour with support by fire.
- 97.1s, squad 0: help answer ([trace 17976](#trace-17976)). 101.5s, squad 0: took cover and returned fire.
- 119.8s, squad 0: withdrawal ([trace 22697](#trace-22697)). 166.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 119.8s, squad 0: help call ([trace 22805](#trace-22805)). No completion observed before termination.
- 135.1s, squad 0: help call ([trace 23533](#trace-23533)). No completion observed before termination.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 115 shots, 4/8 lost.
- **1** — FightHere; chose took cover and returned fire, answered a neighbour with support by fire and 1 further drill types; no completed objective recorded; 13 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 235 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 76 shots, 0/2 lost.

### Decisions and attribution

At 62.5s, squad 1 chose took cover and returned fire ([trace 15606](#trace-15606)), followed by 0 shots and 1 own casualties; estimate 9.3 against 0 distinct squad-reported contacts; At 45.9s, squad 1 chose FightHere: nearest known group ([trace 7299](#trace-7299)), followed by 2 shots and 0 own casualties; estimate 8.3 against 5 distinct squad-reported contacts; At 57.6s, squad 1 chose advanced tactically ([trace 12674](#trace-12674)), followed by 2 shots and 0 own casualties; estimate 9.5 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9426936231347823, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024195796955, 'next_transition': 827}.

### Communication

342 matched deliveries (mean 0.32s, max 2.25s); 489 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 26.55s, squad 4, contact, evidence events line 254: First recorded contact; .
- 57.50s, squad 1, help call, evidence 12471: NeedSupport; No completion observed before termination.
- 59.40s, squad 0, help answer, evidence 12951: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 97.1s, squad 0: answered a neighbour with support by fire.
- 75.05s, squad 0, help call, evidence 16510: NeedSupport; 76.7s, squad 1: answered a neighbour with support by fire.
- 76.65s, squad 1, help answer, evidence 16643: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 81.7s, squad 1: took cover and returned fire.
- 95.35s, squad 1, help call, evidence 17886: NeedSupport; 97.1s, squad 0: answered a neighbour with support by fire.
- 97.10s, squad 0, help answer, evidence 17976: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 101.5s, squad 0: took cover and returned fire.
- 119.85s, squad 0, withdrawal, evidence 22697: BreakContact: believed ratio at least two without superiority; 166.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 119.85s, squad 0, help call, evidence 22805: NeedSupport; No completion observed before termination.
- 135.10s, squad 0, help call, evidence 23533: NeedSupport; No completion observed before termination.
- 172.35s, squad 0, withdrawal, evidence 25253: Withdraw to received rally; 216.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 282.95s, squad 0, withdrawal, evidence 31296: BreakContact: believed ratio at least two without superiority; 322.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 294.25s, squad 0, help call, evidence 31876: NeedSupport; No completion observed before termination.
- 330.65s, squad 0, withdrawal, evidence 33459: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915460599788795, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915460599788795, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915460599788795, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528726278277063, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528726278277063, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528726278277063, 'next_transition': 87}.
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
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.26000174359364, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9426936231347823, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024195796955, 'next_transition': 827}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9426936231347823, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9426936231347823, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024195796955, 'next_transition': 827}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024195796955, 'next_transition': 827}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-739"></a>
<a id="trace-741"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-949"></a>
<a id="trace-951"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9439232876035892, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.92973264250155, 'next_transition': 1864}.
<a id="trace-953"></a>
<a id="trace-955"></a>
<a id="trace-1303"></a>
<a id="trace-1305"></a>
<a id="trace-1341"></a>
<a id="trace-1343"></a>
<a id="trace-1383"></a>
<a id="trace-1385"></a>
<a id="trace-1422"></a>
<a id="trace-1424"></a>
<a id="trace-1456"></a>
<a id="trace-1458"></a>
<a id="trace-1503"></a>
<a id="trace-1505"></a>
<a id="trace-1537"></a>
<a id="trace-1539"></a>
<a id="trace-1654"></a>
<a id="trace-1656"></a>
<a id="trace-1679"></a>
<a id="trace-1681"></a>
<a id="trace-1703"></a>
<a id="trace-1705"></a>
<a id="trace-1733"></a>
<a id="trace-1735"></a>
<a id="trace-1763"></a>
<a id="trace-1765"></a>
<a id="trace-1789"></a>
<a id="trace-1791"></a>
<a id="trace-1814"></a>
<a id="trace-1816"></a>
<a id="trace-1859"></a>
<a id="trace-1861"></a>
<a id="trace-1963"></a>
<a id="trace-1965"></a>
<a id="trace-2052"></a>
<a id="trace-2054"></a>
<a id="trace-2077"></a>
<a id="trace-2079"></a>
<a id="trace-2404"></a>
<a id="trace-2406"></a>
<a id="trace-2468"></a>
<a id="trace-2470"></a>
<a id="trace-2488"></a>
<a id="trace-2490"></a>
<a id="trace-2526"></a>
<a id="trace-2528"></a>
<a id="trace-2576"></a>
<a id="trace-2578"></a>
<a id="trace-2603"></a>
<a id="trace-2605"></a>
<a id="trace-2694"></a>
<a id="trace-2696"></a>
<a id="trace-2725"></a>
<a id="trace-2727"></a>
<a id="trace-2751"></a>
<a id="trace-2753"></a>
<a id="trace-2779"></a>
<a id="trace-2781"></a>
<a id="trace-2816"></a>
<a id="trace-2818"></a>
<a id="trace-2841"></a>
<a id="trace-2843"></a>
<a id="trace-2896"></a>
<a id="trace-2898"></a>
<a id="trace-2921"></a>
<a id="trace-2923"></a>
<a id="trace-3041"></a>
<a id="trace-3043"></a>
<a id="trace-3060"></a>
<a id="trace-3062"></a>
<a id="trace-3095"></a>
<a id="trace-3097"></a>
<a id="trace-3108"></a>
<a id="trace-3110"></a>
<a id="trace-3128"></a>
<a id="trace-3130"></a>
<a id="trace-3140"></a>
<a id="trace-3142"></a>
<a id="trace-3167"></a>
<a id="trace-3169"></a>
<a id="trace-3188"></a>
<a id="trace-3190"></a>
<a id="trace-3469"></a>
<a id="trace-3471"></a>
<a id="trace-3522"></a>
<a id="trace-3524"></a>
<a id="trace-3541"></a>
<a id="trace-3543"></a>
<a id="trace-3553"></a>
<a id="trace-3555"></a>
<a id="trace-3955"></a>
<a id="trace-3957"></a>
<a id="trace-4341"></a>
<a id="trace-4343"></a>
<a id="trace-4783"></a>
<a id="trace-4785"></a>
<a id="trace-4820"></a>
<a id="trace-4822"></a>
<a id="trace-5230"></a>
<a id="trace-5232"></a>
<a id="trace-5274"></a>
<a id="trace-5276"></a>
<a id="trace-5331"></a>
<a id="trace-5333"></a>
<a id="trace-5761"></a>
<a id="trace-5763"></a>
<a id="trace-6138"></a>
<a id="trace-6140"></a>
<a id="trace-6211"></a>
<a id="trace-6213"></a>
<a id="trace-6254"></a>
<a id="trace-6256"></a>
<a id="trace-6372"></a>
<a id="trace-6374"></a>
<a id="trace-6423"></a>
<a id="trace-6425"></a>
<a id="trace-6457"></a>
<a id="trace-6459"></a>
<a id="trace-6731"></a>
<a id="trace-6733"></a>
<a id="trace-6762"></a>
<a id="trace-6764"></a>
<a id="trace-6802"></a>
<a id="trace-6804"></a>
<a id="trace-6834"></a>
<a id="trace-6836"></a>
<a id="trace-6929"></a>
<a id="trace-6931"></a>
<a id="trace-7287"></a>
<a id="trace-7289"></a>
<a id="trace-7328"></a>
<a id="trace-7330"></a>
<a id="trace-7351"></a>
<a id="trace-7353"></a>
<a id="trace-10555"></a>
<a id="trace-10557"></a>
<a id="trace-10588"></a>
<a id="trace-10590"></a>
<a id="trace-11085"></a>
<a id="trace-11087"></a>
<a id="trace-11123"></a>
<a id="trace-11125"></a>
<a id="trace-11165"></a>
<a id="trace-11167"></a>
<a id="trace-11200"></a>
<a id="trace-11202"></a>
<a id="trace-11320"></a>
<a id="trace-11322"></a>
<a id="trace-11369"></a>
<a id="trace-11371"></a>
<a id="trace-11401"></a>
<a id="trace-11403"></a>
<a id="trace-11435"></a>
<a id="trace-11437"></a>
<a id="trace-11479"></a>
<a id="trace-11481"></a>
<a id="trace-11510"></a>
<a id="trace-11512"></a>
<a id="trace-11703"></a>
<a id="trace-11705"></a>
<a id="trace-12171"></a>
<a id="trace-12173"></a>
<a id="trace-12201"></a>
<a id="trace-12203"></a>
<a id="trace-12238"></a>
<a id="trace-12240"></a>
<a id="trace-12334"></a>
<a id="trace-12336"></a>
<a id="trace-12350"></a>
<a id="trace-12352"></a>
<a id="trace-12392"></a>
<a id="trace-12394"></a>
<a id="trace-12428"></a>
<a id="trace-12430"></a>
<a id="trace-12465"></a>
<a id="trace-12467"></a>
<a id="trace-12858"></a>
<a id="trace-12860"></a>
<a id="trace-12915"></a>
<a id="trace-12917"></a>
<a id="trace-12943"></a>
<a id="trace-12945"></a>
<a id="trace-15327"></a>
<a id="trace-15329"></a>
<a id="trace-15452"></a>
<a id="trace-15454"></a>
<a id="trace-15526"></a>
<a id="trace-15528"></a>
<a id="trace-15587"></a>
<a id="trace-15589"></a>
<a id="trace-15796"></a>
<a id="trace-15798"></a>
<a id="trace-15835"></a>
<a id="trace-15837"></a>
<a id="trace-15865"></a>
<a id="trace-15867"></a>
<a id="trace-15890"></a>
<a id="trace-15892"></a>
<a id="trace-16024"></a>
<a id="trace-16026"></a>
<a id="trace-16069"></a>
<a id="trace-16071"></a>
<a id="trace-16100"></a>
<a id="trace-16102"></a>
<a id="trace-16176"></a>
<a id="trace-16178"></a>
<a id="trace-16196"></a>
<a id="trace-16198"></a>
<a id="trace-16297"></a>
<a id="trace-16299"></a>
<a id="trace-16315"></a>
<a id="trace-16317"></a>
<a id="trace-16329"></a>
<a id="trace-16331"></a>
<a id="trace-16402"></a>
<a id="trace-16404"></a>
<a id="trace-16417"></a>
<a id="trace-16419"></a>
<a id="trace-16439"></a>
<a id="trace-16441"></a>
<a id="trace-16451"></a>
<a id="trace-16453"></a>
<a id="trace-16468"></a>
<a id="trace-16470"></a>
<a id="trace-16483"></a>
<a id="trace-16485"></a>
<a id="trace-16582"></a>
<a id="trace-16584"></a>
<a id="trace-16609"></a>
<a id="trace-16611"></a>
<a id="trace-16624"></a>
<a id="trace-16626"></a>
<a id="trace-16660"></a>
<a id="trace-16662"></a>
<a id="trace-16685"></a>
<a id="trace-16687"></a>
<a id="trace-16696"></a>
<a id="trace-16698"></a>
<a id="trace-16724"></a>
<a id="trace-16726"></a>
<a id="trace-16756"></a>
<a id="trace-16758"></a>
<a id="trace-16793"></a>
<a id="trace-16795"></a>
<a id="trace-16826"></a>
<a id="trace-16828"></a>
<a id="trace-16944"></a>
<a id="trace-16946"></a>
<a id="trace-16968"></a>
<a id="trace-16970"></a>
<a id="trace-17085"></a>
<a id="trace-17087"></a>
<a id="trace-17103"></a>
<a id="trace-17105"></a>
<a id="trace-17136"></a>
<a id="trace-17138"></a>
<a id="trace-17155"></a>
<a id="trace-17157"></a>
<a id="trace-17188"></a>
<a id="trace-17190"></a>
<a id="trace-17222"></a>
<a id="trace-17224"></a>
<a id="trace-17313"></a>
<a id="trace-17315"></a>
<a id="trace-17365"></a>
<a id="trace-17367"></a>
<a id="trace-17398"></a>
<a id="trace-17400"></a>
<a id="trace-17440"></a>
<a id="trace-17442"></a>
<a id="trace-17491"></a>
<a id="trace-17493"></a>
<a id="trace-17522"></a>
<a id="trace-17524"></a>
<a id="trace-17542"></a>
<a id="trace-17544"></a>
<a id="trace-17560"></a>
<a id="trace-17562"></a>
<a id="trace-17656"></a>
<a id="trace-17658"></a>
<a id="trace-17678"></a>
<a id="trace-17680"></a>
<a id="trace-17707"></a>
<a id="trace-17709"></a>
<a id="trace-17739"></a>
<a id="trace-17741"></a>
<a id="trace-17761"></a>
<a id="trace-17763"></a>
<a id="trace-17782"></a>
<a id="trace-17784"></a>
<a id="trace-17799"></a>
<a id="trace-17801"></a>
<a id="trace-17883"></a>
<a id="trace-17885"></a>
<a id="trace-17906"></a>
<a id="trace-17908"></a>
<a id="trace-17926"></a>
<a id="trace-17928"></a>
<a id="trace-17954"></a>
<a id="trace-17956"></a>
<a id="trace-19549"></a>
<a id="trace-19551"></a>
<a id="trace-19582"></a>
<a id="trace-19584"></a>
<a id="trace-19662"></a>
<a id="trace-19664"></a>
<a id="trace-19691"></a>
<a id="trace-19693"></a>
<a id="trace-19715"></a>
<a id="trace-19717"></a>
<a id="trace-19798"></a>
<a id="trace-19800"></a>
<a id="trace-19815"></a>
<a id="trace-19817"></a>
<a id="trace-19839"></a>
<a id="trace-19841"></a>
<a id="trace-20128"></a>
<a id="trace-20130"></a>
<a id="trace-20144"></a>
<a id="trace-20146"></a>
<a id="trace-20158"></a>
<a id="trace-20160"></a>
<a id="trace-20181"></a>
<a id="trace-20183"></a>
<a id="trace-20192"></a>
<a id="trace-20194"></a>
<a id="trace-22061"></a>
<a id="trace-22063"></a>
<a id="trace-22094"></a>
<a id="trace-22096"></a>
<a id="trace-22112"></a>
<a id="trace-22114"></a>
<a id="trace-22122"></a>
<a id="trace-22124"></a>
<a id="trace-22146"></a>
<a id="trace-22148"></a>
<a id="trace-22158"></a>
<a id="trace-22160"></a>
<a id="trace-22176"></a>
<a id="trace-22178"></a>
<a id="trace-22311"></a>
<a id="trace-22313"></a>
<a id="trace-22327"></a>
<a id="trace-22329"></a>
<a id="trace-22340"></a>
<a id="trace-22342"></a>
<a id="trace-22352"></a>
<a id="trace-22354"></a>
<a id="trace-22369"></a>
<a id="trace-22371"></a>
<a id="trace-22393"></a>
<a id="trace-22395"></a>
<a id="trace-22458"></a>
<a id="trace-22460"></a>
<a id="trace-22477"></a>
<a id="trace-22479"></a>
<a id="trace-22491"></a>
<a id="trace-22493"></a>
<a id="trace-22568"></a>
<a id="trace-22570"></a>
<a id="trace-22608"></a>
<a id="trace-22610"></a>
<a id="trace-22634"></a>
<a id="trace-22636"></a>
<a id="trace-22643"></a>
<a id="trace-22645"></a>
<a id="trace-22658"></a>
<a id="trace-22660"></a>
<a id="trace-22665"></a>
<a id="trace-22667"></a>
<a id="trace-22682"></a>
<a id="trace-22684"></a>
<a id="trace-22692"></a>
<a id="trace-22694"></a>
<a id="trace-22882"></a>
<a id="trace-22884"></a>
<a id="trace-22895"></a>
<a id="trace-22897"></a>
<a id="trace-22942"></a>
<a id="trace-22944"></a>
<a id="trace-22964"></a>
<a id="trace-22966"></a>
<a id="trace-22983"></a>
<a id="trace-22985"></a>
<a id="trace-22997"></a>
<a id="trace-22999"></a>
<a id="trace-23031"></a>
<a id="trace-23033"></a>
<a id="trace-23055"></a>
<a id="trace-23057"></a>
<a id="trace-23145"></a>
<a id="trace-23147"></a>
<a id="trace-23175"></a>
<a id="trace-23177"></a>
<a id="trace-23187"></a>
<a id="trace-23189"></a>
<a id="trace-23222"></a>
<a id="trace-23224"></a>
<a id="trace-23242"></a>
<a id="trace-23244"></a>
<a id="trace-23276"></a>
<a id="trace-23278"></a>
<a id="trace-23295"></a>
<a id="trace-23297"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23382"></a>
<a id="trace-23384"></a>
<a id="trace-23397"></a>
<a id="trace-23399"></a>
<a id="trace-23412"></a>
<a id="trace-23414"></a>
<a id="trace-23423"></a>
<a id="trace-23425"></a>
<a id="trace-23439"></a>
<a id="trace-23441"></a>
<a id="trace-23454"></a>
<a id="trace-23456"></a>
<a id="trace-23467"></a>
<a id="trace-23469"></a>
<a id="trace-23591"></a>
<a id="trace-23593"></a>
<a id="trace-23643"></a>
<a id="trace-23645"></a>
<a id="trace-23664"></a>
<a id="trace-23666"></a>
<a id="trace-23685"></a>
<a id="trace-23687"></a>
<a id="trace-23766"></a>
<a id="trace-23768"></a>
<a id="trace-23864"></a>
<a id="trace-23866"></a>
<a id="trace-23959"></a>
<a id="trace-23961"></a>
<a id="trace-24004"></a>
<a id="trace-24006"></a>
<a id="trace-24019"></a>
<a id="trace-24021"></a>
<a id="trace-24038"></a>
<a id="trace-24040"></a>
<a id="trace-24050"></a>
<a id="trace-24052"></a>
<a id="trace-24072"></a>
<a id="trace-24074"></a>
<a id="trace-24106"></a>
<a id="trace-24108"></a>
<a id="trace-24181"></a>
<a id="trace-24183"></a>
<a id="trace-24206"></a>
<a id="trace-24208"></a>
<a id="trace-24219"></a>
<a id="trace-24221"></a>
<a id="trace-24241"></a>
<a id="trace-24243"></a>
<a id="trace-24281"></a>
<a id="trace-24283"></a>
<a id="trace-24289"></a>
<a id="trace-24291"></a>
<a id="trace-24365"></a>
<a id="trace-24367"></a>
<a id="trace-24381"></a>
<a id="trace-24383"></a>
<a id="trace-24395"></a>
<a id="trace-24397"></a>
<a id="trace-24403"></a>
<a id="trace-24405"></a>
<a id="trace-24476"></a>
<a id="trace-24478"></a>
<a id="trace-24499"></a>
<a id="trace-24501"></a>
<a id="trace-24529"></a>
<a id="trace-24531"></a>
<a id="trace-24548"></a>
<a id="trace-24550"></a>
<a id="trace-24558"></a>
<a id="trace-24560"></a>
<a id="trace-24627"></a>
<a id="trace-24634"></a>
<a id="trace-24645"></a>
<a id="trace-24663"></a>
<a id="trace-24665"></a>
<a id="trace-24676"></a>
<a id="trace-24678"></a>
<a id="trace-24688"></a>
<a id="trace-24690"></a>
<a id="trace-24717"></a>
<a id="trace-24719"></a>
<a id="trace-24734"></a>
<a id="trace-24736"></a>
<a id="trace-24804"></a>
<a id="trace-24806"></a>
<a id="trace-24813"></a>
<a id="trace-24815"></a>
<a id="trace-24828"></a>
<a id="trace-24830"></a>
<a id="trace-24836"></a>
<a id="trace-24838"></a>
<a id="trace-24854"></a>
<a id="trace-24856"></a>
<a id="trace-24866"></a>
<a id="trace-24868"></a>
<a id="trace-24881"></a>
<a id="trace-24883"></a>
<a id="trace-24905"></a>
<a id="trace-24907"></a>
<a id="trace-24919"></a>
<a id="trace-24921"></a>
<a id="trace-24988"></a>
<a id="trace-24990"></a>
<a id="trace-25002"></a>
<a id="trace-25004"></a>
<a id="trace-25019"></a>
<a id="trace-25021"></a>
<a id="trace-25032"></a>
<a id="trace-25034"></a>
<a id="trace-25049"></a>
<a id="trace-25051"></a>
<a id="trace-25085"></a>
<a id="trace-25087"></a>
<a id="trace-25189"></a>
<a id="trace-25191"></a>
<a id="trace-25209"></a>
<a id="trace-25211"></a>
<a id="trace-25224"></a>
<a id="trace-25226"></a>
<a id="trace-25250"></a>
<a id="trace-25252"></a>
<a id="trace-25319"></a>
<a id="trace-25321"></a>
<a id="trace-25341"></a>
<a id="trace-25343"></a>
<a id="trace-25360"></a>
<a id="trace-25362"></a>
<a id="trace-25381"></a>
<a id="trace-25383"></a>
<a id="trace-25393"></a>
<a id="trace-25395"></a>
<a id="trace-25468"></a>
<a id="trace-25470"></a>
<a id="trace-25479"></a>
<a id="trace-25481"></a>
<a id="trace-25496"></a>
<a id="trace-25498"></a>
<a id="trace-25517"></a>
<a id="trace-25519"></a>
<a id="trace-25553"></a>
<a id="trace-25555"></a>
<a id="trace-25574"></a>
<a id="trace-25576"></a>
<a id="trace-25587"></a>
<a id="trace-25589"></a>
<a id="trace-25606"></a>
<a id="trace-25608"></a>
<a id="trace-25620"></a>
<a id="trace-25622"></a>
<a id="trace-25700"></a>
<a id="trace-25702"></a>
<a id="trace-25719"></a>
<a id="trace-25721"></a>
<a id="trace-25733"></a>
<a id="trace-25735"></a>
<a id="trace-25742"></a>
<a id="trace-25744"></a>
<a id="trace-25760"></a>
<a id="trace-25762"></a>
<a id="trace-25793"></a>
<a id="trace-25795"></a>
<a id="trace-25814"></a>
<a id="trace-25816"></a>
<a id="trace-25832"></a>
<a id="trace-25834"></a>
<a id="trace-25851"></a>
<a id="trace-25853"></a>
<a id="trace-25992"></a>
<a id="trace-25994"></a>
<a id="trace-26021"></a>
<a id="trace-26023"></a>
<a id="trace-26036"></a>
<a id="trace-26038"></a>
<a id="trace-26072"></a>
<a id="trace-26074"></a>
<a id="trace-26088"></a>
<a id="trace-26090"></a>
<a id="trace-26110"></a>
<a id="trace-26112"></a>
<a id="trace-26123"></a>
<a id="trace-26125"></a>
<a id="trace-26143"></a>
<a id="trace-26145"></a>
<a id="trace-26227"></a>
<a id="trace-26229"></a>
<a id="trace-26246"></a>
<a id="trace-26248"></a>
<a id="trace-26258"></a>
<a id="trace-26260"></a>
<a id="trace-26279"></a>
<a id="trace-26281"></a>
<a id="trace-26305"></a>
<a id="trace-26307"></a>
<a id="trace-26321"></a>
<a id="trace-26323"></a>
<a id="trace-26348"></a>
<a id="trace-26350"></a>
<a id="trace-26369"></a>
<a id="trace-26371"></a>
<a id="trace-26471"></a>
<a id="trace-26473"></a>
<a id="trace-26488"></a>
<a id="trace-26490"></a>
<a id="trace-26507"></a>
<a id="trace-26509"></a>
<a id="trace-26543"></a>
<a id="trace-26545"></a>
<a id="trace-26633"></a>
<a id="trace-26635"></a>
<a id="trace-26651"></a>
<a id="trace-26653"></a>
<a id="trace-26748"></a>
<a id="trace-26750"></a>
<a id="trace-26767"></a>
<a id="trace-26769"></a>
<a id="trace-26783"></a>
<a id="trace-26785"></a>
<a id="trace-26801"></a>
<a id="trace-26803"></a>
<a id="trace-26816"></a>
<a id="trace-26818"></a>
<a id="trace-26831"></a>
<a id="trace-26833"></a>
<a id="trace-26844"></a>
<a id="trace-26846"></a>
<a id="trace-26868"></a>
<a id="trace-26870"></a>
<a id="trace-26956"></a>
<a id="trace-26958"></a>
<a id="trace-26986"></a>
<a id="trace-26988"></a>
<a id="trace-27036"></a>
<a id="trace-27038"></a>
<a id="trace-27071"></a>
<a id="trace-27073"></a>
<a id="trace-27100"></a>
<a id="trace-27102"></a>
<a id="trace-27180"></a>
<a id="trace-27182"></a>
<a id="trace-27196"></a>
<a id="trace-27198"></a>
<a id="trace-27266"></a>
<a id="trace-27268"></a>
<a id="trace-27279"></a>
<a id="trace-27281"></a>
<a id="trace-27304"></a>
<a id="trace-27306"></a>
<a id="trace-27328"></a>
<a id="trace-27330"></a>
<a id="trace-27368"></a>
<a id="trace-27370"></a>
<a id="trace-27394"></a>
<a id="trace-27396"></a>
<a id="trace-27468"></a>
<a id="trace-27470"></a>
<a id="trace-27483"></a>
<a id="trace-27485"></a>
<a id="trace-27508"></a>
<a id="trace-27510"></a>
<a id="trace-27550"></a>
<a id="trace-27552"></a>
<a id="trace-27565"></a>
<a id="trace-27567"></a>
<a id="trace-27583"></a>
<a id="trace-27585"></a>
<a id="trace-27603"></a>
<a id="trace-27605"></a>
<a id="trace-27625"></a>
<a id="trace-27627"></a>
<a id="trace-27642"></a>
<a id="trace-27644"></a>
<a id="trace-27719"></a>
<a id="trace-27721"></a>
<a id="trace-27753"></a>
<a id="trace-27755"></a>
<a id="trace-27862"></a>
<a id="trace-27864"></a>
<a id="trace-27880"></a>
<a id="trace-27882"></a>
<a id="trace-27890"></a>
<a id="trace-27892"></a>
<a id="trace-27911"></a>
<a id="trace-27913"></a>
<a id="trace-27932"></a>
<a id="trace-27934"></a>
<a id="trace-28022"></a>
<a id="trace-28024"></a>
<a id="trace-28040"></a>
<a id="trace-28042"></a>
<a id="trace-28049"></a>
<a id="trace-28051"></a>
<a id="trace-28070"></a>
<a id="trace-28072"></a>
<a id="trace-28086"></a>
<a id="trace-28088"></a>
<a id="trace-28108"></a>
<a id="trace-28110"></a>
<a id="trace-28142"></a>
<a id="trace-28144"></a>
<a id="trace-28227"></a>
<a id="trace-28229"></a>
<a id="trace-28243"></a>
<a id="trace-28245"></a>
<a id="trace-28271"></a>
<a id="trace-28273"></a>
<a id="trace-28293"></a>
<a id="trace-28295"></a>
<a id="trace-28315"></a>
<a id="trace-28317"></a>
<a id="trace-28331"></a>
<a id="trace-28333"></a>
<a id="trace-28343"></a>
<a id="trace-28345"></a>
<a id="trace-28364"></a>
<a id="trace-28366"></a>
<a id="trace-28382"></a>
<a id="trace-28384"></a>
<a id="trace-28464"></a>
<a id="trace-28466"></a>
<a id="trace-28593"></a>
<a id="trace-28595"></a>
<a id="trace-28614"></a>
<a id="trace-28616"></a>
<a id="trace-28771"></a>
<a id="trace-28773"></a>
<a id="trace-28783"></a>
<a id="trace-28785"></a>
<a id="trace-28803"></a>
<a id="trace-28805"></a>
<a id="trace-28855"></a>
<a id="trace-28857"></a>
<a id="trace-28873"></a>
<a id="trace-28875"></a>
<a id="trace-28889"></a>
<a id="trace-28891"></a>
<a id="trace-28962"></a>
<a id="trace-28964"></a>
<a id="trace-28975"></a>
<a id="trace-28977"></a>
<a id="trace-28996"></a>
<a id="trace-28998"></a>
<a id="trace-29035"></a>
<a id="trace-29037"></a>
<a id="trace-29056"></a>
<a id="trace-29058"></a>
<a id="trace-29094"></a>
<a id="trace-29096"></a>
<a id="trace-29196"></a>
<a id="trace-29198"></a>
<a id="trace-29215"></a>
<a id="trace-29217"></a>
<a id="trace-29226"></a>
<a id="trace-29228"></a>
<a id="trace-29269"></a>
<a id="trace-29271"></a>
<a id="trace-29301"></a>
<a id="trace-29303"></a>
<a id="trace-29374"></a>
<a id="trace-29376"></a>
<a id="trace-29393"></a>
<a id="trace-29395"></a>
<a id="trace-29469"></a>
<a id="trace-29471"></a>
<a id="trace-29487"></a>
<a id="trace-29489"></a>
<a id="trace-29616"></a>
<a id="trace-29618"></a>
<a id="trace-29634"></a>
<a id="trace-29636"></a>
<a id="trace-29658"></a>
<a id="trace-29660"></a>
<a id="trace-29680"></a>
<a id="trace-29682"></a>
<a id="trace-29704"></a>
<a id="trace-29706"></a>
<a id="trace-29738"></a>
<a id="trace-29740"></a>
<a id="trace-29749"></a>
<a id="trace-29751"></a>
<a id="trace-29825"></a>
<a id="trace-29827"></a>
<a id="trace-29859"></a>
<a id="trace-29861"></a>
<a id="trace-29897"></a>
<a id="trace-29899"></a>
<a id="trace-29912"></a>
<a id="trace-29914"></a>
<a id="trace-29930"></a>
<a id="trace-29932"></a>
<a id="trace-29945"></a>
<a id="trace-29947"></a>
<a id="trace-29969"></a>
<a id="trace-29971"></a>
<a id="trace-29986"></a>
<a id="trace-29988"></a>
<a id="trace-30066"></a>
<a id="trace-30068"></a>
<a id="trace-30076"></a>
<a id="trace-30078"></a>
<a id="trace-30149"></a>
<a id="trace-30151"></a>
<a id="trace-30164"></a>
<a id="trace-30166"></a>
<a id="trace-30177"></a>
<a id="trace-30179"></a>
<a id="trace-30198"></a>
<a id="trace-30200"></a>
<a id="trace-30215"></a>
<a id="trace-30217"></a>
<a id="trace-30230"></a>
<a id="trace-30232"></a>
<a id="trace-30252"></a>
<a id="trace-30254"></a>
<a id="trace-30272"></a>
<a id="trace-30274"></a>
<a id="trace-30353"></a>
<a id="trace-30355"></a>
<a id="trace-30366"></a>
<a id="trace-30368"></a>
<a id="trace-30383"></a>
<a id="trace-30385"></a>
<a id="trace-30394"></a>
<a id="trace-30396"></a>
<a id="trace-30524"></a>
<a id="trace-30526"></a>
<a id="trace-30541"></a>
<a id="trace-30543"></a>
<a id="trace-30560"></a>
<a id="trace-30562"></a>
<a id="trace-30651"></a>
<a id="trace-30653"></a>
<a id="trace-30667"></a>
<a id="trace-30669"></a>
<a id="trace-30751"></a>
<a id="trace-30753"></a>
<a id="trace-30762"></a>
<a id="trace-30764"></a>
<a id="trace-30888"></a>
<a id="trace-30890"></a>
<a id="trace-30921"></a>
<a id="trace-30923"></a>
<a id="trace-30936"></a>
<a id="trace-30938"></a>
<a id="trace-30959"></a>
<a id="trace-30961"></a>
<a id="trace-30980"></a>
<a id="trace-30982"></a>
<a id="trace-31124"></a>
<a id="trace-31126"></a>
<a id="trace-31137"></a>
<a id="trace-31139"></a>
<a id="trace-31240"></a>
<a id="trace-31242"></a>
<a id="trace-31254"></a>
<a id="trace-31256"></a>
<a id="trace-31277"></a>
<a id="trace-31279"></a>
<a id="trace-31289"></a>
<a id="trace-31291"></a>
<a id="trace-31422"></a>
<a id="trace-31424"></a>
<a id="trace-31439"></a>
<a id="trace-31441"></a>
<a id="trace-31546"></a>
<a id="trace-31548"></a>
<a id="trace-31558"></a>
<a id="trace-31560"></a>
<a id="trace-31578"></a>
<a id="trace-31580"></a>
<a id="trace-31590"></a>
<a id="trace-31592"></a>
<a id="trace-31618"></a>
<a id="trace-31620"></a>
<a id="trace-31636"></a>
<a id="trace-31638"></a>
<a id="trace-31651"></a>
<a id="trace-31653"></a>
<a id="trace-31670"></a>
<a id="trace-31672"></a>
<a id="trace-31679"></a>
<a id="trace-31681"></a>
<a id="trace-31753"></a>
<a id="trace-31755"></a>
<a id="trace-31782"></a>
<a id="trace-31784"></a>
<a id="trace-31795"></a>
<a id="trace-31797"></a>
<a id="trace-31831"></a>
<a id="trace-31833"></a>
<a id="trace-31885"></a>
<a id="trace-31887"></a>
<a id="trace-31902"></a>
<a id="trace-31904"></a>
<a id="trace-32034"></a>
<a id="trace-32036"></a>
<a id="trace-32056"></a>
<a id="trace-32058"></a>
<a id="trace-32084"></a>
<a id="trace-32086"></a>
<a id="trace-32099"></a>
<a id="trace-32101"></a>
<a id="trace-32142"></a>
<a id="trace-32144"></a>
<a id="trace-32154"></a>
<a id="trace-32156"></a>
<a id="trace-32232"></a>
<a id="trace-32234"></a>
<a id="trace-32246"></a>
<a id="trace-32248"></a>
<a id="trace-32265"></a>
<a id="trace-32267"></a>
<a id="trace-32272"></a>
<a id="trace-32274"></a>
<a id="trace-32293"></a>
<a id="trace-32295"></a>
<a id="trace-32307"></a>
<a id="trace-32309"></a>
<a id="trace-32322"></a>
<a id="trace-32324"></a>
<a id="trace-32330"></a>
<a id="trace-32332"></a>
<a id="trace-32349"></a>
<a id="trace-32351"></a>
<a id="trace-32360"></a>
<a id="trace-32362"></a>
<a id="trace-32432"></a>
<a id="trace-32434"></a>
<a id="trace-32447"></a>
<a id="trace-32449"></a>
<a id="trace-32486"></a>
<a id="trace-32488"></a>
<a id="trace-32501"></a>
<a id="trace-32503"></a>
<a id="trace-32517"></a>
<a id="trace-32519"></a>
<a id="trace-32526"></a>
<a id="trace-32528"></a>
<a id="trace-32546"></a>
<a id="trace-32548"></a>
<a id="trace-32628"></a>
<a id="trace-32630"></a>
<a id="trace-32638"></a>
<a id="trace-32640"></a>
<a id="trace-32716"></a>
<a id="trace-32718"></a>
<a id="trace-32732"></a>
<a id="trace-32734"></a>
<a id="trace-32751"></a>
<a id="trace-32753"></a>
<a id="trace-32775"></a>
<a id="trace-32777"></a>
<a id="trace-32785"></a>
<a id="trace-32787"></a>
<a id="trace-32823"></a>
<a id="trace-32825"></a>
<a id="trace-32891"></a>
<a id="trace-32893"></a>
<a id="trace-32920"></a>
<a id="trace-32922"></a>
<a id="trace-32928"></a>
<a id="trace-32930"></a>
<a id="trace-32941"></a>
<a id="trace-32943"></a>
<a id="trace-32971"></a>
<a id="trace-32973"></a>
<a id="trace-32983"></a>
<a id="trace-32985"></a>
<a id="trace-32999"></a>
<a id="trace-33001"></a>
<a id="trace-33081"></a>
<a id="trace-33083"></a>
<a id="trace-33128"></a>
<a id="trace-33130"></a>
<a id="trace-33145"></a>
<a id="trace-33147"></a>
<a id="trace-33158"></a>
<a id="trace-33160"></a>
<a id="trace-33172"></a>
<a id="trace-33174"></a>
<a id="trace-33202"></a>
<a id="trace-33204"></a>
<a id="trace-33274"></a>
<a id="trace-33276"></a>
<a id="trace-33289"></a>
<a id="trace-33291"></a>
<a id="trace-33303"></a>
<a id="trace-33305"></a>
<a id="trace-33323"></a>
<a id="trace-33325"></a>
<a id="trace-33334"></a>
<a id="trace-33336"></a>
<a id="trace-33348"></a>
<a id="trace-33350"></a>
<a id="trace-33372"></a>
<a id="trace-33374"></a>
<a id="trace-33386"></a>
<a id="trace-33388"></a>
<a id="trace-33453"></a>
<a id="trace-33455"></a>
<a id="trace-33518"></a>
<a id="trace-33520"></a>
<a id="trace-33572"></a>
<a id="trace-33574"></a>
<a id="trace-33594"></a>
<a id="trace-33596"></a>
<a id="trace-33608"></a>
<a id="trace-33610"></a>
<a id="trace-33626"></a>
<a id="trace-33628"></a>
<a id="trace-33639"></a>
<a id="trace-33641"></a>
<a id="trace-33707"></a>
<a id="trace-33709"></a>
<a id="trace-33730"></a>
<a id="trace-33732"></a>
<a id="trace-33742"></a>
<a id="trace-33744"></a>
<a id="trace-33761"></a>
<a id="trace-33763"></a>
<a id="trace-33785"></a>
<a id="trace-33787"></a>
<a id="trace-33797"></a>
<a id="trace-33799"></a>
<a id="trace-33814"></a>
<a id="trace-33816"></a>
<a id="trace-33825"></a>
<a id="trace-33827"></a>
<a id="trace-33909"></a>
<a id="trace-33911"></a>
<a id="trace-33941"></a>
<a id="trace-33943"></a>
<a id="trace-34012"></a>
<a id="trace-34014"></a>
<a id="trace-34033"></a>
<a id="trace-34035"></a>
<a id="trace-34048"></a>
<a id="trace-34050"></a>
<a id="trace-34060"></a>
<a id="trace-34062"></a>
<a id="trace-34190"></a>
<a id="trace-34192"></a>
<a id="trace-34207"></a>
<a id="trace-34209"></a>
<a id="trace-34219"></a>
<a id="trace-34221"></a>
<a id="trace-34232"></a>
<a id="trace-34234"></a>
<a id="trace-34247"></a>
<a id="trace-34249"></a>
<a id="trace-34267"></a>
<a id="trace-34269"></a>
<a id="trace-34282"></a>
<a id="trace-34284"></a>
<a id="trace-34303"></a>
<a id="trace-34305"></a>
<a id="trace-34314"></a>
<a id="trace-34316"></a>
<a id="trace-34388"></a>
<a id="trace-34390"></a>
<a id="trace-34406"></a>
<a id="trace-34408"></a>
<a id="trace-34424"></a>
<a id="trace-34426"></a>
<a id="trace-34436"></a>
<a id="trace-34438"></a>
<a id="trace-34477"></a>
<a id="trace-34479"></a>
<a id="trace-34504"></a>
<a id="trace-34506"></a>
<a id="trace-34519"></a>
<a id="trace-34521"></a>
<a id="trace-34538"></a>
<a id="trace-34540"></a>
<a id="trace-34553"></a>
<a id="trace-34555"></a>
<a id="trace-34634"></a>
<a id="trace-34636"></a>
<a id="trace-34654"></a>
<a id="trace-34656"></a>
<a id="trace-34666"></a>
<a id="trace-34668"></a>
<a id="trace-34691"></a>
<a id="trace-34693"></a>
<a id="trace-34794"></a>
<a id="trace-34796"></a>
<a id="trace-34814"></a>
<a id="trace-34816"></a>
<a id="trace-34834"></a>
<a id="trace-34836"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 953): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362537628536318, 'next_transition': 1303}.
<a id="trace-971"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 971): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299909593039699, 'next_transition': 1299}.
<a id="trace-1299"></a>
<a id="trace-1301"></a>
<a id="trace-1337"></a>
<a id="trace-1339"></a>
<a id="trace-1379"></a>
<a id="trace-1381"></a>
<a id="trace-1418"></a>
<a id="trace-1420"></a>
<a id="trace-1452"></a>
<a id="trace-1454"></a>
<a id="trace-1499"></a>
<a id="trace-1501"></a>
<a id="trace-1533"></a>
<a id="trace-1535"></a>
<a id="trace-1559"></a>
<a id="trace-1561"></a>
<a id="trace-1650"></a>
<a id="trace-1652"></a>
<a id="trace-1675"></a>
<a id="trace-1677"></a>
<a id="trace-1699"></a>
<a id="trace-1701"></a>
<a id="trace-1729"></a>
<a id="trace-1731"></a>
<a id="trace-1759"></a>
<a id="trace-1761"></a>
<a id="trace-1785"></a>
<a id="trace-1787"></a>
<a id="trace-1810"></a>
<a id="trace-1812"></a>
<a id="trace-1827"></a>
<a id="trace-1829"></a>
<a id="trace-1855"></a>
<a id="trace-1857"></a>
<a id="trace-1959"></a>
<a id="trace-1961"></a>
<a id="trace-2048"></a>
<a id="trace-2050"></a>
<a id="trace-2073"></a>
<a id="trace-2075"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1299): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600136880238906, 'next_transition': 1337}.
<a id="trace-1864"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1864): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1579. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.500073578405882, 'next_transition': 2935}.
<a id="trace-2082"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2082): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1973. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4367487889248024, 'next_transition': 2400}.
<a id="trace-2400"></a>
<a id="trace-2402"></a>
<a id="trace-2438"></a>
<a id="trace-2440"></a>
<a id="trace-2464"></a>
<a id="trace-2466"></a>
<a id="trace-2484"></a>
<a id="trace-2486"></a>
<a id="trace-2522"></a>
<a id="trace-2524"></a>
<a id="trace-2552"></a>
<a id="trace-2554"></a>
<a id="trace-2572"></a>
<a id="trace-2574"></a>
<a id="trace-2599"></a>
<a id="trace-2601"></a>
<a id="trace-2690"></a>
<a id="trace-2692"></a>
<a id="trace-2721"></a>
<a id="trace-2723"></a>
<a id="trace-2747"></a>
<a id="trace-2749"></a>
<a id="trace-2775"></a>
<a id="trace-2777"></a>
<a id="trace-2812"></a>
<a id="trace-2814"></a>
<a id="trace-2837"></a>
<a id="trace-2839"></a>
<a id="trace-2865"></a>
<a id="trace-2867"></a>
<a id="trace-2892"></a>
<a id="trace-2894"></a>
<a id="trace-2917"></a>
<a id="trace-2919"></a>
<a id="trace-2956"></a>
<a id="trace-2958"></a>
<a id="trace-3037"></a>
<a id="trace-3039"></a>
<a id="trace-3056"></a>
<a id="trace-3058"></a>
<a id="trace-3091"></a>
<a id="trace-3093"></a>
<a id="trace-3104"></a>
<a id="trace-3106"></a>
<a id="trace-3124"></a>
<a id="trace-3126"></a>
- 16.25s–27.25s (×46), actor 5, squad 0 (trace 2400): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1978. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09844029094456157, 'next_transition': 2438}.
<a id="trace-2935"></a>
- 24.60s–24.60s (×1), actor 8, squad 1 (trace 2935): matching received arrivals: deployment leg complete. Knowledge: actor memory at 20.00s, trace 2619. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 272}.
<a id="trace-3131"></a>
- 27.25s–27.25s (×1), actor 0, squad 0 (trace 3131): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 2964. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150003616267012, 'next_transition': 3136}.
<a id="trace-3136"></a>
<a id="trace-3138"></a>
<a id="trace-3163"></a>
<a id="trace-3165"></a>
<a id="trace-3184"></a>
<a id="trace-3186"></a>
<a id="trace-3202"></a>
<a id="trace-3204"></a>
<a id="trace-3218"></a>
<a id="trace-3220"></a>
<a id="trace-3465"></a>
<a id="trace-3467"></a>
<a id="trace-3485"></a>
<a id="trace-3487"></a>
- 27.75s–30.75s (×14), actor 5, squad 0 (trace 3136): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2969. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725128205932613, 'next_transition': 3163}.
<a id="trace-272"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (events line 272): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3172"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3172): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3172. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3223}.
<a id="trace-3173"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3173): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3173. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3223}.
<a id="trace-3223"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3223): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 2972. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.169487366734984, 'next_transition': 5404}.
<a id="trace-3226"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3226): MoveTactically. Knowledge: actor memory at 25.00s, trace 2972. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.169487366734984, 'next_transition': 5404}.
<a id="trace-3227"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3227): traveling overwatch. Knowledge: actor memory at 25.00s, trace 2972. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.169487366734984, 'next_transition': 5404}.
<a id="trace-3228"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3228): Reorganise complete. Knowledge: actor memory at 25.00s, trace 2972. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.169487366734984, 'next_transition': 5404}.
<a id="trace-301"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (events line 301): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3496"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 3496): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 3496. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3506}.
<a id="trace-3497"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 3497): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 3497. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3506}.
<a id="trace-3506"></a>
<a id="trace-3508"></a>
<a id="trace-3518"></a>
<a id="trace-3520"></a>
<a id="trace-3537"></a>
<a id="trace-3539"></a>
<a id="trace-3549"></a>
<a id="trace-3551"></a>
<a id="trace-3567"></a>
<a id="trace-3569"></a>
- 31.25s–33.25s (×10), actor 5, squad 0 (trace 3506): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 3497. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3518}.
<a id="trace-3577"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 3577): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 3384. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3936}.
<a id="trace-3584"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 3584): MoveTactically. Knowledge: actor memory at 30.00s, trace 3384. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3936}.
<a id="trace-3585"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 3585): traveling overwatch. Knowledge: actor memory at 30.00s, trace 3384. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3936}.
<a id="trace-3586"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 3586): Reorganise complete. Knowledge: actor memory at 30.00s, trace 3384. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3936}.
<a id="trace-3936"></a>
<a id="trace-3938"></a>
<a id="trace-3951"></a>
<a id="trace-3953"></a>
- 33.75s–34.25s (×4), actor 5, squad 0 (trace 3936): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 3497. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3951}.
<a id="trace-3974"></a>
- 34.55s–34.55s (×1), actor 0, squad 0 (trace 3974): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 3384. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04244398059869618, 'next_transition': 4337}.
<a id="trace-3975"></a>
- 34.55s–34.55s (×1), actor 0, squad 0 (trace 3975): bounding overwatch. Knowledge: actor memory at 30.00s, trace 3384. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04244398059869618, 'next_transition': 4337}.
<a id="trace-3976"></a>
- 34.55s–34.55s (×1), actor 0, squad 0 (trace 3976): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 3384. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04244398059869618, 'next_transition': 4337}.
<a id="trace-4337"></a>
<a id="trace-4339"></a>
- 34.75s–34.75s (×2), actor 5, squad 0 (trace 4337): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 3497. Next observer evidence: {'until': 35, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37369330828485087, 'next_transition': 4374}.
<a id="trace-4374"></a>
- 35.00s–35.00s (×1), actor 0, squad 0 (trace 4374): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4354. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3538746039652757, 'next_transition': 4779}.
<a id="trace-4779"></a>
<a id="trace-4781"></a>
<a id="trace-4816"></a>
<a id="trace-4818"></a>
- 35.25s–35.75s (×4), actor 5, squad 0 (trace 4779): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4359. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6777560698109387, 'next_transition': 4816}.
<a id="trace-4836"></a>
- 36.00s–36.00s (×1), actor 0, squad 0 (trace 4836): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4354. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3576965875415536, 'next_transition': 5226}.
<a id="trace-5226"></a>
<a id="trace-5228"></a>
<a id="trace-5270"></a>
<a id="trace-5272"></a>
<a id="trace-5327"></a>
<a id="trace-5329"></a>
<a id="trace-5375"></a>
<a id="trace-5377"></a>
<a id="trace-5757"></a>
<a id="trace-5759"></a>
- 36.25s–38.25s (×10), actor 5, squad 0 (trace 5226): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4359. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.628948876928441, 'next_transition': 5270}.
<a id="trace-5404"></a>
- 38.10s–38.10s (×1), actor 8, squad 1 (trace 5404): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4362. Next observer evidence: None.
<a id="trace-5405"></a>
- 38.10s–38.10s (×1), actor 8, squad 1 (trace 5405): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4362. Next observer evidence: None.
<a id="trace-5406"></a>
<a id="trace-5581"></a>
<a id="trace-5764"></a>
- 38.10s–38.25s (×3), actor 8, squad 1 (trace 5406): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4362. Next observer evidence: None.
<a id="trace-446"></a>
- 38.35s–38.35s (×1), actor 5, squad 0 (events line 446): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-447"></a>
- 38.35s–38.35s (×1), actor 5, squad 1 (events line 447): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5935"></a>
- 38.35s–38.35s (×1), actor 5, squad 0 (trace 5935): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.352802 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 5935. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7059704229032236, 'next_transition': 6134}.
<a id="trace-5936"></a>
- 38.35s–38.35s (×1), actor 5, squad 0 (trace 5936): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.352802 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 5936. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7059704229032236, 'next_transition': 6134}.
<a id="trace-5937"></a>
- 38.35s–38.35s (×1), actor 5, squad 1 (trace 5937): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.352802 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 5937. Next observer evidence: {'until': 38.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5666160895636576, 'next_transition': 5944}.
<a id="trace-5938"></a>
- 38.35s–38.35s (×1), actor 5, squad 1 (trace 5938): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.352802 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 5938. Next observer evidence: {'until': 38.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5666160895636576, 'next_transition': 5944}.
<a id="trace-5944"></a>
- 38.45s–38.45s (×1), actor 8, squad 1 (trace 5944): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4362. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.557014893684, 'next_transition': 6477}.
<a id="trace-6134"></a>
<a id="trace-6136"></a>
<a id="trace-6207"></a>
<a id="trace-6209"></a>
- 38.75s–39.25s (×4), actor 5, squad 0 (trace 6134): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.35s, trace 5938. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9559129580242612, 'next_transition': 6207}.
<a id="trace-6234"></a>
- 39.55s–39.55s (×1), actor 0, squad 0 (trace 6234): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 4354. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26136560933673736, 'next_transition': 6250}.
<a id="trace-6250"></a>
<a id="trace-6252"></a>
<a id="trace-6368"></a>
<a id="trace-6370"></a>
<a id="trace-6419"></a>
<a id="trace-6421"></a>
<a id="trace-6453"></a>
<a id="trace-6455"></a>
<a id="trace-6471"></a>
<a id="trace-6473"></a>
<a id="trace-6506"></a>
<a id="trace-6508"></a>
<a id="trace-6696"></a>
<a id="trace-6698"></a>
<a id="trace-6727"></a>
<a id="trace-6729"></a>
<a id="trace-6758"></a>
<a id="trace-6760"></a>
<a id="trace-6798"></a>
<a id="trace-6800"></a>
<a id="trace-6830"></a>
<a id="trace-6832"></a>
<a id="trace-6925"></a>
<a id="trace-6927"></a>
<a id="trace-7283"></a>
<a id="trace-7285"></a>
<a id="trace-7323"></a>
<a id="trace-7325"></a>
<a id="trace-7346"></a>
<a id="trace-7348"></a>
- 39.75s–46.75s (×30), actor 5, squad 0 (trace 6250): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.35s, trace 5938. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8246737720878754, 'next_transition': 6368}.
<a id="trace-6477"></a>
- 41.80s–41.80s (×1), actor 8, squad 1 (trace 6477): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 6289. Next observer evidence: {'until': 41.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26945861509701263, 'next_transition': 6479}.
<a id="trace-6479"></a>
- 41.85s–41.85s (×1), actor 8, squad 1 (trace 6479): received platoon directive; retain contact cover stage. Knowledge: actor memory at 40.00s, trace 6289. Next observer evidence: {'until': 42.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09464454989591313, 'next_transition': 6521}.
<a id="trace-6521"></a>
- 42.50s–42.50s (×1), actor 8, squad 1 (trace 6521): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 6289. Next observer evidence: {'until': 45.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.146360942549345, 'next_transition': 6934}.
<a id="trace-6934"></a>
<a id="trace-7102"></a>
- 45.30s–45.35s (×2), actor 8, squad 1 (trace 6934): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 6855. Next observer evidence: None.
<a id="trace-577"></a>
- 45.85s–45.85s (×1), actor 5, squad 1 (events line 577): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7298"></a>
- 45.85s–45.85s (×1), actor 5, squad 1 (trace 7298): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.968867 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 7298. Next observer evidence: {'until': 48.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 4.19280898945352, 'next_transition': 11110}.
<a id="trace-7299"></a>
- 45.85s–45.85s (×1), actor 5, squad 1 (trace 7299): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.968867 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 7299. Next observer evidence: {'until': 48.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 4.19280898945352, 'next_transition': 11110}.
<a id="trace-7354"></a>
- 46.75s–46.75s (×1), actor 0, squad 0 (trace 7354): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 6847. Next observer evidence: {'until': 47, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7368}.
<a id="trace-7368"></a>
- 47.00s–47.00s (×1), actor 0, squad 0 (trace 7368): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 6847. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10550}.
<a id="trace-10302"></a>
- 47.00s–47.00s (×1), actor 0, squad 0 (trace 10302): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 6847. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10550}.
<a id="trace-10303"></a>
- 47.00s–47.00s (×1), actor 0, squad 0 (trace 10303): MoveTactically. Knowledge: actor memory at 45.00s, trace 6847. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10550}.
<a id="trace-10304"></a>
- 47.00s–47.00s (×1), actor 0, squad 0 (trace 10304): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 6847. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10550}.
<a id="trace-10550"></a>
<a id="trace-10552"></a>
<a id="trace-10583"></a>
<a id="trace-10585"></a>
- 47.25s–47.75s (×4), actor 5, squad 0 (trace 10550): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.85s, trace 7299. Next observer evidence: {'until': 47.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10583}.
<a id="trace-10591"></a>
- 47.75s–47.75s (×1), actor 0, squad 0 (trace 10591): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 6847. Next observer evidence: {'until': 48.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07875426749338435, 'next_transition': 11079}.
<a id="trace-10592"></a>
- 47.75s–47.75s (×1), actor 0, squad 0 (trace 10592): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 6847. Next observer evidence: {'until': 48.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07875426749338435, 'next_transition': 11079}.
<a id="trace-11079"></a>
<a id="trace-11081"></a>
<a id="trace-11117"></a>
<a id="trace-11119"></a>
<a id="trace-11159"></a>
<a id="trace-11161"></a>
- 48.25s–49.25s (×6), actor 5, squad 0 (trace 11079): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.85s, trace 7299. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5315542650455899, 'next_transition': 11117}.
<a id="trace-11110"></a>
- 48.70s–48.70s (×1), actor 8, squad 1 (trace 11110): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 6855. Next observer evidence: None.
<a id="trace-11126"></a>
- 48.75s–48.75s (×1), actor 8, squad 1 (trace 11126): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 6855. Next observer evidence: {'until': 50.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.149999430421734, 'next_transition': 11356}.
<a id="trace-11176"></a>
- 49.40s–49.40s (×1), actor 0, squad 0 (trace 11176): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 45.00s, trace 6847. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3845604019752319, 'next_transition': 11194}.
<a id="trace-11194"></a>
<a id="trace-11196"></a>
<a id="trace-11314"></a>
<a id="trace-11316"></a>
<a id="trace-11363"></a>
<a id="trace-11365"></a>
<a id="trace-11395"></a>
<a id="trace-11397"></a>
- 49.75s–51.25s (×8), actor 5, squad 0 (trace 11194): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.85s, trace 7299. Next observer evidence: {'until': 50.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8222333960165537, 'next_transition': 11314}.
<a id="trace-11356"></a>
- 50.65s–50.65s (×1), actor 8, squad 1 (trace 11356): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 50.00s, trace 11231. Next observer evidence: {'until': 52, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7723876181651128, 'next_transition': 722}.
<a id="trace-11409"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 11409): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 11223. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34767843709727975, 'next_transition': 11429}.
<a id="trace-11411"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 11411): Fixing. Knowledge: actor memory at 50.00s, trace 11223. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34767843709727975, 'next_transition': 11429}.
<a id="trace-11429"></a>
<a id="trace-11431"></a>
<a id="trace-11473"></a>
<a id="trace-11475"></a>
<a id="trace-11504"></a>
<a id="trace-11506"></a>
<a id="trace-11697"></a>
<a id="trace-11699"></a>
- 51.75s–53.25s (×8), actor 5, squad 0 (trace 11429): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11228. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42920886288339816, 'next_transition': 11473}.
<a id="trace-722"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (events line 722): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11458"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 11458): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.963034 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 11458. Next observer evidence: {'until': 53, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11508225623439942, 'next_transition': 11520}.
<a id="trace-11459"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 11459): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.963034 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 11459. Next observer evidence: {'until': 53, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11508225623439942, 'next_transition': 11520}.
<a id="trace-11520"></a>
- 53.00s–53.00s (×1), actor 8, squad 1 (trace 11520): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 11231. Next observer evidence: {'until': 56.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5950172423762191, 'next_transition': 12395}.
<a id="trace-11721"></a>
- 53.55s–53.55s (×1), actor 0, squad 0 (trace 11721): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 11223. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03995629371966951, 'next_transition': 12165}.
<a id="trace-12165"></a>
<a id="trace-12167"></a>
<a id="trace-12195"></a>
<a id="trace-12197"></a>
<a id="trace-12232"></a>
<a id="trace-12234"></a>
<a id="trace-12328"></a>
<a id="trace-12330"></a>
<a id="trace-12344"></a>
<a id="trace-12346"></a>
<a id="trace-12386"></a>
<a id="trace-12388"></a>
<a id="trace-12422"></a>
<a id="trace-12424"></a>
- 53.75s–56.75s (×14), actor 5, squad 0 (trace 12165): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.10s, trace 11459. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12445944535897026, 'next_transition': 12195}.
<a id="trace-12395"></a>
- 56.35s–56.35s (×1), actor 8, squad 1 (trace 12395): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 12258. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1378807154753701, 'next_transition': 12397}.
<a id="trace-12397"></a>
- 56.40s–56.40s (×1), actor 8, squad 1 (trace 12397): received platoon directive; retain contact cover stage. Knowledge: actor memory at 55.00s, trace 12258. Next observer evidence: {'until': 57.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4336017969363555, 'next_transition': 12471}.
<a id="trace-12444"></a>
- 57.15s–57.15s (×1), actor 0, squad 0 (trace 12444): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 12250. Next observer evidence: {'until': 57.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.10188944465416613, 'next_transition': 12459}.
<a id="trace-12459"></a>
<a id="trace-12461"></a>
<a id="trace-12852"></a>
<a id="trace-12854"></a>
<a id="trace-12886"></a>
<a id="trace-12888"></a>
<a id="trace-12909"></a>
<a id="trace-12911"></a>
<a id="trace-12937"></a>
<a id="trace-12939"></a>
- 57.25s–59.25s (×10), actor 5, squad 0 (trace 12459): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12255. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1884127147459768, 'next_transition': 12852}.
<a id="trace-12471"></a>
- 57.50s–57.50s (×1), actor 8, squad 1 (trace 12471): NeedSupport. Knowledge: actor memory at 55.00s, trace 12258. Next observer evidence: None.
<a id="trace-12668"></a>
- 57.55s–57.55s (×1), actor 8, squad 1 (trace 12668): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 55.00s, trace 12258. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15782497299223575, 'next_transition': 12671}.
<a id="trace-12669"></a>
- 57.55s–57.55s (×1), actor 8, squad 1 (trace 12669): answered caller: no covered flank; Reorganise then supported fire and movement. Knowledge: actor memory at 55.00s, trace 12258. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15782497299223575, 'next_transition': 12671}.
<a id="trace-12671"></a>
- 57.60s–57.60s (×1), actor 8, squad 1 (trace 12671): Reorganise: completed/failed drill. Knowledge: actor memory at 55.00s, trace 12258. Next observer evidence: {'until': 60.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.127867140901357, 'next_transition': 868}.
<a id="trace-12674"></a>
- 57.60s–57.60s (×1), actor 8, squad 1 (trace 12674): MoveTactically. Knowledge: actor memory at 55.00s, trace 12258. Next observer evidence: {'until': 60.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.127867140901357, 'next_transition': 868}.
<a id="trace-12675"></a>
- 57.60s–57.60s (×1), actor 8, squad 1 (trace 12675): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 55.00s, trace 12258. Next observer evidence: {'until': 60.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.127867140901357, 'next_transition': 868}.
<a id="trace-12951"></a>
- 59.40s–59.40s (×1), actor 0, squad 0 (trace 12951): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 12250. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05437111698779047, 'next_transition': 15321}.
<a id="trace-12952"></a>
- 59.40s–59.40s (×1), actor 0, squad 0 (trace 12952): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 55.00s, trace 12250. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05437111698779047, 'next_transition': 15321}.
<a id="trace-15321"></a>
<a id="trace-15323"></a>
<a id="trace-15417"></a>
<a id="trace-15419"></a>
<a id="trace-15446"></a>
<a id="trace-15448"></a>
<a id="trace-15483"></a>
<a id="trace-15485"></a>
<a id="trace-15520"></a>
<a id="trace-15522"></a>
- 59.75s–61.75s (×10), actor 5, squad 0 (trace 15321): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 12255. Next observer evidence: {'until': 60.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.1392814446150761, 'next_transition': 15417}.
<a id="trace-868"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (events line 868): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15460"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (trace 15460): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.849284 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 15460. Next observer evidence: {'until': 62.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13866489867662957, 'next_transition': 15606}.
<a id="trace-15461"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (trace 15461): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.849284 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 15461. Next observer evidence: {'until': 62.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13866489867662957, 'next_transition': 15606}.
<a id="trace-906"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (events line 906): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15555"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 15555): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.852137 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 15555. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11036964364244412, 'next_transition': 15583}.
<a id="trace-15556"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 15556): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.852137 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 15556. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11036964364244412, 'next_transition': 15583}.
<a id="trace-15583"></a>
<a id="trace-15585"></a>
<a id="trace-15792"></a>
<a id="trace-15794"></a>
<a id="trace-15830"></a>
<a id="trace-15832"></a>
<a id="trace-15861"></a>
<a id="trace-15863"></a>
<a id="trace-15885"></a>
<a id="trace-15887"></a>
<a id="trace-15906"></a>
<a id="trace-15908"></a>
<a id="trace-15988"></a>
<a id="trace-15990"></a>
<a id="trace-16004"></a>
<a id="trace-16006"></a>
<a id="trace-16020"></a>
<a id="trace-16022"></a>
<a id="trace-16035"></a>
<a id="trace-16037"></a>
<a id="trace-16052"></a>
<a id="trace-16054"></a>
<a id="trace-16063"></a>
<a id="trace-16065"></a>
<a id="trace-16084"></a>
<a id="trace-16086"></a>
<a id="trace-16095"></a>
<a id="trace-16097"></a>
<a id="trace-16170"></a>
<a id="trace-16172"></a>
<a id="trace-16190"></a>
<a id="trace-16192"></a>
<a id="trace-16272"></a>
<a id="trace-16274"></a>
<a id="trace-16292"></a>
<a id="trace-16294"></a>
<a id="trace-16311"></a>
<a id="trace-16313"></a>
<a id="trace-16325"></a>
<a id="trace-16327"></a>
<a id="trace-16397"></a>
<a id="trace-16399"></a>
<a id="trace-16412"></a>
<a id="trace-16414"></a>
<a id="trace-16434"></a>
<a id="trace-16436"></a>
<a id="trace-16446"></a>
<a id="trace-16448"></a>
<a id="trace-16462"></a>
<a id="trace-16464"></a>
<a id="trace-16477"></a>
<a id="trace-16479"></a>
- 62.25s–74.75s (×52), actor 5, squad 0 (trace 15583): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 15556. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22303328097749456, 'next_transition': 15792}.
<a id="trace-15606"></a>
- 62.55s–62.55s (×1), actor 8, squad 1 (trace 15606): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 15342. Next observer evidence: {'until': 66.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.610765811195257, 'next_transition': 16028}.
<a id="trace-15607"></a>
- 62.55s–62.55s (×1), actor 8, squad 1 (trace 15607): received platoon directive. Knowledge: actor memory at 60.00s, trace 15342. Next observer evidence: {'until': 66.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.610765811195257, 'next_transition': 16028}.
<a id="trace-16028"></a>
- 66.45s–66.45s (×1), actor 9, squad 1 (trace 16028): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 65.00s, trace 15927. Next observer evidence: {'until': 69, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16110}.
<a id="trace-16030"></a>
- 66.45s–66.45s (×1), actor 9, squad 1 (trace 16030): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 65.00s, trace 15927. Next observer evidence: {'until': 69, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16110}.
<a id="trace-16110"></a>
- 69.15s–69.15s (×1), actor 9, squad 1 (trace 16110): MoveTactically. Knowledge: actor memory at 65.00s, trace 15927. Next observer evidence: {'until': 70.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.9869980334944986, 'next_transition': 1053}.
<a id="trace-16111"></a>
- 69.15s–69.15s (×1), actor 9, squad 1 (trace 16111): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 65.00s, trace 15927. Next observer evidence: {'until': 70.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.9869980334944986, 'next_transition': 1053}.
<a id="trace-1053"></a>
- 70.55s–70.55s (×1), actor 5, squad 1 (events line 1053): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16282"></a>
- 70.55s–70.55s (×1), actor 5, squad 1 (trace 16282): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.761029 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 70.55s, trace 16282. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.780011339930079, 'next_transition': 16332}.
<a id="trace-16283"></a>
- 70.55s–70.55s (×1), actor 5, squad 1 (trace 16283): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.761029 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 70.55s, trace 16283. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.780011339930079, 'next_transition': 16332}.
<a id="trace-16332"></a>
- 71.75s–71.75s (×1), actor 9, squad 1 (trace 16332): received platoon directive. Knowledge: actor memory at 70.00s, trace 16208. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.733856027840977, 'next_transition': 16643}.
<a id="trace-16510"></a>
- 75.05s–75.05s (×1), actor 1, squad 0 (trace 16510): NeedSupport. Knowledge: actor memory at 75.00s, trace 16490. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00045049858999975334, 'next_transition': 16576}.
<a id="trace-16576"></a>
<a id="trace-16578"></a>
<a id="trace-16603"></a>
<a id="trace-16605"></a>
<a id="trace-16618"></a>
<a id="trace-16620"></a>
<a id="trace-16654"></a>
<a id="trace-16656"></a>
<a id="trace-16679"></a>
<a id="trace-16681"></a>
<a id="trace-16690"></a>
<a id="trace-16692"></a>
<a id="trace-16718"></a>
<a id="trace-16720"></a>
<a id="trace-16750"></a>
<a id="trace-16752"></a>
<a id="trace-16820"></a>
<a id="trace-16822"></a>
<a id="trace-16916"></a>
<a id="trace-16918"></a>
<a id="trace-16938"></a>
<a id="trace-16940"></a>
<a id="trace-16962"></a>
<a id="trace-16964"></a>
<a id="trace-17079"></a>
<a id="trace-17081"></a>
<a id="trace-17097"></a>
<a id="trace-17099"></a>
<a id="trace-17113"></a>
<a id="trace-17115"></a>
<a id="trace-17130"></a>
<a id="trace-17132"></a>
<a id="trace-17149"></a>
<a id="trace-17151"></a>
<a id="trace-17182"></a>
<a id="trace-17184"></a>
<a id="trace-17216"></a>
<a id="trace-17218"></a>
<a id="trace-17307"></a>
<a id="trace-17309"></a>
<a id="trace-17359"></a>
<a id="trace-17361"></a>
<a id="trace-17392"></a>
<a id="trace-17394"></a>
<a id="trace-17434"></a>
<a id="trace-17436"></a>
<a id="trace-17457"></a>
<a id="trace-17459"></a>
<a id="trace-17485"></a>
<a id="trace-17487"></a>
<a id="trace-17516"></a>
<a id="trace-17518"></a>
<a id="trace-17536"></a>
<a id="trace-17538"></a>
<a id="trace-17554"></a>
<a id="trace-17556"></a>
<a id="trace-17636"></a>
<a id="trace-17638"></a>
<a id="trace-17650"></a>
<a id="trace-17652"></a>
<a id="trace-17672"></a>
<a id="trace-17674"></a>
<a id="trace-17684"></a>
<a id="trace-17686"></a>
<a id="trace-17701"></a>
<a id="trace-17703"></a>
<a id="trace-17716"></a>
<a id="trace-17718"></a>
<a id="trace-17733"></a>
<a id="trace-17735"></a>
<a id="trace-17755"></a>
<a id="trace-17757"></a>
<a id="trace-17776"></a>
<a id="trace-17778"></a>
<a id="trace-17793"></a>
<a id="trace-17795"></a>
<a id="trace-17877"></a>
<a id="trace-17879"></a>
<a id="trace-17900"></a>
<a id="trace-17902"></a>
<a id="trace-17920"></a>
<a id="trace-17922"></a>
<a id="trace-17948"></a>
<a id="trace-17950"></a>
- 75.25s–96.75s (×84), actor 5, squad 0 (trace 16576): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 16494. Next observer evidence: {'until': 75.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00033924887017992394, 'next_transition': 16603}.
<a id="trace-16643"></a>
- 76.65s–76.65s (×1), actor 9, squad 1 (trace 16643): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 16497. Next observer evidence: None.
<a id="trace-16644"></a>
- 76.65s–76.65s (×1), actor 9, squad 1 (trace 16644): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 75.00s, trace 16497. Next observer evidence: None.
<a id="trace-16649"></a>
- 76.70s–76.70s (×1), actor 9, squad 1 (trace 16649): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 75.00s, trace 16497. Next observer evidence: {'until': 80, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.88943346585189, 'next_transition': 1154}.
<a id="trace-1154"></a>
- 80.15s–80.15s (×1), actor 5, squad 1 (events line 1154): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16860"></a>
- 80.15s–80.15s (×1), actor 5, squad 1 (trace 16860): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.639159 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 16860. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3399128162273937, 'next_transition': 16972}.
<a id="trace-16861"></a>
- 80.15s–80.15s (×1), actor 5, squad 1 (trace 16861): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.639159 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 16861. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3399128162273937, 'next_transition': 16972}.
<a id="trace-16972"></a>
- 81.65s–81.65s (×1), actor 9, squad 1 (trace 16972): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 16845. Next observer evidence: {'until': 84.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3032418053303343, 'next_transition': 17230}.
<a id="trace-16973"></a>
- 81.65s–81.65s (×1), actor 9, squad 1 (trace 16973): received platoon directive. Knowledge: actor memory at 80.00s, trace 16845. Next observer evidence: {'until': 84.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3032418053303343, 'next_transition': 17230}.
<a id="trace-17230"></a>
- 84.95s–84.95s (×1), actor 9, squad 1 (trace 17230): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 80.00s, trace 16845. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.18359644648941, 'next_transition': 1324}.
<a id="trace-17232"></a>
- 84.95s–84.95s (×1), actor 9, squad 1 (trace 17232): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 80.00s, trace 16845. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.18359644648941, 'next_transition': 1324}.
<a id="trace-1324"></a>
- 88.55s–88.55s (×1), actor 5, squad 1 (events line 1324): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17507"></a>
- 88.55s–88.55s (×1), actor 5, squad 1 (trace 17507): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.655159 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 17507. Next observer evidence: {'until': 90, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8544406327860457, 'next_transition': 17585}.
<a id="trace-17508"></a>
- 88.55s–88.55s (×1), actor 5, squad 1 (trace 17508): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.655159 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 17508. Next observer evidence: {'until': 90, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8544406327860457, 'next_transition': 17585}.
<a id="trace-17585"></a>
- 90.05s–90.05s (×1), actor 9, squad 1 (trace 17585): received platoon directive; retain held slots. Knowledge: actor memory at 90.00s, trace 17571. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.066417700793444, 'next_transition': 17742}.
<a id="trace-17742"></a>
- 93.35s–93.35s (×1), actor 5, squad 1 (trace 17742): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.655278 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.35s, trace 17742. Next observer evidence: None.
<a id="trace-17743"></a>
- 93.35s–93.35s (×1), actor 5, squad 1 (trace 17743): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.655278 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.35s, trace 17743. Next observer evidence: None.
<a id="trace-1440"></a>
- 93.35s–93.35s (×1), actor 5, squad 1 (events line 1440): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 94.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0205986565736793, 'next_transition': 17790}.
<a id="trace-17790"></a>
- 94.65s–94.65s (×1), actor 9, squad 1 (trace 17790): received platoon directive; retain held slots. Knowledge: actor memory at 90.00s, trace 17571. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09719865482608307, 'next_transition': 17886}.
<a id="trace-17886"></a>
- 95.35s–95.35s (×1), actor 9, squad 1 (trace 17886): NeedSupport. Knowledge: actor memory at 95.00s, trace 17811. Next observer evidence: {'until': 98, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.09839573822071723, 'next_transition': 1602}.
<a id="trace-17976"></a>
- 97.10s–97.10s (×1), actor 1, squad 0 (trace 17976): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 17804. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00015142857142854841, 'next_transition': 19543}.
<a id="trace-17977"></a>
- 97.10s–97.10s (×1), actor 1, squad 0 (trace 17977): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 95.00s, trace 17804. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00015142857142854841, 'next_transition': 19543}.
<a id="trace-19543"></a>
<a id="trace-19545"></a>
<a id="trace-19576"></a>
<a id="trace-19578"></a>
<a id="trace-19629"></a>
<a id="trace-19631"></a>
<a id="trace-19657"></a>
<a id="trace-19659"></a>
<a id="trace-19686"></a>
<a id="trace-19688"></a>
<a id="trace-19710"></a>
<a id="trace-19712"></a>
<a id="trace-19793"></a>
<a id="trace-19795"></a>
<a id="trace-19810"></a>
<a id="trace-19812"></a>
- 97.25s–100.75s (×16), actor 5, squad 0 (trace 19543): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 17808. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.000304285714285741, 'next_transition': 19576}.
<a id="trace-1602"></a>
- 98.15s–98.15s (×1), actor 5, squad 1 (events line 1602): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19615"></a>
- 98.15s–98.15s (×1), actor 5, squad 1 (trace 19615): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.646487 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 98.15s, trace 19615. Next observer evidence: {'until': 128, 'shots': 0, 'casualties': 0, 'mean_displacement': 0, 'next_transition': None}.
<a id="trace-19616"></a>
- 98.15s–98.15s (×1), actor 5, squad 1 (trace 19616): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.646487 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 98.15s, trace 19616. Next observer evidence: {'until': 128, 'shots': 0, 'casualties': 0, 'mean_displacement': 0, 'next_transition': None}.
<a id="trace-19824"></a>
- 100.80s–100.80s (×1), actor 1, squad 0 (trace 19824): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 100.00s, trace 19722. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41998336607272685, 'next_transition': 19834}.
<a id="trace-19834"></a>
<a id="trace-19836"></a>
- 101.25s–101.25s (×2), actor 5, squad 0 (trace 19834): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 19725. Next observer evidence: {'until': 101.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.21000756864667738, 'next_transition': 19844}.
<a id="trace-19844"></a>
- 101.55s–101.55s (×1), actor 1, squad 0 (trace 19844): Reorganise: completed/failed drill. Knowledge: actor memory at 100.00s, trace 19722. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000756864667713, 'next_transition': 20081}.
<a id="trace-19849"></a>
- 101.55s–101.55s (×1), actor 1, squad 0 (trace 19849): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 19722. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000756864667713, 'next_transition': 20081}.
<a id="trace-19850"></a>
- 101.55s–101.55s (×1), actor 1, squad 0 (trace 19850): Reorganise complete: known contact. Knowledge: actor memory at 100.00s, trace 19722. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000756864667713, 'next_transition': 20081}.
<a id="trace-20081"></a>
<a id="trace-20083"></a>
<a id="trace-20102"></a>
<a id="trace-20104"></a>
<a id="trace-20124"></a>
<a id="trace-20126"></a>
<a id="trace-20140"></a>
<a id="trace-20142"></a>
<a id="trace-20154"></a>
<a id="trace-20156"></a>
<a id="trace-20177"></a>
<a id="trace-20179"></a>
<a id="trace-20188"></a>
<a id="trace-20190"></a>
- 101.75s–104.75s (×14), actor 5, squad 0 (trace 20081): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 19725. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.7427042680123788, 'next_transition': 20102}.
<a id="trace-20216"></a>
- 105.05s–105.05s (×1), actor 5, squad 0 (trace 20216): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 105.05s, trace 20216. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200221268869927, 'next_transition': 20265}.
<a id="trace-20265"></a>
<a id="trace-20267"></a>
- 105.25s–105.25s (×2), actor 5, squad 0 (trace 20265): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.05s, trace 20216. Next observer evidence: None.
<a id="trace-20270"></a>
- 105.35s–105.35s (×1), actor 1, squad 0 (trace 20270): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 105.00s, trace 20201. Next observer evidence: {'until': 105.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5040062507548886, 'next_transition': 22057}.
<a id="trace-20272"></a>
- 105.35s–105.35s (×1), actor 1, squad 0 (trace 20272): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 105.00s, trace 20201. Next observer evidence: {'until': 105.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5040062507548886, 'next_transition': 22057}.
<a id="trace-21985"></a>
- 105.35s–105.35s (×1), actor 1, squad 0 (trace 21985): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 105.00s, trace 20201. Next observer evidence: {'until': 105.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5040062507548886, 'next_transition': 22057}.
<a id="trace-21986"></a>
- 105.35s–105.35s (×1), actor 1, squad 0 (trace 21986): MoveTactically. Knowledge: actor memory at 105.00s, trace 20201. Next observer evidence: {'until': 105.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5040062507548886, 'next_transition': 22057}.
<a id="trace-21987"></a>
- 105.35s–105.35s (×1), actor 1, squad 0 (trace 21987): contact cover complete: assessment resumes closure. Knowledge: actor memory at 105.00s, trace 20201. Next observer evidence: {'until': 105.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5040062507548886, 'next_transition': 22057}.
<a id="trace-22049"></a>
- 105.35s–105.35s (×1), actor 1, squad 0 (trace 22049): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 105.00s, trace 20201. Next observer evidence: {'until': 105.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.5040062507548886, 'next_transition': 22057}.
<a id="trace-22057"></a>
<a id="trace-22059"></a>
<a id="trace-22076"></a>
<a id="trace-22078"></a>
<a id="trace-22090"></a>
<a id="trace-22092"></a>
<a id="trace-22108"></a>
<a id="trace-22110"></a>
<a id="trace-22118"></a>
<a id="trace-22120"></a>
<a id="trace-22144"></a>
<a id="trace-22156"></a>
<a id="trace-22174"></a>
<a id="trace-22184"></a>
- 105.75s–109.75s (×14), actor 5, squad 0 (trace 22057): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.05s, trace 20216. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.755979280139343, 'next_transition': 22076}.
<a id="trace-22188"></a>
- 109.85s–109.85s (×1), actor 1, squad 0 (trace 22188): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 105.00s, trace 20201. Next observer evidence: {'until': 110.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25201285681488556, 'next_transition': 22309}.
<a id="trace-22309"></a>
<a id="trace-22325"></a>
<a id="trace-22338"></a>
- 110.25s–111.25s (×3), actor 5, squad 0 (trace 22309): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 22244. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519987150760893, 'next_transition': 22325}.
<a id="trace-1786"></a>
- 111.35s–111.35s (×1), actor 5, squad 0 (events line 1786): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.251998715076089, 'next_transition': 22350}.
<a id="trace-22343"></a>
- 111.35s–111.35s (×1), actor 5, squad 0 (trace 22343): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332553 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 111.35s, trace 22343. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.251998715076089, 'next_transition': 22350}.
<a id="trace-22344"></a>
- 111.35s–111.35s (×1), actor 5, squad 0 (trace 22344): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332553 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 111.35s, trace 22344. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.251998715076089, 'next_transition': 22350}.
<a id="trace-22350"></a>
<a id="trace-22367"></a>
<a id="trace-22378"></a>
<a id="trace-22391"></a>
- 111.75s–113.25s (×4), actor 5, squad 0 (trace 22350): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 111.35s, trace 22344. Next observer evidence: {'until': 112.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3780051433512513, 'next_transition': 22367}.
<a id="trace-22396"></a>
- 113.25s–113.25s (×1), actor 1, squad 0 (trace 22396): received platoon directive. Knowledge: actor memory at 110.00s, trace 22242. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9616020767291088, 'next_transition': 22456}.
<a id="trace-22456"></a>
<a id="trace-22475"></a>
<a id="trace-22489"></a>
<a id="trace-22566"></a>
<a id="trace-22584"></a>
<a id="trace-22606"></a>
<a id="trace-22632"></a>
<a id="trace-22641"></a>
<a id="trace-22656"></a>
<a id="trace-22663"></a>
<a id="trace-22680"></a>
<a id="trace-22690"></a>
- 113.75s–119.75s (×12), actor 5, squad 0 (trace 22456): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 111.35s, trace 22344. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2627888443562156, 'next_transition': 22475}.
<a id="trace-22697"></a>
- 119.85s–119.85s (×1), actor 1, squad 0 (trace 22697): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 115.00s, trace 22497. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36019274271302537, 'next_transition': 22880}.
<a id="trace-22698"></a>
- 119.85s–119.85s (×1), actor 1, squad 0 (trace 22698): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 22497. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36019274271302537, 'next_transition': 22880}.
<a id="trace-22805"></a>
- 119.85s–119.85s (×1), actor 1, squad 0 (trace 22805): NeedSupport. Knowledge: actor memory at 115.00s, trace 22497. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36019274271302537, 'next_transition': 22880}.
<a id="trace-22880"></a>
<a id="trace-22893"></a>
<a id="trace-22917"></a>
<a id="trace-22926"></a>
<a id="trace-22940"></a>
<a id="trace-22962"></a>
<a id="trace-22981"></a>
<a id="trace-22995"></a>
<a id="trace-23029"></a>
<a id="trace-23053"></a>
<a id="trace-23143"></a>
<a id="trace-23173"></a>
<a id="trace-23185"></a>
<a id="trace-23201"></a>
<a id="trace-23220"></a>
<a id="trace-23240"></a>
<a id="trace-23263"></a>
<a id="trace-23274"></a>
<a id="trace-23293"></a>
<a id="trace-23305"></a>
<a id="trace-23380"></a>
<a id="trace-23395"></a>
<a id="trace-23410"></a>
<a id="trace-23421"></a>
<a id="trace-23437"></a>
<a id="trace-23452"></a>
<a id="trace-23465"></a>
<a id="trace-23476"></a>
<a id="trace-23486"></a>
<a id="trace-23513"></a>
- 120.25s–134.80s (×30), actor 5, squad 0 (trace 22880): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 22815. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4714247835276246, 'next_transition': 22893}.
<a id="trace-23533"></a>
- 135.10s–135.10s (×1), actor 1, squad 0 (trace 23533): NeedSupport. Knowledge: actor memory at 135.00s, trace 23518. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38663547998021564, 'next_transition': 23589}.
<a id="trace-23589"></a>
<a id="trace-23601"></a>
<a id="trace-23641"></a>
<a id="trace-23662"></a>
<a id="trace-23683"></a>
<a id="trace-23728"></a>
<a id="trace-23752"></a>
<a id="trace-23764"></a>
- 135.30s–138.80s (×8), actor 5, squad 0 (trace 23589): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 23520. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3527784955761462, 'next_transition': 23601}.
<a id="trace-23793"></a>
- 139.15s–139.15s (×1), actor 1, squad 0 (trace 23793): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 23518. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1550382405482641, 'next_transition': 23862}.
<a id="trace-23794"></a>
- 139.15s–139.15s (×1), actor 1, squad 0 (trace 23794): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 23518. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1550382405482641, 'next_transition': 23862}.
<a id="trace-23862"></a>
<a id="trace-23876"></a>
<a id="trace-23957"></a>
<a id="trace-23987"></a>
<a id="trace-24002"></a>
<a id="trace-24017"></a>
<a id="trace-24036"></a>
<a id="trace-24048"></a>
<a id="trace-24061"></a>
<a id="trace-24070"></a>
<a id="trace-24088"></a>
<a id="trace-24104"></a>
<a id="trace-24179"></a>
<a id="trace-24188"></a>
<a id="trace-24204"></a>
<a id="trace-24217"></a>
<a id="trace-24229"></a>
<a id="trace-24239"></a>
<a id="trace-24255"></a>
<a id="trace-24269"></a>
<a id="trace-24279"></a>
<a id="trace-24287"></a>
<a id="trace-24363"></a>
<a id="trace-24379"></a>
<a id="trace-24393"></a>
<a id="trace-24401"></a>
- 139.30s–151.80s (×26), actor 5, squad 0 (trace 23862): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 23520. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9232160571633197, 'next_transition': 23876}.
<a id="trace-24416"></a>
- 152.15s–152.15s (×1), actor 1, squad 0 (trace 24416): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 24293. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24474}.
<a id="trace-24417"></a>
- 152.15s–152.15s (×1), actor 1, squad 0 (trace 24417): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 24293. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24474}.
<a id="trace-24474"></a>
<a id="trace-24497"></a>
<a id="trace-24515"></a>
<a id="trace-24527"></a>
<a id="trace-24546"></a>
<a id="trace-24556"></a>
<a id="trace-24625"></a>
<a id="trace-24632"></a>
<a id="trace-24643"></a>
<a id="trace-24650"></a>
<a id="trace-24661"></a>
<a id="trace-24674"></a>
<a id="trace-24686"></a>
<a id="trace-24700"></a>
<a id="trace-24715"></a>
<a id="trace-24732"></a>
<a id="trace-24802"></a>
<a id="trace-24811"></a>
<a id="trace-24826"></a>
<a id="trace-24834"></a>
<a id="trace-24852"></a>
<a id="trace-24864"></a>
<a id="trace-24879"></a>
<a id="trace-24889"></a>
<a id="trace-24903"></a>
<a id="trace-24917"></a>
<a id="trace-24986"></a>
<a id="trace-25000"></a>
<a id="trace-25017"></a>
- 152.30s–166.30s (×29), actor 5, squad 0 (trace 24474): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 24295. Next observer evidence: {'until': 152.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07875525776098988, 'next_transition': 24497}.
<a id="trace-25023"></a>
- 166.65s–166.65s (×1), actor 1, squad 0 (trace 25023): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 165.00s, trace 24923. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574951765134411, 'next_transition': 25030}.
<a id="trace-25030"></a>
<a id="trace-25047"></a>
<a id="trace-25066"></a>
<a id="trace-25083"></a>
<a id="trace-25092"></a>
<a id="trace-25110"></a>
<a id="trace-25120"></a>
<a id="trace-25187"></a>
- 166.80s–170.30s (×8), actor 5, squad 0 (trace 25030): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 24925. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149958620759964, 'next_transition': 25047}.
<a id="trace-2258"></a>
- 170.45s–170.45s (×1), actor 5, squad 0 (events line 2258): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499586207599617, 'next_transition': 25207}.
<a id="trace-25197"></a>
- 170.45s–170.45s (×1), actor 5, squad 0 (trace 25197): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 170.45s, trace 25197. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499586207599617, 'next_transition': 25207}.
<a id="trace-25198"></a>
- 170.45s–170.45s (×1), actor 5, squad 0 (trace 25198): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 170.45s, trace 25198. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499586207599617, 'next_transition': 25207}.
<a id="trace-25207"></a>
<a id="trace-25222"></a>
<a id="trace-25236"></a>
<a id="trace-25248"></a>
- 170.80s–172.30s (×4), actor 5, squad 0 (trace 25207): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.45s, trace 25198. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149958620759957, 'next_transition': 25222}.
<a id="trace-25253"></a>
- 172.35s–172.35s (×1), actor 1, squad 0 (trace 25253): Withdraw to received rally. Knowledge: actor memory at 170.00s, trace 25126. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724910382748012, 'next_transition': 25317}.
<a id="trace-25254"></a>
- 172.35s–172.35s (×1), actor 1, squad 0 (trace 25254): rearward bound: one stationary suppressing element. Knowledge: actor memory at 170.00s, trace 25126. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724910382748012, 'next_transition': 25317}.
<a id="trace-25317"></a>
<a id="trace-25339"></a>
<a id="trace-25358"></a>
<a id="trace-25379"></a>
<a id="trace-25391"></a>
<a id="trace-25466"></a>
<a id="trace-25477"></a>
<a id="trace-25494"></a>
<a id="trace-25515"></a>
<a id="trace-25531"></a>
<a id="trace-25551"></a>
<a id="trace-25572"></a>
<a id="trace-25585"></a>
<a id="trace-25604"></a>
<a id="trace-25618"></a>
<a id="trace-25698"></a>
<a id="trace-25717"></a>
<a id="trace-25731"></a>
<a id="trace-25740"></a>
<a id="trace-25758"></a>
<a id="trace-25775"></a>
<a id="trace-25791"></a>
<a id="trace-25812"></a>
<a id="trace-25830"></a>
<a id="trace-25849"></a>
- 172.80s–184.80s (×25), actor 5, squad 0 (trace 25317): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.45s, trace 25198. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331208620759975, 'next_transition': 25339}.
<a id="trace-25873"></a>
- 185.05s–185.05s (×1), actor 1, squad 0 (trace 25873): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 185.00s, trace 25859. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498511671103413, 'next_transition': 25976}.
<a id="trace-25874"></a>
- 185.05s–185.05s (×1), actor 1, squad 0 (trace 25874): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 185.00s, trace 25859. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498511671103413, 'next_transition': 25976}.
<a id="trace-25976"></a>
<a id="trace-25990"></a>
<a id="trace-26019"></a>
<a id="trace-26034"></a>
<a id="trace-26055"></a>
<a id="trace-26070"></a>
<a id="trace-26086"></a>
<a id="trace-26108"></a>
<a id="trace-26121"></a>
<a id="trace-26141"></a>
<a id="trace-26216"></a>
<a id="trace-26225"></a>
<a id="trace-26244"></a>
<a id="trace-26256"></a>
<a id="trace-26277"></a>
<a id="trace-26303"></a>
<a id="trace-26319"></a>
<a id="trace-26330"></a>
<a id="trace-26346"></a>
<a id="trace-26367"></a>
<a id="trace-26438"></a>
<a id="trace-26451"></a>
<a id="trace-26469"></a>
<a id="trace-26486"></a>
<a id="trace-26505"></a>
<a id="trace-26520"></a>
<a id="trace-26541"></a>
- 185.30s–198.30s (×27), actor 5, squad 0 (trace 25976): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 25861. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945004593904179, 'next_transition': 25990}.
<a id="trace-26547"></a>
- 198.45s–198.45s (×1), actor 1, squad 0 (trace 26547): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 195.00s, trace 26372. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26607}.
<a id="trace-26548"></a>
- 198.45s–198.45s (×1), actor 1, squad 0 (trace 26548): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 195.00s, trace 26372. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26607}.
<a id="trace-26607"></a>
<a id="trace-26631"></a>
<a id="trace-26649"></a>
<a id="trace-26723"></a>
<a id="trace-26746"></a>
<a id="trace-26765"></a>
<a id="trace-26781"></a>
<a id="trace-26799"></a>
<a id="trace-26814"></a>
<a id="trace-26829"></a>
<a id="trace-26842"></a>
<a id="trace-26866"></a>
<a id="trace-26885"></a>
<a id="trace-26954"></a>
<a id="trace-26966"></a>
<a id="trace-26984"></a>
<a id="trace-27005"></a>
<a id="trace-27019"></a>
<a id="trace-27034"></a>
<a id="trace-27054"></a>
<a id="trace-27069"></a>
<a id="trace-27087"></a>
<a id="trace-27178"></a>
<a id="trace-27194"></a>
- 198.80s–210.80s (×24), actor 5, squad 0 (trace 26607): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 26374. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039374999999999716, 'next_transition': 26631}.
<a id="trace-27200"></a>
- 210.85s–210.85s (×1), actor 1, squad 0 (trace 27200): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 210.00s, trace 27105. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27264}.
<a id="trace-27201"></a>
- 210.85s–210.85s (×1), actor 1, squad 0 (trace 27201): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 210.00s, trace 27105. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27264}.
<a id="trace-27264"></a>
<a id="trace-27277"></a>
<a id="trace-27302"></a>
<a id="trace-27326"></a>
<a id="trace-27342"></a>
<a id="trace-27366"></a>
<a id="trace-27384"></a>
<a id="trace-27392"></a>
<a id="trace-27466"></a>
<a id="trace-27481"></a>
- 211.30s–215.80s (×10), actor 5, squad 0 (trace 27264): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 27107. Next observer evidence: {'until': 211.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27277}.
<a id="trace-27491"></a>
- 216.05s–216.05s (×1), actor 1, squad 0 (trace 27491): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 215.00s, trace 27401. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749999999999886, 'next_transition': 27506}.
<a id="trace-27506"></a>
<a id="trace-27528"></a>
<a id="trace-27548"></a>
<a id="trace-27563"></a>
<a id="trace-27581"></a>
<a id="trace-27601"></a>
- 216.30s–218.80s (×6), actor 5, squad 0 (trace 27506): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 27403. Next observer evidence: {'until': 216.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300002883595283, 'next_transition': 27528}.
<a id="trace-2849"></a>
- 219.25s–219.25s (×1), actor 5, squad 0 (events line 2849): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27616"></a>
- 219.25s–219.25s (×1), actor 5, squad 0 (trace 27616): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.635523 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 219.25s, trace 27616. Next observer evidence: None.
<a id="trace-27617"></a>
- 219.25s–219.25s (×1), actor 5, squad 0 (trace 27617): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.635523 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 219.25s, trace 27617. Next observer evidence: None.
<a id="trace-27622"></a>
<a id="trace-27640"></a>
<a id="trace-27717"></a>
<a id="trace-27738"></a>
<a id="trace-27751"></a>
- 219.30s–221.30s (×5), actor 5, squad 0 (trace 27622): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 219.25s, trace 27617. Next observer evidence: {'until': 219.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725000006613758, 'next_transition': 27640}.
<a id="trace-27762"></a>
- 221.45s–221.45s (×1), actor 1, squad 0 (trace 27762): MoveTactically. Knowledge: actor memory at 220.00s, trace 27646. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27821}.
<a id="trace-27763"></a>
- 221.45s–221.45s (×1), actor 1, squad 0 (trace 27763): traveling overwatch. Knowledge: actor memory at 220.00s, trace 27646. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27821}.
<a id="trace-27764"></a>
- 221.45s–221.45s (×1), actor 1, squad 0 (trace 27764): received platoon directive. Knowledge: actor memory at 220.00s, trace 27646. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27821}.
<a id="trace-27821"></a>
<a id="trace-27845"></a>
<a id="trace-27860"></a>
<a id="trace-27878"></a>
<a id="trace-27888"></a>
<a id="trace-27909"></a>
<a id="trace-27930"></a>
<a id="trace-28000"></a>
<a id="trace-28020"></a>
<a id="trace-28038"></a>
<a id="trace-28047"></a>
<a id="trace-28068"></a>
<a id="trace-28084"></a>
<a id="trace-28106"></a>
<a id="trace-28123"></a>
<a id="trace-28140"></a>
<a id="trace-28150"></a>
<a id="trace-28225"></a>
<a id="trace-28241"></a>
<a id="trace-28258"></a>
<a id="trace-28269"></a>
<a id="trace-28291"></a>
<a id="trace-28313"></a>
<a id="trace-28329"></a>
<a id="trace-28341"></a>
<a id="trace-28362"></a>
<a id="trace-28380"></a>
<a id="trace-28454"></a>
<a id="trace-28462"></a>
<a id="trace-28482"></a>
- 221.80s–236.30s (×30), actor 5, squad 0 (trace 27821): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 27648. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27845}.
<a id="trace-28499"></a>
- 236.65s–236.65s (×1), actor 1, squad 0 (trace 28499): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 235.00s, trace 28387. Next observer evidence: {'until': 236.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750212696976298, 'next_transition': 28509}.
<a id="trace-28509"></a>
<a id="trace-28522"></a>
- 236.80s–237.30s (×2), actor 5, squad 0 (trace 28509): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 28389. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299908114409274, 'next_transition': 28522}.
<a id="trace-28533"></a>
- 237.65s–237.65s (×1), actor 1, squad 0 (trace 28533): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 235.00s, trace 28387. Next observer evidence: {'until': 237.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149983531703011, 'next_transition': 28591}.
<a id="trace-28591"></a>
<a id="trace-28612"></a>
<a id="trace-28627"></a>
<a id="trace-28644"></a>
<a id="trace-28659"></a>
<a id="trace-28738"></a>
<a id="trace-28752"></a>
<a id="trace-28769"></a>
<a id="trace-28781"></a>
<a id="trace-28801"></a>
<a id="trace-28821"></a>
<a id="trace-28837"></a>
<a id="trace-28853"></a>
<a id="trace-28871"></a>
<a id="trace-28887"></a>
<a id="trace-28960"></a>
<a id="trace-28973"></a>
<a id="trace-28994"></a>
<a id="trace-29010"></a>
<a id="trace-29023"></a>
<a id="trace-29033"></a>
<a id="trace-29054"></a>
<a id="trace-29079"></a>
<a id="trace-29092"></a>
<a id="trace-29110"></a>
<a id="trace-29185"></a>
<a id="trace-29194"></a>
<a id="trace-29213"></a>
<a id="trace-29224"></a>
<a id="trace-29250"></a>
<a id="trace-29267"></a>
- 237.80s–252.80s (×31), actor 5, squad 0 (trace 28591): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 28389. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299908114409275, 'next_transition': 28612}.
<a id="trace-29273"></a>
- 252.85s–252.85s (×1), actor 1, squad 0 (trace 29273): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 250.00s, trace 29114. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300184124293506, 'next_transition': 29288}.
<a id="trace-29288"></a>
<a id="trace-29299"></a>
- 253.30s–253.80s (×2), actor 5, squad 0 (trace 29288): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 29116. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449728276516729, 'next_transition': 29299}.
<a id="trace-29306"></a>
- 253.85s–253.85s (×1), actor 1, squad 0 (trace 29306): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 250.00s, trace 29114. Next observer evidence: {'until': 254, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150092062146769, 'next_transition': 3269}.
<a id="trace-3269"></a>
- 254.05s–254.05s (×1), actor 5, squad 0 (events line 3269): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150092062146771, 'next_transition': 29372}.
<a id="trace-29360"></a>
- 254.05s–254.05s (×1), actor 5, squad 0 (trace 29360): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 254.05s, trace 29360. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150092062146771, 'next_transition': 29372}.
<a id="trace-29361"></a>
- 254.05s–254.05s (×1), actor 5, squad 0 (trace 29361): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 254.05s, trace 29361. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150092062146771, 'next_transition': 29372}.
<a id="trace-29372"></a>
<a id="trace-29391"></a>
<a id="trace-29467"></a>
<a id="trace-29485"></a>
- 254.30s–255.80s (×4), actor 5, squad 0 (trace 29372): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 254.05s, trace 29361. Next observer evidence: {'until': 254.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11689205490536891, 'next_transition': 29391}.
<a id="trace-29492"></a>
- 255.85s–255.85s (×1), actor 1, squad 0 (trace 29492): traveling. Knowledge: actor memory at 255.00s, trace 29396. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500052480114965, 'next_transition': 29614}.
<a id="trace-29493"></a>
- 255.85s–255.85s (×1), actor 1, squad 0 (trace 29493): received platoon directive. Knowledge: actor memory at 255.00s, trace 29396. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500052480114965, 'next_transition': 29614}.
<a id="trace-29614"></a>
<a id="trace-29632"></a>
<a id="trace-29656"></a>
<a id="trace-29678"></a>
<a id="trace-29702"></a>
<a id="trace-29718"></a>
<a id="trace-29736"></a>
<a id="trace-29747"></a>
<a id="trace-29823"></a>
<a id="trace-29841"></a>
<a id="trace-29857"></a>
<a id="trace-29872"></a>
<a id="trace-29895"></a>
<a id="trace-29910"></a>
<a id="trace-29928"></a>
<a id="trace-29943"></a>
<a id="trace-29967"></a>
<a id="trace-29984"></a>
<a id="trace-30064"></a>
<a id="trace-30074"></a>
- 256.30s–265.80s (×20), actor 5, squad 0 (trace 29614): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 29398. Next observer evidence: {'until': 256.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.748139601769327, 'next_transition': 29632}.
<a id="trace-30085"></a>
- 266.05s–266.05s (×1), actor 1, squad 0 (trace 30085): traveling overwatch. Knowledge: actor memory at 265.00s, trace 29994. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000634920584, 'next_transition': 30147}.
<a id="trace-30086"></a>
- 266.05s–266.05s (×1), actor 1, squad 0 (trace 30086): matching received arrivals: traveling stage complete. Knowledge: actor memory at 265.00s, trace 29994. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000634920584, 'next_transition': 30147}.
<a id="trace-30147"></a>
<a id="trace-30162"></a>
<a id="trace-30175"></a>
<a id="trace-30196"></a>
<a id="trace-30213"></a>
<a id="trace-30228"></a>
<a id="trace-30250"></a>
<a id="trace-30270"></a>
<a id="trace-30351"></a>
<a id="trace-30364"></a>
<a id="trace-30381"></a>
<a id="trace-30392"></a>
- 266.30s–271.80s (×12), actor 5, squad 0 (trace 30147): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 29996. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450001904761698, 'next_transition': 30162}.
<a id="trace-30399"></a>
- 271.85s–271.85s (×1), actor 1, squad 0 (trace 30399): ReactToContact: cover and return fire. Knowledge: actor memory at 270.00s, trace 30277. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.251928214490259, 'next_transition': 30500}.
<a id="trace-30400"></a>
- 271.85s–271.85s (×1), actor 1, squad 0 (trace 30400): bounding overwatch. Knowledge: actor memory at 270.00s, trace 30277. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.251928214490259, 'next_transition': 30500}.
<a id="trace-30401"></a>
- 271.85s–271.85s (×1), actor 1, squad 0 (trace 30401): new contact inside 100 m. Knowledge: actor memory at 270.00s, trace 30277. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.251928214490259, 'next_transition': 30500}.
<a id="trace-30500"></a>
<a id="trace-30522"></a>
<a id="trace-30539"></a>
<a id="trace-30558"></a>
- 272.30s–273.80s (×4), actor 5, squad 0 (trace 30500): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 30279. Next observer evidence: {'until': 272.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5940328880067467, 'next_transition': 30522}.
<a id="trace-30563"></a>
- 273.85s–273.85s (×1), actor 1, squad 0 (trace 30563): new contact inside 100 m. Knowledge: actor memory at 270.00s, trace 30277. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1251548410632286, 'next_transition': 30649}.
<a id="trace-30649"></a>
<a id="trace-30665"></a>
- 274.30s–274.80s (×2), actor 5, squad 0 (trace 30649): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 30279. Next observer evidence: {'until': 274.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5044132539892545, 'next_transition': 30665}.
<a id="trace-3554"></a>
- 275.20s–275.20s (×1), actor 5, squad 0 (events line 3554): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30697"></a>
- 275.20s–275.20s (×1), actor 5, squad 0 (trace 30697): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.354805 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 275.20s, trace 30697. Next observer evidence: None.
<a id="trace-30698"></a>
- 275.20s–275.20s (×1), actor 5, squad 0 (trace 30698): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.354805 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 275.20s, trace 30698. Next observer evidence: None.
<a id="trace-30749"></a>
<a id="trace-30760"></a>
- 275.30s–275.80s (×2), actor 5, squad 0 (trace 30749): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.20s, trace 30698. Next observer evidence: {'until': 275.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6118057365000668, 'next_transition': 30760}.
<a id="trace-30772"></a>
- 276.05s–276.05s (×1), actor 1, squad 0 (trace 30772): new contact inside 100 m. Knowledge: actor memory at 275.00s, trace 30678. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22311784636195936, 'next_transition': 30886}.
<a id="trace-30886"></a>
<a id="trace-30900"></a>
- 276.30s–276.80s (×2), actor 5, squad 0 (trace 30886): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.20s, trace 30698. Next observer evidence: {'until': 276.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7428439136333445, 'next_transition': 30900}.
<a id="trace-30911"></a>
- 277.10s–277.10s (×1), actor 5, squad 0 (trace 30911): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 277.10s, trace 30911. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5392836825781238, 'next_transition': 30919}.
<a id="trace-30919"></a>
- 277.30s–277.30s (×1), actor 5, squad 0 (trace 30919): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 277.10s, trace 30911. Next observer evidence: {'until': 277.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6270025234687742, 'next_transition': 30934}.
<a id="trace-30924"></a>
- 277.30s–277.30s (×1), actor 1, squad 0 (trace 30924): received platoon directive; retain contact cover stage. Knowledge: actor memory at 275.00s, trace 30678. Next observer evidence: {'until': 277.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6270025234687742, 'next_transition': 30934}.
<a id="trace-30934"></a>
<a id="trace-30957"></a>
<a id="trace-30978"></a>
- 277.80s–278.80s (×3), actor 5, squad 0 (trace 30934): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 277.10s, trace 30911. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9297770026713412, 'next_transition': 30957}.
<a id="trace-30990"></a>
- 279.25s–279.25s (×1), actor 1, squad 0 (trace 30990): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 275.00s, trace 30678. Next observer evidence: None.
<a id="trace-31122"></a>
<a id="trace-31135"></a>
<a id="trace-31213"></a>
<a id="trace-31221"></a>
<a id="trace-31238"></a>
<a id="trace-31252"></a>
<a id="trace-31275"></a>
<a id="trace-31287"></a>
- 279.30s–282.80s (×8), actor 5, squad 0 (trace 31122): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 277.10s, trace 30911. Next observer evidence: {'until': 279.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6672634911581186, 'next_transition': 31135}.
<a id="trace-31296"></a>
- 282.95s–282.95s (×1), actor 1, squad 0 (trace 31296): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 280.00s, trace 31141. Next observer evidence: {'until': 283.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299884963122204, 'next_transition': 31420}.
<a id="trace-31297"></a>
- 282.95s–282.95s (×1), actor 1, squad 0 (trace 31297): rearward bound: one stationary suppressing element. Knowledge: actor memory at 280.00s, trace 31141. Next observer evidence: {'until': 283.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299884963122204, 'next_transition': 31420}.
<a id="trace-31420"></a>
<a id="trace-31437"></a>
<a id="trace-31453"></a>
<a id="trace-31466"></a>
<a id="trace-31544"></a>
<a id="trace-31556"></a>
<a id="trace-31576"></a>
<a id="trace-31588"></a>
<a id="trace-31605"></a>
<a id="trace-31616"></a>
<a id="trace-31634"></a>
<a id="trace-31649"></a>
<a id="trace-31668"></a>
<a id="trace-31677"></a>
<a id="trace-31751"></a>
<a id="trace-31766"></a>
<a id="trace-31780"></a>
<a id="trace-31793"></a>
<a id="trace-31815"></a>
<a id="trace-31829"></a>
<a id="trace-31847"></a>
<a id="trace-31860"></a>
- 283.30s–293.80s (×22), actor 5, squad 0 (trace 31420): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 31143. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7087373226852156, 'next_transition': 31437}.
<a id="trace-31876"></a>
- 294.25s–294.25s (×1), actor 1, squad 0 (trace 31876): NeedSupport. Knowledge: actor memory at 290.00s, trace 31683. Next observer evidence: None.
<a id="trace-31883"></a>
<a id="trace-31900"></a>
<a id="trace-31969"></a>
- 294.30s–295.30s (×3), actor 5, squad 0 (trace 31883): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 31685. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0278092352525068, 'next_transition': 31900}.
<a id="trace-31973"></a>
- 295.45s–295.45s (×1), actor 1, squad 0 (trace 31973): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 295.00s, trace 31906. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149997990872376, 'next_transition': 32032}.
<a id="trace-31974"></a>
- 295.45s–295.45s (×1), actor 1, squad 0 (trace 31974): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 295.00s, trace 31906. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149997990872376, 'next_transition': 32032}.
<a id="trace-32032"></a>
<a id="trace-32054"></a>
<a id="trace-32064"></a>
<a id="trace-32082"></a>
<a id="trace-32097"></a>
<a id="trace-32120"></a>
<a id="trace-32125"></a>
<a id="trace-32140"></a>
<a id="trace-32152"></a>
<a id="trace-32230"></a>
<a id="trace-32244"></a>
<a id="trace-32263"></a>
<a id="trace-32270"></a>
<a id="trace-32291"></a>
<a id="trace-32305"></a>
<a id="trace-32320"></a>
<a id="trace-32328"></a>
<a id="trace-32347"></a>
<a id="trace-32358"></a>
<a id="trace-32430"></a>
<a id="trace-32445"></a>
<a id="trace-32463"></a>
<a id="trace-32468"></a>
<a id="trace-32484"></a>
<a id="trace-32499"></a>
<a id="trace-32515"></a>
<a id="trace-32524"></a>
<a id="trace-32544"></a>
<a id="trace-32553"></a>
<a id="trace-32626"></a>
<a id="trace-32636"></a>
<a id="trace-32652"></a>
- 295.80s–311.30s (×32), actor 5, squad 0 (trace 32032): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 31908. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149997990872374, 'next_transition': 32054}.
<a id="trace-32657"></a>
- 311.65s–311.65s (×1), actor 1, squad 0 (trace 32657): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 310.00s, trace 32557. Next observer evidence: {'until': 311.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32714}.
<a id="trace-32658"></a>
- 311.65s–311.65s (×1), actor 1, squad 0 (trace 32658): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 310.00s, trace 32557. Next observer evidence: {'until': 311.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32714}.
<a id="trace-32714"></a>
<a id="trace-32730"></a>
<a id="trace-32749"></a>
<a id="trace-32773"></a>
<a id="trace-32783"></a>
<a id="trace-32809"></a>
<a id="trace-32821"></a>
<a id="trace-32889"></a>
<a id="trace-32900"></a>
<a id="trace-32918"></a>
<a id="trace-32926"></a>
<a id="trace-32939"></a>
<a id="trace-32957"></a>
<a id="trace-32969"></a>
<a id="trace-32981"></a>
<a id="trace-32997"></a>
<a id="trace-33007"></a>
<a id="trace-33079"></a>
<a id="trace-33089"></a>
<a id="trace-33105"></a>
<a id="trace-33113"></a>
<a id="trace-33126"></a>
- 311.80s–322.30s (×22), actor 5, squad 0 (trace 32714): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 32559. Next observer evidence: {'until': 312.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32730}.
<a id="trace-33136"></a>
- 322.65s–322.65s (×1), actor 1, squad 0 (trace 33136): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 320.00s, trace 33013. Next observer evidence: {'until': 322.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11812126449119957, 'next_transition': 33143}.
<a id="trace-33143"></a>
<a id="trace-33156"></a>
<a id="trace-33170"></a>
<a id="trace-33191"></a>
<a id="trace-33200"></a>
<a id="trace-33272"></a>
<a id="trace-33287"></a>
<a id="trace-33301"></a>
<a id="trace-33309"></a>
<a id="trace-33321"></a>
<a id="trace-33332"></a>
- 322.80s–327.80s (×11), actor 5, squad 0 (trace 33143): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 33015. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33156}.
<a id="trace-3901"></a>
- 328.30s–328.30s (×1), actor 5, squad 0 (events line 3901): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-33346"></a>
- 328.30s–328.30s (×1), actor 5, squad 0 (trace 33346): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 33213. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3185335526225024, 'next_transition': 33358}.
<a id="trace-33351"></a>
- 328.30s–328.30s (×1), actor 5, squad 0 (trace 33351): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.344513 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 328.30s, trace 33351. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3185335526225024, 'next_transition': 33358}.
<a id="trace-33352"></a>
- 328.30s–328.30s (×1), actor 5, squad 0 (trace 33352): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.344513 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 328.30s, trace 33352. Next observer evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3185335526225024, 'next_transition': 33358}.
<a id="trace-33358"></a>
<a id="trace-33370"></a>
<a id="trace-33384"></a>
<a id="trace-33451"></a>
- 328.80s–330.30s (×4), actor 5, squad 0 (trace 33358): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 328.30s, trace 33352. Next observer evidence: {'until': 329.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21595663667736623, 'next_transition': 33370}.
<a id="trace-33459"></a>
- 330.65s–330.65s (×1), actor 1, squad 0 (trace 33459): Withdraw to received rally. Knowledge: actor memory at 330.00s, trace 33389. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.113400402053961, 'next_transition': 33516}.
<a id="trace-33460"></a>
- 330.65s–330.65s (×1), actor 1, squad 0 (trace 33460): rearward bound: one stationary suppressing element. Knowledge: actor memory at 330.00s, trace 33389. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.113400402053961, 'next_transition': 33516}.
<a id="trace-33516"></a>
<a id="trace-33530"></a>
<a id="trace-33540"></a>
<a id="trace-33558"></a>
<a id="trace-33570"></a>
<a id="trace-33592"></a>
<a id="trace-33606"></a>
<a id="trace-33624"></a>
<a id="trace-33637"></a>
<a id="trace-33705"></a>
<a id="trace-33714"></a>
<a id="trace-33728"></a>
<a id="trace-33740"></a>
<a id="trace-33759"></a>
<a id="trace-33771"></a>
<a id="trace-33783"></a>
<a id="trace-33795"></a>
<a id="trace-33812"></a>
<a id="trace-33823"></a>
<a id="trace-33897"></a>
<a id="trace-33907"></a>
<a id="trace-33927"></a>
<a id="trace-33939"></a>
- 330.80s–341.80s (×23), actor 5, squad 0 (trace 33516): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 33391. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2267999786580953, 'next_transition': 33530}.
<a id="trace-33951"></a>
- 342.25s–342.25s (×1), actor 1, squad 0 (trace 33951): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 340.00s, trace 33829. Next observer evidence: None.
<a id="trace-33952"></a>
- 342.25s–342.25s (×1), actor 1, squad 0 (trace 33952): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 340.00s, trace 33829. Next observer evidence: None.
<a id="trace-34010"></a>
<a id="trace-34031"></a>
<a id="trace-34046"></a>
<a id="trace-34058"></a>
<a id="trace-34076"></a>
<a id="trace-34088"></a>
<a id="trace-34167"></a>
<a id="trace-34188"></a>
<a id="trace-34205"></a>
<a id="trace-34217"></a>
<a id="trace-34230"></a>
<a id="trace-34245"></a>
<a id="trace-34265"></a>
<a id="trace-34280"></a>
<a id="trace-34301"></a>
<a id="trace-34312"></a>
<a id="trace-34386"></a>
<a id="trace-34404"></a>
<a id="trace-34422"></a>
<a id="trace-34434"></a>
<a id="trace-34461"></a>
<a id="trace-34475"></a>
<a id="trace-34502"></a>
<a id="trace-34517"></a>
<a id="trace-34536"></a>
<a id="trace-34551"></a>
<a id="trace-34622"></a>
<a id="trace-34632"></a>
<a id="trace-34652"></a>
<a id="trace-34664"></a>
<a id="trace-34689"></a>
<a id="trace-34702"></a>
<a id="trace-34724"></a>
- 342.30s–358.30s (×33), actor 5, squad 0 (trace 34010): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 33831. Next observer evidence: {'until': 342.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6158212784652263, 'next_transition': 34031}.
<a id="trace-34735"></a>
- 358.60s–358.60s (×1), actor 1, squad 0 (trace 34735): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 355.00s, trace 34557. Next observer evidence: {'until': 358.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1133927356579773, 'next_transition': 34792}.
<a id="trace-34736"></a>
- 358.60s–358.60s (×1), actor 1, squad 0 (trace 34736): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 355.00s, trace 34557. Next observer evidence: {'until': 358.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1133927356579773, 'next_transition': 34792}.
<a id="trace-34792"></a>
<a id="trace-34812"></a>
<a id="trace-34832"></a>
- 358.80s–359.80s (×3), actor 5, squad 0 (trace 34792): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 355.00s, trace 34559. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680543699391348, 'next_transition': 34812}.

## Net delivery

342 matched order/radio deliveries; 489 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.317s; maximum 2.250s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3394: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3395: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3396: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3397: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3398: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3401: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 3496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 3497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4364: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4365: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4366: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4367: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4368: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4370: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4371: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 5935: estimate 5.91; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 5936: estimate 5.91; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 5937: estimate 5.91; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 5938: estimate 5.91; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6281: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6286: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6287: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 6289: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6291: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6292: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6293: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6294: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6295: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6296: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6297: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6298: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6299: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6300: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6847: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6848: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6849: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6852: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6853: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 6855: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 6856: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6857: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6858: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6859: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6860: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6861: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6862: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6863: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6864: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 6865: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 6866: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 7298: estimate 8.26; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 7299: estimate 8.26; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 11223: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11224: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11225: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11228: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11229: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 11231: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11232: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11233: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11234: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11235: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11236: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11237: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11238: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11239: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11240: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11241: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11242: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 11458: estimate 8.31; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 11459: estimate 8.31; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 12250: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 12251: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 12252: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 12253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 12254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 12255: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 12256: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 12257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 12258: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 12259: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 12260: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 12261: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 12262: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 12263: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 12264: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 12265: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 12266: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 12267: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 12268: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 12269: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 15334: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 15335: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 15336: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 15337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 15338: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 15339: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 15340: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 15341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 15342: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 15343: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 15344: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 15345: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 15346: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 15347: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 15348: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 15349: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 15350: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 15351: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 15352: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 15353: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 15460: estimate 9.42; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 15461: estimate 9.42; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 15555: estimate 9.39; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 15556: estimate 9.39; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 15919: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 15920: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 15921: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 15922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 15923: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 15924: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 15925: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 15926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 15927: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 15928: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 15929: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 15930: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 15931: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 15932: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 15933: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 15934: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 15935: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 15936: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 15937: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 16201: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 16202: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 16203: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 16204: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 16205: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 16206: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 16207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 16208: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 16209: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 16210: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 16211: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 16212: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 16213: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 16214: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 16215: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 16216: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 16217: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 16218: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.55s leader 5, trace 16282: estimate 9.20; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.55s leader 5, trace 16283: estimate 9.20; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 16490: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 16491: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 16492: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 16493: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 16494: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 16495: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 16496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 16497: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 16498: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 16499: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 16500: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 16501: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 16502: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 16503: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 16504: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 16505: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 16506: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 16507: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 16838: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 16839: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 16840: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 16841: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 16842: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 16843: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 16844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 16845: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 16846: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 16847: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 16848: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 16849: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 16850: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 16851: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 16852: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 16853: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 16854: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 16855: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 16860: estimate 9.39; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 16861: estimate 9.39; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 17233: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 17234: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 17235: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 17236: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 17237: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 17238: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 17239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 17240: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 17241: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 17242: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 17243: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 17244: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 17245: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 17246: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 17247: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 17248: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 17249: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 17250: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 17507: estimate 9.16; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 17508: estimate 9.16; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 17564: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 17565: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 17566: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 17567: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 17568: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 17569: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 17570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 17571: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 17572: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 17573: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 17574: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 17575: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 17576: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 17577: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 17578: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 17579: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 17580: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 17581: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.35s leader 5, trace 17742: estimate 9.16; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.35s leader 5, trace 17743: estimate 9.16; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 17804: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 17805: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 17806: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 17807: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 17808: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 17809: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 17810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 17811: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 17812: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 17813: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 17814: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 17815: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 17816: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 17817: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 17818: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 17819: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 17820: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 17821: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 5, trace 19615: estimate 9.28; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 5, trace 19616: estimate 9.28; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 19722: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 19723: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 19724: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 19725: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 19726: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 19727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 19728: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 19729: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 19730: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 19731: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 19732: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 19733: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 19734: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 19735: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 19736: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 19737: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 20201: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 20202: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 20203: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 20204: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 20205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 20206: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 20207: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 20208: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 20209: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 20210: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 20211: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 20212: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 20213: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 20214: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 20215: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.05s leader 5, trace 20216: estimate 9.21; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 22242: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 22243: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 22244: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 22245: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 22246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 22247: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 22248: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 22249: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 22250: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 22251: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 22252: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 22253: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 22254: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 22255: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 22256: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 111.35s leader 5, trace 22343: estimate 9.02; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 111.35s leader 5, trace 22344: estimate 9.02; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 22497: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 22498: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 22499: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 22500: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 22501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 22502: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 22503: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 22504: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 22505: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 22506: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 22507: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 22508: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 22509: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 22510: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 22511: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 22813: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 22814: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 22815: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 22816: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 22817: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 22818: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 22819: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 22820: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 22821: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 22822: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 22823: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 22824: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 22825: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 22826: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 23070: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 23071: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 23072: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 23073: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 23074: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 23075: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 23076: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 23077: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 23078: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 23079: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 23080: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 23081: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 23082: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 23083: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 23313: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 23314: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 23315: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 23316: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 23317: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 23318: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 23319: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 23320: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 23321: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 23322: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 23323: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 23324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 23325: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 23326: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 23518: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 23519: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 23520: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 23521: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 23522: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 23523: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 23524: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 23525: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 23526: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 23527: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 23528: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 23529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 23530: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 23531: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 23889: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 23890: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 23891: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 23892: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 23893: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 23894: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 23895: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 23896: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 23897: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 23898: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 23899: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 23900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 23901: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 23902: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 24111: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 24112: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 24113: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 24114: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 24115: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 24116: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 24117: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 24118: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 24119: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 24120: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 24121: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 24122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 24123: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 24124: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 24293: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 24294: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 24295: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 24296: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 24297: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 24298: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 24299: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 24300: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 24301: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 24302: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 24303: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 24304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 24305: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 24306: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 24564: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 24565: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 24566: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 24567: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 24568: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 24569: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 24570: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 24571: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 24572: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 24573: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 24574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 24575: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 24576: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 24738: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 24739: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 24740: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 24741: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 24742: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 24743: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 24744: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 24745: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 24746: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 24747: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 24748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 24749: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 24750: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 24923: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 24924: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 24925: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 24926: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 24927: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 24928: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 24929: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 24930: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 24931: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 24932: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 24933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 24934: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 24935: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 25126: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 25127: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 25128: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 25129: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 25130: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 25131: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 25132: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 25133: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 25134: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 25135: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 25136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 25137: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 25138: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.45s leader 5, trace 25197: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.45s leader 5, trace 25198: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 25397: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 25398: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 25399: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 25400: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 25401: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 25402: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 25403: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 25404: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 25405: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 25406: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 25407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 25408: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 25409: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 25625: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 25626: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 25627: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 25628: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 25629: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 25630: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 25631: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 25632: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 25633: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 25634: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 25635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 25636: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 25637: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 25859: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 25860: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 25861: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 25862: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 25863: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 25864: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 25865: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 25866: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 25867: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 25868: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 25869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 25870: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 25871: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 26146: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 26147: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 26148: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 26149: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 26150: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 26151: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 26152: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 26153: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 26154: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 26155: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 26156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 26157: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 26158: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 26372: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 26373: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 26374: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 26375: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 26376: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 26377: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 26378: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 26379: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 26380: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 26381: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 26382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 26383: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 26384: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 26657: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 26658: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 26659: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 26660: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 26661: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 26662: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 26663: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 26664: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 26665: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 26666: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 26667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 26668: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 26669: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 26888: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 26889: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 26890: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 26891: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 26892: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 26893: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 26894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 26895: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 26896: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 26897: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 26898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 26899: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 26900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 27105: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 27106: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 27107: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 27108: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 27109: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 27110: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 27111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 27112: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 27113: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 27114: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 27115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 27116: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 27117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 27401: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 27402: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 27403: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 27404: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 27405: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 27406: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 27407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 27408: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 27409: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 27410: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 27411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 27412: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 27413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.25s leader 5, trace 27616: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.25s leader 5, trace 27617: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 27646: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 27647: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 27648: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 27649: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 27650: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 27651: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 27652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 27653: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 27654: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 27655: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 27656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 27657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 27658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 27935: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 27936: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 27937: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 27938: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 27939: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 27940: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 27941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 27942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 27943: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 27944: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 27945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 27946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 27947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 28159: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 28160: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 28161: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 28162: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 28163: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 28164: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 28165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 28166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 28167: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 28168: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 28169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 28170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 28171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 28387: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 28388: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 28389: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 28390: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 28391: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 28392: estimate 1.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 28393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 28394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 28395: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 28396: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 28397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 28398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 28399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 28667: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 28668: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 28669: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 28670: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 28671: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 28672: estimate 1.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 28673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 28674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 28675: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 28676: estimate 1.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 28677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 28678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 28679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 28897: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 28898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 28899: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 28900: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 28901: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 28902: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 28903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 28904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 28905: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 28906: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 28907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 28908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 28909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 29114: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 29115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 29116: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 29117: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 29118: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 29119: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 29120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 29121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 29122: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 29123: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 29124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 29125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 29126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.05s leader 5, trace 29360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.05s leader 5, trace 29361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 29396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 29397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 29398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 29399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 29400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 29401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 29402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 29403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 29404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 29405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 29406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 29407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 29408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 29756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 29757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 29758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 29759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 29760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 29761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 29762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 29763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 29764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 29765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 29766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 29767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 29768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 29994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 29995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 29996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 29997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 29998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 29999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 30000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 30001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 30002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 30003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 30004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 30005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 30006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 30277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 30278: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 30279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 30280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 30281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 30282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 30283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 30284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 30285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 30286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 30287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 30288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 30289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 30678: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 30679: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 30680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 30681: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 30682: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 30683: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 30684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 30685: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 30686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 30687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 30688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 30689: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 30690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.20s leader 5, trace 30697: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.20s leader 5, trace 30698: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 277.10s leader 5, trace 30911: estimate 5.88; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 31141: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 31142: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 31143: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 31144: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 31145: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 31146: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 31147: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 31148: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 31149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 31150: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 31151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 31152: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 31153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 31477: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 31478: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 31479: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 31480: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 31481: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 31482: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 31483: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 31484: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 31485: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 31486: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 31487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 31488: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 31489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 31683: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 31684: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 31685: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 31686: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 31687: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 31688: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 31689: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 31690: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 31691: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 31692: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 31693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 31694: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 31695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 31906: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 31907: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 31908: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 31909: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 31910: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 31911: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 31912: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 31913: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 31914: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 31915: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 31916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 31917: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 31918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 32159: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 32160: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 32161: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 32162: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 32163: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 32164: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 32165: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 32166: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 32167: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 32168: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 32169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 32170: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 32171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 32368: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 32369: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 32370: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 32371: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 32372: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 32373: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 32374: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 32375: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 32376: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 32377: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 32378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 32379: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 32380: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 32557: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 32558: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 32559: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 32560: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 32561: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 32562: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 32563: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 32564: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 32565: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 32566: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 32567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 32568: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 32569: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 32828: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 32829: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 32830: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 32831: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 32832: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 32833: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 32834: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 32835: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 32836: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 32837: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 32838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 32839: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 32840: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 33013: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 33014: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 33015: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 33016: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 33017: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 33018: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 33019: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 33020: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 33021: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 33022: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 33023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 33024: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 33025: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 33211: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 33212: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 33213: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 33214: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 33215: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 33216: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 33217: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 33218: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 33219: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 33220: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 33221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 33222: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 33223: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.30s leader 5, trace 33351: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 328.30s leader 5, trace 33352: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 33389: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 33390: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 33391: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 33392: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 33393: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 33394: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 33395: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 33396: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 33397: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 33398: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 33399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 33400: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 33401: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 33643: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 33644: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 33645: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 33646: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 33647: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 33648: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 33649: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 33650: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 33651: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 33652: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 33653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 33654: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 33655: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 33829: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 33830: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 33831: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 33832: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 33833: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 33834: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 33835: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 33836: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 33837: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 33838: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 33839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 33840: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 33841: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 34098: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 34099: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 34100: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 34101: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 34102: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 34103: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 34104: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 34105: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 34106: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 34107: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 34108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 34109: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 34110: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 34321: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 34322: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 34323: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 34324: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 34325: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 34326: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 34327: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 34328: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 34329: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 34330: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 34331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 34332: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 34333: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 34557: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 34558: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 34559: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 34560: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 34561: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 34562: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 34563: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 34564: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 34565: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 34566: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 34567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 34568: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 34569: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 34837: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 34838: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 34839: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 34840: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 34841: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 34842: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 34843: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 34844: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 34845: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 34846: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 34847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 34848: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 34849: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Vale killed in action
- 1: Cole incapacitated
- 1: Soren incapacitated
- 1: Tern incapacitated
- 1: Reed incapacitated
- 1: Orin incapacitated

## Outcome attribution

- 170.45s, evidence 2258: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499586207599617, 'next_transition': 25207}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 170.45s, evidence 25197: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258000 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499586207599617, 'next_transition': 25207}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 170.45s, evidence 25198: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.258000 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499586207599617, 'next_transition': 25207}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 328.30s, evidence 3901: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 328.30s, evidence 33351: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.344513 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3185335526225024, 'next_transition': 33358}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 328.30s, evidence 33352: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.344513 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 328.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3185335526225024, 'next_transition': 33358}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
