# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/22/107/good-azure/battle-107-1789674140659259209`

## Battle summary

**Ember** · 360 s · 257 shots.

### Turning points

- 32.1s, squad 4: contact (events line 285). First recorded contact.
- 49.3s, squad 0: help call ([trace 6432](#trace-6432)). No completion observed before termination.
- 50.8s, squad 1: help answer ([trace 6718](#trace-6718)). 52.3s, squad 1: took cover and returned fire.
- 54.2s, squad 0: withdrawal ([trace 8129](#trace-8129)). 83.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 57.9s, squad 1: help call ([trace 8531](#trace-8531)). No completion observed before termination.
- 58.6s, squad 1: withdrawal ([trace 8591](#trace-8591)). 87.3s, squad 1: contact broken or rally reached: Occupy and report strength.
- 84.5s, squad 0: help answer ([trace 10330](#trace-10330)). 89.3s, squad 0: advanced tactically.
- 102.2s, squad 1: withdrawal ([trace 12568](#trace-12568)). No completion observed before termination.
- 103.2s, squad 0: withdrawal ([trace 12644](#trace-12644)). 174.4s, squad 0: advanced tactically.

### Squads

- **0** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; withdrew; 3 shots, 3/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 5 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 217 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 32 shots, 0/2 lost.

### Decisions and attribution

At 59.6s, squad 1 chose FightHere: nearest known group ([trace 8840](#trace-8840)), followed by 0 shots and 1 own casualties; estimate 12.7 against 10 distinct squad-reported contacts; At 52.3s, squad 1 chose took cover and returned fire ([trace 7791](#trace-7791)), followed by 2 shots and 0 own casualties; estimate 9.9 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149980133339429, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837586, 'next_transition': 827}.

### Communication

182 matched deliveries (mean 0.31s, max 2.00s); 515 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 32.10s, squad 4, contact, evidence events line 285: First recorded contact; .
- 49.30s, squad 0, help call, evidence 6432: NeedSupport; No completion observed before termination.
- 50.75s, squad 1, help answer, evidence 6718: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 52.3s, squad 1: took cover and returned fire.
- 54.15s, squad 0, withdrawal, evidence 8129: BreakContact: believed ratio at least two without superiority; 83.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 57.85s, squad 1, help call, evidence 8531: NeedSupport; No completion observed before termination.
- 58.60s, squad 1, withdrawal, evidence 8591: BreakContact: believed ratio at least two without superiority; 87.3s, squad 1: contact broken or rally reached: Occupy and report strength.
- 84.45s, squad 0, help answer, evidence 10330: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 89.3s, squad 0: advanced tactically.
- 102.25s, squad 1, withdrawal, evidence 12568: Withdraw to received rally; No completion observed before termination.
- 103.20s, squad 0, withdrawal, evidence 12644: Withdraw to received rally; 174.4s, squad 0: advanced tactically.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577881753963938, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577881753963938, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577881753963938, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102783, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102783, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528699943102783, 'next_transition': 87}.
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
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2299856292415265, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149980133339429, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837586, 'next_transition': 827}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149980133339429, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149980133339429, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837586, 'next_transition': 827}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837586, 'next_transition': 827}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-739"></a>
<a id="trace-741"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-951"></a>
<a id="trace-953"></a>
<a id="trace-985"></a>
<a id="trace-987"></a>
<a id="trace-1018"></a>
<a id="trace-1020"></a>
<a id="trace-1050"></a>
<a id="trace-1052"></a>
<a id="trace-1075"></a>
<a id="trace-1077"></a>
<a id="trace-1105"></a>
<a id="trace-1107"></a>
<a id="trace-1130"></a>
<a id="trace-1132"></a>
<a id="trace-1159"></a>
<a id="trace-1161"></a>
<a id="trace-1175"></a>
<a id="trace-1177"></a>
<a id="trace-1267"></a>
<a id="trace-1269"></a>
<a id="trace-1285"></a>
<a id="trace-1287"></a>
- 4.20s–10.70s (×28), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.915017264528859, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.86268294626592, 'next_transition': 1809}.
<a id="trace-955"></a>
<a id="trace-989"></a>
<a id="trace-1022"></a>
<a id="trace-1024"></a>
<a id="trace-1109"></a>
<a id="trace-1111"></a>
<a id="trace-1134"></a>
<a id="trace-1136"></a>
<a id="trace-1179"></a>
<a id="trace-1181"></a>
<a id="trace-1271"></a>
<a id="trace-1273"></a>
<a id="trace-1289"></a>
<a id="trace-1291"></a>
<a id="trace-1625"></a>
<a id="trace-1627"></a>
<a id="trace-1689"></a>
<a id="trace-1691"></a>
<a id="trace-1804"></a>
<a id="trace-1806"></a>
<a id="trace-1938"></a>
<a id="trace-1940"></a>
<a id="trace-2057"></a>
<a id="trace-2059"></a>
<a id="trace-2149"></a>
<a id="trace-2151"></a>
<a id="trace-2174"></a>
<a id="trace-2176"></a>
<a id="trace-2205"></a>
<a id="trace-2207"></a>
<a id="trace-2229"></a>
<a id="trace-2231"></a>
<a id="trace-2274"></a>
<a id="trace-2276"></a>
<a id="trace-2366"></a>
<a id="trace-2368"></a>
<a id="trace-2398"></a>
<a id="trace-2400"></a>
<a id="trace-2436"></a>
<a id="trace-2438"></a>
<a id="trace-2464"></a>
<a id="trace-2466"></a>
<a id="trace-2479"></a>
<a id="trace-2481"></a>
<a id="trace-2503"></a>
<a id="trace-2505"></a>
<a id="trace-2524"></a>
<a id="trace-2526"></a>
<a id="trace-2709"></a>
<a id="trace-2711"></a>
<a id="trace-2733"></a>
<a id="trace-2735"></a>
<a id="trace-2827"></a>
<a id="trace-2829"></a>
<a id="trace-2848"></a>
<a id="trace-2850"></a>
<a id="trace-2926"></a>
<a id="trace-2928"></a>
<a id="trace-2939"></a>
<a id="trace-2941"></a>
<a id="trace-2961"></a>
<a id="trace-2963"></a>
<a id="trace-2984"></a>
<a id="trace-2986"></a>
<a id="trace-3000"></a>
<a id="trace-3002"></a>
<a id="trace-3014"></a>
<a id="trace-3016"></a>
<a id="trace-3262"></a>
<a id="trace-3264"></a>
<a id="trace-3280"></a>
<a id="trace-3282"></a>
<a id="trace-3297"></a>
<a id="trace-3299"></a>
<a id="trace-3316"></a>
<a id="trace-3318"></a>
<a id="trace-3340"></a>
<a id="trace-3342"></a>
<a id="trace-3361"></a>
<a id="trace-3363"></a>
<a id="trace-3543"></a>
<a id="trace-3545"></a>
<a id="trace-3563"></a>
<a id="trace-3565"></a>
<a id="trace-3599"></a>
<a id="trace-3601"></a>
<a id="trace-3737"></a>
<a id="trace-3739"></a>
<a id="trace-3953"></a>
<a id="trace-3955"></a>
<a id="trace-3985"></a>
<a id="trace-3987"></a>
<a id="trace-4007"></a>
<a id="trace-4009"></a>
<a id="trace-4792"></a>
<a id="trace-4794"></a>
<a id="trace-5066"></a>
<a id="trace-5068"></a>
<a id="trace-5104"></a>
<a id="trace-5106"></a>
<a id="trace-5230"></a>
<a id="trace-5232"></a>
<a id="trace-5290"></a>
<a id="trace-5292"></a>
<a id="trace-5308"></a>
<a id="trace-5310"></a>
<a id="trace-5337"></a>
<a id="trace-5339"></a>
<a id="trace-5354"></a>
<a id="trace-5356"></a>
<a id="trace-5634"></a>
<a id="trace-5636"></a>
<a id="trace-5649"></a>
<a id="trace-5651"></a>
<a id="trace-5688"></a>
<a id="trace-5690"></a>
<a id="trace-5839"></a>
<a id="trace-5841"></a>
<a id="trace-5872"></a>
<a id="trace-5874"></a>
<a id="trace-5933"></a>
<a id="trace-5935"></a>
<a id="trace-5975"></a>
<a id="trace-5977"></a>
<a id="trace-6004"></a>
<a id="trace-6006"></a>
<a id="trace-6050"></a>
<a id="trace-6052"></a>
<a id="trace-6365"></a>
<a id="trace-6367"></a>
<a id="trace-6422"></a>
<a id="trace-6424"></a>
<a id="trace-6694"></a>
<a id="trace-6696"></a>
<a id="trace-6715"></a>
<a id="trace-6717"></a>
<a id="trace-7731"></a>
<a id="trace-7733"></a>
<a id="trace-7760"></a>
<a id="trace-7762"></a>
<a id="trace-7788"></a>
<a id="trace-7790"></a>
<a id="trace-8067"></a>
<a id="trace-8069"></a>
<a id="trace-8099"></a>
<a id="trace-8101"></a>
<a id="trace-8113"></a>
<a id="trace-8115"></a>
<a id="trace-8328"></a>
<a id="trace-8330"></a>
<a id="trace-8412"></a>
<a id="trace-8414"></a>
<a id="trace-8434"></a>
<a id="trace-8436"></a>
<a id="trace-8485"></a>
<a id="trace-8487"></a>
<a id="trace-8505"></a>
<a id="trace-8507"></a>
<a id="trace-8523"></a>
<a id="trace-8525"></a>
<a id="trace-8780"></a>
<a id="trace-8782"></a>
<a id="trace-8824"></a>
<a id="trace-8826"></a>
<a id="trace-8856"></a>
<a id="trace-8858"></a>
<a id="trace-9007"></a>
<a id="trace-9009"></a>
<a id="trace-9038"></a>
<a id="trace-9040"></a>
<a id="trace-9064"></a>
<a id="trace-9066"></a>
<a id="trace-9102"></a>
<a id="trace-9104"></a>
<a id="trace-9122"></a>
<a id="trace-9124"></a>
<a id="trace-9133"></a>
<a id="trace-9135"></a>
<a id="trace-9154"></a>
<a id="trace-9156"></a>
<a id="trace-9246"></a>
<a id="trace-9248"></a>
<a id="trace-9371"></a>
<a id="trace-9373"></a>
<a id="trace-9391"></a>
<a id="trace-9393"></a>
<a id="trace-9412"></a>
<a id="trace-9414"></a>
<a id="trace-9435"></a>
<a id="trace-9437"></a>
<a id="trace-9447"></a>
<a id="trace-9449"></a>
<a id="trace-9490"></a>
<a id="trace-9492"></a>
<a id="trace-9509"></a>
<a id="trace-9511"></a>
<a id="trace-9524"></a>
<a id="trace-9526"></a>
<a id="trace-9605"></a>
<a id="trace-9607"></a>
<a id="trace-9618"></a>
<a id="trace-9620"></a>
<a id="trace-9639"></a>
<a id="trace-9641"></a>
<a id="trace-9656"></a>
<a id="trace-9658"></a>
<a id="trace-9677"></a>
<a id="trace-9679"></a>
<a id="trace-9690"></a>
<a id="trace-9692"></a>
<a id="trace-9721"></a>
<a id="trace-9723"></a>
<a id="trace-9740"></a>
<a id="trace-9742"></a>
<a id="trace-9754"></a>
<a id="trace-9756"></a>
<a id="trace-9834"></a>
<a id="trace-9836"></a>
<a id="trace-9848"></a>
<a id="trace-9850"></a>
<a id="trace-9888"></a>
<a id="trace-9890"></a>
<a id="trace-9908"></a>
<a id="trace-9910"></a>
<a id="trace-9940"></a>
<a id="trace-9942"></a>
<a id="trace-9950"></a>
<a id="trace-9952"></a>
<a id="trace-10039"></a>
<a id="trace-10041"></a>
<a id="trace-10232"></a>
<a id="trace-10234"></a>
<a id="trace-10249"></a>
<a id="trace-10251"></a>
<a id="trace-10263"></a>
<a id="trace-10265"></a>
<a id="trace-10290"></a>
<a id="trace-10292"></a>
<a id="trace-10304"></a>
<a id="trace-10306"></a>
<a id="trace-11632"></a>
<a id="trace-11634"></a>
<a id="trace-11716"></a>
<a id="trace-11718"></a>
<a id="trace-11739"></a>
<a id="trace-11741"></a>
<a id="trace-11774"></a>
<a id="trace-11776"></a>
<a id="trace-11785"></a>
<a id="trace-11787"></a>
<a id="trace-11806"></a>
<a id="trace-11808"></a>
<a id="trace-11856"></a>
<a id="trace-11858"></a>
<a id="trace-11877"></a>
<a id="trace-11879"></a>
<a id="trace-12044"></a>
<a id="trace-12046"></a>
<a id="trace-12077"></a>
<a id="trace-12079"></a>
<a id="trace-12089"></a>
<a id="trace-12091"></a>
<a id="trace-12114"></a>
<a id="trace-12116"></a>
<a id="trace-12136"></a>
<a id="trace-12138"></a>
<a id="trace-12157"></a>
<a id="trace-12159"></a>
<a id="trace-12166"></a>
<a id="trace-12168"></a>
<a id="trace-12183"></a>
<a id="trace-12185"></a>
<a id="trace-12196"></a>
<a id="trace-12198"></a>
<a id="trace-12282"></a>
<a id="trace-12284"></a>
<a id="trace-12305"></a>
<a id="trace-12307"></a>
<a id="trace-12322"></a>
<a id="trace-12324"></a>
<a id="trace-12341"></a>
<a id="trace-12343"></a>
<a id="trace-12354"></a>
<a id="trace-12356"></a>
<a id="trace-12377"></a>
<a id="trace-12379"></a>
<a id="trace-12389"></a>
<a id="trace-12391"></a>
<a id="trace-12410"></a>
<a id="trace-12412"></a>
<a id="trace-12422"></a>
<a id="trace-12424"></a>
<a id="trace-12512"></a>
<a id="trace-12514"></a>
<a id="trace-12638"></a>
<a id="trace-12640"></a>
<a id="trace-12709"></a>
<a id="trace-12711"></a>
<a id="trace-12726"></a>
<a id="trace-12728"></a>
<a id="trace-12754"></a>
<a id="trace-12756"></a>
<a id="trace-12877"></a>
<a id="trace-12879"></a>
<a id="trace-12903"></a>
<a id="trace-12905"></a>
<a id="trace-12916"></a>
<a id="trace-12918"></a>
<a id="trace-12932"></a>
<a id="trace-12934"></a>
<a id="trace-12946"></a>
<a id="trace-12948"></a>
<a id="trace-12965"></a>
<a id="trace-12967"></a>
<a id="trace-12980"></a>
<a id="trace-12982"></a>
<a id="trace-13000"></a>
<a id="trace-13002"></a>
<a id="trace-13019"></a>
<a id="trace-13021"></a>
<a id="trace-13146"></a>
<a id="trace-13148"></a>
<a id="trace-13168"></a>
<a id="trace-13170"></a>
<a id="trace-13182"></a>
<a id="trace-13184"></a>
<a id="trace-13201"></a>
<a id="trace-13203"></a>
<a id="trace-13223"></a>
<a id="trace-13225"></a>
<a id="trace-13244"></a>
<a id="trace-13246"></a>
<a id="trace-13339"></a>
<a id="trace-13341"></a>
<a id="trace-13380"></a>
<a id="trace-13382"></a>
<a id="trace-13398"></a>
<a id="trace-13400"></a>
<a id="trace-13414"></a>
<a id="trace-13416"></a>
<a id="trace-13436"></a>
<a id="trace-13438"></a>
<a id="trace-13450"></a>
<a id="trace-13452"></a>
<a id="trace-13466"></a>
<a id="trace-13468"></a>
<a id="trace-13480"></a>
<a id="trace-13482"></a>
<a id="trace-13556"></a>
<a id="trace-13558"></a>
<a id="trace-13565"></a>
<a id="trace-13567"></a>
<a id="trace-13586"></a>
<a id="trace-13588"></a>
<a id="trace-13600"></a>
<a id="trace-13602"></a>
<a id="trace-13614"></a>
<a id="trace-13616"></a>
<a id="trace-13629"></a>
<a id="trace-13631"></a>
<a id="trace-13639"></a>
<a id="trace-13641"></a>
<a id="trace-13653"></a>
<a id="trace-13655"></a>
<a id="trace-13667"></a>
<a id="trace-13669"></a>
<a id="trace-13746"></a>
<a id="trace-13748"></a>
<a id="trace-13762"></a>
<a id="trace-13764"></a>
<a id="trace-13775"></a>
<a id="trace-13777"></a>
<a id="trace-13785"></a>
<a id="trace-13787"></a>
<a id="trace-13798"></a>
<a id="trace-13800"></a>
<a id="trace-13824"></a>
<a id="trace-13826"></a>
<a id="trace-13850"></a>
<a id="trace-13852"></a>
<a id="trace-13862"></a>
<a id="trace-13864"></a>
<a id="trace-13936"></a>
<a id="trace-13938"></a>
<a id="trace-13947"></a>
<a id="trace-13949"></a>
<a id="trace-13960"></a>
<a id="trace-13962"></a>
<a id="trace-13971"></a>
<a id="trace-13973"></a>
<a id="trace-13992"></a>
<a id="trace-13994"></a>
<a id="trace-14004"></a>
<a id="trace-14006"></a>
<a id="trace-14020"></a>
<a id="trace-14022"></a>
<a id="trace-14029"></a>
<a id="trace-14031"></a>
<a id="trace-14044"></a>
<a id="trace-14046"></a>
<a id="trace-14134"></a>
<a id="trace-14136"></a>
<a id="trace-14176"></a>
<a id="trace-14178"></a>
<a id="trace-14186"></a>
<a id="trace-14188"></a>
<a id="trace-14230"></a>
<a id="trace-14232"></a>
<a id="trace-14243"></a>
<a id="trace-14245"></a>
<a id="trace-14329"></a>
<a id="trace-14331"></a>
<a id="trace-14353"></a>
<a id="trace-14355"></a>
<a id="trace-14369"></a>
<a id="trace-14371"></a>
<a id="trace-14379"></a>
<a id="trace-14381"></a>
<a id="trace-14393"></a>
<a id="trace-14395"></a>
<a id="trace-14416"></a>
<a id="trace-14418"></a>
<a id="trace-14430"></a>
<a id="trace-14432"></a>
<a id="trace-14509"></a>
<a id="trace-14511"></a>
<a id="trace-14518"></a>
<a id="trace-14520"></a>
<a id="trace-14532"></a>
<a id="trace-14534"></a>
<a id="trace-14544"></a>
<a id="trace-14546"></a>
<a id="trace-14560"></a>
<a id="trace-14562"></a>
<a id="trace-14588"></a>
<a id="trace-14590"></a>
<a id="trace-14597"></a>
<a id="trace-14599"></a>
<a id="trace-14615"></a>
<a id="trace-14617"></a>
<a id="trace-14627"></a>
<a id="trace-14629"></a>
<a id="trace-14703"></a>
<a id="trace-14705"></a>
<a id="trace-14723"></a>
<a id="trace-14725"></a>
<a id="trace-14733"></a>
<a id="trace-14735"></a>
<a id="trace-14749"></a>
<a id="trace-14751"></a>
<a id="trace-14760"></a>
<a id="trace-14762"></a>
<a id="trace-14786"></a>
<a id="trace-14788"></a>
<a id="trace-14815"></a>
<a id="trace-14817"></a>
<a id="trace-14891"></a>
<a id="trace-14893"></a>
<a id="trace-14907"></a>
<a id="trace-14909"></a>
<a id="trace-14919"></a>
<a id="trace-14921"></a>
<a id="trace-14928"></a>
<a id="trace-14930"></a>
<a id="trace-14942"></a>
<a id="trace-14944"></a>
<a id="trace-14952"></a>
<a id="trace-14954"></a>
<a id="trace-14969"></a>
<a id="trace-14971"></a>
<a id="trace-14982"></a>
<a id="trace-14984"></a>
<a id="trace-14995"></a>
<a id="trace-14997"></a>
<a id="trace-15084"></a>
<a id="trace-15086"></a>
<a id="trace-15095"></a>
<a id="trace-15097"></a>
<a id="trace-15112"></a>
<a id="trace-15114"></a>
<a id="trace-15126"></a>
<a id="trace-15128"></a>
<a id="trace-15145"></a>
<a id="trace-15147"></a>
<a id="trace-15156"></a>
<a id="trace-15158"></a>
<a id="trace-15170"></a>
<a id="trace-15172"></a>
<a id="trace-15181"></a>
<a id="trace-15183"></a>
<a id="trace-15194"></a>
<a id="trace-15196"></a>
<a id="trace-15208"></a>
<a id="trace-15210"></a>
<a id="trace-15287"></a>
<a id="trace-15289"></a>
<a id="trace-15305"></a>
<a id="trace-15307"></a>
<a id="trace-15315"></a>
<a id="trace-15317"></a>
<a id="trace-15342"></a>
<a id="trace-15344"></a>
<a id="trace-15359"></a>
<a id="trace-15361"></a>
<a id="trace-15375"></a>
<a id="trace-15377"></a>
<a id="trace-15391"></a>
<a id="trace-15393"></a>
<a id="trace-15403"></a>
<a id="trace-15405"></a>
<a id="trace-15480"></a>
<a id="trace-15482"></a>
<a id="trace-15488"></a>
<a id="trace-15490"></a>
<a id="trace-15502"></a>
<a id="trace-15504"></a>
<a id="trace-15515"></a>
<a id="trace-15517"></a>
<a id="trace-15527"></a>
<a id="trace-15529"></a>
<a id="trace-15538"></a>
<a id="trace-15540"></a>
<a id="trace-15552"></a>
<a id="trace-15554"></a>
<a id="trace-15563"></a>
<a id="trace-15565"></a>
<a id="trace-15581"></a>
<a id="trace-15583"></a>
<a id="trace-15755"></a>
<a id="trace-15757"></a>
<a id="trace-15855"></a>
<a id="trace-15857"></a>
<a id="trace-15875"></a>
<a id="trace-15877"></a>
<a id="trace-15899"></a>
<a id="trace-15901"></a>
<a id="trace-15920"></a>
<a id="trace-15922"></a>
<a id="trace-15933"></a>
<a id="trace-15935"></a>
<a id="trace-15966"></a>
<a id="trace-15968"></a>
<a id="trace-15992"></a>
<a id="trace-15994"></a>
<a id="trace-16074"></a>
<a id="trace-16076"></a>
<a id="trace-16096"></a>
<a id="trace-16098"></a>
<a id="trace-16112"></a>
<a id="trace-16114"></a>
<a id="trace-16306"></a>
<a id="trace-16308"></a>
<a id="trace-16324"></a>
<a id="trace-16326"></a>
<a id="trace-16345"></a>
<a id="trace-16347"></a>
<a id="trace-16359"></a>
<a id="trace-16361"></a>
<a id="trace-16383"></a>
<a id="trace-16385"></a>
<a id="trace-16393"></a>
<a id="trace-16395"></a>
<a id="trace-16474"></a>
<a id="trace-16476"></a>
<a id="trace-16485"></a>
<a id="trace-16487"></a>
<a id="trace-16499"></a>
<a id="trace-16501"></a>
<a id="trace-16509"></a>
<a id="trace-16511"></a>
<a id="trace-16525"></a>
<a id="trace-16527"></a>
<a id="trace-16537"></a>
<a id="trace-16539"></a>
<a id="trace-16560"></a>
<a id="trace-16562"></a>
<a id="trace-16596"></a>
<a id="trace-16598"></a>
<a id="trace-16608"></a>
<a id="trace-16610"></a>
<a id="trace-16692"></a>
<a id="trace-16694"></a>
<a id="trace-16702"></a>
<a id="trace-16704"></a>
<a id="trace-16717"></a>
<a id="trace-16719"></a>
<a id="trace-16730"></a>
<a id="trace-16732"></a>
<a id="trace-16746"></a>
<a id="trace-16748"></a>
<a id="trace-16766"></a>
<a id="trace-16768"></a>
<a id="trace-16780"></a>
<a id="trace-16782"></a>
<a id="trace-16792"></a>
<a id="trace-16794"></a>
<a id="trace-16812"></a>
<a id="trace-16814"></a>
<a id="trace-16823"></a>
<a id="trace-16825"></a>
<a id="trace-16905"></a>
<a id="trace-16907"></a>
<a id="trace-16918"></a>
<a id="trace-16920"></a>
<a id="trace-16936"></a>
<a id="trace-16938"></a>
<a id="trace-16967"></a>
<a id="trace-16969"></a>
<a id="trace-16985"></a>
<a id="trace-16987"></a>
<a id="trace-17031"></a>
<a id="trace-17033"></a>
<a id="trace-17040"></a>
<a id="trace-17042"></a>
<a id="trace-17124"></a>
<a id="trace-17126"></a>
<a id="trace-17140"></a>
<a id="trace-17142"></a>
<a id="trace-17154"></a>
<a id="trace-17156"></a>
<a id="trace-17174"></a>
<a id="trace-17176"></a>
<a id="trace-17192"></a>
<a id="trace-17194"></a>
<a id="trace-17201"></a>
<a id="trace-17203"></a>
<a id="trace-17220"></a>
<a id="trace-17222"></a>
<a id="trace-17231"></a>
<a id="trace-17233"></a>
<a id="trace-17250"></a>
<a id="trace-17252"></a>
<a id="trace-17339"></a>
<a id="trace-17341"></a>
<a id="trace-17347"></a>
<a id="trace-17349"></a>
<a id="trace-17359"></a>
<a id="trace-17361"></a>
<a id="trace-17372"></a>
<a id="trace-17374"></a>
<a id="trace-17416"></a>
<a id="trace-17418"></a>
<a id="trace-17427"></a>
<a id="trace-17429"></a>
<a id="trace-17443"></a>
<a id="trace-17445"></a>
<a id="trace-17458"></a>
<a id="trace-17460"></a>
<a id="trace-17533"></a>
<a id="trace-17535"></a>
<a id="trace-17544"></a>
<a id="trace-17546"></a>
<a id="trace-17563"></a>
<a id="trace-17565"></a>
<a id="trace-17574"></a>
<a id="trace-17576"></a>
<a id="trace-17590"></a>
<a id="trace-17592"></a>
<a id="trace-17613"></a>
<a id="trace-17615"></a>
<a id="trace-17623"></a>
<a id="trace-17625"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17649"></a>
<a id="trace-17651"></a>
<a id="trace-17727"></a>
<a id="trace-17729"></a>
<a id="trace-17751"></a>
<a id="trace-17753"></a>
<a id="trace-17762"></a>
<a id="trace-17764"></a>
<a id="trace-17778"></a>
<a id="trace-17780"></a>
<a id="trace-17803"></a>
<a id="trace-17805"></a>
<a id="trace-17818"></a>
<a id="trace-17820"></a>
<a id="trace-17834"></a>
<a id="trace-17836"></a>
<a id="trace-17844"></a>
<a id="trace-17846"></a>
<a id="trace-17920"></a>
<a id="trace-17922"></a>
<a id="trace-17943"></a>
<a id="trace-17945"></a>
<a id="trace-17968"></a>
<a id="trace-17970"></a>
<a id="trace-17979"></a>
<a id="trace-17981"></a>
<a id="trace-18006"></a>
<a id="trace-18008"></a>
<a id="trace-18035"></a>
<a id="trace-18037"></a>
<a id="trace-18111"></a>
<a id="trace-18113"></a>
<a id="trace-18121"></a>
<a id="trace-18123"></a>
<a id="trace-18157"></a>
<a id="trace-18159"></a>
<a id="trace-18167"></a>
<a id="trace-18169"></a>
<a id="trace-18187"></a>
<a id="trace-18189"></a>
<a id="trace-18195"></a>
<a id="trace-18197"></a>
<a id="trace-18209"></a>
<a id="trace-18211"></a>
<a id="trace-18221"></a>
<a id="trace-18223"></a>
<a id="trace-18307"></a>
<a id="trace-18309"></a>
<a id="trace-18323"></a>
<a id="trace-18325"></a>
<a id="trace-18336"></a>
<a id="trace-18338"></a>
<a id="trace-18350"></a>
<a id="trace-18352"></a>
<a id="trace-18358"></a>
<a id="trace-18360"></a>
<a id="trace-18377"></a>
<a id="trace-18379"></a>
<a id="trace-18404"></a>
<a id="trace-18406"></a>
<a id="trace-18417"></a>
<a id="trace-18419"></a>
<a id="trace-18491"></a>
<a id="trace-18493"></a>
<a id="trace-18500"></a>
<a id="trace-18502"></a>
<a id="trace-18514"></a>
<a id="trace-18516"></a>
<a id="trace-18525"></a>
<a id="trace-18527"></a>
<a id="trace-18543"></a>
<a id="trace-18545"></a>
<a id="trace-18555"></a>
<a id="trace-18557"></a>
<a id="trace-18571"></a>
<a id="trace-18573"></a>
<a id="trace-18581"></a>
<a id="trace-18583"></a>
<a id="trace-18598"></a>
<a id="trace-18600"></a>
<a id="trace-18686"></a>
<a id="trace-18688"></a>
<a id="trace-18698"></a>
<a id="trace-18700"></a>
<a id="trace-18715"></a>
<a id="trace-18717"></a>
<a id="trace-18726"></a>
<a id="trace-18728"></a>
<a id="trace-18760"></a>
<a id="trace-18762"></a>
<a id="trace-18775"></a>
<a id="trace-18777"></a>
<a id="trace-18794"></a>
<a id="trace-18796"></a>
<a id="trace-18804"></a>
<a id="trace-18806"></a>
<a id="trace-18878"></a>
<a id="trace-18880"></a>
<a id="trace-18887"></a>
<a id="trace-18889"></a>
<a id="trace-18904"></a>
<a id="trace-18906"></a>
<a id="trace-18916"></a>
<a id="trace-18918"></a>
<a id="trace-18931"></a>
<a id="trace-18933"></a>
<a id="trace-18939"></a>
<a id="trace-18941"></a>
<a id="trace-18961"></a>
<a id="trace-18963"></a>
<a id="trace-18971"></a>
<a id="trace-18973"></a>
<a id="trace-18995"></a>
<a id="trace-18997"></a>
<a id="trace-19071"></a>
<a id="trace-19073"></a>
<a id="trace-19080"></a>
<a id="trace-19082"></a>
<a id="trace-19109"></a>
<a id="trace-19111"></a>
<a id="trace-19121"></a>
<a id="trace-19123"></a>
<a id="trace-19130"></a>
<a id="trace-19132"></a>
<a id="trace-19158"></a>
<a id="trace-19160"></a>
<a id="trace-19175"></a>
<a id="trace-19177"></a>
<a id="trace-19263"></a>
<a id="trace-19265"></a>
<a id="trace-19272"></a>
<a id="trace-19274"></a>
<a id="trace-19286"></a>
<a id="trace-19288"></a>
<a id="trace-19298"></a>
<a id="trace-19300"></a>
<a id="trace-19312"></a>
<a id="trace-19314"></a>
<a id="trace-19349"></a>
<a id="trace-19351"></a>
<a id="trace-19373"></a>
<a id="trace-19375"></a>
<a id="trace-19447"></a>
<a id="trace-19449"></a>
<a id="trace-19462"></a>
<a id="trace-19464"></a>
<a id="trace-19488"></a>
<a id="trace-19490"></a>
<a id="trace-19511"></a>
<a id="trace-19513"></a>
<a id="trace-19527"></a>
<a id="trace-19529"></a>
<a id="trace-19539"></a>
<a id="trace-19541"></a>
<a id="trace-19567"></a>
<a id="trace-19569"></a>
<a id="trace-19642"></a>
<a id="trace-19644"></a>
<a id="trace-19673"></a>
<a id="trace-19675"></a>
<a id="trace-19689"></a>
<a id="trace-19691"></a>
<a id="trace-19724"></a>
<a id="trace-19726"></a>
<a id="trace-19741"></a>
<a id="trace-19743"></a>
<a id="trace-19752"></a>
<a id="trace-19754"></a>
<a id="trace-19830"></a>
<a id="trace-19832"></a>
<a id="trace-19842"></a>
<a id="trace-19844"></a>
<a id="trace-19864"></a>
<a id="trace-19866"></a>
<a id="trace-19878"></a>
<a id="trace-19880"></a>
<a id="trace-19903"></a>
<a id="trace-19905"></a>
<a id="trace-19934"></a>
<a id="trace-19936"></a>
<a id="trace-20017"></a>
<a id="trace-20019"></a>
<a id="trace-20027"></a>
<a id="trace-20029"></a>
<a id="trace-20053"></a>
<a id="trace-20055"></a>
<a id="trace-20070"></a>
<a id="trace-20072"></a>
<a id="trace-20079"></a>
<a id="trace-20081"></a>
<a id="trace-20102"></a>
<a id="trace-20104"></a>
<a id="trace-20129"></a>
<a id="trace-20131"></a>
<a id="trace-20212"></a>
<a id="trace-20214"></a>
<a id="trace-20228"></a>
<a id="trace-20230"></a>
<a id="trace-20243"></a>
<a id="trace-20245"></a>
<a id="trace-20260"></a>
<a id="trace-20262"></a>
<a id="trace-20284"></a>
<a id="trace-20286"></a>
<a id="trace-20314"></a>
<a id="trace-20316"></a>
<a id="trace-20323"></a>
<a id="trace-20325"></a>
<a id="trace-20397"></a>
<a id="trace-20399"></a>
<a id="trace-20421"></a>
<a id="trace-20423"></a>
<a id="trace-20445"></a>
<a id="trace-20447"></a>
<a id="trace-20458"></a>
<a id="trace-20460"></a>
<a id="trace-20475"></a>
<a id="trace-20477"></a>
<a id="trace-20486"></a>
<a id="trace-20488"></a>
<a id="trace-20503"></a>
<a id="trace-20505"></a>
<a id="trace-20512"></a>
<a id="trace-20514"></a>
<a id="trace-20588"></a>
<a id="trace-20590"></a>
<a id="trace-20601"></a>
<a id="trace-20603"></a>
<a id="trace-20616"></a>
<a id="trace-20618"></a>
<a id="trace-20628"></a>
<a id="trace-20630"></a>
<a id="trace-20640"></a>
<a id="trace-20642"></a>
<a id="trace-20651"></a>
<a id="trace-20653"></a>
<a id="trace-20668"></a>
<a id="trace-20670"></a>
<a id="trace-20682"></a>
<a id="trace-20684"></a>
<a id="trace-20698"></a>
<a id="trace-20700"></a>
<a id="trace-20708"></a>
<a id="trace-20710"></a>
<a id="trace-20784"></a>
<a id="trace-20786"></a>
<a id="trace-20805"></a>
<a id="trace-20807"></a>
<a id="trace-20819"></a>
<a id="trace-20821"></a>
<a id="trace-20835"></a>
<a id="trace-20837"></a>
<a id="trace-20844"></a>
<a id="trace-20846"></a>
<a id="trace-20861"></a>
<a id="trace-20863"></a>
<a id="trace-20873"></a>
<a id="trace-20875"></a>
<a id="trace-20889"></a>
<a id="trace-20891"></a>
<a id="trace-20978"></a>
<a id="trace-20980"></a>
<a id="trace-21025"></a>
<a id="trace-21027"></a>
<a id="trace-21037"></a>
<a id="trace-21039"></a>
<a id="trace-21054"></a>
<a id="trace-21056"></a>
<a id="trace-21081"></a>
<a id="trace-21083"></a>
<a id="trace-21090"></a>
<a id="trace-21092"></a>
<a id="trace-21165"></a>
<a id="trace-21167"></a>
<a id="trace-21188"></a>
<a id="trace-21190"></a>
<a id="trace-21204"></a>
<a id="trace-21206"></a>
<a id="trace-21222"></a>
<a id="trace-21224"></a>
<a id="trace-21231"></a>
<a id="trace-21233"></a>
<a id="trace-21271"></a>
<a id="trace-21273"></a>
<a id="trace-21283"></a>
<a id="trace-21285"></a>
<a id="trace-21366"></a>
<a id="trace-21368"></a>
<a id="trace-21379"></a>
<a id="trace-21381"></a>
<a id="trace-21390"></a>
<a id="trace-21392"></a>
<a id="trace-21415"></a>
<a id="trace-21417"></a>
<a id="trace-21433"></a>
<a id="trace-21435"></a>
<a id="trace-21444"></a>
<a id="trace-21446"></a>
<a id="trace-21464"></a>
<a id="trace-21466"></a>
<a id="trace-21475"></a>
<a id="trace-21477"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
<a id="trace-21559"></a>
<a id="trace-21561"></a>
<a id="trace-21575"></a>
<a id="trace-21577"></a>
<a id="trace-21586"></a>
<a id="trace-21588"></a>
<a id="trace-21604"></a>
<a id="trace-21606"></a>
<a id="trace-21628"></a>
<a id="trace-21630"></a>
<a id="trace-21661"></a>
<a id="trace-21663"></a>
<a id="trace-21739"></a>
<a id="trace-21741"></a>
<a id="trace-21751"></a>
<a id="trace-21753"></a>
<a id="trace-21767"></a>
<a id="trace-21769"></a>
<a id="trace-21778"></a>
<a id="trace-21780"></a>
<a id="trace-21799"></a>
<a id="trace-21801"></a>
<a id="trace-21817"></a>
<a id="trace-21819"></a>
<a id="trace-21835"></a>
<a id="trace-21837"></a>
<a id="trace-21856"></a>
<a id="trace-21858"></a>
<a id="trace-21938"></a>
<a id="trace-21940"></a>
<a id="trace-21979"></a>
<a id="trace-21981"></a>
<a id="trace-21991"></a>
<a id="trace-21993"></a>
<a id="trace-22008"></a>
<a id="trace-22010"></a>
<a id="trace-22021"></a>
<a id="trace-22023"></a>
<a id="trace-22045"></a>
<a id="trace-22047"></a>
<a id="trace-22124"></a>
<a id="trace-22126"></a>
<a id="trace-22133"></a>
<a id="trace-22135"></a>
<a id="trace-22154"></a>
<a id="trace-22156"></a>
<a id="trace-22168"></a>
<a id="trace-22170"></a>
<a id="trace-22177"></a>
<a id="trace-22179"></a>
<a id="trace-22196"></a>
<a id="trace-22198"></a>
<a id="trace-22211"></a>
<a id="trace-22213"></a>
<a id="trace-22229"></a>
<a id="trace-22231"></a>
<a id="trace-22315"></a>
<a id="trace-22317"></a>
<a id="trace-22337"></a>
<a id="trace-22339"></a>
<a id="trace-22353"></a>
<a id="trace-22355"></a>
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22399"></a>
<a id="trace-22401"></a>
<a id="trace-22414"></a>
<a id="trace-22416"></a>
<a id="trace-22501"></a>
<a id="trace-22503"></a>
<a id="trace-22510"></a>
<a id="trace-22512"></a>
<a id="trace-22523"></a>
<a id="trace-22525"></a>
<a id="trace-22538"></a>
<a id="trace-22540"></a>
<a id="trace-22557"></a>
<a id="trace-22559"></a>
<a id="trace-22585"></a>
<a id="trace-22587"></a>
<a id="trace-22595"></a>
<a id="trace-22597"></a>
<a id="trace-22610"></a>
<a id="trace-22612"></a>
<a id="trace-22623"></a>
<a id="trace-22625"></a>
<a id="trace-22698"></a>
<a id="trace-22700"></a>
<a id="trace-22718"></a>
<a id="trace-22720"></a>
<a id="trace-22729"></a>
<a id="trace-22731"></a>
<a id="trace-22753"></a>
<a id="trace-22755"></a>
<a id="trace-22771"></a>
<a id="trace-22773"></a>
<a id="trace-22803"></a>
<a id="trace-22805"></a>
<a id="trace-22813"></a>
<a id="trace-22815"></a>
<a id="trace-22892"></a>
<a id="trace-22894"></a>
<a id="trace-22901"></a>
<a id="trace-22903"></a>
<a id="trace-22915"></a>
<a id="trace-22917"></a>
<a id="trace-22927"></a>
<a id="trace-22929"></a>
<a id="trace-22941"></a>
<a id="trace-22943"></a>
<a id="trace-22949"></a>
<a id="trace-22951"></a>
<a id="trace-22966"></a>
<a id="trace-22968"></a>
<a id="trace-22994"></a>
<a id="trace-22996"></a>
<a id="trace-23078"></a>
<a id="trace-23080"></a>
<a id="trace-23087"></a>
<a id="trace-23089"></a>
<a id="trace-23106"></a>
<a id="trace-23108"></a>
<a id="trace-23155"></a>
<a id="trace-23157"></a>
<a id="trace-23167"></a>
<a id="trace-23169"></a>
<a id="trace-23182"></a>
<a id="trace-23184"></a>
<a id="trace-23195"></a>
<a id="trace-23197"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 955): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362514587421897, 'next_transition': 989}.
<a id="trace-1300"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1300): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1188. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787567941685801, 'next_transition': 1621}.
<a id="trace-1621"></a>
<a id="trace-1623"></a>
<a id="trace-1651"></a>
<a id="trace-1653"></a>
<a id="trace-1685"></a>
<a id="trace-1687"></a>
<a id="trace-1711"></a>
<a id="trace-1713"></a>
<a id="trace-1740"></a>
<a id="trace-1742"></a>
<a id="trace-1766"></a>
<a id="trace-1768"></a>
<a id="trace-1800"></a>
<a id="trace-1802"></a>
<a id="trace-1934"></a>
<a id="trace-1936"></a>
<a id="trace-2023"></a>
<a id="trace-2025"></a>
<a id="trace-2053"></a>
<a id="trace-2055"></a>
<a id="trace-2089"></a>
<a id="trace-2091"></a>
<a id="trace-2123"></a>
<a id="trace-2125"></a>
<a id="trace-2145"></a>
<a id="trace-2147"></a>
<a id="trace-2170"></a>
<a id="trace-2172"></a>
<a id="trace-2201"></a>
<a id="trace-2203"></a>
<a id="trace-2225"></a>
<a id="trace-2227"></a>
<a id="trace-2253"></a>
<a id="trace-2255"></a>
<a id="trace-2270"></a>
<a id="trace-2272"></a>
<a id="trace-2362"></a>
<a id="trace-2364"></a>
<a id="trace-2394"></a>
<a id="trace-2396"></a>
<a id="trace-2414"></a>
<a id="trace-2416"></a>
<a id="trace-2432"></a>
<a id="trace-2434"></a>
<a id="trace-2460"></a>
<a id="trace-2462"></a>
<a id="trace-2475"></a>
<a id="trace-2477"></a>
<a id="trace-2499"></a>
<a id="trace-2501"></a>
<a id="trace-2520"></a>
<a id="trace-2522"></a>
- 11.20s–23.75s (×52), actor 5, squad 0 (trace 1621): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1193. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5456354853170088, 'next_transition': 1651}.
<a id="trace-1809"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1809): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1196. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.000011597934247, 'next_transition': 2716}.
<a id="trace-2535"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 2535): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2284. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2705}.
<a id="trace-2536"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 2536): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2284. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2705}.
<a id="trace-2705"></a>
<a id="trace-2707"></a>
<a id="trace-2729"></a>
<a id="trace-2731"></a>
<a id="trace-2823"></a>
<a id="trace-2825"></a>
<a id="trace-2844"></a>
<a id="trace-2846"></a>
<a id="trace-2871"></a>
<a id="trace-2873"></a>
<a id="trace-2900"></a>
<a id="trace-2902"></a>
<a id="trace-2922"></a>
<a id="trace-2924"></a>
<a id="trace-2935"></a>
<a id="trace-2937"></a>
<a id="trace-2957"></a>
<a id="trace-2959"></a>
<a id="trace-2980"></a>
<a id="trace-2982"></a>
<a id="trace-2996"></a>
<a id="trace-2998"></a>
<a id="trace-3010"></a>
<a id="trace-3012"></a>
<a id="trace-3258"></a>
<a id="trace-3260"></a>
<a id="trace-3276"></a>
<a id="trace-3278"></a>
<a id="trace-3293"></a>
<a id="trace-3295"></a>
<a id="trace-3312"></a>
<a id="trace-3314"></a>
<a id="trace-3336"></a>
<a id="trace-3338"></a>
<a id="trace-3357"></a>
<a id="trace-3359"></a>
- 24.25s–32.75s (×36), actor 5, squad 0 (trace 2705): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2289. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2729}.
<a id="trace-2716"></a>
- 24.60s–24.60s (×1), actor 8, squad 1 (trace 2716): matching received arrivals: deployment leg complete. Knowledge: actor memory at 20.00s, trace 2292. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 258}.
<a id="trace-258"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (events line 258): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2967"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 2967): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 2967. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3017}.
<a id="trace-2968"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 2968): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 2968. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3017}.
<a id="trace-3017"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3017): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 2751. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4025}.
<a id="trace-3020"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3020): MoveTactically. Knowledge: actor memory at 25.00s, trace 2751. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4025}.
<a id="trace-3021"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3021): traveling overwatch. Knowledge: actor memory at 25.00s, trace 2751. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4025}.
<a id="trace-3022"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3022): Reorganise complete. Knowledge: actor memory at 25.00s, trace 2751. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4025}.
<a id="trace-3366"></a>
- 32.90s–32.90s (×1), actor 0, squad 0 (trace 3366): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3172. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2976103212897606, 'next_transition': 3539}.
<a id="trace-3539"></a>
<a id="trace-3541"></a>
<a id="trace-3559"></a>
<a id="trace-3561"></a>
<a id="trace-3595"></a>
<a id="trace-3597"></a>
<a id="trace-3622"></a>
<a id="trace-3624"></a>
<a id="trace-3709"></a>
<a id="trace-3711"></a>
<a id="trace-3733"></a>
<a id="trace-3735"></a>
- 33.25s–35.75s (×12), actor 5, squad 0 (trace 3539): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3177. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3559}.
<a id="trace-3752"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 3752): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3630. Next observer evidence: None.
<a id="trace-3753"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 3753): bounding overwatch. Knowledge: actor memory at 35.00s, trace 3630. Next observer evidence: None.
<a id="trace-3754"></a>
- 36.20s–36.20s (×1), actor 0, squad 0 (trace 3754): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3630. Next observer evidence: None.
<a id="trace-3949"></a>
<a id="trace-3951"></a>
<a id="trace-3981"></a>
<a id="trace-3983"></a>
<a id="trace-4003"></a>
<a id="trace-4005"></a>
<a id="trace-4019"></a>
<a id="trace-4021"></a>
<a id="trace-4788"></a>
<a id="trace-4790"></a>
<a id="trace-5062"></a>
<a id="trace-5064"></a>
<a id="trace-5100"></a>
<a id="trace-5102"></a>
<a id="trace-5121"></a>
<a id="trace-5123"></a>
<a id="trace-5226"></a>
<a id="trace-5228"></a>
- 36.25s–40.25s (×18), actor 5, squad 0 (trace 3949): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3635. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3440799688489984, 'next_transition': 3981}.
<a id="trace-4025"></a>
- 37.80s–37.80s (×1), actor 8, squad 1 (trace 4025): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3638. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1852501686908813, 'next_transition': 4281}.
<a id="trace-4026"></a>
- 37.80s–37.80s (×1), actor 8, squad 1 (trace 4026): bounding overwatch. Knowledge: actor memory at 35.00s, trace 3638. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1852501686908813, 'next_transition': 4281}.
<a id="trace-4027"></a>
<a id="trace-4281"></a>
<a id="trace-4530"></a>
<a id="trace-4795"></a>
- 37.80s–38.25s (×4), actor 8, squad 1 (trace 4027): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3638. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1852501686908813, 'next_transition': 4281}.
<a id="trace-5248"></a>
- 40.60s–40.60s (×1), actor 1, squad 0 (trace 5248): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 5132. Next observer evidence: None.
<a id="trace-5269"></a>
<a id="trace-5271"></a>
<a id="trace-5286"></a>
<a id="trace-5288"></a>
<a id="trace-5304"></a>
<a id="trace-5306"></a>
- 40.75s–41.75s (×6), actor 5, squad 0 (trace 5269): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5136. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8734806396440729, 'next_transition': 5286}.
<a id="trace-5300"></a>
- 41.60s–41.60s (×1), actor 8, squad 1 (trace 5300): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 5139. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 437}.
<a id="trace-436"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 436): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-437"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 437): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5316"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 5316): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.703677 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5316. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16285753670478995, 'next_transition': 5333}.
<a id="trace-5317"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 5317): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.703677 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5317. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16285753670478995, 'next_transition': 5333}.
<a id="trace-5318"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 5318): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.703677 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5318. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06280511464044947, 'next_transition': 5361}.
<a id="trace-5319"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 5319): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.703677 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5319. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06280511464044947, 'next_transition': 5361}.
<a id="trace-5333"></a>
<a id="trace-5335"></a>
<a id="trace-5350"></a>
<a id="trace-5352"></a>
<a id="trace-5630"></a>
<a id="trace-5632"></a>
<a id="trace-5645"></a>
<a id="trace-5647"></a>
<a id="trace-5684"></a>
<a id="trace-5686"></a>
<a id="trace-5731"></a>
<a id="trace-5733"></a>
<a id="trace-5835"></a>
<a id="trace-5837"></a>
<a id="trace-5868"></a>
<a id="trace-5870"></a>
<a id="trace-5929"></a>
<a id="trace-5931"></a>
<a id="trace-5971"></a>
<a id="trace-5973"></a>
<a id="trace-6000"></a>
<a id="trace-6002"></a>
<a id="trace-6046"></a>
<a id="trace-6048"></a>
- 42.25s–47.75s (×24), actor 5, squad 0 (trace 5333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 5319. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32571305401460243, 'next_transition': 5350}.
<a id="trace-5361"></a>
- 42.85s–42.85s (×1), actor 8, squad 1 (trace 5361): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 5139. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3122114360139596, 'next_transition': 5915}.
<a id="trace-5915"></a>
- 46.20s–46.20s (×1), actor 8, squad 1 (trace 5915): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 5757. Next observer evidence: None.
<a id="trace-5936"></a>
- 46.25s–46.25s (×1), actor 8, squad 1 (trace 5936): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 5757. Next observer evidence: {'until': 50, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.191331609647156, 'next_transition': 6493}.
<a id="trace-6077"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 6077): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 5750. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06926978435797268, 'next_transition': 6343}.
<a id="trace-6343"></a>
<a id="trace-6345"></a>
<a id="trace-6361"></a>
<a id="trace-6363"></a>
<a id="trace-6418"></a>
<a id="trace-6420"></a>
- 48.25s–49.25s (×6), actor 5, squad 0 (trace 6343): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5754. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10899014314504663, 'next_transition': 6361}.
<a id="trace-6430"></a>
- 49.30s–49.30s (×1), actor 1, squad 0 (trace 6430): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 5750. Next observer evidence: {'until': 49.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.41998142491128326, 'next_transition': 6458}.
<a id="trace-6432"></a>
- 49.30s–49.30s (×1), actor 1, squad 0 (trace 6432): NeedSupport. Knowledge: actor memory at 45.00s, trace 5750. Next observer evidence: {'until': 49.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.41998142491128326, 'next_transition': 6458}.
<a id="trace-6458"></a>
<a id="trace-6460"></a>
- 49.75s–49.75s (×2), actor 5, squad 0 (trace 6458): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5754. Next observer evidence: {'until': 50, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200131625943608, 'next_transition': 6543}.
<a id="trace-6493"></a>
- 50.00s–50.00s (×1), actor 8, squad 1 (trace 6493): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 50.00s, trace 6480. Next observer evidence: {'until': 50.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6718}.
<a id="trace-6543"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 6543): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 6474. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20814282334577752, 'next_transition': 6690}.
<a id="trace-6548"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 6548): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 6474. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20814282334577752, 'next_transition': 6690}.
<a id="trace-6549"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 6549): Reorganise complete: known contact. Knowledge: actor memory at 50.00s, trace 6474. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20814282334577752, 'next_transition': 6690}.
<a id="trace-6690"></a>
<a id="trace-6692"></a>
<a id="trace-6711"></a>
<a id="trace-6713"></a>
<a id="trace-7727"></a>
<a id="trace-7729"></a>
<a id="trace-7756"></a>
<a id="trace-7758"></a>
<a id="trace-7784"></a>
<a id="trace-7786"></a>
<a id="trace-8063"></a>
<a id="trace-8065"></a>
<a id="trace-8095"></a>
<a id="trace-8097"></a>
<a id="trace-8109"></a>
<a id="trace-8111"></a>
- 50.25s–53.75s (×16), actor 5, squad 0 (trace 6690): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 6477. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6711}.
<a id="trace-6718"></a>
- 50.75s–50.75s (×1), actor 8, squad 1 (trace 6718): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 6480. Next observer evidence: None.
<a id="trace-6719"></a>
- 50.75s–50.75s (×1), actor 8, squad 1 (trace 6719): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 50.00s, trace 6480. Next observer evidence: None.
<a id="trace-7699"></a>
- 50.80s–50.80s (×1), actor 8, squad 1 (trace 7699): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 50.00s, trace 6480. Next observer evidence: {'until': 50.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 646}.
<a id="trace-646"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (events line 646): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7701"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 7701): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.630031 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 7701. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4371499999999999, 'next_transition': 7791}.
<a id="trace-7702"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 7702): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.630031 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 7702. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4371499999999999, 'next_transition': 7791}.
<a id="trace-7791"></a>
- 52.30s–52.30s (×1), actor 8, squad 1 (trace 7791): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 6480. Next observer evidence: {'until': 55.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3653999999999993, 'next_transition': 8426}.
<a id="trace-7792"></a>
- 52.30s–52.30s (×1), actor 8, squad 1 (trace 7792): received platoon directive. Knowledge: actor memory at 50.00s, trace 6480. Next observer evidence: {'until': 55.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3653999999999993, 'next_transition': 8426}.
<a id="trace-8129"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 8129): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 6474. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8311}.
<a id="trace-8130"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 8130): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 6474. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8311}.
<a id="trace-8311"></a>
<a id="trace-8313"></a>
<a id="trace-8323"></a>
<a id="trace-8325"></a>
<a id="trace-8407"></a>
<a id="trace-8409"></a>
<a id="trace-8429"></a>
<a id="trace-8431"></a>
- 54.25s–55.75s (×8), actor 5, squad 0 (trace 8311): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.85s, trace 7702. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8323}.
<a id="trace-8426"></a>
- 55.65s–55.65s (×1), actor 8, squad 1 (trace 8426): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 8343. Next observer evidence: {'until': 57, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8492}.
<a id="trace-8440"></a>
- 56.05s–56.05s (×1), actor 5, squad 0 (trace 8440): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 56.05s, trace 8440. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1260004079358474, 'next_transition': 8453}.
<a id="trace-8453"></a>
<a id="trace-8455"></a>
<a id="trace-8479"></a>
<a id="trace-8481"></a>
<a id="trace-8499"></a>
<a id="trace-8501"></a>
<a id="trace-8517"></a>
<a id="trace-8519"></a>
<a id="trace-8567"></a>
<a id="trace-8569"></a>
<a id="trace-8774"></a>
<a id="trace-8776"></a>
<a id="trace-8818"></a>
<a id="trace-8820"></a>
<a id="trace-8850"></a>
<a id="trace-8852"></a>
<a id="trace-8962"></a>
<a id="trace-8964"></a>
<a id="trace-9001"></a>
<a id="trace-9003"></a>
<a id="trace-9032"></a>
<a id="trace-9034"></a>
<a id="trace-9058"></a>
<a id="trace-9060"></a>
<a id="trace-9086"></a>
<a id="trace-9088"></a>
<a id="trace-9096"></a>
<a id="trace-9098"></a>
<a id="trace-9116"></a>
<a id="trace-9118"></a>
<a id="trace-9127"></a>
<a id="trace-9129"></a>
<a id="trace-9148"></a>
<a id="trace-9150"></a>
<a id="trace-9165"></a>
<a id="trace-9167"></a>
<a id="trace-9241"></a>
<a id="trace-9243"></a>
- 56.25s–65.25s (×38), actor 5, squad 0 (trace 8453): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 56.05s, trace 8440. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520008158716948, 'next_transition': 8479}.
<a id="trace-8492"></a>
- 57.05s–57.05s (×1), actor 8, squad 1 (trace 8492): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 55.00s, trace 8343. Next observer evidence: {'until': 57.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06253499999999956, 'next_transition': 8531}.
<a id="trace-8531"></a>
- 57.85s–57.85s (×1), actor 8, squad 1 (trace 8531): NeedSupport. Knowledge: actor memory at 55.00s, trace 8343. Next observer evidence: {'until': 58.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06942499999999985, 'next_transition': 8591}.
<a id="trace-8591"></a>
- 58.60s–58.60s (×1), actor 8, squad 1 (trace 8591): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 8343. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4306149999999995, 'next_transition': 795}.
<a id="trace-8592"></a>
- 58.60s–58.60s (×1), actor 8, squad 1 (trace 8592): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 8343. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4306149999999995, 'next_transition': 795}.
<a id="trace-795"></a>
- 59.60s–59.60s (×1), actor 5, squad 1 (events line 795): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8839"></a>
- 59.60s–59.60s (×1), actor 5, squad 1 (trace 8839): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.351181 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 59.60s, trace 8839. Next observer evidence: {'until': 80.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.569698656078097, 'next_transition': 10149}.
<a id="trace-8840"></a>
- 59.60s–59.60s (×1), actor 5, squad 1 (trace 8840): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.351181 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 59.60s, trace 8840. Next observer evidence: {'until': 80.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 15.569698656078097, 'next_transition': 10149}.
<a id="trace-9259"></a>
- 65.65s–65.65s (×1), actor 1, squad 0 (trace 9259): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 9177. Next observer evidence: None.
<a id="trace-9260"></a>
- 65.65s–65.65s (×1), actor 1, squad 0 (trace 9260): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 9177. Next observer evidence: None.
<a id="trace-9366"></a>
<a id="trace-9368"></a>
<a id="trace-9386"></a>
<a id="trace-9388"></a>
<a id="trace-9407"></a>
<a id="trace-9409"></a>
<a id="trace-9430"></a>
<a id="trace-9432"></a>
<a id="trace-9441"></a>
<a id="trace-9443"></a>
<a id="trace-9471"></a>
<a id="trace-9473"></a>
<a id="trace-9484"></a>
<a id="trace-9486"></a>
<a id="trace-9505"></a>
<a id="trace-9507"></a>
<a id="trace-9520"></a>
<a id="trace-9522"></a>
<a id="trace-9601"></a>
<a id="trace-9603"></a>
<a id="trace-9614"></a>
<a id="trace-9616"></a>
<a id="trace-9635"></a>
<a id="trace-9637"></a>
<a id="trace-9652"></a>
<a id="trace-9654"></a>
<a id="trace-9673"></a>
<a id="trace-9675"></a>
<a id="trace-9686"></a>
<a id="trace-9688"></a>
<a id="trace-9708"></a>
<a id="trace-9710"></a>
<a id="trace-9717"></a>
<a id="trace-9719"></a>
<a id="trace-9736"></a>
<a id="trace-9738"></a>
<a id="trace-9750"></a>
<a id="trace-9752"></a>
<a id="trace-9830"></a>
<a id="trace-9832"></a>
<a id="trace-9844"></a>
<a id="trace-9846"></a>
<a id="trace-9866"></a>
<a id="trace-9868"></a>
<a id="trace-9884"></a>
<a id="trace-9886"></a>
<a id="trace-9904"></a>
<a id="trace-9906"></a>
<a id="trace-9918"></a>
<a id="trace-9920"></a>
<a id="trace-9936"></a>
<a id="trace-9938"></a>
<a id="trace-9946"></a>
<a id="trace-9948"></a>
- 65.75s–78.75s (×54), actor 5, squad 0 (trace 9366): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 9180. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560423459039848, 'next_transition': 9386}.
<a id="trace-9954"></a>
- 78.85s–78.85s (×1), actor 1, squad 0 (trace 9954): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 9761. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249592573532, 'next_transition': 10018}.
<a id="trace-9955"></a>
- 78.85s–78.85s (×1), actor 1, squad 0 (trace 9955): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 9761. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249592573532, 'next_transition': 10018}.
<a id="trace-10018"></a>
<a id="trace-10020"></a>
<a id="trace-10035"></a>
<a id="trace-10037"></a>
<a id="trace-10125"></a>
<a id="trace-10127"></a>
<a id="trace-10139"></a>
<a id="trace-10141"></a>
<a id="trace-10207"></a>
<a id="trace-10209"></a>
<a id="trace-10228"></a>
<a id="trace-10230"></a>
<a id="trace-10245"></a>
<a id="trace-10247"></a>
<a id="trace-10259"></a>
<a id="trace-10261"></a>
<a id="trace-10286"></a>
<a id="trace-10288"></a>
- 79.25s–83.25s (×18), actor 5, squad 0 (trace 10018): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 9764. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25427990368395686, 'next_transition': 10035}.
<a id="trace-10149"></a>
- 80.90s–80.90s (×1), actor 9, squad 1 (trace 10149): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 10052. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11809}.
<a id="trace-10191"></a>
- 80.90s–80.90s (×1), actor 9, squad 1 (trace 10191): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 10052. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11809}.
<a id="trace-10293"></a>
- 83.45s–83.45s (×1), actor 1, squad 0 (trace 10293): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 80.00s, trace 10047. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1260004079358474, 'next_transition': 10300}.
<a id="trace-10300"></a>
<a id="trace-10302"></a>
<a id="trace-10323"></a>
<a id="trace-10325"></a>
- 83.75s–84.25s (×4), actor 5, squad 0 (trace 10300): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 10050. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149810707010837, 'next_transition': 10323}.
<a id="trace-10330"></a>
- 84.45s–84.45s (×1), actor 1, squad 0 (trace 10330): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 10047. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598045880215117, 'next_transition': 11628}.
<a id="trace-10331"></a>
- 84.45s–84.45s (×1), actor 1, squad 0 (trace 10331): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 80.00s, trace 10047. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598045880215117, 'next_transition': 11628}.
<a id="trace-11628"></a>
<a id="trace-11630"></a>
<a id="trace-11712"></a>
<a id="trace-11714"></a>
- 84.75s–85.25s (×4), actor 5, squad 0 (trace 11628): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 10050. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.819034239983966, 'next_transition': 11712}.
<a id="trace-11720"></a>
- 85.45s–85.45s (×1), actor 1, squad 0 (trace 11720): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 85.00s, trace 11641. Next observer evidence: {'until': 85.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520061657812324, 'next_transition': 11735}.
<a id="trace-11735"></a>
<a id="trace-11737"></a>
<a id="trace-11770"></a>
<a id="trace-11772"></a>
<a id="trace-11781"></a>
<a id="trace-11783"></a>
<a id="trace-11802"></a>
<a id="trace-11804"></a>
- 85.75s–87.25s (×8), actor 5, squad 0 (trace 11735): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 11644. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1889930628099558, 'next_transition': 11770}.
<a id="trace-11809"></a>
- 87.30s–87.30s (×1), actor 9, squad 1 (trace 11809): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 85.00s, trace 11646. Next observer evidence: {'until': 101, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1066}.
<a id="trace-11812"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 11812): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.309280 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 11812. Next observer evidence: None.
<a id="trace-11813"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 11813): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.309280 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 11813. Next observer evidence: None.
<a id="trace-982"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (events line 982): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11820}.
<a id="trace-11820"></a>
<a id="trace-11822"></a>
<a id="trace-11841"></a>
<a id="trace-11843"></a>
<a id="trace-11852"></a>
<a id="trace-11854"></a>
<a id="trace-11873"></a>
<a id="trace-11875"></a>
- 87.75s–89.25s (×8), actor 5, squad 0 (trace 11820): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 11813. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11841}.
<a id="trace-11881"></a>
- 89.30s–89.30s (×1), actor 1, squad 0 (trace 11881): HelpSquad outside weapon range: approach neighbour before allocating firing slots. Knowledge: actor memory at 85.00s, trace 11641. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11902}.
<a id="trace-11882"></a>
- 89.30s–89.30s (×1), actor 1, squad 0 (trace 11882): MoveTactically. Knowledge: actor memory at 85.00s, trace 11641. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11902}.
<a id="trace-11883"></a>
- 89.30s–89.30s (×1), actor 1, squad 0 (trace 11883): traveling overwatch. Knowledge: actor memory at 85.00s, trace 11641. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11902}.
<a id="trace-11884"></a>
- 89.30s–89.30s (×1), actor 1, squad 0 (trace 11884): received platoon directive. Knowledge: actor memory at 85.00s, trace 11641. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11902}.
<a id="trace-11902"></a>
<a id="trace-11904"></a>
- 89.75s–89.75s (×2), actor 5, squad 0 (trace 11902): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 11813. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11981}.
<a id="trace-11981"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 11981): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 90.00s, trace 11909. Next observer evidence: None.
<a id="trace-12040"></a>
<a id="trace-12042"></a>
<a id="trace-12056"></a>
<a id="trace-12058"></a>
<a id="trace-12073"></a>
<a id="trace-12075"></a>
<a id="trace-12085"></a>
<a id="trace-12087"></a>
<a id="trace-12110"></a>
<a id="trace-12112"></a>
<a id="trace-12132"></a>
<a id="trace-12134"></a>
<a id="trace-12153"></a>
<a id="trace-12155"></a>
<a id="trace-12162"></a>
<a id="trace-12164"></a>
<a id="trace-12179"></a>
<a id="trace-12181"></a>
<a id="trace-12192"></a>
<a id="trace-12194"></a>
<a id="trace-12278"></a>
<a id="trace-12280"></a>
<a id="trace-12301"></a>
<a id="trace-12303"></a>
<a id="trace-12318"></a>
<a id="trace-12320"></a>
<a id="trace-12337"></a>
<a id="trace-12339"></a>
<a id="trace-12350"></a>
<a id="trace-12352"></a>
<a id="trace-12373"></a>
<a id="trace-12375"></a>
<a id="trace-12385"></a>
<a id="trace-12387"></a>
<a id="trace-12406"></a>
<a id="trace-12408"></a>
<a id="trace-12418"></a>
<a id="trace-12420"></a>
<a id="trace-12497"></a>
<a id="trace-12499"></a>
<a id="trace-12508"></a>
<a id="trace-12510"></a>
- 90.25s–100.75s (×42), actor 5, squad 0 (trace 12040): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 11912. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12056}.
<a id="trace-1065"></a>
- 101.05s–101.05s (×1), actor 5, squad 0 (events line 1065): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780004588439468, 'next_transition': 12534}.
<a id="trace-1066"></a>
- 101.05s–101.05s (×1), actor 5, squad 1 (events line 1066): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12568}.
<a id="trace-12521"></a>
- 101.05s–101.05s (×1), actor 5, squad 0 (trace 12521): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.323510 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.05s, trace 12521. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780004588439468, 'next_transition': 12534}.
<a id="trace-12522"></a>
- 101.05s–101.05s (×1), actor 5, squad 0 (trace 12522): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.323510 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.05s, trace 12522. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780004588439468, 'next_transition': 12534}.
<a id="trace-12523"></a>
- 101.05s–101.05s (×1), actor 5, squad 1 (trace 12523): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.323510 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.05s, trace 12523. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12568}.
<a id="trace-12524"></a>
- 101.05s–101.05s (×1), actor 5, squad 1 (trace 12524): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.323510 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.05s, trace 12524. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12568}.
<a id="trace-12534"></a>
<a id="trace-12536"></a>
<a id="trace-12542"></a>
<a id="trace-12544"></a>
<a id="trace-12563"></a>
<a id="trace-12565"></a>
<a id="trace-12634"></a>
<a id="trace-12636"></a>
- 101.25s–102.75s (×8), actor 5, squad 0 (trace 12534): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 101.05s, trace 12524. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559917988685739, 'next_transition': 12542}.
<a id="trace-12568"></a>
- 102.25s–102.25s (×1), actor 9, squad 1 (trace 12568): Withdraw to received rally. Knowledge: actor memory at 100.00s, trace 12432. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 13205}.
<a id="trace-12569"></a>
- 102.25s–102.25s (×1), actor 9, squad 1 (trace 12569): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 12432. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 13205}.
<a id="trace-12644"></a>
- 103.20s–103.20s (×1), actor 1, squad 0 (trace 12644): Withdraw to received rally. Knowledge: actor memory at 100.00s, trace 12427. Next observer evidence: None.
<a id="trace-12645"></a>
- 103.20s–103.20s (×1), actor 1, squad 0 (trace 12645): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 12427. Next observer evidence: None.
<a id="trace-12705"></a>
<a id="trace-12707"></a>
<a id="trace-12722"></a>
<a id="trace-12724"></a>
<a id="trace-12750"></a>
<a id="trace-12752"></a>
<a id="trace-12776"></a>
<a id="trace-12778"></a>
<a id="trace-12855"></a>
<a id="trace-12857"></a>
<a id="trace-12873"></a>
<a id="trace-12875"></a>
<a id="trace-12899"></a>
<a id="trace-12901"></a>
<a id="trace-12912"></a>
<a id="trace-12914"></a>
<a id="trace-12928"></a>
<a id="trace-12930"></a>
<a id="trace-12942"></a>
<a id="trace-12944"></a>
<a id="trace-12961"></a>
<a id="trace-12963"></a>
<a id="trace-12976"></a>
<a id="trace-12978"></a>
<a id="trace-12996"></a>
<a id="trace-12998"></a>
<a id="trace-13015"></a>
<a id="trace-13017"></a>
<a id="trace-13098"></a>
<a id="trace-13100"></a>
<a id="trace-13110"></a>
<a id="trace-13112"></a>
<a id="trace-13129"></a>
<a id="trace-13131"></a>
<a id="trace-13142"></a>
<a id="trace-13144"></a>
<a id="trace-13164"></a>
<a id="trace-13166"></a>
<a id="trace-13178"></a>
<a id="trace-13180"></a>
<a id="trace-13197"></a>
<a id="trace-13199"></a>
<a id="trace-13219"></a>
<a id="trace-13221"></a>
<a id="trace-13240"></a>
<a id="trace-13242"></a>
<a id="trace-13261"></a>
<a id="trace-13263"></a>
<a id="trace-13335"></a>
<a id="trace-13337"></a>
<a id="trace-13347"></a>
<a id="trace-13349"></a>
<a id="trace-13366"></a>
<a id="trace-13368"></a>
<a id="trace-13376"></a>
<a id="trace-13378"></a>
<a id="trace-13394"></a>
<a id="trace-13396"></a>
<a id="trace-13410"></a>
<a id="trace-13412"></a>
<a id="trace-13432"></a>
<a id="trace-13434"></a>
<a id="trace-13446"></a>
<a id="trace-13448"></a>
<a id="trace-13462"></a>
<a id="trace-13464"></a>
<a id="trace-13476"></a>
<a id="trace-13478"></a>
<a id="trace-13552"></a>
<a id="trace-13554"></a>
<a id="trace-13561"></a>
<a id="trace-13563"></a>
<a id="trace-13575"></a>
<a id="trace-13577"></a>
<a id="trace-13582"></a>
<a id="trace-13584"></a>
<a id="trace-13596"></a>
<a id="trace-13598"></a>
<a id="trace-13610"></a>
<a id="trace-13612"></a>
<a id="trace-13625"></a>
<a id="trace-13627"></a>
<a id="trace-13635"></a>
<a id="trace-13637"></a>
<a id="trace-13649"></a>
<a id="trace-13651"></a>
<a id="trace-13663"></a>
<a id="trace-13665"></a>
<a id="trace-13742"></a>
<a id="trace-13744"></a>
<a id="trace-13758"></a>
<a id="trace-13760"></a>
<a id="trace-13771"></a>
<a id="trace-13773"></a>
<a id="trace-13781"></a>
<a id="trace-13783"></a>
<a id="trace-13794"></a>
<a id="trace-13796"></a>
<a id="trace-13807"></a>
<a id="trace-13809"></a>
<a id="trace-13820"></a>
<a id="trace-13822"></a>
<a id="trace-13831"></a>
<a id="trace-13833"></a>
<a id="trace-13846"></a>
<a id="trace-13848"></a>
<a id="trace-13858"></a>
<a id="trace-13860"></a>
<a id="trace-13932"></a>
<a id="trace-13934"></a>
<a id="trace-13943"></a>
<a id="trace-13945"></a>
<a id="trace-13956"></a>
<a id="trace-13958"></a>
<a id="trace-13967"></a>
<a id="trace-13969"></a>
<a id="trace-13988"></a>
<a id="trace-13990"></a>
<a id="trace-14000"></a>
<a id="trace-14002"></a>
<a id="trace-14016"></a>
<a id="trace-14018"></a>
<a id="trace-14025"></a>
<a id="trace-14027"></a>
<a id="trace-14040"></a>
<a id="trace-14042"></a>
<a id="trace-14056"></a>
<a id="trace-14058"></a>
<a id="trace-14130"></a>
<a id="trace-14132"></a>
<a id="trace-14142"></a>
<a id="trace-14144"></a>
<a id="trace-14152"></a>
<a id="trace-14154"></a>
<a id="trace-14159"></a>
<a id="trace-14161"></a>
<a id="trace-14172"></a>
<a id="trace-14174"></a>
<a id="trace-14182"></a>
<a id="trace-14184"></a>
<a id="trace-14199"></a>
<a id="trace-14201"></a>
<a id="trace-14213"></a>
<a id="trace-14215"></a>
<a id="trace-14226"></a>
<a id="trace-14228"></a>
<a id="trace-14239"></a>
<a id="trace-14241"></a>
<a id="trace-14316"></a>
<a id="trace-14318"></a>
<a id="trace-14325"></a>
<a id="trace-14327"></a>
<a id="trace-14339"></a>
<a id="trace-14341"></a>
<a id="trace-14349"></a>
<a id="trace-14351"></a>
<a id="trace-14365"></a>
<a id="trace-14367"></a>
<a id="trace-14375"></a>
<a id="trace-14377"></a>
<a id="trace-14389"></a>
<a id="trace-14391"></a>
<a id="trace-14400"></a>
<a id="trace-14402"></a>
<a id="trace-14412"></a>
<a id="trace-14414"></a>
<a id="trace-14426"></a>
<a id="trace-14428"></a>
<a id="trace-14505"></a>
<a id="trace-14507"></a>
<a id="trace-14514"></a>
<a id="trace-14516"></a>
<a id="trace-14528"></a>
<a id="trace-14530"></a>
<a id="trace-14540"></a>
<a id="trace-14542"></a>
<a id="trace-14556"></a>
<a id="trace-14558"></a>
<a id="trace-14568"></a>
<a id="trace-14570"></a>
<a id="trace-14584"></a>
<a id="trace-14586"></a>
<a id="trace-14593"></a>
<a id="trace-14595"></a>
<a id="trace-14611"></a>
<a id="trace-14613"></a>
<a id="trace-14623"></a>
<a id="trace-14625"></a>
<a id="trace-14699"></a>
<a id="trace-14701"></a>
<a id="trace-14707"></a>
<a id="trace-14709"></a>
<a id="trace-14719"></a>
<a id="trace-14721"></a>
<a id="trace-14729"></a>
<a id="trace-14731"></a>
<a id="trace-14745"></a>
<a id="trace-14747"></a>
<a id="trace-14756"></a>
<a id="trace-14758"></a>
<a id="trace-14774"></a>
<a id="trace-14776"></a>
<a id="trace-14782"></a>
<a id="trace-14784"></a>
<a id="trace-14800"></a>
<a id="trace-14802"></a>
<a id="trace-14811"></a>
<a id="trace-14813"></a>
<a id="trace-14887"></a>
<a id="trace-14889"></a>
<a id="trace-14903"></a>
<a id="trace-14905"></a>
<a id="trace-14915"></a>
<a id="trace-14917"></a>
<a id="trace-14924"></a>
<a id="trace-14926"></a>
<a id="trace-14938"></a>
<a id="trace-14940"></a>
<a id="trace-14948"></a>
<a id="trace-14950"></a>
<a id="trace-14965"></a>
<a id="trace-14967"></a>
<a id="trace-14978"></a>
<a id="trace-14980"></a>
<a id="trace-14991"></a>
<a id="trace-14993"></a>
<a id="trace-15007"></a>
<a id="trace-15009"></a>
<a id="trace-15080"></a>
<a id="trace-15082"></a>
<a id="trace-15091"></a>
<a id="trace-15093"></a>
- 103.25s–160.80s (×232), actor 5, squad 0 (trace 12705): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 101.05s, trace 12524. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199802601004684, 'next_transition': 12722}.
<a id="trace-13205"></a>
- 113.30s–113.30s (×1), actor 9, squad 1 (trace 13205): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 13033. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1314}.
<a id="trace-13206"></a>
- 113.30s–113.30s (×1), actor 9, squad 1 (trace 13206): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 13033. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1314}.
<a id="trace-1313"></a>
- 161.20s–161.20s (×1), actor 5, squad 0 (events line 1313): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1314"></a>
- 161.20s–161.20s (×1), actor 5, squad 1 (events line 1314): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1592}.
<a id="trace-15099"></a>
- 161.20s–161.20s (×1), actor 5, squad 0 (trace 15099): renew committed intent (75 s lifetime). Knowledge: actor memory at 161.20s, trace 15099. Next observer evidence: None.
<a id="trace-15100"></a>
- 161.20s–161.20s (×1), actor 5, squad 1 (trace 15100): renew committed intent (75 s lifetime). Knowledge: actor memory at 161.20s, trace 15100. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1592}.
<a id="trace-15108"></a>
<a id="trace-15110"></a>
<a id="trace-15122"></a>
<a id="trace-15124"></a>
<a id="trace-15141"></a>
<a id="trace-15143"></a>
<a id="trace-15152"></a>
<a id="trace-15154"></a>
<a id="trace-15166"></a>
<a id="trace-15168"></a>
<a id="trace-15177"></a>
<a id="trace-15179"></a>
<a id="trace-15190"></a>
<a id="trace-15192"></a>
<a id="trace-15204"></a>
<a id="trace-15206"></a>
<a id="trace-15283"></a>
<a id="trace-15285"></a>
<a id="trace-15291"></a>
<a id="trace-15293"></a>
<a id="trace-15301"></a>
<a id="trace-15303"></a>
<a id="trace-15311"></a>
<a id="trace-15313"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15338"></a>
<a id="trace-15340"></a>
<a id="trace-15355"></a>
<a id="trace-15357"></a>
<a id="trace-15371"></a>
<a id="trace-15373"></a>
<a id="trace-15387"></a>
<a id="trace-15389"></a>
<a id="trace-15399"></a>
<a id="trace-15401"></a>
<a id="trace-15476"></a>
<a id="trace-15478"></a>
<a id="trace-15484"></a>
<a id="trace-15486"></a>
<a id="trace-15498"></a>
<a id="trace-15500"></a>
<a id="trace-15511"></a>
<a id="trace-15513"></a>
<a id="trace-15523"></a>
<a id="trace-15525"></a>
<a id="trace-15534"></a>
<a id="trace-15536"></a>
<a id="trace-15548"></a>
<a id="trace-15550"></a>
<a id="trace-15559"></a>
<a id="trace-15561"></a>
<a id="trace-15577"></a>
<a id="trace-15579"></a>
- 161.30s–174.30s (×54), actor 5, squad 0 (trace 15108): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 161.20s, trace 15100. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15122}.
<a id="trace-15586"></a>
- 174.45s–174.45s (×1), actor 1, squad 0 (trace 15586): MoveTactically. Knowledge: actor memory at 170.00s, trace 15408. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15751}.
<a id="trace-15587"></a>
- 174.45s–174.45s (×1), actor 1, squad 0 (trace 15587): traveling. Knowledge: actor memory at 170.00s, trace 15408. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15751}.
<a id="trace-15588"></a>
- 174.45s–174.45s (×1), actor 1, squad 0 (trace 15588): current contact unknown for 10 s. Knowledge: actor memory at 170.00s, trace 15408. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15751}.
<a id="trace-15751"></a>
<a id="trace-15753"></a>
<a id="trace-15837"></a>
<a id="trace-15839"></a>
<a id="trace-15851"></a>
<a id="trace-15853"></a>
<a id="trace-15871"></a>
<a id="trace-15873"></a>
<a id="trace-15895"></a>
<a id="trace-15897"></a>
<a id="trace-15916"></a>
<a id="trace-15918"></a>
<a id="trace-15929"></a>
<a id="trace-15931"></a>
<a id="trace-15952"></a>
<a id="trace-15954"></a>
<a id="trace-15962"></a>
<a id="trace-15964"></a>
- 174.80s–178.80s (×18), actor 5, squad 0 (trace 15751): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 15411. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0315172187224698, 'next_transition': 15837}.
<a id="trace-1399"></a>
- 179.20s–179.20s (×1), actor 5, squad 0 (events line 1399): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15970"></a>
- 179.20s–179.20s (×1), actor 5, squad 0 (trace 15970): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 179.20s, trace 15970. Next observer evidence: None.
<a id="trace-15971"></a>
- 179.20s–179.20s (×1), actor 5, squad 0 (trace 15971): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 179.20s, trace 15971. Next observer evidence: None.
<a id="trace-15980"></a>
<a id="trace-15982"></a>
<a id="trace-15988"></a>
<a id="trace-15990"></a>
<a id="trace-16070"></a>
<a id="trace-16072"></a>
<a id="trace-16092"></a>
<a id="trace-16094"></a>
<a id="trace-16108"></a>
<a id="trace-16110"></a>
- 179.30s–181.30s (×10), actor 5, squad 0 (trace 15980): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 179.20s, trace 15971. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340078154231263, 'next_transition': 15988}.
<a id="trace-16115"></a>
- 181.45s–181.45s (×1), actor 1, squad 0 (trace 16115): received platoon directive. Knowledge: actor memory at 180.00s, trace 15996. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0080092000338288, 'next_transition': 16277}.
<a id="trace-16277"></a>
<a id="trace-16279"></a>
<a id="trace-16302"></a>
<a id="trace-16304"></a>
<a id="trace-16320"></a>
<a id="trace-16322"></a>
<a id="trace-16341"></a>
<a id="trace-16343"></a>
<a id="trace-16355"></a>
<a id="trace-16357"></a>
<a id="trace-16379"></a>
<a id="trace-16381"></a>
<a id="trace-16389"></a>
<a id="trace-16391"></a>
<a id="trace-16470"></a>
<a id="trace-16472"></a>
<a id="trace-16481"></a>
<a id="trace-16483"></a>
<a id="trace-16495"></a>
<a id="trace-16497"></a>
<a id="trace-16505"></a>
<a id="trace-16507"></a>
<a id="trace-16521"></a>
<a id="trace-16523"></a>
<a id="trace-16533"></a>
<a id="trace-16535"></a>
<a id="trace-16556"></a>
<a id="trace-16558"></a>
<a id="trace-16579"></a>
<a id="trace-16581"></a>
<a id="trace-16592"></a>
<a id="trace-16594"></a>
<a id="trace-16604"></a>
<a id="trace-16606"></a>
<a id="trace-16688"></a>
<a id="trace-16690"></a>
<a id="trace-16698"></a>
<a id="trace-16700"></a>
<a id="trace-16713"></a>
<a id="trace-16715"></a>
<a id="trace-16726"></a>
<a id="trace-16728"></a>
<a id="trace-16742"></a>
<a id="trace-16744"></a>
<a id="trace-16762"></a>
<a id="trace-16764"></a>
<a id="trace-16776"></a>
<a id="trace-16778"></a>
<a id="trace-16788"></a>
<a id="trace-16790"></a>
<a id="trace-16808"></a>
<a id="trace-16810"></a>
<a id="trace-16819"></a>
<a id="trace-16821"></a>
<a id="trace-16901"></a>
<a id="trace-16903"></a>
<a id="trace-16914"></a>
<a id="trace-16916"></a>
<a id="trace-16932"></a>
<a id="trace-16934"></a>
<a id="trace-16949"></a>
<a id="trace-16951"></a>
<a id="trace-16963"></a>
<a id="trace-16965"></a>
<a id="trace-16981"></a>
<a id="trace-16983"></a>
<a id="trace-17004"></a>
<a id="trace-17006"></a>
<a id="trace-17013"></a>
<a id="trace-17015"></a>
<a id="trace-17027"></a>
<a id="trace-17029"></a>
<a id="trace-17036"></a>
<a id="trace-17038"></a>
<a id="trace-17120"></a>
<a id="trace-17122"></a>
<a id="trace-17136"></a>
<a id="trace-17138"></a>
<a id="trace-17150"></a>
<a id="trace-17152"></a>
<a id="trace-17170"></a>
<a id="trace-17172"></a>
<a id="trace-17188"></a>
<a id="trace-17190"></a>
<a id="trace-17197"></a>
<a id="trace-17199"></a>
<a id="trace-17216"></a>
<a id="trace-17218"></a>
<a id="trace-17227"></a>
<a id="trace-17229"></a>
<a id="trace-17246"></a>
<a id="trace-17248"></a>
<a id="trace-17262"></a>
<a id="trace-17264"></a>
<a id="trace-17335"></a>
<a id="trace-17337"></a>
<a id="trace-17343"></a>
<a id="trace-17345"></a>
<a id="trace-17355"></a>
<a id="trace-17357"></a>
<a id="trace-17368"></a>
<a id="trace-17370"></a>
- 181.80s–206.80s (×102), actor 5, squad 0 (trace 16277): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 15999. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.039497994755647, 'next_transition': 16302}.
<a id="trace-17376"></a>
- 207.05s–207.05s (×1), actor 1, squad 0 (trace 17376): movement clock expired: request actual-position arrival certification; retain stage and generation. Knowledge: actor memory at 205.00s, trace 17268. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17385}.
<a id="trace-17385"></a>
<a id="trace-17387"></a>
<a id="trace-17395"></a>
<a id="trace-17397"></a>
<a id="trace-17412"></a>
<a id="trace-17414"></a>
<a id="trace-17423"></a>
<a id="trace-17425"></a>
<a id="trace-17439"></a>
<a id="trace-17441"></a>
<a id="trace-17454"></a>
<a id="trace-17456"></a>
<a id="trace-17529"></a>
<a id="trace-17531"></a>
<a id="trace-17540"></a>
<a id="trace-17542"></a>
<a id="trace-17559"></a>
<a id="trace-17561"></a>
<a id="trace-17570"></a>
<a id="trace-17572"></a>
<a id="trace-17586"></a>
<a id="trace-17588"></a>
<a id="trace-17594"></a>
<a id="trace-17596"></a>
<a id="trace-17609"></a>
<a id="trace-17611"></a>
<a id="trace-17619"></a>
<a id="trace-17621"></a>
<a id="trace-17635"></a>
<a id="trace-17637"></a>
<a id="trace-17645"></a>
<a id="trace-17647"></a>
<a id="trace-17723"></a>
<a id="trace-17725"></a>
<a id="trace-17731"></a>
<a id="trace-17733"></a>
<a id="trace-17747"></a>
<a id="trace-17749"></a>
<a id="trace-17758"></a>
<a id="trace-17760"></a>
<a id="trace-17774"></a>
<a id="trace-17776"></a>
<a id="trace-17782"></a>
<a id="trace-17784"></a>
<a id="trace-17799"></a>
<a id="trace-17801"></a>
<a id="trace-17814"></a>
<a id="trace-17816"></a>
<a id="trace-17830"></a>
<a id="trace-17832"></a>
<a id="trace-17840"></a>
<a id="trace-17842"></a>
<a id="trace-17916"></a>
<a id="trace-17918"></a>
<a id="trace-17924"></a>
<a id="trace-17926"></a>
<a id="trace-17939"></a>
<a id="trace-17941"></a>
<a id="trace-17954"></a>
<a id="trace-17956"></a>
<a id="trace-17964"></a>
<a id="trace-17966"></a>
<a id="trace-17975"></a>
<a id="trace-17977"></a>
<a id="trace-17993"></a>
<a id="trace-17995"></a>
<a id="trace-18002"></a>
<a id="trace-18004"></a>
<a id="trace-18018"></a>
<a id="trace-18020"></a>
<a id="trace-18031"></a>
<a id="trace-18033"></a>
<a id="trace-18107"></a>
<a id="trace-18109"></a>
<a id="trace-18117"></a>
<a id="trace-18119"></a>
<a id="trace-18131"></a>
<a id="trace-18133"></a>
<a id="trace-18143"></a>
<a id="trace-18145"></a>
<a id="trace-18153"></a>
<a id="trace-18155"></a>
<a id="trace-18163"></a>
<a id="trace-18165"></a>
<a id="trace-18183"></a>
<a id="trace-18185"></a>
<a id="trace-18205"></a>
<a id="trace-18207"></a>
<a id="trace-18217"></a>
<a id="trace-18219"></a>
<a id="trace-18293"></a>
<a id="trace-18295"></a>
<a id="trace-18303"></a>
<a id="trace-18305"></a>
<a id="trace-18319"></a>
<a id="trace-18321"></a>
<a id="trace-18332"></a>
<a id="trace-18334"></a>
<a id="trace-18346"></a>
<a id="trace-18348"></a>
<a id="trace-18354"></a>
<a id="trace-18356"></a>
<a id="trace-18373"></a>
<a id="trace-18375"></a>
<a id="trace-18385"></a>
<a id="trace-18387"></a>
<a id="trace-18400"></a>
<a id="trace-18402"></a>
<a id="trace-18413"></a>
<a id="trace-18415"></a>
<a id="trace-18487"></a>
<a id="trace-18489"></a>
<a id="trace-18496"></a>
<a id="trace-18498"></a>
<a id="trace-18510"></a>
<a id="trace-18512"></a>
<a id="trace-18521"></a>
<a id="trace-18523"></a>
<a id="trace-18539"></a>
<a id="trace-18541"></a>
<a id="trace-18551"></a>
<a id="trace-18553"></a>
<a id="trace-18567"></a>
<a id="trace-18569"></a>
<a id="trace-18577"></a>
<a id="trace-18579"></a>
- 207.30s–238.80s (×126), actor 5, squad 0 (trace 17385): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 17271. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17395}.
<a id="trace-1592"></a>
- 221.20s–221.20s (×1), actor 5, squad 1 (events line 1592): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1788}.
<a id="trace-17932"></a>
- 221.20s–221.20s (×1), actor 5, squad 1 (trace 17932): renew committed intent (75 s lifetime). Knowledge: actor memory at 221.20s, trace 17932. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1788}.
<a id="trace-1650"></a>
- 239.20s–239.20s (×1), actor 5, squad 0 (events line 1650): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18586"></a>
- 239.20s–239.20s (×1), actor 5, squad 0 (trace 18586): renew committed intent (75 s lifetime). Knowledge: actor memory at 239.20s, trace 18586. Next observer evidence: None.
<a id="trace-18594"></a>
<a id="trace-18596"></a>
<a id="trace-18609"></a>
<a id="trace-18611"></a>
<a id="trace-18682"></a>
<a id="trace-18684"></a>
<a id="trace-18694"></a>
<a id="trace-18696"></a>
<a id="trace-18711"></a>
<a id="trace-18713"></a>
<a id="trace-18722"></a>
<a id="trace-18724"></a>
<a id="trace-18735"></a>
<a id="trace-18737"></a>
<a id="trace-18743"></a>
<a id="trace-18745"></a>
<a id="trace-18756"></a>
<a id="trace-18758"></a>
<a id="trace-18771"></a>
<a id="trace-18773"></a>
<a id="trace-18790"></a>
<a id="trace-18792"></a>
<a id="trace-18800"></a>
<a id="trace-18802"></a>
<a id="trace-18874"></a>
<a id="trace-18876"></a>
<a id="trace-18883"></a>
<a id="trace-18885"></a>
<a id="trace-18900"></a>
<a id="trace-18902"></a>
<a id="trace-18912"></a>
<a id="trace-18914"></a>
<a id="trace-18927"></a>
<a id="trace-18929"></a>
<a id="trace-18935"></a>
<a id="trace-18937"></a>
<a id="trace-18957"></a>
<a id="trace-18959"></a>
<a id="trace-18967"></a>
<a id="trace-18969"></a>
<a id="trace-18984"></a>
<a id="trace-18986"></a>
<a id="trace-18991"></a>
<a id="trace-18993"></a>
<a id="trace-19067"></a>
<a id="trace-19069"></a>
<a id="trace-19076"></a>
<a id="trace-19078"></a>
<a id="trace-19094"></a>
<a id="trace-19096"></a>
<a id="trace-19105"></a>
<a id="trace-19107"></a>
<a id="trace-19117"></a>
<a id="trace-19119"></a>
<a id="trace-19126"></a>
<a id="trace-19128"></a>
<a id="trace-19146"></a>
<a id="trace-19148"></a>
<a id="trace-19154"></a>
<a id="trace-19156"></a>
<a id="trace-19171"></a>
<a id="trace-19173"></a>
<a id="trace-19185"></a>
<a id="trace-19187"></a>
<a id="trace-19259"></a>
<a id="trace-19261"></a>
<a id="trace-19268"></a>
<a id="trace-19270"></a>
<a id="trace-19282"></a>
<a id="trace-19284"></a>
<a id="trace-19294"></a>
<a id="trace-19296"></a>
<a id="trace-19308"></a>
<a id="trace-19310"></a>
<a id="trace-19320"></a>
<a id="trace-19322"></a>
<a id="trace-19337"></a>
<a id="trace-19339"></a>
<a id="trace-19345"></a>
<a id="trace-19347"></a>
<a id="trace-19360"></a>
<a id="trace-19362"></a>
<a id="trace-19369"></a>
<a id="trace-19371"></a>
<a id="trace-19443"></a>
<a id="trace-19445"></a>
<a id="trace-19458"></a>
<a id="trace-19460"></a>
<a id="trace-19474"></a>
<a id="trace-19476"></a>
<a id="trace-19484"></a>
<a id="trace-19486"></a>
<a id="trace-19498"></a>
<a id="trace-19500"></a>
<a id="trace-19507"></a>
<a id="trace-19509"></a>
<a id="trace-19523"></a>
<a id="trace-19525"></a>
<a id="trace-19535"></a>
<a id="trace-19537"></a>
<a id="trace-19553"></a>
<a id="trace-19555"></a>
<a id="trace-19563"></a>
<a id="trace-19565"></a>
<a id="trace-19638"></a>
<a id="trace-19640"></a>
<a id="trace-19647"></a>
<a id="trace-19649"></a>
<a id="trace-19659"></a>
<a id="trace-19661"></a>
<a id="trace-19669"></a>
<a id="trace-19671"></a>
<a id="trace-19685"></a>
<a id="trace-19687"></a>
<a id="trace-19699"></a>
<a id="trace-19701"></a>
<a id="trace-19712"></a>
<a id="trace-19714"></a>
<a id="trace-19720"></a>
<a id="trace-19722"></a>
<a id="trace-19737"></a>
<a id="trace-19739"></a>
<a id="trace-19748"></a>
<a id="trace-19750"></a>
<a id="trace-19826"></a>
<a id="trace-19828"></a>
<a id="trace-19838"></a>
<a id="trace-19840"></a>
<a id="trace-19850"></a>
<a id="trace-19852"></a>
<a id="trace-19860"></a>
<a id="trace-19862"></a>
<a id="trace-19874"></a>
<a id="trace-19876"></a>
<a id="trace-19886"></a>
<a id="trace-19888"></a>
<a id="trace-19899"></a>
<a id="trace-19901"></a>
<a id="trace-19912"></a>
<a id="trace-19914"></a>
<a id="trace-19930"></a>
<a id="trace-19932"></a>
<a id="trace-19939"></a>
<a id="trace-19941"></a>
<a id="trace-20013"></a>
<a id="trace-20015"></a>
<a id="trace-20023"></a>
<a id="trace-20025"></a>
<a id="trace-20036"></a>
<a id="trace-20038"></a>
<a id="trace-20049"></a>
<a id="trace-20051"></a>
<a id="trace-20066"></a>
<a id="trace-20068"></a>
<a id="trace-20075"></a>
<a id="trace-20077"></a>
<a id="trace-20090"></a>
<a id="trace-20092"></a>
<a id="trace-20098"></a>
<a id="trace-20100"></a>
<a id="trace-20118"></a>
<a id="trace-20120"></a>
<a id="trace-20125"></a>
<a id="trace-20127"></a>
<a id="trace-20202"></a>
<a id="trace-20204"></a>
<a id="trace-20208"></a>
<a id="trace-20210"></a>
<a id="trace-20224"></a>
<a id="trace-20226"></a>
<a id="trace-20239"></a>
<a id="trace-20241"></a>
<a id="trace-20256"></a>
<a id="trace-20258"></a>
<a id="trace-20264"></a>
<a id="trace-20266"></a>
<a id="trace-20280"></a>
<a id="trace-20282"></a>
<a id="trace-20290"></a>
<a id="trace-20292"></a>
<a id="trace-20310"></a>
<a id="trace-20312"></a>
<a id="trace-20319"></a>
<a id="trace-20321"></a>
<a id="trace-20393"></a>
<a id="trace-20395"></a>
<a id="trace-20404"></a>
<a id="trace-20406"></a>
<a id="trace-20417"></a>
<a id="trace-20419"></a>
<a id="trace-20429"></a>
<a id="trace-20431"></a>
<a id="trace-20441"></a>
<a id="trace-20443"></a>
<a id="trace-20454"></a>
<a id="trace-20456"></a>
<a id="trace-20471"></a>
<a id="trace-20473"></a>
<a id="trace-20482"></a>
<a id="trace-20484"></a>
<a id="trace-20499"></a>
<a id="trace-20501"></a>
<a id="trace-20508"></a>
<a id="trace-20510"></a>
<a id="trace-20584"></a>
<a id="trace-20586"></a>
<a id="trace-20597"></a>
<a id="trace-20599"></a>
<a id="trace-20612"></a>
<a id="trace-20614"></a>
<a id="trace-20624"></a>
<a id="trace-20626"></a>
<a id="trace-20636"></a>
<a id="trace-20638"></a>
<a id="trace-20647"></a>
<a id="trace-20649"></a>
<a id="trace-20664"></a>
<a id="trace-20666"></a>
<a id="trace-20678"></a>
<a id="trace-20680"></a>
<a id="trace-20704"></a>
<a id="trace-20706"></a>
<a id="trace-20780"></a>
<a id="trace-20782"></a>
<a id="trace-20790"></a>
<a id="trace-20792"></a>
<a id="trace-20801"></a>
<a id="trace-20803"></a>
<a id="trace-20815"></a>
<a id="trace-20817"></a>
<a id="trace-20831"></a>
<a id="trace-20833"></a>
<a id="trace-20840"></a>
<a id="trace-20842"></a>
<a id="trace-20857"></a>
<a id="trace-20859"></a>
<a id="trace-20869"></a>
<a id="trace-20871"></a>
<a id="trace-20885"></a>
<a id="trace-20887"></a>
- 239.30s–299.30s (×240), actor 5, squad 0 (trace 18594): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 239.20s, trace 18586. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18609}.
<a id="trace-1788"></a>
- 282.20s–282.20s (×1), actor 5, squad 1 (events line 1788): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20247"></a>
- 282.20s–282.20s (×1), actor 5, squad 1 (trace 20247): renew committed intent (75 s lifetime). Knowledge: actor memory at 282.20s, trace 20247. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1987}.
<a id="trace-1842"></a>
- 299.70s–299.70s (×1), actor 5, squad 0 (events line 1842): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20893"></a>
- 299.70s–299.70s (×1), actor 5, squad 0 (trace 20893): renew committed intent (75 s lifetime). Knowledge: actor memory at 299.70s, trace 20893. Next observer evidence: {'until': 299.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20896}.
<a id="trace-20896"></a>
<a id="trace-20898"></a>
<a id="trace-20974"></a>
<a id="trace-20976"></a>
<a id="trace-20986"></a>
<a id="trace-20988"></a>
<a id="trace-20998"></a>
<a id="trace-21000"></a>
<a id="trace-21008"></a>
<a id="trace-21010"></a>
<a id="trace-21021"></a>
<a id="trace-21023"></a>
<a id="trace-21033"></a>
<a id="trace-21035"></a>
<a id="trace-21050"></a>
<a id="trace-21052"></a>
<a id="trace-21065"></a>
<a id="trace-21067"></a>
<a id="trace-21077"></a>
<a id="trace-21079"></a>
<a id="trace-21086"></a>
<a id="trace-21088"></a>
<a id="trace-21161"></a>
<a id="trace-21163"></a>
<a id="trace-21173"></a>
<a id="trace-21175"></a>
<a id="trace-21184"></a>
<a id="trace-21186"></a>
<a id="trace-21200"></a>
<a id="trace-21202"></a>
<a id="trace-21218"></a>
<a id="trace-21220"></a>
<a id="trace-21227"></a>
<a id="trace-21229"></a>
<a id="trace-21242"></a>
<a id="trace-21244"></a>
<a id="trace-21253"></a>
<a id="trace-21255"></a>
<a id="trace-21267"></a>
<a id="trace-21269"></a>
<a id="trace-21279"></a>
<a id="trace-21281"></a>
<a id="trace-21356"></a>
<a id="trace-21358"></a>
<a id="trace-21362"></a>
<a id="trace-21364"></a>
<a id="trace-21375"></a>
<a id="trace-21377"></a>
<a id="trace-21386"></a>
<a id="trace-21388"></a>
<a id="trace-21403"></a>
<a id="trace-21405"></a>
<a id="trace-21411"></a>
<a id="trace-21413"></a>
<a id="trace-21429"></a>
<a id="trace-21431"></a>
<a id="trace-21440"></a>
<a id="trace-21442"></a>
<a id="trace-21460"></a>
<a id="trace-21462"></a>
<a id="trace-21471"></a>
<a id="trace-21473"></a>
<a id="trace-21546"></a>
<a id="trace-21548"></a>
<a id="trace-21555"></a>
<a id="trace-21557"></a>
<a id="trace-21571"></a>
<a id="trace-21573"></a>
<a id="trace-21582"></a>
<a id="trace-21584"></a>
<a id="trace-21600"></a>
<a id="trace-21602"></a>
<a id="trace-21608"></a>
<a id="trace-21610"></a>
<a id="trace-21624"></a>
<a id="trace-21626"></a>
<a id="trace-21634"></a>
<a id="trace-21636"></a>
<a id="trace-21649"></a>
<a id="trace-21651"></a>
<a id="trace-21657"></a>
<a id="trace-21659"></a>
<a id="trace-21735"></a>
<a id="trace-21737"></a>
<a id="trace-21747"></a>
<a id="trace-21749"></a>
<a id="trace-21763"></a>
<a id="trace-21765"></a>
<a id="trace-21774"></a>
<a id="trace-21776"></a>
<a id="trace-21789"></a>
<a id="trace-21791"></a>
<a id="trace-21795"></a>
<a id="trace-21797"></a>
<a id="trace-21813"></a>
<a id="trace-21815"></a>
<a id="trace-21831"></a>
<a id="trace-21833"></a>
<a id="trace-21845"></a>
<a id="trace-21847"></a>
<a id="trace-21852"></a>
<a id="trace-21854"></a>
<a id="trace-21926"></a>
<a id="trace-21928"></a>
<a id="trace-21934"></a>
<a id="trace-21936"></a>
<a id="trace-21947"></a>
<a id="trace-21949"></a>
<a id="trace-21959"></a>
<a id="trace-21961"></a>
<a id="trace-21975"></a>
<a id="trace-21977"></a>
<a id="trace-21987"></a>
<a id="trace-21989"></a>
<a id="trace-22004"></a>
<a id="trace-22006"></a>
<a id="trace-22017"></a>
<a id="trace-22019"></a>
<a id="trace-22031"></a>
<a id="trace-22033"></a>
<a id="trace-22041"></a>
<a id="trace-22043"></a>
<a id="trace-22120"></a>
<a id="trace-22122"></a>
<a id="trace-22129"></a>
<a id="trace-22131"></a>
<a id="trace-22141"></a>
<a id="trace-22143"></a>
<a id="trace-22150"></a>
<a id="trace-22152"></a>
<a id="trace-22164"></a>
<a id="trace-22166"></a>
<a id="trace-22173"></a>
<a id="trace-22175"></a>
<a id="trace-22192"></a>
<a id="trace-22194"></a>
<a id="trace-22207"></a>
<a id="trace-22209"></a>
<a id="trace-22225"></a>
<a id="trace-22227"></a>
<a id="trace-22236"></a>
<a id="trace-22238"></a>
<a id="trace-22311"></a>
<a id="trace-22313"></a>
<a id="trace-22321"></a>
<a id="trace-22323"></a>
<a id="trace-22333"></a>
<a id="trace-22335"></a>
<a id="trace-22349"></a>
<a id="trace-22351"></a>
<a id="trace-22363"></a>
<a id="trace-22365"></a>
<a id="trace-22369"></a>
<a id="trace-22371"></a>
<a id="trace-22383"></a>
<a id="trace-22385"></a>
<a id="trace-22395"></a>
<a id="trace-22397"></a>
<a id="trace-22410"></a>
<a id="trace-22412"></a>
<a id="trace-22422"></a>
<a id="trace-22424"></a>
<a id="trace-22497"></a>
<a id="trace-22499"></a>
<a id="trace-22506"></a>
<a id="trace-22508"></a>
<a id="trace-22519"></a>
<a id="trace-22521"></a>
<a id="trace-22534"></a>
<a id="trace-22536"></a>
<a id="trace-22553"></a>
<a id="trace-22555"></a>
<a id="trace-22563"></a>
<a id="trace-22565"></a>
<a id="trace-22581"></a>
<a id="trace-22583"></a>
<a id="trace-22591"></a>
<a id="trace-22593"></a>
<a id="trace-22606"></a>
<a id="trace-22608"></a>
<a id="trace-22619"></a>
<a id="trace-22621"></a>
<a id="trace-22694"></a>
<a id="trace-22696"></a>
<a id="trace-22702"></a>
<a id="trace-22704"></a>
<a id="trace-22714"></a>
<a id="trace-22716"></a>
<a id="trace-22725"></a>
<a id="trace-22727"></a>
<a id="trace-22743"></a>
<a id="trace-22745"></a>
<a id="trace-22749"></a>
<a id="trace-22751"></a>
<a id="trace-22767"></a>
<a id="trace-22769"></a>
<a id="trace-22782"></a>
<a id="trace-22784"></a>
<a id="trace-22799"></a>
<a id="trace-22801"></a>
<a id="trace-22809"></a>
<a id="trace-22811"></a>
<a id="trace-22888"></a>
<a id="trace-22890"></a>
<a id="trace-22897"></a>
<a id="trace-22899"></a>
<a id="trace-22911"></a>
<a id="trace-22913"></a>
<a id="trace-22923"></a>
<a id="trace-22925"></a>
<a id="trace-22937"></a>
<a id="trace-22939"></a>
<a id="trace-22945"></a>
<a id="trace-22947"></a>
<a id="trace-22962"></a>
<a id="trace-22964"></a>
<a id="trace-22976"></a>
<a id="trace-22978"></a>
<a id="trace-22990"></a>
<a id="trace-22992"></a>
<a id="trace-22999"></a>
<a id="trace-23001"></a>
<a id="trace-23074"></a>
<a id="trace-23076"></a>
<a id="trace-23083"></a>
<a id="trace-23085"></a>
<a id="trace-23102"></a>
<a id="trace-23104"></a>
<a id="trace-23119"></a>
<a id="trace-23121"></a>
<a id="trace-23129"></a>
<a id="trace-23131"></a>
<a id="trace-23136"></a>
<a id="trace-23138"></a>
<a id="trace-23151"></a>
<a id="trace-23153"></a>
<a id="trace-23163"></a>
<a id="trace-23165"></a>
<a id="trace-23178"></a>
<a id="trace-23180"></a>
- 299.80s–359.30s (×240), actor 5, squad 0 (trace 20896): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 299.70s, trace 20893. Next observer evidence: {'until': 300.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20974}.
<a id="trace-1987"></a>
- 342.20s–342.20s (×1), actor 5, squad 1 (events line 1987): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22546"></a>
- 342.20s–342.20s (×1), actor 5, squad 1 (trace 22546): renew committed intent (75 s lifetime). Knowledge: actor memory at 342.20s, trace 22546. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-2045"></a>
- 359.70s–359.70s (×1), actor 5, squad 0 (events line 2045): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23188"></a>
- 359.70s–359.70s (×1), actor 5, squad 0 (trace 23188): renew committed intent (75 s lifetime). Knowledge: actor memory at 359.70s, trace 23188. Next observer evidence: {'until': 359.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23191}.
<a id="trace-23191"></a>
<a id="trace-23193"></a>
- 359.80s–359.80s (×2), actor 5, squad 0 (trace 23191): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 359.70s, trace 23188. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

