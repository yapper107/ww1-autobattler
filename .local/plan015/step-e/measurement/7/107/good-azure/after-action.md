# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/7/107/good-azure/battle-107-1789673763465782673`

## Battle summary

**Ember** · 360 s · 295 shots.

### Turning points

- 28.8s, squad 4: contact (events line 268). First recorded contact.
- 40.3s, squad 0: withdrawal ([trace 3713](#trace-3713)). 53.8s, squad 0: advanced tactically.
- 52.8s, squad 0: help call ([trace 4964](#trace-4964)). No completion observed before termination.
- 69.7s, squad 0: withdrawal ([trace 5786](#trace-5786)). 90.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 96.3s, squad 0: withdrawal ([trace 6883](#trace-6883)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 2 shots, 2/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 293 shots, 0/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 399](#trace-399)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 36.1s, squad 0 chose took cover and returned fire ([trace 2316](#trace-2316)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 398](#trace-398)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999930128776125, 'next_transition': 412}.
- 40.9s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.451504 retreat threshold=0.500000 initiative=delegated ([trace 4097](#trace-4097)). Following evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299862627302064, 'next_transition': 4110}.

### Communication

125 matched deliveries (mean 0.26s, max 2.45s); 249 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 28.80s, squad 4, contact, evidence events line 268: First recorded contact; .
- 40.30s, squad 0, withdrawal, evidence 3713: BreakContact: believed ratio at least two without superiority; 53.8s, squad 0: advanced tactically.
- 52.80s, squad 0, help call, evidence 4964: NeedSupport; No completion observed before termination.
- 69.65s, squad 0, withdrawal, evidence 5786: BreakContact: believed ratio at least two without superiority; 90.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 96.30s, squad 0, withdrawal, evidence 6883: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287427315873323, 'next_transition': 333}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287427315873323, 'next_transition': 333}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287427315873323, 'next_transition': 333}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200145330084873, 'next_transition': 351}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999930128776125, 'next_transition': 412}.
<a id="trace-398"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 398): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 398. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999930128776125, 'next_transition': 412}.
<a id="trace-399"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 399): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999930128776125, 'next_transition': 412}.
<a id="trace-412"></a>
<a id="trace-431"></a>
<a id="trace-505"></a>
<a id="trace-517"></a>
<a id="trace-539"></a>
<a id="trace-557"></a>
<a id="trace-570"></a>
<a id="trace-586"></a>
<a id="trace-607"></a>
<a id="trace-628"></a>
<a id="trace-640"></a>
<a id="trace-648"></a>
<a id="trace-730"></a>
<a id="trace-739"></a>
- 4.20s–10.70s (×14), actor 5, squad 0 (trace 412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000104340763731, 'next_transition': 431}.
<a id="trace-559"></a>
<a id="trace-609"></a>
<a id="trace-630"></a>
<a id="trace-650"></a>
<a id="trace-732"></a>
<a id="trace-741"></a>
<a id="trace-943"></a>
<a id="trace-988"></a>
<a id="trace-1068"></a>
<a id="trace-1086"></a>
<a id="trace-1181"></a>
<a id="trace-1238"></a>
<a id="trace-1251"></a>
<a id="trace-1274"></a>
<a id="trace-1286"></a>
<a id="trace-1313"></a>
<a id="trace-1394"></a>
<a id="trace-1415"></a>
<a id="trace-1438"></a>
<a id="trace-1460"></a>
<a id="trace-1470"></a>
<a id="trace-1732"></a>
<a id="trace-1748"></a>
<a id="trace-1770"></a>
<a id="trace-1791"></a>
<a id="trace-1875"></a>
<a id="trace-1890"></a>
<a id="trace-1942"></a>
<a id="trace-1955"></a>
<a id="trace-1975"></a>
<a id="trace-1990"></a>
<a id="trace-2009"></a>
<a id="trace-2023"></a>
<a id="trace-2110"></a>
<a id="trace-2121"></a>
<a id="trace-2135"></a>
<a id="trace-2144"></a>
<a id="trace-2162"></a>
<a id="trace-2175"></a>
<a id="trace-2189"></a>
<a id="trace-2199"></a>
<a id="trace-2215"></a>
<a id="trace-2307"></a>
<a id="trace-2698"></a>
<a id="trace-3458"></a>
<a id="trace-3480"></a>
<a id="trace-3540"></a>
<a id="trace-3562"></a>
<a id="trace-3587"></a>
<a id="trace-3710"></a>
<a id="trace-4112"></a>
<a id="trace-4133"></a>
<a id="trace-4175"></a>
<a id="trace-4188"></a>
<a id="trace-4222"></a>
<a id="trace-4260"></a>
<a id="trace-4287"></a>
<a id="trace-4412"></a>
<a id="trace-4442"></a>
<a id="trace-4482"></a>
<a id="trace-4524"></a>
<a id="trace-4563"></a>
<a id="trace-4605"></a>
<a id="trace-4712"></a>
<a id="trace-4762"></a>
<a id="trace-4896"></a>
<a id="trace-4912"></a>
<a id="trace-4933"></a>
<a id="trace-4938"></a>
<a id="trace-4951"></a>
<a id="trace-4962"></a>
<a id="trace-4978"></a>
<a id="trace-4982"></a>
<a id="trace-5147"></a>
<a id="trace-5224"></a>
<a id="trace-5229"></a>
<a id="trace-5267"></a>
<a id="trace-5280"></a>
<a id="trace-5288"></a>
<a id="trace-5303"></a>
<a id="trace-5310"></a>
<a id="trace-5318"></a>
<a id="trace-5406"></a>
<a id="trace-5416"></a>
<a id="trace-5422"></a>
<a id="trace-5441"></a>
<a id="trace-5452"></a>
<a id="trace-5462"></a>
<a id="trace-5475"></a>
<a id="trace-5566"></a>
<a id="trace-5701"></a>
<a id="trace-5717"></a>
<a id="trace-5726"></a>
<a id="trace-5735"></a>
<a id="trace-5742"></a>
<a id="trace-5768"></a>
<a id="trace-5780"></a>
<a id="trace-5844"></a>
<a id="trace-5924"></a>
<a id="trace-5935"></a>
<a id="trace-5951"></a>
<a id="trace-5957"></a>
<a id="trace-5974"></a>
<a id="trace-5981"></a>
<a id="trace-5999"></a>
<a id="trace-6010"></a>
<a id="trace-6015"></a>
<a id="trace-6087"></a>
<a id="trace-6093"></a>
<a id="trace-6112"></a>
<a id="trace-6124"></a>
<a id="trace-6140"></a>
<a id="trace-6151"></a>
<a id="trace-6162"></a>
<a id="trace-6267"></a>
<a id="trace-6278"></a>
<a id="trace-6282"></a>
<a id="trace-6371"></a>
<a id="trace-6380"></a>
<a id="trace-6411"></a>
<a id="trace-6495"></a>
<a id="trace-6503"></a>
<a id="trace-6517"></a>
<a id="trace-6525"></a>
<a id="trace-6535"></a>
<a id="trace-6562"></a>
<a id="trace-6576"></a>
<a id="trace-6665"></a>
<a id="trace-6690"></a>
<a id="trace-6700"></a>
<a id="trace-6714"></a>
<a id="trace-6726"></a>
<a id="trace-6749"></a>
<a id="trace-6761"></a>
<a id="trace-6776"></a>
<a id="trace-6787"></a>
<a id="trace-6868"></a>
<a id="trace-6882"></a>
<a id="trace-6946"></a>
<a id="trace-6962"></a>
<a id="trace-6971"></a>
<a id="trace-6989"></a>
<a id="trace-6999"></a>
<a id="trace-7015"></a>
<a id="trace-7028"></a>
<a id="trace-7114"></a>
<a id="trace-7160"></a>
<a id="trace-7168"></a>
<a id="trace-7177"></a>
<a id="trace-7190"></a>
<a id="trace-7284"></a>
<a id="trace-7301"></a>
<a id="trace-7310"></a>
<a id="trace-7323"></a>
<a id="trace-7333"></a>
<a id="trace-7349"></a>
<a id="trace-7415"></a>
<a id="trace-7431"></a>
<a id="trace-7441"></a>
<a id="trace-7549"></a>
<a id="trace-7563"></a>
<a id="trace-7571"></a>
<a id="trace-7586"></a>
<a id="trace-7598"></a>
<a id="trace-7614"></a>
<a id="trace-7699"></a>
<a id="trace-7728"></a>
<a id="trace-7742"></a>
<a id="trace-7748"></a>
<a id="trace-7762"></a>
<a id="trace-7769"></a>
<a id="trace-7784"></a>
<a id="trace-7796"></a>
<a id="trace-7874"></a>
<a id="trace-7887"></a>
<a id="trace-7964"></a>
<a id="trace-7983"></a>
<a id="trace-7993"></a>
<a id="trace-8008"></a>
<a id="trace-8018"></a>
<a id="trace-8031"></a>
<a id="trace-8041"></a>
<a id="trace-8117"></a>
<a id="trace-8126"></a>
<a id="trace-8145"></a>
<a id="trace-8154"></a>
<a id="trace-8164"></a>
<a id="trace-8187"></a>
<a id="trace-8210"></a>
<a id="trace-8221"></a>
<a id="trace-8298"></a>
<a id="trace-8304"></a>
<a id="trace-8317"></a>
<a id="trace-8326"></a>
<a id="trace-8342"></a>
<a id="trace-8357"></a>
<a id="trace-8370"></a>
<a id="trace-8382"></a>
<a id="trace-8400"></a>
<a id="trace-8489"></a>
<a id="trace-8518"></a>
<a id="trace-8527"></a>
<a id="trace-8552"></a>
<a id="trace-8561"></a>
<a id="trace-8637"></a>
<a id="trace-8651"></a>
<a id="trace-8661"></a>
<a id="trace-8667"></a>
<a id="trace-8675"></a>
<a id="trace-8695"></a>
<a id="trace-8707"></a>
<a id="trace-8778"></a>
<a id="trace-8783"></a>
<a id="trace-8793"></a>
<a id="trace-8798"></a>
<a id="trace-8807"></a>
<a id="trace-8820"></a>
<a id="trace-8827"></a>
<a id="trace-8836"></a>
<a id="trace-8850"></a>
<a id="trace-8921"></a>
<a id="trace-8938"></a>
<a id="trace-8943"></a>
<a id="trace-8953"></a>
<a id="trace-8960"></a>
<a id="trace-8975"></a>
<a id="trace-8992"></a>
<a id="trace-9065"></a>
<a id="trace-9072"></a>
<a id="trace-9080"></a>
<a id="trace-9089"></a>
<a id="trace-9098"></a>
<a id="trace-9104"></a>
<a id="trace-9113"></a>
<a id="trace-9123"></a>
<a id="trace-9136"></a>
<a id="trace-9215"></a>
<a id="trace-9220"></a>
<a id="trace-9227"></a>
<a id="trace-9234"></a>
<a id="trace-9242"></a>
<a id="trace-9249"></a>
<a id="trace-9256"></a>
<a id="trace-9264"></a>
<a id="trace-9278"></a>
<a id="trace-9287"></a>
<a id="trace-9361"></a>
<a id="trace-9378"></a>
<a id="trace-9383"></a>
<a id="trace-9396"></a>
<a id="trace-9403"></a>
<a id="trace-9412"></a>
<a id="trace-9421"></a>
<a id="trace-9430"></a>
<a id="trace-9501"></a>
<a id="trace-9508"></a>
<a id="trace-9520"></a>
<a id="trace-9527"></a>
<a id="trace-9537"></a>
<a id="trace-9543"></a>
<a id="trace-9553"></a>
<a id="trace-9562"></a>
<a id="trace-9570"></a>
<a id="trace-9581"></a>
<a id="trace-9655"></a>
<a id="trace-9663"></a>
<a id="trace-9669"></a>
<a id="trace-9679"></a>
<a id="trace-9684"></a>
<a id="trace-9704"></a>
<a id="trace-9725"></a>
<a id="trace-9797"></a>
<a id="trace-9805"></a>
<a id="trace-9812"></a>
<a id="trace-9824"></a>
<a id="trace-9829"></a>
<a id="trace-9838"></a>
<a id="trace-9846"></a>
<a id="trace-9856"></a>
<a id="trace-9865"></a>
<a id="trace-9937"></a>
<a id="trace-9949"></a>
<a id="trace-9957"></a>
<a id="trace-9964"></a>
<a id="trace-9974"></a>
<a id="trace-9980"></a>
<a id="trace-9988"></a>
<a id="trace-10004"></a>
<a id="trace-10013"></a>
<a id="trace-10084"></a>
<a id="trace-10090"></a>
<a id="trace-10098"></a>
<a id="trace-10106"></a>
<a id="trace-10115"></a>
<a id="trace-10126"></a>
<a id="trace-10134"></a>
<a id="trace-10141"></a>
<a id="trace-10151"></a>
<a id="trace-10162"></a>
<a id="trace-10235"></a>
<a id="trace-10240"></a>
<a id="trace-10248"></a>
<a id="trace-10260"></a>
<a id="trace-10267"></a>
<a id="trace-10294"></a>
<a id="trace-10303"></a>
<a id="trace-10377"></a>
<a id="trace-10383"></a>
<a id="trace-10392"></a>
<a id="trace-10400"></a>
<a id="trace-10409"></a>
<a id="trace-10414"></a>
<a id="trace-10421"></a>
<a id="trace-10431"></a>
<a id="trace-10439"></a>
<a id="trace-10522"></a>
<a id="trace-10528"></a>
<a id="trace-10536"></a>
<a id="trace-10542"></a>
<a id="trace-10567"></a>
<a id="trace-10574"></a>
<a id="trace-10584"></a>
<a id="trace-10596"></a>
<a id="trace-10667"></a>
<a id="trace-10674"></a>
<a id="trace-10682"></a>
<a id="trace-10687"></a>
<a id="trace-10697"></a>
<a id="trace-10711"></a>
<a id="trace-10719"></a>
<a id="trace-10730"></a>
<a id="trace-10740"></a>
<a id="trace-10813"></a>
<a id="trace-10829"></a>
<a id="trace-10837"></a>
<a id="trace-10845"></a>
<a id="trace-10858"></a>
<a id="trace-10867"></a>
<a id="trace-10877"></a>
<a id="trace-10886"></a>
<a id="trace-10958"></a>
<a id="trace-10970"></a>
<a id="trace-10987"></a>
<a id="trace-10995"></a>
<a id="trace-11011"></a>
<a id="trace-11030"></a>
<a id="trace-11104"></a>
<a id="trace-11109"></a>
<a id="trace-11128"></a>
<a id="trace-11135"></a>
<a id="trace-11143"></a>
<a id="trace-11153"></a>
<a id="trace-11163"></a>
<a id="trace-11172"></a>
<a id="trace-11251"></a>
<a id="trace-11262"></a>
<a id="trace-11269"></a>
<a id="trace-11277"></a>
<a id="trace-11282"></a>
<a id="trace-11289"></a>
<a id="trace-11306"></a>
<a id="trace-11317"></a>
<a id="trace-11387"></a>
<a id="trace-11393"></a>
<a id="trace-11405"></a>
<a id="trace-11411"></a>
<a id="trace-11421"></a>
<a id="trace-11429"></a>
<a id="trace-11440"></a>
<a id="trace-11447"></a>
<a id="trace-11455"></a>
<a id="trace-11535"></a>
<a id="trace-11542"></a>
<a id="trace-11550"></a>
<a id="trace-11555"></a>
<a id="trace-11580"></a>
<a id="trace-11588"></a>
<a id="trace-11598"></a>
<a id="trace-11608"></a>
<a id="trace-11683"></a>
<a id="trace-11690"></a>
<a id="trace-11697"></a>
<a id="trace-11704"></a>
<a id="trace-11711"></a>
<a id="trace-11716"></a>
<a id="trace-11724"></a>
<a id="trace-11732"></a>
<a id="trace-11750"></a>
<a id="trace-11826"></a>
<a id="trace-11832"></a>
<a id="trace-11849"></a>
<a id="trace-11858"></a>
<a id="trace-11866"></a>
<a id="trace-11879"></a>
<a id="trace-11888"></a>
<a id="trace-11968"></a>
<a id="trace-11974"></a>
<a id="trace-11982"></a>
<a id="trace-11988"></a>
<a id="trace-11996"></a>
<a id="trace-12024"></a>
<a id="trace-12044"></a>
<a id="trace-12115"></a>
<a id="trace-12120"></a>
<a id="trace-12133"></a>
<a id="trace-12145"></a>
<a id="trace-12154"></a>
<a id="trace-12163"></a>
<a id="trace-12188"></a>
<a id="trace-12259"></a>
<a id="trace-12278"></a>
<a id="trace-12288"></a>
<a id="trace-12306"></a>
<a id="trace-12314"></a>
<a id="trace-12326"></a>
<a id="trace-12397"></a>
<a id="trace-12405"></a>
<a id="trace-12419"></a>
<a id="trace-12430"></a>
<a id="trace-12444"></a>
<a id="trace-12463"></a>
<a id="trace-12541"></a>
<a id="trace-12550"></a>
<a id="trace-12564"></a>
<a id="trace-12572"></a>
<a id="trace-12578"></a>
<a id="trace-12595"></a>
<a id="trace-12617"></a>
<a id="trace-12693"></a>
<a id="trace-12702"></a>
<a id="trace-12710"></a>
<a id="trace-12717"></a>
<a id="trace-12731"></a>
<a id="trace-12747"></a>
<a id="trace-12759"></a>
<a id="trace-12831"></a>
<a id="trace-12846"></a>
<a id="trace-12859"></a>
<a id="trace-12867"></a>
<a id="trace-12876"></a>
<a id="trace-12886"></a>
<a id="trace-12894"></a>
<a id="trace-12904"></a>
<a id="trace-12975"></a>
<a id="trace-12981"></a>
<a id="trace-12992"></a>
<a id="trace-12997"></a>
<a id="trace-13006"></a>
<a id="trace-13011"></a>
<a id="trace-13019"></a>
<a id="trace-13031"></a>
<a id="trace-13039"></a>
<a id="trace-13051"></a>
<a id="trace-13123"></a>
<a id="trace-13137"></a>
<a id="trace-13142"></a>
<a id="trace-13152"></a>
<a id="trace-13159"></a>
<a id="trace-13167"></a>
<a id="trace-13174"></a>
<a id="trace-13183"></a>
<a id="trace-13264"></a>
<a id="trace-13296"></a>
<a id="trace-13304"></a>
<a id="trace-13314"></a>
<a id="trace-13332"></a>
<a id="trace-13341"></a>
<a id="trace-13410"></a>
<a id="trace-13424"></a>
<a id="trace-13431"></a>
<a id="trace-13439"></a>
<a id="trace-13445"></a>
<a id="trace-13474"></a>
<a id="trace-13485"></a>
<a id="trace-13561"></a>
<a id="trace-13570"></a>
<a id="trace-13577"></a>
<a id="trace-13591"></a>
<a id="trace-13599"></a>
<a id="trace-13606"></a>
<a id="trace-13615"></a>
<a id="trace-13625"></a>
<a id="trace-13699"></a>
<a id="trace-13705"></a>
<a id="trace-13714"></a>
<a id="trace-13720"></a>
<a id="trace-13732"></a>
<a id="trace-13749"></a>
<a id="trace-13773"></a>
<a id="trace-13843"></a>
<a id="trace-13849"></a>
<a id="trace-13858"></a>
<a id="trace-13863"></a>
<a id="trace-13881"></a>
<a id="trace-13889"></a>
<a id="trace-13900"></a>
<a id="trace-13923"></a>
<a id="trace-13996"></a>
<a id="trace-14016"></a>
<a id="trace-14022"></a>
<a id="trace-14031"></a>
<a id="trace-14038"></a>
<a id="trace-14061"></a>
<a id="trace-14132"></a>
<a id="trace-14141"></a>
<a id="trace-14156"></a>
<a id="trace-14164"></a>
<a id="trace-14169"></a>
<a id="trace-14179"></a>
<a id="trace-14186"></a>
<a id="trace-14197"></a>
<a id="trace-14275"></a>
<a id="trace-14291"></a>
<a id="trace-14303"></a>
<a id="trace-14325"></a>
<a id="trace-14334"></a>
<a id="trace-14346"></a>
<a id="trace-14424"></a>
<a id="trace-14429"></a>
<a id="trace-14436"></a>
<a id="trace-14443"></a>
<a id="trace-14452"></a>
<a id="trace-14467"></a>
<a id="trace-14474"></a>
<a id="trace-14489"></a>
<a id="trace-14499"></a>
<a id="trace-14570"></a>
<a id="trace-14586"></a>
<a id="trace-14591"></a>
<a id="trace-14604"></a>
<a id="trace-14611"></a>
<a id="trace-14629"></a>
<a id="trace-14639"></a>
<a id="trace-14712"></a>
<a id="trace-14720"></a>
<a id="trace-14732"></a>
<a id="trace-14738"></a>
<a id="trace-14747"></a>
<a id="trace-14752"></a>
<a id="trace-14761"></a>
<a id="trace-14778"></a>
<a id="trace-14858"></a>
<a id="trace-14864"></a>
<a id="trace-14872"></a>
<a id="trace-14903"></a>
<a id="trace-14911"></a>
<a id="trace-14920"></a>
<a id="trace-14932"></a>
- 6.70s–359.80s (×548), actor 37, squad 4 (trace 559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 444. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09450152262342243, 'next_transition': 609}.
<a id="trace-745"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 745): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 652. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36162161238151275, 'next_transition': 941}.
<a id="trace-941"></a>
<a id="trace-964"></a>
<a id="trace-986"></a>
<a id="trace-1004"></a>
<a id="trace-1023"></a>
<a id="trace-1041"></a>
<a id="trace-1066"></a>
<a id="trace-1084"></a>
<a id="trace-1165"></a>
<a id="trace-1179"></a>
<a id="trace-1202"></a>
<a id="trace-1221"></a>
<a id="trace-1236"></a>
<a id="trace-1249"></a>
<a id="trace-1272"></a>
<a id="trace-1284"></a>
<a id="trace-1300"></a>
<a id="trace-1311"></a>
<a id="trace-1392"></a>
<a id="trace-1413"></a>
<a id="trace-1426"></a>
<a id="trace-1436"></a>
<a id="trace-1458"></a>
<a id="trace-1468"></a>
- 11.20s–22.75s (×24), actor 5, squad 0 (trace 941): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 655. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3275016915707186, 'next_transition': 964}.
<a id="trace-1475"></a>
- 23.05s–23.05s (×1), actor 0, squad 0 (trace 1475): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1318. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2950079221871468, 'next_transition': 1730}.
<a id="trace-1476"></a>
- 23.05s–23.05s (×1), actor 0, squad 0 (trace 1476): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1318. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2950079221871468, 'next_transition': 1730}.
<a id="trace-1730"></a>
<a id="trace-1746"></a>
<a id="trace-1768"></a>
<a id="trace-1789"></a>
<a id="trace-1873"></a>
<a id="trace-1888"></a>
<a id="trace-1913"></a>
<a id="trace-1926"></a>
<a id="trace-1940"></a>
<a id="trace-1953"></a>
<a id="trace-1973"></a>
<a id="trace-1988"></a>
<a id="trace-2007"></a>
<a id="trace-2021"></a>
<a id="trace-2108"></a>
<a id="trace-2119"></a>
<a id="trace-2133"></a>
<a id="trace-2142"></a>
<a id="trace-2160"></a>
<a id="trace-2173"></a>
<a id="trace-2187"></a>
<a id="trace-2197"></a>
<a id="trace-2213"></a>
<a id="trace-2218"></a>
<a id="trace-2295"></a>
<a id="trace-2305"></a>
- 23.25s–35.75s (×26), actor 5, squad 0 (trace 1730): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1321. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3267542172181514, 'next_transition': 1746}.
<a id="trace-2316"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2316): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2224. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2696}.
<a id="trace-2317"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2317): bounding overwatch. Knowledge: actor memory at 35.00s, trace 2224. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2696}.
<a id="trace-2318"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2318): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 2224. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2696}.
<a id="trace-2696"></a>
- 36.25s–36.25s (×1), actor 5, squad 0 (trace 2696): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2227. Next observer evidence: None.
<a id="trace-2702"></a>
<a id="trace-3076"></a>
- 36.35s–36.60s (×2), actor 0, squad 0 (trace 2702): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2224. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08488333172982522, 'next_transition': 3076}.
<a id="trace-3456"></a>
<a id="trace-3478"></a>
<a id="trace-3506"></a>
<a id="trace-3538"></a>
<a id="trace-3560"></a>
<a id="trace-3585"></a>
<a id="trace-3602"></a>
- 36.75s–39.75s (×7), actor 5, squad 0 (trace 3456): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2227. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6547089545104364, 'next_transition': 3478}.
<a id="trace-3635"></a>
- 40.05s–40.05s (×1), actor 5, squad 0 (trace 3635): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 40.05s, trace 3635. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13475620653606857, 'next_transition': 3708}.
<a id="trace-3708"></a>
- 40.25s–40.25s (×1), actor 5, squad 0 (trace 3708): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.05s, trace 3635. Next observer evidence: None.
<a id="trace-3713"></a>
- 40.30s–40.30s (×1), actor 0, squad 0 (trace 3713): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 3616. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22513847816059088, 'next_transition': 4095}.
<a id="trace-3714"></a>
- 40.30s–40.30s (×1), actor 0, squad 0 (trace 3714): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 3616. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22513847816059088, 'next_transition': 4095}.
<a id="trace-4095"></a>
- 40.75s–40.75s (×1), actor 5, squad 0 (trace 4095): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.05s, trace 3635. Next observer evidence: {'until': 40.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26250392218784907, 'next_transition': 401}.
<a id="trace-401"></a>
- 40.85s–40.85s (×1), actor 5, squad 0 (events line 401): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4097"></a>
- 40.85s–40.85s (×1), actor 5, squad 0 (trace 4097): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.451504 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 40.85s, trace 4097. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299862627302064, 'next_transition': 4110}.
<a id="trace-4098"></a>
- 40.85s–40.85s (×1), actor 5, squad 0 (trace 4098): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.451504 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 40.85s, trace 4098. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299862627302064, 'next_transition': 4110}.
<a id="trace-4110"></a>
<a id="trace-4131"></a>
- 41.25s–41.75s (×2), actor 5, squad 0 (trace 4110): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.85s, trace 4098. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4333937453812012, 'next_transition': 4131}.
<a id="trace-4153"></a>
- 42.05s–42.05s (×1), actor 0, squad 0 (trace 4153): Fixing. Knowledge: actor memory at 40.00s, trace 3616. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22544246556857905, 'next_transition': 4173}.
<a id="trace-4173"></a>
<a id="trace-4186"></a>
<a id="trace-4220"></a>
<a id="trace-4258"></a>
<a id="trace-4285"></a>
<a id="trace-4315"></a>
<a id="trace-4410"></a>
<a id="trace-4440"></a>
<a id="trace-4480"></a>
<a id="trace-4522"></a>
<a id="trace-4561"></a>
<a id="trace-4603"></a>
<a id="trace-4662"></a>
<a id="trace-4710"></a>
<a id="trace-4760"></a>
<a id="trace-4804"></a>
<a id="trace-4894"></a>
<a id="trace-4910"></a>
<a id="trace-4931"></a>
<a id="trace-4936"></a>
<a id="trace-4949"></a>
<a id="trace-4960"></a>
- 42.25s–52.75s (×22), actor 5, squad 0 (trace 4173): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.85s, trace 4098. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41998723819903, 'next_transition': 4186}.
<a id="trace-4963"></a>
- 52.80s–52.80s (×1), actor 1, squad 0 (trace 4963): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 50.00s, trace 4817. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0710139769150184, 'next_transition': 4976}.
<a id="trace-4964"></a>
- 52.80s–52.80s (×1), actor 1, squad 0 (trace 4964): NeedSupport. Knowledge: actor memory at 50.00s, trace 4817. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0710139769150184, 'next_transition': 4976}.
<a id="trace-4976"></a>
<a id="trace-4980"></a>
- 53.25s–53.75s (×2), actor 5, squad 0 (trace 4976): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 4819. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560118213575227, 'next_transition': 4980}.
<a id="trace-4983"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 4983): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 4817. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339961099185225, 'next_transition': 5133}.
<a id="trace-4987"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 4987): MoveTactically. Knowledge: actor memory at 50.00s, trace 4817. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339961099185225, 'next_transition': 5133}.
<a id="trace-4988"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 4988): Reorganise complete. Knowledge: actor memory at 50.00s, trace 4817. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339961099185225, 'next_transition': 5133}.
<a id="trace-5133"></a>
<a id="trace-5145"></a>
<a id="trace-5222"></a>
<a id="trace-5227"></a>
<a id="trace-5251"></a>
<a id="trace-5265"></a>
<a id="trace-5278"></a>
<a id="trace-5286"></a>
<a id="trace-5297"></a>
<a id="trace-5301"></a>
<a id="trace-5308"></a>
<a id="trace-5316"></a>
<a id="trace-5393"></a>
<a id="trace-5404"></a>
<a id="trace-5414"></a>
<a id="trace-5420"></a>
<a id="trace-5435"></a>
<a id="trace-5439"></a>
<a id="trace-5450"></a>
<a id="trace-5460"></a>
<a id="trace-5473"></a>
<a id="trace-5481"></a>
- 54.25s–64.75s (×22), actor 5, squad 0 (trace 5133): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 4819. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6306804353664347, 'next_transition': 5145}.
<a id="trace-5503"></a>
- 65.05s–65.05s (×1), actor 1, squad 0 (trace 5503): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 65.00s, trace 5490. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.314991867757474, 'next_transition': 5564}.
<a id="trace-5564"></a>
- 65.25s–65.25s (×1), actor 5, squad 0 (trace 5564): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 5492. Next observer evidence: None.
<a id="trace-5567"></a>
- 65.30s–65.30s (×1), actor 1, squad 0 (trace 5567): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 5490. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300168725918175, 'next_transition': 5699}.
<a id="trace-5570"></a>
- 65.30s–65.30s (×1), actor 1, squad 0 (trace 5570): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 5490. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300168725918175, 'next_transition': 5699}.
<a id="trace-5571"></a>
- 65.30s–65.30s (×1), actor 1, squad 0 (trace 5571): Reorganise complete: known contact. Knowledge: actor memory at 65.00s, trace 5490. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300168725918175, 'next_transition': 5699}.
<a id="trace-5699"></a>
<a id="trace-5715"></a>
<a id="trace-5724"></a>
<a id="trace-5733"></a>
<a id="trace-5740"></a>
<a id="trace-5756"></a>
<a id="trace-5766"></a>
<a id="trace-5778"></a>
- 65.75s–69.25s (×8), actor 5, squad 0 (trace 5699): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 5492. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1025069102422314, 'next_transition': 5715}.
<a id="trace-5786"></a>
- 69.65s–69.65s (×1), actor 1, squad 0 (trace 5786): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 5490. Next observer evidence: None.
<a id="trace-5787"></a>
- 69.65s–69.65s (×1), actor 1, squad 0 (trace 5787): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 5490. Next observer evidence: None.
<a id="trace-5842"></a>
<a id="trace-5922"></a>
<a id="trace-5933"></a>
<a id="trace-5949"></a>
<a id="trace-5955"></a>
<a id="trace-5972"></a>
<a id="trace-5979"></a>
<a id="trace-5991"></a>
<a id="trace-5997"></a>
<a id="trace-6008"></a>
<a id="trace-6013"></a>
<a id="trace-6085"></a>
<a id="trace-6091"></a>
<a id="trace-6104"></a>
<a id="trace-6110"></a>
<a id="trace-6122"></a>
<a id="trace-6127"></a>
<a id="trace-6138"></a>
<a id="trace-6149"></a>
<a id="trace-6156"></a>
<a id="trace-6160"></a>
<a id="trace-6238"></a>
<a id="trace-6245"></a>
<a id="trace-6258"></a>
<a id="trace-6265"></a>
<a id="trace-6276"></a>
<a id="trace-6280"></a>
- 69.75s–82.75s (×27), actor 5, squad 0 (trace 5842): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 5492. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5609919362972261, 'next_transition': 5922}.
<a id="trace-6290"></a>
- 83.05s–83.05s (×1), actor 1, squad 0 (trace 6290): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 6166. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6369}.
<a id="trace-6312"></a>
- 83.05s–83.05s (×1), actor 1, squad 0 (trace 6312): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 6166. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6369}.
<a id="trace-6369"></a>
<a id="trace-6378"></a>
<a id="trace-6400"></a>
<a id="trace-6409"></a>
<a id="trace-6493"></a>
<a id="trace-6501"></a>
<a id="trace-6515"></a>
<a id="trace-6523"></a>
<a id="trace-6533"></a>
<a id="trace-6539"></a>
<a id="trace-6551"></a>
<a id="trace-6560"></a>
<a id="trace-6574"></a>
<a id="trace-6583"></a>
- 83.25s–89.75s (×14), actor 5, squad 0 (trace 6369): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 6168. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6378}.
<a id="trace-6655"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 6655): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 90.00s, trace 6587. Next observer evidence: None.
<a id="trace-6663"></a>
<a id="trace-6673"></a>
<a id="trace-6688"></a>
<a id="trace-6698"></a>
<a id="trace-6712"></a>
<a id="trace-6724"></a>
<a id="trace-6747"></a>
<a id="trace-6759"></a>
<a id="trace-6774"></a>
- 90.25s–94.25s (×9), actor 5, squad 0 (trace 6663): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 6589. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449791120650298, 'next_transition': 6673}.
<a id="trace-779"></a>
- 94.65s–94.65s (×1), actor 5, squad 0 (events line 779): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6781"></a>
- 94.65s–94.65s (×1), actor 5, squad 0 (trace 6781): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.256153 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 94.65s, trace 6781. Next observer evidence: None.
<a id="trace-6782"></a>
- 94.65s–94.65s (×1), actor 5, squad 0 (trace 6782): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.256153 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 94.65s, trace 6782. Next observer evidence: None.
<a id="trace-6785"></a>
<a id="trace-6866"></a>
<a id="trace-6880"></a>
- 94.75s–96.25s (×3), actor 5, squad 0 (trace 6785): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 94.65s, trace 6782. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6866}.
<a id="trace-6883"></a>
- 96.30s–96.30s (×1), actor 1, squad 0 (trace 6883): Withdraw to received rally. Knowledge: actor memory at 95.00s, trace 6793. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6944}.
<a id="trace-6884"></a>
- 96.30s–96.30s (×1), actor 1, squad 0 (trace 6884): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 6793. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6944}.
<a id="trace-6944"></a>
<a id="trace-6960"></a>
<a id="trace-6969"></a>
<a id="trace-6987"></a>
<a id="trace-6997"></a>
<a id="trace-7013"></a>
<a id="trace-7026"></a>
<a id="trace-7104"></a>
<a id="trace-7112"></a>
<a id="trace-7127"></a>
<a id="trace-7134"></a>
<a id="trace-7150"></a>
<a id="trace-7158"></a>
<a id="trace-7166"></a>
<a id="trace-7175"></a>
<a id="trace-7188"></a>
<a id="trace-7198"></a>
<a id="trace-7276"></a>
<a id="trace-7282"></a>
<a id="trace-7299"></a>
<a id="trace-7308"></a>
<a id="trace-7321"></a>
<a id="trace-7331"></a>
<a id="trace-7347"></a>
- 96.75s–108.25s (×24), actor 5, squad 0 (trace 6944): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 6795. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.945041179343, 'next_transition': 6960}.
<a id="trace-7350"></a>
- 108.45s–108.45s (×1), actor 1, squad 0 (trace 7350): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 7207. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7413}.
<a id="trace-7351"></a>
- 108.45s–108.45s (×1), actor 1, squad 0 (trace 7351): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 7207. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7413}.
<a id="trace-7413"></a>
<a id="trace-7429"></a>
<a id="trace-7439"></a>
<a id="trace-7519"></a>
<a id="trace-7527"></a>
<a id="trace-7540"></a>
<a id="trace-7547"></a>
<a id="trace-7561"></a>
<a id="trace-7569"></a>
<a id="trace-7584"></a>
<a id="trace-7596"></a>
<a id="trace-7612"></a>
<a id="trace-7624"></a>
<a id="trace-7697"></a>
<a id="trace-7707"></a>
<a id="trace-7719"></a>
<a id="trace-7726"></a>
<a id="trace-7740"></a>
<a id="trace-7746"></a>
<a id="trace-7760"></a>
<a id="trace-7767"></a>
<a id="trace-7782"></a>
<a id="trace-7794"></a>
<a id="trace-7872"></a>
<a id="trace-7885"></a>
- 108.75s–120.75s (×25), actor 5, squad 0 (trace 7413): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 7209. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875106989908152, 'next_transition': 7429}.
<a id="trace-7893"></a>
- 120.85s–120.85s (×1), actor 1, squad 0 (trace 7893): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 7798. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300078163999174, 'next_transition': 7953}.
<a id="trace-7894"></a>
- 120.85s–120.85s (×1), actor 1, squad 0 (trace 7894): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 7798. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300078163999174, 'next_transition': 7953}.
<a id="trace-7953"></a>
<a id="trace-7962"></a>
<a id="trace-7981"></a>
<a id="trace-7991"></a>
<a id="trace-8006"></a>
<a id="trace-8016"></a>
<a id="trace-8029"></a>
<a id="trace-8039"></a>
<a id="trace-8115"></a>
<a id="trace-8124"></a>
<a id="trace-8143"></a>
<a id="trace-8152"></a>
<a id="trace-8162"></a>
<a id="trace-8170"></a>
<a id="trace-8185"></a>
<a id="trace-8199"></a>
<a id="trace-8208"></a>
<a id="trace-8219"></a>
<a id="trace-8296"></a>
<a id="trace-8302"></a>
<a id="trace-8315"></a>
<a id="trace-8324"></a>
<a id="trace-8340"></a>
<a id="trace-8355"></a>
- 121.25s–132.80s (×24), actor 5, squad 0 (trace 7953): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 7800. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6693333207746217, 'next_transition': 7962}.
<a id="trace-8359"></a>
- 132.85s–132.85s (×1), actor 1, squad 0 (trace 8359): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 8222. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300085123432811, 'next_transition': 8368}.
<a id="trace-8360"></a>
- 132.85s–132.85s (×1), actor 1, squad 0 (trace 8360): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 8222. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300085123432811, 'next_transition': 8368}.
<a id="trace-8368"></a>
<a id="trace-8380"></a>
<a id="trace-8398"></a>
<a id="trace-8408"></a>
<a id="trace-8487"></a>
<a id="trace-8496"></a>
<a id="trace-8504"></a>
<a id="trace-8508"></a>
<a id="trace-8516"></a>
<a id="trace-8525"></a>
<a id="trace-8532"></a>
<a id="trace-8541"></a>
<a id="trace-8550"></a>
<a id="trace-8559"></a>
<a id="trace-8630"></a>
<a id="trace-8635"></a>
<a id="trace-8644"></a>
<a id="trace-8649"></a>
<a id="trace-8659"></a>
<a id="trace-8665"></a>
<a id="trace-8673"></a>
<a id="trace-8683"></a>
<a id="trace-8693"></a>
<a id="trace-8705"></a>
<a id="trace-8776"></a>
<a id="trace-8781"></a>
<a id="trace-8791"></a>
<a id="trace-8796"></a>
<a id="trace-8805"></a>
<a id="trace-8810"></a>
<a id="trace-8818"></a>
<a id="trace-8825"></a>
<a id="trace-8834"></a>
<a id="trace-8848"></a>
<a id="trace-8919"></a>
<a id="trace-8927"></a>
<a id="trace-8936"></a>
<a id="trace-8941"></a>
<a id="trace-8951"></a>
<a id="trace-8958"></a>
<a id="trace-8967"></a>
<a id="trace-8973"></a>
<a id="trace-8982"></a>
<a id="trace-8990"></a>
- 133.30s–154.80s (×44), actor 5, squad 0 (trace 8368): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 8224. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450127555223794, 'next_transition': 8380}.
<a id="trace-1171"></a>
- 155.00s–155.00s (×1), actor 5, squad 0 (events line 1171): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9063}.
<a id="trace-9005"></a>
- 155.00s–155.00s (×1), actor 5, squad 0 (trace 9005): renew committed intent (75 s lifetime). Knowledge: actor memory at 155.00s, trace 9005. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9063}.
<a id="trace-9063"></a>
<a id="trace-9070"></a>
<a id="trace-9078"></a>
<a id="trace-9087"></a>
<a id="trace-9096"></a>
<a id="trace-9102"></a>
<a id="trace-9111"></a>
<a id="trace-9121"></a>
<a id="trace-9134"></a>
<a id="trace-9143"></a>
<a id="trace-9213"></a>
<a id="trace-9218"></a>
<a id="trace-9225"></a>
<a id="trace-9232"></a>
<a id="trace-9240"></a>
<a id="trace-9247"></a>
<a id="trace-9254"></a>
<a id="trace-9262"></a>
<a id="trace-9276"></a>
<a id="trace-9285"></a>
<a id="trace-9359"></a>
<a id="trace-9368"></a>
<a id="trace-9376"></a>
<a id="trace-9381"></a>
<a id="trace-9388"></a>
<a id="trace-9394"></a>
<a id="trace-9401"></a>
<a id="trace-9410"></a>
<a id="trace-9419"></a>
<a id="trace-9428"></a>
<a id="trace-9499"></a>
<a id="trace-9506"></a>
<a id="trace-9518"></a>
<a id="trace-9525"></a>
<a id="trace-9535"></a>
<a id="trace-9541"></a>
<a id="trace-9551"></a>
<a id="trace-9560"></a>
<a id="trace-9568"></a>
<a id="trace-9579"></a>
<a id="trace-9649"></a>
<a id="trace-9653"></a>
<a id="trace-9661"></a>
<a id="trace-9667"></a>
<a id="trace-9677"></a>
<a id="trace-9682"></a>
<a id="trace-9695"></a>
<a id="trace-9702"></a>
<a id="trace-9712"></a>
<a id="trace-9723"></a>
<a id="trace-9795"></a>
<a id="trace-9803"></a>
<a id="trace-9810"></a>
<a id="trace-9815"></a>
<a id="trace-9822"></a>
<a id="trace-9827"></a>
<a id="trace-9836"></a>
<a id="trace-9844"></a>
<a id="trace-9854"></a>
<a id="trace-9863"></a>
<a id="trace-9935"></a>
<a id="trace-9947"></a>
<a id="trace-9955"></a>
<a id="trace-9962"></a>
<a id="trace-9972"></a>
<a id="trace-9978"></a>
<a id="trace-9986"></a>
<a id="trace-9993"></a>
<a id="trace-10002"></a>
<a id="trace-10011"></a>
<a id="trace-10082"></a>
<a id="trace-10088"></a>
<a id="trace-10096"></a>
<a id="trace-10104"></a>
<a id="trace-10113"></a>
<a id="trace-10124"></a>
<a id="trace-10132"></a>
<a id="trace-10139"></a>
<a id="trace-10149"></a>
<a id="trace-10160"></a>
<a id="trace-10233"></a>
<a id="trace-10238"></a>
<a id="trace-10246"></a>
<a id="trace-10251"></a>
<a id="trace-10258"></a>
<a id="trace-10265"></a>
<a id="trace-10274"></a>
<a id="trace-10284"></a>
<a id="trace-10292"></a>
<a id="trace-10301"></a>
<a id="trace-10375"></a>
<a id="trace-10381"></a>
<a id="trace-10390"></a>
<a id="trace-10398"></a>
<a id="trace-10407"></a>
<a id="trace-10412"></a>
<a id="trace-10419"></a>
<a id="trace-10429"></a>
<a id="trace-10437"></a>
<a id="trace-10449"></a>
<a id="trace-10520"></a>
<a id="trace-10526"></a>
<a id="trace-10534"></a>
<a id="trace-10540"></a>
<a id="trace-10552"></a>
<a id="trace-10557"></a>
<a id="trace-10565"></a>
<a id="trace-10572"></a>
<a id="trace-10582"></a>
<a id="trace-10594"></a>
<a id="trace-10665"></a>
<a id="trace-10672"></a>
<a id="trace-10680"></a>
<a id="trace-10685"></a>
<a id="trace-10695"></a>
<a id="trace-10701"></a>
<a id="trace-10709"></a>
<a id="trace-10717"></a>
<a id="trace-10728"></a>
<a id="trace-10738"></a>
- 155.30s–214.80s (×120), actor 5, squad 0 (trace 9063): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 9005. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9070}.
<a id="trace-1452"></a>
- 215.00s–215.00s (×1), actor 5, squad 0 (events line 1452): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10811}.
<a id="trace-10753"></a>
- 215.00s–215.00s (×1), actor 5, squad 0 (trace 10753): renew committed intent (75 s lifetime). Knowledge: actor memory at 215.00s, trace 10753. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10811}.
<a id="trace-10811"></a>
<a id="trace-10819"></a>
<a id="trace-10827"></a>
<a id="trace-10835"></a>
<a id="trace-10843"></a>
<a id="trace-10848"></a>
<a id="trace-10856"></a>
<a id="trace-10865"></a>
<a id="trace-10875"></a>
<a id="trace-10884"></a>
<a id="trace-10956"></a>
<a id="trace-10961"></a>
<a id="trace-10968"></a>
<a id="trace-10978"></a>
<a id="trace-10985"></a>
<a id="trace-10993"></a>
<a id="trace-11002"></a>
<a id="trace-11009"></a>
<a id="trace-11019"></a>
<a id="trace-11028"></a>
<a id="trace-11102"></a>
<a id="trace-11107"></a>
<a id="trace-11115"></a>
<a id="trace-11119"></a>
<a id="trace-11126"></a>
<a id="trace-11133"></a>
<a id="trace-11141"></a>
<a id="trace-11161"></a>
<a id="trace-11170"></a>
<a id="trace-11243"></a>
<a id="trace-11249"></a>
<a id="trace-11260"></a>
<a id="trace-11267"></a>
<a id="trace-11275"></a>
<a id="trace-11280"></a>
<a id="trace-11287"></a>
<a id="trace-11296"></a>
<a id="trace-11304"></a>
<a id="trace-11315"></a>
<a id="trace-11385"></a>
<a id="trace-11391"></a>
<a id="trace-11403"></a>
<a id="trace-11409"></a>
<a id="trace-11419"></a>
<a id="trace-11427"></a>
<a id="trace-11438"></a>
<a id="trace-11445"></a>
<a id="trace-11453"></a>
<a id="trace-11464"></a>
<a id="trace-11533"></a>
<a id="trace-11540"></a>
<a id="trace-11548"></a>
<a id="trace-11553"></a>
<a id="trace-11561"></a>
<a id="trace-11566"></a>
<a id="trace-11578"></a>
<a id="trace-11586"></a>
<a id="trace-11596"></a>
<a id="trace-11606"></a>
<a id="trace-11681"></a>
<a id="trace-11688"></a>
<a id="trace-11695"></a>
<a id="trace-11702"></a>
<a id="trace-11709"></a>
<a id="trace-11714"></a>
<a id="trace-11722"></a>
<a id="trace-11730"></a>
<a id="trace-11740"></a>
<a id="trace-11748"></a>
<a id="trace-11824"></a>
<a id="trace-11830"></a>
<a id="trace-11838"></a>
<a id="trace-11847"></a>
<a id="trace-11856"></a>
<a id="trace-11864"></a>
<a id="trace-11871"></a>
<a id="trace-11877"></a>
<a id="trace-11886"></a>
<a id="trace-11895"></a>
<a id="trace-11966"></a>
<a id="trace-11972"></a>
<a id="trace-11980"></a>
<a id="trace-11986"></a>
<a id="trace-11994"></a>
<a id="trace-12005"></a>
<a id="trace-12014"></a>
<a id="trace-12022"></a>
<a id="trace-12033"></a>
<a id="trace-12042"></a>
<a id="trace-12113"></a>
<a id="trace-12118"></a>
<a id="trace-12127"></a>
<a id="trace-12131"></a>
<a id="trace-12139"></a>
<a id="trace-12143"></a>
<a id="trace-12152"></a>
<a id="trace-12161"></a>
<a id="trace-12170"></a>
<a id="trace-12186"></a>
<a id="trace-12257"></a>
<a id="trace-12262"></a>
<a id="trace-12270"></a>
<a id="trace-12276"></a>
<a id="trace-12286"></a>
<a id="trace-12291"></a>
<a id="trace-12298"></a>
<a id="trace-12304"></a>
<a id="trace-12312"></a>
<a id="trace-12324"></a>
<a id="trace-12395"></a>
<a id="trace-12403"></a>
<a id="trace-12413"></a>
<a id="trace-12417"></a>
<a id="trace-12428"></a>
<a id="trace-12434"></a>
<a id="trace-12442"></a>
<a id="trace-12452"></a>
<a id="trace-12461"></a>
<a id="trace-12470"></a>
<a id="trace-12539"></a>
- 215.30s–275.30s (×120), actor 5, squad 0 (trace 10811): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 10753. Next observer evidence: {'until': 215.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10819}.
<a id="trace-1736"></a>
- 275.70s–275.70s (×1), actor 5, squad 0 (events line 1736): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12545"></a>
- 275.70s–275.70s (×1), actor 5, squad 0 (trace 12545): renew committed intent (75 s lifetime). Knowledge: actor memory at 275.70s, trace 12545. Next observer evidence: {'until': 275.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12548}.
<a id="trace-12548"></a>
<a id="trace-12556"></a>
<a id="trace-12562"></a>
<a id="trace-12570"></a>
<a id="trace-12576"></a>
<a id="trace-12586"></a>
<a id="trace-12593"></a>
<a id="trace-12606"></a>
<a id="trace-12615"></a>
<a id="trace-12687"></a>
<a id="trace-12691"></a>
<a id="trace-12700"></a>
<a id="trace-12708"></a>
<a id="trace-12715"></a>
<a id="trace-12722"></a>
<a id="trace-12729"></a>
<a id="trace-12736"></a>
<a id="trace-12745"></a>
<a id="trace-12757"></a>
<a id="trace-12829"></a>
<a id="trace-12835"></a>
<a id="trace-12844"></a>
<a id="trace-12850"></a>
<a id="trace-12857"></a>
<a id="trace-12865"></a>
<a id="trace-12874"></a>
<a id="trace-12884"></a>
<a id="trace-12892"></a>
<a id="trace-12902"></a>
<a id="trace-12973"></a>
<a id="trace-12979"></a>
<a id="trace-12990"></a>
<a id="trace-12995"></a>
<a id="trace-13004"></a>
<a id="trace-13009"></a>
<a id="trace-13017"></a>
<a id="trace-13029"></a>
<a id="trace-13049"></a>
<a id="trace-13121"></a>
<a id="trace-13126"></a>
<a id="trace-13135"></a>
<a id="trace-13140"></a>
<a id="trace-13150"></a>
<a id="trace-13157"></a>
<a id="trace-13165"></a>
<a id="trace-13172"></a>
<a id="trace-13181"></a>
<a id="trace-13192"></a>
<a id="trace-13262"></a>
<a id="trace-13271"></a>
<a id="trace-13280"></a>
<a id="trace-13285"></a>
<a id="trace-13294"></a>
<a id="trace-13302"></a>
<a id="trace-13312"></a>
<a id="trace-13320"></a>
<a id="trace-13330"></a>
<a id="trace-13339"></a>
<a id="trace-13408"></a>
<a id="trace-13415"></a>
<a id="trace-13422"></a>
<a id="trace-13429"></a>
<a id="trace-13437"></a>
<a id="trace-13443"></a>
<a id="trace-13455"></a>
<a id="trace-13461"></a>
<a id="trace-13472"></a>
<a id="trace-13483"></a>
<a id="trace-13555"></a>
<a id="trace-13559"></a>
<a id="trace-13568"></a>
<a id="trace-13575"></a>
<a id="trace-13583"></a>
<a id="trace-13589"></a>
<a id="trace-13597"></a>
<a id="trace-13604"></a>
<a id="trace-13613"></a>
<a id="trace-13623"></a>
<a id="trace-13697"></a>
<a id="trace-13703"></a>
<a id="trace-13712"></a>
<a id="trace-13718"></a>
<a id="trace-13730"></a>
<a id="trace-13739"></a>
<a id="trace-13747"></a>
<a id="trace-13756"></a>
<a id="trace-13763"></a>
<a id="trace-13771"></a>
<a id="trace-13841"></a>
<a id="trace-13847"></a>
<a id="trace-13856"></a>
<a id="trace-13861"></a>
<a id="trace-13873"></a>
<a id="trace-13879"></a>
<a id="trace-13887"></a>
<a id="trace-13898"></a>
<a id="trace-13910"></a>
<a id="trace-13921"></a>
<a id="trace-13990"></a>
<a id="trace-13994"></a>
<a id="trace-14002"></a>
<a id="trace-14006"></a>
<a id="trace-14014"></a>
<a id="trace-14020"></a>
<a id="trace-14029"></a>
<a id="trace-14036"></a>
<a id="trace-14046"></a>
<a id="trace-14059"></a>
<a id="trace-14130"></a>
<a id="trace-14139"></a>
<a id="trace-14149"></a>
<a id="trace-14154"></a>
<a id="trace-14162"></a>
<a id="trace-14167"></a>
<a id="trace-14177"></a>
<a id="trace-14184"></a>
<a id="trace-14195"></a>
<a id="trace-14204"></a>
<a id="trace-14273"></a>
- 275.80s–335.30s (×119), actor 5, squad 0 (trace 12548): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.70s, trace 12545. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12556}.
<a id="trace-2021"></a>
- 335.70s–335.70s (×1), actor 5, squad 0 (events line 2021): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14280"></a>
- 335.70s–335.70s (×1), actor 5, squad 0 (trace 14280): renew committed intent (75 s lifetime). Knowledge: actor memory at 335.70s, trace 14280. Next observer evidence: {'until': 335.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14283}.
<a id="trace-14283"></a>
<a id="trace-14289"></a>
<a id="trace-14301"></a>
<a id="trace-14311"></a>
<a id="trace-14315"></a>
<a id="trace-14323"></a>
<a id="trace-14332"></a>
<a id="trace-14344"></a>
<a id="trace-14353"></a>
<a id="trace-14422"></a>
<a id="trace-14427"></a>
<a id="trace-14434"></a>
<a id="trace-14441"></a>
<a id="trace-14450"></a>
<a id="trace-14457"></a>
<a id="trace-14465"></a>
<a id="trace-14472"></a>
<a id="trace-14487"></a>
<a id="trace-14497"></a>
<a id="trace-14568"></a>
<a id="trace-14576"></a>
<a id="trace-14584"></a>
<a id="trace-14589"></a>
<a id="trace-14596"></a>
<a id="trace-14602"></a>
<a id="trace-14609"></a>
<a id="trace-14618"></a>
<a id="trace-14627"></a>
<a id="trace-14637"></a>
<a id="trace-14710"></a>
<a id="trace-14718"></a>
<a id="trace-14730"></a>
<a id="trace-14736"></a>
<a id="trace-14745"></a>
<a id="trace-14750"></a>
<a id="trace-14759"></a>
<a id="trace-14769"></a>
<a id="trace-14776"></a>
<a id="trace-14787"></a>
<a id="trace-14856"></a>
<a id="trace-14862"></a>
<a id="trace-14870"></a>
<a id="trace-14877"></a>
<a id="trace-14887"></a>
<a id="trace-14892"></a>
<a id="trace-14901"></a>
<a id="trace-14909"></a>
<a id="trace-14918"></a>
<a id="trace-14930"></a>
- 335.80s–359.80s (×49), actor 5, squad 0 (trace 14283): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.70s, trace 14280. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14289}.

