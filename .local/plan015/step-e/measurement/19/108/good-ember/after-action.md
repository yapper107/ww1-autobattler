# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/19/108/good-ember/battle-108-1789674077835420693`

## Battle summary

**Ember** · 360 s · 479 shots.

### Turning points

- 18.1s, squad 1: contact (events line 226). First recorded contact.
- 25.9s, squad 1: withdrawal ([trace 8138](#trace-8138)). 76.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 26.1s, squad 0: withdrawal ([trace 8532](#trace-8532)). 47.9s, squad 0: took cover and returned fire.
- 46.1s, squad 1: help call ([trace 10617](#trace-10617)). No completion observed before termination.
- 47.5s, squad 0: help call ([trace 10700](#trace-10700)). No completion observed before termination.
- 54.5s, squad 0: withdrawal ([trace 11358](#trace-11358)). 93.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 61.5s, squad 0: help call ([trace 11907](#trace-11907)). No completion observed before termination.
- 85.6s, squad 0: help call ([trace 13500](#trace-13500)). No completion observed before termination.
- 132.1s, squad 0: help call ([trace 18846](#trace-18846)). No completion observed before termination.
- 149.1s, squad 0: withdrawal ([trace 20602](#trace-20602)). No completion observed before termination.
- 5 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 115 shots, 7/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 12 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 316 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 36 shots, 0/4 lost.

### Decisions and attribution

At 25.9s, squad 1 chose broke contact ([trace 8138](#trace-8138)), followed by 1 shots and 1 own casualties; estimate 10.1 against 0 distinct squad-reported contacts; At 164.1s, squad 1 chose took cover and returned fire ([trace 23432](#trace-23432)), followed by 2 shots and 0 own casualties; estimate 10.4 against 0 distinct squad-reported contacts; At 145.8s, squad 0 chose took cover and returned fire ([trace 20422](#trace-20422)), followed by 1 shots and 0 own casualties; estimate 5.5 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1423](#trace-1423)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1807}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 8934](#trace-8934)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44863481387039106, 'next_transition': 9019}.

### Communication

271 matched deliveries (mean 0.57s, max 5.30s); 279 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.05s, squad 1, contact, evidence events line 226: First recorded contact; .
- 25.90s, squad 1, withdrawal, evidence 8138: BreakContact: believed ratio at least two without superiority; 76.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 26.10s, squad 0, withdrawal, evidence 8532: BreakContact: believed ratio at least two without superiority; 47.9s, squad 0: took cover and returned fire.
- 46.10s, squad 1, help call, evidence 10617: NeedSupport; No completion observed before termination.
- 47.45s, squad 0, help call, evidence 10700: NeedSupport; No completion observed before termination.
- 54.55s, squad 0, withdrawal, evidence 11358: BreakContact: believed ratio at least two without superiority; 93.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 61.55s, squad 0, help call, evidence 11907: NeedSupport; No completion observed before termination.
- 85.55s, squad 0, help call, evidence 13500: NeedSupport; No completion observed before termination.
- 132.10s, squad 0, help call, evidence 18846: NeedSupport; No completion observed before termination.
- 149.10s, squad 0, withdrawal, evidence 20602: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 160.00s, squad 1, withdrawal, evidence 22924: BreakContact: believed ratio at least two without superiority; 164.1s, squad 1: took cover and returned fire.
- 163.30s, squad 1, help call, evidence 23405: NeedSupport; No completion observed before termination.
- 168.30s, squad 1, withdrawal, evidence 23872: BreakContact: believed ratio at least two without superiority; 190.1s, squad 1: contact broken or rally reached: Occupy and report strength.
- 170.80s, squad 1, help call, evidence 24259: NeedSupport; No completion observed before termination.
- 230.90s, squad 1, withdrawal, evidence 26591: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.41550042881444, 'next_transition': 1086}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.41550042881444, 'next_transition': 1086}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.41550042881444, 'next_transition': 1086}.
<a id="trace-319"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 319): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.32928238570366, 'next_transition': 156}.
<a id="trace-320"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 320): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.32928238570366, 'next_transition': 156}.
<a id="trace-321"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 321): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.32928238570366, 'next_transition': 156}.
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
<a id="trace-828"></a>
<a id="trace-830"></a>
<a id="trace-859"></a>
<a id="trace-861"></a>
<a id="trace-942"></a>
<a id="trace-944"></a>
<a id="trace-969"></a>
<a id="trace-971"></a>
<a id="trace-998"></a>
<a id="trace-1000"></a>
<a id="trace-1037"></a>
<a id="trace-1039"></a>
<a id="trace-1057"></a>
<a id="trace-1059"></a>
<a id="trace-1088"></a>
<a id="trace-1090"></a>
<a id="trace-1122"></a>
<a id="trace-1124"></a>
<a id="trace-1160"></a>
<a id="trace-1162"></a>
<a id="trace-1181"></a>
<a id="trace-1183"></a>
<a id="trace-1203"></a>
<a id="trace-1205"></a>
<a id="trace-1296"></a>
<a id="trace-1298"></a>
<a id="trace-1316"></a>
<a id="trace-1318"></a>
<a id="trace-1338"></a>
<a id="trace-1340"></a>
<a id="trace-1364"></a>
<a id="trace-1366"></a>
<a id="trace-1398"></a>
<a id="trace-1400"></a>
<a id="trace-1419"></a>
<a id="trace-1421"></a>
<a id="trace-1777"></a>
<a id="trace-1779"></a>
<a id="trace-1803"></a>
<a id="trace-1805"></a>
<a id="trace-2175"></a>
<a id="trace-2177"></a>
<a id="trace-2202"></a>
<a id="trace-2204"></a>
<a id="trace-2296"></a>
<a id="trace-2298"></a>
<a id="trace-2336"></a>
<a id="trace-2338"></a>
<a id="trace-2370"></a>
<a id="trace-2372"></a>
<a id="trace-2407"></a>
<a id="trace-2409"></a>
<a id="trace-2428"></a>
<a id="trace-2430"></a>
<a id="trace-2456"></a>
<a id="trace-2458"></a>
<a id="trace-2882"></a>
<a id="trace-2884"></a>
<a id="trace-3302"></a>
<a id="trace-3304"></a>
<a id="trace-4559"></a>
<a id="trace-4561"></a>
<a id="trace-5050"></a>
<a id="trace-5052"></a>
<a id="trace-5198"></a>
<a id="trace-5200"></a>
<a id="trace-5294"></a>
<a id="trace-5296"></a>
<a id="trace-5788"></a>
<a id="trace-5790"></a>
<a id="trace-6727"></a>
<a id="trace-6729"></a>
<a id="trace-7245"></a>
<a id="trace-7247"></a>
<a id="trace-7707"></a>
<a id="trace-7709"></a>
<a id="trace-7775"></a>
<a id="trace-7777"></a>
<a id="trace-7861"></a>
<a id="trace-7863"></a>
<a id="trace-7937"></a>
<a id="trace-7939"></a>
<a id="trace-7985"></a>
<a id="trace-7987"></a>
<a id="trace-8098"></a>
<a id="trace-8100"></a>
<a id="trace-8125"></a>
<a id="trace-8127"></a>
<a id="trace-8912"></a>
<a id="trace-8914"></a>
<a id="trace-8958"></a>
<a id="trace-8960"></a>
<a id="trace-9023"></a>
<a id="trace-9025"></a>
<a id="trace-9092"></a>
<a id="trace-9094"></a>
<a id="trace-9179"></a>
<a id="trace-9181"></a>
<a id="trace-9268"></a>
<a id="trace-9270"></a>
<a id="trace-9330"></a>
<a id="trace-9332"></a>
<a id="trace-9376"></a>
<a id="trace-9378"></a>
<a id="trace-9475"></a>
<a id="trace-9477"></a>
<a id="trace-9498"></a>
<a id="trace-9500"></a>
<a id="trace-9524"></a>
<a id="trace-9526"></a>
<a id="trace-9542"></a>
<a id="trace-9544"></a>
<a id="trace-9569"></a>
<a id="trace-9571"></a>
<a id="trace-9599"></a>
<a id="trace-9601"></a>
<a id="trace-9624"></a>
<a id="trace-9626"></a>
<a id="trace-9647"></a>
<a id="trace-9649"></a>
<a id="trace-9679"></a>
<a id="trace-9681"></a>
<a id="trace-9700"></a>
<a id="trace-9702"></a>
<a id="trace-9791"></a>
<a id="trace-9793"></a>
<a id="trace-9811"></a>
<a id="trace-9813"></a>
<a id="trace-9838"></a>
<a id="trace-9840"></a>
<a id="trace-9869"></a>
<a id="trace-9871"></a>
<a id="trace-9887"></a>
<a id="trace-9889"></a>
<a id="trace-10015"></a>
<a id="trace-10017"></a>
<a id="trace-10047"></a>
<a id="trace-10049"></a>
<a id="trace-10066"></a>
<a id="trace-10068"></a>
<a id="trace-10088"></a>
<a id="trace-10090"></a>
<a id="trace-10100"></a>
<a id="trace-10102"></a>
<a id="trace-10188"></a>
<a id="trace-10190"></a>
<a id="trace-10204"></a>
<a id="trace-10206"></a>
<a id="trace-10226"></a>
<a id="trace-10228"></a>
<a id="trace-10242"></a>
<a id="trace-10244"></a>
<a id="trace-10262"></a>
<a id="trace-10264"></a>
<a id="trace-10277"></a>
<a id="trace-10279"></a>
<a id="trace-10434"></a>
<a id="trace-10436"></a>
<a id="trace-10451"></a>
<a id="trace-10453"></a>
<a id="trace-10486"></a>
<a id="trace-10488"></a>
<a id="trace-10511"></a>
<a id="trace-10513"></a>
<a id="trace-10595"></a>
<a id="trace-10597"></a>
<a id="trace-10609"></a>
<a id="trace-10611"></a>
<a id="trace-10636"></a>
<a id="trace-10638"></a>
<a id="trace-10652"></a>
<a id="trace-10654"></a>
<a id="trace-10682"></a>
<a id="trace-10684"></a>
<a id="trace-10712"></a>
<a id="trace-10714"></a>
<a id="trace-10903"></a>
<a id="trace-10905"></a>
<a id="trace-10931"></a>
<a id="trace-10933"></a>
<a id="trace-10964"></a>
<a id="trace-10966"></a>
<a id="trace-10983"></a>
<a id="trace-10985"></a>
<a id="trace-11062"></a>
<a id="trace-11064"></a>
<a id="trace-11076"></a>
<a id="trace-11078"></a>
<a id="trace-11111"></a>
<a id="trace-11113"></a>
<a id="trace-11228"></a>
<a id="trace-11230"></a>
<a id="trace-11259"></a>
<a id="trace-11261"></a>
<a id="trace-11279"></a>
<a id="trace-11281"></a>
<a id="trace-11308"></a>
<a id="trace-11310"></a>
<a id="trace-11324"></a>
<a id="trace-11326"></a>
<a id="trace-11350"></a>
<a id="trace-11352"></a>
<a id="trace-11505"></a>
<a id="trace-11507"></a>
<a id="trace-11585"></a>
<a id="trace-11587"></a>
<a id="trace-11601"></a>
<a id="trace-11603"></a>
<a id="trace-11634"></a>
<a id="trace-11636"></a>
<a id="trace-11659"></a>
<a id="trace-11661"></a>
<a id="trace-11683"></a>
<a id="trace-11685"></a>
<a id="trace-11693"></a>
<a id="trace-11695"></a>
<a id="trace-11717"></a>
<a id="trace-11719"></a>
<a id="trace-11726"></a>
<a id="trace-11728"></a>
<a id="trace-11743"></a>
<a id="trace-11745"></a>
<a id="trace-11759"></a>
<a id="trace-11761"></a>
<a id="trace-11847"></a>
<a id="trace-11849"></a>
<a id="trace-11865"></a>
<a id="trace-11867"></a>
<a id="trace-11894"></a>
<a id="trace-11896"></a>
<a id="trace-11919"></a>
<a id="trace-11921"></a>
<a id="trace-11945"></a>
<a id="trace-11947"></a>
<a id="trace-12072"></a>
<a id="trace-12074"></a>
<a id="trace-12091"></a>
<a id="trace-12093"></a>
<a id="trace-12114"></a>
<a id="trace-12116"></a>
<a id="trace-12139"></a>
<a id="trace-12141"></a>
<a id="trace-12162"></a>
<a id="trace-12164"></a>
<a id="trace-12251"></a>
<a id="trace-12253"></a>
<a id="trace-12325"></a>
<a id="trace-12327"></a>
<a id="trace-12367"></a>
<a id="trace-12369"></a>
<a id="trace-12409"></a>
<a id="trace-12411"></a>
<a id="trace-12452"></a>
<a id="trace-12454"></a>
<a id="trace-12501"></a>
<a id="trace-12503"></a>
<a id="trace-12529"></a>
<a id="trace-12531"></a>
<a id="trace-12560"></a>
<a id="trace-12562"></a>
<a id="trace-12591"></a>
<a id="trace-12593"></a>
<a id="trace-12675"></a>
<a id="trace-12677"></a>
<a id="trace-12691"></a>
<a id="trace-12693"></a>
<a id="trace-12712"></a>
<a id="trace-12714"></a>
<a id="trace-12729"></a>
<a id="trace-12731"></a>
<a id="trace-12753"></a>
<a id="trace-12755"></a>
<a id="trace-12772"></a>
<a id="trace-12774"></a>
<a id="trace-12797"></a>
<a id="trace-12799"></a>
<a id="trace-12811"></a>
<a id="trace-12813"></a>
<a id="trace-12829"></a>
<a id="trace-12831"></a>
<a id="trace-12856"></a>
<a id="trace-12858"></a>
<a id="trace-12934"></a>
<a id="trace-12936"></a>
<a id="trace-13006"></a>
<a id="trace-13008"></a>
<a id="trace-13031"></a>
<a id="trace-13033"></a>
<a id="trace-13045"></a>
<a id="trace-13047"></a>
<a id="trace-13080"></a>
<a id="trace-13082"></a>
<a id="trace-13095"></a>
<a id="trace-13097"></a>
<a id="trace-13128"></a>
<a id="trace-13130"></a>
<a id="trace-13147"></a>
<a id="trace-13149"></a>
<a id="trace-13168"></a>
<a id="trace-13170"></a>
<a id="trace-13185"></a>
<a id="trace-13187"></a>
<a id="trace-13265"></a>
<a id="trace-13267"></a>
<a id="trace-13276"></a>
<a id="trace-13278"></a>
<a id="trace-13298"></a>
<a id="trace-13300"></a>
<a id="trace-13313"></a>
<a id="trace-13315"></a>
<a id="trace-13333"></a>
<a id="trace-13335"></a>
<a id="trace-13349"></a>
<a id="trace-13351"></a>
<a id="trace-13366"></a>
<a id="trace-13368"></a>
<a id="trace-13380"></a>
<a id="trace-13382"></a>
<a id="trace-13397"></a>
<a id="trace-13399"></a>
<a id="trace-13412"></a>
<a id="trace-13414"></a>
<a id="trace-13493"></a>
<a id="trace-13495"></a>
<a id="trace-13510"></a>
<a id="trace-13512"></a>
<a id="trace-13533"></a>
<a id="trace-13535"></a>
<a id="trace-13556"></a>
<a id="trace-13558"></a>
<a id="trace-13572"></a>
<a id="trace-13574"></a>
<a id="trace-13599"></a>
<a id="trace-13601"></a>
<a id="trace-13623"></a>
<a id="trace-13625"></a>
<a id="trace-13688"></a>
<a id="trace-13690"></a>
<a id="trace-13719"></a>
<a id="trace-13721"></a>
<a id="trace-13731"></a>
<a id="trace-13733"></a>
<a id="trace-13817"></a>
<a id="trace-13819"></a>
<a id="trace-13832"></a>
<a id="trace-13834"></a>
<a id="trace-13856"></a>
<a id="trace-13858"></a>
<a id="trace-13873"></a>
<a id="trace-13875"></a>
<a id="trace-13894"></a>
<a id="trace-13896"></a>
<a id="trace-13912"></a>
<a id="trace-13914"></a>
<a id="trace-13934"></a>
<a id="trace-13936"></a>
<a id="trace-13954"></a>
<a id="trace-13956"></a>
<a id="trace-13979"></a>
<a id="trace-13981"></a>
<a id="trace-13999"></a>
<a id="trace-14001"></a>
<a id="trace-14075"></a>
<a id="trace-14077"></a>
<a id="trace-14097"></a>
<a id="trace-14099"></a>
<a id="trace-14122"></a>
<a id="trace-14124"></a>
<a id="trace-14137"></a>
<a id="trace-14139"></a>
<a id="trace-14156"></a>
<a id="trace-14158"></a>
<a id="trace-14174"></a>
<a id="trace-14176"></a>
<a id="trace-14195"></a>
<a id="trace-14197"></a>
<a id="trace-14314"></a>
<a id="trace-14316"></a>
<a id="trace-14342"></a>
<a id="trace-14344"></a>
<a id="trace-14364"></a>
<a id="trace-14366"></a>
<a id="trace-14445"></a>
<a id="trace-14447"></a>
<a id="trace-14459"></a>
<a id="trace-14461"></a>
<a id="trace-14596"></a>
<a id="trace-14598"></a>
<a id="trace-14677"></a>
<a id="trace-14679"></a>
<a id="trace-14704"></a>
<a id="trace-14706"></a>
<a id="trace-14728"></a>
<a id="trace-14730"></a>
<a id="trace-14751"></a>
<a id="trace-14753"></a>
<a id="trace-14771"></a>
<a id="trace-14773"></a>
<a id="trace-14796"></a>
<a id="trace-14798"></a>
<a id="trace-14819"></a>
<a id="trace-14821"></a>
<a id="trace-14899"></a>
<a id="trace-14901"></a>
<a id="trace-14920"></a>
<a id="trace-14922"></a>
<a id="trace-14949"></a>
<a id="trace-14951"></a>
<a id="trace-14968"></a>
<a id="trace-14970"></a>
<a id="trace-14994"></a>
<a id="trace-14996"></a>
<a id="trace-15016"></a>
<a id="trace-15018"></a>
<a id="trace-15045"></a>
<a id="trace-15047"></a>
<a id="trace-15060"></a>
<a id="trace-15062"></a>
<a id="trace-15085"></a>
<a id="trace-15087"></a>
<a id="trace-15101"></a>
<a id="trace-15103"></a>
<a id="trace-15179"></a>
<a id="trace-15181"></a>
<a id="trace-15213"></a>
<a id="trace-15215"></a>
<a id="trace-15232"></a>
<a id="trace-15234"></a>
<a id="trace-15316"></a>
<a id="trace-15318"></a>
<a id="trace-15335"></a>
<a id="trace-15337"></a>
<a id="trace-15358"></a>
<a id="trace-15360"></a>
<a id="trace-15382"></a>
<a id="trace-15384"></a>
<a id="trace-15396"></a>
<a id="trace-15398"></a>
<a id="trace-15417"></a>
<a id="trace-15419"></a>
<a id="trace-15433"></a>
<a id="trace-15435"></a>
<a id="trace-15513"></a>
<a id="trace-15515"></a>
<a id="trace-15529"></a>
<a id="trace-15531"></a>
<a id="trace-15546"></a>
<a id="trace-15548"></a>
<a id="trace-15673"></a>
<a id="trace-15675"></a>
<a id="trace-15695"></a>
<a id="trace-15697"></a>
<a id="trace-15714"></a>
<a id="trace-15716"></a>
<a id="trace-15738"></a>
<a id="trace-15740"></a>
<a id="trace-15752"></a>
<a id="trace-15754"></a>
<a id="trace-15774"></a>
<a id="trace-15776"></a>
<a id="trace-15796"></a>
<a id="trace-15798"></a>
<a id="trace-15880"></a>
<a id="trace-15882"></a>
<a id="trace-15990"></a>
<a id="trace-15992"></a>
<a id="trace-16021"></a>
<a id="trace-16023"></a>
<a id="trace-16156"></a>
<a id="trace-16158"></a>
<a id="trace-16190"></a>
<a id="trace-16192"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16348"></a>
<a id="trace-16350"></a>
<a id="trace-16486"></a>
<a id="trace-16488"></a>
<a id="trace-16518"></a>
<a id="trace-16520"></a>
<a id="trace-16562"></a>
<a id="trace-16564"></a>
<a id="trace-16661"></a>
<a id="trace-16663"></a>
<a id="trace-16695"></a>
<a id="trace-16697"></a>
<a id="trace-16725"></a>
<a id="trace-16727"></a>
<a id="trace-16760"></a>
<a id="trace-16762"></a>
<a id="trace-16896"></a>
<a id="trace-16898"></a>
<a id="trace-18589"></a>
<a id="trace-18591"></a>
<a id="trace-18612"></a>
<a id="trace-18614"></a>
<a id="trace-18642"></a>
<a id="trace-18644"></a>
<a id="trace-18668"></a>
<a id="trace-18670"></a>
<a id="trace-18690"></a>
<a id="trace-18692"></a>
<a id="trace-18766"></a>
<a id="trace-18768"></a>
<a id="trace-18780"></a>
<a id="trace-18782"></a>
<a id="trace-18811"></a>
<a id="trace-18813"></a>
<a id="trace-18832"></a>
<a id="trace-18834"></a>
<a id="trace-18867"></a>
<a id="trace-18869"></a>
<a id="trace-18890"></a>
<a id="trace-18892"></a>
<a id="trace-18911"></a>
<a id="trace-18913"></a>
<a id="trace-18929"></a>
<a id="trace-18931"></a>
<a id="trace-18951"></a>
<a id="trace-18953"></a>
<a id="trace-18973"></a>
<a id="trace-18975"></a>
<a id="trace-19050"></a>
<a id="trace-19052"></a>
<a id="trace-19079"></a>
<a id="trace-19081"></a>
<a id="trace-19103"></a>
<a id="trace-19105"></a>
<a id="trace-19124"></a>
<a id="trace-19126"></a>
<a id="trace-19148"></a>
<a id="trace-19150"></a>
<a id="trace-19357"></a>
<a id="trace-19359"></a>
<a id="trace-19378"></a>
<a id="trace-19380"></a>
<a id="trace-19650"></a>
<a id="trace-19652"></a>
<a id="trace-19676"></a>
<a id="trace-19678"></a>
<a id="trace-19807"></a>
<a id="trace-19809"></a>
<a id="trace-20064"></a>
<a id="trace-20066"></a>
<a id="trace-20092"></a>
<a id="trace-20094"></a>
<a id="trace-20119"></a>
<a id="trace-20121"></a>
<a id="trace-20138"></a>
<a id="trace-20140"></a>
<a id="trace-20163"></a>
<a id="trace-20165"></a>
<a id="trace-20232"></a>
<a id="trace-20234"></a>
<a id="trace-20257"></a>
<a id="trace-20259"></a>
<a id="trace-20276"></a>
<a id="trace-20278"></a>
<a id="trace-20301"></a>
<a id="trace-20303"></a>
<a id="trace-20325"></a>
<a id="trace-20327"></a>
<a id="trace-20413"></a>
<a id="trace-20415"></a>
<a id="trace-20452"></a>
<a id="trace-20454"></a>
<a id="trace-20485"></a>
<a id="trace-20487"></a>
<a id="trace-20505"></a>
<a id="trace-20507"></a>
<a id="trace-20528"></a>
<a id="trace-20530"></a>
<a id="trace-20543"></a>
<a id="trace-20545"></a>
<a id="trace-20566"></a>
<a id="trace-20568"></a>
<a id="trace-20586"></a>
<a id="trace-20588"></a>
<a id="trace-20975"></a>
<a id="trace-20977"></a>
<a id="trace-20995"></a>
<a id="trace-20997"></a>
<a id="trace-21084"></a>
<a id="trace-21086"></a>
<a id="trace-21117"></a>
<a id="trace-21119"></a>
<a id="trace-21143"></a>
<a id="trace-21145"></a>
<a id="trace-21474"></a>
<a id="trace-21476"></a>
<a id="trace-21507"></a>
<a id="trace-21509"></a>
<a id="trace-21534"></a>
<a id="trace-21536"></a>
<a id="trace-21890"></a>
<a id="trace-21892"></a>
<a id="trace-21916"></a>
<a id="trace-21918"></a>
<a id="trace-21940"></a>
<a id="trace-21942"></a>
<a id="trace-21974"></a>
<a id="trace-21976"></a>
<a id="trace-22057"></a>
<a id="trace-22059"></a>
<a id="trace-22389"></a>
<a id="trace-22391"></a>
<a id="trace-22415"></a>
<a id="trace-22417"></a>
<a id="trace-22747"></a>
<a id="trace-22749"></a>
<a id="trace-22772"></a>
<a id="trace-22774"></a>
<a id="trace-22796"></a>
<a id="trace-22798"></a>
<a id="trace-22823"></a>
<a id="trace-22825"></a>
<a id="trace-22852"></a>
<a id="trace-22854"></a>
<a id="trace-22880"></a>
<a id="trace-22882"></a>
<a id="trace-22897"></a>
<a id="trace-22899"></a>
<a id="trace-23261"></a>
<a id="trace-23263"></a>
<a id="trace-23284"></a>
<a id="trace-23286"></a>
<a id="trace-23302"></a>
<a id="trace-23304"></a>
<a id="trace-23319"></a>
<a id="trace-23321"></a>
<a id="trace-23351"></a>
<a id="trace-23353"></a>
<a id="trace-23367"></a>
<a id="trace-23369"></a>
<a id="trace-23399"></a>
<a id="trace-23401"></a>
<a id="trace-23420"></a>
<a id="trace-23422"></a>
<a id="trace-23652"></a>
<a id="trace-23654"></a>
<a id="trace-23671"></a>
<a id="trace-23673"></a>
<a id="trace-23746"></a>
<a id="trace-23748"></a>
<a id="trace-23767"></a>
<a id="trace-23769"></a>
<a id="trace-23791"></a>
<a id="trace-23793"></a>
<a id="trace-23804"></a>
<a id="trace-23806"></a>
<a id="trace-23829"></a>
<a id="trace-23831"></a>
<a id="trace-23844"></a>
<a id="trace-23846"></a>
<a id="trace-23867"></a>
<a id="trace-23869"></a>
<a id="trace-24053"></a>
<a id="trace-24055"></a>
<a id="trace-24085"></a>
<a id="trace-24087"></a>
<a id="trace-24121"></a>
<a id="trace-24123"></a>
<a id="trace-24213"></a>
<a id="trace-24215"></a>
<a id="trace-24254"></a>
<a id="trace-24256"></a>
<a id="trace-24288"></a>
<a id="trace-24290"></a>
<a id="trace-24308"></a>
<a id="trace-24310"></a>
<a id="trace-24330"></a>
<a id="trace-24332"></a>
<a id="trace-24345"></a>
<a id="trace-24347"></a>
<a id="trace-24367"></a>
<a id="trace-24369"></a>
<a id="trace-24380"></a>
<a id="trace-24382"></a>
<a id="trace-24403"></a>
<a id="trace-24405"></a>
<a id="trace-24415"></a>
<a id="trace-24417"></a>
<a id="trace-24489"></a>
<a id="trace-24491"></a>
<a id="trace-24503"></a>
<a id="trace-24505"></a>
<a id="trace-24526"></a>
<a id="trace-24528"></a>
<a id="trace-24542"></a>
<a id="trace-24544"></a>
<a id="trace-24557"></a>
<a id="trace-24559"></a>
<a id="trace-24575"></a>
<a id="trace-24577"></a>
<a id="trace-24597"></a>
<a id="trace-24599"></a>
<a id="trace-24609"></a>
<a id="trace-24611"></a>
<a id="trace-24629"></a>
<a id="trace-24631"></a>
<a id="trace-24641"></a>
<a id="trace-24643"></a>
<a id="trace-24720"></a>
<a id="trace-24722"></a>
<a id="trace-24733"></a>
<a id="trace-24735"></a>
<a id="trace-24751"></a>
<a id="trace-24753"></a>
<a id="trace-24763"></a>
<a id="trace-24765"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-24791"></a>
<a id="trace-24793"></a>
<a id="trace-24818"></a>
<a id="trace-24820"></a>
<a id="trace-24831"></a>
<a id="trace-24833"></a>
<a id="trace-24850"></a>
<a id="trace-24852"></a>
<a id="trace-24862"></a>
<a id="trace-24864"></a>
<a id="trace-24931"></a>
<a id="trace-24933"></a>
<a id="trace-24940"></a>
<a id="trace-24942"></a>
<a id="trace-24955"></a>
<a id="trace-24957"></a>
<a id="trace-24968"></a>
<a id="trace-24970"></a>
<a id="trace-24982"></a>
<a id="trace-24984"></a>
<a id="trace-24991"></a>
<a id="trace-24993"></a>
<a id="trace-25006"></a>
<a id="trace-25008"></a>
<a id="trace-25019"></a>
<a id="trace-25021"></a>
<a id="trace-25035"></a>
<a id="trace-25037"></a>
<a id="trace-25047"></a>
<a id="trace-25049"></a>
<a id="trace-25119"></a>
<a id="trace-25121"></a>
<a id="trace-25135"></a>
<a id="trace-25137"></a>
<a id="trace-25152"></a>
<a id="trace-25154"></a>
<a id="trace-25164"></a>
<a id="trace-25166"></a>
<a id="trace-25179"></a>
<a id="trace-25181"></a>
<a id="trace-25190"></a>
<a id="trace-25192"></a>
<a id="trace-25207"></a>
<a id="trace-25209"></a>
<a id="trace-25216"></a>
<a id="trace-25218"></a>
<a id="trace-25231"></a>
<a id="trace-25233"></a>
<a id="trace-25243"></a>
<a id="trace-25245"></a>
<a id="trace-25315"></a>
<a id="trace-25317"></a>
<a id="trace-25332"></a>
<a id="trace-25334"></a>
<a id="trace-25348"></a>
<a id="trace-25350"></a>
<a id="trace-25359"></a>
<a id="trace-25361"></a>
<a id="trace-25376"></a>
<a id="trace-25378"></a>
<a id="trace-25391"></a>
<a id="trace-25393"></a>
<a id="trace-25405"></a>
<a id="trace-25407"></a>
<a id="trace-25413"></a>
<a id="trace-25415"></a>
<a id="trace-25425"></a>
<a id="trace-25427"></a>
<a id="trace-25432"></a>
<a id="trace-25434"></a>
<a id="trace-25498"></a>
<a id="trace-25500"></a>
<a id="trace-25511"></a>
<a id="trace-25513"></a>
<a id="trace-25522"></a>
<a id="trace-25524"></a>
<a id="trace-25534"></a>
<a id="trace-25536"></a>
<a id="trace-25547"></a>
<a id="trace-25549"></a>
<a id="trace-25557"></a>
<a id="trace-25559"></a>
<a id="trace-25569"></a>
<a id="trace-25571"></a>
<a id="trace-25577"></a>
<a id="trace-25579"></a>
<a id="trace-25591"></a>
<a id="trace-25593"></a>
<a id="trace-25597"></a>
<a id="trace-25599"></a>
<a id="trace-25666"></a>
<a id="trace-25668"></a>
<a id="trace-25675"></a>
<a id="trace-25677"></a>
<a id="trace-25686"></a>
<a id="trace-25688"></a>
<a id="trace-25699"></a>
<a id="trace-25701"></a>
<a id="trace-25711"></a>
<a id="trace-25713"></a>
<a id="trace-25727"></a>
<a id="trace-25729"></a>
<a id="trace-25740"></a>
<a id="trace-25742"></a>
<a id="trace-25749"></a>
<a id="trace-25751"></a>
<a id="trace-25763"></a>
<a id="trace-25765"></a>
<a id="trace-25770"></a>
<a id="trace-25772"></a>
<a id="trace-25838"></a>
<a id="trace-25840"></a>
<a id="trace-25847"></a>
<a id="trace-25849"></a>
<a id="trace-25859"></a>
<a id="trace-25861"></a>
<a id="trace-25868"></a>
<a id="trace-25870"></a>
<a id="trace-25883"></a>
<a id="trace-25885"></a>
<a id="trace-25896"></a>
<a id="trace-25898"></a>
<a id="trace-25911"></a>
<a id="trace-25913"></a>
<a id="trace-25920"></a>
<a id="trace-25922"></a>
<a id="trace-25934"></a>
<a id="trace-25936"></a>
<a id="trace-25941"></a>
<a id="trace-25943"></a>
<a id="trace-26011"></a>
<a id="trace-26013"></a>
<a id="trace-26023"></a>
<a id="trace-26025"></a>
<a id="trace-26038"></a>
<a id="trace-26040"></a>
<a id="trace-26049"></a>
<a id="trace-26051"></a>
<a id="trace-26064"></a>
<a id="trace-26066"></a>
<a id="trace-26075"></a>
<a id="trace-26077"></a>
<a id="trace-26089"></a>
<a id="trace-26091"></a>
<a id="trace-26101"></a>
<a id="trace-26103"></a>
<a id="trace-26113"></a>
<a id="trace-26115"></a>
<a id="trace-26125"></a>
<a id="trace-26127"></a>
<a id="trace-26192"></a>
<a id="trace-26194"></a>
<a id="trace-26203"></a>
<a id="trace-26205"></a>
<a id="trace-26217"></a>
<a id="trace-26219"></a>
<a id="trace-26230"></a>
<a id="trace-26232"></a>
<a id="trace-26247"></a>
<a id="trace-26249"></a>
<a id="trace-26259"></a>
<a id="trace-26261"></a>
<a id="trace-26276"></a>
<a id="trace-26278"></a>
<a id="trace-26282"></a>
<a id="trace-26284"></a>
<a id="trace-26295"></a>
<a id="trace-26297"></a>
<a id="trace-26306"></a>
<a id="trace-26308"></a>
<a id="trace-26374"></a>
<a id="trace-26376"></a>
<a id="trace-26391"></a>
<a id="trace-26393"></a>
<a id="trace-26407"></a>
<a id="trace-26409"></a>
<a id="trace-26420"></a>
<a id="trace-26422"></a>
<a id="trace-26435"></a>
<a id="trace-26437"></a>
<a id="trace-26447"></a>
<a id="trace-26449"></a>
<a id="trace-26465"></a>
<a id="trace-26467"></a>
<a id="trace-26476"></a>
<a id="trace-26478"></a>
<a id="trace-26496"></a>
<a id="trace-26498"></a>
<a id="trace-26504"></a>
<a id="trace-26506"></a>
<a id="trace-26573"></a>
<a id="trace-26575"></a>
<a id="trace-26586"></a>
<a id="trace-26588"></a>
<a id="trace-26656"></a>
<a id="trace-26658"></a>
<a id="trace-26670"></a>
<a id="trace-26672"></a>
<a id="trace-26684"></a>
<a id="trace-26686"></a>
<a id="trace-26699"></a>
<a id="trace-26701"></a>
<a id="trace-26720"></a>
<a id="trace-26722"></a>
<a id="trace-26729"></a>
<a id="trace-26731"></a>
<a id="trace-26747"></a>
<a id="trace-26749"></a>
<a id="trace-26757"></a>
<a id="trace-26759"></a>
<a id="trace-26826"></a>
<a id="trace-26828"></a>
<a id="trace-26836"></a>
<a id="trace-26838"></a>
<a id="trace-26849"></a>
<a id="trace-26851"></a>
<a id="trace-26863"></a>
<a id="trace-26865"></a>
<a id="trace-26876"></a>
<a id="trace-26878"></a>
<a id="trace-26887"></a>
<a id="trace-26889"></a>
<a id="trace-26901"></a>
<a id="trace-26903"></a>
<a id="trace-26909"></a>
<a id="trace-26911"></a>
<a id="trace-26926"></a>
<a id="trace-26928"></a>
<a id="trace-26943"></a>
<a id="trace-26945"></a>
<a id="trace-27013"></a>
<a id="trace-27015"></a>
<a id="trace-27027"></a>
<a id="trace-27029"></a>
<a id="trace-27044"></a>
<a id="trace-27046"></a>
<a id="trace-27060"></a>
<a id="trace-27062"></a>
<a id="trace-27079"></a>
<a id="trace-27081"></a>
<a id="trace-27090"></a>
<a id="trace-27092"></a>
<a id="trace-27110"></a>
<a id="trace-27112"></a>
<a id="trace-27119"></a>
<a id="trace-27121"></a>
<a id="trace-27134"></a>
<a id="trace-27136"></a>
<a id="trace-27144"></a>
<a id="trace-27146"></a>
<a id="trace-27211"></a>
<a id="trace-27213"></a>
<a id="trace-27221"></a>
<a id="trace-27223"></a>
<a id="trace-27241"></a>
<a id="trace-27243"></a>
<a id="trace-27252"></a>
<a id="trace-27254"></a>
<a id="trace-27273"></a>
<a id="trace-27275"></a>
<a id="trace-27282"></a>
<a id="trace-27284"></a>
<a id="trace-27297"></a>
<a id="trace-27299"></a>
<a id="trace-27307"></a>
<a id="trace-27309"></a>
<a id="trace-27322"></a>
<a id="trace-27324"></a>
<a id="trace-27334"></a>
<a id="trace-27336"></a>
<a id="trace-27400"></a>
<a id="trace-27402"></a>
<a id="trace-27409"></a>
<a id="trace-27411"></a>
<a id="trace-27426"></a>
<a id="trace-27428"></a>
<a id="trace-27436"></a>
<a id="trace-27438"></a>
<a id="trace-27453"></a>
<a id="trace-27455"></a>
<a id="trace-27466"></a>
<a id="trace-27468"></a>
<a id="trace-27481"></a>
<a id="trace-27483"></a>
<a id="trace-27487"></a>
<a id="trace-27489"></a>
<a id="trace-27501"></a>
<a id="trace-27503"></a>
<a id="trace-27513"></a>
<a id="trace-27515"></a>
<a id="trace-27579"></a>
<a id="trace-27581"></a>
<a id="trace-27590"></a>
<a id="trace-27592"></a>
<a id="trace-27603"></a>
<a id="trace-27605"></a>
<a id="trace-27611"></a>
<a id="trace-27613"></a>
<a id="trace-27625"></a>
<a id="trace-27627"></a>
<a id="trace-27632"></a>
<a id="trace-27634"></a>
<a id="trace-27645"></a>
<a id="trace-27647"></a>
<a id="trace-27650"></a>
<a id="trace-27652"></a>
<a id="trace-27667"></a>
<a id="trace-27669"></a>
<a id="trace-27677"></a>
<a id="trace-27679"></a>
<a id="trace-27744"></a>
<a id="trace-27746"></a>
<a id="trace-27759"></a>
<a id="trace-27761"></a>
<a id="trace-27776"></a>
<a id="trace-27778"></a>
<a id="trace-27790"></a>
<a id="trace-27792"></a>
<a id="trace-27807"></a>
<a id="trace-27809"></a>
<a id="trace-27817"></a>
<a id="trace-27819"></a>
<a id="trace-27833"></a>
<a id="trace-27835"></a>
<a id="trace-27840"></a>
<a id="trace-27842"></a>
<a id="trace-27855"></a>
<a id="trace-27857"></a>
<a id="trace-27864"></a>
<a id="trace-27866"></a>
<a id="trace-27931"></a>
<a id="trace-27933"></a>
<a id="trace-27944"></a>
<a id="trace-27946"></a>
<a id="trace-27961"></a>
<a id="trace-27963"></a>
<a id="trace-27973"></a>
<a id="trace-27975"></a>
<a id="trace-27991"></a>
<a id="trace-27993"></a>
<a id="trace-28005"></a>
<a id="trace-28007"></a>
<a id="trace-28021"></a>
<a id="trace-28023"></a>
<a id="trace-28028"></a>
<a id="trace-28030"></a>
<a id="trace-28047"></a>
<a id="trace-28049"></a>
<a id="trace-28058"></a>
<a id="trace-28060"></a>
<a id="trace-28126"></a>
<a id="trace-28128"></a>
<a id="trace-28136"></a>
<a id="trace-28138"></a>
<a id="trace-28151"></a>
<a id="trace-28153"></a>
<a id="trace-28160"></a>
<a id="trace-28162"></a>
<a id="trace-28178"></a>
<a id="trace-28180"></a>
<a id="trace-28194"></a>
<a id="trace-28196"></a>
<a id="trace-28208"></a>
<a id="trace-28210"></a>
<a id="trace-28219"></a>
<a id="trace-28221"></a>
<a id="trace-28233"></a>
<a id="trace-28235"></a>
<a id="trace-28241"></a>
<a id="trace-28243"></a>
<a id="trace-28309"></a>
<a id="trace-28311"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28331"></a>
<a id="trace-28333"></a>
<a id="trace-28338"></a>
<a id="trace-28340"></a>
<a id="trace-28351"></a>
<a id="trace-28353"></a>
<a id="trace-28359"></a>
<a id="trace-28361"></a>
<a id="trace-28371"></a>
<a id="trace-28373"></a>
<a id="trace-28379"></a>
<a id="trace-28381"></a>
<a id="trace-28396"></a>
<a id="trace-28398"></a>
<a id="trace-28404"></a>
<a id="trace-28406"></a>
<a id="trace-28471"></a>
<a id="trace-28473"></a>
<a id="trace-28479"></a>
<a id="trace-28481"></a>
<a id="trace-28496"></a>
<a id="trace-28498"></a>
<a id="trace-28506"></a>
<a id="trace-28508"></a>
<a id="trace-28521"></a>
<a id="trace-28523"></a>
<a id="trace-28531"></a>
<a id="trace-28533"></a>
<a id="trace-28543"></a>
<a id="trace-28545"></a>
<a id="trace-28549"></a>
<a id="trace-28551"></a>
<a id="trace-28561"></a>
<a id="trace-28563"></a>
<a id="trace-28571"></a>
<a id="trace-28573"></a>
<a id="trace-28635"></a>
<a id="trace-28637"></a>
<a id="trace-28647"></a>
<a id="trace-28649"></a>
<a id="trace-28661"></a>
<a id="trace-28663"></a>
<a id="trace-28672"></a>
<a id="trace-28674"></a>
<a id="trace-28702"></a>
<a id="trace-28704"></a>
<a id="trace-28723"></a>
<a id="trace-28725"></a>
<a id="trace-28733"></a>
<a id="trace-28735"></a>
<a id="trace-28748"></a>
<a id="trace-28750"></a>
<a id="trace-28757"></a>
<a id="trace-28759"></a>
<a id="trace-28824"></a>
<a id="trace-28826"></a>
<a id="trace-28835"></a>
<a id="trace-28837"></a>
<a id="trace-28850"></a>
<a id="trace-28852"></a>
<a id="trace-28862"></a>
<a id="trace-28864"></a>
<a id="trace-28878"></a>
<a id="trace-28880"></a>
<a id="trace-28891"></a>
<a id="trace-28893"></a>
<a id="trace-28907"></a>
<a id="trace-28909"></a>
<a id="trace-28917"></a>
<a id="trace-28919"></a>
<a id="trace-28935"></a>
<a id="trace-28937"></a>
<a id="trace-28949"></a>
<a id="trace-28951"></a>
<a id="trace-29017"></a>
<a id="trace-29019"></a>
<a id="trace-29027"></a>
<a id="trace-29029"></a>
<a id="trace-29042"></a>
<a id="trace-29044"></a>
<a id="trace-29055"></a>
<a id="trace-29057"></a>
<a id="trace-29069"></a>
<a id="trace-29071"></a>
<a id="trace-29083"></a>
<a id="trace-29085"></a>
<a id="trace-29095"></a>
<a id="trace-29097"></a>
<a id="trace-29104"></a>
<a id="trace-29106"></a>
<a id="trace-29123"></a>
<a id="trace-29125"></a>
<a id="trace-29134"></a>
<a id="trace-29136"></a>
<a id="trace-29201"></a>
<a id="trace-29203"></a>
<a id="trace-29211"></a>
<a id="trace-29213"></a>
<a id="trace-29229"></a>
<a id="trace-29231"></a>
<a id="trace-29239"></a>
<a id="trace-29241"></a>
<a id="trace-29253"></a>
<a id="trace-29255"></a>
<a id="trace-29268"></a>
<a id="trace-29270"></a>
<a id="trace-29282"></a>
<a id="trace-29284"></a>
<a id="trace-29293"></a>
<a id="trace-29295"></a>
<a id="trace-29306"></a>
<a id="trace-29308"></a>
<a id="trace-29314"></a>
<a id="trace-29316"></a>
<a id="trace-29382"></a>
<a id="trace-29384"></a>
<a id="trace-29396"></a>
<a id="trace-29398"></a>
<a id="trace-29411"></a>
<a id="trace-29413"></a>
<a id="trace-29424"></a>
<a id="trace-29426"></a>
<a id="trace-29442"></a>
<a id="trace-29444"></a>
<a id="trace-29455"></a>
<a id="trace-29457"></a>
<a id="trace-29470"></a>
<a id="trace-29472"></a>
<a id="trace-29483"></a>
<a id="trace-29485"></a>
<a id="trace-29496"></a>
<a id="trace-29498"></a>
<a id="trace-29504"></a>
<a id="trace-29506"></a>
<a id="trace-29568"></a>
<a id="trace-29570"></a>
<a id="trace-29576"></a>
<a id="trace-29578"></a>
<a id="trace-29587"></a>
<a id="trace-29589"></a>
<a id="trace-29595"></a>
<a id="trace-29597"></a>
<a id="trace-29613"></a>
<a id="trace-29615"></a>
<a id="trace-29623"></a>
<a id="trace-29625"></a>
<a id="trace-29636"></a>
<a id="trace-29638"></a>
<a id="trace-29643"></a>
<a id="trace-29645"></a>
<a id="trace-29659"></a>
<a id="trace-29661"></a>
<a id="trace-29669"></a>
<a id="trace-29671"></a>
<a id="trace-29735"></a>
<a id="trace-29737"></a>
<a id="trace-29750"></a>
<a id="trace-29752"></a>
<a id="trace-29761"></a>
<a id="trace-29763"></a>
<a id="trace-29771"></a>
<a id="trace-29773"></a>
<a id="trace-29787"></a>
<a id="trace-29789"></a>
<a id="trace-29800"></a>
<a id="trace-29802"></a>
<a id="trace-29816"></a>
<a id="trace-29818"></a>
<a id="trace-29826"></a>
<a id="trace-29828"></a>
<a id="trace-29841"></a>
<a id="trace-29843"></a>
<a id="trace-29850"></a>
<a id="trace-29852"></a>
<a id="trace-29917"></a>
<a id="trace-29919"></a>
<a id="trace-29933"></a>
<a id="trace-29935"></a>
<a id="trace-29949"></a>
<a id="trace-29951"></a>
<a id="trace-29964"></a>
<a id="trace-29966"></a>
<a id="trace-29983"></a>
<a id="trace-29985"></a>
<a id="trace-29994"></a>
<a id="trace-29996"></a>
<a id="trace-30008"></a>
<a id="trace-30010"></a>
<a id="trace-30015"></a>
<a id="trace-30017"></a>
<a id="trace-30028"></a>
<a id="trace-30030"></a>
<a id="trace-30034"></a>
<a id="trace-30036"></a>
<a id="trace-30102"></a>
<a id="trace-30104"></a>
<a id="trace-30111"></a>
<a id="trace-30113"></a>
<a id="trace-30123"></a>
<a id="trace-30125"></a>
<a id="trace-30134"></a>
<a id="trace-30136"></a>
<a id="trace-30150"></a>
<a id="trace-30152"></a>
<a id="trace-30163"></a>
<a id="trace-30165"></a>
<a id="trace-30175"></a>
<a id="trace-30177"></a>
<a id="trace-30181"></a>
<a id="trace-30183"></a>
<a id="trace-30197"></a>
<a id="trace-30199"></a>
<a id="trace-30203"></a>
<a id="trace-30205"></a>
<a id="trace-30269"></a>
<a id="trace-30271"></a>
<a id="trace-30277"></a>
<a id="trace-30279"></a>
<a id="trace-30289"></a>
<a id="trace-30291"></a>
<a id="trace-30298"></a>
<a id="trace-30300"></a>
<a id="trace-30314"></a>
<a id="trace-30316"></a>
<a id="trace-30325"></a>
<a id="trace-30327"></a>
<a id="trace-30337"></a>
<a id="trace-30339"></a>
<a id="trace-30347"></a>
<a id="trace-30349"></a>
<a id="trace-30362"></a>
<a id="trace-30364"></a>
<a id="trace-30370"></a>
<a id="trace-30372"></a>
<a id="trace-30437"></a>
<a id="trace-30439"></a>
<a id="trace-30451"></a>
<a id="trace-30453"></a>
<a id="trace-30468"></a>
<a id="trace-30470"></a>
<a id="trace-30479"></a>
<a id="trace-30481"></a>
<a id="trace-30494"></a>
<a id="trace-30496"></a>
<a id="trace-30504"></a>
<a id="trace-30506"></a>
<a id="trace-30518"></a>
<a id="trace-30520"></a>
<a id="trace-30532"></a>
<a id="trace-30534"></a>
<a id="trace-30545"></a>
<a id="trace-30547"></a>
<a id="trace-30559"></a>
<a id="trace-30561"></a>
<a id="trace-30629"></a>
<a id="trace-30631"></a>
<a id="trace-30639"></a>
<a id="trace-30641"></a>
<a id="trace-30654"></a>
<a id="trace-30656"></a>
<a id="trace-30667"></a>
<a id="trace-30669"></a>
<a id="trace-30683"></a>
<a id="trace-30685"></a>
<a id="trace-30691"></a>
<a id="trace-30693"></a>
<a id="trace-30705"></a>
<a id="trace-30707"></a>
<a id="trace-30712"></a>
<a id="trace-30714"></a>
<a id="trace-30722"></a>
<a id="trace-30724"></a>
<a id="trace-30731"></a>
<a id="trace-30733"></a>
<a id="trace-30801"></a>
<a id="trace-30803"></a>
<a id="trace-30811"></a>
<a id="trace-30813"></a>
<a id="trace-30824"></a>
<a id="trace-30826"></a>
<a id="trace-30832"></a>
<a id="trace-30834"></a>
<a id="trace-30848"></a>
<a id="trace-30850"></a>
<a id="trace-30858"></a>
<a id="trace-30860"></a>
<a id="trace-30871"></a>
<a id="trace-30873"></a>
<a id="trace-30879"></a>
<a id="trace-30881"></a>
<a id="trace-30890"></a>
<a id="trace-30892"></a>
<a id="trace-30898"></a>
<a id="trace-30900"></a>
<a id="trace-30967"></a>
<a id="trace-30969"></a>
<a id="trace-30976"></a>
<a id="trace-30978"></a>
<a id="trace-30987"></a>
<a id="trace-30989"></a>
<a id="trace-31001"></a>
<a id="trace-31003"></a>
<a id="trace-31015"></a>
<a id="trace-31017"></a>
<a id="trace-31026"></a>
<a id="trace-31028"></a>
<a id="trace-31041"></a>
<a id="trace-31043"></a>
<a id="trace-31050"></a>
<a id="trace-31052"></a>
<a id="trace-31064"></a>
<a id="trace-31066"></a>
<a id="trace-31071"></a>
<a id="trace-31073"></a>
<a id="trace-31141"></a>
<a id="trace-31143"></a>
<a id="trace-31150"></a>
<a id="trace-31152"></a>
<a id="trace-31166"></a>
<a id="trace-31168"></a>
<a id="trace-31181"></a>
<a id="trace-31183"></a>
<a id="trace-31199"></a>
<a id="trace-31201"></a>
<a id="trace-31210"></a>
<a id="trace-31212"></a>
<a id="trace-31225"></a>
<a id="trace-31227"></a>
<a id="trace-31234"></a>
<a id="trace-31236"></a>
<a id="trace-31248"></a>
<a id="trace-31250"></a>
<a id="trace-31257"></a>
<a id="trace-31259"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3989038537848636, 'next_transition': 713}.
<a id="trace-1086"></a>
<a id="trace-1120"></a>
<a id="trace-1156"></a>
<a id="trace-1158"></a>
<a id="trace-1177"></a>
<a id="trace-1179"></a>
<a id="trace-1199"></a>
<a id="trace-1201"></a>
<a id="trace-1292"></a>
<a id="trace-1294"></a>
<a id="trace-1312"></a>
<a id="trace-1314"></a>
<a id="trace-1334"></a>
<a id="trace-1336"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 1086): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 874. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5096417517700731, 'next_transition': 1120}.
<a id="trace-156"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 156): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1807}.
<a id="trace-1423"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1423): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1423. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1807}.
<a id="trace-1424"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1424): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1424. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1807}.
<a id="trace-1425"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1425): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1213. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250579557341044, 'next_transition': 1773}.
<a id="trace-1426"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1426): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1213. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250579557341044, 'next_transition': 1773}.
<a id="trace-1773"></a>
<a id="trace-1775"></a>
<a id="trace-2171"></a>
<a id="trace-2173"></a>
<a id="trace-2198"></a>
<a id="trace-2200"></a>
<a id="trace-2292"></a>
<a id="trace-2294"></a>
<a id="trace-2332"></a>
<a id="trace-2334"></a>
<a id="trace-2366"></a>
<a id="trace-2368"></a>
<a id="trace-2403"></a>
<a id="trace-2405"></a>
<a id="trace-2424"></a>
<a id="trace-2426"></a>
<a id="trace-2452"></a>
<a id="trace-2454"></a>
<a id="trace-3298"></a>
<a id="trace-3300"></a>
- 13.20s–18.75s (×20), actor 5, squad 0 (trace 1773): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1424. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.319049285578398, 'next_transition': 2171}.
<a id="trace-1807"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1807): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1221. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.501272346715826, 'next_transition': 2480}.
<a id="trace-1808"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1808): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1221. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.501272346715826, 'next_transition': 2480}.
<a id="trace-2480"></a>
- 18.10s–18.10s (×1), actor 8, squad 1 (trace 2480): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2223. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299840714817593, 'next_transition': 2895}.
<a id="trace-2481"></a>
- 18.10s–18.10s (×1), actor 8, squad 1 (trace 2481): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2223. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299840714817593, 'next_transition': 2895}.
<a id="trace-2482"></a>
<a id="trace-2895"></a>
<a id="trace-3731"></a>
<a id="trace-5806"></a>
<a id="trace-6799"></a>
- 18.10s–22.20s (×5), actor 8, squad 1 (trace 2482): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2223. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299840714817593, 'next_transition': 2895}.
<a id="trace-3305"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 3305): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2215. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725307620589988, 'next_transition': 4125}.
<a id="trace-3306"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 3306): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2215. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725307620589988, 'next_transition': 4125}.
<a id="trace-3307"></a>
<a id="trace-4125"></a>
- 18.75s–19.00s (×2), actor 0, squad 0 (trace 3307): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2215. Next observer evidence: {'until': 19, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725307620589988, 'next_transition': 4125}.
<a id="trace-4555"></a>
<a id="trace-4557"></a>
- 19.25s–19.25s (×2), actor 5, squad 0 (trace 4555): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2220. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24205075475562698, 'next_transition': 4589}.
<a id="trace-4589"></a>
- 19.50s–19.50s (×1), actor 0, squad 0 (trace 4589): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2215. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2867969308671038, 'next_transition': 5046}.
<a id="trace-5046"></a>
<a id="trace-5048"></a>
<a id="trace-5194"></a>
<a id="trace-5196"></a>
<a id="trace-5290"></a>
<a id="trace-5292"></a>
- 19.75s–20.75s (×6), actor 5, squad 0 (trace 5046): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2220. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7883071594609593, 'next_transition': 5194}.
<a id="trace-5323"></a>
<a id="trace-6260"></a>
- 21.00s–21.50s (×2), actor 0, squad 0 (trace 5323): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5073. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.787509075240469, 'next_transition': 6260}.
<a id="trace-6723"></a>
<a id="trace-6725"></a>
- 21.75s–21.75s (×2), actor 5, squad 0 (trace 6723): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5078. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9687611266895543, 'next_transition': 7248}.
<a id="trace-7248"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 7248): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5073. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9643003821388735, 'next_transition': 7771}.
<a id="trace-7771"></a>
<a id="trace-7773"></a>
<a id="trace-7933"></a>
<a id="trace-7935"></a>
<a id="trace-7981"></a>
<a id="trace-7983"></a>
<a id="trace-8094"></a>
<a id="trace-8096"></a>
<a id="trace-8121"></a>
<a id="trace-8123"></a>
- 23.25s–25.75s (×10), actor 5, squad 0 (trace 7771): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5078. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.033124086148203, 'next_transition': 7933}.
<a id="trace-8135"></a>
- 25.85s–25.85s (×1), actor 0, squad 0 (trace 8135): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 8006. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1481947503853445, 'next_transition': 8532}.
<a id="trace-8138"></a>
- 25.90s–25.90s (×1), actor 8, squad 1 (trace 8138): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 8014. Next observer evidence: {'until': 37.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 7.981966589978152, 'next_transition': 9905}.
<a id="trace-8139"></a>
- 25.90s–25.90s (×1), actor 8, squad 1 (trace 8139): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 8014. Next observer evidence: {'until': 37.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 7.981966589978152, 'next_transition': 9905}.
<a id="trace-8532"></a>
- 26.10s–26.10s (×1), actor 0, squad 0 (trace 8532): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 8006. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149997377347957, 'next_transition': 566}.
<a id="trace-8533"></a>
- 26.10s–26.10s (×1), actor 0, squad 0 (trace 8533): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 8006. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149997377347957, 'next_transition': 566}.
<a id="trace-566"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 566): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8934"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 8934): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 8934. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44863481387039106, 'next_transition': 9019}.
<a id="trace-8935"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 8935): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 8935. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44863481387039106, 'next_transition': 9019}.
<a id="trace-9019"></a>
<a id="trace-9021"></a>
<a id="trace-9175"></a>
<a id="trace-9177"></a>
<a id="trace-9372"></a>
<a id="trace-9374"></a>
<a id="trace-9471"></a>
<a id="trace-9473"></a>
<a id="trace-9494"></a>
<a id="trace-9496"></a>
<a id="trace-9538"></a>
<a id="trace-9540"></a>
<a id="trace-9565"></a>
<a id="trace-9567"></a>
<a id="trace-9620"></a>
<a id="trace-9622"></a>
<a id="trace-9643"></a>
<a id="trace-9645"></a>
<a id="trace-9675"></a>
<a id="trace-9677"></a>
<a id="trace-9696"></a>
<a id="trace-9698"></a>
<a id="trace-9787"></a>
<a id="trace-9789"></a>
<a id="trace-9807"></a>
<a id="trace-9809"></a>
<a id="trace-9865"></a>
<a id="trace-9867"></a>
<a id="trace-9883"></a>
<a id="trace-9885"></a>
<a id="trace-10045"></a>
<a id="trace-10064"></a>
<a id="trace-10098"></a>
<a id="trace-10186"></a>
<a id="trace-10202"></a>
<a id="trace-10224"></a>
<a id="trace-10238"></a>
<a id="trace-10240"></a>
<a id="trace-10258"></a>
<a id="trace-10260"></a>
<a id="trace-10273"></a>
<a id="trace-10275"></a>
- 27.25s–42.75s (×42), actor 5, squad 0 (trace 9019): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 8935. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8165821397144724, 'next_transition': 9175}.
<a id="trace-9905"></a>
- 37.70s–37.70s (×1), actor 9, squad 1 (trace 9905): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 9718. Next observer evidence: {'until': 46, 'shots': 4, 'casualties': 0, 'mean_displacement': 10.372845658605828, 'next_transition': 10617}.
<a id="trace-9906"></a>
- 37.70s–37.70s (×1), actor 9, squad 1 (trace 9906): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 9718. Next observer evidence: {'until': 46, 'shots': 4, 'casualties': 0, 'mean_displacement': 10.372845658605828, 'next_transition': 10617}.
<a id="trace-10282"></a>
- 42.90s–42.90s (×1), actor 1, squad 0 (trace 10282): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 10106. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42552032731832157, 'next_transition': 10432}.
<a id="trace-10304"></a>
- 42.90s–42.90s (×1), actor 1, squad 0 (trace 10304): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 10106. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42552032731832157, 'next_transition': 10432}.
<a id="trace-10432"></a>
<a id="trace-10449"></a>
<a id="trace-10605"></a>
<a id="trace-10607"></a>
<a id="trace-10632"></a>
<a id="trace-10634"></a>
<a id="trace-10648"></a>
<a id="trace-10650"></a>
<a id="trace-10678"></a>
<a id="trace-10680"></a>
- 43.25s–47.25s (×10), actor 5, squad 0 (trace 10432): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10110. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3625679722079635, 'next_transition': 10449}.
<a id="trace-10617"></a>
- 46.10s–46.10s (×1), actor 9, squad 1 (trace 10617): NeedSupport. Knowledge: actor memory at 45.00s, trace 10522. Next observer evidence: {'until': 51.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.882382178273265, 'next_transition': 11120}.
<a id="trace-10699"></a>
- 47.45s–47.45s (×1), actor 1, squad 0 (trace 10699): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 45.00s, trace 10516. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36667635209251537, 'next_transition': 10708}.
<a id="trace-10700"></a>
- 47.45s–47.45s (×1), actor 1, squad 0 (trace 10700): NeedSupport. Knowledge: actor memory at 45.00s, trace 10516. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36667635209251537, 'next_transition': 10708}.
<a id="trace-10708"></a>
<a id="trace-10710"></a>
- 47.75s–47.75s (×2), actor 5, squad 0 (trace 10708): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10520. Next observer evidence: {'until': 47.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36766305404899136, 'next_transition': 10719}.
<a id="trace-10719"></a>
- 47.85s–47.85s (×1), actor 1, squad 0 (trace 10719): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 10516. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4809298071712649, 'next_transition': 10927}.
<a id="trace-10724"></a>
- 47.85s–47.85s (×1), actor 1, squad 0 (trace 10724): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 10516. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4809298071712649, 'next_transition': 10927}.
<a id="trace-10725"></a>
- 47.85s–47.85s (×1), actor 1, squad 0 (trace 10725): Reorganise complete: known contact. Knowledge: actor memory at 45.00s, trace 10516. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4809298071712649, 'next_transition': 10927}.
<a id="trace-10927"></a>
<a id="trace-10929"></a>
<a id="trace-10960"></a>
<a id="trace-10962"></a>
<a id="trace-10979"></a>
<a id="trace-10981"></a>
<a id="trace-11058"></a>
<a id="trace-11060"></a>
<a id="trace-11072"></a>
<a id="trace-11074"></a>
<a id="trace-11107"></a>
<a id="trace-11109"></a>
<a id="trace-11255"></a>
<a id="trace-11257"></a>
<a id="trace-11275"></a>
<a id="trace-11277"></a>
<a id="trace-11304"></a>
<a id="trace-11306"></a>
<a id="trace-11320"></a>
<a id="trace-11322"></a>
<a id="trace-11346"></a>
<a id="trace-11348"></a>
- 48.75s–54.25s (×22), actor 5, squad 0 (trace 10927): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10520. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2083176525189596, 'next_transition': 10960}.
<a id="trace-11120"></a>
- 51.50s–51.50s (×1), actor 9, squad 1 (trace 11120): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 10996. Next observer evidence: {'until': 62.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 10.262497680923483, 'next_transition': 11951}.
<a id="trace-11167"></a>
- 51.50s–51.50s (×1), actor 9, squad 1 (trace 11167): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 10996. Next observer evidence: {'until': 62.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 10.262497680923483, 'next_transition': 11951}.
<a id="trace-11358"></a>
- 54.55s–54.55s (×1), actor 2, squad 0 (trace 11358): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 10991. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25202652952873505, 'next_transition': 11501}.
<a id="trace-11359"></a>
- 54.55s–54.55s (×1), actor 2, squad 0 (trace 11359): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 10991. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25202652952873505, 'next_transition': 11501}.
<a id="trace-11501"></a>
<a id="trace-11503"></a>
<a id="trace-11597"></a>
<a id="trace-11599"></a>
<a id="trace-11630"></a>
<a id="trace-11632"></a>
<a id="trace-11655"></a>
<a id="trace-11657"></a>
<a id="trace-11681"></a>
<a id="trace-11691"></a>
<a id="trace-11715"></a>
<a id="trace-11724"></a>
<a id="trace-11741"></a>
<a id="trace-11757"></a>
<a id="trace-11845"></a>
<a id="trace-11861"></a>
<a id="trace-11863"></a>
<a id="trace-11890"></a>
<a id="trace-11892"></a>
- 54.75s–61.25s (×19), actor 5, squad 0 (trace 11501): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 10994. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2182392405641091, 'next_transition': 11597}.
<a id="trace-11907"></a>
- 61.55s–61.55s (×1), actor 2, squad 0 (trace 11907): NeedSupport. Knowledge: actor memory at 60.00s, trace 11768. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199607203665747, 'next_transition': 11915}.
<a id="trace-11915"></a>
<a id="trace-11917"></a>
<a id="trace-11941"></a>
<a id="trace-11943"></a>
<a id="trace-12068"></a>
<a id="trace-12070"></a>
<a id="trace-12087"></a>
<a id="trace-12089"></a>
<a id="trace-12110"></a>
<a id="trace-12112"></a>
<a id="trace-12135"></a>
<a id="trace-12137"></a>
<a id="trace-12158"></a>
<a id="trace-12160"></a>
<a id="trace-12247"></a>
<a id="trace-12249"></a>
<a id="trace-12278"></a>
<a id="trace-12280"></a>
<a id="trace-12405"></a>
<a id="trace-12407"></a>
<a id="trace-12448"></a>
<a id="trace-12450"></a>
<a id="trace-12556"></a>
<a id="trace-12558"></a>
<a id="trace-12587"></a>
<a id="trace-12589"></a>
<a id="trace-12671"></a>
<a id="trace-12673"></a>
<a id="trace-12687"></a>
<a id="trace-12689"></a>
<a id="trace-12708"></a>
<a id="trace-12710"></a>
<a id="trace-12749"></a>
<a id="trace-12751"></a>
<a id="trace-12793"></a>
<a id="trace-12795"></a>
<a id="trace-12807"></a>
<a id="trace-12809"></a>
<a id="trace-12825"></a>
<a id="trace-12827"></a>
<a id="trace-12852"></a>
<a id="trace-12854"></a>
<a id="trace-12930"></a>
<a id="trace-12932"></a>
<a id="trace-13002"></a>
<a id="trace-13004"></a>
<a id="trace-13029"></a>
<a id="trace-13043"></a>
<a id="trace-13078"></a>
<a id="trace-13093"></a>
<a id="trace-13143"></a>
<a id="trace-13145"></a>
<a id="trace-13261"></a>
<a id="trace-13263"></a>
<a id="trace-13294"></a>
<a id="trace-13296"></a>
<a id="trace-13329"></a>
<a id="trace-13331"></a>
<a id="trace-13345"></a>
<a id="trace-13347"></a>
<a id="trace-13362"></a>
<a id="trace-13364"></a>
<a id="trace-13376"></a>
<a id="trace-13378"></a>
<a id="trace-13393"></a>
<a id="trace-13395"></a>
<a id="trace-13408"></a>
<a id="trace-13410"></a>
<a id="trace-13489"></a>
<a id="trace-13491"></a>
- 61.75s–85.25s (×70), actor 5, squad 0 (trace 11915): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11771. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725036348826852, 'next_transition': 11941}.
<a id="trace-11951"></a>
- 62.30s–62.30s (×1), actor 9, squad 1 (trace 11951): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 11773. Next observer evidence: {'until': 75.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.018479471435082, 'next_transition': 12940}.
<a id="trace-11952"></a>
- 62.30s–62.30s (×1), actor 9, squad 1 (trace 11952): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 11773. Next observer evidence: {'until': 75.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.018479471435082, 'next_transition': 12940}.
<a id="trace-12940"></a>
- 75.50s–75.50s (×1), actor 9, squad 1 (trace 12940): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 12868. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13050}.
<a id="trace-12941"></a>
- 75.50s–75.50s (×1), actor 9, squad 1 (trace 12941): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 12868. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13050}.
<a id="trace-13050"></a>
- 76.75s–76.75s (×1), actor 9, squad 1 (trace 13050): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 12868. Next observer evidence: {'until': 81.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1238}.
<a id="trace-1238"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (events line 1238): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13318"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 13318): renew committed intent (75 s lifetime). Knowledge: actor memory at 81.80s, trace 13318. Next observer evidence: {'until': 87.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13578}.
<a id="trace-13500"></a>
- 85.55s–85.55s (×1), actor 3, squad 0 (trace 13500): NeedSupport. Knowledge: actor memory at 85.00s, trace 13421. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27499999999999947, 'next_transition': 13552}.
<a id="trace-13552"></a>
<a id="trace-13554"></a>
<a id="trace-13595"></a>
<a id="trace-13597"></a>
<a id="trace-13619"></a>
<a id="trace-13621"></a>
<a id="trace-13715"></a>
<a id="trace-13717"></a>
<a id="trace-13727"></a>
<a id="trace-13729"></a>
<a id="trace-13813"></a>
<a id="trace-13815"></a>
<a id="trace-13828"></a>
<a id="trace-13830"></a>
<a id="trace-13852"></a>
<a id="trace-13854"></a>
<a id="trace-13869"></a>
<a id="trace-13871"></a>
<a id="trace-13890"></a>
<a id="trace-13892"></a>
<a id="trace-13908"></a>
<a id="trace-13910"></a>
<a id="trace-13930"></a>
<a id="trace-13932"></a>
- 86.75s–93.25s (×24), actor 5, squad 0 (trace 13552): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13423. Next observer evidence: {'until': 87.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13595}.
<a id="trace-13578"></a>
- 87.45s–87.45s (×1), actor 9, squad 1 (trace 13578): MoveTactically. Knowledge: actor memory at 85.00s, trace 13425. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13628}.
<a id="trace-13579"></a>
- 87.45s–87.45s (×1), actor 9, squad 1 (trace 13579): received platoon directive. Knowledge: actor memory at 85.00s, trace 13425. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13628}.
<a id="trace-13628"></a>
- 88.45s–88.45s (×1), actor 9, squad 1 (trace 13628): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 13425. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.190675329747307, 'next_transition': 1355}.
<a id="trace-13941"></a>
- 93.55s–93.55s (×1), actor 3, squad 0 (trace 13941): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 90.00s, trace 13743. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13950}.
<a id="trace-13950"></a>
<a id="trace-13952"></a>
<a id="trace-13995"></a>
<a id="trace-13997"></a>
- 93.75s–94.75s (×4), actor 5, squad 0 (trace 13950): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 13745. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13995}.
<a id="trace-1354"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (events line 1354): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1355"></a>
- 95.65s–95.65s (×1), actor 5, squad 1 (events line 1355): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14087"></a>
- 95.65s–95.65s (×1), actor 5, squad 0 (trace 14087): renew committed intent (75 s lifetime). Knowledge: actor memory at 95.65s, trace 14087. Next observer evidence: None.
<a id="trace-14088"></a>
- 95.65s–95.65s (×1), actor 5, squad 1 (trace 14088): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.990505 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 14088. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8093333597199327, 'next_transition': 14165}.
<a id="trace-14089"></a>
- 95.65s–95.65s (×1), actor 5, squad 1 (trace 14089): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.990505 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.65s, trace 14089. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8093333597199327, 'next_transition': 14165}.
<a id="trace-14093"></a>
<a id="trace-14095"></a>
<a id="trace-14118"></a>
<a id="trace-14120"></a>
<a id="trace-14133"></a>
<a id="trace-14135"></a>
<a id="trace-14152"></a>
<a id="trace-14154"></a>
<a id="trace-14170"></a>
<a id="trace-14172"></a>
<a id="trace-14191"></a>
<a id="trace-14193"></a>
<a id="trace-14310"></a>
<a id="trace-14312"></a>
<a id="trace-14338"></a>
<a id="trace-14340"></a>
<a id="trace-14592"></a>
<a id="trace-14594"></a>
- 95.75s–101.25s (×18), actor 5, squad 0 (trace 14093): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.65s, trace 14089. Next observer evidence: {'until': 96.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14118}.
<a id="trace-14165"></a>
- 97.70s–97.70s (×1), actor 9, squad 1 (trace 14165): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 14012. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14204}.
<a id="trace-14204"></a>
- 98.70s–98.70s (×1), actor 9, squad 1 (trace 14204): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 14012. Next observer evidence: {'until': 101, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9950298608546955, 'next_transition': 14476}.
<a id="trace-14476"></a>
- 101.15s–101.15s (×1), actor 9, squad 1 (trace 14476): received platoon directive. Knowledge: actor memory at 100.00s, trace 14373. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.034993535076389, 'next_transition': 15185}.
<a id="trace-14599"></a>
- 101.40s–101.40s (×1), actor 3, squad 0 (trace 14599): MoveTactically. Knowledge: actor memory at 100.00s, trace 14369. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14673}.
<a id="trace-14600"></a>
- 101.40s–101.40s (×1), actor 3, squad 0 (trace 14600): traveling overwatch. Knowledge: actor memory at 100.00s, trace 14369. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14673}.
<a id="trace-14601"></a>
- 101.40s–101.40s (×1), actor 3, squad 0 (trace 14601): received platoon directive. Knowledge: actor memory at 100.00s, trace 14369. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14673}.
<a id="trace-14673"></a>
<a id="trace-14675"></a>
<a id="trace-14700"></a>
<a id="trace-14702"></a>
<a id="trace-14724"></a>
<a id="trace-14726"></a>
<a id="trace-14767"></a>
<a id="trace-14769"></a>
<a id="trace-14792"></a>
<a id="trace-14794"></a>
<a id="trace-14945"></a>
<a id="trace-14947"></a>
<a id="trace-14990"></a>
<a id="trace-14992"></a>
<a id="trace-15012"></a>
<a id="trace-15014"></a>
- 101.75s–107.75s (×16), actor 5, squad 0 (trace 14673): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 14371. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2756441910439074, 'next_transition': 14700}.
<a id="trace-15030"></a>
- 108.10s–108.10s (×1), actor 3, squad 0 (trace 15030): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 14829. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15041}.
<a id="trace-15041"></a>
<a id="trace-15043"></a>
<a id="trace-15081"></a>
<a id="trace-15083"></a>
- 108.25s–109.25s (×4), actor 5, squad 0 (trace 15041): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 14831. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39374906349094935, 'next_transition': 15081}.
<a id="trace-1489"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (events line 1489): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749239068920143, 'next_transition': 15097}.
<a id="trace-15091"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (trace 15091): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.991672 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 15091. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749239068920143, 'next_transition': 15097}.
<a id="trace-15092"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (trace 15092): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.991672 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 15092. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749239068920143, 'next_transition': 15097}.
<a id="trace-15097"></a>
<a id="trace-15099"></a>
<a id="trace-15209"></a>
<a id="trace-15211"></a>
<a id="trace-15228"></a>
<a id="trace-15230"></a>
<a id="trace-15312"></a>
<a id="trace-15314"></a>
<a id="trace-15354"></a>
<a id="trace-15356"></a>
<a id="trace-15378"></a>
<a id="trace-15380"></a>
<a id="trace-15392"></a>
<a id="trace-15394"></a>
<a id="trace-15413"></a>
<a id="trace-15415"></a>
<a id="trace-15509"></a>
<a id="trace-15511"></a>
<a id="trace-15525"></a>
<a id="trace-15527"></a>
<a id="trace-15542"></a>
<a id="trace-15544"></a>
- 109.75s–116.25s (×22), actor 5, squad 0 (trace 15097): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 109.45s, trace 15092. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8481432224702148, 'next_transition': 15209}.
<a id="trace-15185"></a>
- 110.30s–110.30s (×1), actor 9, squad 1 (trace 15185): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 15114. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15239}.
<a id="trace-15239"></a>
- 111.30s–111.30s (×1), actor 9, squad 1 (trace 15239): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 15114. Next observer evidence: {'until': 120.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.000004336312267, 'next_transition': 15894}.
<a id="trace-15556"></a>
- 116.65s–116.65s (×1), actor 3, squad 0 (trace 15556): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 15439. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35375030864264867, 'next_transition': 15691}.
<a id="trace-15557"></a>
- 116.65s–116.65s (×1), actor 3, squad 0 (trace 15557): bounding overwatch. Knowledge: actor memory at 115.00s, trace 15439. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35375030864264867, 'next_transition': 15691}.
<a id="trace-15558"></a>
- 116.65s–116.65s (×1), actor 3, squad 0 (trace 15558): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 115.00s, trace 15439. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35375030864264867, 'next_transition': 15691}.
<a id="trace-15691"></a>
<a id="trace-15693"></a>
<a id="trace-15710"></a>
<a id="trace-15712"></a>
<a id="trace-15734"></a>
<a id="trace-15736"></a>
<a id="trace-15792"></a>
<a id="trace-15794"></a>
<a id="trace-15876"></a>
<a id="trace-15878"></a>
- 117.25s–120.25s (×10), actor 5, squad 0 (trace 15691): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 15441. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149997920578679, 'next_transition': 15710}.
<a id="trace-15885"></a>
- 120.25s–120.25s (×1), actor 3, squad 0 (trace 15885): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 120.00s, trace 15802. Next observer evidence: {'until': 120.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.31500000000000017, 'next_transition': 15986}.
<a id="trace-15894"></a>
- 120.50s–120.50s (×1), actor 9, squad 1 (trace 15894): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 15806. Next observer evidence: {'until': 127.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.701603858377598, 'next_transition': 16782}.
<a id="trace-15986"></a>
<a id="trace-15988"></a>
<a id="trace-16017"></a>
<a id="trace-16019"></a>
- 120.75s–121.25s (×4), actor 5, squad 0 (trace 15986): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 15804. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6318584958636888, 'next_transition': 16017}.
<a id="trace-16026"></a>
- 121.25s–121.25s (×1), actor 3, squad 0 (trace 16026): new contact inside 100 m. Knowledge: actor memory at 120.00s, trace 15802. Next observer evidence: {'until': 121.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3149992906738048, 'next_transition': 16152}.
<a id="trace-16152"></a>
<a id="trace-16154"></a>
<a id="trace-16186"></a>
<a id="trace-16188"></a>
- 121.75s–122.25s (×4), actor 5, squad 0 (trace 16152): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 15804. Next observer evidence: {'until': 122.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5827077393533604, 'next_transition': 16186}.
<a id="trace-16221"></a>
- 123.00s–123.00s (×1), actor 3, squad 0 (trace 16221): new contact inside 100 m. Knowledge: actor memory at 120.00s, trace 15802. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11453000000000024, 'next_transition': 16344}.
<a id="trace-16344"></a>
<a id="trace-16346"></a>
- 123.25s–123.25s (×2), actor 5, squad 0 (trace 16344): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 15804. Next observer evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11665999999999976, 'next_transition': 16356}.
<a id="trace-16356"></a>
- 123.45s–123.45s (×1), actor 3, squad 0 (trace 16356): new contact inside 100 m. Knowledge: actor memory at 120.00s, trace 15802. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.059125000000000094, 'next_transition': 16482}.
<a id="trace-16482"></a>
<a id="trace-16484"></a>
<a id="trace-16514"></a>
<a id="trace-16516"></a>
<a id="trace-16558"></a>
<a id="trace-16560"></a>
<a id="trace-16691"></a>
<a id="trace-16693"></a>
<a id="trace-16721"></a>
<a id="trace-16723"></a>
<a id="trace-16756"></a>
<a id="trace-16758"></a>
- 123.75s–126.75s (×12), actor 5, squad 0 (trace 16482): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 15804. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03135749999999993, 'next_transition': 16514}.
<a id="trace-16771"></a>
- 127.00s–127.00s (×1), actor 3, squad 0 (trace 16771): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 125.00s, trace 16583. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16892}.
<a id="trace-16782"></a>
- 127.20s–127.20s (×1), actor 9, squad 1 (trace 16782): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 16587. Next observer evidence: {'until': 137, 'shots': 1, 'casualties': 0, 'mean_displacement': 15.338526707915529, 'next_transition': 1828}.
<a id="trace-16892"></a>
<a id="trace-16894"></a>
- 127.25s–127.25s (×2), actor 5, squad 0 (trace 16892): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 16585. Next observer evidence: {'until': 127.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16908}.
<a id="trace-16908"></a>
- 127.50s–127.50s (×1), actor 3, squad 0 (trace 16908): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 125.00s, trace 16583. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18585}.
<a id="trace-18573"></a>
- 127.50s–127.50s (×1), actor 3, squad 0 (trace 18573): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 125.00s, trace 16583. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18585}.
<a id="trace-18574"></a>
- 127.50s–127.50s (×1), actor 3, squad 0 (trace 18574): MoveTactically. Knowledge: actor memory at 125.00s, trace 16583. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18585}.
<a id="trace-18575"></a>
- 127.50s–127.50s (×1), actor 3, squad 0 (trace 18575): contact cover complete: assessment resumes closure. Knowledge: actor memory at 125.00s, trace 16583. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18585}.
<a id="trace-18585"></a>
<a id="trace-18587"></a>
<a id="trace-18638"></a>
<a id="trace-18640"></a>
<a id="trace-18664"></a>
<a id="trace-18666"></a>
<a id="trace-18686"></a>
<a id="trace-18688"></a>
<a id="trace-18762"></a>
<a id="trace-18764"></a>
<a id="trace-18807"></a>
<a id="trace-18809"></a>
<a id="trace-18828"></a>
<a id="trace-18830"></a>
- 127.75s–131.80s (×14), actor 5, squad 0 (trace 18585): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 16585. Next observer evidence: {'until': 128.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.028349999999999653, 'next_transition': 18638}.
<a id="trace-18846"></a>
- 132.10s–132.10s (×1), actor 3, squad 0 (trace 18846): NeedSupport. Knowledge: actor memory at 130.00s, trace 18696. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1133999999999995, 'next_transition': 18863}.
<a id="trace-18863"></a>
<a id="trace-18865"></a>
<a id="trace-18907"></a>
<a id="trace-18909"></a>
<a id="trace-18925"></a>
<a id="trace-18927"></a>
<a id="trace-18969"></a>
<a id="trace-18971"></a>
<a id="trace-19075"></a>
<a id="trace-19077"></a>
<a id="trace-19099"></a>
<a id="trace-19101"></a>
<a id="trace-19120"></a>
<a id="trace-19122"></a>
<a id="trace-19353"></a>
<a id="trace-19355"></a>
<a id="trace-19374"></a>
<a id="trace-19376"></a>
- 132.30s–138.30s (×18), actor 5, squad 0 (trace 18863): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 18698. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1877543785470843, 'next_transition': 18907}.
<a id="trace-1828"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (events line 1828): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19138"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (trace 19138): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.120326 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 19138. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19153}.
<a id="trace-19139"></a>
- 137.10s–137.10s (×1), actor 5, squad 1 (trace 19139): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.120326 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 137.10s, trace 19139. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19153}.
<a id="trace-19153"></a>
- 137.30s–137.30s (×1), actor 9, squad 1 (trace 19153): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 135.00s, trace 18983. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19383}.
<a id="trace-19383"></a>
- 138.30s–138.30s (×1), actor 9, squad 1 (trace 19383): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 18983. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19681}.
<a id="trace-19482"></a>
- 138.30s–138.30s (×1), actor 9, squad 1 (trace 19482): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 135.00s, trace 18983. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19681}.
<a id="trace-19505"></a>
- 138.75s–138.75s (×1), actor 4, squad 0 (trace 19505): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 18980. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34650538617431215, 'next_transition': 19646}.
<a id="trace-19506"></a>
- 138.75s–138.75s (×1), actor 4, squad 0 (trace 19506): new contact inside 100 m. Knowledge: actor memory at 135.00s, trace 18980. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34650538617431215, 'next_transition': 19646}.
<a id="trace-19646"></a>
<a id="trace-19648"></a>
<a id="trace-19672"></a>
<a id="trace-19674"></a>
<a id="trace-19803"></a>
<a id="trace-19805"></a>
- 138.80s–139.80s (×6), actor 5, squad 0 (trace 19646): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.10s, trace 19139. Next observer evidence: {'until': 139.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.663770772348626, 'next_transition': 19672}.
<a id="trace-19681"></a>
- 139.30s–139.30s (×1), actor 9, squad 1 (trace 19681): recovering: retry accepted element corridor in column. Knowledge: actor memory at 135.00s, trace 18983. Next observer evidence: {'until': 139.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19801}.
<a id="trace-19780"></a>
- 139.30s–139.30s (×1), actor 9, squad 1 (trace 19780): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 135.00s, trace 18983. Next observer evidence: {'until': 139.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19801}.
<a id="trace-19801"></a>
- 139.75s–139.75s (×1), actor 9, squad 1 (trace 19801): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 135.00s, trace 18983. Next observer evidence: {'until': 142.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20175}.
<a id="trace-19816"></a>
- 139.90s–139.90s (×1), actor 4, squad 0 (trace 19816): new contact inside 100 m. Knowledge: actor memory at 135.00s, trace 18980. Next observer evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20997591660844303, 'next_transition': 19980}.
<a id="trace-19980"></a>
- 140.10s–140.10s (×1), actor 4, squad 0 (trace 19980): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 140.00s, trace 19953. Next observer evidence: None.
<a id="trace-19986"></a>
- 140.15s–140.15s (×1), actor 4, squad 0 (trace 19986): Reorganise: completed/failed drill. Knowledge: actor memory at 140.00s, trace 19953. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000538617431228, 'next_transition': 20054}.
<a id="trace-19988"></a>
- 140.15s–140.15s (×1), actor 4, squad 0 (trace 19988): MoveTactically. Knowledge: actor memory at 140.00s, trace 19953. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000538617431228, 'next_transition': 20054}.
<a id="trace-19989"></a>
- 140.15s–140.15s (×1), actor 4, squad 0 (trace 19989): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 140.00s, trace 19953. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000538617431228, 'next_transition': 20054}.
<a id="trace-20054"></a>
- 140.20s–140.20s (×1), actor 4, squad 0 (trace 20054): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 19953. Next observer evidence: None.
<a id="trace-20062"></a>
<a id="trace-20090"></a>
<a id="trace-20117"></a>
<a id="trace-20136"></a>
<a id="trace-20161"></a>
<a id="trace-20255"></a>
<a id="trace-20274"></a>
<a id="trace-20321"></a>
<a id="trace-20323"></a>
<a id="trace-20409"></a>
<a id="trace-20411"></a>
- 140.30s–145.30s (×11), actor 5, squad 0 (trace 20062): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 19954. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5508310589968181, 'next_transition': 20090}.
<a id="trace-20175"></a>
- 142.75s–142.75s (×1), actor 9, squad 1 (trace 20175): current contact unknown for 10 s. Knowledge: actor memory at 140.00s, trace 19956. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.657039937534077, 'next_transition': 20630}.
<a id="trace-20422"></a>
- 145.75s–145.75s (×1), actor 4, squad 0 (trace 20422): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 20334. Next observer evidence: {'until': 146.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6300134222556075, 'next_transition': 20481}.
<a id="trace-20423"></a>
- 145.75s–145.75s (×1), actor 4, squad 0 (trace 20423): new contact inside 100 m. Knowledge: actor memory at 145.00s, trace 20334. Next observer evidence: {'until': 146.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6300134222556075, 'next_transition': 20481}.
<a id="trace-20481"></a>
<a id="trace-20483"></a>
<a id="trace-20501"></a>
<a id="trace-20503"></a>
<a id="trace-20524"></a>
<a id="trace-20526"></a>
<a id="trace-20562"></a>
<a id="trace-20564"></a>
<a id="trace-20582"></a>
<a id="trace-20584"></a>
- 146.30s–148.80s (×10), actor 5, squad 0 (trace 20481): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 20335. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299877423851638, 'next_transition': 20501}.
<a id="trace-20599"></a>
- 149.10s–149.10s (×1), actor 4, squad 0 (trace 20599): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 145.00s, trace 20334. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9156194137968217, 'next_transition': 20991}.
<a id="trace-20602"></a>
- 149.10s–149.10s (×1), actor 4, squad 0 (trace 20602): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 145.00s, trace 20334. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9156194137968217, 'next_transition': 20991}.
<a id="trace-20603"></a>
- 149.10s–149.10s (×1), actor 4, squad 0 (trace 20603): rearward bound: one stationary suppressing element. Knowledge: actor memory at 145.00s, trace 20334. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9156194137968217, 'next_transition': 20991}.
<a id="trace-20630"></a>
- 149.20s–149.20s (×1), actor 9, squad 1 (trace 20630): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 20337. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0878575015628382, 'next_transition': 2007}.
<a id="trace-20631"></a>
- 149.20s–149.20s (×1), actor 9, squad 1 (trace 20631): new contact inside 100 m. Knowledge: actor memory at 145.00s, trace 20337. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0878575015628382, 'next_transition': 2007}.
<a id="trace-20991"></a>
<a id="trace-20993"></a>
<a id="trace-21080"></a>
<a id="trace-21082"></a>
<a id="trace-21113"></a>
<a id="trace-21115"></a>
<a id="trace-21139"></a>
<a id="trace-21141"></a>
<a id="trace-21530"></a>
<a id="trace-21532"></a>
<a id="trace-21886"></a>
<a id="trace-21888"></a>
<a id="trace-21912"></a>
<a id="trace-21914"></a>
<a id="trace-21936"></a>
<a id="trace-21938"></a>
<a id="trace-21970"></a>
<a id="trace-21972"></a>
<a id="trace-22053"></a>
<a id="trace-22055"></a>
<a id="trace-22385"></a>
<a id="trace-22387"></a>
<a id="trace-22411"></a>
<a id="trace-22413"></a>
<a id="trace-22743"></a>
<a id="trace-22745"></a>
<a id="trace-22768"></a>
<a id="trace-22770"></a>
<a id="trace-22819"></a>
<a id="trace-22821"></a>
<a id="trace-22848"></a>
<a id="trace-22850"></a>
<a id="trace-22876"></a>
<a id="trace-22878"></a>
<a id="trace-22893"></a>
<a id="trace-22895"></a>
<a id="trace-23257"></a>
<a id="trace-23259"></a>
<a id="trace-23280"></a>
<a id="trace-23282"></a>
<a id="trace-23298"></a>
<a id="trace-23300"></a>
<a id="trace-23347"></a>
<a id="trace-23349"></a>
<a id="trace-23363"></a>
<a id="trace-23365"></a>
<a id="trace-23395"></a>
<a id="trace-23397"></a>
<a id="trace-23648"></a>
<a id="trace-23650"></a>
<a id="trace-23742"></a>
<a id="trace-23744"></a>
<a id="trace-23763"></a>
<a id="trace-23765"></a>
<a id="trace-23825"></a>
<a id="trace-23827"></a>
<a id="trace-23840"></a>
<a id="trace-23842"></a>
<a id="trace-23863"></a>
<a id="trace-23865"></a>
<a id="trace-24049"></a>
<a id="trace-24051"></a>
<a id="trace-24117"></a>
<a id="trace-24119"></a>
<a id="trace-24209"></a>
<a id="trace-24211"></a>
- 149.80s–170.30s (×66), actor 5, squad 0 (trace 20991): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 20335. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41998796940441574, 'next_transition': 21080}.
<a id="trace-2007"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (events line 2007): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21124"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 21124): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.165815 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 21124. Next observer evidence: {'until': 151.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.793253240748976, 'next_transition': 21151}.
<a id="trace-21125"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 21125): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.165815 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 21125. Next observer evidence: {'until': 151.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.793253240748976, 'next_transition': 21151}.
<a id="trace-21151"></a>
<a id="trace-21559"></a>
- 151.50s–153.05s (×2), actor 9, squad 1 (trace 21151): new contact inside 100 m. Knowledge: actor memory at 150.00s, trace 21007. Next observer evidence: {'until': 153, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.9204426289625363, 'next_transition': 21559}.
<a id="trace-22068"></a>
- 155.60s–155.60s (×1), actor 9, squad 1 (trace 22068): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 155.00s, trace 21984. Next observer evidence: {'until': 156.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400012621557318, 'next_transition': 22425}.
<a id="trace-22425"></a>
- 156.50s–156.50s (×1), actor 9, squad 1 (trace 22425): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 21984. Next observer evidence: {'until': 160, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.8482007540826366, 'next_transition': 22924}.
<a id="trace-22924"></a>
- 160.00s–160.00s (×1), actor 9, squad 1 (trace 22924): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 160.00s, trace 22906. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 3.2912045807309958, 'next_transition': 23404}.
<a id="trace-22925"></a>
- 160.00s–160.00s (×1), actor 9, squad 1 (trace 22925): rearward bound: one stationary suppressing element. Knowledge: actor memory at 160.00s, trace 22906. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 3.2912045807309958, 'next_transition': 23404}.
<a id="trace-23404"></a>
- 163.30s–163.30s (×1), actor 9, squad 1 (trace 23404): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 160.00s, trace 22906. Next observer evidence: {'until': 164, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599989187274738, 'next_transition': 23429}.
<a id="trace-23405"></a>
- 163.30s–163.30s (×1), actor 9, squad 1 (trace 23405): NeedSupport. Knowledge: actor memory at 160.00s, trace 22906. Next observer evidence: {'until': 164, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599989187274738, 'next_transition': 23429}.
<a id="trace-23429"></a>
- 164.05s–164.05s (×1), actor 9, squad 1 (trace 23429): Reorganise: completed/failed drill. Knowledge: actor memory at 160.00s, trace 22906. Next observer evidence: {'until': 168.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8951608168559921, 'next_transition': 23872}.
<a id="trace-23432"></a>
- 164.05s–164.05s (×1), actor 9, squad 1 (trace 23432): ReactToContact: cover and return fire. Knowledge: actor memory at 160.00s, trace 22906. Next observer evidence: {'until': 168.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8951608168559921, 'next_transition': 23872}.
<a id="trace-23433"></a>
- 164.05s–164.05s (×1), actor 9, squad 1 (trace 23433): Reorganise complete: known contact. Knowledge: actor memory at 160.00s, trace 22906. Next observer evidence: {'until': 168.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8951608168559921, 'next_transition': 23872}.
<a id="trace-23872"></a>
- 168.30s–168.30s (×1), actor 9, squad 1 (trace 23872): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 165.00s, trace 23679. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.005017561658813888, 'next_transition': 24259}.
<a id="trace-23873"></a>
- 168.30s–168.30s (×1), actor 9, squad 1 (trace 23873): rearward bound: one stationary suppressing element. Knowledge: actor memory at 165.00s, trace 23679. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.005017561658813888, 'next_transition': 24259}.
<a id="trace-24236"></a>
- 170.65s–170.65s (×1), actor 4, squad 0 (trace 24236): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 170.00s, trace 24135. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.037799999999999535, 'next_transition': 24250}.
<a id="trace-24250"></a>
<a id="trace-24252"></a>
<a id="trace-24304"></a>
<a id="trace-24306"></a>
<a id="trace-24326"></a>
<a id="trace-24328"></a>
<a id="trace-24341"></a>
<a id="trace-24343"></a>
<a id="trace-24363"></a>
<a id="trace-24365"></a>
<a id="trace-24399"></a>
<a id="trace-24401"></a>
<a id="trace-24411"></a>
<a id="trace-24413"></a>
<a id="trace-24485"></a>
<a id="trace-24487"></a>
<a id="trace-24499"></a>
<a id="trace-24501"></a>
<a id="trace-24522"></a>
<a id="trace-24524"></a>
<a id="trace-24538"></a>
<a id="trace-24540"></a>
<a id="trace-24571"></a>
<a id="trace-24573"></a>
<a id="trace-24593"></a>
<a id="trace-24595"></a>
- 170.80s–178.30s (×26), actor 5, squad 0 (trace 24250): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 24136. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26460000000000033, 'next_transition': 24304}.
<a id="trace-24259"></a>
- 170.80s–170.80s (×1), actor 9, squad 1 (trace 24259): NeedSupport. Knowledge: actor memory at 170.00s, trace 24138. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999957816558673, 'next_transition': 24797}.
<a id="trace-2334"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (events line 2334): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260002445255564, 'next_transition': 24625}.
<a id="trace-24602"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 24602): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.55s, trace 24602. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260002445255564, 'next_transition': 24625}.
<a id="trace-24625"></a>
<a id="trace-24627"></a>
<a id="trace-24637"></a>
<a id="trace-24639"></a>
<a id="trace-24716"></a>
<a id="trace-24718"></a>
<a id="trace-24729"></a>
<a id="trace-24731"></a>
<a id="trace-24749"></a>
<a id="trace-24761"></a>
<a id="trace-24776"></a>
<a id="trace-24789"></a>
<a id="trace-24816"></a>
<a id="trace-24829"></a>
- 179.30s–183.80s (×14), actor 5, squad 0 (trace 24625): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.55s, trace 24602. Next observer evidence: {'until': 179.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449928477242563, 'next_transition': 24637}.
<a id="trace-24797"></a>
- 182.90s–182.90s (×1), actor 9, squad 1 (trace 24797): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 24650. Next observer evidence: {'until': 190, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25067}.
<a id="trace-24798"></a>
- 182.90s–182.90s (×1), actor 9, squad 1 (trace 24798): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 24650. Next observer evidence: {'until': 190, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25067}.
<a id="trace-24841"></a>
- 184.25s–184.25s (×1), actor 5, squad 0 (trace 24841): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 184.25s, trace 24841. Next observer evidence: None.
<a id="trace-24848"></a>
<a id="trace-24860"></a>
<a id="trace-24929"></a>
<a id="trace-24938"></a>
<a id="trace-24953"></a>
<a id="trace-24966"></a>
<a id="trace-24980"></a>
<a id="trace-25004"></a>
<a id="trace-25017"></a>
<a id="trace-25033"></a>
<a id="trace-25045"></a>
<a id="trace-25117"></a>
<a id="trace-25133"></a>
<a id="trace-25150"></a>
<a id="trace-25162"></a>
<a id="trace-25177"></a>
<a id="trace-25188"></a>
<a id="trace-25205"></a>
<a id="trace-25214"></a>
<a id="trace-25229"></a>
<a id="trace-25241"></a>
<a id="trace-25313"></a>
<a id="trace-25330"></a>
<a id="trace-25346"></a>
<a id="trace-25357"></a>
- 184.30s–196.80s (×25), actor 5, squad 0 (trace 24848): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 184.25s, trace 24841. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450031071377482, 'next_transition': 24860}.
<a id="trace-25067"></a>
- 190.05s–190.05s (×1), actor 9, squad 1 (trace 25067): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 190.00s, trace 25053. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2477}.
<a id="trace-2477"></a>
- 200.35s–200.35s (×1), actor 6, squad 1 (events line 2477): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-25502"></a>
- 200.35s–200.35s (×1), actor 6, squad 1 (trace 25502): renew committed intent (75 s lifetime). Knowledge: actor memory at 200.35s, trace 25502. Next observer evidence: {'until': 225.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2647}.
<a id="trace-25518"></a>
<a id="trace-25543"></a>
<a id="trace-25565"></a>
<a id="trace-25587"></a>
<a id="trace-25662"></a>
<a id="trace-25682"></a>
<a id="trace-25707"></a>
<a id="trace-25736"></a>
<a id="trace-25759"></a>
<a id="trace-25834"></a>
<a id="trace-25855"></a>
<a id="trace-25879"></a>
<a id="trace-25907"></a>
<a id="trace-25930"></a>
<a id="trace-26007"></a>
<a id="trace-26034"></a>
<a id="trace-26060"></a>
<a id="trace-26085"></a>
<a id="trace-26109"></a>
<a id="trace-26188"></a>
<a id="trace-26213"></a>
<a id="trace-26243"></a>
<a id="trace-26272"></a>
<a id="trace-26291"></a>
<a id="trace-26370"></a>
<a id="trace-26403"></a>
<a id="trace-26431"></a>
<a id="trace-26461"></a>
<a id="trace-26491"></a>
<a id="trace-26569"></a>
<a id="trace-26652"></a>
<a id="trace-26680"></a>
<a id="trace-26716"></a>
<a id="trace-26743"></a>
<a id="trace-26822"></a>
<a id="trace-26845"></a>
<a id="trace-26872"></a>
<a id="trace-26897"></a>
<a id="trace-26922"></a>
<a id="trace-27009"></a>
<a id="trace-27040"></a>
<a id="trace-27075"></a>
<a id="trace-27106"></a>
<a id="trace-27130"></a>
<a id="trace-27207"></a>
<a id="trace-27269"></a>
<a id="trace-27293"></a>
<a id="trace-27318"></a>
<a id="trace-27396"></a>
<a id="trace-27422"></a>
<a id="trace-27449"></a>
<a id="trace-27477"></a>
<a id="trace-27497"></a>
<a id="trace-27575"></a>
<a id="trace-27599"></a>
<a id="trace-27621"></a>
<a id="trace-27641"></a>
<a id="trace-27663"></a>
<a id="trace-27740"></a>
<a id="trace-27772"></a>
<a id="trace-27803"></a>
<a id="trace-27829"></a>
<a id="trace-27851"></a>
<a id="trace-27927"></a>
<a id="trace-27957"></a>
<a id="trace-28017"></a>
<a id="trace-28043"></a>
<a id="trace-28122"></a>
<a id="trace-28147"></a>
<a id="trace-28174"></a>
<a id="trace-28204"></a>
<a id="trace-28305"></a>
<a id="trace-28327"></a>
<a id="trace-28347"></a>
<a id="trace-28367"></a>
<a id="trace-28392"></a>
<a id="trace-28467"></a>
<a id="trace-28492"></a>
<a id="trace-28517"></a>
<a id="trace-28539"></a>
<a id="trace-28557"></a>
<a id="trace-28631"></a>
<a id="trace-28657"></a>
<a id="trace-28684"></a>
<a id="trace-28719"></a>
<a id="trace-28744"></a>
<a id="trace-28820"></a>
<a id="trace-28846"></a>
<a id="trace-28874"></a>
<a id="trace-28903"></a>
<a id="trace-28931"></a>
<a id="trace-29013"></a>
<a id="trace-29038"></a>
<a id="trace-29065"></a>
<a id="trace-29091"></a>
<a id="trace-29119"></a>
<a id="trace-29197"></a>
<a id="trace-29225"></a>
<a id="trace-29249"></a>
<a id="trace-29278"></a>
<a id="trace-29302"></a>
<a id="trace-29378"></a>
<a id="trace-29407"></a>
<a id="trace-29438"></a>
<a id="trace-29466"></a>
<a id="trace-29492"></a>
<a id="trace-29564"></a>
<a id="trace-29583"></a>
<a id="trace-29609"></a>
<a id="trace-29632"></a>
<a id="trace-29655"></a>
<a id="trace-29731"></a>
<a id="trace-29783"></a>
<a id="trace-29812"></a>
<a id="trace-29837"></a>
<a id="trace-29913"></a>
<a id="trace-29945"></a>
<a id="trace-29979"></a>
<a id="trace-30004"></a>
<a id="trace-30024"></a>
<a id="trace-30098"></a>
<a id="trace-30119"></a>
<a id="trace-30146"></a>
<a id="trace-30171"></a>
<a id="trace-30193"></a>
<a id="trace-30265"></a>
<a id="trace-30285"></a>
<a id="trace-30310"></a>
<a id="trace-30333"></a>
<a id="trace-30358"></a>
<a id="trace-30433"></a>
<a id="trace-30464"></a>
<a id="trace-30490"></a>
<a id="trace-30514"></a>
<a id="trace-30541"></a>
<a id="trace-30625"></a>
<a id="trace-30650"></a>
<a id="trace-30679"></a>
<a id="trace-30701"></a>
<a id="trace-30718"></a>
<a id="trace-30797"></a>
<a id="trace-30820"></a>
<a id="trace-30844"></a>
<a id="trace-30867"></a>
<a id="trace-30886"></a>
<a id="trace-30963"></a>
<a id="trace-30983"></a>
<a id="trace-31011"></a>
<a id="trace-31037"></a>
<a id="trace-31060"></a>
<a id="trace-31137"></a>
<a id="trace-31162"></a>
<a id="trace-31195"></a>
<a id="trace-31221"></a>
<a id="trace-31244"></a>
- 201.30s–359.30s (×155), actor 6, squad 0 (trace 25518): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 200.35s, trace 25502. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.14993729716958, 'next_transition': 25543}.
<a id="trace-2647"></a>
- 225.65s–225.65s (×1), actor 6, squad 1 (events line 2647): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26383"></a>
- 225.65s–225.65s (×1), actor 6, squad 1 (trace 26383): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.110605 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 225.65s, trace 26383. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26440}.
<a id="trace-26384"></a>
- 225.65s–225.65s (×1), actor 6, squad 1 (trace 26384): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.110605 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 225.65s, trace 26384. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26440}.
<a id="trace-26440"></a>
- 227.30s–227.30s (×1), actor 9, squad 1 (trace 26440): MoveTactically. Knowledge: actor memory at 225.00s, trace 26313. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2678}.
<a id="trace-26441"></a>
- 227.30s–227.30s (×1), actor 9, squad 1 (trace 26441): received platoon directive. Knowledge: actor memory at 225.00s, trace 26313. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2678}.
<a id="trace-2678"></a>
- 229.25s–229.25s (×1), actor 6, squad 1 (events line 2678): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26591}.
<a id="trace-26487"></a>
- 229.25s–229.25s (×1), actor 6, squad 1 (trace 26487): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.112068 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 229.25s, trace 26487. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26591}.
<a id="trace-26488"></a>
- 229.25s–229.25s (×1), actor 6, squad 1 (trace 26488): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.112068 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 229.25s, trace 26488. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26591}.
<a id="trace-26591"></a>
- 230.90s–230.90s (×1), actor 9, squad 1 (trace 26591): Withdraw to received rally. Knowledge: actor memory at 230.00s, trace 26514. Next observer evidence: {'until': 241.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000000000000004, 'next_transition': 27055}.
<a id="trace-26592"></a>
- 230.90s–230.90s (×1), actor 9, squad 1 (trace 26592): rearward bound: one stationary suppressing element. Knowledge: actor memory at 230.00s, trace 26514. Next observer evidence: {'until': 241.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000000000000004, 'next_transition': 27055}.
<a id="trace-27055"></a>
- 241.70s–241.70s (×1), actor 9, squad 1 (trace 27055): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 240.00s, trace 26950. Next observer evidence: {'until': 271.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3097}.
<a id="trace-27056"></a>
- 241.70s–241.70s (×1), actor 9, squad 1 (trace 27056): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 240.00s, trace 26950. Next observer evidence: {'until': 271.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3097}.
<a id="trace-3097"></a>
- 290.95s–290.95s (×1), actor 6, squad 1 (events line 3097): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28841"></a>
- 290.95s–290.95s (×1), actor 6, squad 1 (trace 28841): renew committed intent (75 s lifetime). Knowledge: actor memory at 290.95s, trace 28841. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3491}.
<a id="trace-3491"></a>
- 352.55s–352.55s (×1), actor 6, squad 1 (events line 3491): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31021"></a>
- 352.55s–352.55s (×1), actor 6, squad 1 (trace 31021): renew committed intent (75 s lifetime). Knowledge: actor memory at 352.55s, trace 31021. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

