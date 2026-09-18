# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/30/107/good-ember/battle-107-1789674334809075367`

## Battle summary

**Ember** · 360 s · 412 shots.

### Turning points

- 30.1s, squad 4: contact (events line 278). First recorded contact.
- 53.2s, squad 0: help call ([trace 9647](#trace-9647)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 78 shots, 6/8 lost.
- **1** — FightHere; chose advanced tactically, took cover and returned fire; no completed objective recorded; 8 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 275 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 51 shots, 0/2 lost.

### Decisions and attribution

At 44.9s, squad 0 chose prepared a base of fire ([trace 6291](#trace-6291)), followed by 1 shots and 0 own casualties; estimate 10.4 against 0 distinct squad-reported contacts; At 44.9s, squad 0 chose advanced tactically ([trace 8611](#trace-8611)), followed by 1 shots and 0 own casualties; estimate 10.4 against 0 distinct squad-reported contacts; At 59.8s, squad 0 chose took cover and returned fire ([trace 10914](#trace-10914)), followed by 1 shots and 0 own casualties; estimate 10.2 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1353](#trace-1353)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1374}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1355](#trace-1355)). Following evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749950523025076, 'next_transition': 2015}.

### Communication

198 matched deliveries (mean 0.43s, max 6.05s); 304 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 30.15s, squad 4, contact, evidence events line 278: First recorded contact; .
- 53.20s, squad 0, help call, evidence 9647: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945876515276534, 'next_transition': 833}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945876515276534, 'next_transition': 833}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945876515276534, 'next_transition': 833}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.101711851388423, 'next_transition': 1147}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.101711851388423, 'next_transition': 1147}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.101711851388423, 'next_transition': 1147}.
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
<a id="trace-707"></a>
<a id="trace-709"></a>
<a id="trace-733"></a>
<a id="trace-735"></a>
<a id="trace-837"></a>
<a id="trace-839"></a>
<a id="trace-868"></a>
<a id="trace-870"></a>
<a id="trace-899"></a>
<a id="trace-901"></a>
<a id="trace-922"></a>
<a id="trace-924"></a>
<a id="trace-951"></a>
<a id="trace-953"></a>
<a id="trace-982"></a>
<a id="trace-984"></a>
<a id="trace-1009"></a>
<a id="trace-1011"></a>
<a id="trace-1036"></a>
<a id="trace-1038"></a>
<a id="trace-1053"></a>
<a id="trace-1055"></a>
<a id="trace-1144"></a>
<a id="trace-1146"></a>
<a id="trace-1267"></a>
<a id="trace-1269"></a>
<a id="trace-1290"></a>
<a id="trace-1292"></a>
<a id="trace-1313"></a>
<a id="trace-1315"></a>
<a id="trace-1350"></a>
<a id="trace-1352"></a>
<a id="trace-1378"></a>
<a id="trace-1380"></a>
<a id="trace-1717"></a>
<a id="trace-1719"></a>
<a id="trace-1742"></a>
<a id="trace-1744"></a>
<a id="trace-1778"></a>
<a id="trace-1780"></a>
<a id="trace-1798"></a>
<a id="trace-1800"></a>
<a id="trace-1885"></a>
<a id="trace-1887"></a>
<a id="trace-1923"></a>
<a id="trace-1925"></a>
<a id="trace-1959"></a>
<a id="trace-1961"></a>
<a id="trace-1992"></a>
<a id="trace-1994"></a>
<a id="trace-2011"></a>
<a id="trace-2013"></a>
<a id="trace-2114"></a>
<a id="trace-2116"></a>
<a id="trace-2145"></a>
<a id="trace-2147"></a>
<a id="trace-2175"></a>
<a id="trace-2177"></a>
<a id="trace-2207"></a>
<a id="trace-2209"></a>
<a id="trace-2235"></a>
<a id="trace-2237"></a>
<a id="trace-2329"></a>
<a id="trace-2331"></a>
<a id="trace-2359"></a>
<a id="trace-2361"></a>
<a id="trace-2387"></a>
<a id="trace-2389"></a>
<a id="trace-2424"></a>
<a id="trace-2426"></a>
<a id="trace-2510"></a>
<a id="trace-2512"></a>
<a id="trace-2540"></a>
<a id="trace-2542"></a>
<a id="trace-2569"></a>
<a id="trace-2571"></a>
<a id="trace-2817"></a>
<a id="trace-2819"></a>
<a id="trace-2839"></a>
<a id="trace-2841"></a>
<a id="trace-2866"></a>
<a id="trace-2868"></a>
<a id="trace-2955"></a>
<a id="trace-2957"></a>
<a id="trace-2969"></a>
<a id="trace-2971"></a>
<a id="trace-3010"></a>
<a id="trace-3012"></a>
<a id="trace-3142"></a>
<a id="trace-3144"></a>
<a id="trace-3160"></a>
<a id="trace-3162"></a>
<a id="trace-3174"></a>
<a id="trace-3176"></a>
<a id="trace-3202"></a>
<a id="trace-3204"></a>
<a id="trace-3220"></a>
<a id="trace-3222"></a>
<a id="trace-3238"></a>
<a id="trace-3240"></a>
<a id="trace-3255"></a>
<a id="trace-3257"></a>
<a id="trace-3359"></a>
<a id="trace-3361"></a>
<a id="trace-3370"></a>
<a id="trace-3372"></a>
<a id="trace-3546"></a>
<a id="trace-3548"></a>
<a id="trace-3564"></a>
<a id="trace-3566"></a>
<a id="trace-3600"></a>
<a id="trace-3602"></a>
<a id="trace-3620"></a>
<a id="trace-3622"></a>
<a id="trace-3974"></a>
<a id="trace-3976"></a>
<a id="trace-4434"></a>
<a id="trace-4436"></a>
<a id="trace-4481"></a>
<a id="trace-4483"></a>
<a id="trace-4535"></a>
<a id="trace-4537"></a>
<a id="trace-4653"></a>
<a id="trace-4655"></a>
<a id="trace-4712"></a>
<a id="trace-4714"></a>
<a id="trace-5021"></a>
<a id="trace-5023"></a>
<a id="trace-5049"></a>
<a id="trace-5051"></a>
<a id="trace-5368"></a>
<a id="trace-5370"></a>
<a id="trace-5401"></a>
<a id="trace-5403"></a>
<a id="trace-5741"></a>
<a id="trace-5743"></a>
<a id="trace-5779"></a>
<a id="trace-5781"></a>
<a id="trace-5824"></a>
<a id="trace-5826"></a>
<a id="trace-5865"></a>
<a id="trace-5867"></a>
<a id="trace-5986"></a>
<a id="trace-5988"></a>
<a id="trace-6028"></a>
<a id="trace-6030"></a>
<a id="trace-6063"></a>
<a id="trace-6065"></a>
<a id="trace-6101"></a>
<a id="trace-6103"></a>
<a id="trace-6133"></a>
<a id="trace-6135"></a>
<a id="trace-6149"></a>
<a id="trace-6151"></a>
<a id="trace-6184"></a>
<a id="trace-6186"></a>
<a id="trace-6212"></a>
<a id="trace-6214"></a>
<a id="trace-6240"></a>
<a id="trace-6242"></a>
<a id="trace-6279"></a>
<a id="trace-6281"></a>
<a id="trace-8974"></a>
<a id="trace-8976"></a>
<a id="trace-9006"></a>
<a id="trace-9008"></a>
<a id="trace-9147"></a>
<a id="trace-9149"></a>
<a id="trace-9178"></a>
<a id="trace-9180"></a>
<a id="trace-9204"></a>
<a id="trace-9206"></a>
<a id="trace-9248"></a>
<a id="trace-9250"></a>
<a id="trace-9284"></a>
<a id="trace-9286"></a>
<a id="trace-9312"></a>
<a id="trace-9314"></a>
<a id="trace-9333"></a>
<a id="trace-9335"></a>
<a id="trace-9351"></a>
<a id="trace-9353"></a>
<a id="trace-9446"></a>
<a id="trace-9448"></a>
<a id="trace-9466"></a>
<a id="trace-9468"></a>
<a id="trace-9498"></a>
<a id="trace-9500"></a>
<a id="trace-9520"></a>
<a id="trace-9522"></a>
<a id="trace-9554"></a>
<a id="trace-9556"></a>
<a id="trace-9578"></a>
<a id="trace-9580"></a>
<a id="trace-9664"></a>
<a id="trace-9666"></a>
<a id="trace-9691"></a>
<a id="trace-9693"></a>
<a id="trace-9715"></a>
<a id="trace-9717"></a>
<a id="trace-9742"></a>
<a id="trace-9744"></a>
<a id="trace-9848"></a>
<a id="trace-9850"></a>
<a id="trace-9904"></a>
<a id="trace-9906"></a>
<a id="trace-9974"></a>
<a id="trace-9976"></a>
<a id="trace-10036"></a>
<a id="trace-10038"></a>
<a id="trace-10122"></a>
<a id="trace-10124"></a>
<a id="trace-10205"></a>
<a id="trace-10207"></a>
<a id="trace-10281"></a>
<a id="trace-10283"></a>
<a id="trace-10346"></a>
<a id="trace-10348"></a>
<a id="trace-10564"></a>
<a id="trace-10566"></a>
<a id="trace-10901"></a>
<a id="trace-10903"></a>
<a id="trace-11634"></a>
<a id="trace-11636"></a>
<a id="trace-11705"></a>
<a id="trace-11707"></a>
<a id="trace-11783"></a>
<a id="trace-11785"></a>
<a id="trace-11833"></a>
<a id="trace-11835"></a>
<a id="trace-11881"></a>
<a id="trace-11883"></a>
<a id="trace-11919"></a>
<a id="trace-11921"></a>
<a id="trace-11943"></a>
<a id="trace-11945"></a>
<a id="trace-11964"></a>
<a id="trace-11966"></a>
<a id="trace-11991"></a>
<a id="trace-11993"></a>
<a id="trace-12013"></a>
<a id="trace-12015"></a>
<a id="trace-12107"></a>
<a id="trace-12109"></a>
<a id="trace-12127"></a>
<a id="trace-12129"></a>
<a id="trace-12158"></a>
<a id="trace-12160"></a>
<a id="trace-12177"></a>
<a id="trace-12179"></a>
<a id="trace-14574"></a>
<a id="trace-14576"></a>
<a id="trace-14591"></a>
<a id="trace-14593"></a>
<a id="trace-14614"></a>
<a id="trace-14616"></a>
<a id="trace-14629"></a>
<a id="trace-14631"></a>
<a id="trace-14654"></a>
<a id="trace-14656"></a>
<a id="trace-14671"></a>
<a id="trace-14673"></a>
<a id="trace-14755"></a>
<a id="trace-14757"></a>
<a id="trace-14771"></a>
<a id="trace-14773"></a>
<a id="trace-14791"></a>
<a id="trace-14793"></a>
<a id="trace-14807"></a>
<a id="trace-14809"></a>
<a id="trace-14937"></a>
<a id="trace-14939"></a>
<a id="trace-15292"></a>
<a id="trace-15294"></a>
<a id="trace-15315"></a>
<a id="trace-15317"></a>
<a id="trace-15343"></a>
<a id="trace-15345"></a>
<a id="trace-15379"></a>
<a id="trace-15381"></a>
<a id="trace-15408"></a>
<a id="trace-15410"></a>
<a id="trace-15503"></a>
<a id="trace-15505"></a>
<a id="trace-15519"></a>
<a id="trace-15521"></a>
<a id="trace-15547"></a>
<a id="trace-15549"></a>
<a id="trace-15570"></a>
<a id="trace-15572"></a>
<a id="trace-15596"></a>
<a id="trace-15598"></a>
<a id="trace-15611"></a>
<a id="trace-15613"></a>
<a id="trace-15639"></a>
<a id="trace-15641"></a>
<a id="trace-15654"></a>
<a id="trace-15656"></a>
<a id="trace-15676"></a>
<a id="trace-15678"></a>
<a id="trace-15690"></a>
<a id="trace-15692"></a>
<a id="trace-15774"></a>
<a id="trace-15776"></a>
<a id="trace-15787"></a>
<a id="trace-15789"></a>
<a id="trace-15810"></a>
<a id="trace-15812"></a>
<a id="trace-15837"></a>
<a id="trace-15839"></a>
<a id="trace-15874"></a>
<a id="trace-15876"></a>
<a id="trace-15990"></a>
<a id="trace-15992"></a>
<a id="trace-16041"></a>
<a id="trace-16043"></a>
<a id="trace-16083"></a>
<a id="trace-16085"></a>
<a id="trace-16136"></a>
<a id="trace-16138"></a>
<a id="trace-16170"></a>
<a id="trace-16172"></a>
<a id="trace-16265"></a>
<a id="trace-16267"></a>
<a id="trace-16288"></a>
<a id="trace-16290"></a>
<a id="trace-16316"></a>
<a id="trace-16318"></a>
<a id="trace-16332"></a>
<a id="trace-16334"></a>
<a id="trace-16350"></a>
<a id="trace-16352"></a>
<a id="trace-16479"></a>
<a id="trace-16481"></a>
<a id="trace-16505"></a>
<a id="trace-16507"></a>
<a id="trace-16520"></a>
<a id="trace-16522"></a>
<a id="trace-16580"></a>
<a id="trace-16582"></a>
<a id="trace-16639"></a>
<a id="trace-16641"></a>
<a id="trace-16767"></a>
<a id="trace-16769"></a>
<a id="trace-16820"></a>
<a id="trace-16822"></a>
<a id="trace-16886"></a>
<a id="trace-16888"></a>
<a id="trace-16938"></a>
<a id="trace-16940"></a>
<a id="trace-17181"></a>
<a id="trace-17183"></a>
<a id="trace-17231"></a>
<a id="trace-17233"></a>
<a id="trace-17286"></a>
<a id="trace-17288"></a>
<a id="trace-17322"></a>
<a id="trace-17324"></a>
<a id="trace-17363"></a>
<a id="trace-17365"></a>
<a id="trace-17389"></a>
<a id="trace-17391"></a>
<a id="trace-17666"></a>
<a id="trace-17668"></a>
<a id="trace-17684"></a>
<a id="trace-17686"></a>
<a id="trace-17705"></a>
<a id="trace-17707"></a>
<a id="trace-17724"></a>
<a id="trace-17726"></a>
<a id="trace-17746"></a>
<a id="trace-17748"></a>
<a id="trace-17755"></a>
<a id="trace-17757"></a>
<a id="trace-17780"></a>
<a id="trace-17782"></a>
<a id="trace-17794"></a>
<a id="trace-17796"></a>
<a id="trace-17811"></a>
<a id="trace-17813"></a>
<a id="trace-17824"></a>
<a id="trace-17826"></a>
<a id="trace-17901"></a>
<a id="trace-17903"></a>
<a id="trace-17911"></a>
<a id="trace-17913"></a>
<a id="trace-17928"></a>
<a id="trace-17930"></a>
<a id="trace-17944"></a>
<a id="trace-17946"></a>
<a id="trace-17959"></a>
<a id="trace-17961"></a>
<a id="trace-17970"></a>
<a id="trace-17972"></a>
<a id="trace-17988"></a>
<a id="trace-17990"></a>
<a id="trace-18002"></a>
<a id="trace-18004"></a>
<a id="trace-18020"></a>
<a id="trace-18022"></a>
<a id="trace-18056"></a>
<a id="trace-18058"></a>
<a id="trace-18152"></a>
<a id="trace-18154"></a>
<a id="trace-18182"></a>
<a id="trace-18184"></a>
<a id="trace-18213"></a>
<a id="trace-18215"></a>
<a id="trace-18409"></a>
<a id="trace-18411"></a>
<a id="trace-18436"></a>
<a id="trace-18438"></a>
<a id="trace-18456"></a>
<a id="trace-18458"></a>
<a id="trace-18478"></a>
<a id="trace-18480"></a>
<a id="trace-18497"></a>
<a id="trace-18499"></a>
<a id="trace-18522"></a>
<a id="trace-18524"></a>
<a id="trace-18538"></a>
<a id="trace-18540"></a>
<a id="trace-18620"></a>
<a id="trace-18622"></a>
<a id="trace-18635"></a>
<a id="trace-18637"></a>
<a id="trace-18656"></a>
<a id="trace-18658"></a>
<a id="trace-18672"></a>
<a id="trace-18674"></a>
<a id="trace-18693"></a>
<a id="trace-18695"></a>
<a id="trace-18807"></a>
<a id="trace-18809"></a>
<a id="trace-18831"></a>
<a id="trace-18833"></a>
<a id="trace-18847"></a>
<a id="trace-18849"></a>
<a id="trace-18865"></a>
<a id="trace-18867"></a>
<a id="trace-18882"></a>
<a id="trace-18884"></a>
<a id="trace-18962"></a>
<a id="trace-18964"></a>
<a id="trace-18977"></a>
<a id="trace-18979"></a>
<a id="trace-18998"></a>
<a id="trace-19000"></a>
<a id="trace-19014"></a>
<a id="trace-19016"></a>
<a id="trace-19035"></a>
<a id="trace-19037"></a>
<a id="trace-19048"></a>
<a id="trace-19050"></a>
<a id="trace-19064"></a>
<a id="trace-19066"></a>
<a id="trace-19076"></a>
<a id="trace-19078"></a>
<a id="trace-19099"></a>
<a id="trace-19101"></a>
<a id="trace-19114"></a>
<a id="trace-19116"></a>
<a id="trace-19196"></a>
<a id="trace-19198"></a>
<a id="trace-19211"></a>
<a id="trace-19213"></a>
<a id="trace-19235"></a>
<a id="trace-19237"></a>
<a id="trace-19253"></a>
<a id="trace-19255"></a>
<a id="trace-19273"></a>
<a id="trace-19275"></a>
<a id="trace-19289"></a>
<a id="trace-19291"></a>
<a id="trace-19306"></a>
<a id="trace-19308"></a>
<a id="trace-19323"></a>
<a id="trace-19325"></a>
<a id="trace-19348"></a>
<a id="trace-19350"></a>
<a id="trace-19365"></a>
<a id="trace-19367"></a>
<a id="trace-19446"></a>
<a id="trace-19448"></a>
<a id="trace-19459"></a>
<a id="trace-19461"></a>
<a id="trace-19477"></a>
<a id="trace-19479"></a>
<a id="trace-19492"></a>
<a id="trace-19494"></a>
<a id="trace-19510"></a>
<a id="trace-19512"></a>
<a id="trace-19526"></a>
<a id="trace-19528"></a>
<a id="trace-19549"></a>
<a id="trace-19551"></a>
<a id="trace-19573"></a>
<a id="trace-19575"></a>
<a id="trace-19596"></a>
<a id="trace-19598"></a>
<a id="trace-19610"></a>
<a id="trace-19612"></a>
<a id="trace-19687"></a>
<a id="trace-19689"></a>
<a id="trace-19699"></a>
<a id="trace-19701"></a>
<a id="trace-19723"></a>
<a id="trace-19725"></a>
<a id="trace-19739"></a>
<a id="trace-19741"></a>
<a id="trace-19759"></a>
<a id="trace-19761"></a>
<a id="trace-19778"></a>
<a id="trace-19780"></a>
<a id="trace-19798"></a>
<a id="trace-19800"></a>
<a id="trace-19811"></a>
<a id="trace-19813"></a>
<a id="trace-19829"></a>
<a id="trace-19831"></a>
<a id="trace-19850"></a>
<a id="trace-19852"></a>
<a id="trace-19926"></a>
<a id="trace-19928"></a>
<a id="trace-19939"></a>
<a id="trace-19941"></a>
<a id="trace-19963"></a>
<a id="trace-19965"></a>
<a id="trace-19980"></a>
<a id="trace-19982"></a>
<a id="trace-20000"></a>
<a id="trace-20002"></a>
<a id="trace-20014"></a>
<a id="trace-20016"></a>
<a id="trace-20031"></a>
<a id="trace-20033"></a>
<a id="trace-20048"></a>
<a id="trace-20050"></a>
<a id="trace-20069"></a>
<a id="trace-20071"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
<a id="trace-20157"></a>
<a id="trace-20159"></a>
<a id="trace-20171"></a>
<a id="trace-20173"></a>
<a id="trace-20189"></a>
<a id="trace-20191"></a>
<a id="trace-20199"></a>
<a id="trace-20201"></a>
<a id="trace-20218"></a>
<a id="trace-20220"></a>
<a id="trace-20230"></a>
<a id="trace-20232"></a>
<a id="trace-20250"></a>
<a id="trace-20252"></a>
<a id="trace-20261"></a>
<a id="trace-20263"></a>
<a id="trace-20285"></a>
<a id="trace-20287"></a>
<a id="trace-20299"></a>
<a id="trace-20301"></a>
<a id="trace-20378"></a>
<a id="trace-20380"></a>
<a id="trace-20390"></a>
<a id="trace-20392"></a>
<a id="trace-20414"></a>
<a id="trace-20416"></a>
<a id="trace-20423"></a>
<a id="trace-20425"></a>
<a id="trace-20440"></a>
<a id="trace-20442"></a>
<a id="trace-20450"></a>
<a id="trace-20452"></a>
<a id="trace-20472"></a>
<a id="trace-20474"></a>
<a id="trace-20483"></a>
<a id="trace-20485"></a>
<a id="trace-20509"></a>
<a id="trace-20511"></a>
<a id="trace-20521"></a>
<a id="trace-20523"></a>
<a id="trace-20599"></a>
<a id="trace-20601"></a>
<a id="trace-20615"></a>
<a id="trace-20617"></a>
<a id="trace-20634"></a>
<a id="trace-20636"></a>
<a id="trace-20644"></a>
<a id="trace-20646"></a>
<a id="trace-20657"></a>
<a id="trace-20659"></a>
<a id="trace-20670"></a>
<a id="trace-20672"></a>
<a id="trace-20685"></a>
<a id="trace-20687"></a>
<a id="trace-20695"></a>
<a id="trace-20697"></a>
<a id="trace-20710"></a>
<a id="trace-20712"></a>
<a id="trace-20720"></a>
<a id="trace-20722"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20812"></a>
<a id="trace-20814"></a>
<a id="trace-20831"></a>
<a id="trace-20833"></a>
<a id="trace-20846"></a>
<a id="trace-20848"></a>
<a id="trace-20860"></a>
<a id="trace-20862"></a>
<a id="trace-20868"></a>
<a id="trace-20870"></a>
<a id="trace-20881"></a>
<a id="trace-20883"></a>
<a id="trace-20898"></a>
<a id="trace-20900"></a>
<a id="trace-20918"></a>
<a id="trace-20920"></a>
<a id="trace-20929"></a>
<a id="trace-20931"></a>
<a id="trace-21004"></a>
<a id="trace-21006"></a>
<a id="trace-21015"></a>
<a id="trace-21017"></a>
<a id="trace-21033"></a>
<a id="trace-21035"></a>
<a id="trace-21046"></a>
<a id="trace-21048"></a>
<a id="trace-21067"></a>
<a id="trace-21069"></a>
<a id="trace-21075"></a>
<a id="trace-21077"></a>
<a id="trace-21092"></a>
<a id="trace-21094"></a>
<a id="trace-21106"></a>
<a id="trace-21108"></a>
<a id="trace-21131"></a>
<a id="trace-21133"></a>
<a id="trace-21142"></a>
<a id="trace-21144"></a>
<a id="trace-21216"></a>
<a id="trace-21218"></a>
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21235"></a>
<a id="trace-21237"></a>
<a id="trace-21244"></a>
<a id="trace-21246"></a>
<a id="trace-21257"></a>
<a id="trace-21259"></a>
<a id="trace-21263"></a>
<a id="trace-21265"></a>
<a id="trace-21279"></a>
<a id="trace-21281"></a>
<a id="trace-21293"></a>
<a id="trace-21295"></a>
<a id="trace-21316"></a>
<a id="trace-21318"></a>
<a id="trace-21323"></a>
<a id="trace-21325"></a>
<a id="trace-21398"></a>
<a id="trace-21400"></a>
<a id="trace-21408"></a>
<a id="trace-21410"></a>
<a id="trace-21424"></a>
<a id="trace-21426"></a>
<a id="trace-21434"></a>
<a id="trace-21436"></a>
<a id="trace-21446"></a>
<a id="trace-21448"></a>
<a id="trace-21452"></a>
<a id="trace-21454"></a>
<a id="trace-21463"></a>
<a id="trace-21465"></a>
<a id="trace-21473"></a>
<a id="trace-21475"></a>
<a id="trace-21490"></a>
<a id="trace-21492"></a>
<a id="trace-21500"></a>
<a id="trace-21502"></a>
<a id="trace-21574"></a>
<a id="trace-21576"></a>
<a id="trace-21583"></a>
<a id="trace-21585"></a>
<a id="trace-21601"></a>
<a id="trace-21603"></a>
<a id="trace-21613"></a>
<a id="trace-21615"></a>
<a id="trace-21626"></a>
<a id="trace-21628"></a>
<a id="trace-21630"></a>
<a id="trace-21632"></a>
<a id="trace-21643"></a>
<a id="trace-21645"></a>
<a id="trace-21648"></a>
<a id="trace-21650"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21670"></a>
<a id="trace-21672"></a>
<a id="trace-21741"></a>
<a id="trace-21743"></a>
<a id="trace-21747"></a>
<a id="trace-21749"></a>
<a id="trace-21763"></a>
<a id="trace-21765"></a>
<a id="trace-21771"></a>
<a id="trace-21773"></a>
<a id="trace-21784"></a>
<a id="trace-21786"></a>
<a id="trace-21788"></a>
<a id="trace-21790"></a>
<a id="trace-21800"></a>
<a id="trace-21802"></a>
<a id="trace-21807"></a>
<a id="trace-21809"></a>
<a id="trace-21822"></a>
<a id="trace-21824"></a>
<a id="trace-21827"></a>
<a id="trace-21829"></a>
<a id="trace-21899"></a>
<a id="trace-21901"></a>
<a id="trace-21905"></a>
<a id="trace-21907"></a>
<a id="trace-21922"></a>
<a id="trace-21924"></a>
<a id="trace-21937"></a>
<a id="trace-21939"></a>
<a id="trace-21949"></a>
<a id="trace-21951"></a>
<a id="trace-21953"></a>
<a id="trace-21955"></a>
<a id="trace-21963"></a>
<a id="trace-21965"></a>
<a id="trace-21971"></a>
<a id="trace-21973"></a>
<a id="trace-21984"></a>
<a id="trace-21986"></a>
<a id="trace-21990"></a>
<a id="trace-21992"></a>
<a id="trace-22062"></a>
<a id="trace-22064"></a>
<a id="trace-22067"></a>
<a id="trace-22069"></a>
<a id="trace-22083"></a>
<a id="trace-22085"></a>
<a id="trace-22093"></a>
<a id="trace-22095"></a>
<a id="trace-22106"></a>
<a id="trace-22108"></a>
<a id="trace-22114"></a>
<a id="trace-22116"></a>
<a id="trace-22134"></a>
<a id="trace-22136"></a>
<a id="trace-22141"></a>
<a id="trace-22143"></a>
<a id="trace-22154"></a>
<a id="trace-22156"></a>
<a id="trace-22160"></a>
<a id="trace-22162"></a>
<a id="trace-22232"></a>
<a id="trace-22234"></a>
<a id="trace-22237"></a>
<a id="trace-22239"></a>
<a id="trace-22252"></a>
<a id="trace-22254"></a>
<a id="trace-22259"></a>
<a id="trace-22261"></a>
<a id="trace-22271"></a>
<a id="trace-22273"></a>
<a id="trace-22277"></a>
<a id="trace-22279"></a>
<a id="trace-22291"></a>
<a id="trace-22293"></a>
<a id="trace-22298"></a>
<a id="trace-22300"></a>
<a id="trace-22315"></a>
<a id="trace-22317"></a>
<a id="trace-22321"></a>
<a id="trace-22323"></a>
<a id="trace-22398"></a>
<a id="trace-22400"></a>
<a id="trace-22403"></a>
<a id="trace-22405"></a>
<a id="trace-22418"></a>
<a id="trace-22420"></a>
<a id="trace-22426"></a>
<a id="trace-22428"></a>
<a id="trace-22438"></a>
<a id="trace-22440"></a>
<a id="trace-22442"></a>
<a id="trace-22444"></a>
<a id="trace-22455"></a>
<a id="trace-22457"></a>
<a id="trace-22462"></a>
<a id="trace-22464"></a>
<a id="trace-22477"></a>
<a id="trace-22479"></a>
<a id="trace-22484"></a>
<a id="trace-22486"></a>
<a id="trace-22557"></a>
<a id="trace-22559"></a>
<a id="trace-22562"></a>
<a id="trace-22564"></a>
<a id="trace-22581"></a>
<a id="trace-22583"></a>
<a id="trace-22595"></a>
<a id="trace-22597"></a>
<a id="trace-22605"></a>
<a id="trace-22607"></a>
<a id="trace-22610"></a>
<a id="trace-22612"></a>
<a id="trace-22623"></a>
<a id="trace-22625"></a>
<a id="trace-22629"></a>
<a id="trace-22631"></a>
<a id="trace-22643"></a>
<a id="trace-22645"></a>
<a id="trace-22650"></a>
<a id="trace-22652"></a>
<a id="trace-22721"></a>
<a id="trace-22723"></a>
<a id="trace-22727"></a>
<a id="trace-22729"></a>
<a id="trace-22743"></a>
<a id="trace-22745"></a>
<a id="trace-22752"></a>
<a id="trace-22754"></a>
<a id="trace-22764"></a>
<a id="trace-22766"></a>
<a id="trace-22772"></a>
<a id="trace-22774"></a>
<a id="trace-22791"></a>
<a id="trace-22793"></a>
<a id="trace-22797"></a>
<a id="trace-22799"></a>
<a id="trace-22811"></a>
<a id="trace-22813"></a>
<a id="trace-22816"></a>
<a id="trace-22818"></a>
<a id="trace-22888"></a>
<a id="trace-22890"></a>
<a id="trace-22893"></a>
<a id="trace-22895"></a>
<a id="trace-22907"></a>
<a id="trace-22909"></a>
<a id="trace-22915"></a>
<a id="trace-22917"></a>
<a id="trace-22926"></a>
<a id="trace-22928"></a>
<a id="trace-22931"></a>
<a id="trace-22933"></a>
<a id="trace-22946"></a>
<a id="trace-22948"></a>
<a id="trace-22953"></a>
<a id="trace-22955"></a>
<a id="trace-22971"></a>
<a id="trace-22973"></a>
<a id="trace-22983"></a>
<a id="trace-22985"></a>
<a id="trace-23053"></a>
<a id="trace-23055"></a>
<a id="trace-23058"></a>
<a id="trace-23060"></a>
<a id="trace-23073"></a>
<a id="trace-23075"></a>
<a id="trace-23082"></a>
<a id="trace-23084"></a>
<a id="trace-23092"></a>
<a id="trace-23094"></a>
<a id="trace-23097"></a>
<a id="trace-23099"></a>
<a id="trace-23111"></a>
<a id="trace-23113"></a>
<a id="trace-23116"></a>
<a id="trace-23118"></a>
<a id="trace-23130"></a>
<a id="trace-23132"></a>
<a id="trace-23139"></a>
<a id="trace-23141"></a>
<a id="trace-23210"></a>
<a id="trace-23212"></a>
<a id="trace-23219"></a>
<a id="trace-23221"></a>
<a id="trace-23240"></a>
<a id="trace-23242"></a>
<a id="trace-23259"></a>
<a id="trace-23261"></a>
<a id="trace-23268"></a>
<a id="trace-23270"></a>
<a id="trace-23276"></a>
<a id="trace-23278"></a>
<a id="trace-23289"></a>
<a id="trace-23291"></a>
<a id="trace-23294"></a>
<a id="trace-23296"></a>
<a id="trace-23306"></a>
<a id="trace-23308"></a>
<a id="trace-23312"></a>
<a id="trace-23314"></a>
<a id="trace-23382"></a>
<a id="trace-23384"></a>
<a id="trace-23389"></a>
<a id="trace-23391"></a>
<a id="trace-23406"></a>
<a id="trace-23408"></a>
<a id="trace-23415"></a>
<a id="trace-23417"></a>
<a id="trace-23429"></a>
<a id="trace-23431"></a>
<a id="trace-23434"></a>
<a id="trace-23436"></a>
<a id="trace-23451"></a>
<a id="trace-23453"></a>
<a id="trace-23456"></a>
<a id="trace-23458"></a>
<a id="trace-23469"></a>
<a id="trace-23471"></a>
<a id="trace-23476"></a>
<a id="trace-23478"></a>
<a id="trace-23545"></a>
<a id="trace-23547"></a>
<a id="trace-23550"></a>
<a id="trace-23552"></a>
<a id="trace-23565"></a>
<a id="trace-23567"></a>
<a id="trace-23574"></a>
<a id="trace-23576"></a>
<a id="trace-23586"></a>
<a id="trace-23588"></a>
<a id="trace-23592"></a>
<a id="trace-23594"></a>
<a id="trace-23606"></a>
<a id="trace-23608"></a>
<a id="trace-23611"></a>
<a id="trace-23613"></a>
<a id="trace-23627"></a>
<a id="trace-23629"></a>
<a id="trace-23640"></a>
<a id="trace-23642"></a>
<a id="trace-23707"></a>
<a id="trace-23709"></a>
<a id="trace-23713"></a>
<a id="trace-23715"></a>
<a id="trace-23728"></a>
<a id="trace-23730"></a>
<a id="trace-23736"></a>
<a id="trace-23738"></a>
<a id="trace-23745"></a>
<a id="trace-23747"></a>
<a id="trace-23751"></a>
<a id="trace-23753"></a>
<a id="trace-23763"></a>
<a id="trace-23765"></a>
<a id="trace-23769"></a>
<a id="trace-23771"></a>
<a id="trace-23784"></a>
<a id="trace-23786"></a>
<a id="trace-23792"></a>
<a id="trace-23794"></a>
<a id="trace-23860"></a>
<a id="trace-23862"></a>
<a id="trace-23869"></a>
<a id="trace-23871"></a>
<a id="trace-23889"></a>
<a id="trace-23891"></a>
<a id="trace-23897"></a>
<a id="trace-23899"></a>
<a id="trace-23906"></a>
<a id="trace-23908"></a>
<a id="trace-23910"></a>
<a id="trace-23912"></a>
<a id="trace-23928"></a>
<a id="trace-23930"></a>
<a id="trace-23933"></a>
<a id="trace-23935"></a>
<a id="trace-23947"></a>
<a id="trace-23949"></a>
<a id="trace-23954"></a>
<a id="trace-23956"></a>
<a id="trace-24022"></a>
<a id="trace-24024"></a>
<a id="trace-24028"></a>
<a id="trace-24030"></a>
<a id="trace-24043"></a>
<a id="trace-24045"></a>
<a id="trace-24052"></a>
<a id="trace-24054"></a>
<a id="trace-24065"></a>
<a id="trace-24067"></a>
<a id="trace-24076"></a>
<a id="trace-24078"></a>
<a id="trace-24090"></a>
<a id="trace-24092"></a>
<a id="trace-24095"></a>
<a id="trace-24097"></a>
<a id="trace-24107"></a>
<a id="trace-24109"></a>
<a id="trace-24115"></a>
<a id="trace-24117"></a>
<a id="trace-24182"></a>
<a id="trace-24184"></a>
<a id="trace-24188"></a>
<a id="trace-24190"></a>
<a id="trace-24204"></a>
<a id="trace-24206"></a>
<a id="trace-24211"></a>
<a id="trace-24213"></a>
<a id="trace-24222"></a>
<a id="trace-24224"></a>
<a id="trace-24230"></a>
<a id="trace-24232"></a>
<a id="trace-24242"></a>
<a id="trace-24244"></a>
<a id="trace-24251"></a>
<a id="trace-24253"></a>
<a id="trace-24269"></a>
<a id="trace-24271"></a>
<a id="trace-24276"></a>
<a id="trace-24278"></a>
<a id="trace-24344"></a>
<a id="trace-24346"></a>
<a id="trace-24350"></a>
<a id="trace-24352"></a>
<a id="trace-24365"></a>
<a id="trace-24367"></a>
<a id="trace-24372"></a>
<a id="trace-24374"></a>
<a id="trace-24389"></a>
<a id="trace-24391"></a>
<a id="trace-24394"></a>
<a id="trace-24396"></a>
<a id="trace-24406"></a>
<a id="trace-24408"></a>
<a id="trace-24413"></a>
<a id="trace-24415"></a>
<a id="trace-24429"></a>
<a id="trace-24431"></a>
<a id="trace-24436"></a>
<a id="trace-24438"></a>
<a id="trace-24563"></a>
<a id="trace-24565"></a>
<a id="trace-24573"></a>
<a id="trace-24575"></a>
<a id="trace-24594"></a>
<a id="trace-24596"></a>
<a id="trace-24604"></a>
<a id="trace-24606"></a>
<a id="trace-24673"></a>
<a id="trace-24675"></a>
<a id="trace-24680"></a>
<a id="trace-24682"></a>
<a id="trace-24695"></a>
<a id="trace-24697"></a>
<a id="trace-24700"></a>
<a id="trace-24702"></a>
<a id="trace-24715"></a>
<a id="trace-24717"></a>
<a id="trace-24722"></a>
<a id="trace-24724"></a>
<a id="trace-24794"></a>
<a id="trace-24796"></a>
<a id="trace-24801"></a>
<a id="trace-24803"></a>
<a id="trace-24819"></a>
<a id="trace-24821"></a>
<a id="trace-24825"></a>
<a id="trace-24827"></a>
<a id="trace-24843"></a>
<a id="trace-24845"></a>
<a id="trace-24855"></a>
<a id="trace-24857"></a>
<a id="trace-24868"></a>
<a id="trace-24870"></a>
<a id="trace-24874"></a>
<a id="trace-24876"></a>
<a id="trace-24887"></a>
<a id="trace-24889"></a>
<a id="trace-24893"></a>
<a id="trace-24895"></a>
<a id="trace-24960"></a>
<a id="trace-24962"></a>
<a id="trace-24967"></a>
<a id="trace-24969"></a>
<a id="trace-24980"></a>
<a id="trace-24982"></a>
<a id="trace-24987"></a>
<a id="trace-24989"></a>
<a id="trace-25001"></a>
<a id="trace-25003"></a>
<a id="trace-25008"></a>
<a id="trace-25010"></a>
<a id="trace-25018"></a>
<a id="trace-25020"></a>
<a id="trace-25027"></a>
<a id="trace-25029"></a>
<a id="trace-25046"></a>
<a id="trace-25048"></a>
<a id="trace-25052"></a>
<a id="trace-25054"></a>
<a id="trace-25121"></a>
<a id="trace-25123"></a>
<a id="trace-25126"></a>
<a id="trace-25128"></a>
<a id="trace-25141"></a>
<a id="trace-25143"></a>
<a id="trace-25147"></a>
<a id="trace-25149"></a>
<a id="trace-25160"></a>
<a id="trace-25162"></a>
<a id="trace-25166"></a>
<a id="trace-25168"></a>
<a id="trace-25177"></a>
<a id="trace-25179"></a>
<a id="trace-25183"></a>
<a id="trace-25185"></a>
<a id="trace-25198"></a>
<a id="trace-25200"></a>
<a id="trace-25205"></a>
<a id="trace-25207"></a>
<a id="trace-25277"></a>
<a id="trace-25279"></a>
<a id="trace-25289"></a>
<a id="trace-25291"></a>
<a id="trace-25303"></a>
<a id="trace-25305"></a>
<a id="trace-25309"></a>
<a id="trace-25311"></a>
<a id="trace-25321"></a>
<a id="trace-25323"></a>
<a id="trace-25328"></a>
<a id="trace-25330"></a>
<a id="trace-25338"></a>
<a id="trace-25340"></a>
<a id="trace-25344"></a>
<a id="trace-25346"></a>
<a id="trace-25359"></a>
<a id="trace-25361"></a>
<a id="trace-25364"></a>
<a id="trace-25366"></a>
<a id="trace-25433"></a>
<a id="trace-25435"></a>
<a id="trace-25442"></a>
<a id="trace-25444"></a>
<a id="trace-25457"></a>
<a id="trace-25459"></a>
<a id="trace-25467"></a>
<a id="trace-25469"></a>
<a id="trace-25485"></a>
<a id="trace-25487"></a>
<a id="trace-25491"></a>
<a id="trace-25493"></a>
<a id="trace-25501"></a>
<a id="trace-25503"></a>
<a id="trace-25507"></a>
<a id="trace-25509"></a>
<a id="trace-25522"></a>
<a id="trace-25524"></a>
<a id="trace-25527"></a>
<a id="trace-25529"></a>
<a id="trace-25596"></a>
<a id="trace-25598"></a>
<a id="trace-25602"></a>
<a id="trace-25604"></a>
<a id="trace-25616"></a>
<a id="trace-25618"></a>
<a id="trace-25624"></a>
<a id="trace-25626"></a>
<a id="trace-25639"></a>
<a id="trace-25641"></a>
<a id="trace-25645"></a>
<a id="trace-25647"></a>
<a id="trace-25659"></a>
<a id="trace-25661"></a>
<a id="trace-25665"></a>
<a id="trace-25667"></a>
<a id="trace-25684"></a>
<a id="trace-25686"></a>
<a id="trace-25689"></a>
<a id="trace-25691"></a>
<a id="trace-25758"></a>
<a id="trace-25760"></a>
<a id="trace-25765"></a>
<a id="trace-25767"></a>
<a id="trace-25778"></a>
<a id="trace-25780"></a>
<a id="trace-25784"></a>
<a id="trace-25786"></a>
<a id="trace-25797"></a>
<a id="trace-25799"></a>
<a id="trace-25803"></a>
<a id="trace-25805"></a>
<a id="trace-25815"></a>
<a id="trace-25817"></a>
<a id="trace-25822"></a>
<a id="trace-25824"></a>
<a id="trace-25837"></a>
<a id="trace-25839"></a>
<a id="trace-25842"></a>
<a id="trace-25844"></a>
<a id="trace-25915"></a>
<a id="trace-25917"></a>
<a id="trace-25928"></a>
<a id="trace-25930"></a>
<a id="trace-25940"></a>
<a id="trace-25942"></a>
<a id="trace-25947"></a>
<a id="trace-25949"></a>
<a id="trace-25960"></a>
<a id="trace-25962"></a>
<a id="trace-25965"></a>
<a id="trace-25967"></a>
<a id="trace-25975"></a>
<a id="trace-25977"></a>
<a id="trace-25982"></a>
<a id="trace-25984"></a>
<a id="trace-25995"></a>
<a id="trace-25997"></a>
<a id="trace-26001"></a>
<a id="trace-26003"></a>
<a id="trace-26072"></a>
<a id="trace-26074"></a>
<a id="trace-26080"></a>
<a id="trace-26082"></a>
<a id="trace-26094"></a>
<a id="trace-26096"></a>
<a id="trace-26104"></a>
<a id="trace-26106"></a>
<a id="trace-26123"></a>
<a id="trace-26125"></a>
<a id="trace-26128"></a>
<a id="trace-26130"></a>
<a id="trace-26139"></a>
<a id="trace-26141"></a>
<a id="trace-26144"></a>
<a id="trace-26146"></a>
<a id="trace-26159"></a>
<a id="trace-26161"></a>
<a id="trace-26164"></a>
<a id="trace-26166"></a>
<a id="trace-26234"></a>
<a id="trace-26236"></a>
<a id="trace-26241"></a>
<a id="trace-26243"></a>
<a id="trace-26255"></a>
<a id="trace-26257"></a>
<a id="trace-26262"></a>
<a id="trace-26264"></a>
<a id="trace-26277"></a>
<a id="trace-26279"></a>
<a id="trace-26283"></a>
<a id="trace-26285"></a>
<a id="trace-26296"></a>
<a id="trace-26298"></a>
<a id="trace-26308"></a>
<a id="trace-26310"></a>
<a id="trace-26321"></a>
<a id="trace-26323"></a>
<a id="trace-26326"></a>
<a id="trace-26328"></a>
<a id="trace-26395"></a>
<a id="trace-26397"></a>
<a id="trace-26403"></a>
<a id="trace-26405"></a>
<a id="trace-26416"></a>
<a id="trace-26418"></a>
<a id="trace-26423"></a>
<a id="trace-26425"></a>
<a id="trace-26436"></a>
<a id="trace-26438"></a>
<a id="trace-26440"></a>
<a id="trace-26442"></a>
<a id="trace-26451"></a>
<a id="trace-26453"></a>
<a id="trace-26460"></a>
<a id="trace-26462"></a>
<a id="trace-26481"></a>
<a id="trace-26483"></a>
<a id="trace-26554"></a>
<a id="trace-26556"></a>
<a id="trace-26561"></a>
<a id="trace-26563"></a>
<a id="trace-26574"></a>
<a id="trace-26576"></a>
<a id="trace-26581"></a>
<a id="trace-26583"></a>
<a id="trace-26595"></a>
<a id="trace-26597"></a>
<a id="trace-26599"></a>
<a id="trace-26601"></a>
<a id="trace-26609"></a>
<a id="trace-26611"></a>
<a id="trace-26615"></a>
<a id="trace-26617"></a>
<a id="trace-26629"></a>
<a id="trace-26631"></a>
<a id="trace-26636"></a>
<a id="trace-26638"></a>
<a id="trace-26707"></a>
<a id="trace-26709"></a>
<a id="trace-26714"></a>
<a id="trace-26716"></a>
<a id="trace-26735"></a>
<a id="trace-26737"></a>
<a id="trace-26742"></a>
<a id="trace-26744"></a>
<a id="trace-26761"></a>
<a id="trace-26763"></a>
<a id="trace-26765"></a>
<a id="trace-26767"></a>
<a id="trace-26776"></a>
<a id="trace-26778"></a>
<a id="trace-26783"></a>
<a id="trace-26785"></a>
<a id="trace-26796"></a>
<a id="trace-26798"></a>
<a id="trace-26801"></a>
<a id="trace-26803"></a>
<a id="trace-26871"></a>
<a id="trace-26873"></a>
<a id="trace-26890"></a>
<a id="trace-26892"></a>
<a id="trace-26898"></a>
<a id="trace-26900"></a>
<a id="trace-26916"></a>
<a id="trace-26918"></a>
<a id="trace-26920"></a>
<a id="trace-26922"></a>
<a id="trace-26934"></a>
<a id="trace-26936"></a>
<a id="trace-26947"></a>
<a id="trace-26949"></a>
<a id="trace-26959"></a>
<a id="trace-26961"></a>
<a id="trace-26965"></a>
<a id="trace-26967"></a>
<a id="trace-27034"></a>
<a id="trace-27036"></a>
<a id="trace-27040"></a>
<a id="trace-27042"></a>
<a id="trace-27052"></a>
<a id="trace-27054"></a>
<a id="trace-27060"></a>
<a id="trace-27062"></a>
<a id="trace-27073"></a>
<a id="trace-27075"></a>
<a id="trace-27078"></a>
<a id="trace-27080"></a>
<a id="trace-27091"></a>
<a id="trace-27093"></a>
<a id="trace-27099"></a>
<a id="trace-27101"></a>
<a id="trace-27111"></a>
<a id="trace-27113"></a>
<a id="trace-27120"></a>
<a id="trace-27122"></a>
<a id="trace-27195"></a>
<a id="trace-27197"></a>
<a id="trace-27213"></a>
<a id="trace-27215"></a>
<a id="trace-27219"></a>
<a id="trace-27221"></a>
<a id="trace-27232"></a>
<a id="trace-27234"></a>
<a id="trace-27236"></a>
<a id="trace-27238"></a>
<a id="trace-27248"></a>
<a id="trace-27250"></a>
<a id="trace-27255"></a>
<a id="trace-27257"></a>
<a id="trace-27268"></a>
<a id="trace-27270"></a>
<a id="trace-27274"></a>
<a id="trace-27276"></a>
<a id="trace-27346"></a>
<a id="trace-27348"></a>
<a id="trace-27353"></a>
<a id="trace-27355"></a>
<a id="trace-27369"></a>
<a id="trace-27371"></a>
<a id="trace-27382"></a>
<a id="trace-27384"></a>
<a id="trace-27395"></a>
<a id="trace-27397"></a>
<a id="trace-27399"></a>
<a id="trace-27401"></a>
<a id="trace-27410"></a>
<a id="trace-27412"></a>
<a id="trace-27418"></a>
<a id="trace-27420"></a>
<a id="trace-27429"></a>
<a id="trace-27431"></a>
<a id="trace-27435"></a>
<a id="trace-27437"></a>
<a id="trace-27506"></a>
<a id="trace-27508"></a>
<a id="trace-27511"></a>
<a id="trace-27513"></a>
<a id="trace-27525"></a>
<a id="trace-27527"></a>
<a id="trace-27535"></a>
<a id="trace-27537"></a>
<a id="trace-27553"></a>
<a id="trace-27555"></a>
<a id="trace-27569"></a>
<a id="trace-27571"></a>
<a id="trace-27576"></a>
<a id="trace-27578"></a>
<a id="trace-27588"></a>
<a id="trace-27590"></a>
<a id="trace-27594"></a>
<a id="trace-27596"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5000667449960734, 'next_transition': 608}.
<a id="trace-833"></a>
<a id="trace-835"></a>
<a id="trace-918"></a>
<a id="trace-920"></a>
<a id="trace-947"></a>
<a id="trace-949"></a>
<a id="trace-978"></a>
<a id="trace-980"></a>
<a id="trace-1005"></a>
<a id="trace-1007"></a>
<a id="trace-1049"></a>
<a id="trace-1051"></a>
<a id="trace-1140"></a>
<a id="trace-1142"></a>
<a id="trace-1263"></a>
<a id="trace-1265"></a>
<a id="trace-1286"></a>
<a id="trace-1288"></a>
<a id="trace-1309"></a>
<a id="trace-1311"></a>
<a id="trace-1346"></a>
<a id="trace-1348"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 833): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.680451125359562, 'next_transition': 918}.
<a id="trace-1147"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1147): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.565315067689195, 'next_transition': 138}.
<a id="trace-137"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 137): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1374}.
<a id="trace-138"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 138): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749950523025076, 'next_transition': 2015}.
<a id="trace-1353"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1353): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1353. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1374}.
<a id="trace-1354"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1354): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1354. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1374}.
<a id="trace-1355"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1355): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1355. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749950523025076, 'next_transition': 2015}.
<a id="trace-1356"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1356): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1356. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.749950523025076, 'next_transition': 2015}.
<a id="trace-1374"></a>
<a id="trace-1376"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1374): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1356. Next observer evidence: None.
<a id="trace-1384"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1384): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1061. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724913369205297, 'next_transition': 1713}.
<a id="trace-1713"></a>
<a id="trace-1715"></a>
<a id="trace-1738"></a>
<a id="trace-1740"></a>
<a id="trace-1881"></a>
<a id="trace-1883"></a>
<a id="trace-1955"></a>
<a id="trace-1957"></a>
<a id="trace-2110"></a>
<a id="trace-2112"></a>
<a id="trace-2171"></a>
<a id="trace-2173"></a>
<a id="trace-2203"></a>
<a id="trace-2205"></a>
<a id="trace-2231"></a>
<a id="trace-2233"></a>
<a id="trace-2325"></a>
<a id="trace-2327"></a>
<a id="trace-2355"></a>
<a id="trace-2357"></a>
<a id="trace-2420"></a>
<a id="trace-2422"></a>
<a id="trace-2506"></a>
<a id="trace-2508"></a>
<a id="trace-2536"></a>
<a id="trace-2538"></a>
<a id="trace-2565"></a>
<a id="trace-2567"></a>
- 13.20s–23.25s (×28), actor 5, squad 0 (trace 1713): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1356. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134503821725479, 'next_transition': 1738}.
<a id="trace-2015"></a>
- 17.30s–17.30s (×1), actor 8, squad 1 (trace 2015): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1818. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.078262857379361, 'next_transition': 2441}.
<a id="trace-2016"></a>
- 17.30s–17.30s (×1), actor 8, squad 1 (trace 2016): received platoon directive. Knowledge: actor memory at 15.00s, trace 1818. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.078262857379361, 'next_transition': 2441}.
<a id="trace-2441"></a>
- 22.20s–22.20s (×1), actor 8, squad 1 (trace 2441): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 2254. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.755760174018836, 'next_transition': 3020}.
<a id="trace-2573"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2573): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2246. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748002603504963, 'next_transition': 2813}.
<a id="trace-2574"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2574): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2246. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748002603504963, 'next_transition': 2813}.
<a id="trace-2813"></a>
<a id="trace-2815"></a>
<a id="trace-2835"></a>
<a id="trace-2837"></a>
<a id="trace-2951"></a>
<a id="trace-2953"></a>
<a id="trace-2965"></a>
<a id="trace-2967"></a>
<a id="trace-3006"></a>
<a id="trace-3008"></a>
<a id="trace-3138"></a>
<a id="trace-3140"></a>
<a id="trace-3156"></a>
<a id="trace-3158"></a>
<a id="trace-3170"></a>
<a id="trace-3172"></a>
<a id="trace-3198"></a>
<a id="trace-3200"></a>
<a id="trace-3216"></a>
<a id="trace-3218"></a>
<a id="trace-3355"></a>
<a id="trace-3357"></a>
- 23.75s–30.25s (×22), actor 5, squad 0 (trace 2813): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2251. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49220325812731547, 'next_transition': 2835}.
<a id="trace-3020"></a>
- 26.40s–26.40s (×1), actor 8, squad 1 (trace 3020): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 2884. Next observer evidence: {'until': 33, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.849578220277509, 'next_transition': 3627}.
<a id="trace-3373"></a>
- 30.75s–30.75s (×1), actor 0, squad 0 (trace 3373): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3264. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.507860674768281, 'next_transition': 3616}.
<a id="trace-3616"></a>
<a id="trace-3618"></a>
<a id="trace-4430"></a>
<a id="trace-4432"></a>
<a id="trace-4649"></a>
<a id="trace-4651"></a>
<a id="trace-4708"></a>
<a id="trace-4710"></a>
- 32.75s–35.75s (×8), actor 5, squad 0 (trace 3616): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3269. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237567134493515, 'next_transition': 4430}.
<a id="trace-3627"></a>
- 33.00s–33.00s (×1), actor 8, squad 1 (trace 3627): matching received arrivals: deployment leg complete. Knowledge: actor memory at 30.00s, trace 3272. Next observer evidence: None.
<a id="trace-3634"></a>
- 33.10s–33.10s (×1), actor 8, squad 1 (trace 3634): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 3272. Next observer evidence: None.
<a id="trace-3637"></a>
- 33.10s–33.10s (×1), actor 8, squad 1 (trace 3637): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 3272. Next observer evidence: None.
<a id="trace-3638"></a>
- 33.10s–33.10s (×1), actor 8, squad 1 (trace 3638): bounding overwatch. Knowledge: actor memory at 30.00s, trace 3272. Next observer evidence: None.
<a id="trace-3639"></a>
- 33.10s–33.10s (×1), actor 8, squad 1 (trace 3639): Reorganise complete: known contact. Knowledge: actor memory at 30.00s, trace 3272. Next observer evidence: None.
<a id="trace-3749"></a>
<a id="trace-3856"></a>
<a id="trace-3977"></a>
<a id="trace-4084"></a>
<a id="trace-4192"></a>
<a id="trace-4308"></a>
- 33.15s–33.55s (×6), actor 8, squad 1 (trace 3749): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 3272. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3856}.
<a id="trace-4731"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 4731): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4558. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1920316737946686, 'next_transition': 5017}.
<a id="trace-4732"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 4732): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4558. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1920316737946686, 'next_transition': 5017}.
<a id="trace-4733"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 4733): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4558. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1920316737946686, 'next_transition': 5017}.
<a id="trace-5017"></a>
<a id="trace-5019"></a>
<a id="trace-5045"></a>
<a id="trace-5047"></a>
- 36.25s–36.75s (×4), actor 5, squad 0 (trace 5017): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4563. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3863652351960019, 'next_transition': 5045}.
<a id="trace-5061"></a>
- 36.90s–36.90s (×1), actor 8, squad 1 (trace 5061): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 4566. Next observer evidence: {'until': 45.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 3.3263717224026546, 'next_transition': 9016}.
<a id="trace-5063"></a>
- 36.90s–36.90s (×1), actor 8, squad 1 (trace 5063): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 35.00s, trace 4566. Next observer evidence: {'until': 45.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 3.3263717224026546, 'next_transition': 9016}.
<a id="trace-5068"></a>
- 37.10s–37.10s (×1), actor 0, squad 0 (trace 5068): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4558. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3478219071876847, 'next_transition': 5364}.
<a id="trace-5364"></a>
<a id="trace-5366"></a>
<a id="trace-5397"></a>
<a id="trace-5399"></a>
- 37.25s–37.75s (×4), actor 5, squad 0 (trace 5364): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4563. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6190711858972194, 'next_transition': 5397}.
<a id="trace-5417"></a>
- 38.10s–38.10s (×1), actor 0, squad 0 (trace 5417): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 4558. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5697245011187425, 'next_transition': 5775}.
<a id="trace-5775"></a>
<a id="trace-5777"></a>
<a id="trace-5820"></a>
<a id="trace-5822"></a>
<a id="trace-5861"></a>
<a id="trace-5863"></a>
<a id="trace-5982"></a>
<a id="trace-5984"></a>
<a id="trace-6024"></a>
<a id="trace-6026"></a>
<a id="trace-6059"></a>
<a id="trace-6061"></a>
- 38.75s–41.25s (×12), actor 5, squad 0 (trace 5775): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4563. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5812686759907348, 'next_transition': 5820}.
<a id="trace-6106"></a>
- 41.80s–41.80s (×1), actor 0, squad 0 (trace 6106): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 5890. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.140205177092513, 'next_transition': 6129}.
<a id="trace-6129"></a>
<a id="trace-6131"></a>
<a id="trace-6145"></a>
<a id="trace-6147"></a>
<a id="trace-6180"></a>
<a id="trace-6182"></a>
<a id="trace-6275"></a>
<a id="trace-6277"></a>
- 42.25s–44.75s (×8), actor 5, squad 0 (trace 6129): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5895. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12534090714178278, 'next_transition': 6145}.
<a id="trace-6291"></a>
- 44.90s–44.90s (×1), actor 0, squad 0 (trace 6291): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 5890. Next observer evidence: {'until': 45.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11340031484193513, 'next_transition': 8970}.
<a id="trace-8610"></a>
- 44.90s–44.90s (×1), actor 0, squad 0 (trace 8610): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 5890. Next observer evidence: {'until': 45.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11340031484193513, 'next_transition': 8970}.
<a id="trace-8611"></a>
- 44.90s–44.90s (×1), actor 0, squad 0 (trace 8611): MoveTactically. Knowledge: actor memory at 40.00s, trace 5890. Next observer evidence: {'until': 45.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11340031484193513, 'next_transition': 8970}.
<a id="trace-8612"></a>
- 44.90s–44.90s (×1), actor 0, squad 0 (trace 8612): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 5890. Next observer evidence: {'until': 45.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11340031484193513, 'next_transition': 8970}.
<a id="trace-8970"></a>
<a id="trace-8972"></a>
<a id="trace-9002"></a>
<a id="trace-9004"></a>
<a id="trace-9143"></a>
<a id="trace-9145"></a>
<a id="trace-9174"></a>
<a id="trace-9176"></a>
<a id="trace-9200"></a>
<a id="trace-9202"></a>
<a id="trace-9308"></a>
<a id="trace-9310"></a>
<a id="trace-9329"></a>
<a id="trace-9331"></a>
<a id="trace-9347"></a>
<a id="trace-9349"></a>
<a id="trace-9442"></a>
<a id="trace-9444"></a>
<a id="trace-9462"></a>
<a id="trace-9464"></a>
<a id="trace-9494"></a>
<a id="trace-9496"></a>
<a id="trace-9516"></a>
<a id="trace-9518"></a>
<a id="trace-9550"></a>
<a id="trace-9552"></a>
<a id="trace-9574"></a>
<a id="trace-9576"></a>
- 45.25s–52.75s (×28), actor 5, squad 0 (trace 8970): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 8894. Next observer evidence: {'until': 45.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1084835622989147, 'next_transition': 9002}.
<a id="trace-9016"></a>
- 45.85s–45.85s (×1), actor 8, squad 1 (trace 9016): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 8897. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.2731283372548035, 'next_transition': 9322}.
<a id="trace-9322"></a>
- 49.20s–49.20s (×1), actor 8, squad 1 (trace 9322): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 8897. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3001296031065204, 'next_transition': 9541}.
<a id="trace-9541"></a>
- 52.20s–52.20s (×1), actor 8, squad 1 (trace 9541): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 50.00s, trace 9370. Next observer evidence: {'until': 53, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8694243632427148, 'next_transition': 9592}.
<a id="trace-9592"></a>
- 53.10s–53.10s (×1), actor 8, squad 1 (trace 9592): MoveTactically. Knowledge: actor memory at 50.00s, trace 9370. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3581672925463744, 'next_transition': 872}.
<a id="trace-9593"></a>
- 53.10s–53.10s (×1), actor 8, squad 1 (trace 9593): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 50.00s, trace 9370. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3581672925463744, 'next_transition': 872}.
<a id="trace-9647"></a>
- 53.20s–53.20s (×1), actor 0, squad 0 (trace 9647): NeedSupport. Knowledge: actor memory at 50.00s, trace 9362. Next observer evidence: None.
<a id="trace-9660"></a>
<a id="trace-9662"></a>
- 53.25s–53.25s (×2), actor 5, squad 0 (trace 9660): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 9367. Next observer evidence: {'until': 53.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7875257687517946, 'next_transition': 871}.
<a id="trace-871"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (events line 871): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-872"></a>
- 53.65s–53.65s (×1), actor 5, squad 1 (events line 872): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9679"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 9679): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.612302 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 9679. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812370685659646, 'next_transition': 9711}.
<a id="trace-9680"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 9680): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.612302 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 9680. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812370685659646, 'next_transition': 9711}.
<a id="trace-9681"></a>
- 53.65s–53.65s (×1), actor 5, squad 1 (trace 9681): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.612302 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 9681. Next observer evidence: {'until': 58.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.446893983367942, 'next_transition': 10374}.
<a id="trace-9682"></a>
- 53.65s–53.65s (×1), actor 5, squad 1 (trace 9682): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.612302 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 9682. Next observer evidence: {'until': 58.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.446893983367942, 'next_transition': 10374}.
<a id="trace-9711"></a>
<a id="trace-9713"></a>
<a id="trace-9738"></a>
<a id="trace-9740"></a>
<a id="trace-9844"></a>
<a id="trace-9846"></a>
<a id="trace-9900"></a>
<a id="trace-9902"></a>
<a id="trace-9970"></a>
<a id="trace-9972"></a>
<a id="trace-10118"></a>
<a id="trace-10120"></a>
<a id="trace-10201"></a>
<a id="trace-10203"></a>
<a id="trace-10277"></a>
<a id="trace-10279"></a>
<a id="trace-10342"></a>
<a id="trace-10344"></a>
- 54.25s–58.75s (×18), actor 5, squad 0 (trace 9711): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.65s, trace 9682. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7874996488294934, 'next_transition': 9738}.
<a id="trace-10374"></a>
- 58.95s–58.95s (×1), actor 8, squad 1 (trace 10374): received platoon directive. Knowledge: actor memory at 55.00s, trace 9765. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40881211568549436, 'next_transition': 10452}.
<a id="trace-10452"></a>
- 59.20s–59.20s (×1), actor 8, squad 1 (trace 10452): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 9765. Next observer evidence: {'until': 62.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.890100823362439, 'next_transition': 11900}.
<a id="trace-10453"></a>
- 59.20s–59.20s (×1), actor 8, squad 1 (trace 10453): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 9765. Next observer evidence: {'until': 62.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.890100823362439, 'next_transition': 11900}.
<a id="trace-10574"></a>
- 59.30s–59.30s (×1), actor 0, squad 0 (trace 10574): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 9757. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2260978016373264, 'next_transition': 10897}.
<a id="trace-10897"></a>
<a id="trace-10899"></a>
- 59.75s–59.75s (×2), actor 5, squad 0 (trace 10897): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 9762. Next observer evidence: None.
<a id="trace-10914"></a>
- 59.80s–59.80s (×1), actor 0, squad 0 (trace 10914): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 9757. Next observer evidence: {'until': 60.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1892963801349932, 'next_transition': 11630}.
<a id="trace-10915"></a>
- 59.80s–59.80s (×1), actor 0, squad 0 (trace 10915): received platoon directive. Knowledge: actor memory at 55.00s, trace 9757. Next observer evidence: {'until': 60.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1892963801349932, 'next_transition': 11630}.
<a id="trace-11630"></a>
<a id="trace-11632"></a>
<a id="trace-11779"></a>
<a id="trace-11781"></a>
<a id="trace-11829"></a>
<a id="trace-11831"></a>
<a id="trace-11877"></a>
<a id="trace-11879"></a>
<a id="trace-11915"></a>
<a id="trace-11917"></a>
<a id="trace-11939"></a>
<a id="trace-11941"></a>
<a id="trace-11960"></a>
<a id="trace-11962"></a>
<a id="trace-11987"></a>
<a id="trace-11989"></a>
- 60.25s–64.25s (×16), actor 5, squad 0 (trace 11630): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11527. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1131844702716636, 'next_transition': 11779}.
<a id="trace-11900"></a>
- 62.55s–62.55s (×1), actor 8, squad 1 (trace 11900): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 11530. Next observer evidence: {'until': 65.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.6059776745842456, 'next_transition': 12135}.
<a id="trace-12004"></a>
- 64.65s–64.65s (×1), actor 1, squad 0 (trace 12004): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 11523. Next observer evidence: None.
<a id="trace-12009"></a>
<a id="trace-12011"></a>
<a id="trace-12103"></a>
<a id="trace-12105"></a>
<a id="trace-12123"></a>
<a id="trace-12125"></a>
<a id="trace-12154"></a>
<a id="trace-12156"></a>
<a id="trace-12173"></a>
<a id="trace-12175"></a>
- 64.75s–66.75s (×10), actor 5, squad 0 (trace 12009): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11527. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6976444988690879, 'next_transition': 12103}.
<a id="trace-12135"></a>
- 65.90s–65.90s (×1), actor 8, squad 1 (trace 12135): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 65.00s, trace 12037. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.413537832126639, 'next_transition': 12163}.
<a id="trace-12163"></a>
- 66.25s–66.25s (×1), actor 8, squad 1 (trace 12163): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 65.00s, trace 12037. Next observer evidence: {'until': 72, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.26468334538652, 'next_transition': 14819}.
<a id="trace-12187"></a>
- 67.10s–67.10s (×1), actor 1, squad 0 (trace 12187): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 12030. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000023321965248, 'next_transition': 14570}.
<a id="trace-14333"></a>
- 67.10s–67.10s (×1), actor 1, squad 0 (trace 14333): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 65.00s, trace 12030. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000023321965248, 'next_transition': 14570}.
<a id="trace-14334"></a>
- 67.10s–67.10s (×1), actor 1, squad 0 (trace 14334): MoveTactically. Knowledge: actor memory at 65.00s, trace 12030. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000023321965248, 'next_transition': 14570}.
<a id="trace-14335"></a>
- 67.10s–67.10s (×1), actor 1, squad 0 (trace 14335): contact cover complete: assessment resumes closure. Knowledge: actor memory at 65.00s, trace 12030. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000023321965248, 'next_transition': 14570}.
<a id="trace-14559"></a>
- 67.10s–67.10s (×1), actor 1, squad 0 (trace 14559): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 65.00s, trace 12030. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000023321965248, 'next_transition': 14570}.
<a id="trace-14570"></a>
<a id="trace-14572"></a>
<a id="trace-14587"></a>
<a id="trace-14589"></a>
<a id="trace-14612"></a>
<a id="trace-14627"></a>
<a id="trace-14652"></a>
<a id="trace-14669"></a>
<a id="trace-14753"></a>
<a id="trace-14769"></a>
<a id="trace-14789"></a>
<a id="trace-14803"></a>
<a id="trace-14805"></a>
- 67.25s–71.75s (×13), actor 5, squad 0 (trace 14570): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 12034. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1800004540243707, 'next_transition': 14587}.
<a id="trace-14816"></a>
- 71.95s–71.95s (×1), actor 1, squad 0 (trace 14816): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 70.00s, trace 14678. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28132835118953375, 'next_transition': 14933}.
<a id="trace-14819"></a>
- 72.15s–72.15s (×1), actor 8, squad 1 (trace 14819): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 70.00s, trace 14685. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6543604071916332, 'next_transition': 15554}.
<a id="trace-14933"></a>
<a id="trace-14935"></a>
- 72.25s–72.25s (×2), actor 5, squad 0 (trace 14933): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 14682. Next observer evidence: {'until': 72.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35080236335189224, 'next_transition': 14948}.
<a id="trace-14948"></a>
- 72.65s–72.65s (×1), actor 1, squad 0 (trace 14948): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 14678. Next observer evidence: {'until': 73.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4059132292021763, 'next_transition': 15311}.
<a id="trace-14953"></a>
- 72.65s–72.65s (×1), actor 1, squad 0 (trace 14953): MoveTactically. Knowledge: actor memory at 70.00s, trace 14678. Next observer evidence: {'until': 73.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4059132292021763, 'next_transition': 15311}.
<a id="trace-14954"></a>
- 72.65s–72.65s (×1), actor 1, squad 0 (trace 14954): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 70.00s, trace 14678. Next observer evidence: {'until': 73.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4059132292021763, 'next_transition': 15311}.
<a id="trace-15311"></a>
<a id="trace-15313"></a>
<a id="trace-15404"></a>
<a id="trace-15406"></a>
<a id="trace-15499"></a>
<a id="trace-15501"></a>
<a id="trace-15543"></a>
<a id="trace-15545"></a>
<a id="trace-15566"></a>
<a id="trace-15568"></a>
<a id="trace-15592"></a>
<a id="trace-15594"></a>
<a id="trace-15607"></a>
<a id="trace-15609"></a>
<a id="trace-15635"></a>
<a id="trace-15637"></a>
<a id="trace-15650"></a>
<a id="trace-15652"></a>
<a id="trace-15672"></a>
<a id="trace-15674"></a>
<a id="trace-15686"></a>
<a id="trace-15688"></a>
<a id="trace-15772"></a>
<a id="trace-15785"></a>
<a id="trace-15835"></a>
<a id="trace-15872"></a>
- 73.25s–82.25s (×26), actor 5, squad 0 (trace 15311): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 14682. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.1236232650792926, 'next_transition': 15404}.
<a id="trace-15554"></a>
- 76.35s–76.35s (×1), actor 9, squad 1 (trace 15554): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 75.00s, trace 15426. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1544}.
<a id="trace-1544"></a>
- 81.30s–81.30s (×1), actor 5, squad 1 (events line 1544): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15815"></a>
- 81.30s–81.30s (×1), actor 5, squad 1 (trace 15815): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.452919 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 15815. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15887}.
<a id="trace-15816"></a>
- 81.30s–81.30s (×1), actor 5, squad 1 (trace 15816): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.452919 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 15816. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15887}.
<a id="trace-15887"></a>
- 82.35s–82.35s (×1), actor 9, squad 1 (trace 15887): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 80.00s, trace 15704. Next observer evidence: {'until': 95, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17610}.
<a id="trace-15893"></a>
- 82.45s–82.45s (×1), actor 1, squad 0 (trace 15893): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 15698. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21041040814243228, 'next_transition': 15988}.
<a id="trace-15988"></a>
<a id="trace-16132"></a>
<a id="trace-16134"></a>
<a id="trace-16166"></a>
<a id="trace-16168"></a>
<a id="trace-16261"></a>
<a id="trace-16263"></a>
<a id="trace-16284"></a>
<a id="trace-16286"></a>
<a id="trace-16312"></a>
<a id="trace-16314"></a>
<a id="trace-16346"></a>
<a id="trace-16348"></a>
- 82.75s–87.25s (×13), actor 5, squad 0 (trace 15988): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.30s, trace 15816. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.655139176768542, 'next_transition': 16132}.
<a id="trace-16355"></a>
- 87.25s–87.25s (×1), actor 1, squad 0 (trace 16355): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 16184. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039932989877488036, 'next_transition': 16475}.
<a id="trace-16475"></a>
<a id="trace-16477"></a>
<a id="trace-16501"></a>
<a id="trace-16503"></a>
<a id="trace-16516"></a>
<a id="trace-16518"></a>
<a id="trace-16576"></a>
<a id="trace-16578"></a>
<a id="trace-16635"></a>
<a id="trace-16637"></a>
- 87.75s–89.75s (×10), actor 5, squad 0 (trace 16475): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 16187. Next observer evidence: {'until': 88.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1336540521271241, 'next_transition': 16501}.
<a id="trace-16749"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 16749): Fixing. Knowledge: actor memory at 90.00s, trace 16664. Next observer evidence: None.
<a id="trace-16763"></a>
<a id="trace-16765"></a>
<a id="trace-16816"></a>
<a id="trace-16818"></a>
<a id="trace-16882"></a>
<a id="trace-16884"></a>
<a id="trace-16934"></a>
<a id="trace-16936"></a>
- 90.25s–91.75s (×8), actor 5, squad 0 (trace 16763): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 16667. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3588699266100412, 'next_transition': 16816}.
<a id="trace-16979"></a>
- 92.20s–92.20s (×1), actor 1, squad 0 (trace 16979): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 16664. Next observer evidence: None.
<a id="trace-17168"></a>
- 92.20s–92.20s (×1), actor 1, squad 0 (trace 17168): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 90.00s, trace 16664. Next observer evidence: None.
<a id="trace-17177"></a>
<a id="trace-17179"></a>
<a id="trace-17227"></a>
<a id="trace-17229"></a>
<a id="trace-17282"></a>
<a id="trace-17284"></a>
<a id="trace-17385"></a>
<a id="trace-17387"></a>
<a id="trace-17680"></a>
<a id="trace-17682"></a>
<a id="trace-17701"></a>
<a id="trace-17703"></a>
<a id="trace-17720"></a>
<a id="trace-17722"></a>
<a id="trace-17742"></a>
<a id="trace-17744"></a>
<a id="trace-17776"></a>
<a id="trace-17778"></a>
<a id="trace-17807"></a>
<a id="trace-17809"></a>
<a id="trace-17820"></a>
<a id="trace-17822"></a>
<a id="trace-17897"></a>
<a id="trace-17899"></a>
<a id="trace-17924"></a>
<a id="trace-17926"></a>
<a id="trace-17955"></a>
<a id="trace-17957"></a>
<a id="trace-17966"></a>
<a id="trace-17968"></a>
<a id="trace-17984"></a>
<a id="trace-17986"></a>
<a id="trace-17998"></a>
<a id="trace-18000"></a>
<a id="trace-18016"></a>
<a id="trace-18018"></a>
<a id="trace-18052"></a>
<a id="trace-18054"></a>
<a id="trace-18148"></a>
<a id="trace-18150"></a>
<a id="trace-18178"></a>
<a id="trace-18180"></a>
- 92.25s–105.75s (×42), actor 5, squad 0 (trace 17177): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 16667. Next observer evidence: {'until': 92.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.04859201501261348, 'next_transition': 17227}.
<a id="trace-17610"></a>
- 95.15s–95.15s (×1), actor 9, squad 1 (trace 17610): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 95.00s, trace 17402. Next observer evidence: {'until': 125, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19559}.
<a id="trace-18196"></a>
- 106.05s–106.05s (×1), actor 1, squad 0 (trace 18196): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 105.00s, trace 18072. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18209}.
<a id="trace-18209"></a>
<a id="trace-18211"></a>
- 106.25s–106.25s (×2), actor 5, squad 0 (trace 18209): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 18074. Next observer evidence: None.
<a id="trace-18220"></a>
- 106.30s–106.30s (×1), actor 1, squad 0 (trace 18220): Reorganise: completed/failed drill. Knowledge: actor memory at 105.00s, trace 18072. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18405}.
<a id="trace-18223"></a>
- 106.30s–106.30s (×1), actor 1, squad 0 (trace 18223): MoveTactically. Knowledge: actor memory at 105.00s, trace 18072. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18405}.
<a id="trace-18224"></a>
- 106.30s–106.30s (×1), actor 1, squad 0 (trace 18224): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 105.00s, trace 18072. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18405}.
<a id="trace-18405"></a>
<a id="trace-18407"></a>
<a id="trace-18432"></a>
<a id="trace-18434"></a>
<a id="trace-18452"></a>
<a id="trace-18454"></a>
<a id="trace-18474"></a>
<a id="trace-18476"></a>
<a id="trace-18493"></a>
<a id="trace-18495"></a>
<a id="trace-18518"></a>
<a id="trace-18520"></a>
<a id="trace-18534"></a>
<a id="trace-18536"></a>
<a id="trace-18616"></a>
<a id="trace-18618"></a>
<a id="trace-18631"></a>
<a id="trace-18633"></a>
<a id="trace-18652"></a>
<a id="trace-18654"></a>
<a id="trace-18668"></a>
<a id="trace-18670"></a>
<a id="trace-18689"></a>
<a id="trace-18691"></a>
- 106.75s–112.25s (×24), actor 5, squad 0 (trace 18405): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 18074. Next observer evidence: {'until': 107.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5118737473974038, 'next_transition': 18432}.
<a id="trace-18700"></a>
- 112.45s–112.45s (×1), actor 1, squad 0 (trace 18700): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 18545. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575019065162386, 'next_transition': 18803}.
<a id="trace-18797"></a>
- 112.45s–112.45s (×1), actor 1, squad 0 (trace 18797): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 110.00s, trace 18545. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575019065162386, 'next_transition': 18803}.
<a id="trace-18803"></a>
<a id="trace-18805"></a>
<a id="trace-18827"></a>
<a id="trace-18829"></a>
<a id="trace-18843"></a>
<a id="trace-18845"></a>
<a id="trace-18861"></a>
<a id="trace-18863"></a>
<a id="trace-18878"></a>
<a id="trace-18880"></a>
<a id="trace-18958"></a>
<a id="trace-18960"></a>
<a id="trace-18973"></a>
<a id="trace-18975"></a>
<a id="trace-18994"></a>
<a id="trace-18996"></a>
<a id="trace-19031"></a>
<a id="trace-19033"></a>
<a id="trace-19060"></a>
<a id="trace-19062"></a>
<a id="trace-19072"></a>
<a id="trace-19074"></a>
<a id="trace-19095"></a>
<a id="trace-19097"></a>
<a id="trace-19110"></a>
<a id="trace-19112"></a>
<a id="trace-19192"></a>
<a id="trace-19194"></a>
<a id="trace-19207"></a>
<a id="trace-19209"></a>
<a id="trace-19231"></a>
<a id="trace-19233"></a>
<a id="trace-19249"></a>
<a id="trace-19251"></a>
<a id="trace-19269"></a>
<a id="trace-19271"></a>
<a id="trace-19285"></a>
<a id="trace-19287"></a>
- 112.75s–122.75s (×38), actor 5, squad 0 (trace 18803): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 18546. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7168170130269399, 'next_transition': 18827}.
<a id="trace-2504"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (events line 2504): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.956215169410683, 'next_transition': 19319}.
<a id="trace-19294"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (trace 19294): renew committed intent (75 s lifetime). Knowledge: actor memory at 122.80s, trace 19294. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.956215169410683, 'next_transition': 19319}.
<a id="trace-19319"></a>
<a id="trace-19321"></a>
<a id="trace-19344"></a>
<a id="trace-19346"></a>
<a id="trace-19442"></a>
<a id="trace-19444"></a>
<a id="trace-19455"></a>
<a id="trace-19457"></a>
<a id="trace-19473"></a>
<a id="trace-19475"></a>
<a id="trace-19506"></a>
<a id="trace-19508"></a>
<a id="trace-19522"></a>
<a id="trace-19524"></a>
<a id="trace-19545"></a>
<a id="trace-19547"></a>
- 123.75s–128.30s (×16), actor 5, squad 0 (trace 19319): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 122.80s, trace 19294. Next observer evidence: {'until': 124.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19344}.
<a id="trace-19557"></a>
- 128.65s–128.65s (×1), actor 1, squad 0 (trace 19557): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 125.00s, trace 19374. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31718174502412355, 'next_transition': 19569}.
<a id="trace-19558"></a>
- 128.65s–128.65s (×1), actor 1, squad 0 (trace 19558): ; retain held slots. Knowledge: actor memory at 125.00s, trace 19374. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31718174502412355, 'next_transition': 19569}.
<a id="trace-19559"></a>
- 128.65s–128.65s (×1), actor 9, squad 1 (trace 19559): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 125.00s, trace 19378. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3280}.
<a id="trace-19560"></a>
- 128.65s–128.65s (×1), actor 9, squad 1 (trace 19560): ; retain contact cover stage. Knowledge: actor memory at 125.00s, trace 19378. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3280}.
<a id="trace-19569"></a>
<a id="trace-19571"></a>
<a id="trace-19592"></a>
<a id="trace-19594"></a>
<a id="trace-19606"></a>
<a id="trace-19608"></a>
<a id="trace-19683"></a>
<a id="trace-19685"></a>
<a id="trace-19695"></a>
<a id="trace-19697"></a>
<a id="trace-19735"></a>
<a id="trace-19737"></a>
<a id="trace-19755"></a>
<a id="trace-19757"></a>
<a id="trace-19774"></a>
<a id="trace-19776"></a>
<a id="trace-19794"></a>
<a id="trace-19796"></a>
<a id="trace-19922"></a>
<a id="trace-19924"></a>
<a id="trace-19935"></a>
<a id="trace-19937"></a>
<a id="trace-19959"></a>
<a id="trace-19961"></a>
<a id="trace-19976"></a>
<a id="trace-19978"></a>
<a id="trace-19996"></a>
<a id="trace-19998"></a>
<a id="trace-20010"></a>
<a id="trace-20012"></a>
<a id="trace-20044"></a>
<a id="trace-20046"></a>
<a id="trace-20078"></a>
<a id="trace-20080"></a>
<a id="trace-20167"></a>
<a id="trace-20169"></a>
<a id="trace-20185"></a>
<a id="trace-20187"></a>
<a id="trace-20214"></a>
<a id="trace-20216"></a>
<a id="trace-20246"></a>
<a id="trace-20248"></a>
<a id="trace-20281"></a>
<a id="trace-20283"></a>
<a id="trace-20386"></a>
<a id="trace-20388"></a>
<a id="trace-20411"></a>
<a id="trace-20436"></a>
<a id="trace-20467"></a>
<a id="trace-20469"></a>
<a id="trace-20503"></a>
<a id="trace-20505"></a>
<a id="trace-20593"></a>
<a id="trace-20595"></a>
<a id="trace-20629"></a>
<a id="trace-20653"></a>
<a id="trace-20679"></a>
<a id="trace-20681"></a>
<a id="trace-20704"></a>
<a id="trace-20706"></a>
<a id="trace-20789"></a>
<a id="trace-20791"></a>
<a id="trace-20826"></a>
<a id="trace-20855"></a>
<a id="trace-20912"></a>
<a id="trace-20914"></a>
<a id="trace-21000"></a>
<a id="trace-21028"></a>
<a id="trace-21062"></a>
<a id="trace-21086"></a>
<a id="trace-21088"></a>
<a id="trace-21125"></a>
<a id="trace-21127"></a>
<a id="trace-21231"></a>
<a id="trace-21253"></a>
<a id="trace-21274"></a>
<a id="trace-21312"></a>
<a id="trace-21392"></a>
<a id="trace-21394"></a>
<a id="trace-21419"></a>
<a id="trace-21441"></a>
- 128.80s–172.30s (×81), actor 5, squad 0 (trace 19569): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19375. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7964514726041833, 'next_transition': 19592}.
<a id="trace-3280"></a>
- 151.35s–151.35s (×1), actor 5, squad 1 (events line 3280): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20638"></a>
- 151.35s–151.35s (×1), actor 5, squad 1 (trace 20638): renew committed intent (75 s lifetime). Knowledge: actor memory at 151.35s, trace 20638. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20836}.
<a id="trace-20836"></a>
- 156.30s–156.30s (×1), actor 9, squad 1 (trace 20836): received platoon directive; retain contact cover stage. Knowledge: actor memory at 155.00s, trace 20730. Next observer evidence: {'until': 158.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20890}.
<a id="trace-20890"></a>
- 158.65s–158.65s (×1), actor 9, squad 1 (trace 20890): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 20730. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21053}.
<a id="trace-20891"></a>
- 158.65s–158.65s (×1), actor 9, squad 1 (trace 20891): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 20730. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21053}.
<a id="trace-21053"></a>
- 161.95s–161.95s (×1), actor 9, squad 1 (trace 21053): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 160.00s, trace 20938. Next observer evidence: {'until': 163.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21101}.
<a id="trace-21055"></a>
- 161.95s–161.95s (×1), actor 9, squad 1 (trace 21055): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 160.00s, trace 20938. Next observer evidence: {'until': 163.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21101}.
<a id="trace-21101"></a>
- 163.65s–163.65s (×1), actor 9, squad 1 (trace 21101): new contact inside 100 m. Knowledge: actor memory at 160.00s, trace 20938. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21247}.
<a id="trace-21247"></a>
- 166.95s–166.95s (×1), actor 9, squad 1 (trace 21247): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 165.00s, trace 21154. Next observer evidence: {'until': 179, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4051}.
<a id="trace-21249"></a>
- 166.95s–166.95s (×1), actor 9, squad 1 (trace 21249): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 165.00s, trace 21154. Next observer evidence: {'until': 179, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4051}.
<a id="trace-21479"></a>
- 174.00s–174.00s (×1), actor 7, squad 0 (trace 21479): MoveTactically. Knowledge: actor memory at 170.00s, trace 21335. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149794184149181, 'next_transition': 21484}.
<a id="trace-21480"></a>
- 174.00s–174.00s (×1), actor 7, squad 0 (trace 21480): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 170.00s, trace 21335. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149794184149181, 'next_transition': 21484}.
<a id="trace-21484"></a>
<a id="trace-21486"></a>
<a id="trace-21569"></a>
<a id="trace-21596"></a>
<a id="trace-21620"></a>
<a id="trace-21622"></a>
<a id="trace-21637"></a>
<a id="trace-21639"></a>
<a id="trace-21659"></a>
<a id="trace-21735"></a>
<a id="trace-21737"></a>
<a id="trace-21757"></a>
<a id="trace-21759"></a>
<a id="trace-21779"></a>
<a id="trace-21794"></a>
<a id="trace-21796"></a>
<a id="trace-21816"></a>
<a id="trace-21818"></a>
<a id="trace-21893"></a>
<a id="trace-21895"></a>
<a id="trace-21916"></a>
<a id="trace-21918"></a>
<a id="trace-21945"></a>
<a id="trace-21979"></a>
<a id="trace-22056"></a>
<a id="trace-22058"></a>
<a id="trace-22077"></a>
<a id="trace-22079"></a>
<a id="trace-22100"></a>
<a id="trace-22102"></a>
- 174.30s–192.30s (×30), actor 5, squad 0 (trace 21484): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 21334. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4962736377080228, 'next_transition': 21569}.
<a id="trace-4051"></a>
- 179.00s–179.00s (×1), actor 5, squad 1 (events line 4051): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 209, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23243}.
<a id="trace-21652"></a>
- 179.00s–179.00s (×1), actor 5, squad 1 (trace 21652): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.540925 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 179.00s, trace 21652. Next observer evidence: {'until': 209, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23243}.
<a id="trace-21653"></a>
- 179.00s–179.00s (×1), actor 5, squad 1 (trace 21653): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.540925 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 179.00s, trace 21653. Next observer evidence: {'until': 209, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23243}.
<a id="trace-4365"></a>
- 192.80s–192.80s (×1), actor 5, squad 0 (events line 4365): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22128}.
<a id="trace-22117"></a>
- 192.80s–192.80s (×1), actor 5, squad 0 (trace 22117): renew committed intent (75 s lifetime). Knowledge: actor memory at 192.80s, trace 22117. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22128}.
<a id="trace-22128"></a>
<a id="trace-22130"></a>
<a id="trace-22150"></a>
<a id="trace-22226"></a>
<a id="trace-22228"></a>
<a id="trace-22246"></a>
<a id="trace-22248"></a>
<a id="trace-22266"></a>
- 193.30s–197.30s (×8), actor 5, squad 0 (trace 22128): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 192.80s, trace 22117. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22150}.
<a id="trace-22280"></a>
- 197.80s–197.80s (×1), actor 7, squad 0 (trace 22280): received platoon directive. Knowledge: actor memory at 195.00s, trace 22165. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22311}.
<a id="trace-22311"></a>
<a id="trace-22392"></a>
<a id="trace-22394"></a>
<a id="trace-22412"></a>
<a id="trace-22414"></a>
<a id="trace-22432"></a>
<a id="trace-22434"></a>
<a id="trace-22449"></a>
<a id="trace-22451"></a>
<a id="trace-22472"></a>
<a id="trace-22551"></a>
<a id="trace-22553"></a>
<a id="trace-22575"></a>
<a id="trace-22577"></a>
<a id="trace-22600"></a>
<a id="trace-22617"></a>
<a id="trace-22619"></a>
<a id="trace-22637"></a>
<a id="trace-22639"></a>
<a id="trace-22715"></a>
<a id="trace-22717"></a>
<a id="trace-22739"></a>
<a id="trace-22758"></a>
<a id="trace-22760"></a>
<a id="trace-22785"></a>
<a id="trace-22787"></a>
<a id="trace-22807"></a>
<a id="trace-22882"></a>
<a id="trace-22884"></a>
<a id="trace-22922"></a>
<a id="trace-22940"></a>
<a id="trace-22942"></a>
<a id="trace-22965"></a>
<a id="trace-22967"></a>
<a id="trace-23048"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23087"></a>
<a id="trace-23105"></a>
<a id="trace-23107"></a>
<a id="trace-23204"></a>
<a id="trace-23206"></a>
<a id="trace-23234"></a>
<a id="trace-23236"></a>
<a id="trace-23263"></a>
<a id="trace-23283"></a>
<a id="trace-23285"></a>
<a id="trace-23301"></a>
<a id="trace-23376"></a>
<a id="trace-23378"></a>
<a id="trace-23400"></a>
<a id="trace-23402"></a>
<a id="trace-23423"></a>
<a id="trace-23425"></a>
<a id="trace-23447"></a>
<a id="trace-23463"></a>
<a id="trace-23465"></a>
<a id="trace-23539"></a>
<a id="trace-23541"></a>
<a id="trace-23559"></a>
<a id="trace-23561"></a>
<a id="trace-23580"></a>
<a id="trace-23582"></a>
<a id="trace-23600"></a>
<a id="trace-23602"></a>
<a id="trace-23623"></a>
<a id="trace-23702"></a>
<a id="trace-23722"></a>
<a id="trace-23724"></a>
<a id="trace-23741"></a>
<a id="trace-23757"></a>
<a id="trace-23759"></a>
<a id="trace-23778"></a>
<a id="trace-23780"></a>
<a id="trace-23855"></a>
<a id="trace-23884"></a>
- 199.30s–246.30s (×76), actor 5, squad 0 (trace 22311): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 22164. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22392}.
<a id="trace-23243"></a>
- 226.35s–226.35s (×1), actor 9, squad 1 (trace 23243): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 225.00s, trace 23146. Next observer evidence: {'until': 226.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23249}.
<a id="trace-23244"></a>
- 226.35s–226.35s (×1), actor 9, squad 1 (trace 23244): MoveTactically. Knowledge: actor memory at 225.00s, trace 23146. Next observer evidence: {'until': 226.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23249}.
<a id="trace-23245"></a>
- 226.35s–226.35s (×1), actor 9, squad 1 (trace 23245): . Knowledge: actor memory at 225.00s, trace 23146. Next observer evidence: {'until': 226.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23249}.
<a id="trace-23249"></a>
- 226.40s–226.40s (×1), actor 9, squad 1 (trace 23249): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 225.00s, trace 23146. Next observer evidence: {'until': 248, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5221}.
<a id="trace-5220"></a>
- 248.05s–248.05s (×1), actor 5, squad 0 (events line 5220): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23923}.
<a id="trace-5221"></a>
- 248.05s–248.05s (×1), actor 5, squad 1 (events line 5221): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5267}.
<a id="trace-23915"></a>
- 248.05s–248.05s (×1), actor 5, squad 0 (trace 23915): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.810659 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 248.05s, trace 23915. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23923}.
<a id="trace-23916"></a>
- 248.05s–248.05s (×1), actor 5, squad 0 (trace 23916): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.810659 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 248.05s, trace 23916. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23923}.
<a id="trace-23917"></a>
- 248.05s–248.05s (×1), actor 5, squad 1 (trace 23917): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.810659 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 248.05s, trace 23917. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5267}.
<a id="trace-23918"></a>
- 248.05s–248.05s (×1), actor 5, squad 1 (trace 23918): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.810659 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 248.05s, trace 23918. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5267}.
<a id="trace-23923"></a>
<a id="trace-23941"></a>
<a id="trace-23943"></a>
<a id="trace-24018"></a>
<a id="trace-24061"></a>
- 248.30s–252.30s (×5), actor 5, squad 0 (trace 23923): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 248.05s, trace 23918. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23941}.
<a id="trace-24081"></a>
- 253.05s–253.05s (×1), actor 7, squad 0 (trace 24081): traveling overwatch. Knowledge: actor memory at 250.00s, trace 23959. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24084}.
<a id="trace-24082"></a>
- 253.05s–253.05s (×1), actor 7, squad 0 (trace 24082): received platoon directive. Knowledge: actor memory at 250.00s, trace 23959. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24084}.
<a id="trace-24084"></a>
<a id="trace-24086"></a>
<a id="trace-24103"></a>
<a id="trace-24177"></a>
<a id="trace-24198"></a>
<a id="trace-24200"></a>
<a id="trace-24218"></a>
<a id="trace-24236"></a>
<a id="trace-24238"></a>
<a id="trace-24265"></a>
<a id="trace-24338"></a>
<a id="trace-24340"></a>
<a id="trace-24360"></a>
- 253.30s–261.30s (×13), actor 5, squad 0 (trace 24084): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 23958. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24103}.
<a id="trace-5266"></a>
- 261.85s–261.85s (×1), actor 5, squad 0 (events line 5266): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5267"></a>
- 261.85s–261.85s (×1), actor 5, squad 1 (events line 5267): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24375"></a>
- 261.85s–261.85s (×1), actor 5, squad 0 (trace 24375): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.85s, trace 24375. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24383}.
<a id="trace-24376"></a>
- 261.85s–261.85s (×1), actor 5, squad 0 (trace 24376): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.85s, trace 24376. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24383}.
<a id="trace-24377"></a>
- 261.85s–261.85s (×1), actor 5, squad 1 (trace 24377): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.85s, trace 24377. Next observer evidence: {'until': 265, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24453}.
<a id="trace-24378"></a>
- 261.85s–261.85s (×1), actor 5, squad 1 (trace 24378): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.85s, trace 24378. Next observer evidence: {'until': 265, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24453}.
<a id="trace-24383"></a>
<a id="trace-24385"></a>
<a id="trace-24400"></a>
<a id="trace-24402"></a>
<a id="trace-24423"></a>
<a id="trace-24425"></a>
<a id="trace-24557"></a>
<a id="trace-24559"></a>
<a id="trace-24588"></a>
<a id="trace-24590"></a>
- 262.30s–266.30s (×10), actor 5, squad 0 (trace 24383): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 261.85s, trace 24378. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24400}.
<a id="trace-24453"></a>
- 265.05s–265.05s (×1), actor 9, squad 1 (trace 24453): traveling. Knowledge: actor memory at 265.00s, trace 24442. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.567500000000003, 'next_transition': 24607}.
<a id="trace-24454"></a>
- 265.05s–265.05s (×1), actor 9, squad 1 (trace 24454): current contact unknown for 10 s. Knowledge: actor memory at 265.00s, trace 24442. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.567500000000003, 'next_transition': 24607}.
<a id="trace-24607"></a>
- 266.80s–266.80s (×1), actor 9, squad 1 (trace 24607): received platoon directive. Knowledge: actor memory at 265.00s, trace 24442. Next observer evidence: {'until': 272.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.842500000000001, 'next_transition': 24859}.
<a id="trace-24661"></a>
- 266.85s–266.85s (×1), actor 7, squad 0 (trace 24661): received platoon directive. Knowledge: actor memory at 265.00s, trace 24441. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24668}.
<a id="trace-24668"></a>
<a id="trace-24689"></a>
<a id="trace-24691"></a>
<a id="trace-24711"></a>
<a id="trace-24788"></a>
<a id="trace-24790"></a>
<a id="trace-24814"></a>
<a id="trace-24837"></a>
<a id="trace-24839"></a>
<a id="trace-24862"></a>
<a id="trace-24864"></a>
<a id="trace-24883"></a>
<a id="trace-24955"></a>
<a id="trace-24995"></a>
<a id="trace-24997"></a>
<a id="trace-25013"></a>
<a id="trace-25041"></a>
<a id="trace-25115"></a>
<a id="trace-25117"></a>
<a id="trace-25136"></a>
<a id="trace-25154"></a>
<a id="trace-25156"></a>
<a id="trace-25171"></a>
<a id="trace-25173"></a>
<a id="trace-25194"></a>
<a id="trace-25271"></a>
<a id="trace-25273"></a>
<a id="trace-25299"></a>
<a id="trace-25315"></a>
<a id="trace-25317"></a>
<a id="trace-25332"></a>
<a id="trace-25334"></a>
<a id="trace-25353"></a>
<a id="trace-25355"></a>
<a id="trace-25428"></a>
<a id="trace-25451"></a>
<a id="trace-25453"></a>
<a id="trace-25479"></a>
<a id="trace-25481"></a>
<a id="trace-25495"></a>
<a id="trace-25497"></a>
<a id="trace-25516"></a>
<a id="trace-25518"></a>
<a id="trace-25590"></a>
<a id="trace-25592"></a>
<a id="trace-25611"></a>
<a id="trace-25633"></a>
<a id="trace-25635"></a>
<a id="trace-25653"></a>
<a id="trace-25655"></a>
<a id="trace-25679"></a>
<a id="trace-25752"></a>
<a id="trace-25754"></a>
<a id="trace-25774"></a>
<a id="trace-25791"></a>
<a id="trace-25793"></a>
<a id="trace-25809"></a>
<a id="trace-25811"></a>
<a id="trace-25833"></a>
<a id="trace-25909"></a>
<a id="trace-25911"></a>
<a id="trace-25935"></a>
<a id="trace-25954"></a>
<a id="trace-25956"></a>
<a id="trace-25969"></a>
<a id="trace-25971"></a>
<a id="trace-25990"></a>
<a id="trace-26066"></a>
<a id="trace-26068"></a>
<a id="trace-26088"></a>
<a id="trace-26090"></a>
<a id="trace-26117"></a>
<a id="trace-26119"></a>
<a id="trace-26133"></a>
<a id="trace-26135"></a>
<a id="trace-26153"></a>
<a id="trace-26155"></a>
<a id="trace-26228"></a>
<a id="trace-26230"></a>
<a id="trace-26249"></a>
<a id="trace-26251"></a>
<a id="trace-26271"></a>
<a id="trace-26273"></a>
<a id="trace-26292"></a>
<a id="trace-26317"></a>
<a id="trace-26389"></a>
<a id="trace-26391"></a>
<a id="trace-26410"></a>
<a id="trace-26412"></a>
<a id="trace-26431"></a>
<a id="trace-26446"></a>
<a id="trace-26468"></a>
<a id="trace-26470"></a>
<a id="trace-26568"></a>
<a id="trace-26570"></a>
<a id="trace-26589"></a>
<a id="trace-26591"></a>
<a id="trace-26605"></a>
<a id="trace-26623"></a>
<a id="trace-26625"></a>
<a id="trace-26702"></a>
- 267.30s–330.30s (×101), actor 5, squad 0 (trace 24668): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 24440. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24689}.
<a id="trace-24859"></a>
- 272.90s–272.90s (×1), actor 9, squad 1 (trace 24859): traveling overwatch. Knowledge: actor memory at 270.00s, trace 24728. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5496}.
<a id="trace-24860"></a>
- 272.90s–272.90s (×1), actor 9, squad 1 (trace 24860): matching received arrivals: traveling stage complete. Knowledge: actor memory at 270.00s, trace 24728. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5496}.
<a id="trace-5495"></a>
- 330.85s–330.85s (×1), actor 5, squad 0 (events line 5495): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5496"></a>
- 330.85s–330.85s (×1), actor 5, squad 1 (events line 5496): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26717"></a>
- 330.85s–330.85s (×1), actor 5, squad 0 (trace 26717): renew committed intent (75 s lifetime). Knowledge: actor memory at 330.85s, trace 26717. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26729}.
<a id="trace-26718"></a>
- 330.85s–330.85s (×1), actor 5, squad 1 (trace 26718): renew committed intent (75 s lifetime). Knowledge: actor memory at 330.85s, trace 26718. Next observer evidence: {'until': 336.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26902}.
<a id="trace-26729"></a>
<a id="trace-26731"></a>
<a id="trace-26755"></a>
<a id="trace-26757"></a>
<a id="trace-26770"></a>
<a id="trace-26772"></a>
<a id="trace-26790"></a>
<a id="trace-26792"></a>
<a id="trace-26865"></a>
<a id="trace-26867"></a>
<a id="trace-26886"></a>
<a id="trace-26910"></a>
<a id="trace-26912"></a>
<a id="trace-26930"></a>
<a id="trace-26953"></a>
<a id="trace-26955"></a>
<a id="trace-27030"></a>
<a id="trace-27047"></a>
<a id="trace-27067"></a>
<a id="trace-27069"></a>
<a id="trace-27085"></a>
<a id="trace-27087"></a>
<a id="trace-27107"></a>
<a id="trace-27191"></a>
<a id="trace-27207"></a>
<a id="trace-27209"></a>
<a id="trace-27227"></a>
<a id="trace-27242"></a>
<a id="trace-27244"></a>
<a id="trace-27262"></a>
<a id="trace-27264"></a>
<a id="trace-27340"></a>
<a id="trace-27342"></a>
<a id="trace-27364"></a>
<a id="trace-27389"></a>
<a id="trace-27391"></a>
<a id="trace-27404"></a>
<a id="trace-27406"></a>
<a id="trace-27424"></a>
<a id="trace-27500"></a>
<a id="trace-27502"></a>
<a id="trace-27520"></a>
<a id="trace-27543"></a>
<a id="trace-27565"></a>
<a id="trace-27582"></a>
<a id="trace-27584"></a>
- 331.30s–359.30s (×46), actor 5, squad 0 (trace 26729): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.85s, trace 26718. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26755}.
<a id="trace-26902"></a>
- 336.85s–336.85s (×1), actor 9, squad 1 (trace 26902): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 335.00s, trace 26808. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-26903"></a>
- 336.85s–336.85s (×1), actor 9, squad 1 (trace 26903): MoveTactically. Knowledge: actor memory at 335.00s, trace 26808. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-26904"></a>
- 336.85s–336.85s (×1), actor 9, squad 1 (trace 26904): . Knowledge: actor memory at 335.00s, trace 26808. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