## Net delivery

125 matched order/radio deliveries; 249 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.257s; maximum 2.450s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2032: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2033: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2034: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2035: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2036: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2037: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2230: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2231: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2232: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2233: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2234: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2235: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3616: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3620: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3621: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3622: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3623: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3624: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3625: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3626: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3627: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.05s leader 5, trace 3635: estimate 7.38; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.85s leader 5, trace 4097: estimate 7.36; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.85s leader 5, trace 4098: estimate 7.36; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4334: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4337: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4338: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4339: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4340: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4341: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4342: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4343: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4344: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4345: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 4818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4819: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4820: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 4821: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4822: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4823: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4824: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4825: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4826: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4827: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 5154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 5155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 5156: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 5157: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 5158: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 5159: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 5160: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 5161: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 5162: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 5163: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 5164: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5322: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5324: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 5325: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5326: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5327: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5328: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5329: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5330: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5331: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5332: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5490: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5492: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5493: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5494: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5495: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5496: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5497: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5498: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5499: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 5848: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 5849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 5850: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 5851: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 5852: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 5853: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5854: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5855: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5856: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5857: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 6019: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 6020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 6021: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 6022: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 6023: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 6024: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 6025: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 6026: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 6027: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 6028: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 6166: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 6167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 6168: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 6169: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 6170: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 6171: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 6172: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 6173: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 6174: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 6175: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 6418: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 6419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 6420: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 6421: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 6422: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 6423: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 6424: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 6425: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 6426: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 6427: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 6587: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 6588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 6589: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 6590: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 6591: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 6592: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 6593: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 6594: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 6595: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 6596: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.65s leader 5, trace 6781: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.65s leader 5, trace 6782: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 6793: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 6794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 6795: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 6796: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 6797: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 6798: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 6799: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 6800: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 6801: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 6802: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 7031: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 7032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 7033: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 7034: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 7035: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 7036: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 7037: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 7038: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 7039: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 7040: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 7207: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 7208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 7209: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 7210: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 7211: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 7212: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 7213: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 7214: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 7215: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 7216: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 7449: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 7450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 7451: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 7452: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 7453: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 7454: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 7455: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 7456: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 7457: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 7458: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 7628: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 7629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 7630: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 7631: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 7632: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 7633: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 7634: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 7635: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 7636: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 7637: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7798: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 7799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7800: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 7801: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 7802: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7803: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 7804: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7805: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7806: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7807: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 8048: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 8049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 8050: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 8051: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 8052: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 8053: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 8054: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 8055: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 8056: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 8057: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 8222: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 8223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 8224: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 8225: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 8226: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 8227: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 8228: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 8229: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 8230: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 8231: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 8411: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 8412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 8413: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 8414: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 8415: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 8416: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 8417: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 8418: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 8419: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 8420: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 8564: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 8565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 8566: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 8567: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 8568: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 8569: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 8570: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 8571: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 8572: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 8573: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 8708: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 8709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8710: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 8711: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 8712: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 8713: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 8714: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8715: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8716: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 8717: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8852: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 8853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8854: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 8855: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 8856: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 8857: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 8858: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8859: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8860: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 8861: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8995: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 8996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8997: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8998: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8999: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 9000: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 9001: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 9002: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 9003: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 9004: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 9005: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 9145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 9146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 9147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 9148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 9149: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 9150: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 9151: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 9152: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 9153: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 9154: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 9289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 9290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 9291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 9292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 9293: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 9294: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 9295: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 9296: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 9297: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 9298: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 9433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 9434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 9436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 9437: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 9438: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 9439: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9440: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9441: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 9442: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 9583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 9588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 9591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 9727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 9732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 9870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 9875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 10014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 10015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 10016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 10017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 10018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 10019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 10020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 10021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 10022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 10023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 10164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 10165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 10166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 10167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 10168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 10169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 10170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 10171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 10172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 10173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 10308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 10309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 10311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 10312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 10314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 10317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 10452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 10457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 10598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 10600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 10603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 10606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 10744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 10746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 10749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 10752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 10888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 10889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 10890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 10891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 10892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 10893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 10894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 10895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 10896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 10897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 11032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 11033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 11035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 11036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 11038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 11041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 11175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 11176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 11177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 11178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 11179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 11181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 11184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 11318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 11319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 11320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 11321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 11322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 11323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 11324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 11325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 11326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 11327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 11466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 11467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 11468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 11469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 11470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 11471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 11472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 11473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 11474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 11475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 11614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 11615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 11617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 11620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 11623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 11753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 11754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 11756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 11759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 11762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 11898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 11899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 11901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 11904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 11907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 12047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 12048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 12049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 12050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 12051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 12052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 12053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 12056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 12189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 12190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 12191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 12192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 12193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 12194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 12195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 12196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 12197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 12198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 12327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 12328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 12329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 12330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 12331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 12332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 12333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 12334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 12335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 12336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 12473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 12474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 12475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 12476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 12477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 12478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 12479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 12480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 12481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 12482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.70s leader 5, trace 12545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 12618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 12619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 12620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 12621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 12622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 12623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 12624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 12625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 12626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 12627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 12761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 12762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 12763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 12764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 12765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 12766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 12767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 12768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 12769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 12770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 12907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 12908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 12910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 12911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 12912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 12913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 12914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 12915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 12916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 13052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 13053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 13054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 13055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 13056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 13057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 13058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 13059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 13060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 13061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 13194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 13195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 13196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 13197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 13198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 13199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 13200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 13201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 13202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 13203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 13343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 13344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 13345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 13346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 13347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 13348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 13349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 13350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 13351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 13352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 13486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 13487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 13488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 13489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 13490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 13491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 13492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 13493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 13494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 13495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 13627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 13628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 13629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 13630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 13631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 13632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 13633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 13634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 13635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 13636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 13776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 13777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 13778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 13779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 13780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 13781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 13782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 13783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 13784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 13785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 13924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 13925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 13926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 13927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 13928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 13929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 13930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 13931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 13932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 13933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 14062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 14063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 14064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 14065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 14066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 14067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 14068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 14069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 14070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 14071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 14207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 14208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 14209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 14210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 14211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 14212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 14213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 14214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 14215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 14216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.70s leader 5, trace 14280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 14355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 14356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 14357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 14358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 14359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 14360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 14361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 14362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 14363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 14364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 14501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 14502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 14503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 14504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 14505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 14506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 14507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 14508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 14509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 14510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 14643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 14644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 14645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 14646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 14647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 14648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 14649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 14650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 14651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 14652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 14789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 14790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 14791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 14792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 14793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 14795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 14796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 14797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 14798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 14933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 14934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 14935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 14936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 14937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 14939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 14940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 14941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 14942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Reed killed in action

## Outcome attribution

- 94.65s, evidence 779: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 94.65s, evidence 6781: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.256153 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 94.65s, evidence 6782: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.256153 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 155.00s, evidence 1171: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9063}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 215.00s, evidence 1452: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10811}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 275.70s, evidence 1736: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 335.70s, evidence 2021: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