271 matched order/radio deliveries; 279 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.573s; maximum 5.300s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5073: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 5076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 5081: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 5082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 5083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 5084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5085: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 5086: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 5087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 5088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 5089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 5090: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 5091: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 5092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 5093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 5094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 5095: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 5096: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 8006: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 8007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 8008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 8009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 8010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 8011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 8012: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 8013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 8014: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 8015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 8016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 8017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 8018: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 8019: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 8020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 8021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 8022: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 8023: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 8024: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 8025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 8026: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 8027: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 8028: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 8029: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 8934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 8935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 9386: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 9387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 9388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 9389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 9390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 9391: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 9392: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 9393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 9394: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 9395: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 9396: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 9397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 9398: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 9399: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 9400: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 9401: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 9402: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 9403: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 9404: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 9405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 9406: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 9407: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 9408: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 9409: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 9710: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 9711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 9712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 9713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 9714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 9715: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 9716: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 9717: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 9718: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 9719: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 9720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 9721: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 9722: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 9723: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 9724: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 9725: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 9726: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 9727: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 9728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 9729: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 9730: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 9731: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 9732: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10106: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 10108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10110: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10111: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10112: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 10113: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 10114: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 10115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 10116: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 10117: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 10118: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 10119: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 10120: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 10121: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 10122: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 10123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 10124: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 10125: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 10126: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 10127: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 10516: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 10517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 10518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10520: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10521: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10522: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 10523: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 10524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10525: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10526: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10527: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10528: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10529: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 10530: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 10531: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 10532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 10533: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 10534: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 10535: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 10536: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 10990: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 10991: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 10992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 10993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 10994: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 10995: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 10996: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 10997: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 10998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 10999: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11000: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11001: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11002: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11003: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11004: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11005: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11007: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11008: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 11009: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 11010: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 11513: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 11514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 11515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 11516: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 11517: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 11518: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 11519: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 11520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 11521: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 11522: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 11523: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 11524: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 11525: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 11526: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 11527: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 11528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 11529: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 11530: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 11531: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 11532: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 11768: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 11769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11771: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11772: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 11773: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 11774: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 11775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11776: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11777: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11778: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11779: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11780: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11781: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11782: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 11784: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 11785: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 11786: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 11787: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 12179: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 12180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 12181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 12182: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 12183: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 12184: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 12185: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 12186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 12187: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 12188: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 12189: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 12190: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 12191: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 12192: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 12193: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 12194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 12195: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 12196: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 12197: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 12198: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 12603: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 12604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12606: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12607: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 12608: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 12609: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 12610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12611: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12612: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 12613: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12614: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12615: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12616: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12617: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 12618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 12619: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 12620: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 12621: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 12622: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 12864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 12865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 12866: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 12867: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 12868: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 12869: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 12870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 12871: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 12872: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 12873: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 12874: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 12875: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 12876: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 12877: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 12878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 12879: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 12880: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 12881: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 12882: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 13196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13198: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13199: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 13200: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 13201: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 13202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13203: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13204: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13205: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13206: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13207: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13208: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13209: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13211: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13212: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 13213: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 13214: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 13318: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13423: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13424: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 13425: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 13426: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 13427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13428: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13429: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13430: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13431: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13432: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13433: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13434: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13436: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13437: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 13438: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 13439: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 13743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 13744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 13745: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 13746: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 13747: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 13748: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 13749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 13750: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 13751: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 13752: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 13753: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 13754: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 13755: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 13756: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 13757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 13758: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 13759: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 13760: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 13761: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 14008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14010: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14011: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14012: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 14013: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 14014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14015: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14016: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14017: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14018: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14019: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14020: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14021: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14023: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14024: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 14025: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 14026: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 14087: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 14088: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.65s leader 5, trace 14089: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 14369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14371: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14372: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 14373: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 14374: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 14375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14376: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14377: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14378: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14379: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14380: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14381: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14382: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14384: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14385: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 14386: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 14387: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 14829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 14830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 14831: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 14832: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 14833: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 14834: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 14835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 14836: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 14837: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 14838: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 14839: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 14840: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 14841: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 14842: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 14843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 14844: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 14845: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 14846: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 14847: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 15091: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 15092: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15112: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15113: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15114: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 15115: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 15116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15117: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15118: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15119: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15120: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15121: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15122: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15123: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15125: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15126: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 15127: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 15128: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 15439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 15440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 15441: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 15442: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 15443: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 15444: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 15445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 15446: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 15447: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 15448: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 15449: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 15450: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 15451: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 15452: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 15453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 15454: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 15455: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 15456: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 15457: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 15802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 15803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 15804: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 15805: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 15806: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 15807: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 15808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 15809: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 15810: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 15811: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 15812: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 15813: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 15814: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 15815: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 15816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 15817: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 15818: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 15819: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 15820: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 16583: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16585: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 16586: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16587: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 16588: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 16589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16590: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16591: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16592: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16593: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16594: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16595: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16596: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16598: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16599: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 16600: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 16601: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 18696: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18698: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 18699: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 18700: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 18701: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 18702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18703: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18704: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18705: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18706: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18707: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18708: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18709: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18711: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18712: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 18713: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 18714: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 18979: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18980: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18981: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18982: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 18983: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 18984: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 18985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18986: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18987: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18988: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18989: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18990: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18991: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18992: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18994: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18995: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 18996: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 18997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 19138: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.10s leader 5, trace 19139: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 19953: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 19954: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 19955: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 19956: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 19957: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 19958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 19959: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 19960: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 19961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 19962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 19963: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 19964: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 19965: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 19966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 19967: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 19968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 19969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 19970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 20334: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 20335: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 20336: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20337: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 20338: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 20339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 20340: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20341: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 20342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20344: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20345: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20346: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20348: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 20350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 20351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 21004: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 21005: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 21006: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 21007: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 21008: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 21009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 21010: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 21011: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 21012: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 21013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 21014: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 21015: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 21016: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 21017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 21018: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 21019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 21020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 21021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 21124: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 21125: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 21981: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 21982: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 21983: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 21984: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 10, trace 21985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 21986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 21987: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 21988: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 21989: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 21990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 21991: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 21992: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 21993: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 21994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 21995: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 21996: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 21997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 21998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 22903: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 22904: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 22905: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 22906: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 10, trace 22907: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 22908: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 22909: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 22910: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 22911: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 22912: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 22913: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 22914: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 22915: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 22916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 22917: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 22918: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 22919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 22920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 23676: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 23677: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 23678: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 23679: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 23680: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 23681: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 23682: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 23683: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 23684: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 23685: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 23686: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 23687: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 23688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 23689: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 23690: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 23691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 23692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 24135: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 24136: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 24137: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 24138: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 24139: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 24140: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 24141: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 24142: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 24143: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 24144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 24145: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 24146: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 24147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 24148: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 24149: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 24150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 24151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 24420: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 24421: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 24422: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 24423: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 24424: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 24425: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 24426: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 24427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 24428: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 24429: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 24430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 24431: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 24432: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 24433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 24434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 24602: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 24648: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 24649: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 24650: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 24651: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 24652: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 24653: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 24654: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 24655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 24656: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 24657: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 24658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 24659: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 24660: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 24661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 24662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 184.25s leader 5, trace 24841: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 24868: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 24869: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 24870: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 24871: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 24872: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 24873: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 24874: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 24875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 24876: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 24877: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 24878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 24879: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 24880: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 24881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 24882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 25051: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 25052: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 25053: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 25054: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 25055: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 25056: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 25057: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 25058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 25059: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 25060: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 25061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 25062: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 25063: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 25064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 25065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 25249: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 25250: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 25251: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 25252: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 25253: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 25254: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 25255: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 25256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 25257: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 25258: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 25259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 25260: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 25261: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 25262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 25263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 25438: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 25439: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 25440: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 25441: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 25442: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 25443: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 25444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 25445: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 25446: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 25447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 25448: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 25449: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 25450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 25451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.35s leader 6, trace 25502: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 25600: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 25601: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 25602: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 25603: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 25604: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 25605: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 25606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 25607: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 25608: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 25609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 25610: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 25611: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 25612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 25613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 25774: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 25775: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 25776: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 25777: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 25778: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 25779: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 25780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 25781: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 25782: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 25783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 25784: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 25785: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 25786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 25787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 25950: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 25951: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 25952: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 25953: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 25954: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 25955: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 25956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 25957: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 25958: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 25959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 25960: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 25961: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 25962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 25963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 26131: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 26132: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 26133: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 26134: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 26135: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 26136: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 26137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 26138: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 26139: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 26140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 26141: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 26142: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 26143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 26144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 26312: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 26313: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 26314: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 26315: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 26316: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 26317: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 26318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 26319: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 26320: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 26321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 26322: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 26323: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 26324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 26325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.65s leader 6, trace 26383: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.65s leader 6, trace 26384: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 229.25s leader 6, trace 26487: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 229.25s leader 6, trace 26488: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 26513: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 26514: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 26515: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 26516: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 26517: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 26518: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 26519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 26520: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 26521: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 26522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 26523: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 26524: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 26525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 26526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 26761: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 26762: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 26763: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 26764: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 26765: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 26766: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 26767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 26768: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 26769: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 26770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 26771: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 26772: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 26773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 26774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 26949: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 26950: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 26951: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 26952: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 26953: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 26954: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 26955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 26956: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 26957: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 26958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 26959: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 26960: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 26961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 26962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 27151: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 27152: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 27153: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 27154: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 27155: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 27156: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 27157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 27158: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 27159: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 27160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 27161: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 27162: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 27163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 27164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 27339: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 27340: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 27341: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 27342: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 27343: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 27344: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 27345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 27346: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 27347: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 27348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 27349: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 27350: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 27351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 27352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 27516: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 27517: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 27518: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 27519: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 27520: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 27521: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 27522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 27523: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 27524: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 27525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 27526: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 27527: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 27528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 27529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 27682: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 27683: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 27684: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 27685: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 27686: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 27687: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 27688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 27689: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 27690: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 27691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 27692: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 27693: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 27694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 27695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 27869: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 27870: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 27871: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 27872: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 27873: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 27874: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 27875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 27876: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 27877: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 27878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 27879: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 27880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 27881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 27882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 28064: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 28065: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 28066: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 28067: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 28068: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 28069: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 28070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 28071: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 28072: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 28073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 28074: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 28075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 28076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 28077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 28248: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 28249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 28250: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 28251: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 28252: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 28253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 28254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 28255: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 28256: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 28257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 28258: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 28259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 28260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 28261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 28408: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 28409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 28410: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 28411: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 28412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 28413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 28414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 28415: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 28416: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 28417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 28418: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 28419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 28420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 28421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 28574: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 28575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 28576: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 28577: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 28578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 28579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 28580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 28581: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 28582: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 28583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 28584: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 28585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 28586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 28587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 28764: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 28765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 28766: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 28767: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 28768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 28769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 28770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 28771: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 28772: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 28773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 28774: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 28775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 28776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 28777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.95s leader 6, trace 28841: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 28954: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 28955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 28956: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 28957: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 28958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 28959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 28960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 28961: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 28962: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 28963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 28964: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 28965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 28966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 28967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 29138: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 29139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 29140: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 29141: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 29142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 29143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 29144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 29145: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 29146: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 29147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 29148: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 29149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 29150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 29151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 29321: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 29322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 29323: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 29324: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 29325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 29326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 29327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 29328: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 29329: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 29330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 29331: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 29332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 29333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 29334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 29507: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 29508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 29509: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 29510: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 29511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 29512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 29513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 29514: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 29515: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 29516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 29517: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 29518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 29519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 29520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 29673: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 29674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 29675: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 29676: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 29677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 29678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 29679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 29680: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 29681: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 29682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 29683: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 29684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 29685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 29686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 29857: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 29858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 29859: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29860: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 29861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 29862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 29863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29864: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 29865: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 29867: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 29869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 29870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 30037: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 30038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 30039: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 30040: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 30041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 30042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 30043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 30044: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 30045: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 30046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 30047: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 30048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 30049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 30050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 30207: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 30208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 30209: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 30210: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 30211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 30212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 30213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 30214: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 30215: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 30216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 30217: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 30218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 30219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 30220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 30377: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 30378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 30379: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 30380: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 30381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 30382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 30383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 30384: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 30385: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 30386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 30387: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 30388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 30389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 30390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 30564: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 30565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 30566: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 30567: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 30568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 30569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 30570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 30571: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 30572: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 30573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 30574: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 30575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 30576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 30577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 30735: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 30736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 30737: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 30738: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 30739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 30740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 30741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 30742: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 30743: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 30744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 30745: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 30747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 30748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 30905: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 30906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 30907: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 30908: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 30909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 30910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 30911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 30912: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 30913: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 30914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 30915: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 30916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 30917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 30918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 352.55s leader 6, trace 31021: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 31076: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 31077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 31078: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 31079: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 31080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 31081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 31082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 31083: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 31084: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 31085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 31086: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 31087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 31088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 31089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 31263: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 31264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 31265: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 31266: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 31267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 31268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 31269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 31270: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 31271: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 31272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 31273: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 31274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 31275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 31276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Vale killed in action
- 1: Reed killed in action
- 1: Rook incapacitated
- 1: Soren incapacitated
- 1: Ash killed in action
- 1: Dane incapacitated
- 1: Ellis incapacitated
- 1: Tern killed in action
- 1: Iven incapacitated

## Outcome attribution

- 139.75s, evidence 19801: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 142.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20175}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 229.25s, evidence 2678: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26591}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 229.25s, evidence 26487: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.112068 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26591}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 229.25s, evidence 26488: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.112068 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26591}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 290.95s, evidence 3097: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 352.55s, evidence 3491: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
