# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/10/107/good-azure/battle-107-1789673838397404967`

## Battle summary

**Ember** · 360 s · 196 shots.

### Turning points

- 17.6s, squad 1: contact (events line 198). First recorded contact.
- 26.7s, squad 0: withdrawal ([trace 4664](#trace-4664)). 68.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 39.4s, squad 1: help call ([trace 6146](#trace-6146)). No completion observed before termination.
- 43.0s, squad 0: help call ([trace 6485](#trace-6485)). No completion observed before termination.
- 43.5s, squad 1: withdrawal ([trace 6522](#trace-6522)). No completion observed before termination.
- 68.8s, squad 0: help answer ([trace 8273](#trace-8273)). 89.7s, squad 0: Withdraw to received rally.
- 89.7s, squad 0: withdrawal ([trace 10966](#trace-10966)). 102.2s, squad 0: advanced tactically.
- 101.5s, squad 0: help call ([trace 12097](#trace-12097)). No completion observed before termination.
- 106.2s, squad 0: help call ([trace 12451](#trace-12451)). No completion observed before termination.
- 191.2s, squad 0: withdrawal ([trace 18652](#trace-18652)). No completion observed before termination.

### Squads

- **0** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; withdrew; 4 shots, 3/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; no completed objective recorded; 3 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 146 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 43 shots, 0/2 lost.

### Decisions and attribution

At 26.1s, squad 1 chose FightHere: nearest known group ([trace 4623](#trace-4623)), followed by 0 shots and 1 own casualties; estimate 11.8 against 10 distinct squad-reported contacts; At 43.5s, squad 1 chose broke contact ([trace 6522](#trace-6522)), followed by 0 shots and 1 own casualties; estimate 12.7 against 0 distinct squad-reported contacts; At 19.8s, squad 0 chose took cover and returned fire ([trace 3144](#trace-3144)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450117858056694, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 827}.

### Communication

367 matched deliveries (mean 0.29s, max 1.60s); 508 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.55s, squad 1, contact, evidence events line 198: First recorded contact; .
- 26.70s, squad 0, withdrawal, evidence 4664: BreakContact: believed ratio at least two without superiority; 68.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 39.40s, squad 1, help call, evidence 6146: NeedSupport; No completion observed before termination.
- 42.95s, squad 0, help call, evidence 6485: NeedSupport; No completion observed before termination.
- 43.55s, squad 1, withdrawal, evidence 6522: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 68.85s, squad 0, help answer, evidence 8273: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 89.7s, squad 0: Withdraw to received rally.
- 89.65s, squad 0, withdrawal, evidence 10966: Withdraw to received rally; 102.2s, squad 0: advanced tactically.
- 101.50s, squad 0, help call, evidence 12097: NeedSupport; No completion observed before termination.
- 106.20s, squad 0, help call, evidence 12451: NeedSupport; No completion observed before termination.
- 191.25s, squad 0, withdrawal, evidence 18652: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915688660345217, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915688660345217, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915688660345217, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.52868248422506, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.52868248422506, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.52868248422506, 'next_transition': 87}.
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
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259977012703431, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450117858056694, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 827}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450117858056694, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450117858056694, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 827}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409968706183733, 'next_transition': 827}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-739"></a>
<a id="trace-741"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-935"></a>
<a id="trace-937"></a>
<a id="trace-969"></a>
<a id="trace-971"></a>
<a id="trace-1001"></a>
<a id="trace-1003"></a>
<a id="trace-1031"></a>
<a id="trace-1033"></a>
<a id="trace-1061"></a>
<a id="trace-1063"></a>
<a id="trace-1092"></a>
<a id="trace-1094"></a>
<a id="trace-1120"></a>
<a id="trace-1122"></a>
<a id="trace-1151"></a>
<a id="trace-1153"></a>
<a id="trace-1167"></a>
<a id="trace-1169"></a>
<a id="trace-1260"></a>
<a id="trace-1262"></a>
<a id="trace-1276"></a>
<a id="trace-1278"></a>
<a id="trace-1299"></a>
<a id="trace-1301"></a>
<a id="trace-1320"></a>
<a id="trace-1322"></a>
<a id="trace-1350"></a>
<a id="trace-1352"></a>
<a id="trace-1367"></a>
<a id="trace-1369"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449850561532156, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.863886882600056, 'next_transition': 1714}.
<a id="trace-939"></a>
<a id="trace-973"></a>
<a id="trace-1005"></a>
<a id="trace-1007"></a>
<a id="trace-1096"></a>
<a id="trace-1098"></a>
<a id="trace-1124"></a>
<a id="trace-1126"></a>
<a id="trace-1171"></a>
<a id="trace-1173"></a>
<a id="trace-1264"></a>
<a id="trace-1266"></a>
<a id="trace-1280"></a>
<a id="trace-1282"></a>
<a id="trace-1303"></a>
<a id="trace-1305"></a>
<a id="trace-1354"></a>
<a id="trace-1356"></a>
<a id="trace-1708"></a>
<a id="trace-1710"></a>
<a id="trace-1911"></a>
<a id="trace-1913"></a>
<a id="trace-2038"></a>
<a id="trace-2040"></a>
<a id="trace-2117"></a>
<a id="trace-2119"></a>
<a id="trace-2536"></a>
<a id="trace-2538"></a>
<a id="trace-3038"></a>
<a id="trace-3040"></a>
<a id="trace-3073"></a>
<a id="trace-3075"></a>
<a id="trace-3141"></a>
<a id="trace-3143"></a>
<a id="trace-3572"></a>
<a id="trace-3574"></a>
<a id="trace-3612"></a>
<a id="trace-3614"></a>
<a id="trace-4000"></a>
<a id="trace-4002"></a>
<a id="trace-4047"></a>
<a id="trace-4049"></a>
<a id="trace-4102"></a>
<a id="trace-4104"></a>
<a id="trace-4138"></a>
<a id="trace-4140"></a>
<a id="trace-4157"></a>
<a id="trace-4159"></a>
<a id="trace-4213"></a>
<a id="trace-4215"></a>
<a id="trace-4494"></a>
<a id="trace-4496"></a>
<a id="trace-4595"></a>
<a id="trace-4597"></a>
<a id="trace-4612"></a>
<a id="trace-4614"></a>
<a id="trace-5168"></a>
<a id="trace-5170"></a>
<a id="trace-5199"></a>
<a id="trace-5201"></a>
<a id="trace-5256"></a>
<a id="trace-5258"></a>
<a id="trace-5277"></a>
<a id="trace-5279"></a>
<a id="trace-5294"></a>
<a id="trace-5296"></a>
<a id="trace-5344"></a>
<a id="trace-5346"></a>
<a id="trace-5437"></a>
<a id="trace-5439"></a>
<a id="trace-5453"></a>
<a id="trace-5455"></a>
<a id="trace-5479"></a>
<a id="trace-5481"></a>
<a id="trace-5497"></a>
<a id="trace-5499"></a>
<a id="trace-5520"></a>
<a id="trace-5522"></a>
<a id="trace-5546"></a>
<a id="trace-5548"></a>
<a id="trace-5575"></a>
<a id="trace-5577"></a>
<a id="trace-5606"></a>
<a id="trace-5608"></a>
<a id="trace-5654"></a>
<a id="trace-5656"></a>
<a id="trace-5868"></a>
<a id="trace-5870"></a>
<a id="trace-5934"></a>
<a id="trace-5936"></a>
<a id="trace-5981"></a>
<a id="trace-5983"></a>
<a id="trace-6024"></a>
<a id="trace-6026"></a>
<a id="trace-6095"></a>
<a id="trace-6097"></a>
<a id="trace-6113"></a>
<a id="trace-6115"></a>
<a id="trace-6141"></a>
<a id="trace-6143"></a>
<a id="trace-6250"></a>
<a id="trace-6252"></a>
<a id="trace-6406"></a>
<a id="trace-6408"></a>
<a id="trace-6423"></a>
<a id="trace-6425"></a>
<a id="trace-6457"></a>
<a id="trace-6459"></a>
<a id="trace-6479"></a>
<a id="trace-6481"></a>
<a id="trace-6507"></a>
<a id="trace-6509"></a>
<a id="trace-6677"></a>
<a id="trace-6679"></a>
<a id="trace-6711"></a>
<a id="trace-6713"></a>
<a id="trace-6822"></a>
<a id="trace-6824"></a>
<a id="trace-6840"></a>
<a id="trace-6842"></a>
<a id="trace-6870"></a>
<a id="trace-6872"></a>
<a id="trace-6892"></a>
<a id="trace-6894"></a>
<a id="trace-6907"></a>
<a id="trace-6909"></a>
<a id="trace-6923"></a>
<a id="trace-6925"></a>
<a id="trace-6963"></a>
<a id="trace-6965"></a>
<a id="trace-6982"></a>
<a id="trace-6984"></a>
<a id="trace-7080"></a>
<a id="trace-7082"></a>
<a id="trace-7095"></a>
<a id="trace-7097"></a>
<a id="trace-7109"></a>
<a id="trace-7111"></a>
<a id="trace-7123"></a>
<a id="trace-7125"></a>
<a id="trace-7145"></a>
<a id="trace-7147"></a>
<a id="trace-7163"></a>
<a id="trace-7165"></a>
<a id="trace-7179"></a>
<a id="trace-7181"></a>
<a id="trace-7197"></a>
<a id="trace-7199"></a>
<a id="trace-7394"></a>
<a id="trace-7396"></a>
<a id="trace-7491"></a>
<a id="trace-7493"></a>
<a id="trace-7506"></a>
<a id="trace-7508"></a>
<a id="trace-7569"></a>
<a id="trace-7571"></a>
<a id="trace-7585"></a>
<a id="trace-7587"></a>
<a id="trace-7604"></a>
<a id="trace-7606"></a>
<a id="trace-7644"></a>
<a id="trace-7646"></a>
<a id="trace-7664"></a>
<a id="trace-7666"></a>
<a id="trace-7678"></a>
<a id="trace-7680"></a>
<a id="trace-7780"></a>
<a id="trace-7782"></a>
<a id="trace-7796"></a>
<a id="trace-7798"></a>
<a id="trace-7810"></a>
<a id="trace-7812"></a>
<a id="trace-7847"></a>
<a id="trace-7849"></a>
<a id="trace-7868"></a>
<a id="trace-7870"></a>
<a id="trace-7885"></a>
<a id="trace-7887"></a>
<a id="trace-7907"></a>
<a id="trace-7909"></a>
<a id="trace-8011"></a>
<a id="trace-8013"></a>
<a id="trace-8026"></a>
<a id="trace-8028"></a>
<a id="trace-8048"></a>
<a id="trace-8050"></a>
<a id="trace-8163"></a>
<a id="trace-8165"></a>
<a id="trace-8185"></a>
<a id="trace-8187"></a>
<a id="trace-8205"></a>
<a id="trace-8207"></a>
<a id="trace-8260"></a>
<a id="trace-8262"></a>
<a id="trace-9996"></a>
<a id="trace-9998"></a>
<a id="trace-10027"></a>
<a id="trace-10029"></a>
<a id="trace-10127"></a>
<a id="trace-10129"></a>
<a id="trace-10147"></a>
<a id="trace-10149"></a>
<a id="trace-10180"></a>
<a id="trace-10182"></a>
<a id="trace-10208"></a>
<a id="trace-10210"></a>
<a id="trace-10224"></a>
<a id="trace-10226"></a>
<a id="trace-10237"></a>
<a id="trace-10239"></a>
<a id="trace-10267"></a>
<a id="trace-10269"></a>
<a id="trace-10290"></a>
<a id="trace-10292"></a>
<a id="trace-10303"></a>
<a id="trace-10305"></a>
<a id="trace-10382"></a>
<a id="trace-10384"></a>
<a id="trace-10391"></a>
<a id="trace-10393"></a>
<a id="trace-10423"></a>
<a id="trace-10425"></a>
<a id="trace-10441"></a>
<a id="trace-10443"></a>
<a id="trace-10484"></a>
<a id="trace-10486"></a>
<a id="trace-10498"></a>
<a id="trace-10500"></a>
<a id="trace-10520"></a>
<a id="trace-10522"></a>
<a id="trace-10646"></a>
<a id="trace-10648"></a>
<a id="trace-10673"></a>
<a id="trace-10675"></a>
<a id="trace-10684"></a>
<a id="trace-10686"></a>
<a id="trace-10704"></a>
<a id="trace-10706"></a>
<a id="trace-10721"></a>
<a id="trace-10723"></a>
<a id="trace-10757"></a>
<a id="trace-10759"></a>
<a id="trace-10838"></a>
<a id="trace-10840"></a>
<a id="trace-10850"></a>
<a id="trace-10852"></a>
<a id="trace-10870"></a>
<a id="trace-10872"></a>
<a id="trace-10884"></a>
<a id="trace-10886"></a>
<a id="trace-10902"></a>
<a id="trace-10904"></a>
<a id="trace-10941"></a>
<a id="trace-10943"></a>
<a id="trace-10958"></a>
<a id="trace-10960"></a>
<a id="trace-11332"></a>
<a id="trace-11334"></a>
<a id="trace-11377"></a>
<a id="trace-11379"></a>
<a id="trace-11391"></a>
<a id="trace-11393"></a>
<a id="trace-11421"></a>
<a id="trace-11423"></a>
<a id="trace-11467"></a>
<a id="trace-11469"></a>
<a id="trace-11512"></a>
<a id="trace-11514"></a>
<a id="trace-11552"></a>
<a id="trace-11554"></a>
<a id="trace-11610"></a>
<a id="trace-11612"></a>
<a id="trace-11631"></a>
<a id="trace-11633"></a>
<a id="trace-11765"></a>
<a id="trace-11767"></a>
<a id="trace-11797"></a>
<a id="trace-11799"></a>
<a id="trace-11805"></a>
<a id="trace-11807"></a>
<a id="trace-11842"></a>
<a id="trace-11844"></a>
<a id="trace-11878"></a>
<a id="trace-11880"></a>
<a id="trace-11917"></a>
<a id="trace-11919"></a>
<a id="trace-11946"></a>
<a id="trace-11948"></a>
<a id="trace-11967"></a>
<a id="trace-11969"></a>
<a id="trace-11988"></a>
<a id="trace-11990"></a>
<a id="trace-12078"></a>
<a id="trace-12080"></a>
<a id="trace-12192"></a>
<a id="trace-12194"></a>
<a id="trace-12214"></a>
<a id="trace-12216"></a>
<a id="trace-12229"></a>
<a id="trace-12231"></a>
<a id="trace-12244"></a>
<a id="trace-12246"></a>
<a id="trace-12431"></a>
<a id="trace-12433"></a>
<a id="trace-12460"></a>
<a id="trace-12462"></a>
<a id="trace-12469"></a>
<a id="trace-12471"></a>
<a id="trace-12483"></a>
<a id="trace-12485"></a>
<a id="trace-12500"></a>
<a id="trace-12502"></a>
<a id="trace-12516"></a>
<a id="trace-12518"></a>
<a id="trace-12619"></a>
<a id="trace-12621"></a>
<a id="trace-12636"></a>
<a id="trace-12638"></a>
<a id="trace-12653"></a>
<a id="trace-12655"></a>
<a id="trace-12772"></a>
<a id="trace-12774"></a>
<a id="trace-12787"></a>
<a id="trace-12789"></a>
<a id="trace-12855"></a>
<a id="trace-12857"></a>
<a id="trace-12878"></a>
<a id="trace-12880"></a>
<a id="trace-12887"></a>
<a id="trace-12889"></a>
<a id="trace-12914"></a>
<a id="trace-12916"></a>
<a id="trace-13003"></a>
<a id="trace-13005"></a>
<a id="trace-13147"></a>
<a id="trace-13149"></a>
<a id="trace-13164"></a>
<a id="trace-13166"></a>
<a id="trace-13177"></a>
<a id="trace-13179"></a>
<a id="trace-13204"></a>
<a id="trace-13206"></a>
<a id="trace-13264"></a>
<a id="trace-13266"></a>
<a id="trace-13289"></a>
<a id="trace-13291"></a>
<a id="trace-13303"></a>
<a id="trace-13305"></a>
<a id="trace-13383"></a>
<a id="trace-13385"></a>
<a id="trace-13408"></a>
<a id="trace-13410"></a>
<a id="trace-13531"></a>
<a id="trace-13533"></a>
<a id="trace-13556"></a>
<a id="trace-13558"></a>
<a id="trace-13581"></a>
<a id="trace-13583"></a>
<a id="trace-13607"></a>
<a id="trace-13609"></a>
<a id="trace-13632"></a>
<a id="trace-13634"></a>
<a id="trace-13652"></a>
<a id="trace-13654"></a>
<a id="trace-13721"></a>
<a id="trace-13723"></a>
<a id="trace-13803"></a>
<a id="trace-13805"></a>
<a id="trace-13812"></a>
<a id="trace-13814"></a>
<a id="trace-13838"></a>
<a id="trace-13840"></a>
<a id="trace-13853"></a>
<a id="trace-13855"></a>
<a id="trace-13866"></a>
<a id="trace-13868"></a>
<a id="trace-13987"></a>
<a id="trace-13989"></a>
<a id="trace-14043"></a>
<a id="trace-14045"></a>
<a id="trace-14061"></a>
<a id="trace-14063"></a>
<a id="trace-14150"></a>
<a id="trace-14152"></a>
<a id="trace-14167"></a>
<a id="trace-14169"></a>
<a id="trace-14183"></a>
<a id="trace-14185"></a>
<a id="trace-14250"></a>
<a id="trace-14252"></a>
<a id="trace-14276"></a>
<a id="trace-14278"></a>
<a id="trace-14290"></a>
<a id="trace-14292"></a>
<a id="trace-14309"></a>
<a id="trace-14311"></a>
<a id="trace-14325"></a>
<a id="trace-14327"></a>
<a id="trace-14433"></a>
<a id="trace-14435"></a>
<a id="trace-14524"></a>
<a id="trace-14526"></a>
<a id="trace-14624"></a>
<a id="trace-14626"></a>
<a id="trace-14636"></a>
<a id="trace-14638"></a>
<a id="trace-14739"></a>
<a id="trace-14741"></a>
<a id="trace-14753"></a>
<a id="trace-14755"></a>
<a id="trace-14857"></a>
<a id="trace-14859"></a>
<a id="trace-14981"></a>
<a id="trace-14983"></a>
<a id="trace-15113"></a>
<a id="trace-15115"></a>
<a id="trace-15123"></a>
<a id="trace-15125"></a>
<a id="trace-15153"></a>
<a id="trace-15155"></a>
<a id="trace-15193"></a>
<a id="trace-15195"></a>
<a id="trace-15223"></a>
<a id="trace-15225"></a>
<a id="trace-15297"></a>
<a id="trace-15299"></a>
<a id="trace-15368"></a>
<a id="trace-15370"></a>
<a id="trace-15384"></a>
<a id="trace-15386"></a>
<a id="trace-15400"></a>
<a id="trace-15402"></a>
<a id="trace-15422"></a>
<a id="trace-15424"></a>
<a id="trace-15459"></a>
<a id="trace-15461"></a>
<a id="trace-15478"></a>
<a id="trace-15480"></a>
<a id="trace-15596"></a>
<a id="trace-15598"></a>
<a id="trace-15614"></a>
<a id="trace-15616"></a>
<a id="trace-15704"></a>
<a id="trace-15706"></a>
<a id="trace-15734"></a>
<a id="trace-15736"></a>
<a id="trace-15755"></a>
<a id="trace-15757"></a>
<a id="trace-15775"></a>
<a id="trace-15777"></a>
<a id="trace-15853"></a>
<a id="trace-15855"></a>
<a id="trace-15880"></a>
<a id="trace-15882"></a>
<a id="trace-15920"></a>
<a id="trace-15922"></a>
<a id="trace-15994"></a>
<a id="trace-15996"></a>
<a id="trace-16111"></a>
<a id="trace-16113"></a>
<a id="trace-16137"></a>
<a id="trace-16139"></a>
<a id="trace-16155"></a>
<a id="trace-16157"></a>
<a id="trace-16181"></a>
<a id="trace-16183"></a>
<a id="trace-16192"></a>
<a id="trace-16194"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16238"></a>
<a id="trace-16240"></a>
<a id="trace-16254"></a>
<a id="trace-16256"></a>
<a id="trace-16402"></a>
<a id="trace-16404"></a>
<a id="trace-16419"></a>
<a id="trace-16421"></a>
<a id="trace-16442"></a>
<a id="trace-16444"></a>
<a id="trace-16459"></a>
<a id="trace-16461"></a>
<a id="trace-16583"></a>
<a id="trace-16585"></a>
<a id="trace-16601"></a>
<a id="trace-16603"></a>
<a id="trace-16618"></a>
<a id="trace-16620"></a>
<a id="trace-16635"></a>
<a id="trace-16637"></a>
<a id="trace-16654"></a>
<a id="trace-16656"></a>
<a id="trace-16681"></a>
<a id="trace-16683"></a>
<a id="trace-16760"></a>
<a id="trace-16762"></a>
<a id="trace-16853"></a>
<a id="trace-16855"></a>
<a id="trace-16865"></a>
<a id="trace-16867"></a>
<a id="trace-16897"></a>
<a id="trace-16899"></a>
<a id="trace-16925"></a>
<a id="trace-16927"></a>
<a id="trace-16951"></a>
<a id="trace-16953"></a>
<a id="trace-17068"></a>
<a id="trace-17070"></a>
<a id="trace-17078"></a>
<a id="trace-17080"></a>
<a id="trace-17163"></a>
<a id="trace-17165"></a>
<a id="trace-17178"></a>
<a id="trace-17180"></a>
<a id="trace-17190"></a>
<a id="trace-17192"></a>
<a id="trace-17213"></a>
<a id="trace-17215"></a>
<a id="trace-17236"></a>
<a id="trace-17238"></a>
<a id="trace-17313"></a>
<a id="trace-17315"></a>
<a id="trace-17327"></a>
<a id="trace-17329"></a>
<a id="trace-17344"></a>
<a id="trace-17346"></a>
<a id="trace-17374"></a>
<a id="trace-17376"></a>
<a id="trace-17387"></a>
<a id="trace-17389"></a>
<a id="trace-17481"></a>
<a id="trace-17483"></a>
<a id="trace-17600"></a>
<a id="trace-17602"></a>
<a id="trace-17620"></a>
<a id="trace-17622"></a>
<a id="trace-17643"></a>
<a id="trace-17645"></a>
<a id="trace-17657"></a>
<a id="trace-17659"></a>
<a id="trace-17692"></a>
<a id="trace-17694"></a>
<a id="trace-17780"></a>
<a id="trace-17782"></a>
<a id="trace-17863"></a>
<a id="trace-17865"></a>
<a id="trace-17882"></a>
<a id="trace-17884"></a>
<a id="trace-17908"></a>
<a id="trace-17910"></a>
<a id="trace-18041"></a>
<a id="trace-18043"></a>
<a id="trace-18063"></a>
<a id="trace-18065"></a>
<a id="trace-18076"></a>
<a id="trace-18078"></a>
<a id="trace-18097"></a>
<a id="trace-18099"></a>
<a id="trace-18118"></a>
<a id="trace-18120"></a>
<a id="trace-18138"></a>
<a id="trace-18140"></a>
<a id="trace-18215"></a>
<a id="trace-18217"></a>
<a id="trace-18228"></a>
<a id="trace-18230"></a>
<a id="trace-18312"></a>
<a id="trace-18314"></a>
<a id="trace-18326"></a>
<a id="trace-18328"></a>
<a id="trace-18342"></a>
<a id="trace-18344"></a>
<a id="trace-18360"></a>
<a id="trace-18362"></a>
<a id="trace-18387"></a>
<a id="trace-18389"></a>
<a id="trace-18533"></a>
<a id="trace-18535"></a>
<a id="trace-18547"></a>
<a id="trace-18549"></a>
<a id="trace-18632"></a>
<a id="trace-18634"></a>
<a id="trace-18644"></a>
<a id="trace-18646"></a>
<a id="trace-18664"></a>
<a id="trace-18666"></a>
<a id="trace-18683"></a>
<a id="trace-18685"></a>
<a id="trace-18709"></a>
<a id="trace-18711"></a>
<a id="trace-18731"></a>
<a id="trace-18733"></a>
<a id="trace-18751"></a>
<a id="trace-18753"></a>
<a id="trace-18767"></a>
<a id="trace-18769"></a>
<a id="trace-18792"></a>
<a id="trace-18794"></a>
<a id="trace-18807"></a>
<a id="trace-18809"></a>
<a id="trace-18886"></a>
<a id="trace-18888"></a>
<a id="trace-18906"></a>
<a id="trace-18908"></a>
<a id="trace-18922"></a>
<a id="trace-18924"></a>
<a id="trace-18949"></a>
<a id="trace-18951"></a>
<a id="trace-18959"></a>
<a id="trace-18961"></a>
<a id="trace-18999"></a>
<a id="trace-19001"></a>
<a id="trace-19009"></a>
<a id="trace-19011"></a>
<a id="trace-19091"></a>
<a id="trace-19093"></a>
<a id="trace-19114"></a>
<a id="trace-19116"></a>
<a id="trace-19128"></a>
<a id="trace-19130"></a>
<a id="trace-19147"></a>
<a id="trace-19149"></a>
<a id="trace-19173"></a>
<a id="trace-19175"></a>
<a id="trace-19184"></a>
<a id="trace-19186"></a>
<a id="trace-19197"></a>
<a id="trace-19199"></a>
<a id="trace-19206"></a>
<a id="trace-19208"></a>
<a id="trace-19226"></a>
<a id="trace-19228"></a>
<a id="trace-19312"></a>
<a id="trace-19314"></a>
<a id="trace-19321"></a>
<a id="trace-19323"></a>
<a id="trace-19337"></a>
<a id="trace-19339"></a>
<a id="trace-19353"></a>
<a id="trace-19355"></a>
<a id="trace-19410"></a>
<a id="trace-19412"></a>
<a id="trace-19425"></a>
<a id="trace-19427"></a>
<a id="trace-19446"></a>
<a id="trace-19448"></a>
<a id="trace-19456"></a>
<a id="trace-19458"></a>
<a id="trace-19535"></a>
<a id="trace-19537"></a>
<a id="trace-19544"></a>
<a id="trace-19546"></a>
<a id="trace-19558"></a>
<a id="trace-19560"></a>
<a id="trace-19566"></a>
<a id="trace-19568"></a>
<a id="trace-19583"></a>
<a id="trace-19585"></a>
<a id="trace-19616"></a>
<a id="trace-19618"></a>
<a id="trace-19629"></a>
<a id="trace-19631"></a>
<a id="trace-19656"></a>
<a id="trace-19658"></a>
<a id="trace-19666"></a>
<a id="trace-19668"></a>
<a id="trace-19746"></a>
<a id="trace-19748"></a>
<a id="trace-19779"></a>
<a id="trace-19781"></a>
<a id="trace-19796"></a>
<a id="trace-19798"></a>
<a id="trace-19812"></a>
<a id="trace-19814"></a>
<a id="trace-19835"></a>
<a id="trace-19837"></a>
<a id="trace-19848"></a>
<a id="trace-19850"></a>
<a id="trace-19860"></a>
<a id="trace-19862"></a>
<a id="trace-19874"></a>
<a id="trace-19876"></a>
<a id="trace-19950"></a>
<a id="trace-19952"></a>
<a id="trace-19990"></a>
<a id="trace-19992"></a>
<a id="trace-20031"></a>
<a id="trace-20033"></a>
<a id="trace-20041"></a>
<a id="trace-20043"></a>
<a id="trace-20062"></a>
<a id="trace-20064"></a>
<a id="trace-20097"></a>
<a id="trace-20099"></a>
<a id="trace-20167"></a>
<a id="trace-20169"></a>
<a id="trace-20180"></a>
<a id="trace-20182"></a>
<a id="trace-20222"></a>
<a id="trace-20224"></a>
<a id="trace-20236"></a>
<a id="trace-20238"></a>
<a id="trace-20266"></a>
<a id="trace-20268"></a>
<a id="trace-20288"></a>
<a id="trace-20290"></a>
<a id="trace-20302"></a>
<a id="trace-20304"></a>
<a id="trace-20311"></a>
<a id="trace-20313"></a>
<a id="trace-20397"></a>
<a id="trace-20399"></a>
<a id="trace-20411"></a>
<a id="trace-20413"></a>
<a id="trace-20424"></a>
<a id="trace-20426"></a>
<a id="trace-20441"></a>
<a id="trace-20443"></a>
<a id="trace-20457"></a>
<a id="trace-20459"></a>
<a id="trace-20472"></a>
<a id="trace-20474"></a>
<a id="trace-20506"></a>
<a id="trace-20508"></a>
<a id="trace-20521"></a>
<a id="trace-20523"></a>
<a id="trace-20605"></a>
<a id="trace-20607"></a>
<a id="trace-20616"></a>
<a id="trace-20618"></a>
<a id="trace-20632"></a>
<a id="trace-20634"></a>
<a id="trace-20651"></a>
<a id="trace-20653"></a>
<a id="trace-20664"></a>
<a id="trace-20666"></a>
<a id="trace-20679"></a>
<a id="trace-20681"></a>
<a id="trace-20696"></a>
<a id="trace-20698"></a>
<a id="trace-20705"></a>
<a id="trace-20707"></a>
<a id="trace-20720"></a>
<a id="trace-20722"></a>
<a id="trace-20809"></a>
<a id="trace-20811"></a>
<a id="trace-20828"></a>
<a id="trace-20830"></a>
<a id="trace-20849"></a>
<a id="trace-20851"></a>
<a id="trace-20859"></a>
<a id="trace-20861"></a>
<a id="trace-20909"></a>
<a id="trace-20911"></a>
<a id="trace-20922"></a>
<a id="trace-20924"></a>
<a id="trace-20939"></a>
<a id="trace-20941"></a>
<a id="trace-20953"></a>
<a id="trace-20955"></a>
<a id="trace-21026"></a>
<a id="trace-21028"></a>
<a id="trace-21037"></a>
<a id="trace-21039"></a>
<a id="trace-21060"></a>
<a id="trace-21062"></a>
<a id="trace-21068"></a>
<a id="trace-21070"></a>
<a id="trace-21090"></a>
<a id="trace-21092"></a>
<a id="trace-21100"></a>
<a id="trace-21102"></a>
<a id="trace-21122"></a>
<a id="trace-21124"></a>
<a id="trace-21149"></a>
<a id="trace-21151"></a>
<a id="trace-21177"></a>
<a id="trace-21179"></a>
<a id="trace-21251"></a>
<a id="trace-21253"></a>
<a id="trace-21260"></a>
<a id="trace-21262"></a>
<a id="trace-21283"></a>
<a id="trace-21285"></a>
<a id="trace-21305"></a>
<a id="trace-21307"></a>
<a id="trace-21323"></a>
<a id="trace-21325"></a>
<a id="trace-21349"></a>
<a id="trace-21351"></a>
<a id="trace-21367"></a>
<a id="trace-21369"></a>
<a id="trace-21462"></a>
<a id="trace-21464"></a>
<a id="trace-21475"></a>
<a id="trace-21477"></a>
<a id="trace-21497"></a>
<a id="trace-21499"></a>
<a id="trace-21509"></a>
<a id="trace-21511"></a>
<a id="trace-21528"></a>
<a id="trace-21530"></a>
<a id="trace-21563"></a>
<a id="trace-21565"></a>
<a id="trace-21586"></a>
<a id="trace-21588"></a>
<a id="trace-21666"></a>
<a id="trace-21668"></a>
<a id="trace-21683"></a>
<a id="trace-21685"></a>
<a id="trace-21724"></a>
<a id="trace-21726"></a>
<a id="trace-21751"></a>
<a id="trace-21753"></a>
<a id="trace-21770"></a>
<a id="trace-21772"></a>
<a id="trace-21779"></a>
<a id="trace-21781"></a>
<a id="trace-21808"></a>
<a id="trace-21810"></a>
<a id="trace-21885"></a>
<a id="trace-21887"></a>
<a id="trace-21924"></a>
<a id="trace-21926"></a>
<a id="trace-21941"></a>
<a id="trace-21943"></a>
<a id="trace-21993"></a>
<a id="trace-21995"></a>
<a id="trace-22011"></a>
<a id="trace-22013"></a>
<a id="trace-22021"></a>
<a id="trace-22023"></a>
<a id="trace-22103"></a>
<a id="trace-22105"></a>
<a id="trace-22114"></a>
<a id="trace-22116"></a>
<a id="trace-22134"></a>
<a id="trace-22136"></a>
<a id="trace-22151"></a>
<a id="trace-22153"></a>
<a id="trace-22186"></a>
<a id="trace-22188"></a>
<a id="trace-22225"></a>
<a id="trace-22227"></a>
<a id="trace-22310"></a>
<a id="trace-22312"></a>
<a id="trace-22321"></a>
<a id="trace-22323"></a>
<a id="trace-22349"></a>
<a id="trace-22351"></a>
<a id="trace-22374"></a>
<a id="trace-22376"></a>
<a id="trace-22386"></a>
<a id="trace-22388"></a>
<a id="trace-22412"></a>
<a id="trace-22414"></a>
<a id="trace-22437"></a>
<a id="trace-22439"></a>
<a id="trace-22525"></a>
<a id="trace-22527"></a>
<a id="trace-22551"></a>
<a id="trace-22553"></a>
<a id="trace-22567"></a>
<a id="trace-22569"></a>
<a id="trace-22589"></a>
<a id="trace-22591"></a>
<a id="trace-22612"></a>
<a id="trace-22614"></a>
<a id="trace-22643"></a>
<a id="trace-22645"></a>
<a id="trace-22657"></a>
<a id="trace-22659"></a>
<a id="trace-22731"></a>
<a id="trace-22733"></a>
<a id="trace-22760"></a>
<a id="trace-22762"></a>
<a id="trace-22787"></a>
<a id="trace-22789"></a>
<a id="trace-22804"></a>
<a id="trace-22806"></a>
<a id="trace-22829"></a>
<a id="trace-22831"></a>
<a id="trace-22843"></a>
<a id="trace-22845"></a>
<a id="trace-22864"></a>
<a id="trace-22866"></a>
<a id="trace-22872"></a>
<a id="trace-22874"></a>
<a id="trace-22946"></a>
<a id="trace-22948"></a>
<a id="trace-22961"></a>
<a id="trace-22963"></a>
<a id="trace-22977"></a>
<a id="trace-22979"></a>
<a id="trace-22991"></a>
<a id="trace-22993"></a>
<a id="trace-23008"></a>
<a id="trace-23010"></a>
<a id="trace-23022"></a>
<a id="trace-23024"></a>
<a id="trace-23042"></a>
<a id="trace-23044"></a>
<a id="trace-23053"></a>
<a id="trace-23055"></a>
<a id="trace-23080"></a>
<a id="trace-23082"></a>
<a id="trace-23094"></a>
<a id="trace-23096"></a>
<a id="trace-23167"></a>
<a id="trace-23169"></a>
<a id="trace-23192"></a>
<a id="trace-23194"></a>
<a id="trace-23209"></a>
<a id="trace-23211"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
<a id="trace-23240"></a>
<a id="trace-23242"></a>
<a id="trace-23261"></a>
<a id="trace-23263"></a>
<a id="trace-23272"></a>
<a id="trace-23274"></a>
<a id="trace-23288"></a>
<a id="trace-23290"></a>
<a id="trace-23377"></a>
<a id="trace-23379"></a>
<a id="trace-23439"></a>
<a id="trace-23441"></a>
<a id="trace-23454"></a>
<a id="trace-23456"></a>
<a id="trace-23467"></a>
<a id="trace-23469"></a>
<a id="trace-23497"></a>
<a id="trace-23499"></a>
<a id="trace-23509"></a>
<a id="trace-23511"></a>
<a id="trace-23591"></a>
<a id="trace-23593"></a>
<a id="trace-23623"></a>
<a id="trace-23625"></a>
<a id="trace-23633"></a>
<a id="trace-23635"></a>
<a id="trace-23655"></a>
<a id="trace-23657"></a>
<a id="trace-23665"></a>
<a id="trace-23667"></a>
<a id="trace-23714"></a>
<a id="trace-23716"></a>
<a id="trace-23727"></a>
<a id="trace-23729"></a>
<a id="trace-23812"></a>
<a id="trace-23814"></a>
<a id="trace-23827"></a>
<a id="trace-23829"></a>
<a id="trace-23837"></a>
<a id="trace-23839"></a>
<a id="trace-23878"></a>
<a id="trace-23880"></a>
<a id="trace-23900"></a>
<a id="trace-23902"></a>
<a id="trace-23909"></a>
<a id="trace-23911"></a>
<a id="trace-23932"></a>
<a id="trace-23934"></a>
<a id="trace-23950"></a>
<a id="trace-23952"></a>
<a id="trace-24020"></a>
<a id="trace-24022"></a>
<a id="trace-24033"></a>
<a id="trace-24035"></a>
<a id="trace-24050"></a>
<a id="trace-24052"></a>
<a id="trace-24060"></a>
<a id="trace-24062"></a>
<a id="trace-24080"></a>
<a id="trace-24082"></a>
<a id="trace-24112"></a>
<a id="trace-24114"></a>
<a id="trace-24152"></a>
<a id="trace-24154"></a>
<a id="trace-24228"></a>
<a id="trace-24230"></a>
<a id="trace-24250"></a>
<a id="trace-24252"></a>
<a id="trace-24272"></a>
<a id="trace-24274"></a>
<a id="trace-24284"></a>
<a id="trace-24286"></a>
<a id="trace-24309"></a>
<a id="trace-24311"></a>
<a id="trace-24323"></a>
<a id="trace-24325"></a>
<a id="trace-24332"></a>
<a id="trace-24334"></a>
<a id="trace-24365"></a>
<a id="trace-24367"></a>
<a id="trace-24453"></a>
<a id="trace-24455"></a>
<a id="trace-24508"></a>
<a id="trace-24510"></a>
<a id="trace-24528"></a>
<a id="trace-24530"></a>
<a id="trace-24543"></a>
<a id="trace-24545"></a>
<a id="trace-24554"></a>
<a id="trace-24556"></a>
<a id="trace-24578"></a>
<a id="trace-24580"></a>
<a id="trace-24657"></a>
<a id="trace-24659"></a>
<a id="trace-24666"></a>
<a id="trace-24668"></a>
<a id="trace-24689"></a>
<a id="trace-24691"></a>
<a id="trace-24711"></a>
<a id="trace-24713"></a>
<a id="trace-24732"></a>
<a id="trace-24734"></a>
<a id="trace-24753"></a>
<a id="trace-24755"></a>
<a id="trace-24775"></a>
<a id="trace-24777"></a>
<a id="trace-24797"></a>
<a id="trace-24799"></a>
<a id="trace-24875"></a>
<a id="trace-24877"></a>
<a id="trace-24902"></a>
<a id="trace-24904"></a>
<a id="trace-24912"></a>
<a id="trace-24914"></a>
<a id="trace-24953"></a>
<a id="trace-24955"></a>
<a id="trace-24971"></a>
<a id="trace-24973"></a>
<a id="trace-24988"></a>
<a id="trace-24990"></a>
<a id="trace-25088"></a>
<a id="trace-25090"></a>
<a id="trace-25101"></a>
<a id="trace-25103"></a>
<a id="trace-25125"></a>
<a id="trace-25127"></a>
<a id="trace-25133"></a>
<a id="trace-25135"></a>
<a id="trace-25154"></a>
<a id="trace-25156"></a>
<a id="trace-25175"></a>
<a id="trace-25177"></a>
<a id="trace-25184"></a>
<a id="trace-25186"></a>
<a id="trace-25200"></a>
<a id="trace-25202"></a>
<a id="trace-25215"></a>
<a id="trace-25217"></a>
<a id="trace-25291"></a>
<a id="trace-25293"></a>
<a id="trace-25328"></a>
<a id="trace-25330"></a>
<a id="trace-25339"></a>
<a id="trace-25341"></a>
<a id="trace-25381"></a>
<a id="trace-25383"></a>
<a id="trace-25400"></a>
<a id="trace-25402"></a>
<a id="trace-25427"></a>
<a id="trace-25429"></a>
<a id="trace-25435"></a>
<a id="trace-25437"></a>
<a id="trace-25509"></a>
<a id="trace-25511"></a>
<a id="trace-25522"></a>
<a id="trace-25524"></a>
<a id="trace-25534"></a>
<a id="trace-25536"></a>
<a id="trace-25547"></a>
<a id="trace-25549"></a>
<a id="trace-25568"></a>
<a id="trace-25570"></a>
<a id="trace-25583"></a>
<a id="trace-25585"></a>
<a id="trace-25603"></a>
<a id="trace-25605"></a>
<a id="trace-25652"></a>
<a id="trace-25654"></a>
<a id="trace-25732"></a>
<a id="trace-25734"></a>
<a id="trace-25741"></a>
<a id="trace-25743"></a>
<a id="trace-25757"></a>
<a id="trace-25759"></a>
<a id="trace-25811"></a>
<a id="trace-25813"></a>
<a id="trace-25822"></a>
<a id="trace-25824"></a>
<a id="trace-25840"></a>
<a id="trace-25842"></a>
<a id="trace-25852"></a>
<a id="trace-25854"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 939): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624999958994736, 'next_transition': 973}.
<a id="trace-1375"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1375): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1181. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725012009934033, 'next_transition': 1648}.
<a id="trace-1376"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1376): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1181. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725012009934033, 'next_transition': 1648}.
<a id="trace-1648"></a>
<a id="trace-1650"></a>
<a id="trace-1668"></a>
<a id="trace-1670"></a>
<a id="trace-1704"></a>
<a id="trace-1706"></a>
<a id="trace-1907"></a>
<a id="trace-1909"></a>
<a id="trace-1996"></a>
<a id="trace-1998"></a>
<a id="trace-2034"></a>
<a id="trace-2036"></a>
<a id="trace-2071"></a>
<a id="trace-2073"></a>
<a id="trace-2097"></a>
<a id="trace-2099"></a>
<a id="trace-2113"></a>
<a id="trace-2115"></a>
<a id="trace-2532"></a>
<a id="trace-2534"></a>
<a id="trace-3034"></a>
<a id="trace-3036"></a>
<a id="trace-3069"></a>
<a id="trace-3071"></a>
<a id="trace-3109"></a>
<a id="trace-3111"></a>
<a id="trace-3137"></a>
<a id="trace-3139"></a>
- 13.20s–19.75s (×28), actor 5, squad 0 (trace 1648): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1186. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134452017076428, 'next_transition': 1668}.
<a id="trace-1714"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1714): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1189. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.65124696957072, 'next_transition': 2129}.
<a id="trace-1715"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1715): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1189. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.65124696957072, 'next_transition': 2129}.
<a id="trace-2129"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2129): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1933. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149938491462978, 'next_transition': 2331}.
<a id="trace-2130"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2130): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1933. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149938491462978, 'next_transition': 2331}.
<a id="trace-2131"></a>
<a id="trace-2331"></a>
<a id="trace-2539"></a>
<a id="trace-2767"></a>
- 17.55s–17.80s (×4), actor 8, squad 1 (trace 2131): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1933. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149938491462978, 'next_transition': 2331}.
<a id="trace-3144"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 3144): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1925. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362470352194921, 'next_transition': 3568}.
<a id="trace-3145"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 3145): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1925. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362470352194921, 'next_transition': 3568}.
<a id="trace-3146"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 3146): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1925. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362470352194921, 'next_transition': 3568}.
<a id="trace-3568"></a>
<a id="trace-3570"></a>
<a id="trace-3608"></a>
<a id="trace-3610"></a>
- 20.25s–20.75s (×4), actor 5, squad 0 (trace 3568): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3489. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749727402898897, 'next_transition': 3608}.
<a id="trace-299"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 299): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-300"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (events line 300): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3629"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 3629): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667748 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 3629. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362465887083146, 'next_transition': 3651}.
<a id="trace-3630"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 3630): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667748 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 3630. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362465887083146, 'next_transition': 3651}.
<a id="trace-3631"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 3631): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667748 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 3631. Next observer evidence: None.
<a id="trace-3632"></a>
- 21.05s–21.05s (×1), actor 5, squad 1 (trace 3632): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.667748 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 3632. Next observer evidence: None.
<a id="trace-3641"></a>
- 21.15s–21.15s (×1), actor 8, squad 1 (trace 3641): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3492. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.868991140506215, 'next_transition': 4111}.
<a id="trace-3651"></a>
<a id="trace-3653"></a>
- 21.25s–21.25s (×2), actor 5, squad 0 (trace 3651): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 3632. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5353662875082227, 'next_transition': 3995}.
<a id="trace-3657"></a>
- 21.25s–21.25s (×1), actor 0, squad 0 (trace 3657): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3484. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5353662875082227, 'next_transition': 3995}.
<a id="trace-3995"></a>
<a id="trace-3997"></a>
<a id="trace-4042"></a>
<a id="trace-4044"></a>
<a id="trace-4097"></a>
<a id="trace-4099"></a>
<a id="trace-4132"></a>
<a id="trace-4134"></a>
<a id="trace-4151"></a>
<a id="trace-4153"></a>
<a id="trace-4207"></a>
<a id="trace-4209"></a>
<a id="trace-4488"></a>
<a id="trace-4490"></a>
- 21.75s–24.75s (×14), actor 5, squad 0 (trace 3995): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 3632. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3670604262109656, 'next_transition': 4042}.
<a id="trace-4111"></a>
- 22.80s–22.80s (×1), actor 8, squad 1 (trace 4111): received platoon directive; retain contact cover stage. Knowledge: actor memory at 20.00s, trace 3492. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149987341244413, 'next_transition': 4119}.
<a id="trace-4119"></a>
- 23.00s–23.00s (×1), actor 8, squad 1 (trace 4119): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 3492. Next observer evidence: {'until': 24.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8719739244444615, 'next_transition': 4222}.
<a id="trace-4222"></a>
- 24.40s–24.40s (×1), actor 8, squad 1 (trace 4222): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3492. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.5837970759182434, 'next_transition': 391}.
<a id="trace-4503"></a>
- 24.95s–24.95s (×1), actor 0, squad 0 (trace 4503): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3484. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4371368767711505, 'next_transition': 4589}.
<a id="trace-4589"></a>
<a id="trace-4591"></a>
<a id="trace-4606"></a>
<a id="trace-4608"></a>
<a id="trace-4640"></a>
<a id="trace-4642"></a>
- 25.25s–26.25s (×6), actor 5, squad 0 (trace 4589): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4510. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22971076860915574, 'next_transition': 4606}.
<a id="trace-391"></a>
- 26.05s–26.05s (×1), actor 5, squad 1 (events line 391): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4622"></a>
- 26.05s–26.05s (×1), actor 5, squad 1 (trace 4622): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676329 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 4622. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.5452159452546983, 'next_transition': 5202}.
<a id="trace-4623"></a>
- 26.05s–26.05s (×1), actor 5, squad 1 (trace 4623): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.676329 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 26.05s, trace 4623. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.5452159452546983, 'next_transition': 5202}.
<a id="trace-4664"></a>
- 26.70s–26.70s (×1), actor 0, squad 0 (trace 4664): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 4505. Next observer evidence: None.
<a id="trace-4665"></a>
- 26.70s–26.70s (×1), actor 0, squad 0 (trace 4665): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 4505. Next observer evidence: None.
<a id="trace-5133"></a>
<a id="trace-5135"></a>
<a id="trace-5162"></a>
<a id="trace-5164"></a>
<a id="trace-5193"></a>
<a id="trace-5195"></a>
<a id="trace-5250"></a>
<a id="trace-5252"></a>
<a id="trace-5271"></a>
<a id="trace-5273"></a>
<a id="trace-5290"></a>
<a id="trace-5292"></a>
<a id="trace-5340"></a>
<a id="trace-5342"></a>
<a id="trace-5433"></a>
<a id="trace-5435"></a>
<a id="trace-5449"></a>
<a id="trace-5451"></a>
<a id="trace-5474"></a>
<a id="trace-5476"></a>
<a id="trace-5492"></a>
<a id="trace-5494"></a>
<a id="trace-5515"></a>
<a id="trace-5517"></a>
<a id="trace-5541"></a>
<a id="trace-5543"></a>
<a id="trace-5569"></a>
<a id="trace-5571"></a>
<a id="trace-5600"></a>
<a id="trace-5602"></a>
<a id="trace-5648"></a>
<a id="trace-5650"></a>
<a id="trace-5694"></a>
<a id="trace-5696"></a>
<a id="trace-5805"></a>
<a id="trace-5807"></a>
<a id="trace-5862"></a>
<a id="trace-5864"></a>
<a id="trace-5928"></a>
<a id="trace-5930"></a>
<a id="trace-5975"></a>
<a id="trace-5977"></a>
<a id="trace-6018"></a>
<a id="trace-6020"></a>
<a id="trace-6056"></a>
<a id="trace-6058"></a>
<a id="trace-6089"></a>
<a id="trace-6091"></a>
<a id="trace-6107"></a>
<a id="trace-6109"></a>
<a id="trace-6135"></a>
<a id="trace-6137"></a>
<a id="trace-6161"></a>
<a id="trace-6163"></a>
<a id="trace-6244"></a>
<a id="trace-6246"></a>
<a id="trace-6273"></a>
<a id="trace-6275"></a>
- 26.75s–40.75s (×58), actor 5, squad 0 (trace 5133): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.05s, trace 4623. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15729433003707566, 'next_transition': 5162}.
<a id="trace-5202"></a>
- 27.75s–27.75s (×1), actor 8, squad 1 (trace 5202): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4513. Next observer evidence: {'until': 27.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5207}.
<a id="trace-5207"></a>
- 27.80s–27.80s (×1), actor 8, squad 1 (trace 5207): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 4513. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5262}.
<a id="trace-5262"></a>
- 28.45s–28.45s (×1), actor 8, squad 1 (trace 5262): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 4513. Next observer evidence: {'until': 31, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.223042467933055, 'next_transition': 544}.
<a id="trace-544"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 544): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5464"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 5464): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.544527 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 5464. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.9624352824154663, 'next_transition': 5580}.
<a id="trace-5465"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 5465): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.544527 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 5465. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.9624352824154663, 'next_transition': 5580}.
<a id="trace-5580"></a>
- 33.30s–33.30s (×1), actor 8, squad 1 (trace 5580): received platoon directive; retain held slots. Knowledge: actor memory at 30.00s, trace 5362. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0224136997808926, 'next_transition': 775}.
<a id="trace-775"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (events line 775): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6001"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 6001): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548550 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 6001. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9333384160385986, 'next_transition': 6116}.
<a id="trace-6002"></a>
- 37.10s–37.10s (×1), actor 5, squad 1 (trace 6002): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548550 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 37.10s, trace 6002. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9333384160385986, 'next_transition': 6116}.
<a id="trace-6116"></a>
- 38.75s–38.75s (×1), actor 8, squad 1 (trace 6116): received platoon directive; retain held slots. Knowledge: actor memory at 35.00s, trace 5725. Next observer evidence: {'until': 39.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7358146690243172, 'next_transition': 6146}.
<a id="trace-6146"></a>
- 39.40s–39.40s (×1), actor 8, squad 1 (trace 6146): NeedSupport. Knowledge: actor memory at 35.00s, trace 5725. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.956715839192317, 'next_transition': 919}.
<a id="trace-6286"></a>
- 40.95s–40.95s (×1), actor 0, squad 0 (trace 6286): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 6169. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399877352385338, 'next_transition': 6402}.
<a id="trace-6287"></a>
- 40.95s–40.95s (×1), actor 0, squad 0 (trace 6287): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 6169. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399877352385338, 'next_transition': 6402}.
<a id="trace-6402"></a>
<a id="trace-6404"></a>
<a id="trace-6419"></a>
<a id="trace-6421"></a>
- 41.25s–41.75s (×4), actor 5, squad 0 (trace 6402): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6173. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4950009358753627, 'next_transition': 6419}.
<a id="trace-6430"></a>
- 42.05s–42.05s (×1), actor 5, squad 0 (trace 6430): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 42.05s, trace 6430. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30518575263663666, 'next_transition': 6453}.
<a id="trace-919"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 919): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6435"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 6435): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477552 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 6435. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0206383457914954, 'next_transition': 6522}.
<a id="trace-6436"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 6436): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477552 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 6436. Next observer evidence: {'until': 43.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0206383457914954, 'next_transition': 6522}.
<a id="trace-6453"></a>
<a id="trace-6455"></a>
<a id="trace-6475"></a>
<a id="trace-6477"></a>
- 42.25s–42.75s (×4), actor 5, squad 0 (trace 6453): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 6436. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.690991910414062, 'next_transition': 6475}.
<a id="trace-6485"></a>
- 42.95s–42.95s (×1), actor 0, squad 0 (trace 6485): NeedSupport. Knowledge: actor memory at 40.00s, trace 6169. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7083331752191973, 'next_transition': 6503}.
<a id="trace-6503"></a>
<a id="trace-6505"></a>
<a id="trace-6673"></a>
<a id="trace-6675"></a>
<a id="trace-6707"></a>
<a id="trace-6709"></a>
<a id="trace-6735"></a>
<a id="trace-6737"></a>
<a id="trace-6818"></a>
<a id="trace-6820"></a>
<a id="trace-6836"></a>
<a id="trace-6838"></a>
<a id="trace-6866"></a>
<a id="trace-6868"></a>
<a id="trace-6888"></a>
<a id="trace-6890"></a>
<a id="trace-6903"></a>
<a id="trace-6905"></a>
<a id="trace-6919"></a>
<a id="trace-6921"></a>
<a id="trace-6939"></a>
<a id="trace-6941"></a>
<a id="trace-6959"></a>
<a id="trace-6961"></a>
<a id="trace-6978"></a>
<a id="trace-6980"></a>
<a id="trace-6992"></a>
<a id="trace-6994"></a>
<a id="trace-7076"></a>
<a id="trace-7078"></a>
<a id="trace-7091"></a>
<a id="trace-7093"></a>
<a id="trace-7105"></a>
<a id="trace-7107"></a>
<a id="trace-7119"></a>
<a id="trace-7121"></a>
<a id="trace-7141"></a>
<a id="trace-7143"></a>
<a id="trace-7159"></a>
<a id="trace-7161"></a>
<a id="trace-7175"></a>
<a id="trace-7177"></a>
<a id="trace-7193"></a>
<a id="trace-7195"></a>
- 43.25s–53.75s (×44), actor 5, squad 0 (trace 6503): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 6436. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7132342651005459, 'next_transition': 6673}.
<a id="trace-6522"></a>
- 43.55s–43.55s (×1), actor 8, squad 1 (trace 6522): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 6176. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.1407569362489105, 'next_transition': None}.
<a id="trace-6523"></a>
- 43.55s–43.55s (×1), actor 8, squad 1 (trace 6523): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 6176. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.1407569362489105, 'next_transition': None}.
<a id="trace-7200"></a>
- 53.75s–53.75s (×1), actor 0, squad 0 (trace 7200): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 6999. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2700053837860817, 'next_transition': 7370}.
<a id="trace-7201"></a>
- 53.75s–53.75s (×1), actor 0, squad 0 (trace 7201): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 6999. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2700053837860817, 'next_transition': 7370}.
<a id="trace-7370"></a>
<a id="trace-7372"></a>
<a id="trace-7390"></a>
<a id="trace-7392"></a>
<a id="trace-7487"></a>
<a id="trace-7489"></a>
<a id="trace-7502"></a>
<a id="trace-7504"></a>
<a id="trace-7531"></a>
<a id="trace-7533"></a>
<a id="trace-7565"></a>
<a id="trace-7567"></a>
<a id="trace-7581"></a>
<a id="trace-7583"></a>
<a id="trace-7600"></a>
<a id="trace-7602"></a>
<a id="trace-7627"></a>
<a id="trace-7629"></a>
<a id="trace-7640"></a>
<a id="trace-7642"></a>
<a id="trace-7660"></a>
<a id="trace-7662"></a>
<a id="trace-7674"></a>
<a id="trace-7676"></a>
<a id="trace-7758"></a>
<a id="trace-7760"></a>
<a id="trace-7776"></a>
<a id="trace-7778"></a>
<a id="trace-7792"></a>
<a id="trace-7794"></a>
<a id="trace-7806"></a>
<a id="trace-7808"></a>
<a id="trace-7830"></a>
<a id="trace-7832"></a>
<a id="trace-7843"></a>
<a id="trace-7845"></a>
<a id="trace-7864"></a>
<a id="trace-7866"></a>
<a id="trace-7881"></a>
<a id="trace-7883"></a>
<a id="trace-7903"></a>
<a id="trace-7905"></a>
<a id="trace-7923"></a>
<a id="trace-7925"></a>
<a id="trace-8007"></a>
<a id="trace-8009"></a>
<a id="trace-8022"></a>
<a id="trace-8024"></a>
<a id="trace-8046"></a>
- 54.25s–66.25s (×49), actor 5, squad 0 (trace 7370): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7003. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.044998505666798215, 'next_transition': 7390}.
<a id="trace-8051"></a>
- 66.35s–66.35s (×1), actor 0, squad 0 (trace 8051): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 7937. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3599838556980866, 'next_transition': 8161}.
<a id="trace-8052"></a>
- 66.35s–66.35s (×1), actor 0, squad 0 (trace 8052): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 7937. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3599838556980866, 'next_transition': 8161}.
<a id="trace-8161"></a>
<a id="trace-8183"></a>
<a id="trace-8203"></a>
<a id="trace-8229"></a>
- 66.75s–68.25s (×4), actor 5, squad 0 (trace 8161): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 7941. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5895548268454284, 'next_transition': 8183}.
<a id="trace-8244"></a>
- 68.60s–68.60s (×1), actor 0, squad 0 (trace 8244): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 65.00s, trace 7937. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999973352934687, 'next_transition': 8258}.
<a id="trace-8258"></a>
- 68.75s–68.75s (×1), actor 5, squad 0 (trace 8258): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 7941. Next observer evidence: {'until': 68.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26999579876313984, 'next_transition': 8273}.
<a id="trace-8273"></a>
- 68.85s–68.85s (×1), actor 0, squad 0 (trace 8273): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 7937. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.495037002414278, 'next_transition': 9994}.
<a id="trace-8274"></a>
- 68.85s–68.85s (×1), actor 0, squad 0 (trace 8274): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 65.00s, trace 7937. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.495037002414278, 'next_transition': 9994}.
<a id="trace-9994"></a>
<a id="trace-10025"></a>
<a id="trace-10125"></a>
<a id="trace-10145"></a>
<a id="trace-10178"></a>
<a id="trace-10206"></a>
<a id="trace-10222"></a>
<a id="trace-10235"></a>
<a id="trace-10257"></a>
<a id="trace-10265"></a>
<a id="trace-10288"></a>
<a id="trace-10301"></a>
<a id="trace-10380"></a>
<a id="trace-10389"></a>
<a id="trace-10411"></a>
<a id="trace-10421"></a>
<a id="trace-10439"></a>
<a id="trace-10457"></a>
<a id="trace-10482"></a>
<a id="trace-10496"></a>
<a id="trace-10511"></a>
<a id="trace-10518"></a>
<a id="trace-10605"></a>
<a id="trace-10614"></a>
<a id="trace-10631"></a>
- 69.25s–81.25s (×25), actor 5, squad 0 (trace 9994): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 7941. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3599984837434545, 'next_transition': 10025}.
<a id="trace-10636"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (trace 10636): renew committed intent (75 s lifetime). Knowledge: actor memory at 81.35s, trace 10636. Next observer evidence: None.
<a id="trace-1284"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (events line 1284): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7199905372915075, 'next_transition': 10644}.
<a id="trace-10644"></a>
<a id="trace-10671"></a>
<a id="trace-10682"></a>
<a id="trace-10702"></a>
<a id="trace-10719"></a>
<a id="trace-10742"></a>
<a id="trace-10755"></a>
<a id="trace-10836"></a>
<a id="trace-10848"></a>
<a id="trace-10868"></a>
<a id="trace-10882"></a>
- 81.75s–86.75s (×11), actor 5, squad 0 (trace 10644): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.35s, trace 10636. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0349981182887522, 'next_transition': 10671}.
<a id="trace-1375"></a>
- 87.05s–87.05s (×1), actor 5, squad 0 (events line 1375): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10889"></a>
- 87.05s–87.05s (×1), actor 5, squad 0 (trace 10889): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.432387 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.05s, trace 10889. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.053601212311145265, 'next_transition': 10900}.
<a id="trace-10890"></a>
- 87.05s–87.05s (×1), actor 5, squad 0 (trace 10890): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.432387 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.05s, trace 10890. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.053601212311145265, 'next_transition': 10900}.
<a id="trace-10900"></a>
<a id="trace-10910"></a>
<a id="trace-10930"></a>
<a id="trace-10939"></a>
<a id="trace-10956"></a>
- 87.25s–89.25s (×5), actor 5, squad 0 (trace 10900): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.05s, trace 10890. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020111917981584005, 'next_transition': 10910}.
<a id="trace-10966"></a>
- 89.65s–89.65s (×1), actor 0, squad 0 (trace 10966): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 10767. Next observer evidence: None.
<a id="trace-10967"></a>
- 89.65s–89.65s (×1), actor 0, squad 0 (trace 10967): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 10767. Next observer evidence: None.
<a id="trace-11249"></a>
<a id="trace-11330"></a>
<a id="trace-11348"></a>
<a id="trace-11375"></a>
<a id="trace-11389"></a>
<a id="trace-11419"></a>
<a id="trace-11465"></a>
<a id="trace-11510"></a>
<a id="trace-11550"></a>
<a id="trace-11608"></a>
<a id="trace-11629"></a>
<a id="trace-11763"></a>
<a id="trace-11795"></a>
<a id="trace-11803"></a>
<a id="trace-11840"></a>
<a id="trace-11876"></a>
<a id="trace-11915"></a>
<a id="trace-11944"></a>
<a id="trace-11965"></a>
<a id="trace-11986"></a>
<a id="trace-12065"></a>
<a id="trace-12076"></a>
<a id="trace-12093"></a>
- 89.75s–101.25s (×23), actor 5, squad 0 (trace 11249): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.05s, trace 10890. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11462051920336509, 'next_transition': 11330}.
<a id="trace-12096"></a>
- 101.50s–101.50s (×1), actor 1, squad 0 (trace 12096): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 100.00s, trace 11996. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200222335527067, 'next_transition': 12105}.
<a id="trace-12097"></a>
- 101.50s–101.50s (×1), actor 1, squad 0 (trace 12097): NeedSupport. Knowledge: actor memory at 100.00s, trace 11996. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200222335527067, 'next_transition': 12105}.
<a id="trace-12105"></a>
- 101.75s–101.75s (×1), actor 5, squad 0 (trace 12105): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 11999. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040047137716093, 'next_transition': 12110}.
<a id="trace-12110"></a>
- 102.15s–102.15s (×1), actor 1, squad 0 (trace 12110): Reorganise: completed/failed drill. Knowledge: actor memory at 100.00s, trace 11996. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200222335527067, 'next_transition': 12132}.
<a id="trace-12114"></a>
- 102.15s–102.15s (×1), actor 1, squad 0 (trace 12114): MoveTactically. Knowledge: actor memory at 100.00s, trace 11996. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200222335527067, 'next_transition': 12132}.
<a id="trace-12115"></a>
- 102.15s–102.15s (×1), actor 1, squad 0 (trace 12115): Reorganise complete. Knowledge: actor memory at 100.00s, trace 11996. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200222335527067, 'next_transition': 12132}.
<a id="trace-12132"></a>
- 102.25s–102.25s (×1), actor 5, squad 0 (trace 12132): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 11999. Next observer evidence: {'until': 102.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200222335527067, 'next_transition': 12138}.
<a id="trace-12138"></a>
- 102.40s–102.40s (×1), actor 1, squad 0 (trace 12138): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 11996. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520024370129719, 'next_transition': 12190}.
<a id="trace-12190"></a>
<a id="trace-12212"></a>
<a id="trace-12227"></a>
<a id="trace-12242"></a>
- 102.75s–104.25s (×4), actor 5, squad 0 (trace 12190): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 11999. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560067902404498, 'next_transition': 12212}.
<a id="trace-12253"></a>
- 104.60s–104.60s (×1), actor 1, squad 0 (trace 12253): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 100.00s, trace 11996. Next observer evidence: None.
<a id="trace-12269"></a>
- 104.75s–104.75s (×1), actor 5, squad 0 (trace 12269): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 11999. Next observer evidence: {'until': 104.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2494043039758176, 'next_transition': 12276}.
<a id="trace-12276"></a>
- 104.85s–104.85s (×1), actor 1, squad 0 (trace 12276): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 11996. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040275954985007, 'next_transition': 12417}.
<a id="trace-12417"></a>
<a id="trace-12429"></a>
- 105.25s–105.75s (×2), actor 5, squad 0 (trace 12417): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 12355. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040274649920411, 'next_transition': 12429}.
<a id="trace-12451"></a>
- 106.20s–106.20s (×1), actor 1, squad 0 (trace 12451): NeedSupport. Knowledge: actor memory at 105.00s, trace 12353. Next observer evidence: None.
<a id="trace-12458"></a>
<a id="trace-12467"></a>
<a id="trace-12481"></a>
<a id="trace-12498"></a>
<a id="trace-12514"></a>
- 106.25s–108.25s (×5), actor 5, squad 0 (trace 12458): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 12355. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0080271760517763, 'next_transition': 12467}.
<a id="trace-12521"></a>
- 108.45s–108.45s (×1), actor 1, squad 0 (trace 12521): traveling overwatch. Knowledge: actor memory at 105.00s, trace 12353. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199427663342105, 'next_transition': 12617}.
<a id="trace-12522"></a>
- 108.45s–108.45s (×1), actor 1, squad 0 (trace 12522): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 105.00s, trace 12353. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199427663342105, 'next_transition': 12617}.
<a id="trace-12617"></a>
<a id="trace-12634"></a>
<a id="trace-12651"></a>
<a id="trace-12729"></a>
<a id="trace-12739"></a>
<a id="trace-12756"></a>
- 108.75s–111.25s (×6), actor 5, squad 0 (trace 12617): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 12355. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559920064762554, 'next_transition': 12634}.
<a id="trace-12759"></a>
- 111.30s–111.30s (×1), actor 1, squad 0 (trace 12759): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 12658. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44101557578233963, 'next_transition': 12770}.
<a id="trace-12770"></a>
<a id="trace-12785"></a>
- 111.75s–112.25s (×2), actor 5, squad 0 (trace 12770): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 12660. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12785}.
<a id="trace-12791"></a>
- 112.30s–112.30s (×1), actor 1, squad 0 (trace 12791): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 12658. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12012539075482746, 'next_transition': 12853}.
<a id="trace-12853"></a>
<a id="trace-12876"></a>
<a id="trace-12885"></a>
<a id="trace-12912"></a>
- 112.75s–114.25s (×4), actor 5, squad 0 (trace 12853): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 12660. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12876}.
<a id="trace-12920"></a>
- 114.50s–114.50s (×1), actor 1, squad 0 (trace 12920): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 12658. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12928}.
<a id="trace-12928"></a>
<a id="trace-13001"></a>
- 114.75s–115.25s (×2), actor 5, squad 0 (trace 12928): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 12660. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13001}.
<a id="trace-13011"></a>
- 115.50s–115.50s (×1), actor 1, squad 0 (trace 13011): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 12931. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13103}.
<a id="trace-13103"></a>
<a id="trace-13121"></a>
<a id="trace-13145"></a>
<a id="trace-13162"></a>
<a id="trace-13175"></a>
- 115.75s–117.75s (×5), actor 5, squad 0 (trace 13103): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 12933. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13121}.
<a id="trace-13187"></a>
- 118.10s–118.10s (×1), actor 1, squad 0 (trace 13187): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 12931. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13202}.
<a id="trace-13202"></a>
- 118.25s–118.25s (×1), actor 5, squad 0 (trace 13202): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 12933. Next observer evidence: None.
<a id="trace-13207"></a>
- 118.35s–118.35s (×1), actor 1, squad 0 (trace 13207): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 12931. Next observer evidence: {'until': 118.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13262}.
<a id="trace-13262"></a>
<a id="trace-13287"></a>
<a id="trace-13301"></a>
<a id="trace-13381"></a>
- 118.75s–120.25s (×4), actor 5, squad 0 (trace 13262): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 12933. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13287}.
<a id="trace-13390"></a>
- 120.60s–120.60s (×1), actor 1, squad 0 (trace 13390): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 13308. Next observer evidence: None.
<a id="trace-13406"></a>
- 120.75s–120.75s (×1), actor 5, squad 0 (trace 13406): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 13310. Next observer evidence: {'until': 120.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13417}.
<a id="trace-13417"></a>
- 120.85s–120.85s (×1), actor 1, squad 0 (trace 13417): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 13308. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13516}.
<a id="trace-13516"></a>
<a id="trace-13529"></a>
<a id="trace-13554"></a>
<a id="trace-13579"></a>
<a id="trace-13605"></a>
- 121.25s–123.25s (×5), actor 5, squad 0 (trace 13516): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 13310. Next observer evidence: {'until': 121.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13529}.
<a id="trace-13616"></a>
- 123.45s–123.45s (×1), actor 1, squad 0 (trace 13616): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 13308. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13630}.
<a id="trace-13630"></a>
<a id="trace-13650"></a>
- 123.75s–124.25s (×2), actor 5, squad 0 (trace 13630): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 13310. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13650}.
<a id="trace-13655"></a>
- 124.45s–124.45s (×1), actor 1, squad 0 (trace 13655): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 13308. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06300665335402597, 'next_transition': 13719}.
<a id="trace-13719"></a>
<a id="trace-13801"></a>
<a id="trace-13810"></a>
<a id="trace-13836"></a>
- 124.75s–126.25s (×4), actor 5, squad 0 (trace 13719): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 13310. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.139405073941271, 'next_transition': 13801}.
<a id="trace-13846"></a>
- 126.65s–126.65s (×1), actor 1, squad 0 (trace 13846): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 125.00s, trace 13734. Next observer evidence: None.
<a id="trace-13851"></a>
<a id="trace-13864"></a>
- 126.75s–127.25s (×2), actor 5, squad 0 (trace 13851): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 13736. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13864}.
<a id="trace-13878"></a>
- 127.65s–127.65s (×1), actor 1, squad 0 (trace 13878): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 13734. Next observer evidence: None.
<a id="trace-13969"></a>
<a id="trace-13985"></a>
<a id="trace-14015"></a>
<a id="trace-14041"></a>
<a id="trace-14059"></a>
<a id="trace-14148"></a>
- 127.75s–130.30s (×6), actor 5, squad 0 (trace 13969): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 13736. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13985}.
<a id="trace-14155"></a>
- 130.45s–130.45s (×1), actor 1, squad 0 (trace 14155): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 14065. Next observer evidence: {'until': 130.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14165}.
<a id="trace-14165"></a>
<a id="trace-14181"></a>
- 130.80s–131.30s (×2), actor 5, squad 0 (trace 14165): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 14067. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14181}.
<a id="trace-14188"></a>
- 131.45s–131.45s (×1), actor 1, squad 0 (trace 14188): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 14065. Next observer evidence: {'until': 131.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20241172670596036, 'next_transition': 14248}.
<a id="trace-14248"></a>
<a id="trace-14274"></a>
<a id="trace-14288"></a>
<a id="trace-14307"></a>
- 131.80s–133.30s (×4), actor 5, squad 0 (trace 14248): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 14067. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14274}.
<a id="trace-14318"></a>
- 133.65s–133.65s (×1), actor 1, squad 0 (trace 14318): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 14065. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14323}.
<a id="trace-14323"></a>
- 133.80s–133.80s (×1), actor 5, squad 0 (trace 14323): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 14067. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14337}.
<a id="trace-14337"></a>
- 134.20s–134.20s (×1), actor 1, squad 0 (trace 14337): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 14065. Next observer evidence: None.
<a id="trace-14431"></a>
<a id="trace-14450"></a>
<a id="trace-14522"></a>
<a id="trace-14555"></a>
<a id="trace-14578"></a>
<a id="trace-14598"></a>
- 134.30s–136.80s (×6), actor 5, squad 0 (trace 14431): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 14067. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14450}.
<a id="trace-14601"></a>
- 136.80s–136.80s (×1), actor 1, squad 0 (trace 14601): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 135.00s, trace 14455. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14622}.
<a id="trace-14622"></a>
<a id="trace-14634"></a>
- 137.30s–137.80s (×2), actor 5, squad 0 (trace 14622): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 14457. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14634}.
<a id="trace-14639"></a>
- 137.80s–137.80s (×1), actor 1, squad 0 (trace 14639): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 135.00s, trace 14455. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0660550593368878, 'next_transition': 14713}.
<a id="trace-14713"></a>
<a id="trace-14725"></a>
<a id="trace-14737"></a>
<a id="trace-14751"></a>
- 138.30s–139.80s (×4), actor 5, squad 0 (trace 14713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 14457. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14725}.
<a id="trace-14776"></a>
- 140.00s–140.00s (×1), actor 1, squad 0 (trace 14776): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 140.00s, trace 14758. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14832}.
<a id="trace-14832"></a>
<a id="trace-14855"></a>
- 140.30s–140.80s (×2), actor 5, squad 0 (trace 14832): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 14760. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14855}.
<a id="trace-14861"></a>
- 141.00s–141.00s (×1), actor 1, squad 0 (trace 14861): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 14758. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14965}.
<a id="trace-14965"></a>
<a id="trace-14979"></a>
- 141.30s–141.80s (×2), actor 5, squad 0 (trace 14965): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 14760. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14979}.
<a id="trace-14984"></a>
- 142.00s–142.00s (×1), actor 1, squad 0 (trace 14984): current contact unknown for 10 s. Knowledge: actor memory at 140.00s, trace 14758. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598963274160516, 'next_transition': 15111}.
<a id="trace-15111"></a>
<a id="trace-15121"></a>
<a id="trace-15151"></a>
<a id="trace-15169"></a>
<a id="trace-15191"></a>
- 142.30s–144.30s (×5), actor 5, squad 0 (trace 15111): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 14760. Next observer evidence: {'until': 142.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13930264709032417, 'next_transition': 15121}.
<a id="trace-15203"></a>
- 144.60s–144.60s (×1), actor 1, squad 0 (trace 15203): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 140.00s, trace 14758. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06299090728033752, 'next_transition': 15221}.
<a id="trace-15221"></a>
<a id="trace-15295"></a>
- 144.80s–145.30s (×2), actor 5, squad 0 (trace 15221): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 14760. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13829818364678476, 'next_transition': 15295}.
<a id="trace-15304"></a>
- 145.60s–145.60s (×1), actor 1, squad 0 (trace 15304): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 145.00s, trace 15226. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15366}.
<a id="trace-15366"></a>
<a id="trace-15382"></a>
<a id="trace-15398"></a>
- 145.80s–146.80s (×3), actor 5, squad 0 (trace 15366): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 15228. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15382}.
<a id="trace-2156"></a>
- 147.05s–147.05s (×1), actor 5, squad 0 (events line 2156): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15420}.
<a id="trace-15405"></a>
- 147.05s–147.05s (×1), actor 5, squad 0 (trace 15405): renew committed intent (75 s lifetime). Knowledge: actor memory at 147.05s, trace 15405. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15420}.
<a id="trace-15420"></a>
<a id="trace-15435"></a>
- 147.30s–147.80s (×2), actor 5, squad 0 (trace 15420): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 147.05s, trace 15405. Next observer evidence: {'until': 147.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15435}.
<a id="trace-15438"></a>
- 147.80s–147.80s (×1), actor 1, squad 0 (trace 15438): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 145.00s, trace 15226. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15457}.
<a id="trace-15457"></a>
<a id="trace-15476"></a>
- 148.30s–148.80s (×2), actor 5, squad 0 (trace 15457): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 147.05s, trace 15405. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15476}.
<a id="trace-15481"></a>
- 148.80s–148.80s (×1), actor 1, squad 0 (trace 15481): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 145.00s, trace 15226. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15594}.
<a id="trace-15594"></a>
<a id="trace-15612"></a>
<a id="trace-15702"></a>
<a id="trace-15713"></a>
<a id="trace-15732"></a>
- 149.30s–151.30s (×5), actor 5, squad 0 (trace 15594): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 147.05s, trace 15405. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15612}.
<a id="trace-15747"></a>
- 151.55s–151.55s (×1), actor 1, squad 0 (trace 15747): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 150.00s, trace 15627. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15753}.
<a id="trace-15753"></a>
<a id="trace-15773"></a>
- 151.80s–152.30s (×2), actor 5, squad 0 (trace 15753): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 15629. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15773}.
<a id="trace-15785"></a>
- 152.55s–152.55s (×1), actor 1, squad 0 (trace 15785): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 15627. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10635336523044248, 'next_transition': 15851}.
<a id="trace-15851"></a>
<a id="trace-15865"></a>
<a id="trace-15878"></a>
<a id="trace-15902"></a>
- 152.80s–154.30s (×4), actor 5, squad 0 (trace 15851): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 15629. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15865}.
<a id="trace-15913"></a>
- 154.75s–154.75s (×1), actor 1, squad 0 (trace 15913): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 150.00s, trace 15627. Next observer evidence: {'until': 154.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15918}.
<a id="trace-15918"></a>
<a id="trace-15992"></a>
- 154.80s–155.30s (×2), actor 5, squad 0 (trace 15918): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 15629. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15992}.
<a id="trace-16010"></a>
- 155.75s–155.75s (×1), actor 1, squad 0 (trace 16010): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 15929. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16109}.
<a id="trace-16109"></a>
<a id="trace-16135"></a>
<a id="trace-16153"></a>
<a id="trace-16179"></a>
<a id="trace-16190"></a>
<a id="trace-16211"></a>
- 155.80s–158.30s (×6), actor 5, squad 0 (trace 16109): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 15931. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16135}.
<a id="trace-16226"></a>
- 158.50s–158.50s (×1), actor 1, squad 0 (trace 16226): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 155.00s, trace 15929. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16236}.
<a id="trace-16236"></a>
<a id="trace-16252"></a>
- 158.80s–159.30s (×2), actor 5, squad 0 (trace 16236): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 15931. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16252}.
<a id="trace-16258"></a>
- 159.50s–159.50s (×1), actor 1, squad 0 (trace 16258): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 15929. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16324}.
<a id="trace-16324"></a>
<a id="trace-16400"></a>
<a id="trace-16417"></a>
<a id="trace-16440"></a>
- 159.80s–161.30s (×4), actor 5, squad 0 (trace 16324): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 15931. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16400}.
<a id="trace-16452"></a>
- 161.70s–161.70s (×1), actor 1, squad 0 (trace 16452): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 160.00s, trace 16327. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16457}.
<a id="trace-16457"></a>
- 161.80s–161.80s (×1), actor 5, squad 0 (trace 16457): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 16329. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16479}.
<a id="trace-16479"></a>
- 162.20s–162.20s (×1), actor 1, squad 0 (trace 16479): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 16327. Next observer evidence: None.
<a id="trace-16581"></a>
<a id="trace-16599"></a>
<a id="trace-16616"></a>
<a id="trace-16633"></a>
<a id="trace-16652"></a>
<a id="trace-16679"></a>
- 162.30s–164.80s (×6), actor 5, squad 0 (trace 16581): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 16329. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16599}.
<a id="trace-16684"></a>
- 164.80s–164.80s (×1), actor 1, squad 0 (trace 16684): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 160.00s, trace 16327. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16758}.
<a id="trace-16758"></a>
<a id="trace-16776"></a>
- 165.30s–165.80s (×2), actor 5, squad 0 (trace 16758): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 16691. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16776}.
<a id="trace-16779"></a>
- 165.80s–165.80s (×1), actor 1, squad 0 (trace 16779): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 165.00s, trace 16689. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16851}.
<a id="trace-16851"></a>
<a id="trace-16863"></a>
<a id="trace-16880"></a>
<a id="trace-16895"></a>
- 166.30s–167.80s (×4), actor 5, squad 0 (trace 16851): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 16691. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16863}.
<a id="trace-16905"></a>
- 168.00s–168.00s (×1), actor 1, squad 0 (trace 16905): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 165.00s, trace 16689. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16923}.
<a id="trace-16923"></a>
<a id="trace-16949"></a>
- 168.30s–168.80s (×2), actor 5, squad 0 (trace 16923): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 16691. Next observer evidence: {'until': 168.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16949}.
<a id="trace-16954"></a>
- 169.00s–169.00s (×1), actor 1, squad 0 (trace 16954): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 165.00s, trace 16689. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17066}.
<a id="trace-17066"></a>
<a id="trace-17076"></a>
<a id="trace-17161"></a>
<a id="trace-17176"></a>
<a id="trace-17188"></a>
- 169.30s–171.30s (×5), actor 5, squad 0 (trace 17066): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 16691. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17076}.
<a id="trace-17201"></a>
- 171.60s–171.60s (×1), actor 1, squad 0 (trace 17201): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 170.00s, trace 17083. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17211}.
<a id="trace-17211"></a>
<a id="trace-17234"></a>
- 171.80s–172.30s (×2), actor 5, squad 0 (trace 17211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 17085. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17234}.
<a id="trace-17243"></a>
- 172.60s–172.60s (×1), actor 1, squad 0 (trace 17243): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 170.00s, trace 17083. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17311}.
<a id="trace-17311"></a>
<a id="trace-17325"></a>
<a id="trace-17342"></a>
<a id="trace-17372"></a>
<a id="trace-17385"></a>
- 172.80s–174.80s (×5), actor 5, squad 0 (trace 17311): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 17085. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17325}.
<a id="trace-17390"></a>
- 174.80s–174.80s (×1), actor 1, squad 0 (trace 17390): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 170.00s, trace 17083. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17468}.
<a id="trace-17468"></a>
<a id="trace-17479"></a>
- 175.30s–175.80s (×2), actor 5, squad 0 (trace 17468): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17396. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17479}.
<a id="trace-17484"></a>
- 175.80s–175.80s (×1), actor 1, squad 0 (trace 17484): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 175.00s, trace 17394. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17598}.
<a id="trace-17598"></a>
<a id="trace-17618"></a>
<a id="trace-17641"></a>
<a id="trace-17655"></a>
<a id="trace-17670"></a>
- 176.30s–178.30s (×5), actor 5, squad 0 (trace 17598): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17396. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17618}.
<a id="trace-17682"></a>
- 178.55s–178.55s (×1), actor 1, squad 0 (trace 17682): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 175.00s, trace 17394. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17690}.
<a id="trace-17690"></a>
<a id="trace-17713"></a>
- 178.80s–179.30s (×2), actor 5, squad 0 (trace 17690): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17396. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17713}.
<a id="trace-17718"></a>
- 179.55s–179.55s (×1), actor 1, squad 0 (trace 17718): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 175.00s, trace 17394. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17778}.
<a id="trace-17778"></a>
<a id="trace-17861"></a>
<a id="trace-17880"></a>
<a id="trace-17906"></a>
- 179.80s–181.30s (×4), actor 5, squad 0 (trace 17778): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 17396. Next observer evidence: {'until': 180.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17861}.
<a id="trace-17916"></a>
- 181.75s–181.75s (×1), actor 1, squad 0 (trace 17916): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 180.00s, trace 17785. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17921}.
<a id="trace-17921"></a>
- 181.80s–181.80s (×1), actor 5, squad 0 (trace 17921): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 17787. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17937}.
<a id="trace-17937"></a>
- 182.20s–182.20s (×1), actor 1, squad 0 (trace 17937): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 17785. Next observer evidence: None.
<a id="trace-18039"></a>
<a id="trace-18061"></a>
<a id="trace-18074"></a>
<a id="trace-18095"></a>
<a id="trace-18116"></a>
<a id="trace-18136"></a>
- 182.30s–184.80s (×6), actor 5, squad 0 (trace 18039): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 17787. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18061}.
<a id="trace-18141"></a>
- 184.80s–184.80s (×1), actor 1, squad 0 (trace 18141): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 180.00s, trace 17785. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18213}.
<a id="trace-18213"></a>
<a id="trace-18226"></a>
- 185.30s–185.80s (×2), actor 5, squad 0 (trace 18213): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 18152. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18226}.
<a id="trace-18231"></a>
- 185.80s–185.80s (×1), actor 1, squad 0 (trace 18231): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 185.00s, trace 18150. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18310}.
<a id="trace-18310"></a>
<a id="trace-18324"></a>
<a id="trace-18340"></a>
<a id="trace-18358"></a>
- 186.30s–187.80s (×4), actor 5, squad 0 (trace 18310): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 18152. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18324}.
<a id="trace-18372"></a>
- 188.00s–188.00s (×1), actor 1, squad 0 (trace 18372): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 185.00s, trace 18150. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18385}.
<a id="trace-18385"></a>
<a id="trace-18415"></a>
- 188.30s–188.80s (×2), actor 5, squad 0 (trace 18385): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 18152. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18415}.
<a id="trace-18418"></a>
- 189.00s–189.00s (×1), actor 1, squad 0 (trace 18418): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 185.00s, trace 18150. Next observer evidence: None.
<a id="trace-2769"></a>
- 189.05s–189.05s (×1), actor 5, squad 0 (events line 2769): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18531}.
<a id="trace-18520"></a>
- 189.05s–189.05s (×1), actor 5, squad 0 (trace 18520): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.385238 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 189.05s, trace 18520. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18531}.
<a id="trace-18521"></a>
- 189.05s–189.05s (×1), actor 5, squad 0 (trace 18521): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.385238 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 189.05s, trace 18521. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18531}.
<a id="trace-18531"></a>
<a id="trace-18545"></a>
<a id="trace-18630"></a>
- 189.30s–190.30s (×3), actor 5, squad 0 (trace 18531): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 189.05s, trace 18521. Next observer evidence: {'until': 189.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18545}.
<a id="trace-2786"></a>
- 190.40s–190.40s (×1), actor 5, squad 0 (events line 2786): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18635"></a>
- 190.40s–190.40s (×1), actor 5, squad 0 (trace 18635): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.778592 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 190.40s, trace 18635. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18642}.
<a id="trace-18636"></a>
- 190.40s–190.40s (×1), actor 5, squad 0 (trace 18636): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.778592 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 190.40s, trace 18636. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18642}.
<a id="trace-18642"></a>
- 190.80s–190.80s (×1), actor 5, squad 0 (trace 18642): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.40s, trace 18636. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18652}.
<a id="trace-18652"></a>
- 191.25s–191.25s (×1), actor 1, squad 0 (trace 18652): Withdraw to received rally. Knowledge: actor memory at 190.00s, trace 18550. Next observer evidence: None.
<a id="trace-18653"></a>
- 191.25s–191.25s (×1), actor 1, squad 0 (trace 18653): rearward bound: one stationary suppressing element. Knowledge: actor memory at 190.00s, trace 18550. Next observer evidence: None.
<a id="trace-18662"></a>
- 191.30s–191.30s (×1), actor 5, squad 0 (trace 18662): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.40s, trace 18636. Next observer evidence: {'until': 191.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2800}.
<a id="trace-2800"></a>
- 191.60s–191.60s (×1), actor 5, squad 0 (events line 2800): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18675"></a>
- 191.60s–191.60s (×1), actor 5, squad 0 (trace 18675): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.372819 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 191.60s, trace 18675. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18681}.
<a id="trace-18676"></a>
- 191.60s–191.60s (×1), actor 5, squad 0 (trace 18676): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.372819 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 191.60s, trace 18676. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18681}.
<a id="trace-18681"></a>
<a id="trace-18707"></a>
<a id="trace-18729"></a>
<a id="trace-18749"></a>
<a id="trace-18765"></a>
<a id="trace-18790"></a>
<a id="trace-18805"></a>
<a id="trace-18884"></a>
<a id="trace-18904"></a>
<a id="trace-18920"></a>
<a id="trace-18934"></a>
<a id="trace-18947"></a>
<a id="trace-18957"></a>
<a id="trace-18976"></a>
<a id="trace-18985"></a>
<a id="trace-18997"></a>
<a id="trace-19007"></a>
<a id="trace-19089"></a>
<a id="trace-19112"></a>
<a id="trace-19126"></a>
<a id="trace-19145"></a>
<a id="trace-19171"></a>
<a id="trace-19182"></a>
<a id="trace-19195"></a>
<a id="trace-19204"></a>
<a id="trace-19224"></a>
<a id="trace-19238"></a>
<a id="trace-19310"></a>
<a id="trace-19319"></a>
<a id="trace-19335"></a>
<a id="trace-19351"></a>
<a id="trace-19371"></a>
<a id="trace-19388"></a>
<a id="trace-19408"></a>
<a id="trace-19423"></a>
<a id="trace-19444"></a>
<a id="trace-19454"></a>
<a id="trace-19533"></a>
<a id="trace-19542"></a>
<a id="trace-19556"></a>
<a id="trace-19564"></a>
<a id="trace-19581"></a>
<a id="trace-19603"></a>
<a id="trace-19614"></a>
<a id="trace-19627"></a>
<a id="trace-19654"></a>
<a id="trace-19664"></a>
<a id="trace-19744"></a>
<a id="trace-19759"></a>
<a id="trace-19777"></a>
<a id="trace-19794"></a>
<a id="trace-19810"></a>
<a id="trace-19820"></a>
<a id="trace-19833"></a>
<a id="trace-19846"></a>
<a id="trace-19858"></a>
<a id="trace-19872"></a>
<a id="trace-19948"></a>
<a id="trace-19968"></a>
<a id="trace-19988"></a>
<a id="trace-20003"></a>
<a id="trace-20029"></a>
<a id="trace-20039"></a>
<a id="trace-20053"></a>
<a id="trace-20060"></a>
<a id="trace-20078"></a>
<a id="trace-20095"></a>
<a id="trace-20165"></a>
<a id="trace-20178"></a>
<a id="trace-20196"></a>
<a id="trace-20204"></a>
<a id="trace-20220"></a>
<a id="trace-20234"></a>
<a id="trace-20264"></a>
<a id="trace-20300"></a>
<a id="trace-20309"></a>
<a id="trace-20383"></a>
<a id="trace-20395"></a>
<a id="trace-20409"></a>
<a id="trace-20422"></a>
<a id="trace-20439"></a>
<a id="trace-20455"></a>
<a id="trace-20470"></a>
<a id="trace-20484"></a>
<a id="trace-20504"></a>
<a id="trace-20519"></a>
<a id="trace-20603"></a>
<a id="trace-20614"></a>
<a id="trace-20630"></a>
<a id="trace-20649"></a>
<a id="trace-20662"></a>
<a id="trace-20677"></a>
<a id="trace-20694"></a>
<a id="trace-20703"></a>
<a id="trace-20718"></a>
<a id="trace-20728"></a>
<a id="trace-20807"></a>
<a id="trace-20826"></a>
<a id="trace-20847"></a>
<a id="trace-20857"></a>
<a id="trace-20886"></a>
<a id="trace-20898"></a>
<a id="trace-20907"></a>
<a id="trace-20920"></a>
<a id="trace-20937"></a>
<a id="trace-20951"></a>
<a id="trace-21024"></a>
<a id="trace-21035"></a>
<a id="trace-21058"></a>
<a id="trace-21066"></a>
<a id="trace-21088"></a>
<a id="trace-21098"></a>
<a id="trace-21120"></a>
<a id="trace-21147"></a>
<a id="trace-21163"></a>
<a id="trace-21175"></a>
<a id="trace-21249"></a>
<a id="trace-21258"></a>
<a id="trace-21273"></a>
- 191.80s–251.30s (×119), actor 5, squad 0 (trace 18681): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.60s, trace 18676. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18707}.
<a id="trace-3512"></a>
- 251.60s–251.60s (×1), actor 5, squad 0 (events line 3512): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21278"></a>
- 251.60s–251.60s (×1), actor 5, squad 0 (trace 21278): renew committed intent (75 s lifetime). Knowledge: actor memory at 251.60s, trace 21278. Next observer evidence: {'until': 251.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21281}.
<a id="trace-21281"></a>
<a id="trace-21303"></a>
<a id="trace-21321"></a>
<a id="trace-21337"></a>
<a id="trace-21347"></a>
<a id="trace-21365"></a>
<a id="trace-21386"></a>
<a id="trace-21460"></a>
<a id="trace-21473"></a>
<a id="trace-21495"></a>
<a id="trace-21507"></a>
<a id="trace-21526"></a>
<a id="trace-21536"></a>
<a id="trace-21554"></a>
<a id="trace-21561"></a>
<a id="trace-21575"></a>
<a id="trace-21584"></a>
<a id="trace-21664"></a>
<a id="trace-21681"></a>
<a id="trace-21704"></a>
<a id="trace-21722"></a>
<a id="trace-21739"></a>
<a id="trace-21749"></a>
<a id="trace-21768"></a>
<a id="trace-21777"></a>
- 251.80s–263.80s (×25), actor 5, squad 0 (trace 21281): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 251.60s, trace 21278. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21303}.
<a id="trace-21793"></a>
- 264.25s–264.25s (×1), actor 1, squad 0 (trace 21793): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 260.00s, trace 21593. Next observer evidence: None.
<a id="trace-21798"></a>
<a id="trace-21806"></a>
<a id="trace-21883"></a>
<a id="trace-21892"></a>
<a id="trace-21908"></a>
<a id="trace-21922"></a>
<a id="trace-21939"></a>
<a id="trace-21961"></a>
<a id="trace-21982"></a>
<a id="trace-21991"></a>
<a id="trace-22009"></a>
<a id="trace-22019"></a>
<a id="trace-22101"></a>
<a id="trace-22112"></a>
<a id="trace-22126"></a>
<a id="trace-22132"></a>
<a id="trace-22149"></a>
<a id="trace-22168"></a>
<a id="trace-22184"></a>
<a id="trace-22199"></a>
<a id="trace-22223"></a>
<a id="trace-22232"></a>
<a id="trace-22308"></a>
<a id="trace-22319"></a>
<a id="trace-22339"></a>
<a id="trace-22347"></a>
<a id="trace-22372"></a>
<a id="trace-22384"></a>
<a id="trace-22399"></a>
<a id="trace-22410"></a>
<a id="trace-22424"></a>
<a id="trace-22435"></a>
<a id="trace-22514"></a>
<a id="trace-22523"></a>
<a id="trace-22549"></a>
<a id="trace-22565"></a>
<a id="trace-22587"></a>
<a id="trace-22599"></a>
<a id="trace-22610"></a>
<a id="trace-22621"></a>
<a id="trace-22641"></a>
<a id="trace-22655"></a>
<a id="trace-22729"></a>
<a id="trace-22742"></a>
<a id="trace-22758"></a>
<a id="trace-22769"></a>
<a id="trace-22785"></a>
<a id="trace-22802"></a>
<a id="trace-22827"></a>
<a id="trace-22841"></a>
<a id="trace-22862"></a>
<a id="trace-22870"></a>
<a id="trace-22944"></a>
<a id="trace-22959"></a>
<a id="trace-22975"></a>
<a id="trace-22989"></a>
<a id="trace-23006"></a>
<a id="trace-23020"></a>
<a id="trace-23040"></a>
<a id="trace-23051"></a>
<a id="trace-23092"></a>
<a id="trace-23165"></a>
<a id="trace-23174"></a>
<a id="trace-23190"></a>
<a id="trace-23207"></a>
<a id="trace-23224"></a>
<a id="trace-23238"></a>
<a id="trace-23259"></a>
<a id="trace-23270"></a>
<a id="trace-23286"></a>
<a id="trace-23297"></a>
<a id="trace-23375"></a>
<a id="trace-23393"></a>
<a id="trace-23415"></a>
<a id="trace-23422"></a>
<a id="trace-23437"></a>
<a id="trace-23452"></a>
<a id="trace-23465"></a>
<a id="trace-23481"></a>
<a id="trace-23495"></a>
<a id="trace-23507"></a>
<a id="trace-23589"></a>
<a id="trace-23600"></a>
<a id="trace-23621"></a>
<a id="trace-23631"></a>
<a id="trace-23653"></a>
<a id="trace-23663"></a>
<a id="trace-23684"></a>
<a id="trace-23698"></a>
<a id="trace-23712"></a>
<a id="trace-23725"></a>
<a id="trace-23803"></a>
<a id="trace-23810"></a>
<a id="trace-23825"></a>
<a id="trace-23835"></a>
<a id="trace-23862"></a>
- 264.30s–312.30s (×96), actor 5, squad 0 (trace 21798): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 21595. Next observer evidence: {'until': 264.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21806}.
<a id="trace-4229"></a>
- 312.55s–312.55s (×1), actor 5, squad 0 (events line 4229): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23867"></a>
- 312.55s–312.55s (×1), actor 5, squad 0 (trace 23867): renew committed intent (75 s lifetime). Knowledge: actor memory at 312.55s, trace 23867. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23876}.
<a id="trace-23876"></a>
<a id="trace-23898"></a>
<a id="trace-23907"></a>
<a id="trace-23930"></a>
<a id="trace-23948"></a>
<a id="trace-24018"></a>
<a id="trace-24031"></a>
<a id="trace-24048"></a>
<a id="trace-24058"></a>
<a id="trace-24078"></a>
<a id="trace-24092"></a>
<a id="trace-24110"></a>
<a id="trace-24119"></a>
<a id="trace-24139"></a>
<a id="trace-24150"></a>
<a id="trace-24226"></a>
<a id="trace-24248"></a>
<a id="trace-24270"></a>
<a id="trace-24282"></a>
<a id="trace-24299"></a>
<a id="trace-24307"></a>
<a id="trace-24321"></a>
<a id="trace-24330"></a>
<a id="trace-24351"></a>
<a id="trace-24363"></a>
<a id="trace-24440"></a>
<a id="trace-24451"></a>
<a id="trace-24476"></a>
<a id="trace-24488"></a>
<a id="trace-24506"></a>
<a id="trace-24526"></a>
<a id="trace-24541"></a>
<a id="trace-24552"></a>
<a id="trace-24570"></a>
<a id="trace-24576"></a>
<a id="trace-24655"></a>
<a id="trace-24664"></a>
<a id="trace-24680"></a>
<a id="trace-24687"></a>
<a id="trace-24709"></a>
<a id="trace-24730"></a>
<a id="trace-24751"></a>
<a id="trace-24773"></a>
<a id="trace-24795"></a>
<a id="trace-24803"></a>
<a id="trace-24873"></a>
<a id="trace-24882"></a>
<a id="trace-24900"></a>
<a id="trace-24910"></a>
<a id="trace-24930"></a>
<a id="trace-24938"></a>
<a id="trace-24951"></a>
<a id="trace-24969"></a>
<a id="trace-24986"></a>
<a id="trace-25001"></a>
<a id="trace-25086"></a>
<a id="trace-25099"></a>
<a id="trace-25123"></a>
<a id="trace-25131"></a>
<a id="trace-25152"></a>
<a id="trace-25162"></a>
<a id="trace-25173"></a>
<a id="trace-25182"></a>
<a id="trace-25198"></a>
<a id="trace-25213"></a>
<a id="trace-25289"></a>
<a id="trace-25304"></a>
<a id="trace-25326"></a>
<a id="trace-25337"></a>
<a id="trace-25365"></a>
<a id="trace-25379"></a>
<a id="trace-25398"></a>
<a id="trace-25409"></a>
<a id="trace-25425"></a>
<a id="trace-25433"></a>
<a id="trace-25507"></a>
<a id="trace-25520"></a>
<a id="trace-25532"></a>
<a id="trace-25545"></a>
<a id="trace-25566"></a>
<a id="trace-25581"></a>
<a id="trace-25601"></a>
<a id="trace-25621"></a>
<a id="trace-25650"></a>
<a id="trace-25660"></a>
<a id="trace-25730"></a>
<a id="trace-25739"></a>
<a id="trace-25755"></a>
<a id="trace-25769"></a>
<a id="trace-25784"></a>
<a id="trace-25796"></a>
<a id="trace-25809"></a>
<a id="trace-25820"></a>
<a id="trace-25838"></a>
<a id="trace-25850"></a>
- 312.80s–359.80s (×95), actor 5, squad 0 (trace 23876): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 312.55s, trace 23867. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23898}.