198 matched order/radio deliveries; 304 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.434s; maximum 6.050s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4566: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4568: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4569: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4570: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4571: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4572: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4573: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4574: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4575: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4576: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4577: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 5890: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5896: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 5898: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5900: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5901: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5902: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5903: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5904: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5905: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5906: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5907: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5908: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5909: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 8889: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8890: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8891: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8894: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8895: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 8897: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8899: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8900: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8901: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8902: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8903: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8904: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8905: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8906: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8907: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8908: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 9362: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 9363: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 9364: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 9365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 9367: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 9368: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 9369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 9370: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 9371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 9372: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 9373: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 9374: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 9375: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 9376: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 9377: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 9378: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 9379: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 9380: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 9381: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 9679: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 9680: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 9681: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 9682: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 9757: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 9758: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 9759: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 9760: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 9761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 9762: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 9763: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 9764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 9765: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 9766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 9767: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 9768: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 9769: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 9770: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 9771: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 9772: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 9773: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 9774: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 9775: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 9776: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 11522: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 11523: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 11524: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 11525: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11527: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11528: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 11530: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 11531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11532: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11533: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11534: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11535: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11536: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11537: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11538: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11539: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 11540: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 11541: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 12030: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 12031: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 12032: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 12033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 12034: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 12035: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 12036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 12037: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 12038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 12039: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 12040: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 12041: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 12042: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 12043: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 12044: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 12045: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 12046: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 12047: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 12048: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 14678: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 14679: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 14680: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14682: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 14683: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 14684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 14685: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 14686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 14687: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14688: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14689: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14690: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14691: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14692: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14693: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14694: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14695: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 14696: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 15420: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 15421: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 15422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 15423: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 15424: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 15425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 15426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 15427: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 15428: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 15429: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 15430: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 15431: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 15432: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 15433: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 15434: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 15435: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 15436: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 15698: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 15699: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 15700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 15701: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 15702: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 15703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 15704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 15705: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 15706: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 15707: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 15708: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 15709: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 15710: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 15711: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 15712: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 15713: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 15714: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 15815: estimate 12.04; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 15816: estimate 12.04; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 16184: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 16185: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 16186: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 16187: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 16188: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 16189: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 16190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 16191: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 16192: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 16193: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 16194: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 16195: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 16196: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 16197: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 16198: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 16199: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 16200: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 16664: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 16665: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 16666: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 16667: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 16668: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 16669: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 16670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 16671: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 16672: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 16673: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 16674: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 16675: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 16676: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 16677: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 16678: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 16679: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 16680: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 17397: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 17398: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 17399: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 17400: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 17401: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 17402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 17403: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 17404: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 17405: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 17406: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 17407: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 17408: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 17409: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 17410: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 17411: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 17412: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 17831: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 17832: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 17833: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 17834: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 17835: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 17836: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 17837: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 17838: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 17839: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 17840: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 17841: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 17842: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 17843: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 17844: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 17845: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 17846: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 18072: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 18073: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 18074: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 18075: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 18076: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 18077: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 18078: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 18079: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 18080: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 18081: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 18082: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 18083: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 18084: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 18085: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 18086: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 18087: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 18545: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 18546: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 18547: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 18548: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 18549: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 18550: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 18551: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 18552: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 18553: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 18554: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 18555: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 18556: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 18557: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 18558: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 18559: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 18888: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 18889: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 18890: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 18891: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 18892: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 18893: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 18894: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 18895: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 18896: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 18897: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 18898: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 18899: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 18900: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 18901: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 18902: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 19120: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 19121: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 19122: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 19123: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 19124: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 19125: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 19126: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 19127: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 19128: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 19129: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 19130: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 19131: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 19132: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 19133: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 19134: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 19294: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 19374: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19375: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 19376: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 19377: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19378: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 19379: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19380: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19381: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19382: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19383: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19384: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19385: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19386: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19387: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19388: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 19615: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 19616: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 19617: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 19618: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 19619: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 19620: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 19621: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 19622: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 19623: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 19624: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 19625: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 19626: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 19627: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 19628: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 19629: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 19856: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 19857: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 19858: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 19859: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 19860: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 19861: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 19862: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 19863: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 19864: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 19865: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 19866: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 19867: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 19868: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 19869: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 19870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 20089: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 20090: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 20091: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 20092: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 20093: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 20094: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20095: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20097: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 20098: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20099: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 20100: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20101: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 20102: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 20309: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 20310: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 20311: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 20312: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 20313: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 20314: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 20315: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 20316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 20317: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 20318: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 20319: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 20320: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 20321: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 20322: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 20323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 20531: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 20532: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 20533: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 20534: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 20535: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 20536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 20537: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 20538: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 20539: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 20540: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 20541: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 20542: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 20543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 151.35s leader 5, trace 20638: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 20727: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 20728: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 20729: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 20730: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 20731: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 20732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 20733: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 20734: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 20735: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 20736: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 20737: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 20738: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 20739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 20935: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 20936: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 20937: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 20938: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 20939: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 20940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 20941: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 20942: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 20943: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 20944: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 20945: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 20946: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 20947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 21152: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 21153: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 21154: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 21155: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 21156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 21157: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 21158: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 21159: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 21160: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 21161: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 21162: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 21163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 21334: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 21335: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 21336: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 21337: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 21338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 21339: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 21340: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 21341: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 21342: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 21343: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 21344: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 21345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 21507: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 21508: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 21509: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 21510: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 21511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 21512: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 21513: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 21514: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 21515: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 21516: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 21517: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 21518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.00s leader 5, trace 21652: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.00s leader 5, trace 21653: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 21675: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 21676: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 21677: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 21678: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 21679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 21680: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 21681: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 21682: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 21683: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 21684: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 21685: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 21686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 21834: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 21835: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 21836: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 21837: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 21838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 21839: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 21840: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 21841: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 21842: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 21843: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 21844: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 21845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 21995: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 21996: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 21997: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 21998: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 21999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 22000: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 22001: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 22002: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 22003: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 22004: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 22005: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 22006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.80s leader 5, trace 22117: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 22164: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 22165: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 22166: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 22167: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 22168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 22169: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 22170: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 22171: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 22172: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 22173: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 22174: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 22175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 22331: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 22332: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 22333: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 22334: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 22335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 22336: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 22337: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 22338: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 22339: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 22340: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 22341: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 22342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 22490: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 22491: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 22492: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22493: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 22494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22495: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 22496: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22497: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22498: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22499: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 22500: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 22501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22654: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 22655: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 22656: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22657: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22659: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22660: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22661: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22662: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22663: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22664: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 22822: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 22823: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 22824: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22825: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22827: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22828: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22829: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22830: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22831: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 22832: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 22833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 22989: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 22990: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 22991: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 22992: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 22993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 22994: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 22995: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 22996: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 22997: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 22998: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 22999: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 23144: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 23145: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 23146: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23147: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 23148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23149: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 23150: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 23151: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23152: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23153: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 23154: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 23155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 23318: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 23319: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 23320: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23321: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 23322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23323: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23324: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 23325: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23326: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23327: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 23328: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 23481: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 23482: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 23483: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23484: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 23485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23486: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23487: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 23488: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23489: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23490: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 23491: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 23492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 23644: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 23645: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 23646: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23647: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23649: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23650: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 23651: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23652: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23653: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 23654: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 23655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23797: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 23798: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 23799: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23800: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23802: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23803: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 23804: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23805: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23806: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 23807: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 248.05s leader 5, trace 23915: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 248.05s leader 5, trace 23916: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 248.05s leader 5, trace 23917: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 248.05s leader 5, trace 23918: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 23958: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 23959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 23960: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23961: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 23962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23963: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23964: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23965: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23966: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23967: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 23968: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24119: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 24120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 24121: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24122: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24124: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24125: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24126: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24127: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24128: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24129: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 24280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 24281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 24282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24283: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 24284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24285: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24286: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 24287: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24288: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24289: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 24290: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 24291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.85s leader 5, trace 24375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.85s leader 5, trace 24376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.85s leader 5, trace 24377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.85s leader 5, trace 24378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 24440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 24441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 24442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24443: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24445: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 24447: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24448: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24449: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 24450: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 24451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 24726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 24727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 24728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 24897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 24898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 24899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 24901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 24904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 24907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 25056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 25057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 25058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 25059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 25060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 25061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 25062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 25063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 25064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 25065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 25066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 25067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 25209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 25210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 25211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 25212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 25213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 25214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 25215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 25216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 25217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 25218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 25219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 25220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 25369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 25370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 25371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 25532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 25533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 25693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 25694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 25695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 25850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 25851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 25852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 25854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 25857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 25860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 26006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 26007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 26008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 26009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 26010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 26011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 26012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 26013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 26014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 26015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 26016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 26017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 26168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 26169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 26170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 26171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 26172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 26173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 26174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 26175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 26176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 26177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 26178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 26179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 26331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 26332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 26333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 26338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 26341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 26342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 26485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 26486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 26487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 26640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 26641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 26642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 26643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 26644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 26645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 26646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 26647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 26648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 26649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 26650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 26651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.85s leader 5, trace 26717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.85s leader 5, trace 26718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 26806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 26807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 26808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 26809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 26810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 26811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 26812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 26813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 26814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 26815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 26816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 26817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 26969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 26970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 26971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 26972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 26973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 26974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 26975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 26976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 26977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 26978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 26979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 26980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 27126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 27127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 27280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 27281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 27282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 27284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 27287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 27290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 27440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 27441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 27442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 27444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 27447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 27450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 27598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 27599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 27600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 27601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 27602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 27603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 27604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 27605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 27606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 27607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 27608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 27609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Ash killed in action
- 1: Bren incapacitated
- 1: Soren incapacitated
- 1: Tern killed in action
- 1: Voss incapacitated
- 1: Moss incapacitated
- 1: Rook incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
