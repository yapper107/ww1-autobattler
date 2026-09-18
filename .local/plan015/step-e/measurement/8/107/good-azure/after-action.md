# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/8/107/good-azure/battle-107-1789673786364953223`

## Battle summary

**Ember** · 360 s · 154 shots.

### Turning points

- 19.2s, squad 5: contact (events line 210). First recorded contact.
- 27.2s, squad 0: withdrawal ([trace 4325](#trace-4325)). 44.9s, squad 0: took cover and returned fire.
- 44.1s, squad 0: help call ([trace 5853](#trace-5853)). No completion observed before termination.
- 49.1s, squad 0: withdrawal ([trace 6295](#trace-6295)). 80.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 86.2s, squad 0: withdrawal ([trace 8255](#trace-8255)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 9 shots, 2/8 lost.
- **1** — FightHere; chose advanced tactically, took cover and returned fire; no completed objective recorded; 4 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 120 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 21 shots, 0/2 lost.

### Decisions and attribution

At 33.5s, squad 1 chose FightHere: nearest known group ([trace 5263](#trace-5263)), followed by 1 shots and 1 own casualties; estimate 13.2 against 10 distinct squad-reported contacts; At 26.0s, squad 1 chose took cover and returned fire ([trace 4056](#trace-4056)), followed by 1 shots and 0 own casualties; estimate 11.9 against 0 distinct squad-reported contacts; At 27.2s, squad 0 chose broke contact ([trace 4325](#trace-4325)), followed by 1 shots and 0 own casualties; estimate 11.4 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449901673119365, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 827}.

### Communication

137 matched deliveries (mean 0.37s, max 1.50s); 506 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 19.20s, squad 5, contact, evidence events line 210: First recorded contact; .
- 27.25s, squad 0, withdrawal, evidence 4325: BreakContact: believed ratio at least two without superiority; 44.9s, squad 0: took cover and returned fire.
- 44.10s, squad 0, help call, evidence 5853: NeedSupport; No completion observed before termination.
- 49.10s, squad 0, withdrawal, evidence 6295: BreakContact: believed ratio at least two without superiority; 80.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 86.15s, squad 0, withdrawal, evidence 8255: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915567680134932, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915567680134932, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915567680134932, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528728921962358, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528728921962358, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528728921962358, 'next_transition': 87}.
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
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599783288097202, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449901673119365, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 827}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449901673119365, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449901673119365, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 827}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 827}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-739"></a>
<a id="trace-741"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-943"></a>
<a id="trace-945"></a>
<a id="trace-977"></a>
<a id="trace-979"></a>
<a id="trace-1009"></a>
<a id="trace-1011"></a>
<a id="trace-1039"></a>
<a id="trace-1041"></a>
<a id="trace-1069"></a>
<a id="trace-1071"></a>
<a id="trace-1100"></a>
<a id="trace-1102"></a>
<a id="trace-1128"></a>
<a id="trace-1130"></a>
<a id="trace-1159"></a>
<a id="trace-1161"></a>
<a id="trace-1175"></a>
<a id="trace-1177"></a>
<a id="trace-1268"></a>
<a id="trace-1270"></a>
<a id="trace-1284"></a>
<a id="trace-1286"></a>
<a id="trace-1307"></a>
<a id="trace-1309"></a>
<a id="trace-1328"></a>
<a id="trace-1330"></a>
<a id="trace-1358"></a>
<a id="trace-1360"></a>
<a id="trace-1375"></a>
<a id="trace-1377"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9447771297775882, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.96850102929632, 'next_transition': 1773}.
<a id="trace-947"></a>
<a id="trace-981"></a>
<a id="trace-1013"></a>
<a id="trace-1015"></a>
<a id="trace-1104"></a>
<a id="trace-1106"></a>
<a id="trace-1132"></a>
<a id="trace-1134"></a>
<a id="trace-1179"></a>
<a id="trace-1181"></a>
<a id="trace-1272"></a>
<a id="trace-1274"></a>
<a id="trace-1288"></a>
<a id="trace-1290"></a>
<a id="trace-1311"></a>
<a id="trace-1313"></a>
<a id="trace-1362"></a>
<a id="trace-1364"></a>
<a id="trace-1767"></a>
<a id="trace-1769"></a>
<a id="trace-1922"></a>
<a id="trace-1924"></a>
<a id="trace-2057"></a>
<a id="trace-2059"></a>
<a id="trace-2144"></a>
<a id="trace-2146"></a>
<a id="trace-2163"></a>
<a id="trace-2165"></a>
<a id="trace-2194"></a>
<a id="trace-2196"></a>
<a id="trace-2212"></a>
<a id="trace-2214"></a>
<a id="trace-2781"></a>
<a id="trace-2783"></a>
<a id="trace-2886"></a>
<a id="trace-2888"></a>
<a id="trace-2924"></a>
<a id="trace-2926"></a>
<a id="trace-2992"></a>
<a id="trace-2994"></a>
<a id="trace-3333"></a>
<a id="trace-3335"></a>
<a id="trace-3369"></a>
<a id="trace-3371"></a>
<a id="trace-3728"></a>
<a id="trace-3730"></a>
<a id="trace-3762"></a>
<a id="trace-3764"></a>
<a id="trace-3805"></a>
<a id="trace-3807"></a>
<a id="trace-3858"></a>
<a id="trace-3860"></a>
<a id="trace-3946"></a>
<a id="trace-3948"></a>
<a id="trace-4035"></a>
<a id="trace-4037"></a>
<a id="trace-4322"></a>
<a id="trace-4324"></a>
<a id="trace-4787"></a>
<a id="trace-4789"></a>
<a id="trace-4826"></a>
<a id="trace-4828"></a>
<a id="trace-4861"></a>
<a id="trace-4863"></a>
<a id="trace-4888"></a>
<a id="trace-4890"></a>
<a id="trace-4912"></a>
<a id="trace-4914"></a>
<a id="trace-5012"></a>
<a id="trace-5014"></a>
<a id="trace-5045"></a>
<a id="trace-5047"></a>
<a id="trace-5095"></a>
<a id="trace-5097"></a>
<a id="trace-5129"></a>
<a id="trace-5131"></a>
<a id="trace-5156"></a>
<a id="trace-5158"></a>
<a id="trace-5201"></a>
<a id="trace-5203"></a>
<a id="trace-5245"></a>
<a id="trace-5247"></a>
<a id="trace-5289"></a>
<a id="trace-5291"></a>
<a id="trace-5333"></a>
<a id="trace-5335"></a>
<a id="trace-5476"></a>
<a id="trace-5478"></a>
<a id="trace-5506"></a>
<a id="trace-5508"></a>
<a id="trace-5527"></a>
<a id="trace-5529"></a>
<a id="trace-5550"></a>
<a id="trace-5552"></a>
<a id="trace-5597"></a>
<a id="trace-5599"></a>
<a id="trace-5610"></a>
<a id="trace-5612"></a>
<a id="trace-5636"></a>
<a id="trace-5638"></a>
<a id="trace-5734"></a>
<a id="trace-5736"></a>
<a id="trace-5773"></a>
<a id="trace-5775"></a>
<a id="trace-5785"></a>
<a id="trace-5787"></a>
<a id="trace-5802"></a>
<a id="trace-5804"></a>
<a id="trace-5816"></a>
<a id="trace-5818"></a>
<a id="trace-5829"></a>
<a id="trace-5831"></a>
<a id="trace-5840"></a>
<a id="trace-5842"></a>
<a id="trace-5875"></a>
<a id="trace-5877"></a>
<a id="trace-6079"></a>
<a id="trace-6081"></a>
<a id="trace-6123"></a>
<a id="trace-6125"></a>
<a id="trace-6174"></a>
<a id="trace-6176"></a>
<a id="trace-6208"></a>
<a id="trace-6210"></a>
<a id="trace-6235"></a>
<a id="trace-6237"></a>
<a id="trace-6255"></a>
<a id="trace-6257"></a>
<a id="trace-6291"></a>
<a id="trace-6293"></a>
<a id="trace-6422"></a>
<a id="trace-6424"></a>
<a id="trace-6515"></a>
<a id="trace-6517"></a>
<a id="trace-6532"></a>
<a id="trace-6534"></a>
<a id="trace-6548"></a>
<a id="trace-6550"></a>
<a id="trace-6566"></a>
<a id="trace-6568"></a>
<a id="trace-6590"></a>
<a id="trace-6592"></a>
<a id="trace-6604"></a>
<a id="trace-6606"></a>
<a id="trace-6615"></a>
<a id="trace-6617"></a>
<a id="trace-6631"></a>
<a id="trace-6633"></a>
<a id="trace-6654"></a>
<a id="trace-6656"></a>
<a id="trace-6733"></a>
<a id="trace-6735"></a>
<a id="trace-6750"></a>
<a id="trace-6752"></a>
<a id="trace-6797"></a>
<a id="trace-6799"></a>
<a id="trace-6823"></a>
<a id="trace-6825"></a>
<a id="trace-6841"></a>
<a id="trace-6843"></a>
<a id="trace-6871"></a>
<a id="trace-6873"></a>
<a id="trace-6886"></a>
<a id="trace-6888"></a>
<a id="trace-6900"></a>
<a id="trace-6902"></a>
<a id="trace-6990"></a>
<a id="trace-6992"></a>
<a id="trace-7158"></a>
<a id="trace-7160"></a>
<a id="trace-7172"></a>
<a id="trace-7174"></a>
<a id="trace-7211"></a>
<a id="trace-7213"></a>
<a id="trace-7228"></a>
<a id="trace-7230"></a>
<a id="trace-7245"></a>
<a id="trace-7247"></a>
<a id="trace-7260"></a>
<a id="trace-7262"></a>
<a id="trace-7350"></a>
<a id="trace-7352"></a>
<a id="trace-7364"></a>
<a id="trace-7366"></a>
<a id="trace-7382"></a>
<a id="trace-7384"></a>
<a id="trace-7400"></a>
<a id="trace-7402"></a>
<a id="trace-7416"></a>
<a id="trace-7418"></a>
<a id="trace-7429"></a>
<a id="trace-7431"></a>
<a id="trace-7454"></a>
<a id="trace-7456"></a>
<a id="trace-7468"></a>
<a id="trace-7470"></a>
<a id="trace-7477"></a>
<a id="trace-7479"></a>
<a id="trace-7556"></a>
<a id="trace-7558"></a>
<a id="trace-7563"></a>
<a id="trace-7565"></a>
<a id="trace-7622"></a>
<a id="trace-7624"></a>
<a id="trace-7637"></a>
<a id="trace-7639"></a>
<a id="trace-7663"></a>
<a id="trace-7665"></a>
<a id="trace-7688"></a>
<a id="trace-7690"></a>
<a id="trace-7719"></a>
<a id="trace-7721"></a>
<a id="trace-7738"></a>
<a id="trace-7740"></a>
<a id="trace-7749"></a>
<a id="trace-7751"></a>
<a id="trace-7819"></a>
<a id="trace-7821"></a>
<a id="trace-7825"></a>
<a id="trace-7827"></a>
<a id="trace-7848"></a>
<a id="trace-7850"></a>
<a id="trace-7865"></a>
<a id="trace-7867"></a>
<a id="trace-7893"></a>
<a id="trace-7895"></a>
<a id="trace-7900"></a>
<a id="trace-7902"></a>
<a id="trace-7919"></a>
<a id="trace-7921"></a>
<a id="trace-8058"></a>
<a id="trace-8060"></a>
<a id="trace-8094"></a>
<a id="trace-8096"></a>
<a id="trace-8106"></a>
<a id="trace-8108"></a>
<a id="trace-8129"></a>
<a id="trace-8131"></a>
<a id="trace-8145"></a>
<a id="trace-8147"></a>
<a id="trace-8164"></a>
<a id="trace-8166"></a>
<a id="trace-8234"></a>
<a id="trace-8236"></a>
<a id="trace-8244"></a>
<a id="trace-8246"></a>
<a id="trace-8330"></a>
<a id="trace-8332"></a>
<a id="trace-8343"></a>
<a id="trace-8345"></a>
<a id="trace-8365"></a>
<a id="trace-8367"></a>
<a id="trace-8417"></a>
<a id="trace-8419"></a>
<a id="trace-8437"></a>
<a id="trace-8439"></a>
<a id="trace-8517"></a>
<a id="trace-8519"></a>
<a id="trace-8535"></a>
<a id="trace-8537"></a>
<a id="trace-8542"></a>
<a id="trace-8544"></a>
<a id="trace-8556"></a>
<a id="trace-8558"></a>
<a id="trace-8566"></a>
<a id="trace-8568"></a>
<a id="trace-8576"></a>
<a id="trace-8578"></a>
<a id="trace-8584"></a>
<a id="trace-8586"></a>
<a id="trace-8597"></a>
<a id="trace-8599"></a>
<a id="trace-8605"></a>
<a id="trace-8607"></a>
<a id="trace-8679"></a>
<a id="trace-8681"></a>
<a id="trace-8690"></a>
<a id="trace-8692"></a>
<a id="trace-8697"></a>
<a id="trace-8699"></a>
<a id="trace-8711"></a>
<a id="trace-8713"></a>
<a id="trace-8721"></a>
<a id="trace-8723"></a>
<a id="trace-8731"></a>
<a id="trace-8733"></a>
<a id="trace-8738"></a>
<a id="trace-8740"></a>
<a id="trace-8750"></a>
<a id="trace-8752"></a>
<a id="trace-8759"></a>
<a id="trace-8761"></a>
<a id="trace-8835"></a>
<a id="trace-8837"></a>
<a id="trace-8871"></a>
<a id="trace-8873"></a>
<a id="trace-8881"></a>
<a id="trace-8883"></a>
<a id="trace-8888"></a>
<a id="trace-8890"></a>
<a id="trace-8900"></a>
<a id="trace-8902"></a>
<a id="trace-8982"></a>
<a id="trace-8984"></a>
<a id="trace-8993"></a>
<a id="trace-8995"></a>
<a id="trace-9000"></a>
<a id="trace-9002"></a>
<a id="trace-9014"></a>
<a id="trace-9016"></a>
<a id="trace-9025"></a>
<a id="trace-9027"></a>
<a id="trace-9036"></a>
<a id="trace-9038"></a>
<a id="trace-9045"></a>
<a id="trace-9047"></a>
<a id="trace-9057"></a>
<a id="trace-9059"></a>
<a id="trace-9071"></a>
<a id="trace-9073"></a>
<a id="trace-9169"></a>
<a id="trace-9171"></a>
<a id="trace-9181"></a>
<a id="trace-9183"></a>
<a id="trace-9190"></a>
<a id="trace-9192"></a>
<a id="trace-9199"></a>
<a id="trace-9201"></a>
<a id="trace-9207"></a>
<a id="trace-9209"></a>
<a id="trace-9221"></a>
<a id="trace-9223"></a>
<a id="trace-9300"></a>
<a id="trace-9302"></a>
<a id="trace-9334"></a>
<a id="trace-9336"></a>
<a id="trace-9352"></a>
<a id="trace-9354"></a>
<a id="trace-9362"></a>
<a id="trace-9364"></a>
<a id="trace-9371"></a>
<a id="trace-9373"></a>
<a id="trace-9378"></a>
<a id="trace-9380"></a>
<a id="trace-9391"></a>
<a id="trace-9393"></a>
<a id="trace-9399"></a>
<a id="trace-9401"></a>
<a id="trace-9469"></a>
<a id="trace-9471"></a>
<a id="trace-9477"></a>
<a id="trace-9479"></a>
<a id="trace-9496"></a>
<a id="trace-9498"></a>
<a id="trace-9508"></a>
<a id="trace-9510"></a>
<a id="trace-9522"></a>
<a id="trace-9524"></a>
<a id="trace-9539"></a>
<a id="trace-9541"></a>
<a id="trace-9548"></a>
<a id="trace-9550"></a>
<a id="trace-9563"></a>
<a id="trace-9565"></a>
<a id="trace-9573"></a>
<a id="trace-9575"></a>
<a id="trace-9644"></a>
<a id="trace-9646"></a>
<a id="trace-9651"></a>
<a id="trace-9653"></a>
<a id="trace-9661"></a>
<a id="trace-9663"></a>
<a id="trace-9669"></a>
<a id="trace-9671"></a>
<a id="trace-9682"></a>
<a id="trace-9684"></a>
<a id="trace-9701"></a>
<a id="trace-9703"></a>
<a id="trace-9722"></a>
<a id="trace-9724"></a>
<a id="trace-9736"></a>
<a id="trace-9738"></a>
<a id="trace-9810"></a>
<a id="trace-9812"></a>
<a id="trace-9817"></a>
<a id="trace-9819"></a>
<a id="trace-9828"></a>
<a id="trace-9830"></a>
<a id="trace-9841"></a>
<a id="trace-9843"></a>
<a id="trace-9855"></a>
<a id="trace-9857"></a>
<a id="trace-9863"></a>
<a id="trace-9865"></a>
<a id="trace-9873"></a>
<a id="trace-9875"></a>
<a id="trace-9882"></a>
<a id="trace-9884"></a>
<a id="trace-9894"></a>
<a id="trace-9896"></a>
<a id="trace-9972"></a>
<a id="trace-9974"></a>
<a id="trace-10017"></a>
<a id="trace-10019"></a>
<a id="trace-10026"></a>
<a id="trace-10028"></a>
<a id="trace-10058"></a>
<a id="trace-10060"></a>
<a id="trace-10066"></a>
<a id="trace-10068"></a>
<a id="trace-10142"></a>
<a id="trace-10144"></a>
<a id="trace-10160"></a>
<a id="trace-10162"></a>
<a id="trace-10176"></a>
<a id="trace-10178"></a>
<a id="trace-10184"></a>
<a id="trace-10186"></a>
<a id="trace-10199"></a>
<a id="trace-10201"></a>
<a id="trace-10223"></a>
<a id="trace-10225"></a>
<a id="trace-10233"></a>
<a id="trace-10235"></a>
<a id="trace-10304"></a>
<a id="trace-10306"></a>
<a id="trace-10312"></a>
<a id="trace-10314"></a>
<a id="trace-10326"></a>
<a id="trace-10328"></a>
<a id="trace-10334"></a>
<a id="trace-10336"></a>
<a id="trace-10348"></a>
<a id="trace-10350"></a>
<a id="trace-10366"></a>
<a id="trace-10368"></a>
<a id="trace-10375"></a>
<a id="trace-10377"></a>
<a id="trace-10388"></a>
<a id="trace-10390"></a>
<a id="trace-10403"></a>
<a id="trace-10405"></a>
<a id="trace-10472"></a>
<a id="trace-10474"></a>
<a id="trace-10491"></a>
<a id="trace-10493"></a>
<a id="trace-10499"></a>
<a id="trace-10501"></a>
<a id="trace-10512"></a>
<a id="trace-10514"></a>
<a id="trace-10525"></a>
<a id="trace-10527"></a>
<a id="trace-10547"></a>
<a id="trace-10549"></a>
<a id="trace-10566"></a>
<a id="trace-10568"></a>
<a id="trace-10635"></a>
<a id="trace-10637"></a>
<a id="trace-10644"></a>
<a id="trace-10646"></a>
<a id="trace-10660"></a>
<a id="trace-10662"></a>
<a id="trace-10668"></a>
<a id="trace-10670"></a>
<a id="trace-10680"></a>
<a id="trace-10682"></a>
<a id="trace-10690"></a>
<a id="trace-10692"></a>
<a id="trace-10702"></a>
<a id="trace-10704"></a>
<a id="trace-10714"></a>
<a id="trace-10716"></a>
<a id="trace-10726"></a>
<a id="trace-10728"></a>
<a id="trace-10808"></a>
<a id="trace-10810"></a>
<a id="trace-10815"></a>
<a id="trace-10817"></a>
<a id="trace-10828"></a>
<a id="trace-10830"></a>
<a id="trace-10835"></a>
<a id="trace-10837"></a>
<a id="trace-10850"></a>
<a id="trace-10852"></a>
<a id="trace-10864"></a>
<a id="trace-10866"></a>
<a id="trace-10874"></a>
<a id="trace-10876"></a>
<a id="trace-10883"></a>
<a id="trace-10885"></a>
<a id="trace-10893"></a>
<a id="trace-10895"></a>
<a id="trace-10903"></a>
<a id="trace-10905"></a>
<a id="trace-10975"></a>
<a id="trace-10977"></a>
<a id="trace-10995"></a>
<a id="trace-10997"></a>
<a id="trace-11002"></a>
<a id="trace-11004"></a>
<a id="trace-11029"></a>
<a id="trace-11031"></a>
<a id="trace-11039"></a>
<a id="trace-11041"></a>
<a id="trace-11051"></a>
<a id="trace-11053"></a>
<a id="trace-11067"></a>
<a id="trace-11069"></a>
<a id="trace-11075"></a>
<a id="trace-11077"></a>
<a id="trace-11144"></a>
<a id="trace-11146"></a>
<a id="trace-11151"></a>
<a id="trace-11153"></a>
<a id="trace-11161"></a>
<a id="trace-11163"></a>
<a id="trace-11168"></a>
<a id="trace-11170"></a>
<a id="trace-11185"></a>
<a id="trace-11187"></a>
<a id="trace-11194"></a>
<a id="trace-11196"></a>
<a id="trace-11205"></a>
<a id="trace-11207"></a>
<a id="trace-11220"></a>
<a id="trace-11222"></a>
<a id="trace-11233"></a>
<a id="trace-11235"></a>
<a id="trace-11244"></a>
<a id="trace-11246"></a>
<a id="trace-11321"></a>
<a id="trace-11323"></a>
<a id="trace-11337"></a>
<a id="trace-11339"></a>
<a id="trace-11344"></a>
<a id="trace-11346"></a>
<a id="trace-11356"></a>
<a id="trace-11358"></a>
<a id="trace-11365"></a>
<a id="trace-11367"></a>
<a id="trace-11384"></a>
<a id="trace-11386"></a>
<a id="trace-11405"></a>
<a id="trace-11407"></a>
<a id="trace-11479"></a>
<a id="trace-11481"></a>
<a id="trace-11486"></a>
<a id="trace-11488"></a>
<a id="trace-11500"></a>
<a id="trace-11502"></a>
<a id="trace-11522"></a>
<a id="trace-11524"></a>
<a id="trace-11537"></a>
<a id="trace-11539"></a>
<a id="trace-11546"></a>
<a id="trace-11548"></a>
<a id="trace-11555"></a>
<a id="trace-11557"></a>
<a id="trace-11566"></a>
<a id="trace-11568"></a>
<a id="trace-11574"></a>
<a id="trace-11576"></a>
<a id="trace-11644"></a>
<a id="trace-11646"></a>
<a id="trace-11652"></a>
<a id="trace-11654"></a>
<a id="trace-11665"></a>
<a id="trace-11667"></a>
<a id="trace-11676"></a>
<a id="trace-11678"></a>
<a id="trace-11690"></a>
<a id="trace-11692"></a>
<a id="trace-11702"></a>
<a id="trace-11704"></a>
<a id="trace-11712"></a>
<a id="trace-11714"></a>
<a id="trace-11741"></a>
<a id="trace-11743"></a>
<a id="trace-11750"></a>
<a id="trace-11752"></a>
<a id="trace-11819"></a>
<a id="trace-11821"></a>
<a id="trace-11825"></a>
<a id="trace-11827"></a>
<a id="trace-11835"></a>
<a id="trace-11837"></a>
<a id="trace-11844"></a>
<a id="trace-11846"></a>
<a id="trace-11856"></a>
<a id="trace-11858"></a>
<a id="trace-11865"></a>
<a id="trace-11867"></a>
<a id="trace-11880"></a>
<a id="trace-11882"></a>
<a id="trace-11890"></a>
<a id="trace-11892"></a>
<a id="trace-11903"></a>
<a id="trace-11905"></a>
<a id="trace-11916"></a>
<a id="trace-11918"></a>
<a id="trace-11988"></a>
<a id="trace-11990"></a>
<a id="trace-12001"></a>
<a id="trace-12003"></a>
<a id="trace-12013"></a>
<a id="trace-12015"></a>
<a id="trace-12031"></a>
<a id="trace-12033"></a>
<a id="trace-12039"></a>
<a id="trace-12041"></a>
<a id="trace-12066"></a>
<a id="trace-12068"></a>
<a id="trace-12076"></a>
<a id="trace-12078"></a>
<a id="trace-12150"></a>
<a id="trace-12152"></a>
<a id="trace-12160"></a>
<a id="trace-12162"></a>
<a id="trace-12172"></a>
<a id="trace-12174"></a>
<a id="trace-12183"></a>
<a id="trace-12185"></a>
<a id="trace-12202"></a>
<a id="trace-12204"></a>
<a id="trace-12210"></a>
<a id="trace-12212"></a>
<a id="trace-12220"></a>
<a id="trace-12222"></a>
<a id="trace-12231"></a>
<a id="trace-12233"></a>
<a id="trace-12242"></a>
<a id="trace-12244"></a>
<a id="trace-12321"></a>
<a id="trace-12323"></a>
<a id="trace-12327"></a>
<a id="trace-12329"></a>
<a id="trace-12338"></a>
<a id="trace-12340"></a>
<a id="trace-12349"></a>
<a id="trace-12351"></a>
<a id="trace-12386"></a>
<a id="trace-12388"></a>
<a id="trace-12395"></a>
<a id="trace-12397"></a>
<a id="trace-12413"></a>
<a id="trace-12415"></a>
<a id="trace-12421"></a>
<a id="trace-12423"></a>
<a id="trace-12491"></a>
<a id="trace-12493"></a>
<a id="trace-12499"></a>
<a id="trace-12501"></a>
<a id="trace-12510"></a>
<a id="trace-12512"></a>
<a id="trace-12518"></a>
<a id="trace-12520"></a>
<a id="trace-12530"></a>
<a id="trace-12532"></a>
<a id="trace-12549"></a>
<a id="trace-12551"></a>
<a id="trace-12558"></a>
<a id="trace-12560"></a>
<a id="trace-12575"></a>
<a id="trace-12577"></a>
<a id="trace-12584"></a>
<a id="trace-12586"></a>
<a id="trace-12656"></a>
<a id="trace-12658"></a>
<a id="trace-12681"></a>
<a id="trace-12683"></a>
<a id="trace-12688"></a>
<a id="trace-12690"></a>
<a id="trace-12700"></a>
<a id="trace-12702"></a>
<a id="trace-12720"></a>
<a id="trace-12722"></a>
<a id="trace-12729"></a>
<a id="trace-12731"></a>
<a id="trace-12740"></a>
<a id="trace-12742"></a>
<a id="trace-12751"></a>
<a id="trace-12753"></a>
<a id="trace-12820"></a>
<a id="trace-12822"></a>
<a id="trace-12842"></a>
<a id="trace-12844"></a>
<a id="trace-12871"></a>
<a id="trace-12873"></a>
<a id="trace-12880"></a>
<a id="trace-12882"></a>
<a id="trace-12897"></a>
<a id="trace-12899"></a>
<a id="trace-12915"></a>
<a id="trace-12917"></a>
<a id="trace-12986"></a>
<a id="trace-12988"></a>
<a id="trace-12994"></a>
<a id="trace-12996"></a>
<a id="trace-13025"></a>
<a id="trace-13027"></a>
<a id="trace-13035"></a>
<a id="trace-13037"></a>
<a id="trace-13049"></a>
<a id="trace-13051"></a>
<a id="trace-13065"></a>
<a id="trace-13067"></a>
<a id="trace-13077"></a>
<a id="trace-13079"></a>
<a id="trace-13085"></a>
<a id="trace-13087"></a>
<a id="trace-13160"></a>
<a id="trace-13162"></a>
<a id="trace-13171"></a>
<a id="trace-13173"></a>
<a id="trace-13178"></a>
<a id="trace-13180"></a>
<a id="trace-13194"></a>
<a id="trace-13196"></a>
<a id="trace-13203"></a>
<a id="trace-13205"></a>
<a id="trace-13214"></a>
<a id="trace-13216"></a>
<a id="trace-13235"></a>
<a id="trace-13237"></a>
<a id="trace-13246"></a>
<a id="trace-13248"></a>
<a id="trace-13325"></a>
<a id="trace-13327"></a>
<a id="trace-13332"></a>
<a id="trace-13334"></a>
<a id="trace-13342"></a>
<a id="trace-13344"></a>
<a id="trace-13353"></a>
<a id="trace-13355"></a>
<a id="trace-13365"></a>
<a id="trace-13367"></a>
<a id="trace-13374"></a>
<a id="trace-13376"></a>
<a id="trace-13384"></a>
<a id="trace-13386"></a>
<a id="trace-13393"></a>
<a id="trace-13395"></a>
<a id="trace-13405"></a>
<a id="trace-13407"></a>
<a id="trace-13488"></a>
<a id="trace-13490"></a>
<a id="trace-13495"></a>
<a id="trace-13497"></a>
<a id="trace-13508"></a>
<a id="trace-13510"></a>
<a id="trace-13517"></a>
<a id="trace-13519"></a>
<a id="trace-13554"></a>
<a id="trace-13556"></a>
<a id="trace-13564"></a>
<a id="trace-13566"></a>
<a id="trace-13574"></a>
<a id="trace-13576"></a>
<a id="trace-13583"></a>
<a id="trace-13585"></a>
<a id="trace-13653"></a>
<a id="trace-13655"></a>
<a id="trace-13660"></a>
<a id="trace-13662"></a>
<a id="trace-13672"></a>
<a id="trace-13674"></a>
<a id="trace-13682"></a>
<a id="trace-13684"></a>
<a id="trace-13699"></a>
<a id="trace-13701"></a>
<a id="trace-13707"></a>
<a id="trace-13709"></a>
<a id="trace-13719"></a>
<a id="trace-13721"></a>
<a id="trace-13736"></a>
<a id="trace-13738"></a>
<a id="trace-13756"></a>
<a id="trace-13758"></a>
<a id="trace-13827"></a>
<a id="trace-13829"></a>
<a id="trace-13833"></a>
<a id="trace-13835"></a>
<a id="trace-13850"></a>
<a id="trace-13852"></a>
<a id="trace-13864"></a>
<a id="trace-13866"></a>
<a id="trace-13874"></a>
<a id="trace-13876"></a>
<a id="trace-13894"></a>
<a id="trace-13896"></a>
<a id="trace-13906"></a>
<a id="trace-13908"></a>
<a id="trace-13992"></a>
<a id="trace-13994"></a>
<a id="trace-13998"></a>
<a id="trace-14000"></a>
<a id="trace-14012"></a>
<a id="trace-14014"></a>
<a id="trace-14020"></a>
<a id="trace-14022"></a>
<a id="trace-14032"></a>
<a id="trace-14034"></a>
<a id="trace-14060"></a>
<a id="trace-14062"></a>
<a id="trace-14079"></a>
<a id="trace-14081"></a>
<a id="trace-14151"></a>
<a id="trace-14153"></a>
<a id="trace-14158"></a>
<a id="trace-14160"></a>
<a id="trace-14186"></a>
<a id="trace-14188"></a>
<a id="trace-14206"></a>
<a id="trace-14208"></a>
<a id="trace-14218"></a>
<a id="trace-14220"></a>
<a id="trace-14228"></a>
<a id="trace-14230"></a>
<a id="trace-14248"></a>
<a id="trace-14250"></a>
<a id="trace-14318"></a>
<a id="trace-14320"></a>
<a id="trace-14345"></a>
<a id="trace-14347"></a>
<a id="trace-14357"></a>
<a id="trace-14359"></a>
<a id="trace-14392"></a>
<a id="trace-14394"></a>
<a id="trace-14403"></a>
<a id="trace-14405"></a>
<a id="trace-14413"></a>
<a id="trace-14415"></a>
<a id="trace-14484"></a>
<a id="trace-14486"></a>
<a id="trace-14492"></a>
<a id="trace-14494"></a>
<a id="trace-14510"></a>
<a id="trace-14512"></a>
<a id="trace-14524"></a>
<a id="trace-14526"></a>
<a id="trace-14544"></a>
<a id="trace-14546"></a>
<a id="trace-14565"></a>
<a id="trace-14567"></a>
<a id="trace-14647"></a>
<a id="trace-14649"></a>
<a id="trace-14656"></a>
<a id="trace-14658"></a>
<a id="trace-14672"></a>
<a id="trace-14674"></a>
<a id="trace-14688"></a>
<a id="trace-14690"></a>
<a id="trace-14698"></a>
<a id="trace-14700"></a>
<a id="trace-14719"></a>
<a id="trace-14721"></a>
<a id="trace-14737"></a>
<a id="trace-14739"></a>
<a id="trace-14813"></a>
<a id="trace-14815"></a>
<a id="trace-14827"></a>
<a id="trace-14829"></a>
<a id="trace-14840"></a>
<a id="trace-14842"></a>
<a id="trace-14853"></a>
<a id="trace-14855"></a>
<a id="trace-14872"></a>
<a id="trace-14874"></a>
<a id="trace-14895"></a>
<a id="trace-14897"></a>
<a id="trace-14904"></a>
<a id="trace-14906"></a>
<a id="trace-14976"></a>
<a id="trace-14978"></a>
<a id="trace-14993"></a>
<a id="trace-14995"></a>
<a id="trace-15013"></a>
<a id="trace-15015"></a>
<a id="trace-15024"></a>
<a id="trace-15026"></a>
<a id="trace-15040"></a>
<a id="trace-15042"></a>
<a id="trace-15049"></a>
<a id="trace-15051"></a>
<a id="trace-15060"></a>
<a id="trace-15062"></a>
<a id="trace-15069"></a>
<a id="trace-15071"></a>
<a id="trace-15141"></a>
<a id="trace-15143"></a>
<a id="trace-15150"></a>
<a id="trace-15152"></a>
<a id="trace-15162"></a>
<a id="trace-15164"></a>
<a id="trace-15172"></a>
<a id="trace-15174"></a>
<a id="trace-15188"></a>
<a id="trace-15190"></a>
<a id="trace-15196"></a>
<a id="trace-15198"></a>
<a id="trace-15209"></a>
<a id="trace-15211"></a>
<a id="trace-15218"></a>
<a id="trace-15220"></a>
<a id="trace-15230"></a>
<a id="trace-15232"></a>
<a id="trace-15244"></a>
<a id="trace-15246"></a>
<a id="trace-15314"></a>
<a id="trace-15316"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15337"></a>
<a id="trace-15339"></a>
<a id="trace-15352"></a>
<a id="trace-15354"></a>
<a id="trace-15361"></a>
<a id="trace-15363"></a>
<a id="trace-15375"></a>
<a id="trace-15377"></a>
<a id="trace-15385"></a>
<a id="trace-15387"></a>
<a id="trace-15397"></a>
<a id="trace-15399"></a>
<a id="trace-15479"></a>
<a id="trace-15481"></a>
<a id="trace-15517"></a>
<a id="trace-15519"></a>
<a id="trace-15526"></a>
<a id="trace-15528"></a>
<a id="trace-15535"></a>
<a id="trace-15537"></a>
<a id="trace-15557"></a>
<a id="trace-15559"></a>
<a id="trace-15568"></a>
<a id="trace-15570"></a>
<a id="trace-15641"></a>
<a id="trace-15643"></a>
<a id="trace-15663"></a>
<a id="trace-15665"></a>
<a id="trace-15671"></a>
<a id="trace-15673"></a>
<a id="trace-15686"></a>
<a id="trace-15688"></a>
<a id="trace-15694"></a>
<a id="trace-15696"></a>
<a id="trace-15724"></a>
<a id="trace-15726"></a>
<a id="trace-15733"></a>
<a id="trace-15735"></a>
<a id="trace-15808"></a>
<a id="trace-15810"></a>
<a id="trace-15819"></a>
<a id="trace-15821"></a>
<a id="trace-15831"></a>
<a id="trace-15833"></a>
<a id="trace-15856"></a>
<a id="trace-15858"></a>
<a id="trace-15870"></a>
<a id="trace-15872"></a>
<a id="trace-15879"></a>
<a id="trace-15881"></a>
<a id="trace-15893"></a>
<a id="trace-15895"></a>
<a id="trace-15907"></a>
<a id="trace-15909"></a>
<a id="trace-15976"></a>
<a id="trace-15978"></a>
<a id="trace-15982"></a>
<a id="trace-15984"></a>
<a id="trace-15992"></a>
<a id="trace-15994"></a>
<a id="trace-15999"></a>
<a id="trace-16001"></a>
<a id="trace-16013"></a>
<a id="trace-16015"></a>
<a id="trace-16030"></a>
<a id="trace-16032"></a>
<a id="trace-16067"></a>
<a id="trace-16069"></a>
<a id="trace-16136"></a>
<a id="trace-16138"></a>
<a id="trace-16149"></a>
<a id="trace-16151"></a>
<a id="trace-16165"></a>
<a id="trace-16167"></a>
<a id="trace-16172"></a>
<a id="trace-16174"></a>
<a id="trace-16190"></a>
<a id="trace-16192"></a>
<a id="trace-16199"></a>
<a id="trace-16201"></a>
<a id="trace-16209"></a>
<a id="trace-16211"></a>
<a id="trace-16228"></a>
<a id="trace-16230"></a>
<a id="trace-16308"></a>
<a id="trace-16310"></a>
<a id="trace-16348"></a>
<a id="trace-16350"></a>
<a id="trace-16363"></a>
<a id="trace-16365"></a>
<a id="trace-16372"></a>
<a id="trace-16374"></a>
<a id="trace-16381"></a>
<a id="trace-16383"></a>
<a id="trace-16397"></a>
<a id="trace-16399"></a>
<a id="trace-16467"></a>
<a id="trace-16469"></a>
<a id="trace-16473"></a>
<a id="trace-16475"></a>
<a id="trace-16491"></a>
<a id="trace-16493"></a>
<a id="trace-16505"></a>
<a id="trace-16507"></a>
<a id="trace-16519"></a>
<a id="trace-16521"></a>
<a id="trace-16532"></a>
<a id="trace-16534"></a>
<a id="trace-16547"></a>
<a id="trace-16549"></a>
<a id="trace-16565"></a>
<a id="trace-16567"></a>
<a id="trace-16641"></a>
<a id="trace-16643"></a>
<a id="trace-16655"></a>
<a id="trace-16657"></a>
<a id="trace-16662"></a>
<a id="trace-16664"></a>
<a id="trace-16689"></a>
<a id="trace-16691"></a>
<a id="trace-16702"></a>
<a id="trace-16704"></a>
<a id="trace-16715"></a>
<a id="trace-16717"></a>
<a id="trace-16800"></a>
<a id="trace-16802"></a>
<a id="trace-16807"></a>
<a id="trace-16809"></a>
<a id="trace-16824"></a>
<a id="trace-16826"></a>
<a id="trace-16835"></a>
<a id="trace-16837"></a>
<a id="trace-16847"></a>
<a id="trace-16849"></a>
<a id="trace-16862"></a>
<a id="trace-16864"></a>
<a id="trace-16872"></a>
<a id="trace-16874"></a>
<a id="trace-16882"></a>
<a id="trace-16884"></a>
<a id="trace-16891"></a>
<a id="trace-16893"></a>
<a id="trace-16962"></a>
<a id="trace-16964"></a>
<a id="trace-16981"></a>
<a id="trace-16983"></a>
<a id="trace-16990"></a>
<a id="trace-16992"></a>
<a id="trace-17024"></a>
<a id="trace-17026"></a>
<a id="trace-17036"></a>
<a id="trace-17038"></a>
<a id="trace-17054"></a>
<a id="trace-17056"></a>
<a id="trace-17062"></a>
<a id="trace-17064"></a>
<a id="trace-17132"></a>
<a id="trace-17134"></a>
<a id="trace-17138"></a>
<a id="trace-17140"></a>
<a id="trace-17149"></a>
<a id="trace-17151"></a>
<a id="trace-17158"></a>
<a id="trace-17160"></a>
<a id="trace-17171"></a>
<a id="trace-17173"></a>
<a id="trace-17182"></a>
<a id="trace-17184"></a>
<a id="trace-17192"></a>
<a id="trace-17194"></a>
<a id="trace-17223"></a>
<a id="trace-17225"></a>
<a id="trace-17305"></a>
<a id="trace-17307"></a>
<a id="trace-17311"></a>
<a id="trace-17313"></a>
<a id="trace-17322"></a>
<a id="trace-17324"></a>
<a id="trace-17356"></a>
<a id="trace-17358"></a>
<a id="trace-17365"></a>
<a id="trace-17367"></a>
<a id="trace-17378"></a>
<a id="trace-17380"></a>
<a id="trace-17387"></a>
<a id="trace-17389"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 947): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362504724995279, 'next_transition': 981}.
<a id="trace-1383"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1383): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1189. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248663370309085, 'next_transition': 1543}.
<a id="trace-1384"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1384): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1189. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248663370309085, 'next_transition': 1543}.
<a id="trace-1543"></a>
<a id="trace-1545"></a>
- 13.20s–13.20s (×2), actor 5, squad 0 (trace 1543): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1194. Next observer evidence: None.
<a id="trace-1551"></a>
- 13.35s–13.35s (×1), actor 0, squad 0 (trace 1551): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 10.00s, trace 1189. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150100349226173, 'next_transition': 1721}.
<a id="trace-1721"></a>
<a id="trace-1723"></a>
<a id="trace-1763"></a>
<a id="trace-1765"></a>
<a id="trace-1918"></a>
<a id="trace-1920"></a>
<a id="trace-2007"></a>
<a id="trace-2009"></a>
<a id="trace-2053"></a>
<a id="trace-2055"></a>
<a id="trace-2096"></a>
<a id="trace-2098"></a>
<a id="trace-2122"></a>
<a id="trace-2124"></a>
<a id="trace-2140"></a>
<a id="trace-2142"></a>
<a id="trace-2159"></a>
<a id="trace-2161"></a>
<a id="trace-2190"></a>
<a id="trace-2192"></a>
<a id="trace-2208"></a>
<a id="trace-2210"></a>
<a id="trace-2236"></a>
<a id="trace-2238"></a>
<a id="trace-2777"></a>
<a id="trace-2779"></a>
<a id="trace-2882"></a>
<a id="trace-2884"></a>
<a id="trace-2920"></a>
<a id="trace-2922"></a>
<a id="trace-2960"></a>
<a id="trace-2962"></a>
<a id="trace-2988"></a>
<a id="trace-2990"></a>
- 13.70s–21.75s (×34), actor 5, squad 0 (trace 1721): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1194. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5709348198742737, 'next_transition': 1763}.
<a id="trace-1773"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1773): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1197. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.889983417381629, 'next_transition': 2243}.
<a id="trace-1774"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1774): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1197. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.889983417381629, 'next_transition': 2243}.
<a id="trace-2243"></a>
- 19.35s–19.35s (×1), actor 8, squad 1 (trace 2243): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1944. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315008083864525, 'next_transition': 2420}.
<a id="trace-2244"></a>
- 19.35s–19.35s (×1), actor 8, squad 1 (trace 2244): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1944. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315008083864525, 'next_transition': 2420}.
<a id="trace-2245"></a>
<a id="trace-2420"></a>
<a id="trace-2594"></a>
- 19.35s–19.45s (×3), actor 8, squad 1 (trace 2245): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1944. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315008083864525, 'next_transition': 2420}.
<a id="trace-2995"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2995): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2801. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1691397673621566, 'next_transition': 3329}.
<a id="trace-2996"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2996): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2801. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1691397673621566, 'next_transition': 3329}.
<a id="trace-2997"></a>
- 21.75s–21.75s (×1), actor 0, squad 0 (trace 2997): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2801. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1691397673621566, 'next_transition': 3329}.
<a id="trace-3329"></a>
<a id="trace-3331"></a>
<a id="trace-3365"></a>
<a id="trace-3367"></a>
- 22.25s–22.75s (×4), actor 5, squad 0 (trace 3329): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2806. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.612181471721462, 'next_transition': 3365}.
<a id="trace-3372"></a>
- 22.80s–22.80s (×1), actor 8, squad 1 (trace 3372): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 2809. Next observer evidence: {'until': 23.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3915295634664666, 'next_transition': 329}.
<a id="trace-3388"></a>
- 23.00s–23.00s (×1), actor 0, squad 0 (trace 3388): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2801. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1953968158003115, 'next_transition': 3723}.
<a id="trace-3723"></a>
<a id="trace-3725"></a>
- 23.25s–23.25s (×2), actor 5, squad 0 (trace 3723): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2806. Next observer evidence: {'until': 23.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21463337832167534, 'next_transition': 328}.
<a id="trace-328"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (events line 328): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-329"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (events line 329): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3737"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 3737): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676091 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 3737. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19363271002953672, 'next_transition': 3757}.
<a id="trace-3738"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 3738): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676091 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 3738. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19363271002953672, 'next_transition': 3757}.
<a id="trace-3739"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 3739): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676091 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 3739. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.774868874749672, 'next_transition': 3808}.
<a id="trace-3740"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 3740): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676091 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 3740. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.774868874749672, 'next_transition': 3808}.
<a id="trace-3757"></a>
<a id="trace-3759"></a>
<a id="trace-3800"></a>
<a id="trace-3802"></a>
<a id="trace-3853"></a>
<a id="trace-3855"></a>
<a id="trace-3940"></a>
<a id="trace-3942"></a>
<a id="trace-4029"></a>
<a id="trace-4031"></a>
<a id="trace-4242"></a>
<a id="trace-4244"></a>
<a id="trace-4273"></a>
<a id="trace-4275"></a>
- 23.75s–26.75s (×14), actor 5, squad 0 (trace 3757): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 23.55s, trace 3740. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.548982166128282, 'next_transition': 3800}.
<a id="trace-3808"></a>
- 24.30s–24.30s (×1), actor 8, squad 1 (trace 3808): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 2809. Next observer evidence: {'until': 25.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.890054964809225, 'next_transition': 3951}.
<a id="trace-3951"></a>
- 25.45s–25.45s (×1), actor 8, squad 1 (trace 3951): MoveTactically. Knowledge: actor memory at 25.00s, trace 3870. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43324082682152576, 'next_transition': 4056}.
<a id="trace-3952"></a>
- 25.45s–25.45s (×1), actor 8, squad 1 (trace 3952): received platoon directive. Knowledge: actor memory at 25.00s, trace 3870. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43324082682152576, 'next_transition': 4056}.
<a id="trace-4056"></a>
- 25.95s–25.95s (×1), actor 8, squad 1 (trace 4056): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3870. Next observer evidence: {'until': 29.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.969452674851104, 'next_transition': 4893}.
<a id="trace-4057"></a>
- 25.95s–25.95s (×1), actor 8, squad 1 (trace 4057): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 3870. Next observer evidence: {'until': 29.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.969452674851104, 'next_transition': 4893}.
<a id="trace-4280"></a>
- 26.75s–26.75s (×1), actor 0, squad 0 (trace 4280): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3862. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2409288492608984, 'next_transition': 4316}.
<a id="trace-4316"></a>
<a id="trace-4318"></a>
- 27.25s–27.25s (×2), actor 5, squad 0 (trace 4316): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3867. Next observer evidence: {'until': 27.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1536407418580282, 'next_transition': 4781}.
<a id="trace-4325"></a>
- 27.25s–27.25s (×1), actor 0, squad 0 (trace 4325): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 3862. Next observer evidence: {'until': 27.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1536407418580282, 'next_transition': 4781}.
<a id="trace-4326"></a>
- 27.25s–27.25s (×1), actor 0, squad 0 (trace 4326): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 3862. Next observer evidence: {'until': 27.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1536407418580282, 'next_transition': 4781}.
<a id="trace-4781"></a>
<a id="trace-4783"></a>
<a id="trace-4820"></a>
<a id="trace-4822"></a>
<a id="trace-4855"></a>
<a id="trace-4857"></a>
<a id="trace-4884"></a>
<a id="trace-4886"></a>
<a id="trace-4908"></a>
<a id="trace-4910"></a>
<a id="trace-5008"></a>
<a id="trace-5010"></a>
<a id="trace-5041"></a>
<a id="trace-5043"></a>
<a id="trace-5091"></a>
<a id="trace-5093"></a>
<a id="trace-5125"></a>
<a id="trace-5127"></a>
<a id="trace-5151"></a>
<a id="trace-5153"></a>
<a id="trace-5196"></a>
<a id="trace-5198"></a>
<a id="trace-5240"></a>
<a id="trace-5242"></a>
<a id="trace-5284"></a>
<a id="trace-5286"></a>
<a id="trace-5328"></a>
<a id="trace-5330"></a>
<a id="trace-5358"></a>
<a id="trace-5360"></a>
<a id="trace-5451"></a>
<a id="trace-5453"></a>
<a id="trace-5469"></a>
<a id="trace-5471"></a>
<a id="trace-5501"></a>
<a id="trace-5503"></a>
<a id="trace-5522"></a>
<a id="trace-5524"></a>
<a id="trace-5546"></a>
<a id="trace-5548"></a>
<a id="trace-5564"></a>
<a id="trace-5566"></a>
- 27.75s–37.75s (×42), actor 5, squad 0 (trace 4781): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3867. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24015572909127086, 'next_transition': 4820}.
<a id="trace-4893"></a>
- 29.30s–29.30s (×1), actor 8, squad 1 (trace 4893): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3870. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3834564479791083, 'next_transition': 5028}.
<a id="trace-5028"></a>
- 30.70s–30.70s (×1), actor 8, squad 1 (trace 5028): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 4935. Next observer evidence: {'until': 33.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.059491291218317005, 'next_transition': 563}.
<a id="trace-563"></a>
- 33.45s–33.45s (×1), actor 5, squad 1 (events line 563): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5262"></a>
- 33.45s–33.45s (×1), actor 5, squad 1 (trace 5262): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.604013 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 5262. Next observer evidence: {'until': 63.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.1468999999999987, 'next_transition': None}.
<a id="trace-5263"></a>
- 33.45s–33.45s (×1), actor 5, squad 1 (trace 5263): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.604013 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 33.45s, trace 5263. Next observer evidence: {'until': 63.4, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.1468999999999987, 'next_transition': None}.
<a id="trace-5578"></a>
- 38.05s–38.05s (×1), actor 5, squad 0 (trace 5578): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 38.05s, trace 5578. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4248141383641969, 'next_transition': 5593}.
<a id="trace-5593"></a>
<a id="trace-5595"></a>
<a id="trace-5606"></a>
<a id="trace-5608"></a>
<a id="trace-5631"></a>
<a id="trace-5633"></a>
<a id="trace-5643"></a>
<a id="trace-5645"></a>
<a id="trace-5729"></a>
<a id="trace-5731"></a>
<a id="trace-5750"></a>
<a id="trace-5752"></a>
<a id="trace-5769"></a>
<a id="trace-5771"></a>
<a id="trace-5781"></a>
<a id="trace-5783"></a>
<a id="trace-5798"></a>
<a id="trace-5800"></a>
<a id="trace-5812"></a>
<a id="trace-5814"></a>
<a id="trace-5825"></a>
<a id="trace-5827"></a>
<a id="trace-5836"></a>
<a id="trace-5838"></a>
- 38.25s–43.75s (×24), actor 5, squad 0 (trace 5593): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.05s, trace 5578. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8334108509614145, 'next_transition': 5606}.
<a id="trace-5852"></a>
- 44.10s–44.10s (×1), actor 1, squad 0 (trace 5852): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 40.00s, trace 5657. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0001833333333334982, 'next_transition': 5870}.
<a id="trace-5853"></a>
- 44.10s–44.10s (×1), actor 1, squad 0 (trace 5853): NeedSupport. Knowledge: actor memory at 40.00s, trace 5657. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0001833333333334982, 'next_transition': 5870}.
<a id="trace-5870"></a>
<a id="trace-5872"></a>
<a id="trace-5904"></a>
<a id="trace-5906"></a>
- 44.25s–44.75s (×4), actor 5, squad 0 (trace 5870): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5660. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04623333333333335, 'next_transition': 5904}.
<a id="trace-5915"></a>
- 44.85s–44.85s (×1), actor 1, squad 0 (trace 5915): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 5657. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4203495476188038, 'next_transition': 6074}.
<a id="trace-5920"></a>
- 44.85s–44.85s (×1), actor 1, squad 0 (trace 5920): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 5657. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4203495476188038, 'next_transition': 6074}.
<a id="trace-5921"></a>
- 44.85s–44.85s (×1), actor 1, squad 0 (trace 5921): Reorganise complete: known contact. Knowledge: actor memory at 40.00s, trace 5657. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4203495476188038, 'next_transition': 6074}.
<a id="trace-6074"></a>
<a id="trace-6076"></a>
<a id="trace-6118"></a>
<a id="trace-6120"></a>
<a id="trace-6170"></a>
<a id="trace-6172"></a>
<a id="trace-6204"></a>
<a id="trace-6206"></a>
<a id="trace-6231"></a>
<a id="trace-6233"></a>
<a id="trace-6251"></a>
<a id="trace-6253"></a>
<a id="trace-6277"></a>
<a id="trace-6289"></a>
- 45.25s–48.75s (×14), actor 5, squad 0 (trace 6074): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6002. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4223616838328759, 'next_transition': 6118}.
<a id="trace-6295"></a>
- 49.10s–49.10s (×1), actor 1, squad 0 (trace 6295): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 45.00s, trace 5999. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0785499999999999, 'next_transition': 6420}.
<a id="trace-6296"></a>
- 49.10s–49.10s (×1), actor 1, squad 0 (trace 6296): rearward bound: one stationary suppressing element. Knowledge: actor memory at 45.00s, trace 5999. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0785499999999999, 'next_transition': 6420}.
<a id="trace-6420"></a>
<a id="trace-6429"></a>
<a id="trace-6513"></a>
<a id="trace-6530"></a>
<a id="trace-6546"></a>
<a id="trace-6564"></a>
<a id="trace-6588"></a>
<a id="trace-6602"></a>
<a id="trace-6613"></a>
<a id="trace-6629"></a>
<a id="trace-6643"></a>
<a id="trace-6652"></a>
<a id="trace-6731"></a>
<a id="trace-6748"></a>
<a id="trace-6767"></a>
<a id="trace-6795"></a>
<a id="trace-6821"></a>
<a id="trace-6839"></a>
<a id="trace-6859"></a>
<a id="trace-6869"></a>
<a id="trace-6884"></a>
<a id="trace-6898"></a>
<a id="trace-6972"></a>
<a id="trace-6988"></a>
- 49.25s–60.75s (×24), actor 5, squad 0 (trace 6420): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6002. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1170666666666668, 'next_transition': 6429}.
<a id="trace-6994"></a>
- 61.00s–61.00s (×1), actor 1, squad 0 (trace 6994): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 6904. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001431168163523, 'next_transition': 7156}.
<a id="trace-6995"></a>
- 61.00s–61.00s (×1), actor 1, squad 0 (trace 6995): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 6904. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001431168163523, 'next_transition': 7156}.
<a id="trace-7156"></a>
<a id="trace-7170"></a>
<a id="trace-7200"></a>
<a id="trace-7209"></a>
<a id="trace-7226"></a>
<a id="trace-7243"></a>
<a id="trace-7258"></a>
<a id="trace-7271"></a>
<a id="trace-7348"></a>
<a id="trace-7362"></a>
<a id="trace-7380"></a>
<a id="trace-7398"></a>
<a id="trace-7414"></a>
<a id="trace-7427"></a>
<a id="trace-7444"></a>
<a id="trace-7452"></a>
<a id="trace-7466"></a>
<a id="trace-7475"></a>
<a id="trace-7554"></a>
<a id="trace-7561"></a>
- 61.25s–70.75s (×20), actor 5, squad 0 (trace 7156): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 6907. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000251057450777, 'next_transition': 7170}.
<a id="trace-7568"></a>
- 71.15s–71.15s (×1), actor 1, squad 0 (trace 7568): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 7480. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07561323370357272, 'next_transition': 7620}.
<a id="trace-7610"></a>
- 71.15s–71.15s (×1), actor 1, squad 0 (trace 7610): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 7480. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07561323370357272, 'next_transition': 7620}.
<a id="trace-7620"></a>
<a id="trace-7635"></a>
<a id="trace-7661"></a>
<a id="trace-7686"></a>
<a id="trace-7702"></a>
<a id="trace-7717"></a>
<a id="trace-7736"></a>
<a id="trace-7747"></a>
<a id="trace-7817"></a>
<a id="trace-7823"></a>
<a id="trace-7837"></a>
<a id="trace-7846"></a>
<a id="trace-7863"></a>
<a id="trace-7879"></a>
<a id="trace-7891"></a>
<a id="trace-7898"></a>
<a id="trace-7910"></a>
<a id="trace-7917"></a>
<a id="trace-7991"></a>
- 71.25s–80.25s (×19), actor 5, squad 0 (trace 7620): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 7483. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119469144855005, 'next_transition': 7635}.
<a id="trace-7996"></a>
- 80.45s–80.45s (×1), actor 1, squad 0 (trace 7996): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 80.00s, trace 7922. Next observer evidence: {'until': 80.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8008}.
<a id="trace-8008"></a>
<a id="trace-8031"></a>
<a id="trace-8056"></a>
<a id="trace-8092"></a>
<a id="trace-8104"></a>
<a id="trace-8127"></a>
<a id="trace-8143"></a>
- 80.75s–83.75s (×7), actor 5, squad 0 (trace 8008): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 7925. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4542158345577148, 'next_transition': 8031}.
<a id="trace-1036"></a>
- 84.25s–84.25s (×1), actor 5, squad 0 (events line 1036): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8162}.
<a id="trace-8152"></a>
- 84.25s–84.25s (×1), actor 5, squad 0 (trace 8152): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 7925. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8162}.
<a id="trace-8155"></a>
- 84.25s–84.25s (×1), actor 5, squad 0 (trace 8155): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322816 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.25s, trace 8155. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8162}.
<a id="trace-8156"></a>
- 84.25s–84.25s (×1), actor 5, squad 0 (trace 8156): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322816 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.25s, trace 8156. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8162}.
<a id="trace-8162"></a>
<a id="trace-8232"></a>
<a id="trace-8242"></a>
- 84.75s–85.75s (×3), actor 5, squad 0 (trace 8162): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 84.25s, trace 8156. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2078268602373408, 'next_transition': 8232}.
<a id="trace-8255"></a>
- 86.15s–86.15s (×1), actor 1, squad 0 (trace 8255): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 8168. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8328}.
<a id="trace-8256"></a>
- 86.15s–86.15s (×1), actor 1, squad 0 (trace 8256): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 8168. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8328}.
<a id="trace-8328"></a>
<a id="trace-8341"></a>
<a id="trace-8363"></a>
<a id="trace-8384"></a>
<a id="trace-8399"></a>
<a id="trace-8415"></a>
<a id="trace-8435"></a>
<a id="trace-8443"></a>
<a id="trace-8515"></a>
<a id="trace-8524"></a>
<a id="trace-8533"></a>
<a id="trace-8540"></a>
<a id="trace-8554"></a>
<a id="trace-8564"></a>
<a id="trace-8574"></a>
<a id="trace-8582"></a>
<a id="trace-8595"></a>
<a id="trace-8603"></a>
<a id="trace-8677"></a>
<a id="trace-8688"></a>
<a id="trace-8695"></a>
<a id="trace-8709"></a>
<a id="trace-8719"></a>
<a id="trace-8729"></a>
<a id="trace-8736"></a>
<a id="trace-8748"></a>
<a id="trace-8757"></a>
<a id="trace-8827"></a>
<a id="trace-8833"></a>
<a id="trace-8845"></a>
<a id="trace-8850"></a>
<a id="trace-8861"></a>
<a id="trace-8869"></a>
<a id="trace-8879"></a>
<a id="trace-8886"></a>
<a id="trace-8898"></a>
<a id="trace-8907"></a>
<a id="trace-8974"></a>
<a id="trace-8980"></a>
<a id="trace-8991"></a>
<a id="trace-8998"></a>
<a id="trace-9012"></a>
<a id="trace-9023"></a>
<a id="trace-9034"></a>
<a id="trace-9043"></a>
<a id="trace-9055"></a>
<a id="trace-9069"></a>
<a id="trace-9148"></a>
<a id="trace-9154"></a>
<a id="trace-9162"></a>
<a id="trace-9167"></a>
<a id="trace-9179"></a>
<a id="trace-9188"></a>
<a id="trace-9197"></a>
<a id="trace-9205"></a>
<a id="trace-9219"></a>
<a id="trace-9228"></a>
<a id="trace-9298"></a>
<a id="trace-9307"></a>
<a id="trace-9321"></a>
<a id="trace-9332"></a>
<a id="trace-9350"></a>
<a id="trace-9360"></a>
<a id="trace-9369"></a>
<a id="trace-9376"></a>
<a id="trace-9389"></a>
<a id="trace-9397"></a>
<a id="trace-9467"></a>
<a id="trace-9475"></a>
<a id="trace-9486"></a>
<a id="trace-9494"></a>
<a id="trace-9506"></a>
<a id="trace-9520"></a>
<a id="trace-9537"></a>
<a id="trace-9546"></a>
<a id="trace-9561"></a>
<a id="trace-9571"></a>
<a id="trace-9642"></a>
<a id="trace-9649"></a>
<a id="trace-9659"></a>
<a id="trace-9667"></a>
<a id="trace-9680"></a>
<a id="trace-9689"></a>
<a id="trace-9699"></a>
<a id="trace-9709"></a>
<a id="trace-9720"></a>
<a id="trace-9734"></a>
<a id="trace-9808"></a>
<a id="trace-9815"></a>
<a id="trace-9826"></a>
<a id="trace-9839"></a>
<a id="trace-9853"></a>
<a id="trace-9861"></a>
<a id="trace-9871"></a>
<a id="trace-9880"></a>
<a id="trace-9892"></a>
<a id="trace-9903"></a>
<a id="trace-9970"></a>
<a id="trace-9980"></a>
<a id="trace-9994"></a>
<a id="trace-10001"></a>
<a id="trace-10015"></a>
<a id="trace-10024"></a>
<a id="trace-10036"></a>
<a id="trace-10046"></a>
<a id="trace-10056"></a>
<a id="trace-10064"></a>
<a id="trace-10134"></a>
<a id="trace-10140"></a>
<a id="trace-10153"></a>
<a id="trace-10158"></a>
<a id="trace-10174"></a>
<a id="trace-10182"></a>
<a id="trace-10197"></a>
<a id="trace-10208"></a>
- 86.25s–143.80s (×115), actor 5, squad 0 (trace 8328): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 8171. Next observer evidence: {'until': 86.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8341}.
<a id="trace-1209"></a>
- 144.25s–144.25s (×1), actor 5, squad 0 (events line 1209): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10214"></a>
- 144.25s–144.25s (×1), actor 5, squad 0 (trace 10214): renew committed intent (75 s lifetime). Knowledge: actor memory at 144.25s, trace 10214. Next observer evidence: None.
<a id="trace-10220"></a>
<a id="trace-10231"></a>
<a id="trace-10302"></a>
<a id="trace-10310"></a>
<a id="trace-10324"></a>
<a id="trace-10332"></a>
<a id="trace-10346"></a>
<a id="trace-10354"></a>
<a id="trace-10364"></a>
<a id="trace-10373"></a>
<a id="trace-10386"></a>
<a id="trace-10401"></a>
<a id="trace-10470"></a>
<a id="trace-10476"></a>
<a id="trace-10489"></a>
<a id="trace-10497"></a>
<a id="trace-10510"></a>
<a id="trace-10523"></a>
<a id="trace-10535"></a>
<a id="trace-10545"></a>
<a id="trace-10555"></a>
<a id="trace-10564"></a>
<a id="trace-10633"></a>
<a id="trace-10642"></a>
<a id="trace-10658"></a>
<a id="trace-10666"></a>
<a id="trace-10678"></a>
<a id="trace-10688"></a>
<a id="trace-10700"></a>
<a id="trace-10712"></a>
<a id="trace-10724"></a>
<a id="trace-10734"></a>
<a id="trace-10806"></a>
<a id="trace-10813"></a>
<a id="trace-10826"></a>
<a id="trace-10833"></a>
<a id="trace-10848"></a>
<a id="trace-10862"></a>
<a id="trace-10872"></a>
<a id="trace-10881"></a>
<a id="trace-10891"></a>
<a id="trace-10901"></a>
<a id="trace-10973"></a>
<a id="trace-10982"></a>
<a id="trace-10993"></a>
<a id="trace-11000"></a>
<a id="trace-11016"></a>
<a id="trace-11027"></a>
<a id="trace-11037"></a>
<a id="trace-11049"></a>
<a id="trace-11065"></a>
<a id="trace-11073"></a>
<a id="trace-11142"></a>
<a id="trace-11149"></a>
<a id="trace-11159"></a>
<a id="trace-11166"></a>
<a id="trace-11183"></a>
<a id="trace-11192"></a>
<a id="trace-11203"></a>
<a id="trace-11218"></a>
<a id="trace-11231"></a>
<a id="trace-11242"></a>
<a id="trace-11315"></a>
<a id="trace-11319"></a>
<a id="trace-11335"></a>
<a id="trace-11342"></a>
<a id="trace-11354"></a>
<a id="trace-11363"></a>
<a id="trace-11372"></a>
<a id="trace-11382"></a>
<a id="trace-11395"></a>
<a id="trace-11403"></a>
<a id="trace-11477"></a>
<a id="trace-11484"></a>
<a id="trace-11498"></a>
<a id="trace-11505"></a>
<a id="trace-11520"></a>
<a id="trace-11535"></a>
<a id="trace-11544"></a>
<a id="trace-11553"></a>
<a id="trace-11564"></a>
<a id="trace-11572"></a>
<a id="trace-11642"></a>
<a id="trace-11650"></a>
<a id="trace-11663"></a>
<a id="trace-11674"></a>
<a id="trace-11688"></a>
<a id="trace-11700"></a>
<a id="trace-11710"></a>
<a id="trace-11723"></a>
<a id="trace-11739"></a>
<a id="trace-11748"></a>
<a id="trace-11817"></a>
<a id="trace-11823"></a>
<a id="trace-11833"></a>
<a id="trace-11842"></a>
<a id="trace-11854"></a>
<a id="trace-11863"></a>
<a id="trace-11878"></a>
<a id="trace-11888"></a>
<a id="trace-11901"></a>
<a id="trace-11914"></a>
<a id="trace-11986"></a>
<a id="trace-11999"></a>
<a id="trace-12011"></a>
<a id="trace-12018"></a>
<a id="trace-12029"></a>
<a id="trace-12037"></a>
<a id="trace-12047"></a>
<a id="trace-12055"></a>
<a id="trace-12064"></a>
<a id="trace-12074"></a>
<a id="trace-12148"></a>
<a id="trace-12158"></a>
<a id="trace-12170"></a>
<a id="trace-12181"></a>
<a id="trace-12200"></a>
<a id="trace-12208"></a>
<a id="trace-12218"></a>
<a id="trace-12229"></a>
<a id="trace-12240"></a>
<a id="trace-12248"></a>
- 144.30s–204.80s (×122), actor 5, squad 0 (trace 10220): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 144.25s, trace 10214. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10231}.
<a id="trace-1399"></a>
- 205.00s–205.00s (×1), actor 5, squad 0 (events line 1399): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12319}.
<a id="trace-12268"></a>
- 205.00s–205.00s (×1), actor 5, squad 0 (trace 12268): renew committed intent (75 s lifetime). Knowledge: actor memory at 205.00s, trace 12268. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12319}.
<a id="trace-12319"></a>
<a id="trace-12325"></a>
<a id="trace-12336"></a>
<a id="trace-12347"></a>
<a id="trace-12364"></a>
<a id="trace-12372"></a>
<a id="trace-12384"></a>
<a id="trace-12393"></a>
<a id="trace-12411"></a>
<a id="trace-12419"></a>
<a id="trace-12489"></a>
<a id="trace-12497"></a>
<a id="trace-12508"></a>
<a id="trace-12516"></a>
<a id="trace-12528"></a>
<a id="trace-12538"></a>
<a id="trace-12547"></a>
<a id="trace-12556"></a>
<a id="trace-12573"></a>
<a id="trace-12582"></a>
<a id="trace-12654"></a>
<a id="trace-12670"></a>
<a id="trace-12679"></a>
<a id="trace-12686"></a>
<a id="trace-12698"></a>
<a id="trace-12707"></a>
<a id="trace-12718"></a>
<a id="trace-12727"></a>
<a id="trace-12738"></a>
<a id="trace-12749"></a>
<a id="trace-12818"></a>
<a id="trace-12829"></a>
<a id="trace-12840"></a>
<a id="trace-12851"></a>
<a id="trace-12869"></a>
<a id="trace-12878"></a>
<a id="trace-12888"></a>
<a id="trace-12895"></a>
<a id="trace-12905"></a>
<a id="trace-12913"></a>
<a id="trace-12984"></a>
<a id="trace-12992"></a>
<a id="trace-13005"></a>
<a id="trace-13010"></a>
<a id="trace-13023"></a>
<a id="trace-13033"></a>
<a id="trace-13047"></a>
<a id="trace-13075"></a>
<a id="trace-13083"></a>
<a id="trace-13153"></a>
<a id="trace-13158"></a>
<a id="trace-13169"></a>
<a id="trace-13176"></a>
<a id="trace-13192"></a>
<a id="trace-13201"></a>
<a id="trace-13212"></a>
<a id="trace-13225"></a>
<a id="trace-13233"></a>
<a id="trace-13244"></a>
<a id="trace-13323"></a>
<a id="trace-13330"></a>
<a id="trace-13340"></a>
<a id="trace-13351"></a>
<a id="trace-13363"></a>
<a id="trace-13372"></a>
<a id="trace-13382"></a>
<a id="trace-13391"></a>
<a id="trace-13403"></a>
<a id="trace-13415"></a>
<a id="trace-13486"></a>
<a id="trace-13493"></a>
<a id="trace-13506"></a>
<a id="trace-13515"></a>
<a id="trace-13536"></a>
<a id="trace-13543"></a>
<a id="trace-13552"></a>
<a id="trace-13562"></a>
<a id="trace-13572"></a>
<a id="trace-13581"></a>
<a id="trace-13651"></a>
<a id="trace-13658"></a>
<a id="trace-13670"></a>
<a id="trace-13680"></a>
<a id="trace-13697"></a>
<a id="trace-13705"></a>
<a id="trace-13717"></a>
<a id="trace-13734"></a>
<a id="trace-13746"></a>
<a id="trace-13754"></a>
<a id="trace-13825"></a>
<a id="trace-13831"></a>
<a id="trace-13843"></a>
<a id="trace-13848"></a>
<a id="trace-13862"></a>
<a id="trace-13872"></a>
<a id="trace-13882"></a>
<a id="trace-13892"></a>
<a id="trace-13904"></a>
<a id="trace-13917"></a>
<a id="trace-13990"></a>
<a id="trace-13996"></a>
<a id="trace-14010"></a>
<a id="trace-14018"></a>
<a id="trace-14030"></a>
<a id="trace-14043"></a>
<a id="trace-14050"></a>
<a id="trace-14058"></a>
<a id="trace-14070"></a>
<a id="trace-14077"></a>
<a id="trace-14149"></a>
<a id="trace-14156"></a>
<a id="trace-14171"></a>
<a id="trace-14184"></a>
<a id="trace-14196"></a>
<a id="trace-14204"></a>
<a id="trace-14216"></a>
<a id="trace-14226"></a>
<a id="trace-14239"></a>
<a id="trace-14246"></a>
- 205.30s–264.80s (×119), actor 5, squad 0 (trace 12319): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 12268. Next observer evidence: {'until': 205.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12325}.
<a id="trace-1589"></a>
- 265.30s–265.30s (×1), actor 5, squad 0 (events line 1589): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14316"></a>
- 265.30s–265.30s (×1), actor 5, squad 0 (trace 14316): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 14254. Next observer evidence: {'until': 265.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14324}.
<a id="trace-14321"></a>
- 265.30s–265.30s (×1), actor 5, squad 0 (trace 14321): renew committed intent (75 s lifetime). Knowledge: actor memory at 265.30s, trace 14321. Next observer evidence: {'until': 265.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14324}.
<a id="trace-14324"></a>
<a id="trace-14334"></a>
<a id="trace-14343"></a>
<a id="trace-14355"></a>
<a id="trace-14367"></a>
<a id="trace-14383"></a>
<a id="trace-14390"></a>
<a id="trace-14401"></a>
<a id="trace-14411"></a>
<a id="trace-14482"></a>
<a id="trace-14490"></a>
<a id="trace-14503"></a>
<a id="trace-14508"></a>
<a id="trace-14522"></a>
<a id="trace-14532"></a>
<a id="trace-14542"></a>
<a id="trace-14551"></a>
<a id="trace-14563"></a>
<a id="trace-14571"></a>
<a id="trace-14645"></a>
<a id="trace-14654"></a>
<a id="trace-14665"></a>
<a id="trace-14670"></a>
<a id="trace-14686"></a>
<a id="trace-14696"></a>
<a id="trace-14705"></a>
<a id="trace-14717"></a>
<a id="trace-14729"></a>
<a id="trace-14735"></a>
<a id="trace-14807"></a>
<a id="trace-14811"></a>
<a id="trace-14825"></a>
<a id="trace-14838"></a>
<a id="trace-14851"></a>
<a id="trace-14862"></a>
<a id="trace-14870"></a>
<a id="trace-14881"></a>
<a id="trace-14893"></a>
<a id="trace-14902"></a>
<a id="trace-14974"></a>
<a id="trace-14983"></a>
<a id="trace-14991"></a>
<a id="trace-15001"></a>
<a id="trace-15011"></a>
<a id="trace-15022"></a>
<a id="trace-15038"></a>
<a id="trace-15047"></a>
<a id="trace-15058"></a>
<a id="trace-15067"></a>
<a id="trace-15139"></a>
<a id="trace-15148"></a>
<a id="trace-15160"></a>
<a id="trace-15170"></a>
<a id="trace-15186"></a>
<a id="trace-15194"></a>
<a id="trace-15207"></a>
<a id="trace-15216"></a>
<a id="trace-15242"></a>
<a id="trace-15312"></a>
<a id="trace-15318"></a>
<a id="trace-15326"></a>
<a id="trace-15335"></a>
<a id="trace-15350"></a>
<a id="trace-15359"></a>
<a id="trace-15373"></a>
<a id="trace-15383"></a>
<a id="trace-15395"></a>
<a id="trace-15410"></a>
<a id="trace-15477"></a>
<a id="trace-15486"></a>
<a id="trace-15500"></a>
<a id="trace-15505"></a>
<a id="trace-15515"></a>
<a id="trace-15524"></a>
<a id="trace-15533"></a>
<a id="trace-15543"></a>
<a id="trace-15555"></a>
<a id="trace-15566"></a>
<a id="trace-15639"></a>
<a id="trace-15648"></a>
<a id="trace-15661"></a>
<a id="trace-15669"></a>
<a id="trace-15684"></a>
<a id="trace-15692"></a>
<a id="trace-15707"></a>
<a id="trace-15714"></a>
<a id="trace-15722"></a>
<a id="trace-15731"></a>
<a id="trace-15801"></a>
<a id="trace-15806"></a>
<a id="trace-15817"></a>
<a id="trace-15829"></a>
<a id="trace-15846"></a>
<a id="trace-15854"></a>
<a id="trace-15868"></a>
<a id="trace-15877"></a>
<a id="trace-15891"></a>
<a id="trace-15905"></a>
<a id="trace-15974"></a>
<a id="trace-15980"></a>
<a id="trace-15990"></a>
<a id="trace-15997"></a>
<a id="trace-16011"></a>
<a id="trace-16020"></a>
<a id="trace-16028"></a>
<a id="trace-16042"></a>
<a id="trace-16055"></a>
<a id="trace-16065"></a>
<a id="trace-16134"></a>
<a id="trace-16147"></a>
<a id="trace-16163"></a>
<a id="trace-16170"></a>
<a id="trace-16182"></a>
<a id="trace-16188"></a>
<a id="trace-16197"></a>
<a id="trace-16207"></a>
<a id="trace-16218"></a>
<a id="trace-16226"></a>
- 265.80s–324.80s (×118), actor 5, squad 0 (trace 14324): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.30s, trace 14321. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14334}.
<a id="trace-1775"></a>
- 325.30s–325.30s (×1), actor 5, squad 0 (events line 1775): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16298"></a>
- 325.30s–325.30s (×1), actor 5, squad 0 (trace 16298): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 16234. Next observer evidence: {'until': 325.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16306}.
<a id="trace-16301"></a>
- 325.30s–325.30s (×1), actor 5, squad 0 (trace 16301): renew committed intent (75 s lifetime). Knowledge: actor memory at 325.30s, trace 16301. Next observer evidence: {'until': 325.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16306}.
<a id="trace-16306"></a>
<a id="trace-16324"></a>
<a id="trace-16331"></a>
<a id="trace-16346"></a>
<a id="trace-16361"></a>
<a id="trace-16370"></a>
<a id="trace-16379"></a>
<a id="trace-16389"></a>
<a id="trace-16395"></a>
<a id="trace-16465"></a>
<a id="trace-16471"></a>
<a id="trace-16483"></a>
<a id="trace-16489"></a>
<a id="trace-16503"></a>
<a id="trace-16517"></a>
<a id="trace-16530"></a>
<a id="trace-16545"></a>
<a id="trace-16563"></a>
<a id="trace-16571"></a>
<a id="trace-16639"></a>
<a id="trace-16645"></a>
<a id="trace-16653"></a>
<a id="trace-16660"></a>
<a id="trace-16673"></a>
<a id="trace-16679"></a>
<a id="trace-16687"></a>
<a id="trace-16700"></a>
<a id="trace-16713"></a>
<a id="trace-16722"></a>
<a id="trace-16798"></a>
<a id="trace-16805"></a>
<a id="trace-16822"></a>
<a id="trace-16833"></a>
<a id="trace-16845"></a>
<a id="trace-16853"></a>
<a id="trace-16860"></a>
<a id="trace-16870"></a>
<a id="trace-16880"></a>
<a id="trace-16889"></a>
<a id="trace-16960"></a>
<a id="trace-16967"></a>
<a id="trace-16979"></a>
<a id="trace-16988"></a>
<a id="trace-17007"></a>
<a id="trace-17022"></a>
<a id="trace-17034"></a>
<a id="trace-17044"></a>
<a id="trace-17052"></a>
<a id="trace-17060"></a>
<a id="trace-17130"></a>
<a id="trace-17136"></a>
<a id="trace-17147"></a>
<a id="trace-17156"></a>
<a id="trace-17169"></a>
<a id="trace-17180"></a>
<a id="trace-17190"></a>
<a id="trace-17204"></a>
<a id="trace-17221"></a>
<a id="trace-17233"></a>
<a id="trace-17303"></a>
<a id="trace-17309"></a>
<a id="trace-17320"></a>
<a id="trace-17328"></a>
<a id="trace-17338"></a>
<a id="trace-17345"></a>
<a id="trace-17354"></a>
<a id="trace-17363"></a>
<a id="trace-17376"></a>
<a id="trace-17385"></a>
- 325.80s–359.80s (×69), actor 5, squad 0 (trace 16306): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.30s, trace 16301. Next observer evidence: {'until': 326.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16324}.

