# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/29/109/good-azure/battle-109-1789674323790601669`

## Battle summary

**Ember** · 360 s · 580 shots.

### Turning points

- 33.4s, squad 4: contact (events line 359). First recorded contact.
- 63.8s, squad 0: help call ([trace 8496](#trace-8496)). No completion observed before termination.
- 69.9s, squad 0: help call ([trace 9799](#trace-9799)). No completion observed before termination.
- 74.0s, squad 0: withdrawal ([trace 10071](#trace-10071)). 114.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 119.8s, squad 0: withdrawal ([trace 12453](#trace-12453)). 162.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 222.0s, squad 0: withdrawal ([trace 19645](#trace-19645)). 262.4s, squad 0: advanced tactically.
- 242.2s, squad 0: help call ([trace 20427](#trace-20427)). No completion observed before termination.
- 261.8s, squad 0: help call ([trace 20856](#trace-20856)). No completion observed before termination.
- 266.4s, squad 0: withdrawal ([trace 21060](#trace-21060)). 312.9s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 50 shots, 5/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 530 shots, 2/8 lost.

### Decisions and attribution

At 34.0s, squad 0 chose took cover and returned fire ([trace 2976](#trace-2976)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 68.2s, squad 0 chose FightHere: nearest known group ([trace 9296](#trace-9296)), followed by 1 shots and 0 own casualties; estimate 9.8 against 7 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 538](#trace-538)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.91501055644608, 'next_transition': 551}.
- 37.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.571711 retreat threshold=0.500000 initiative=delegated ([trace 3860](#trace-3860)). Following evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17996795406348268, 'next_transition': 3872}.

### Communication

264 matched deliveries (mean 0.39s, max 1.60s); 103 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 33.40s, squad 4, contact, evidence events line 359: First recorded contact; .
- 63.80s, squad 0, help call, evidence 8496: NeedSupport; No completion observed before termination.
- 69.90s, squad 0, help call, evidence 9799: NeedSupport; No completion observed before termination.
- 73.95s, squad 0, withdrawal, evidence 10071: BreakContact: believed ratio at least two without superiority; 114.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 119.75s, squad 0, withdrawal, evidence 12453: Withdraw to received rally; 162.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 222.00s, squad 0, withdrawal, evidence 19645: BreakContact: believed ratio at least two without superiority; 262.4s, squad 0: advanced tactically.
- 242.20s, squad 0, help call, evidence 20427: NeedSupport; No completion observed before termination.
- 261.80s, squad 0, help call, evidence 20856: NeedSupport; No completion observed before termination.
- 266.40s, squad 0, withdrawal, evidence 21060: Withdraw to received rally; 312.9s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8366057010443388, 'next_transition': 451}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8366057010443388, 'next_transition': 451}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8366057010443388, 'next_transition': 451}.
<a id="trace-451"></a>
<a id="trace-472"></a>
<a id="trace-498"></a>
<a id="trace-515"></a>
<a id="trace-531"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2299751769664335, 'next_transition': 472}.
<a id="trace-79"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 79): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.91501055644608, 'next_transition': 551}.
<a id="trace-538"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 538): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 538. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.91501055644608, 'next_transition': 551}.
<a id="trace-539"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 539): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 539. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.91501055644608, 'next_transition': 551}.
<a id="trace-551"></a>
<a id="trace-574"></a>
<a id="trace-651"></a>
<a id="trace-670"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 551): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 539. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149753969961077, 'next_transition': 574}.
<a id="trace-672"></a>
<a id="trace-1010"></a>
<a id="trace-1040"></a>
<a id="trace-1072"></a>
<a id="trace-1122"></a>
<a id="trace-1166"></a>
<a id="trace-1181"></a>
<a id="trace-1200"></a>
<a id="trace-1284"></a>
<a id="trace-1304"></a>
<a id="trace-1319"></a>
<a id="trace-1344"></a>
<a id="trace-1386"></a>
<a id="trace-1404"></a>
<a id="trace-1417"></a>
<a id="trace-1453"></a>
<a id="trace-1530"></a>
<a id="trace-1550"></a>
<a id="trace-1682"></a>
<a id="trace-1860"></a>
<a id="trace-1889"></a>
<a id="trace-1936"></a>
<a id="trace-1968"></a>
<a id="trace-2007"></a>
<a id="trace-2088"></a>
<a id="trace-2109"></a>
<a id="trace-2123"></a>
<a id="trace-2138"></a>
<a id="trace-2163"></a>
<a id="trace-2177"></a>
<a id="trace-2197"></a>
<a id="trace-2209"></a>
<a id="trace-2240"></a>
<a id="trace-2315"></a>
<a id="trace-2323"></a>
<a id="trace-2343"></a>
<a id="trace-2356"></a>
<a id="trace-2374"></a>
<a id="trace-2387"></a>
<a id="trace-2403"></a>
<a id="trace-2731"></a>
<a id="trace-2750"></a>
<a id="trace-2835"></a>
<a id="trace-2852"></a>
<a id="trace-2868"></a>
<a id="trace-2880"></a>
<a id="trace-2898"></a>
<a id="trace-2921"></a>
<a id="trace-2939"></a>
<a id="trace-2964"></a>
<a id="trace-3291"></a>
<a id="trace-3609"></a>
<a id="trace-3718"></a>
<a id="trace-3753"></a>
<a id="trace-3827"></a>
<a id="trace-3874"></a>
<a id="trace-3891"></a>
<a id="trace-6357"></a>
<a id="trace-6375"></a>
<a id="trace-6557"></a>
<a id="trace-6569"></a>
<a id="trace-6656"></a>
<a id="trace-6690"></a>
<a id="trace-6705"></a>
<a id="trace-6734"></a>
<a id="trace-6771"></a>
<a id="trace-6791"></a>
<a id="trace-6806"></a>
<a id="trace-6821"></a>
<a id="trace-6843"></a>
<a id="trace-6919"></a>
<a id="trace-6932"></a>
<a id="trace-6950"></a>
<a id="trace-6967"></a>
<a id="trace-6983"></a>
<a id="trace-6995"></a>
<a id="trace-7012"></a>
<a id="trace-7397"></a>
<a id="trace-7410"></a>
<a id="trace-7421"></a>
<a id="trace-7442"></a>
<a id="trace-7467"></a>
<a id="trace-7488"></a>
<a id="trace-7503"></a>
<a id="trace-8022"></a>
<a id="trace-8113"></a>
<a id="trace-8131"></a>
<a id="trace-8152"></a>
<a id="trace-8212"></a>
<a id="trace-8226"></a>
<a id="trace-8255"></a>
<a id="trace-8271"></a>
<a id="trace-8291"></a>
<a id="trace-8307"></a>
<a id="trace-8395"></a>
<a id="trace-8427"></a>
<a id="trace-8434"></a>
<a id="trace-8450"></a>
<a id="trace-8464"></a>
<a id="trace-8478"></a>
<a id="trace-8492"></a>
<a id="trace-9089"></a>
<a id="trace-9114"></a>
<a id="trace-9139"></a>
<a id="trace-9149"></a>
<a id="trace-9182"></a>
<a id="trace-9321"></a>
<a id="trace-9333"></a>
<a id="trace-9342"></a>
<a id="trace-9923"></a>
<a id="trace-9936"></a>
<a id="trace-9954"></a>
<a id="trace-9982"></a>
<a id="trace-10024"></a>
<a id="trace-10056"></a>
<a id="trace-10515"></a>
<a id="trace-10558"></a>
<a id="trace-10667"></a>
<a id="trace-10694"></a>
<a id="trace-10724"></a>
<a id="trace-10788"></a>
<a id="trace-10811"></a>
<a id="trace-10835"></a>
<a id="trace-10852"></a>
<a id="trace-10931"></a>
<a id="trace-10940"></a>
<a id="trace-10964"></a>
<a id="trace-10977"></a>
<a id="trace-10986"></a>
<a id="trace-11013"></a>
<a id="trace-11038"></a>
<a id="trace-11209"></a>
<a id="trace-11452"></a>
<a id="trace-11483"></a>
<a id="trace-11507"></a>
<a id="trace-11532"></a>
<a id="trace-11603"></a>
<a id="trace-11617"></a>
<a id="trace-11634"></a>
<a id="trace-11655"></a>
<a id="trace-11743"></a>
<a id="trace-11762"></a>
<a id="trace-11780"></a>
<a id="trace-11795"></a>
<a id="trace-11813"></a>
<a id="trace-11885"></a>
<a id="trace-11900"></a>
<a id="trace-11919"></a>
<a id="trace-11931"></a>
<a id="trace-11944"></a>
<a id="trace-12098"></a>
<a id="trace-12122"></a>
<a id="trace-12140"></a>
<a id="trace-12166"></a>
<a id="trace-12240"></a>
<a id="trace-12250"></a>
<a id="trace-12263"></a>
<a id="trace-12278"></a>
<a id="trace-12289"></a>
<a id="trace-12367"></a>
<a id="trace-12398"></a>
<a id="trace-12420"></a>
<a id="trace-12435"></a>
<a id="trace-12448"></a>
<a id="trace-12589"></a>
<a id="trace-12637"></a>
<a id="trace-12656"></a>
<a id="trace-12740"></a>
<a id="trace-12753"></a>
<a id="trace-12767"></a>
<a id="trace-12778"></a>
<a id="trace-12792"></a>
<a id="trace-12865"></a>
<a id="trace-12879"></a>
<a id="trace-13046"></a>
<a id="trace-13072"></a>
<a id="trace-13094"></a>
<a id="trace-13171"></a>
<a id="trace-13188"></a>
<a id="trace-13205"></a>
<a id="trace-13222"></a>
<a id="trace-13237"></a>
<a id="trace-13311"></a>
<a id="trace-13329"></a>
<a id="trace-13343"></a>
<a id="trace-13375"></a>
<a id="trace-13446"></a>
<a id="trace-13537"></a>
<a id="trace-13573"></a>
<a id="trace-13642"></a>
<a id="trace-13678"></a>
<a id="trace-13842"></a>
<a id="trace-13930"></a>
<a id="trace-13949"></a>
<a id="trace-13970"></a>
<a id="trace-13982"></a>
<a id="trace-13997"></a>
<a id="trace-14073"></a>
<a id="trace-14112"></a>
<a id="trace-14143"></a>
<a id="trace-14165"></a>
<a id="trace-14267"></a>
<a id="trace-14282"></a>
<a id="trace-14313"></a>
<a id="trace-14377"></a>
<a id="trace-14394"></a>
<a id="trace-14409"></a>
<a id="trace-14480"></a>
<a id="trace-14493"></a>
<a id="trace-14501"></a>
<a id="trace-14510"></a>
<a id="trace-14595"></a>
<a id="trace-14625"></a>
<a id="trace-14807"></a>
<a id="trace-14843"></a>
<a id="trace-14921"></a>
<a id="trace-14935"></a>
<a id="trace-14951"></a>
<a id="trace-14968"></a>
<a id="trace-14993"></a>
<a id="trace-15080"></a>
<a id="trace-15094"></a>
<a id="trace-15111"></a>
<a id="trace-15129"></a>
<a id="trace-15207"></a>
<a id="trace-15227"></a>
<a id="trace-15247"></a>
<a id="trace-15271"></a>
<a id="trace-15494"></a>
<a id="trace-15543"></a>
<a id="trace-15566"></a>
<a id="trace-15582"></a>
<a id="trace-15797"></a>
<a id="trace-15846"></a>
<a id="trace-15869"></a>
<a id="trace-16002"></a>
<a id="trace-16089"></a>
<a id="trace-16110"></a>
<a id="trace-16130"></a>
<a id="trace-16148"></a>
<a id="trace-16163"></a>
<a id="trace-19416"></a>
<a id="trace-19615"></a>
<a id="trace-19934"></a>
<a id="trace-19981"></a>
<a id="trace-20073"></a>
<a id="trace-20086"></a>
<a id="trace-20097"></a>
<a id="trace-20110"></a>
<a id="trace-20123"></a>
<a id="trace-20189"></a>
<a id="trace-20209"></a>
<a id="trace-20231"></a>
<a id="trace-20239"></a>
<a id="trace-20336"></a>
<a id="trace-20411"></a>
<a id="trace-20421"></a>
<a id="trace-20435"></a>
<a id="trace-20445"></a>
<a id="trace-20457"></a>
<a id="trace-20522"></a>
<a id="trace-20541"></a>
<a id="trace-20553"></a>
<a id="trace-20627"></a>
<a id="trace-20638"></a>
<a id="trace-20647"></a>
<a id="trace-20654"></a>
<a id="trace-20661"></a>
<a id="trace-20727"></a>
<a id="trace-20738"></a>
<a id="trace-20751"></a>
<a id="trace-20772"></a>
<a id="trace-20840"></a>
<a id="trace-20853"></a>
<a id="trace-20867"></a>
<a id="trace-20966"></a>
<a id="trace-21043"></a>
<a id="trace-21057"></a>
<a id="trace-21137"></a>
<a id="trace-21155"></a>
<a id="trace-21222"></a>
<a id="trace-21236"></a>
<a id="trace-21246"></a>
<a id="trace-21258"></a>
<a id="trace-21267"></a>
<a id="trace-21336"></a>
<a id="trace-21350"></a>
<a id="trace-21363"></a>
<a id="trace-21371"></a>
<a id="trace-21438"></a>
<a id="trace-21535"></a>
<a id="trace-21564"></a>
<a id="trace-21574"></a>
<a id="trace-21643"></a>
<a id="trace-21654"></a>
<a id="trace-21667"></a>
<a id="trace-21703"></a>
<a id="trace-21768"></a>
<a id="trace-21835"></a>
<a id="trace-21853"></a>
<a id="trace-21881"></a>
<a id="trace-22030"></a>
<a id="trace-22048"></a>
<a id="trace-22057"></a>
<a id="trace-22070"></a>
<a id="trace-22141"></a>
<a id="trace-22159"></a>
<a id="trace-22178"></a>
<a id="trace-22190"></a>
<a id="trace-22199"></a>
<a id="trace-22267"></a>
<a id="trace-22277"></a>
<a id="trace-22293"></a>
<a id="trace-22363"></a>
<a id="trace-22390"></a>
<a id="trace-22530"></a>
<a id="trace-22563"></a>
<a id="trace-22582"></a>
<a id="trace-22662"></a>
<a id="trace-22679"></a>
<a id="trace-22687"></a>
<a id="trace-22700"></a>
<a id="trace-22765"></a>
<a id="trace-22791"></a>
<a id="trace-22799"></a>
<a id="trace-22805"></a>
<a id="trace-22867"></a>
<a id="trace-22878"></a>
<a id="trace-22886"></a>
<a id="trace-22903"></a>
<a id="trace-22910"></a>
<a id="trace-22975"></a>
<a id="trace-22988"></a>
<a id="trace-22998"></a>
<a id="trace-23077"></a>
<a id="trace-23086"></a>
<a id="trace-23095"></a>
<a id="trace-23107"></a>
<a id="trace-23183"></a>
<a id="trace-23195"></a>
<a id="trace-23204"></a>
<a id="trace-23212"></a>
<a id="trace-23282"></a>
<a id="trace-23290"></a>
<a id="trace-23308"></a>
<a id="trace-23319"></a>
<a id="trace-23495"></a>
<a id="trace-23636"></a>
<a id="trace-23655"></a>
<a id="trace-23671"></a>
<a id="trace-23747"></a>
<a id="trace-23762"></a>
<a id="trace-23789"></a>
<a id="trace-23799"></a>
- 5.70s–359.30s (×354), actor 37, squad 4 (trace 672): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 594. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039375, 'next_transition': 1010}.
<a id="trace-682"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 682): received platoon directive. Knowledge: actor memory at 5.00s, trace 581. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362624187557331, 'next_transition': 1008}.
<a id="trace-1008"></a>
<a id="trace-1038"></a>
<a id="trace-1070"></a>
<a id="trace-1096"></a>
<a id="trace-1120"></a>
<a id="trace-1164"></a>
<a id="trace-1179"></a>
<a id="trace-1198"></a>
<a id="trace-1282"></a>
<a id="trace-1302"></a>
<a id="trace-1317"></a>
<a id="trace-1342"></a>
<a id="trace-1364"></a>
<a id="trace-1384"></a>
<a id="trace-1402"></a>
<a id="trace-1415"></a>
<a id="trace-1437"></a>
<a id="trace-1451"></a>
<a id="trace-1528"></a>
<a id="trace-1548"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 1008): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 586. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.936515958707138, 'next_transition': 1038}.
<a id="trace-1552"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 1552): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1455. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09367007192089963, 'next_transition': 1680}.
<a id="trace-1553"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 1553): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1455. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09367007192089963, 'next_transition': 1680}.
<a id="trace-1680"></a>
- 16.25s–16.25s (×1), actor 5, squad 0 (trace 1680): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1460. Next observer evidence: None.
<a id="trace-1686"></a>
- 16.35s–16.35s (×1), actor 0, squad 0 (trace 1686): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1455. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1275035930866263, 'next_transition': 1858}.
<a id="trace-1858"></a>
<a id="trace-1887"></a>
<a id="trace-1909"></a>
<a id="trace-1934"></a>
<a id="trace-1966"></a>
<a id="trace-1992"></a>
<a id="trace-2005"></a>
<a id="trace-2086"></a>
<a id="trace-2107"></a>
<a id="trace-2121"></a>
<a id="trace-2136"></a>
<a id="trace-2161"></a>
<a id="trace-2175"></a>
<a id="trace-2195"></a>
<a id="trace-2207"></a>
<a id="trace-2226"></a>
<a id="trace-2238"></a>
<a id="trace-2313"></a>
<a id="trace-2321"></a>
<a id="trace-2341"></a>
<a id="trace-2354"></a>
<a id="trace-2372"></a>
<a id="trace-2385"></a>
<a id="trace-2401"></a>
- 16.75s–28.25s (×24), actor 5, squad 0 (trace 1858): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1460. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7378155052036673, 'next_transition': 1887}.
<a id="trace-2404"></a>
- 28.25s–28.25s (×1), actor 0, squad 0 (trace 2404): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 2244. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2716}.
<a id="trace-2716"></a>
<a id="trace-2729"></a>
<a id="trace-2748"></a>
<a id="trace-2833"></a>
<a id="trace-2850"></a>
<a id="trace-2866"></a>
<a id="trace-2878"></a>
<a id="trace-2896"></a>
<a id="trace-2919"></a>
<a id="trace-2937"></a>
<a id="trace-2962"></a>
- 28.75s–33.75s (×11), actor 5, squad 0 (trace 2716): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2249. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4579699598238207, 'next_transition': 2729}.
<a id="trace-2976"></a>
- 34.05s–34.05s (×1), actor 0, squad 0 (trace 2976): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 2753. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07874961914590446, 'next_transition': 3289}.
<a id="trace-2977"></a>
- 34.05s–34.05s (×1), actor 0, squad 0 (trace 2977): bounding overwatch. Knowledge: actor memory at 30.00s, trace 2753. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07874961914590446, 'next_transition': 3289}.
<a id="trace-2978"></a>
- 34.05s–34.05s (×1), actor 0, squad 0 (trace 2978): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2753. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07874961914590446, 'next_transition': 3289}.
<a id="trace-3289"></a>
- 34.25s–34.25s (×1), actor 5, squad 0 (trace 3289): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2758. Next observer evidence: None.
<a id="trace-3293"></a>
- 34.30s–34.30s (×1), actor 0, squad 0 (trace 3293): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2753. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09873727736080741, 'next_transition': 3607}.
<a id="trace-3607"></a>
<a id="trace-3716"></a>
<a id="trace-3751"></a>
<a id="trace-3780"></a>
<a id="trace-3825"></a>
- 34.75s–36.75s (×5), actor 5, squad 0 (trace 3607): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2758. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25219240796242454, 'next_transition': 3716}.
<a id="trace-470"></a>
- 37.10s–37.10s (×1), actor 5, squad 0 (events line 470): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3860"></a>
- 37.10s–37.10s (×1), actor 5, squad 0 (trace 3860): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.571711 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 3860. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17996795406348268, 'next_transition': 3872}.
<a id="trace-3861"></a>
- 37.10s–37.10s (×1), actor 5, squad 0 (trace 3861): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.571711 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 3861. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17996795406348268, 'next_transition': 3872}.
<a id="trace-3872"></a>
<a id="trace-3889"></a>
- 37.25s–37.75s (×2), actor 5, squad 0 (trace 3872): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 3861. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3600156232437577, 'next_transition': 3889}.
<a id="trace-3893"></a>
- 37.80s–37.80s (×1), actor 0, squad 0 (trace 3893): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3624. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362802556994445, 'next_transition': 6355}.
<a id="trace-3895"></a>
- 37.80s–37.80s (×1), actor 0, squad 0 (trace 3895): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 3624. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362802556994445, 'next_transition': 6355}.
<a id="trace-6179"></a>
- 37.80s–37.80s (×1), actor 0, squad 0 (trace 6179): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 3624. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362802556994445, 'next_transition': 6355}.
<a id="trace-6180"></a>
- 37.80s–37.80s (×1), actor 0, squad 0 (trace 6180): MoveTactically. Knowledge: actor memory at 35.00s, trace 3624. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362802556994445, 'next_transition': 6355}.
<a id="trace-6181"></a>
- 37.80s–37.80s (×1), actor 0, squad 0 (trace 6181): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 3624. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362802556994445, 'next_transition': 6355}.
<a id="trace-6355"></a>
<a id="trace-6373"></a>
- 38.25s–38.75s (×2), actor 5, squad 0 (trace 6355): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 37.10s, trace 3861. Next observer evidence: {'until': 38.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6373}.
<a id="trace-6388"></a>
- 39.05s–39.05s (×1), actor 5, squad 0 (trace 6388): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 39.05s, trace 6388. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2892676307706992, 'next_transition': 6555}.
<a id="trace-6389"></a>
- 39.05s–39.05s (×1), actor 0, squad 0 (trace 6389): received platoon directive. Knowledge: actor memory at 35.00s, trace 3624. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2892676307706992, 'next_transition': 6555}.
<a id="trace-6555"></a>
<a id="trace-6567"></a>
<a id="trace-6654"></a>
<a id="trace-6688"></a>
<a id="trace-6703"></a>
<a id="trace-6732"></a>
<a id="trace-6752"></a>
<a id="trace-6769"></a>
<a id="trace-6789"></a>
<a id="trace-6804"></a>
<a id="trace-6819"></a>
<a id="trace-6841"></a>
<a id="trace-6917"></a>
<a id="trace-6930"></a>
<a id="trace-6948"></a>
<a id="trace-6965"></a>
<a id="trace-6981"></a>
<a id="trace-6993"></a>
<a id="trace-7010"></a>
<a id="trace-7026"></a>
- 39.25s–48.75s (×20), actor 5, squad 0 (trace 6555): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.05s, trace 6388. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.736474392762476, 'next_transition': 6567}.
<a id="trace-7030"></a>
- 48.95s–48.95s (×1), actor 0, squad 0 (trace 7030): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 45.00s, trace 6844. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900835872083343, 'next_transition': 7300}.
<a id="trace-7300"></a>
<a id="trace-7310"></a>
<a id="trace-7395"></a>
<a id="trace-7408"></a>
<a id="trace-7419"></a>
<a id="trace-7440"></a>
<a id="trace-7465"></a>
<a id="trace-7478"></a>
<a id="trace-7486"></a>
<a id="trace-7501"></a>
- 49.25s–53.75s (×10), actor 5, squad 0 (trace 7300): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6848. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6076667365205815, 'next_transition': 7310}.
<a id="trace-7506"></a>
- 53.95s–53.95s (×1), actor 0, squad 0 (trace 7506): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 7312. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1431878144002767, 'next_transition': 8001}.
<a id="trace-7507"></a>
- 53.95s–53.95s (×1), actor 0, squad 0 (trace 7507): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 50.00s, trace 7312. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1431878144002767, 'next_transition': 8001}.
<a id="trace-8001"></a>
<a id="trace-8020"></a>
<a id="trace-8111"></a>
<a id="trace-8129"></a>
<a id="trace-8150"></a>
<a id="trace-8178"></a>
<a id="trace-8210"></a>
- 54.25s–57.25s (×7), actor 5, squad 0 (trace 8001): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7316. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0989591962103107, 'next_transition': 8020}.
<a id="trace-8217"></a>
- 57.50s–57.50s (×1), actor 0, squad 0 (trace 8217): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 8030. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5647875837613421, 'next_transition': 8224}.
<a id="trace-8224"></a>
<a id="trace-8253"></a>
<a id="trace-8269"></a>
<a id="trace-8289"></a>
<a id="trace-8305"></a>
<a id="trace-8393"></a>
<a id="trace-8410"></a>
<a id="trace-8425"></a>
<a id="trace-8432"></a>
<a id="trace-8448"></a>
<a id="trace-8462"></a>
<a id="trace-8476"></a>
<a id="trace-8490"></a>
- 57.75s–63.75s (×13), actor 5, squad 0 (trace 8224): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8034. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.536693136901034, 'next_transition': 8253}.
<a id="trace-8494"></a>
- 63.80s–63.80s (×1), actor 1, squad 0 (trace 8494): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 60.00s, trace 8314. Next observer evidence: {'until': 64.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.25499644292181356, 'next_transition': 8514}.
<a id="trace-8496"></a>
- 63.80s–63.80s (×1), actor 1, squad 0 (trace 8496): NeedSupport. Knowledge: actor memory at 60.00s, trace 8314. Next observer evidence: {'until': 64.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.25499644292181356, 'next_transition': 8514}.
<a id="trace-8514"></a>
<a id="trace-8529"></a>
- 64.25s–64.75s (×2), actor 5, squad 0 (trace 8514): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 8317. Next observer evidence: {'until': 64.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2584902321417067, 'next_transition': 8529}.
<a id="trace-8533"></a>
- 64.80s–64.80s (×1), actor 1, squad 0 (trace 8533): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 8314. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3927340175710948, 'next_transition': 9087}.
<a id="trace-8538"></a>
- 64.80s–64.80s (×1), actor 1, squad 0 (trace 8538): MoveTactically. Knowledge: actor memory at 60.00s, trace 8314. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3927340175710948, 'next_transition': 9087}.
<a id="trace-8539"></a>
- 64.80s–64.80s (×1), actor 1, squad 0 (trace 8539): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 60.00s, trace 8314. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3927340175710948, 'next_transition': 9087}.
<a id="trace-9087"></a>
<a id="trace-9112"></a>
<a id="trace-9137"></a>
<a id="trace-9147"></a>
<a id="trace-9165"></a>
<a id="trace-9180"></a>
- 65.25s–67.75s (×6), actor 5, squad 0 (trace 9087): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 9020. Next observer evidence: {'until': 65.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23711832092268834, 'next_transition': 9112}.
<a id="trace-9183"></a>
- 67.80s–67.80s (×1), actor 1, squad 0 (trace 9183): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 65.00s, trace 9017. Next observer evidence: {'until': 68, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1416355149491809, 'next_transition': 795}.
<a id="trace-795"></a>
- 68.15s–68.15s (×1), actor 5, squad 0 (events line 795): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9295"></a>
- 68.15s–68.15s (×1), actor 5, squad 0 (trace 9295): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.354350 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.15s, trace 9295. Next observer evidence: {'until': 68.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13605241785098485, 'next_transition': 9305}.
<a id="trace-9296"></a>
- 68.15s–68.15s (×1), actor 5, squad 0 (trace 9296): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.354350 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.15s, trace 9296. Next observer evidence: {'until': 68.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13605241785098485, 'next_transition': 9305}.
<a id="trace-9305"></a>
<a id="trace-9319"></a>
<a id="trace-9331"></a>
<a id="trace-9340"></a>
- 68.25s–69.75s (×4), actor 5, squad 0 (trace 9305): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 68.15s, trace 9296. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3268581024613007, 'next_transition': 9319}.
<a id="trace-9344"></a>
- 69.90s–69.90s (×1), actor 1, squad 0 (trace 9344): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 9017. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099973027469635, 'next_transition': 9882}.
<a id="trace-9345"></a>
- 69.90s–69.90s (×1), actor 1, squad 0 (trace 9345): received platoon directive. Knowledge: actor memory at 65.00s, trace 9017. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099973027469635, 'next_transition': 9882}.
<a id="trace-9799"></a>
- 69.90s–69.90s (×1), actor 1, squad 0 (trace 9799): NeedSupport. Knowledge: actor memory at 65.00s, trace 9017. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099973027469635, 'next_transition': 9882}.
<a id="trace-9882"></a>
<a id="trace-9901"></a>
<a id="trace-9921"></a>
<a id="trace-9934"></a>
<a id="trace-9952"></a>
<a id="trace-9980"></a>
<a id="trace-10022"></a>
<a id="trace-10054"></a>
- 70.25s–73.75s (×8), actor 5, squad 0 (trace 9882): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 9813. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999698966757716, 'next_transition': 9901}.
<a id="trace-10071"></a>
- 73.95s–73.95s (×1), actor 1, squad 0 (trace 10071): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 9810. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2508869661989007, 'next_transition': 10513}.
<a id="trace-10072"></a>
- 73.95s–73.95s (×1), actor 1, squad 0 (trace 10072): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 9810. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2508869661989007, 'next_transition': 10513}.
<a id="trace-10513"></a>
<a id="trace-10556"></a>
<a id="trace-10665"></a>
<a id="trace-10692"></a>
<a id="trace-10722"></a>
<a id="trace-10753"></a>
<a id="trace-10768"></a>
<a id="trace-10786"></a>
<a id="trace-10809"></a>
<a id="trace-10818"></a>
<a id="trace-10833"></a>
<a id="trace-10850"></a>
<a id="trace-10929"></a>
<a id="trace-10938"></a>
<a id="trace-10958"></a>
<a id="trace-10962"></a>
<a id="trace-10974"></a>
<a id="trace-11010"></a>
<a id="trace-11068"></a>
<a id="trace-11206"></a>
- 74.25s–85.25s (×20), actor 5, squad 0 (trace 10513): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 9813. Next observer evidence: {'until': 74.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0857577936051015, 'next_transition': 10556}.
<a id="trace-11249"></a>
- 86.15s–86.15s (×1), actor 1, squad 0 (trace 11249): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 11125. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600000000000017, 'next_transition': 11449}.
<a id="trace-11286"></a>
- 86.15s–86.15s (×1), actor 1, squad 0 (trace 11286): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 11125. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600000000000017, 'next_transition': 11449}.
<a id="trace-11449"></a>
<a id="trace-11480"></a>
<a id="trace-11505"></a>
<a id="trace-11530"></a>
<a id="trace-11601"></a>
<a id="trace-11615"></a>
<a id="trace-11632"></a>
<a id="trace-11653"></a>
<a id="trace-11667"></a>
<a id="trace-11741"></a>
<a id="trace-11760"></a>
<a id="trace-11778"></a>
<a id="trace-11793"></a>
<a id="trace-11811"></a>
<a id="trace-11883"></a>
<a id="trace-11898"></a>
<a id="trace-11917"></a>
<a id="trace-11929"></a>
<a id="trace-11942"></a>
<a id="trace-12016"></a>
- 86.25s–105.25s (×20), actor 5, squad 0 (trace 11449): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 11128. Next observer evidence: {'until': 87.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0629999999999999, 'next_transition': 11480}.
<a id="trace-12026"></a>
- 106.10s–106.10s (×1), actor 1, squad 0 (trace 12026): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 11950. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12096}.
<a id="trace-12039"></a>
- 106.10s–106.10s (×1), actor 1, squad 0 (trace 12039): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 11950. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12096}.
<a id="trace-12096"></a>
<a id="trace-12120"></a>
<a id="trace-12138"></a>
<a id="trace-12164"></a>
<a id="trace-12238"></a>
<a id="trace-12248"></a>
<a id="trace-12261"></a>
<a id="trace-12276"></a>
<a id="trace-12287"></a>
- 106.25s–114.25s (×9), actor 5, squad 0 (trace 12096): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 11953. Next observer evidence: {'until': 107.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.25199773967240247, 'next_transition': 12120}.
<a id="trace-12293"></a>
- 114.55s–114.55s (×1), actor 1, squad 0 (trace 12293): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 12172. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8640111330357693, 'next_transition': 12365}.
<a id="trace-12365"></a>
<a id="trace-12396"></a>
<a id="trace-12418"></a>
- 115.25s–117.25s (×3), actor 5, squad 0 (trace 12365): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 12307. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7793916981487006, 'next_transition': 12396}.
<a id="trace-1185"></a>
- 117.65s–117.65s (×1), actor 5, squad 0 (events line 1185): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12433}.
<a id="trace-12426"></a>
- 117.65s–117.65s (×1), actor 5, squad 0 (trace 12426): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.373481 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 117.65s, trace 12426. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12433}.
<a id="trace-12427"></a>
- 117.65s–117.65s (×1), actor 5, squad 0 (trace 12427): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.373481 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 117.65s, trace 12427. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12433}.
<a id="trace-12433"></a>
<a id="trace-12446"></a>
- 118.25s–119.25s (×2), actor 5, squad 0 (trace 12433): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 117.65s, trace 12427. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33838000000000007, 'next_transition': 12446}.
<a id="trace-12453"></a>
- 119.75s–119.75s (×1), actor 1, squad 0 (trace 12453): Withdraw to received rally. Knowledge: actor memory at 115.00s, trace 12304. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03103889199053359, 'next_transition': 12587}.
<a id="trace-12454"></a>
- 119.75s–119.75s (×1), actor 1, squad 0 (trace 12454): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 12304. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03103889199053359, 'next_transition': 12587}.
<a id="trace-12587"></a>
<a id="trace-12621"></a>
<a id="trace-12635"></a>
<a id="trace-12654"></a>
<a id="trace-12666"></a>
<a id="trace-12738"></a>
<a id="trace-12751"></a>
<a id="trace-12765"></a>
<a id="trace-12776"></a>
<a id="trace-12790"></a>
<a id="trace-12863"></a>
<a id="trace-12877"></a>
- 120.25s–131.30s (×12), actor 5, squad 0 (trace 12587): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 12527. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7668567666210435, 'next_transition': 12621}.
<a id="trace-12882"></a>
- 131.65s–131.65s (×1), actor 1, squad 0 (trace 12882): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 12796. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13044}.
<a id="trace-12883"></a>
- 131.65s–131.65s (×1), actor 1, squad 0 (trace 12883): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 12796. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13044}.
<a id="trace-13044"></a>
<a id="trace-13070"></a>
<a id="trace-13092"></a>
<a id="trace-13169"></a>
<a id="trace-13186"></a>
<a id="trace-13203"></a>
<a id="trace-13220"></a>
<a id="trace-13235"></a>
<a id="trace-13309"></a>
<a id="trace-13327"></a>
<a id="trace-13341"></a>
<a id="trace-13358"></a>
<a id="trace-13373"></a>
<a id="trace-13444"></a>
- 132.30s–145.30s (×14), actor 5, squad 0 (trace 13044): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 12799. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7335031934756098, 'next_transition': 13070}.
<a id="trace-13450"></a>
- 146.05s–146.05s (×1), actor 1, squad 0 (trace 13450): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 13382. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09072044091603579, 'next_transition': 13510}.
<a id="trace-13451"></a>
- 146.05s–146.05s (×1), actor 1, squad 0 (trace 13451): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 13382. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09072044091603579, 'next_transition': 13510}.
<a id="trace-13510"></a>
<a id="trace-13535"></a>
<a id="trace-13550"></a>
<a id="trace-13571"></a>
<a id="trace-13640"></a>
<a id="trace-13652"></a>
<a id="trace-13663"></a>
<a id="trace-13676"></a>
- 146.30s–153.30s (×8), actor 5, squad 0 (trace 13510): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 13385. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7371043377957189, 'next_transition': 13535}.
<a id="trace-13681"></a>
- 153.85s–153.85s (×1), actor 1, squad 0 (trace 13681): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 13578. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18144316245039366, 'next_transition': 13840}.
<a id="trace-13682"></a>
- 153.85s–153.85s (×1), actor 1, squad 0 (trace 13682): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 13578. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18144316245039366, 'next_transition': 13840}.
<a id="trace-13840"></a>
<a id="trace-13928"></a>
<a id="trace-13947"></a>
<a id="trace-13968"></a>
<a id="trace-13980"></a>
<a id="trace-13995"></a>
<a id="trace-14071"></a>
<a id="trace-14090"></a>
<a id="trace-14110"></a>
- 154.30s–162.30s (×9), actor 5, squad 0 (trace 13840): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 13581. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8331081521687006, 'next_transition': 13928}.
<a id="trace-14116"></a>
- 162.35s–162.35s (×1), actor 1, squad 0 (trace 14116): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 14002. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2235706778038433, 'next_transition': 14141}.
<a id="trace-14141"></a>
<a id="trace-14163"></a>
<a id="trace-14248"></a>
<a id="trace-14265"></a>
<a id="trace-14280"></a>
<a id="trace-14293"></a>
<a id="trace-14311"></a>
<a id="trace-14375"></a>
<a id="trace-14388"></a>
<a id="trace-14392"></a>
<a id="trace-14399"></a>
<a id="trace-14407"></a>
<a id="trace-14478"></a>
<a id="trace-14491"></a>
<a id="trace-14499"></a>
- 163.30s–177.30s (×15), actor 5, squad 0 (trace 14141): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 14005. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2126091744846803, 'next_transition': 14163}.
<a id="trace-1389"></a>
- 177.65s–177.65s (×1), actor 5, squad 0 (events line 1389): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14503"></a>
- 177.65s–177.65s (×1), actor 5, squad 0 (trace 14503): renew committed intent (75 s lifetime). Knowledge: actor memory at 177.65s, trace 14503. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08399604885945364, 'next_transition': 14508}.
<a id="trace-14508"></a>
<a id="trace-14514"></a>
- 178.30s–179.30s (×2), actor 5, squad 0 (trace 14508): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.65s, trace 14503. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.296798400002427, 'next_transition': 14514}.
<a id="trace-1392"></a>
- 179.60s–179.60s (×1), actor 5, squad 0 (events line 1392): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14516"></a>
- 179.60s–179.60s (×1), actor 5, squad 0 (trace 14516): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.511679 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 179.60s, trace 14516. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27215354608014863, 'next_transition': 14581}.
<a id="trace-14517"></a>
- 179.60s–179.60s (×1), actor 5, squad 0 (trace 14517): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.511679 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 179.60s, trace 14517. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27215354608014863, 'next_transition': 14581}.
<a id="trace-14581"></a>
<a id="trace-14593"></a>
- 180.30s–181.30s (×2), actor 5, squad 0 (trace 14581): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 14522. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536021816702386, 'next_transition': 14593}.
<a id="trace-14596"></a>
- 181.35s–181.35s (×1), actor 1, squad 0 (trace 14596): MoveTactically. Knowledge: actor memory at 180.00s, trace 14519. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45358306892563743, 'next_transition': 14623}.
<a id="trace-14597"></a>
- 181.35s–181.35s (×1), actor 1, squad 0 (trace 14597): traveling overwatch. Knowledge: actor memory at 180.00s, trace 14519. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45358306892563743, 'next_transition': 14623}.
<a id="trace-14598"></a>
- 181.35s–181.35s (×1), actor 1, squad 0 (trace 14598): received platoon directive. Knowledge: actor memory at 180.00s, trace 14519. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45358306892563743, 'next_transition': 14623}.
<a id="trace-14623"></a>
- 182.30s–182.30s (×1), actor 5, squad 0 (trace 14623): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 14522. Next observer evidence: None.
<a id="trace-14626"></a>
- 182.35s–182.35s (×1), actor 1, squad 0 (trace 14626): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 14519. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34150840495659807, 'next_transition': 14805}.
<a id="trace-14805"></a>
<a id="trace-14841"></a>
<a id="trace-14919"></a>
<a id="trace-14933"></a>
<a id="trace-14949"></a>
<a id="trace-14966"></a>
<a id="trace-14991"></a>
<a id="trace-15063"></a>
<a id="trace-15078"></a>
<a id="trace-15092"></a>
<a id="trace-15109"></a>
<a id="trace-15127"></a>
<a id="trace-15205"></a>
<a id="trace-15225"></a>
<a id="trace-15245"></a>
<a id="trace-15259"></a>
<a id="trace-15269"></a>
- 183.30s–199.30s (×17), actor 5, squad 0 (trace 14805): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 14522. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2645077591197171, 'next_transition': 14841}.
<a id="trace-15285"></a>
- 200.05s–200.05s (×1), actor 1, squad 0 (trace 15285): current contact unknown for 10 s. Knowledge: actor memory at 200.00s, trace 15273. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0907276478478297, 'next_transition': 15492}.
<a id="trace-15492"></a>
<a id="trace-15521"></a>
<a id="trace-15541"></a>
- 200.30s–202.30s (×3), actor 5, squad 0 (trace 15492): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 15276. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2522555434585242, 'next_transition': 15521}.
<a id="trace-1499"></a>
- 202.40s–202.40s (×1), actor 5, squad 0 (events line 1499): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15548"></a>
- 202.40s–202.40s (×1), actor 5, squad 0 (trace 15548): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.122931 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 202.40s, trace 15548. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.911997607026796, 'next_transition': 15564}.
<a id="trace-15549"></a>
- 202.40s–202.40s (×1), actor 5, squad 0 (trace 15549): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.122931 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 202.40s, trace 15549. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.911997607026796, 'next_transition': 15564}.
<a id="trace-15564"></a>
<a id="trace-15580"></a>
- 203.30s–204.30s (×2), actor 5, squad 0 (trace 15564): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 202.40s, trace 15549. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1399911625354198, 'next_transition': 15580}.
<a id="trace-15585"></a>
- 204.65s–204.65s (×1), actor 1, squad 0 (trace 15585): received platoon directive. Knowledge: actor memory at 200.00s, trace 15273. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8427531338159315, 'next_transition': 15795}.
<a id="trace-15795"></a>
<a id="trace-15821"></a>
<a id="trace-15844"></a>
<a id="trace-15867"></a>
- 205.30s–208.30s (×4), actor 5, squad 0 (trace 15795): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 15736. Next observer evidence: {'until': 206.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.593575938832902, 'next_transition': 15821}.
<a id="trace-15873"></a>
- 208.85s–208.85s (×1), actor 1, squad 0 (trace 15873): ReactToContact: cover and return fire. Knowledge: actor memory at 205.00s, trace 15733. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6147682821004425, 'next_transition': 16000}.
<a id="trace-15874"></a>
- 208.85s–208.85s (×1), actor 1, squad 0 (trace 15874): bounding overwatch. Knowledge: actor memory at 205.00s, trace 15733. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6147682821004425, 'next_transition': 16000}.
<a id="trace-15875"></a>
- 208.85s–208.85s (×1), actor 1, squad 0 (trace 15875): new contact inside 100 m. Knowledge: actor memory at 205.00s, trace 15733. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6147682821004425, 'next_transition': 16000}.
<a id="trace-16000"></a>
<a id="trace-16087"></a>
<a id="trace-16108"></a>
<a id="trace-16128"></a>
- 209.30s–212.30s (×4), actor 5, squad 0 (trace 16000): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 15736. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.592576774558696, 'next_transition': 16087}.
<a id="trace-16135"></a>
- 212.65s–212.65s (×1), actor 1, squad 0 (trace 16135): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 210.00s, trace 16014. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8427585482175435, 'next_transition': 16146}.
<a id="trace-16146"></a>
<a id="trace-16161"></a>
<a id="trace-16241"></a>
<a id="trace-16259"></a>
- 213.30s–216.30s (×4), actor 5, squad 0 (trace 16146): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 16017. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5486635433859495, 'next_transition': 16161}.
<a id="trace-16270"></a>
- 217.20s–217.20s (×1), actor 1, squad 0 (trace 16270): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 215.00s, trace 16178. Next observer evidence: None.
<a id="trace-19066"></a>
- 217.20s–217.20s (×1), actor 1, squad 0 (trace 19066): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 215.00s, trace 16178. Next observer evidence: None.
<a id="trace-19067"></a>
- 217.20s–217.20s (×1), actor 1, squad 0 (trace 19067): MoveTactically. Knowledge: actor memory at 215.00s, trace 16178. Next observer evidence: None.
<a id="trace-19068"></a>
- 217.20s–217.20s (×1), actor 1, squad 0 (trace 19068): contact cover complete: assessment resumes closure. Knowledge: actor memory at 215.00s, trace 16178. Next observer evidence: None.
<a id="trace-19126"></a>
- 217.30s–217.30s (×1), actor 5, squad 0 (trace 19126): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 16181. Next observer evidence: {'until': 218.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6696156239272042, 'next_transition': 19137}.
<a id="trace-19137"></a>
- 218.20s–218.20s (×1), actor 1, squad 0 (trace 19137): ReactToContact: cover and return fire. Knowledge: actor memory at 215.00s, trace 16178. Next observer evidence: None.
<a id="trace-19138"></a>
- 218.20s–218.20s (×1), actor 1, squad 0 (trace 19138): new contact inside 100 m. Knowledge: actor memory at 215.00s, trace 16178. Next observer evidence: None.
<a id="trace-19373"></a>
<a id="trace-19414"></a>
- 218.30s–219.30s (×2), actor 5, squad 0 (trace 19373): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 16181. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7301313362651374, 'next_transition': 19414}.
<a id="trace-19451"></a>
- 219.75s–219.75s (×1), actor 5, squad 0 (trace 19451): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 219.75s, trace 19451. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7392863616844485, 'next_transition': 19534}.
<a id="trace-19534"></a>
<a id="trace-19613"></a>
- 220.30s–221.30s (×2), actor 5, squad 0 (trace 19534): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 19470. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7326086251847124, 'next_transition': 19613}.
<a id="trace-19645"></a>
- 222.00s–222.00s (×1), actor 1, squad 0 (trace 19645): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 220.00s, trace 19467. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1633957945262493, 'next_transition': 19932}.
<a id="trace-19646"></a>
- 222.00s–222.00s (×1), actor 1, squad 0 (trace 19646): rearward bound: one stationary suppressing element. Knowledge: actor memory at 220.00s, trace 19467. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1633957945262493, 'next_transition': 19932}.
<a id="trace-19932"></a>
<a id="trace-19979"></a>
<a id="trace-19998"></a>
<a id="trace-20071"></a>
<a id="trace-20084"></a>
<a id="trace-20095"></a>
<a id="trace-20108"></a>
<a id="trace-20121"></a>
<a id="trace-20187"></a>
- 222.30s–230.30s (×9), actor 5, squad 0 (trace 19932): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 19470. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6667575493962666, 'next_transition': 19979}.
<a id="trace-20197"></a>
- 230.85s–230.85s (×1), actor 1, squad 0 (trace 20197): support established: element delivered fire on threat area. Knowledge: actor memory at 230.00s, trace 20128. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20207}.
<a id="trace-20198"></a>
- 230.85s–230.85s (×1), actor 1, squad 0 (trace 20198): Fixing. Knowledge: actor memory at 230.00s, trace 20128. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20207}.
<a id="trace-20207"></a>
<a id="trace-20217"></a>
<a id="trace-20229"></a>
<a id="trace-20237"></a>
<a id="trace-20306"></a>
<a id="trace-20317"></a>
<a id="trace-20324"></a>
<a id="trace-20334"></a>
<a id="trace-20343"></a>
<a id="trace-20409"></a>
<a id="trace-20419"></a>
- 231.30s–241.30s (×11), actor 5, squad 0 (trace 20207): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 20130. Next observer evidence: {'until': 232.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20217}.
<a id="trace-20427"></a>
- 242.20s–242.20s (×1), actor 1, squad 0 (trace 20427): NeedSupport. Knowledge: actor memory at 240.00s, trace 20349. Next observer evidence: None.
<a id="trace-20433"></a>
<a id="trace-20443"></a>
<a id="trace-20455"></a>
<a id="trace-20520"></a>
<a id="trace-20531"></a>
- 242.30s–246.30s (×5), actor 5, squad 0 (trace 20433): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 20351. Next observer evidence: {'until': 243.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2015006072571499, 'next_transition': 20443}.
<a id="trace-20534"></a>
- 246.70s–246.70s (×1), actor 1, squad 0 (trace 20534): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 245.00s, trace 20461. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.303106273648369, 'next_transition': 20539}.
<a id="trace-20539"></a>
<a id="trace-20551"></a>
<a id="trace-20560"></a>
<a id="trace-20625"></a>
<a id="trace-20636"></a>
<a id="trace-20645"></a>
<a id="trace-20652"></a>
<a id="trace-20659"></a>
<a id="trace-20725"></a>
<a id="trace-20736"></a>
<a id="trace-20749"></a>
<a id="trace-20759"></a>
<a id="trace-20770"></a>
<a id="trace-20838"></a>
<a id="trace-20851"></a>
- 247.30s–261.30s (×15), actor 5, squad 0 (trace 20539): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 20463. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3902499431133847, 'next_transition': 20551}.
<a id="trace-20855"></a>
- 261.80s–261.80s (×1), actor 1, squad 0 (trace 20855): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 260.00s, trace 20777. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20865}.
<a id="trace-20856"></a>
- 261.80s–261.80s (×1), actor 1, squad 0 (trace 20856): NeedSupport. Knowledge: actor memory at 260.00s, trace 20777. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20865}.
<a id="trace-20865"></a>
- 262.30s–262.30s (×1), actor 5, squad 0 (trace 20865): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 20779. Next observer evidence: None.
<a id="trace-20871"></a>
- 262.40s–262.40s (×1), actor 1, squad 0 (trace 20871): Reorganise: completed/failed drill. Knowledge: actor memory at 260.00s, trace 20777. Next observer evidence: {'until': 262.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1796}.
<a id="trace-20874"></a>
- 262.40s–262.40s (×1), actor 1, squad 0 (trace 20874): MoveTactically. Knowledge: actor memory at 260.00s, trace 20777. Next observer evidence: {'until': 262.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1796}.
<a id="trace-20875"></a>
- 262.40s–262.40s (×1), actor 1, squad 0 (trace 20875): traveling overwatch. Knowledge: actor memory at 260.00s, trace 20777. Next observer evidence: {'until': 262.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1796}.
<a id="trace-20876"></a>
- 262.40s–262.40s (×1), actor 1, squad 0 (trace 20876): Reorganise complete. Knowledge: actor memory at 260.00s, trace 20777. Next observer evidence: {'until': 262.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1796}.
<a id="trace-1796"></a>
- 262.55s–262.55s (×1), actor 5, squad 0 (events line 1796): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20882"></a>
- 262.55s–262.55s (×1), actor 5, squad 0 (trace 20882): renew committed intent (75 s lifetime). Knowledge: actor memory at 262.55s, trace 20882. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20892}.
<a id="trace-20892"></a>
- 263.30s–263.30s (×1), actor 5, squad 0 (trace 20892): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 262.55s, trace 20882. Next observer evidence: None.
<a id="trace-20896"></a>
- 263.40s–263.40s (×1), actor 1, squad 0 (trace 20896): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 260.00s, trace 20777. Next observer evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500978261307031, 'next_transition': 20964}.
<a id="trace-20964"></a>
- 264.30s–264.30s (×1), actor 5, squad 0 (trace 20964): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 262.55s, trace 20882. Next observer evidence: {'until': 264.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200057547357079, 'next_transition': 1808}.
<a id="trace-1808"></a>
- 264.75s–264.75s (×1), actor 5, squad 0 (events line 1808): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.856785924587747, 'next_transition': 21041}.
<a id="trace-20973"></a>
- 264.75s–264.75s (×1), actor 5, squad 0 (trace 20973): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.248746 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 264.75s, trace 20973. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.856785924587747, 'next_transition': 21041}.
<a id="trace-20974"></a>
- 264.75s–264.75s (×1), actor 5, squad 0 (trace 20974): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.248746 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 264.75s, trace 20974. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.856785924587747, 'next_transition': 21041}.
<a id="trace-21041"></a>
<a id="trace-21055"></a>
- 265.30s–266.30s (×2), actor 5, squad 0 (trace 21041): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 20981. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8060066030968045, 'next_transition': 21055}.
<a id="trace-21060"></a>
- 266.40s–266.40s (×1), actor 1, squad 0 (trace 21060): Withdraw to received rally. Knowledge: actor memory at 265.00s, trace 20979. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5960203226181644, 'next_transition': 21123}.
<a id="trace-21061"></a>
- 266.40s–266.40s (×1), actor 1, squad 0 (trace 21061): rearward bound: one stationary suppressing element. Knowledge: actor memory at 265.00s, trace 20979. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5960203226181644, 'next_transition': 21123}.
<a id="trace-21123"></a>
<a id="trace-21135"></a>
<a id="trace-21153"></a>
<a id="trace-21220"></a>
<a id="trace-21234"></a>
<a id="trace-21244"></a>
<a id="trace-21256"></a>
<a id="trace-21265"></a>
<a id="trace-21334"></a>
<a id="trace-21348"></a>
<a id="trace-21361"></a>
<a id="trace-21369"></a>
- 267.30s–278.30s (×12), actor 5, squad 0 (trace 21123): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 20981. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.805344123499161, 'next_transition': 21135}.
<a id="trace-21379"></a>
- 278.65s–278.65s (×1), actor 1, squad 0 (trace 21379): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 275.00s, trace 21275. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4535814443098638, 'next_transition': 21436}.
<a id="trace-21380"></a>
- 278.65s–278.65s (×1), actor 1, squad 0 (trace 21380): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 275.00s, trace 21275. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4535814443098638, 'next_transition': 21436}.
<a id="trace-21436"></a>
<a id="trace-21512"></a>
<a id="trace-21533"></a>
<a id="trace-21554"></a>
<a id="trace-21562"></a>
<a id="trace-21572"></a>
<a id="trace-21641"></a>
<a id="trace-21652"></a>
<a id="trace-21665"></a>
<a id="trace-21683"></a>
<a id="trace-21701"></a>
<a id="trace-21766"></a>
- 279.30s–290.30s (×12), actor 5, squad 0 (trace 21436): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 21277. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2098961494363913, 'next_transition': 21512}.
<a id="trace-21774"></a>
- 290.65s–290.65s (×1), actor 1, squad 0 (trace 21774): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 290.00s, trace 21707. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360167108500965, 'next_transition': 21833}.
<a id="trace-21775"></a>
- 290.65s–290.65s (×1), actor 1, squad 0 (trace 21775): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 290.00s, trace 21707. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360167108500965, 'next_transition': 21833}.
<a id="trace-21833"></a>
<a id="trace-21851"></a>
<a id="trace-21868"></a>
<a id="trace-21879"></a>
<a id="trace-21960"></a>
- 291.30s–295.30s (×5), actor 5, squad 0 (trace 21833): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 21709. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5587139376993078, 'next_transition': 21851}.
<a id="trace-21969"></a>
- 296.05s–296.05s (×1), actor 1, squad 0 (trace 21969): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 295.00s, trace 21894. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22028}.
<a id="trace-21970"></a>
- 296.05s–296.05s (×1), actor 1, squad 0 (trace 21970): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 295.00s, trace 21894. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22028}.
<a id="trace-22028"></a>
<a id="trace-22046"></a>
<a id="trace-22055"></a>
<a id="trace-22068"></a>
<a id="trace-22139"></a>
<a id="trace-22157"></a>
<a id="trace-22176"></a>
<a id="trace-22188"></a>
<a id="trace-22197"></a>
<a id="trace-22265"></a>
<a id="trace-22275"></a>
<a id="trace-22291"></a>
- 296.30s–307.30s (×12), actor 5, squad 0 (trace 22028): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 21896. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27927492432740403, 'next_transition': 22046}.
<a id="trace-22303"></a>
- 308.05s–308.05s (×1), actor 1, squad 0 (trace 22303): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 305.00s, trace 22206. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22361}.
<a id="trace-22304"></a>
- 308.05s–308.05s (×1), actor 1, squad 0 (trace 22304): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 305.00s, trace 22206. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22361}.
<a id="trace-22361"></a>
<a id="trace-22388"></a>
- 308.30s–309.30s (×2), actor 5, squad 0 (trace 22361): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 22208. Next observer evidence: {'until': 309.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22683562026767556, 'next_transition': 22388}.
<a id="trace-22453"></a>
- 310.25s–310.25s (×1), actor 1, squad 0 (trace 22453): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 310.00s, trace 22393. Next observer evidence: None.
<a id="trace-22454"></a>
- 310.25s–310.25s (×1), actor 1, squad 0 (trace 22454): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 310.00s, trace 22393. Next observer evidence: None.
<a id="trace-22509"></a>
<a id="trace-22528"></a>
<a id="trace-22541"></a>
- 310.30s–312.30s (×3), actor 5, squad 0 (trace 22509): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 22395. Next observer evidence: {'until': 311.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41597641793469226, 'next_transition': 22528}.
<a id="trace-22551"></a>
- 312.85s–312.85s (×1), actor 1, squad 0 (trace 22551): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 310.00s, trace 22393. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6088633919818599, 'next_transition': 22561}.
<a id="trace-22561"></a>
<a id="trace-22580"></a>
<a id="trace-22660"></a>
<a id="trace-22677"></a>
<a id="trace-22685"></a>
<a id="trace-22693"></a>
<a id="trace-22698"></a>
<a id="trace-22763"></a>
<a id="trace-22776"></a>
<a id="trace-22789"></a>
<a id="trace-22797"></a>
<a id="trace-22803"></a>
<a id="trace-22865"></a>
- 313.30s–325.30s (×13), actor 5, squad 0 (trace 22561): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 22395. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5247943894093745, 'next_transition': 22580}.
<a id="trace-1999"></a>
- 325.95s–325.95s (×1), actor 5, squad 0 (events line 1999): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22871"></a>
- 325.95s–325.95s (×1), actor 5, squad 0 (trace 22871): renew committed intent (75 s lifetime). Knowledge: actor memory at 325.95s, trace 22871. Next observer evidence: {'until': 326.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22876}.
<a id="trace-22876"></a>
<a id="trace-22884"></a>
<a id="trace-22901"></a>
<a id="trace-22908"></a>
<a id="trace-22973"></a>
<a id="trace-22982"></a>
<a id="trace-22986"></a>
<a id="trace-22996"></a>
<a id="trace-23007"></a>
<a id="trace-23075"></a>
<a id="trace-23084"></a>
<a id="trace-23093"></a>
<a id="trace-23099"></a>
<a id="trace-23105"></a>
<a id="trace-23170"></a>
<a id="trace-23181"></a>
<a id="trace-23193"></a>
<a id="trace-23202"></a>
<a id="trace-23210"></a>
<a id="trace-23272"></a>
<a id="trace-23280"></a>
<a id="trace-23288"></a>
- 326.30s–347.30s (×22), actor 5, squad 0 (trace 22876): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.95s, trace 22871. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22884}.
<a id="trace-2043"></a>
- 347.80s–347.80s (×1), actor 5, squad 0 (events line 2043): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23295"></a>
- 347.80s–347.80s (×1), actor 5, squad 0 (trace 23295): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.602489 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 347.80s, trace 23295. Next observer evidence: {'until': 348.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23306}.
<a id="trace-23296"></a>
- 347.80s–347.80s (×1), actor 5, squad 0 (trace 23296): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.602489 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 347.80s, trace 23296. Next observer evidence: {'until': 348.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23306}.
<a id="trace-23306"></a>
- 348.30s–348.30s (×1), actor 5, squad 0 (trace 23306): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 347.80s, trace 23296. Next observer evidence: {'until': 349, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2051}.
<a id="trace-2051"></a>
- 349.05s–349.05s (×1), actor 5, squad 0 (events line 2051): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23313"></a>
- 349.05s–349.05s (×1), actor 5, squad 0 (trace 23313): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 349.05s, trace 23313. Next observer evidence: {'until': 349.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23317}.
<a id="trace-23314"></a>
- 349.05s–349.05s (×1), actor 5, squad 0 (trace 23314): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 349.05s, trace 23314. Next observer evidence: {'until': 349.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23317}.
<a id="trace-23317"></a>
- 349.30s–349.30s (×1), actor 5, squad 0 (trace 23317): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 349.05s, trace 23314. Next observer evidence: {'until': 350, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23335}.
<a id="trace-23335"></a>
- 350.05s–350.05s (×1), actor 1, squad 0 (trace 23335): MoveTactically. Knowledge: actor memory at 350.00s, trace 23326. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23493}.
<a id="trace-23336"></a>
- 350.05s–350.05s (×1), actor 1, squad 0 (trace 23336): traveling. Knowledge: actor memory at 350.00s, trace 23326. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23493}.
<a id="trace-23337"></a>
- 350.05s–350.05s (×1), actor 1, squad 0 (trace 23337): received platoon directive. Knowledge: actor memory at 350.00s, trace 23326. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23493}.
<a id="trace-23493"></a>
- 350.30s–350.30s (×1), actor 5, squad 0 (trace 23493): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 23328. Next observer evidence: {'until': 351, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2626673757522144, 'next_transition': 23504}.
<a id="trace-23504"></a>
- 351.05s–351.05s (×1), actor 1, squad 0 (trace 23504): received platoon directive. Knowledge: actor memory at 350.00s, trace 23326. Next observer evidence: {'until': 351.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2625207983830992, 'next_transition': 23616}.
<a id="trace-23616"></a>
<a id="trace-23634"></a>
<a id="trace-23653"></a>
<a id="trace-23669"></a>
<a id="trace-23745"></a>
<a id="trace-23760"></a>
<a id="trace-23777"></a>
<a id="trace-23787"></a>
<a id="trace-23797"></a>
- 351.30s–359.30s (×9), actor 5, squad 0 (trace 23616): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 23328. Next observer evidence: {'until': 352.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0995484031926117, 'next_transition': 23634}.