## Net delivery

367 matched order/radio deliveries; 508 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.290s; maximum 1.600s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3484: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3490: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3492: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3494: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3495: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3496: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3497: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3498: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3499: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3500: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3502: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3503: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 3629: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 3630: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 3631: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 3632: estimate 11.98; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4505: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4510: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4511: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4513: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4515: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4516: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4517: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4518: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4519: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4520: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4521: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4522: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4523: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4524: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 4622: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.05s leader 5, trace 4623: estimate 11.83; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5354: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5355: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5357: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5359: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5360: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 5362: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5363: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5364: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5365: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5366: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5367: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5368: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5369: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5370: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5371: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5372: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 5464: estimate 12.86; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 5465: estimate 12.86; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5717: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5718: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5720: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5722: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5723: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 5725: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5726: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5727: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5728: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5729: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5730: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5731: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5732: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5733: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5734: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5735: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 6001: estimate 12.76; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 37.10s leader 5, trace 6002: estimate 12.76; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6169: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6170: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6173: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6174: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 6176: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6177: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6178: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6179: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6180: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6181: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6182: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6183: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6184: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6185: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6186: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.05s leader 5, trace 6430: estimate 12.57; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 6435: estimate 12.56; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 6436: estimate 12.56; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6742: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6743: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6746: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6747: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 6749: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6750: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6751: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6752: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6753: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6754: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6755: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6756: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6757: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 6758: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 6759: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 6999: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7000: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7003: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7004: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 7006: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7007: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7008: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7009: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7010: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7011: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7012: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7013: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7014: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 7015: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 7016: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 7409: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7410: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7413: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7414: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 7416: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7417: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7418: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7419: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7420: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7421: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7422: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7423: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7424: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 7425: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 7426: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 7685: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7686: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7689: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7690: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7692: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7693: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7694: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7695: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7696: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7697: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7698: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7699: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 7700: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 7701: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 7937: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 7938: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 7939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7941: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7942: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 7943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7944: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7945: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7946: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7947: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7948: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7949: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7950: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7951: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 7952: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 7953: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 10039: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 10040: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 10041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 10042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 10043: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 10044: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 10045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 10046: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 10047: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 10048: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 10049: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 10050: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 10051: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 10052: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 10053: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 10054: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 10055: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 10310: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 10311: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 10312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 10313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 10314: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 10315: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 10316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 10317: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 10318: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 10319: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 10320: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 10321: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 10322: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 10323: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 10324: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 10325: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 10326: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 10531: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10532: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 10533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10535: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10536: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10538: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10539: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10540: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10541: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10542: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10543: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10544: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10545: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 10546: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 10547: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.35s leader 5, trace 10636: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 10767: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 10768: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 10769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 10770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 10771: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 10772: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 10773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 10774: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 10775: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 10776: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 10777: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 10778: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 10779: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 10780: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 10781: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 10782: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 10783: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.05s leader 5, trace 10889: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.05s leader 5, trace 10890: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 11254: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11255: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 11256: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11258: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11259: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 11260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11261: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11262: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11263: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11264: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11265: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11266: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11267: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11268: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 11269: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 11270: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 11638: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 11639: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 11640: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 11641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 11642: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 11643: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 11644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 11645: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 11646: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 11647: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 11648: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 11649: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 11650: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 11651: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 11652: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 11653: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 11654: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 11996: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 11997: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 11998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 11999: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12000: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 12001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12002: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12003: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12004: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12005: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12006: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12007: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12008: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12009: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 12010: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 12011: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 12353: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 12354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 12355: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 12356: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 12357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12358: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 12359: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 12360: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 12361: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 12362: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12363: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12364: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12365: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 12366: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 12367: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12658: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 12659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12660: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 12661: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 12662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12663: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12664: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 12665: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12666: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 12667: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12668: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12669: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12670: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 12671: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 12672: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 12931: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 12932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 12933: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 12934: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 12935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12936: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12937: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 12938: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12939: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 12940: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12941: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12942: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12943: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 12944: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 12945: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 13308: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 13309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 13310: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 13311: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 13312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 13313: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 13314: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 13315: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 13316: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 13317: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 13318: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 13319: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 13320: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 13321: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 13322: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 13734: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13736: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13737: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 13738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13739: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13740: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 13741: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13742: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13743: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13744: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13745: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13746: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 13747: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 13748: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 14065: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 14066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 14067: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 14068: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 14069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 14070: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 14071: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 14072: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 14073: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 14074: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 14075: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 14076: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 14077: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 14078: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 14079: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 14455: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 14456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14457: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 14458: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 14459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 14460: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 14461: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 14462: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 14463: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 14464: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 14465: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 14466: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 14467: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 14468: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 14469: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 14758: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 14759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 14760: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 14761: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 14762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 14763: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 14764: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 14765: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 14766: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 14767: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 14768: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 14769: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 14770: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 14771: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 14772: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 15226: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 15227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 15228: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 15229: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 15230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 15231: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 15232: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 15233: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 15234: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 15235: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 15236: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 15237: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 15238: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 15239: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 15240: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 147.05s leader 5, trace 15405: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 15627: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 15628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 15629: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 15630: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 15631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 15632: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 15633: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 15634: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 15635: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 15636: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 15637: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 15638: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 15639: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 15640: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 15641: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 15929: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 15930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 15931: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 15932: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 15933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 15934: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 15935: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 15936: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 15937: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 15938: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 15939: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 15940: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 15941: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 15942: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 15943: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 16327: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 16328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 16329: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 16330: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 16331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 16332: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 16333: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 16334: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 16335: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 16336: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 16337: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 16338: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 16339: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 16340: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 16341: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 16689: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 16690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16691: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 16692: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 16693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16694: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16695: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 16696: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16697: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16698: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16699: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16700: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16701: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 16702: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 16703: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 17083: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 17084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 17085: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 17086: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 17087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 17088: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 17089: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 17090: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 17091: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 17092: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 17093: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 17094: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 17095: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 17096: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 17097: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 17394: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17396: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 17397: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 17398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 17399: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 17400: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 17401: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 17402: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17403: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 17404: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17405: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 17406: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 17407: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 17408: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 17785: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17787: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 17788: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 17789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 17790: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 17791: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 17792: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 17793: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 17794: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 17795: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17796: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 17797: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 17798: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 17799: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 18150: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 18151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 18152: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 18153: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 18154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18155: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18156: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18157: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18158: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 18159: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18160: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18161: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 18162: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18163: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18164: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.05s leader 5, trace 18520: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 189.05s leader 5, trace 18521: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 18550: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 18552: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 18553: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 18554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 18555: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 18556: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 18557: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18558: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 18559: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18560: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18561: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 18562: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18563: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 18564: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.40s leader 5, trace 18635: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.40s leader 5, trace 18636: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.60s leader 5, trace 18675: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.60s leader 5, trace 18676: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 18810: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 18811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 18812: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 18813: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 18814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 18815: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 18816: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 18817: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 18818: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 18819: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 18820: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 18821: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 18822: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 18823: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 18824: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 19018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 19019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 19020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 19021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 19022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19023: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19024: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19025: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19026: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19027: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19028: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19029: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19030: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19031: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19032: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 19241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 19242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 19243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 19244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 19245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 19246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 19247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 19248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 19249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 19250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 19253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 19255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 19461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 19462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 19463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 19464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 19465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 19466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 19467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 19468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 19469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 19470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 19471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 19472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 19473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 19474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 19475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 19680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 19681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 19682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 19683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 19684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 19685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 19686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 19687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 19688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 19689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 19690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 19691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 19692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 19693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 19694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 19879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 19880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 19881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 19882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 19883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 19884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 19885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 19886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 19887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 19888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 19889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 19890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 19891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 19892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 19893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 20100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 20101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 20102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 20103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 20104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 20109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 20316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 20317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 20318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 20319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 20320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 20321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 20323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 20325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 20328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 20330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 20524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 20525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 20526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 20527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 20528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 20529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 20530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 20531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 20532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 20533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 20534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 20535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 20536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 20537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 20538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 20733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 20734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 20735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 20736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 20737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 20738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 20739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 20740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 20741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 20742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 20743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 20744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 20745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 20746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 20747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 20960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 20961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 20962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 20963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 20964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 20965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 20969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 20974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 21180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 21181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 21182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 21183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 21184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 21187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 21189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 21192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 251.60s leader 5, trace 21278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 21389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 21390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 21391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 21392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 21393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 21394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 21395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 21396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 21397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 21398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 21399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 21400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 21401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 21402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 21593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 21594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 21595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 21596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 21597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 21598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 21599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 21600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 21601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 21602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 21605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 21815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 21816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 21817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 21818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 21819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 21820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 21821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 21822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 21823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 21824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 21825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 21826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 21827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 21828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 21829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 22026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 22027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 22028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 22029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 22030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 22031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 22032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 22033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 22034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 22035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 22036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 22037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 22038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 22039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 22040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 22245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 22246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 22247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 22248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 22249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 22250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 22251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 22252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 22253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 22254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 22255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 22256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 22257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 22258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 22443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 22444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 22445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 22446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 22447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 22448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 22449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 22450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 22451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 22452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 22453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 22454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 22455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 22456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 22664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 22665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 22666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 22667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 22668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 22669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 22670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 22671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 22672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 22673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 22676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 22877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 22878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 22879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 22880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 22881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 22882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 22883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 22884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 22885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 22886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 22887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 22888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 22889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 22890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 23097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 23098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 23099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 23100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 23101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 23102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 23103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 23104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 23105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 23106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 23107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 23108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 23109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 23110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 23111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 23302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 23303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 23304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 23305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 23306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 23307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 23308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 23309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 23310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 23311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 23312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 23313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 23314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 23315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 23316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 23524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 23525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 23526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 23527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 23528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 23529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 23530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 23531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 23532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 23533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 23534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 23535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 23536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 23537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 23538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 23730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 23731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 23732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 23733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 23734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 23735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 23736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 23737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 23738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 23739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 23740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 23741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 23742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 23743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 23744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.55s leader 5, trace 23867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 23953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 23954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 23955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 23956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 23957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 24159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 24160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 24161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 24162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 24163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 24164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 24165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 24166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 24167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 24168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 24169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 24170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 24171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 24172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 24173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 24372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 24373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 24374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 24375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 24376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 24377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 24378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 24379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 24380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 24381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 24382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 24383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 24384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 24385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 24386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 24583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 24584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 24585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 24586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 24587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 24588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 24589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 24590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 24591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 24592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 24593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 24594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 24595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 24596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 24597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 24810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 24811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 24812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 24813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 24814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 24815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 24816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 24817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 24818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 24819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 24820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 24821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 24822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 24823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 24824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 25004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 25005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 25006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 25007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 25008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 25009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 25010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 25011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 25012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 25013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 25014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 25015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 25016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 25017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 25018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 25222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 25223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 25224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 25225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 25226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 25227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 25228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 25229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 25230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 25231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 25232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 25233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 25234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 25235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 25236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 25440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 25441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 25442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 25443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 25444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 25445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 25446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 25447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 25448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 25449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 25450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 25451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 25452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 25453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 25454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 25663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 25664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 25665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 25666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 25667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 25668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 25669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 25670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 25671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 25672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 25673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 25674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 25675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 25676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 25677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 25857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 25858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 25859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 25860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 25861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 25862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 25863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 25864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 25865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 25866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 25867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 25868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 25869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 25870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 25871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Cole incapacitated
- 1: Ash incapacitated
- 1: Bren incapacitated
- 1: Vale incapacitated
- 1: Soren killed in action

## Outcome attribution

- 87.05s, evidence 1375: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 87.05s, evidence 10889: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.432387 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.053601212311145265, 'next_transition': 10900}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 87.05s, evidence 10890: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.432387 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.053601212311145265, 'next_transition': 10900}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 147.05s, evidence 2156: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15420}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 189.05s, evidence 2769: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18531}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 189.05s, evidence 18520: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.385238 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18531}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 189.05s, evidence 18521: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.385238 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18531}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