## Net delivery

137 matched order/radio deliveries; 506 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.366s; maximum 1.500s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2809: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2811: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2812: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2813: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2814: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2819: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2820: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 3737: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 3738: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 3739: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 3740: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3862: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3865: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3867: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3868: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3870: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3872: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3873: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3874: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3875: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3876: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3877: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3878: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3879: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3880: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3881: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4927: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4928: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4930: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4932: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4933: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4935: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4936: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4937: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4938: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4939: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4940: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4941: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4942: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4943: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4944: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4945: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4946: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 5262: estimate 13.24; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 33.45s leader 5, trace 5263: estimate 13.24; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5376: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5377: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5378: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5380: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5381: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5383: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5384: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5385: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5386: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5387: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5388: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5389: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5390: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5391: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5392: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5393: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.05s leader 5, trace 5578: estimate 13.15; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 5656: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5657: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5658: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5660: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5661: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5663: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5664: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5665: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5666: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5667: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5668: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5669: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5670: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5671: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5672: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5999: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6000: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6002: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6003: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6005: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6006: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6007: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6008: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6009: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6010: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6011: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6012: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 6013: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 6014: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6441: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6442: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6444: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6445: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6447: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6448: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6449: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6450: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6451: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6452: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6453: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6454: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6455: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6456: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 6663: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 6664: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 6665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 6666: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 6667: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 6668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 6669: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 6670: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 6671: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 6672: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 6673: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 6674: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 6675: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 6676: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 6677: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 6678: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 6904: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 6905: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 6906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 6907: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 6908: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 6909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 6910: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 6911: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 6912: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 6913: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 6914: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 6915: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 6916: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 6917: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 6918: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 6919: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 7281: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 7282: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7284: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7285: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 7286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7287: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7288: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7289: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7290: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7291: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7292: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7293: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7294: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 7295: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 7296: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 7480: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 7481: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 7482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 7483: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 7484: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 7485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 7486: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 7487: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 7488: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 7489: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 7490: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 7491: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 7492: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 7493: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 7494: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 7495: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 7752: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 7753: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 7754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 7755: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 7756: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 7757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 7758: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 7759: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 7760: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 7761: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 7762: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 7763: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 7764: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 7765: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 7766: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 7767: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 7922: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 7923: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 7924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 7925: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 7926: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 7927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 7928: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 7929: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 7930: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 7931: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 7932: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 7933: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 7934: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 7935: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 7936: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 7937: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.25s leader 5, trace 8155: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.25s leader 5, trace 8156: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 8168: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 8169: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 8170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 8171: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 8172: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 8173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 8174: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 8175: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 8176: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 8177: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 8178: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 8179: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 8180: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 8181: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 8182: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 8183: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 8446: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 8447: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 8448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 8449: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 8450: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 8451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 8452: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 8453: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 8454: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 8455: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 8456: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 8457: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 8458: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 8459: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 8460: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 8461: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 8608: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 8609: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 8610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 8611: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 8612: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 8613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 8614: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 8615: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 8616: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 8617: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 8618: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 8619: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 8620: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 8621: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 8622: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 8623: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 8762: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 8763: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 8764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 8765: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 8766: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 8767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 8768: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 8769: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 8770: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 8771: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 8772: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 8773: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 8774: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 8775: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 8776: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 8777: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 8910: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 8911: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 8912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 8913: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 8914: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 8915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 8916: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 8917: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 8918: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 8919: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 8920: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 8921: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 8922: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 8923: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 8924: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 8925: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 9084: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 9085: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 9086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 9087: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 9088: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 9089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 9090: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 9091: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 9092: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 9093: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 9094: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 9095: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 9096: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 9097: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 9098: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 9099: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 9234: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 9235: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 9236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 9237: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 9238: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 9239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 9240: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 9241: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 9242: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 9243: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 9244: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 9245: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 9246: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 9247: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 9248: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 9249: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 9402: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 9403: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 9404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 9405: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 9406: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 9407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 9408: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 9409: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 9410: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 9411: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 9412: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 9413: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 9414: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 9415: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 9416: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 9417: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 9578: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 9579: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 9580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 9581: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 9582: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 9583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 9584: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 9585: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 9586: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 9587: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 9588: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 9589: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 9590: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 9591: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 9592: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 9593: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 9740: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 9741: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 9742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 9743: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 9744: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 9745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 9746: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 9747: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 9748: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 9749: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 9750: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 9751: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 9752: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 9753: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 9754: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 9755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 9906: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 9907: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 9908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 9909: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 9910: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 9911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 9912: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 9913: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 9914: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 9915: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 9916: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 9917: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 9918: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 9919: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 9920: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 9921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 10070: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 10071: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 10072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 10073: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 10074: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 10075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 10076: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 10077: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 10078: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 10079: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 10080: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 10081: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 10082: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 10083: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 10084: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 10085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.25s leader 5, trace 10214: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 10236: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 10237: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 10238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 10239: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 10240: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 10241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 10242: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 10243: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 10244: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 10245: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 10246: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 10247: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 10248: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 10249: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 10250: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 10251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 10406: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 10407: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 10408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 10409: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 10410: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 10411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 10412: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 10413: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 10414: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 10415: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 10416: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 10417: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 10418: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 10419: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 10420: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 10421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 10569: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 10570: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 10571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 10572: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 10573: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 10574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 10575: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 10576: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 10577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 10578: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 10579: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 10580: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 10581: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 10582: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 10583: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 10584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 10738: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 10739: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 10740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 10741: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 10742: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 10743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 10744: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 10745: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 10746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 10747: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 10748: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 10749: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 10750: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 10751: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 10752: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 10753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 10906: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 10907: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 10908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 10909: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 10910: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 10911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 10912: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 10913: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 10914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 10915: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 10916: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 10917: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 10918: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 10919: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 10920: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 10921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 11078: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 11079: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 11080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 11081: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 11082: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 11083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 11084: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 11085: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 11086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 11087: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 11088: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 11089: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 11090: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 11091: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 11092: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 11093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 11247: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 11248: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 11249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 11250: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 11251: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 11252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 11253: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 11254: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 11255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 11256: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 11257: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 11258: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 11259: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 11260: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 11261: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 11262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 11408: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 11409: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 11410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 11411: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 11412: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 11413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 11414: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 11415: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 11416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 11417: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 11418: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 11419: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 11420: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 11421: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 11422: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 11423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 11577: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 11578: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 11579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 11580: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 11581: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 11582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 11583: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 11584: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 11585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 11586: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 11587: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 11588: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 11589: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 11590: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 11591: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 11592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 11753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 11754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 11755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 11756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 11757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 11758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 11759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 11760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 11761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 11762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 11763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 11764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 11765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 11766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 11767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 11768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 11919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 11920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 11921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 11922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 11923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 11924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 11925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 11926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 11927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 11928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 11929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 11930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 11931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 11932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 11933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 11934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 12083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 12084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 12085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 12086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 12087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 12088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 12089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 12090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 12091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 12092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 12093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 12094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 12095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 12096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 12097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 12098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 12252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 12253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 12254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 12255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 12256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 12257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 12258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 12259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 12260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 12261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 12262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 12263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 12264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 12265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 12266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 12267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 12268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 12424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 12425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 12426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 12427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 12428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 12429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 12430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 12431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 12432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 12433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 12434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 12435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 12436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 12437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 12438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 12439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 12590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 12591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 12592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 12593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 12594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 12595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 12596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 12597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 12598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 12599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 12600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 12601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 12602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 12603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 12604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 12605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 12754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 12755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 12756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 12757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 12758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 12759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 12760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 12761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 12762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 12763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 12764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 12765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 12766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 12767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 12768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 12769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 12918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 12919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 12920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 12921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 12922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 12923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 12924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 12925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 12926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 12927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 12928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 12929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 12930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 12931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 12932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 12933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 13089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 13090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 13091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 13092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 13093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 13094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 13095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 13096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 13097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 13098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 13099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 13100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 13101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 13102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 13103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 13104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 13250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 13251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 13252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 13253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 13254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 13255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 13256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 13257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 13258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 13259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 13260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 13261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 13262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 13263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 13264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 13265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 13418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 13419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 13420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 13421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 13422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 13423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 13424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 13425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 13426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 13427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 13428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 13429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 13430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 13431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 13432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 13433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 13586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 13587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 13588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 13589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 13590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 13591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 13592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 13593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 13594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 13595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 13596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 13597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 13598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 13599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 13600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 13601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 13759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 13760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 13761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 13762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 13763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 13764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 13765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 13766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 13767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 13768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 13769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 13770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 13771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 13772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 13773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 13774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 13920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 13921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 13922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 13923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 13924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 13925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 13926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 13927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 13928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 13929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 13930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 13931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 13932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 13933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 13934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 13935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 14082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 14083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 14084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 14085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 14086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 14087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 14088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 14089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 14090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 14091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 14092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 14093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 14094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 14095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 14096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 14097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 14251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 14252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 14253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 14254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 14255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 14256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 14257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 14258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 14259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 14260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 14261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 14262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 14263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 14264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 14265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 14266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.30s leader 5, trace 14321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 14416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 14417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 14418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 14419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 14420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 14421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 14422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 14423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 14424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 14425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 14426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 14427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 14428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 14429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 14430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 14431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 14580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 14581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 14582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 14583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 14584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 14585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 14586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 14587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 14588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 14589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 14590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 14591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 14592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 14593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 14594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 14595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 14743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 14744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 14745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 14746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 14747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 14748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 14749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 14750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 14751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 14752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 14753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 14754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 14755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 14756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 14757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 14758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 14907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 14908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 14909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 14911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 14912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 14915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 14916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 14917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 14920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 14921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 14922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 15074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 15075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 15076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 15077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 15078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 15079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 15080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 15081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 15082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 15083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 15084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 15085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 15086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 15087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 15088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 15089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 15247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 15248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 15249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 15250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 15251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 15252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 15253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 15254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 15255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 15256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 15257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 15258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 15259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 15260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 15261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 15262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 15413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 15414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 15415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 15416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 15417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 15418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 15419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 15420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 15421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 15422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 15423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 15424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 15425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 15426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 15427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 15428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 15574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 15575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 15576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 15577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 15578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 15579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 15580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 15581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 15582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 15583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 15584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 15585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 15586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 15587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 15588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 15589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 15736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 15737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 15738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 15739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 15740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 15741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 15742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 15743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 15744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 15745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 15746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 15747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 15748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 15749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 15750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 15751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 15910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 15911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 15912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 15914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 15915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 15918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 15919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 15920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 15923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 15924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 15925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 16070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 16071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 16072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 16073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 16074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 16075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 16076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 16077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 16078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 16079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 16080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 16081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 16082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 16083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 16084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 16085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 16231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 16232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 16233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 16234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 16235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 16236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 16237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 16238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 16239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 16240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 16241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 16242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 16243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 16244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 16245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 16246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.30s leader 5, trace 16301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 16400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 16401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 16402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 16403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 16404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 16405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 16406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 16407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 16408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 16409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 16410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 16411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 16412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 16413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 16414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 16415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 16575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 16576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 16577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 16578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 16579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 16580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 16581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 16582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 16583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 16584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 16585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 16586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 16587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 16588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 16589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 16590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 16726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 16727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 16728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 16729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 16730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 16731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 16732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 16733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 16734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 16735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 16736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 16737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 16738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 16739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 16740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 16741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 16894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 16895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 16896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 16897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 16898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 16899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 16900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 16901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 16902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 16903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 16904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 16905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 16906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 16907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 16908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 16909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 17065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 17066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 17067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 17068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 17069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 17070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 17071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 17072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 17073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 17074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 17075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 17076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 17077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 17078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 17079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 17080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 17236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 17237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 17238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 17239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 17240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 17241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 17242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 17243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 17244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 17245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 17246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 17247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 17248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 17249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 17250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 17251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 17390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 17391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 17392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 17393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 17394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 17395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 17396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 17397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 17398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 17399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 17400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 17401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 17402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 17403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 17404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 17405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Soren killed in action
- 1: Cole killed in action
- 1: Vale incapacitated

## Outcome attribution

- 84.25s, evidence 1036: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8162}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.25s, evidence 8155: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322816 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8162}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 84.25s, evidence 8156: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.322816 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8162}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 144.25s, evidence 1209: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 205.00s, evidence 1399: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12319}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 265.30s, evidence 1589: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 325.30s, evidence 1775: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