## Net delivery

264 matched order/radio deliveries; 103 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.395s; maximum 1.600s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3624: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3632: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3636: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3637: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3638: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3639: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 3860: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 3861: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.05s leader 5, trace 6388: estimate 9.37; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6578: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6582: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6583: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6585: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6586: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6587: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6588: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6589: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6590: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6591: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6592: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6844: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6848: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6849: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6850: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6851: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6852: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6853: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6854: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6855: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6856: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6857: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6858: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 7312: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7316: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7317: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7318: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7319: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7320: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7321: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7322: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7323: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7324: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7325: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7326: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 8030: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8034: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8035: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8036: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8037: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8038: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8039: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8040: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8041: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8042: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8043: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8044: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 8313: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8315: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8317: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8318: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8319: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8320: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8321: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8322: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8323: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8324: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8325: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8326: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8327: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9017: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9018: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9020: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9021: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9022: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9023: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9024: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9025: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9026: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9027: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9028: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9029: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9030: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.15s leader 5, trace 9295: estimate 9.79; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.15s leader 5, trace 9296: estimate 9.79; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9810: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 9811: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9813: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9814: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9815: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9816: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9817: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9818: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9819: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9820: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9821: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9822: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9823: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 10573: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 10574: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 10575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 10576: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 10577: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 10578: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 10579: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 10580: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 10581: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 10582: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 10583: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 10584: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 10585: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 10586: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10854: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 10855: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10857: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10858: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10859: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10860: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10861: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10862: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10863: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10864: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10865: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10866: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 11125: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 11126: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11128: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 11129: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11130: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11131: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11132: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11133: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11134: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11135: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11136: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11540: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 11541: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11543: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 11544: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11545: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11546: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11547: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11548: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11549: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11550: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11680: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 11681: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11683: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 11684: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11685: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11686: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 11687: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 11688: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 11689: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 11690: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 11820: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 11821: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 11822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 11823: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 11824: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 11825: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 11826: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 11827: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 11828: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 11829: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 11830: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 11950: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 11951: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 11952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 11953: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 11954: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 11955: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 11956: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 11957: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 11958: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 11959: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 11960: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12172: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 12173: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 12174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12175: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 12176: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12177: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12178: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 12179: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12180: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12181: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12182: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12304: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 12305: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12307: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 12308: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12309: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12310: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 12311: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12312: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12313: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12314: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 117.65s leader 5, trace 12426: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 117.65s leader 5, trace 12427: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 12524: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 12525: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 12526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 12527: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 12528: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 12529: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 12530: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 12531: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 12532: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 12533: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 12534: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 12674: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 12675: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 12676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 12677: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 12678: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 12679: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 12680: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 12681: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 12682: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 12683: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 12684: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 12796: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 12797: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 12798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 12799: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 12800: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 12801: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 12802: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 12803: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 12804: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 12805: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 12806: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 13102: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 13103: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 13104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 13105: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 13106: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 13107: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 13108: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 13109: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 13110: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 13111: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 13112: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 13242: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 13243: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 13244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 13245: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 13246: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 13247: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 13248: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 13249: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 13250: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 13251: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 13252: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 13382: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 13383: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 13384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 13385: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 13386: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 13387: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 13388: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 13389: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 13390: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 13391: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 13392: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 13578: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 13579: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 13580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 13581: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 13582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 13583: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 13584: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 13585: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 13586: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 13587: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 13588: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 13855: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 13856: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 13857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 13858: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 13859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 13860: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 13861: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 13862: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 13863: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 13864: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 13865: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 14002: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 14003: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 14004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 14005: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 14006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 14007: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 14008: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 14009: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 14010: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 14011: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 14012: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 14185: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 14186: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 14187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 14188: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 14189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 14190: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 14191: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 14192: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 14193: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 14194: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 14195: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 14315: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 14316: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 14317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 14318: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 14319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 14320: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 14321: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 14322: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 14323: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 14324: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 14325: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 14413: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 14414: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 14415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 14416: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 14417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 14418: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 14419: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 14420: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 14421: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 14422: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 14423: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.65s leader 5, trace 14503: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.60s leader 5, trace 14516: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.60s leader 5, trace 14517: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 14519: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 14520: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 14521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 14522: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 14523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 14524: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 14525: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 14526: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 14527: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 14528: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 14529: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 14856: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 14857: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 14858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 14859: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 14860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 14861: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 14862: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 14863: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 14864: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 14865: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 14866: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 14999: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 15000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 15001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 15002: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 15003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 15004: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 15005: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 15006: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 15007: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 15008: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 15009: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 15139: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 15140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 15141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 15142: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 15143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 15144: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 15145: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 15146: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 15147: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 15148: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 15149: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 15273: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 15274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 15275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 15276: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 15277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 15278: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 15279: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 15280: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 15281: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 15282: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 15283: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 202.40s leader 5, trace 15548: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 202.40s leader 5, trace 15549: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 15733: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 15734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 15735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 15736: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 15737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 15738: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 15739: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 15740: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 15741: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 15742: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 15743: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 16014: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 16015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 16016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 16017: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 16018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 16019: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 16020: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 16021: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 16022: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 16023: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 16024: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 16178: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 16179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 16180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 16181: estimate 1.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 16182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 16183: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 16184: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 16185: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 16186: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 16187: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 16188: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.75s leader 5, trace 19451: estimate 6.89; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 19467: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 19468: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 19469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 19470: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 19471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 19472: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 19473: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 19474: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 19475: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 19476: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 19477: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 20011: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 20012: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 20013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 20014: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 20015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20016: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20017: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20018: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20019: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20020: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20021: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 20128: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 20129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 20130: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 20131: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 20132: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20133: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 20134: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20135: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20136: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 20137: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 20247: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 20248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 20249: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 20250: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 20251: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 20252: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 20253: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 20254: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 20255: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 20256: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 20349: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 20350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 20351: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 20352: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 20353: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 20354: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 20355: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 20356: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 20357: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 20358: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 20461: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 20462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 20463: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 20464: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 20465: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20466: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20467: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20468: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20469: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20470: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 20566: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 20567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20568: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 20569: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 20570: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 20571: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 20572: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20573: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20574: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20575: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 20665: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 20666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 20667: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 20668: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 20669: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 20670: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 20671: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 20672: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 20673: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 20674: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 20777: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 20778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 20779: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 20780: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 20781: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 20782: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 20783: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 20784: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 20785: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 20786: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 262.55s leader 5, trace 20882: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 264.75s leader 5, trace 20973: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 264.75s leader 5, trace 20974: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 20979: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 20980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 20981: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 20982: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 20983: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 20984: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 20985: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 20986: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 20987: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 21161: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 21162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 21163: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 21164: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 21165: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 21166: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 21167: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 21168: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 21169: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 21275: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 21276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 21277: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 21278: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 21279: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 21280: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21281: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21282: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21283: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 21451: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 21452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 21453: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 21454: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 21455: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 21456: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 21457: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 21458: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 21459: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 21582: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 21583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 21584: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 21585: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 21586: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 21587: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 21588: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 21589: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 21590: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 21707: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 21708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 21709: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 21710: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 21711: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 21712: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 21713: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 21714: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 21715: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 21894: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 21895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 21896: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 21897: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 21898: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 21899: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 21900: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 21901: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 21902: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 22073: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 22074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 22075: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22076: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22077: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22078: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22079: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 22080: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 22081: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 22206: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 22207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 22208: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22209: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 22210: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22211: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22212: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22213: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22214: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 22393: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 22394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 22395: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 22396: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 22397: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 22398: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22399: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 22400: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 22401: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 22592: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 22593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 22594: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 22595: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 22596: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 22597: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 22598: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 22599: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 22600: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 22702: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 22703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 22704: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 22705: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 22706: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 22707: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 22708: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 22709: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 22710: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 22807: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 22808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 22809: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 22810: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 22811: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 22812: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 22813: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 22814: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 22815: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.95s leader 5, trace 22871: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 22914: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 22915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 22916: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 22917: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 22918: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 22919: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 22920: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 22921: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 22922: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 23016: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 23017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 23018: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23019: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 23020: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23021: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23022: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 23023: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23024: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 23112: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 23113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 23114: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 23115: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 23116: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 23117: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 23118: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 23119: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 23120: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 23214: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 23215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 23216: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 23217: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 23218: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 23219: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 23220: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 23221: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 23222: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 347.80s leader 5, trace 23295: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 347.80s leader 5, trace 23296: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 349.05s leader 5, trace 23313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 349.05s leader 5, trace 23314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 23326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 23327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 23328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 23329: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 23330: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 23331: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 23332: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 23333: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 23334: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 23684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 23685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 23686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 23687: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 23688: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 23689: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 23690: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 23691: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 23692: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 23807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 23808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 23809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 23810: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 23811: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 23812: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 23813: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 23814: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 23815: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Soren killed in action
- 1: Vale killed in action
- 1: Bram incapacitated
- 1: Moss incapacitated
- 1: Holt killed in action
- 1: Ash killed in action
- 1: Reed killed in action

## Outcome attribution

- 117.65s, evidence 1185: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12433}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 117.65s, evidence 12426: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.373481 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12433}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 117.65s, evidence 12427: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.373481 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12433}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.65s, evidence 1389: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 264.75s, evidence 1808: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.856785924587747, 'next_transition': 21041}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 264.75s, evidence 20973: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.248746 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.856785924587747, 'next_transition': 21041}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 264.75s, evidence 20974: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.248746 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.856785924587747, 'next_transition': 21041}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 325.95s, evidence 1999: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