182 matched order/radio deliveries; 515 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.314s; maximum 2.000s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 2967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 2968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 3638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3640: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3641: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3642: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3645: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3646: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3647: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3648: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3649: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5137: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 5139: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5141: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5142: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5143: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5144: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5145: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5146: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5147: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5148: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5149: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5150: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5316: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5317: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5318: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5319: estimate 9.87; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5754: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5755: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 5757: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5759: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5760: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5761: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5762: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5763: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5764: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5765: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5766: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5767: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5768: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6474: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6477: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6478: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 6480: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6481: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6482: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6483: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6484: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6485: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6486: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6487: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6488: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6489: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6490: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6491: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 7701: estimate 9.61; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 7702: estimate 9.61; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8338: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8341: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8342: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 8343: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8344: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8345: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8346: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8347: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8348: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8349: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8350: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8351: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8352: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8353: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8354: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 56.05s leader 5, trace 8440: estimate 9.86; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 59.60s leader 5, trace 8839: estimate 12.74; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 59.60s leader 5, trace 8840: estimate 12.74; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8880: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8883: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8884: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 8885: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8886: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8887: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8888: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8889: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8890: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8891: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8892: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8893: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8894: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8895: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8896: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9177: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9180: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9181: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 9182: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9183: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9184: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9185: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9186: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9187: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9188: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9189: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9190: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 9191: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 9192: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9531: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 9532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9534: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9535: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 9536: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9537: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9538: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9539: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9540: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9541: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9542: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9543: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9544: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 9545: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 9546: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9761: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 9762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9764: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9765: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9766: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9767: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9768: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9769: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9770: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9771: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9772: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9773: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9774: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9775: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9776: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10047: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 10048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10050: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10051: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 10052: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10053: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10054: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10055: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10056: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10057: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10058: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10059: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10060: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 10061: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 10062: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 11641: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 11642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11644: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11645: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 11646: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11647: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11648: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11649: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11650: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11651: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11652: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11653: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11654: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 11655: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 11656: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 11812: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 11813: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11909: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 11910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11912: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11913: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 11914: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11915: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11916: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11917: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11918: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11919: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11920: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11921: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11922: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 11923: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 11924: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 12202: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 12203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 12204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 12205: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 12206: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 12207: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12208: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12209: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12210: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12211: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12212: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12213: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12214: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12215: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 12216: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 12217: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 12427: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 12428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 12429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12430: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12431: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 12432: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12433: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12434: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12435: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12436: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12437: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12438: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12439: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12440: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 12441: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 12442: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.05s leader 5, trace 12521: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.05s leader 5, trace 12522: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.05s leader 5, trace 12523: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.05s leader 5, trace 12524: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 12787: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 12788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 12789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 12790: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 12791: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 12792: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12793: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 12794: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 12795: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 12796: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 12797: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12798: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12799: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12800: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 12801: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 12802: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 13028: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 13029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 13030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 13031: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 13032: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 13033: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 13034: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 13035: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 13036: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 13037: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 13038: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 13039: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 13040: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 13041: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 13042: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 13043: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 13267: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 13268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 13269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 13270: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 13271: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 13272: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 13273: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 13274: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 13275: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 13276: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 13277: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 13278: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 13279: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 13280: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 13281: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 13282: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 13484: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 13485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 13486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 13487: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 13488: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 13489: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 13490: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 13491: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 13492: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 13493: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 13494: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 13495: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 13496: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 13497: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 13498: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 13499: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 13676: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 13677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13679: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13680: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 13681: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13682: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13683: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 13684: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13685: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13686: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13687: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13688: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13689: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 13690: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 13691: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 13866: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 13867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 13868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 13869: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 13870: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 13871: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 13872: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 13873: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 13874: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 13875: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 13876: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 13877: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 13878: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 13879: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 13880: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 13881: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 14062: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 14063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 14064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14065: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 14066: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 14067: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 14068: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 14069: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 14070: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 14071: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 14072: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 14073: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 14074: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 14075: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 14076: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 14077: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 14249: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 14250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 14251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 14252: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 14253: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 14254: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 14255: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 14256: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 14257: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 14258: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 14259: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 14260: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 14261: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 14262: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 14263: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 14264: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 14434: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 14435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 14436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 14437: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 14438: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 14439: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 14440: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 14441: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 14442: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 14443: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 14444: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 14445: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 14446: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 14447: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 14448: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 14449: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 14631: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 14632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 14633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 14634: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 14635: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 14636: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 14637: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 14638: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 14639: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 14640: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 14641: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 14642: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 14643: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 14644: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 14645: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 14646: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 14821: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 14822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 14823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 14824: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 14825: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 14826: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 14827: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 14828: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 14829: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 14830: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 14831: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 14832: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 14833: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 14834: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 14835: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 14836: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 15013: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 15014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 15015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 15016: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 15017: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 15018: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 15019: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 15020: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 15021: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 15022: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 15023: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 15024: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 15025: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 15026: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 15027: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 15028: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 161.20s leader 5, trace 15099: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 161.20s leader 5, trace 15100: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 15212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 15213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 15214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 15215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 15216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 15217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 15218: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 15219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 15220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 15221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 15222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 15223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 15224: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 15225: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 15226: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 15227: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 15408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 15409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 15410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 15411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 15412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 15413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 15414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 15415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 15416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 15417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 15418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 15419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 15420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 15421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 15422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 15423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 15760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 15761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 15762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 15763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 15764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 15765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 15766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 15767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 15768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 15769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 15770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 15771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 15772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 15773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 15774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 15775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.20s leader 5, trace 15970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 179.20s leader 5, trace 15971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 15996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 15997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 15998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 15999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 16000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 16001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 16002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 16003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 16004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 16005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 16006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 16007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 16008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 16009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 16010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 16011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 16403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 16404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 16405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 16406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 16407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 16408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 16409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 16410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 16411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 16412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 16413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 16414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 16415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 16416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 16417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 16418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 16614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 16615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 16616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 16617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 16618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 16619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 16620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 16621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 16622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 16623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 16624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 16625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 16626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 16627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 16628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 16629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 16828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 16829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 16830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 16831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 16832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 16833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 16834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 16835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 16836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 16837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 16838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 16839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 16840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 16841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 16842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 16843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 17046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 17047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 17048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 17049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 17050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 17051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 17052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 17053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 17054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 17055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 17056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 17057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 17058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 17059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 17060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 17061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 17268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 17269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 17270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 17271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 17272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 17273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 17274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 17275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 17276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 17277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 17278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 17279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 17280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 17281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 17282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 17283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 17462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 17463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 17464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 17465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 17466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 17467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 17468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 17469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 17470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 17471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 17472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 17473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 17474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 17475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 17476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 17477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 17657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 17658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 17659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 17660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 17661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 17662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 17663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 17664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 17665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 17666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 17667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 17668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 17669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 17670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 17671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 17672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 17850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 17851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 17852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 17853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 17854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 17855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 17856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 17857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 17858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 17859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 17860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 17861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 17862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 17863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 17864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 17865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 221.20s leader 5, trace 17932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 18039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 18040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 18041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 18042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 18043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 18044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 18045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 18046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 18047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 18048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 18049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 18050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 18051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 18052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 18053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 18054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 18227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 18228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 18229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 18230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 18231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 18232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 18233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 18234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 18235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 18236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 18237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 18238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 18239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 18240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 18241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 18242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 18421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 18422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 18423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 18424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 18425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 18426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 18427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 18428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 18429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 18430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 18431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 18432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 18433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 18434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 18435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 18436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 239.20s leader 5, trace 18586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 18615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 18616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 18617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 18618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 18619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 18620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 18621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 18622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 18623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 18624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 18625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 18626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 18627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 18628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 18629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 18630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 18808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 18809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 18810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 18811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 18812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 18813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 18814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 18815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 18816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 18817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 18818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 18819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 18820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 18821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 18822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 18823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 18999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 19000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 19001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 19002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 19003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 19004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 19005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 19006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 19007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 19008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 19009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 19010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 19011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 19012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 19013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 19014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 19191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 19192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 19193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 19194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 19195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 19196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 19197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 19198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 19199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 19200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 19201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 19202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 19203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 19204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 19205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 19206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 19377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 19378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 19379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 19380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 19381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 19382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 19383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 19384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 19385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 19386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 19387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 19388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 19389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 19390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 19391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 19392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 19571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 19572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 19573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 19574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 19575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 19576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 19577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 19578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 19579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 19580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 19581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 19582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 19583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 19584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 19585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 19586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 19757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 19758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 19759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 19760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 19761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 19762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 19763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 19764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 19765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 19766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 19767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 19768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 19769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 19770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 19771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 19772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 19947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 19948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 19949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 19950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 19951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 19952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 19953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 19954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 19955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 19956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 19957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 19958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 19959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 19960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 19961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 19962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 20134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 20135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 20136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 20137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 20138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 20139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 20140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 20141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 20142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 20143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 20144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 20145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 20146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 20147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 20148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 20149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 282.20s leader 5, trace 20247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 20327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 20328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 20329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 20330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 20331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 20332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 20333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 20334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 20335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 20336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 20337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 20338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 20339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 20340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 20341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 20342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 20518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 20519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 20520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 20521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 20522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 20523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 20524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 20525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 20526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 20527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 20528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 20529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 20530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 20531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 20532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 20533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 20712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 20713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 20714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 20715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 20716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 20717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 20718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 20719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 20720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 20721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 20722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 20723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 20724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 20725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 20726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 20727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 299.70s leader 5, trace 20893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 20903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 20904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 20905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 20906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 20907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 20908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 20909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 20910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 20911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 20912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 20913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 20914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 20915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 20916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 20917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 20918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 21094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 21095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 21096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 21097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 21098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 21099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 21100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 21101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 21102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 21103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 21104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 21105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 21106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 21107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 21108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 21109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 21286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 21287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 21288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 21289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 21290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 21291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 21292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 21293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 21294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 21295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 21296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 21297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 21298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 21299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 21300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 21301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 21478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 21479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 21480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 21481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 21482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 21483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 21484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 21485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 21486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 21487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 21488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 21489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 21490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 21491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 21492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 21493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 21668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 21669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 21670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 21671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 21672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 21673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 21674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 21675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 21676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 21677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 21678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 21679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 21680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 21681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 21682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 21683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 21859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 21860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 21861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 21862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 21863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 21864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 21865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 21866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 21867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 21868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 21869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 21870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 21871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 21872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 21873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 21874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 22048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 22049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 22050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 22051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 22052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 22053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 22054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 22055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 22056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 22057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 22058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 22059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 22060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 22061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 22062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 22063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 22243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 22244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 22245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 22246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 22247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 22248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 22249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 22250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 22251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 22252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 22253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 22254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 22255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 22256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 22257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 22258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 22427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 22428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 22429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 22430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 22431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 22432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 22433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 22434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 22435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 22436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 22437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 22438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 22439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 22440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 22441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 22442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.20s leader 5, trace 22546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 22626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 22627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 22628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 22629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 22630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 22631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 22632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 22633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 22634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 22635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 22636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 22637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 22638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 22639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 22640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 22641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 22820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 22821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 22822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 22823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 22824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 22825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 22826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 22827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 22828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 22829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 22830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 22831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 22832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 22833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 22834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 22835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 23006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 23007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 23008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 23009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 23010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 23011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 23012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 23013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 23014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 23015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 23016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 23017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 23018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 23019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 23020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 23021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 359.70s leader 5, trace 23188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 23198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 23199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 23200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 23201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 23202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 23203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 23204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 23205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 23206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 23207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 23208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 23209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 23210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 23211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 23212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 23213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Soren incapacitated
- 1: Reed killed in action
- 1: Bren incapacitated

## Outcome attribution

- 101.05s, evidence 1065: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780004588439468, 'next_transition': 12534}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 1066: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12568}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 12521: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.323510 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780004588439468, 'next_transition': 12534}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 12522: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.323510 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780004588439468, 'next_transition': 12534}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 12523: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.323510 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12568}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 101.05s, evidence 12524: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.323510 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12568}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 161.20s, evidence 1313: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 161.20s, evidence 1314: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1592}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 221.20s, evidence 1592: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1788}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 282.20s, evidence 1788: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 342.20s, evidence 1987: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
