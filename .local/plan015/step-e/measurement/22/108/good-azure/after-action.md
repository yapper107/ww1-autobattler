# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/22/108/good-azure/battle-108-1789674149794723039`

## Battle summary

**Ember** · 360 s · 808 shots.

### Turning points

- 34.9s, squad 4: contact (events line 300). First recorded contact.
- 57.9s, squad 1: help call ([trace 17763](#trace-17763)). No completion observed before termination.
- 59.8s, squad 0: help answer ([trace 18049](#trace-18049)). 79.0s, squad 0: prepared a base of fire.
- 67.8s, squad 0: help call ([trace 21831](#trace-21831)). 69.5s, squad 1: answered a neighbour with support by fire.
- 69.5s, squad 1: help answer ([trace 21969](#trace-21969)). 69.8s, squad 1: took cover and returned fire.
- 93.8s, squad 1: withdrawal ([trace 31908](#trace-31908)). 118.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 97.9s, squad 0: withdrawal ([trace 32218](#trace-32218)). 135.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 133.8s, squad 1: withdrawal ([trace 34513](#trace-34513)). No completion observed before termination.
- 141.6s, squad 0: withdrawal ([trace 34978](#trace-34978)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 5 further drill types; withdrew; 20 shots, 4/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 9 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 708 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 71 shots, 0/2 lost.

### Decisions and attribution

At 80.2s, squad 0 chose FightHere: nearest known group ([trace 27613](#trace-27613)), followed by 0 shots and 1 own casualties; estimate 12.3 against 8 distinct squad-reported contacts; At 62.1s, squad 1 chose FightHere: nearest known group ([trace 21111](#trace-21111)), followed by 1 shots and 0 own casualties; estimate 9.6 against 5 distinct squad-reported contacts; At 77.8s, squad 1 chose FightHere: nearest known group ([trace 24349](#trace-24349)), followed by 1 shots and 0 own casualties; estimate 12.2 against 7 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149980133339429, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024747837586, 'next_transition': 827}.

### Communication

210 matched deliveries (mean 0.40s, max 2.10s); 490 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 34.85s, squad 4, contact, evidence events line 300: First recorded contact; .
- 57.85s, squad 1, help call, evidence 17763: NeedSupport; No completion observed before termination.
- 59.75s, squad 0, help answer, evidence 18049: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 79.0s, squad 0: prepared a base of fire.
- 67.85s, squad 0, help call, evidence 21831: NeedSupport; 69.5s, squad 1: answered a neighbour with support by fire.
- 69.45s, squad 1, help answer, evidence 21969: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 69.8s, squad 1: took cover and returned fire.
- 93.80s, squad 1, withdrawal, evidence 31908: BreakContact: believed ratio at least two without superiority; 118.0s, squad 1: contact broken or rally reached: Occupy and report strength.
- 97.90s, squad 0, withdrawal, evidence 32218: BreakContact: believed ratio at least two without superiority; 135.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 133.75s, squad 1, withdrawal, evidence 34513: Withdraw to received rally; No completion observed before termination.
- 141.60s, squad 0, withdrawal, evidence 34978: Withdraw to received rally; No completion observed before termination.

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
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.915017264528859, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.86268294626592, 'next_transition': 1856}.
<a id="trace-955"></a>
<a id="trace-957"></a>
<a id="trace-1305"></a>
<a id="trace-1307"></a>
<a id="trace-1344"></a>
<a id="trace-1346"></a>
<a id="trace-1387"></a>
<a id="trace-1389"></a>
<a id="trace-1423"></a>
<a id="trace-1425"></a>
<a id="trace-1458"></a>
<a id="trace-1460"></a>
<a id="trace-1501"></a>
<a id="trace-1503"></a>
<a id="trace-1535"></a>
<a id="trace-1537"></a>
<a id="trace-1652"></a>
<a id="trace-1654"></a>
<a id="trace-1678"></a>
<a id="trace-1680"></a>
<a id="trace-1701"></a>
<a id="trace-1703"></a>
<a id="trace-1731"></a>
<a id="trace-1733"></a>
<a id="trace-1760"></a>
<a id="trace-1762"></a>
<a id="trace-1783"></a>
<a id="trace-1785"></a>
<a id="trace-1810"></a>
<a id="trace-1812"></a>
<a id="trace-1851"></a>
<a id="trace-1853"></a>
<a id="trace-1975"></a>
<a id="trace-1977"></a>
<a id="trace-2063"></a>
<a id="trace-2065"></a>
<a id="trace-2096"></a>
<a id="trace-2098"></a>
<a id="trace-2423"></a>
<a id="trace-2425"></a>
<a id="trace-2490"></a>
<a id="trace-2492"></a>
<a id="trace-2512"></a>
<a id="trace-2514"></a>
<a id="trace-2544"></a>
<a id="trace-2546"></a>
<a id="trace-2600"></a>
<a id="trace-2602"></a>
<a id="trace-2627"></a>
<a id="trace-2629"></a>
<a id="trace-2718"></a>
<a id="trace-2720"></a>
<a id="trace-2749"></a>
<a id="trace-2751"></a>
<a id="trace-2775"></a>
<a id="trace-2777"></a>
<a id="trace-2803"></a>
<a id="trace-2805"></a>
<a id="trace-2836"></a>
<a id="trace-2838"></a>
<a id="trace-2863"></a>
<a id="trace-2865"></a>
<a id="trace-2921"></a>
<a id="trace-2923"></a>
<a id="trace-2951"></a>
<a id="trace-2953"></a>
<a id="trace-3062"></a>
<a id="trace-3064"></a>
<a id="trace-3081"></a>
<a id="trace-3083"></a>
<a id="trace-3104"></a>
<a id="trace-3106"></a>
<a id="trace-3118"></a>
<a id="trace-3120"></a>
<a id="trace-3134"></a>
<a id="trace-3136"></a>
<a id="trace-3146"></a>
<a id="trace-3148"></a>
<a id="trace-3171"></a>
<a id="trace-3173"></a>
<a id="trace-3194"></a>
<a id="trace-3196"></a>
<a id="trace-3482"></a>
<a id="trace-3484"></a>
<a id="trace-3524"></a>
<a id="trace-3526"></a>
<a id="trace-3542"></a>
<a id="trace-3544"></a>
<a id="trace-3557"></a>
<a id="trace-3559"></a>
<a id="trace-3606"></a>
<a id="trace-3608"></a>
<a id="trace-3998"></a>
<a id="trace-4000"></a>
<a id="trace-4091"></a>
<a id="trace-4093"></a>
<a id="trace-4120"></a>
<a id="trace-4122"></a>
<a id="trace-4147"></a>
<a id="trace-4149"></a>
<a id="trace-4180"></a>
<a id="trace-4182"></a>
<a id="trace-4219"></a>
<a id="trace-4221"></a>
<a id="trace-5322"></a>
<a id="trace-5324"></a>
<a id="trace-5352"></a>
<a id="trace-5354"></a>
<a id="trace-5402"></a>
<a id="trace-5404"></a>
<a id="trace-5435"></a>
<a id="trace-5437"></a>
<a id="trace-5543"></a>
<a id="trace-5545"></a>
<a id="trace-5588"></a>
<a id="trace-5590"></a>
<a id="trace-5615"></a>
<a id="trace-5617"></a>
<a id="trace-5969"></a>
<a id="trace-5971"></a>
<a id="trace-6483"></a>
<a id="trace-6485"></a>
<a id="trace-7012"></a>
<a id="trace-7014"></a>
<a id="trace-7055"></a>
<a id="trace-7057"></a>
<a id="trace-7173"></a>
<a id="trace-7175"></a>
<a id="trace-7691"></a>
<a id="trace-7693"></a>
<a id="trace-7761"></a>
<a id="trace-7763"></a>
<a id="trace-7842"></a>
<a id="trace-7844"></a>
<a id="trace-7877"></a>
<a id="trace-7879"></a>
<a id="trace-7931"></a>
<a id="trace-7933"></a>
<a id="trace-7989"></a>
<a id="trace-7991"></a>
<a id="trace-8034"></a>
<a id="trace-8036"></a>
<a id="trace-8074"></a>
<a id="trace-8076"></a>
<a id="trace-8112"></a>
<a id="trace-8114"></a>
<a id="trace-11912"></a>
<a id="trace-11914"></a>
<a id="trace-11944"></a>
<a id="trace-11946"></a>
<a id="trace-12006"></a>
<a id="trace-12008"></a>
<a id="trace-12571"></a>
<a id="trace-12573"></a>
<a id="trace-12622"></a>
<a id="trace-12624"></a>
<a id="trace-13199"></a>
<a id="trace-13201"></a>
<a id="trace-13262"></a>
<a id="trace-13264"></a>
<a id="trace-13319"></a>
<a id="trace-13321"></a>
<a id="trace-13389"></a>
<a id="trace-13391"></a>
<a id="trace-13452"></a>
<a id="trace-13454"></a>
<a id="trace-13562"></a>
<a id="trace-13564"></a>
<a id="trace-13634"></a>
<a id="trace-13636"></a>
<a id="trace-13686"></a>
<a id="trace-13688"></a>
<a id="trace-17607"></a>
<a id="trace-17609"></a>
<a id="trace-17679"></a>
<a id="trace-17681"></a>
<a id="trace-17748"></a>
<a id="trace-17750"></a>
<a id="trace-17895"></a>
<a id="trace-17897"></a>
<a id="trace-17970"></a>
<a id="trace-17972"></a>
<a id="trace-18046"></a>
<a id="trace-18048"></a>
<a id="trace-20931"></a>
<a id="trace-20933"></a>
<a id="trace-21065"></a>
<a id="trace-21067"></a>
<a id="trace-21143"></a>
<a id="trace-21145"></a>
<a id="trace-21224"></a>
<a id="trace-21226"></a>
<a id="trace-21296"></a>
<a id="trace-21298"></a>
<a id="trace-21361"></a>
<a id="trace-21363"></a>
<a id="trace-21427"></a>
<a id="trace-21429"></a>
<a id="trace-21670"></a>
<a id="trace-21672"></a>
<a id="trace-21819"></a>
<a id="trace-21821"></a>
<a id="trace-21914"></a>
<a id="trace-21916"></a>
<a id="trace-21954"></a>
<a id="trace-21956"></a>
<a id="trace-22981"></a>
<a id="trace-22983"></a>
<a id="trace-23393"></a>
<a id="trace-23395"></a>
<a id="trace-23707"></a>
<a id="trace-23709"></a>
<a id="trace-23788"></a>
<a id="trace-23790"></a>
<a id="trace-23847"></a>
<a id="trace-23849"></a>
<a id="trace-23900"></a>
<a id="trace-23902"></a>
<a id="trace-23954"></a>
<a id="trace-23956"></a>
<a id="trace-23975"></a>
<a id="trace-23977"></a>
<a id="trace-24022"></a>
<a id="trace-24024"></a>
<a id="trace-24063"></a>
<a id="trace-24065"></a>
<a id="trace-24176"></a>
<a id="trace-24178"></a>
<a id="trace-24215"></a>
<a id="trace-24217"></a>
<a id="trace-24259"></a>
<a id="trace-24261"></a>
<a id="trace-24296"></a>
<a id="trace-24298"></a>
<a id="trace-24317"></a>
<a id="trace-24319"></a>
<a id="trace-24345"></a>
<a id="trace-24347"></a>
<a id="trace-24399"></a>
<a id="trace-24401"></a>
<a id="trace-24418"></a>
<a id="trace-24420"></a>
<a id="trace-27234"></a>
<a id="trace-27236"></a>
<a id="trace-27282"></a>
<a id="trace-27284"></a>
<a id="trace-27708"></a>
<a id="trace-27710"></a>
<a id="trace-27745"></a>
<a id="trace-27747"></a>
<a id="trace-27778"></a>
<a id="trace-27780"></a>
<a id="trace-27805"></a>
<a id="trace-27807"></a>
<a id="trace-27851"></a>
<a id="trace-27853"></a>
<a id="trace-27886"></a>
<a id="trace-27888"></a>
<a id="trace-27932"></a>
<a id="trace-27934"></a>
<a id="trace-27974"></a>
<a id="trace-27976"></a>
<a id="trace-28081"></a>
<a id="trace-28083"></a>
<a id="trace-28620"></a>
<a id="trace-28622"></a>
<a id="trace-28635"></a>
<a id="trace-28637"></a>
<a id="trace-28655"></a>
<a id="trace-28657"></a>
<a id="trace-28700"></a>
<a id="trace-28702"></a>
<a id="trace-28719"></a>
<a id="trace-28721"></a>
<a id="trace-28753"></a>
<a id="trace-28755"></a>
<a id="trace-28773"></a>
<a id="trace-28775"></a>
<a id="trace-31772"></a>
<a id="trace-31774"></a>
<a id="trace-31799"></a>
<a id="trace-31801"></a>
<a id="trace-31847"></a>
<a id="trace-31849"></a>
<a id="trace-31889"></a>
<a id="trace-31891"></a>
<a id="trace-31905"></a>
<a id="trace-31907"></a>
<a id="trace-31972"></a>
<a id="trace-31974"></a>
<a id="trace-31986"></a>
<a id="trace-31988"></a>
<a id="trace-32061"></a>
<a id="trace-32063"></a>
<a id="trace-32074"></a>
<a id="trace-32076"></a>
<a id="trace-32099"></a>
<a id="trace-32101"></a>
<a id="trace-32122"></a>
<a id="trace-32124"></a>
<a id="trace-32166"></a>
<a id="trace-32168"></a>
<a id="trace-32197"></a>
<a id="trace-32199"></a>
<a id="trace-32641"></a>
<a id="trace-32643"></a>
<a id="trace-32667"></a>
<a id="trace-32669"></a>
<a id="trace-32684"></a>
<a id="trace-32686"></a>
<a id="trace-32762"></a>
<a id="trace-32764"></a>
<a id="trace-32773"></a>
<a id="trace-32775"></a>
<a id="trace-32791"></a>
<a id="trace-32793"></a>
<a id="trace-32835"></a>
<a id="trace-32837"></a>
<a id="trace-32855"></a>
<a id="trace-32857"></a>
<a id="trace-32886"></a>
<a id="trace-32888"></a>
<a id="trace-32908"></a>
<a id="trace-32910"></a>
<a id="trace-32916"></a>
<a id="trace-32918"></a>
<a id="trace-33032"></a>
<a id="trace-33034"></a>
<a id="trace-33215"></a>
<a id="trace-33217"></a>
<a id="trace-33255"></a>
<a id="trace-33257"></a>
<a id="trace-33279"></a>
<a id="trace-33281"></a>
<a id="trace-33311"></a>
<a id="trace-33313"></a>
<a id="trace-33331"></a>
<a id="trace-33333"></a>
<a id="trace-33352"></a>
<a id="trace-33354"></a>
<a id="trace-33441"></a>
<a id="trace-33443"></a>
<a id="trace-33460"></a>
<a id="trace-33462"></a>
<a id="trace-33478"></a>
<a id="trace-33480"></a>
<a id="trace-33489"></a>
<a id="trace-33491"></a>
<a id="trace-33511"></a>
<a id="trace-33513"></a>
<a id="trace-33541"></a>
<a id="trace-33543"></a>
<a id="trace-33556"></a>
<a id="trace-33558"></a>
<a id="trace-33575"></a>
<a id="trace-33577"></a>
<a id="trace-33589"></a>
<a id="trace-33591"></a>
<a id="trace-33668"></a>
<a id="trace-33670"></a>
<a id="trace-33705"></a>
<a id="trace-33707"></a>
<a id="trace-33738"></a>
<a id="trace-33740"></a>
<a id="trace-33754"></a>
<a id="trace-33756"></a>
<a id="trace-33781"></a>
<a id="trace-33783"></a>
<a id="trace-33799"></a>
<a id="trace-33801"></a>
<a id="trace-33818"></a>
<a id="trace-33820"></a>
<a id="trace-33834"></a>
<a id="trace-33836"></a>
<a id="trace-33915"></a>
<a id="trace-33917"></a>
<a id="trace-33934"></a>
<a id="trace-33936"></a>
<a id="trace-33995"></a>
<a id="trace-33997"></a>
<a id="trace-34016"></a>
<a id="trace-34018"></a>
<a id="trace-34038"></a>
<a id="trace-34040"></a>
<a id="trace-34054"></a>
<a id="trace-34056"></a>
<a id="trace-34075"></a>
<a id="trace-34077"></a>
<a id="trace-34133"></a>
<a id="trace-34135"></a>
<a id="trace-34223"></a>
<a id="trace-34225"></a>
<a id="trace-34237"></a>
<a id="trace-34239"></a>
<a id="trace-34258"></a>
<a id="trace-34260"></a>
<a id="trace-34285"></a>
<a id="trace-34287"></a>
<a id="trace-34296"></a>
<a id="trace-34298"></a>
<a id="trace-34328"></a>
<a id="trace-34330"></a>
<a id="trace-34345"></a>
<a id="trace-34347"></a>
<a id="trace-34355"></a>
<a id="trace-34357"></a>
<a id="trace-34433"></a>
<a id="trace-34435"></a>
<a id="trace-34443"></a>
<a id="trace-34445"></a>
<a id="trace-34459"></a>
<a id="trace-34461"></a>
<a id="trace-34470"></a>
<a id="trace-34472"></a>
<a id="trace-34483"></a>
<a id="trace-34485"></a>
<a id="trace-34495"></a>
<a id="trace-34497"></a>
<a id="trace-34509"></a>
<a id="trace-34511"></a>
<a id="trace-34690"></a>
<a id="trace-34692"></a>
<a id="trace-34736"></a>
<a id="trace-34738"></a>
<a id="trace-34755"></a>
<a id="trace-34757"></a>
<a id="trace-34780"></a>
<a id="trace-34782"></a>
<a id="trace-34823"></a>
<a id="trace-34825"></a>
<a id="trace-34841"></a>
<a id="trace-34843"></a>
<a id="trace-34935"></a>
<a id="trace-34937"></a>
<a id="trace-34972"></a>
<a id="trace-34974"></a>
<a id="trace-35033"></a>
<a id="trace-35035"></a>
<a id="trace-35056"></a>
<a id="trace-35058"></a>
<a id="trace-35073"></a>
<a id="trace-35075"></a>
<a id="trace-35101"></a>
<a id="trace-35103"></a>
<a id="trace-35138"></a>
<a id="trace-35140"></a>
<a id="trace-35227"></a>
<a id="trace-35229"></a>
<a id="trace-35267"></a>
<a id="trace-35269"></a>
<a id="trace-35283"></a>
<a id="trace-35285"></a>
<a id="trace-35307"></a>
<a id="trace-35309"></a>
<a id="trace-35361"></a>
<a id="trace-35363"></a>
<a id="trace-35380"></a>
<a id="trace-35382"></a>
<a id="trace-35464"></a>
<a id="trace-35466"></a>
<a id="trace-35479"></a>
<a id="trace-35481"></a>
<a id="trace-35495"></a>
<a id="trace-35497"></a>
<a id="trace-35505"></a>
<a id="trace-35507"></a>
<a id="trace-35522"></a>
<a id="trace-35524"></a>
<a id="trace-35535"></a>
<a id="trace-35537"></a>
<a id="trace-35558"></a>
<a id="trace-35560"></a>
<a id="trace-35573"></a>
<a id="trace-35575"></a>
<a id="trace-35583"></a>
<a id="trace-35585"></a>
<a id="trace-35660"></a>
<a id="trace-35669"></a>
<a id="trace-35682"></a>
<a id="trace-35705"></a>
<a id="trace-35707"></a>
<a id="trace-35717"></a>
<a id="trace-35719"></a>
<a id="trace-35732"></a>
<a id="trace-35734"></a>
<a id="trace-35756"></a>
<a id="trace-35758"></a>
<a id="trace-35764"></a>
<a id="trace-35766"></a>
<a id="trace-35837"></a>
<a id="trace-35839"></a>
<a id="trace-35848"></a>
<a id="trace-35850"></a>
<a id="trace-35863"></a>
<a id="trace-35865"></a>
<a id="trace-35874"></a>
<a id="trace-35876"></a>
<a id="trace-35890"></a>
<a id="trace-35892"></a>
<a id="trace-35900"></a>
<a id="trace-35902"></a>
<a id="trace-35916"></a>
<a id="trace-35918"></a>
<a id="trace-35938"></a>
<a id="trace-35940"></a>
<a id="trace-35946"></a>
<a id="trace-35948"></a>
<a id="trace-36020"></a>
<a id="trace-36022"></a>
<a id="trace-36032"></a>
<a id="trace-36034"></a>
<a id="trace-36050"></a>
<a id="trace-36052"></a>
<a id="trace-36060"></a>
<a id="trace-36062"></a>
<a id="trace-36077"></a>
<a id="trace-36079"></a>
<a id="trace-36101"></a>
<a id="trace-36103"></a>
<a id="trace-36202"></a>
<a id="trace-36204"></a>
<a id="trace-36214"></a>
<a id="trace-36216"></a>
<a id="trace-36230"></a>
<a id="trace-36232"></a>
<a id="trace-36252"></a>
<a id="trace-36254"></a>
<a id="trace-36263"></a>
<a id="trace-36265"></a>
<a id="trace-36276"></a>
<a id="trace-36278"></a>
<a id="trace-36285"></a>
<a id="trace-36287"></a>
<a id="trace-36300"></a>
<a id="trace-36302"></a>
<a id="trace-36309"></a>
<a id="trace-36311"></a>
<a id="trace-36384"></a>
<a id="trace-36386"></a>
<a id="trace-36395"></a>
<a id="trace-36397"></a>
<a id="trace-36409"></a>
<a id="trace-36411"></a>
<a id="trace-36419"></a>
<a id="trace-36421"></a>
<a id="trace-36445"></a>
<a id="trace-36447"></a>
<a id="trace-36464"></a>
<a id="trace-36466"></a>
<a id="trace-36474"></a>
<a id="trace-36476"></a>
<a id="trace-36490"></a>
<a id="trace-36492"></a>
<a id="trace-36503"></a>
<a id="trace-36505"></a>
<a id="trace-36580"></a>
<a id="trace-36582"></a>
<a id="trace-36595"></a>
<a id="trace-36597"></a>
<a id="trace-36612"></a>
<a id="trace-36614"></a>
<a id="trace-36623"></a>
<a id="trace-36625"></a>
<a id="trace-36642"></a>
<a id="trace-36644"></a>
<a id="trace-36671"></a>
<a id="trace-36673"></a>
<a id="trace-36684"></a>
<a id="trace-36686"></a>
<a id="trace-36702"></a>
<a id="trace-36704"></a>
<a id="trace-36714"></a>
<a id="trace-36716"></a>
<a id="trace-36805"></a>
<a id="trace-36807"></a>
<a id="trace-36822"></a>
<a id="trace-36824"></a>
<a id="trace-36835"></a>
<a id="trace-36837"></a>
<a id="trace-36863"></a>
<a id="trace-36865"></a>
<a id="trace-36880"></a>
<a id="trace-36882"></a>
<a id="trace-36894"></a>
<a id="trace-36896"></a>
<a id="trace-36917"></a>
<a id="trace-36919"></a>
<a id="trace-36938"></a>
<a id="trace-36940"></a>
<a id="trace-37024"></a>
<a id="trace-37026"></a>
<a id="trace-37040"></a>
<a id="trace-37042"></a>
<a id="trace-37054"></a>
<a id="trace-37056"></a>
<a id="trace-37074"></a>
<a id="trace-37076"></a>
<a id="trace-37091"></a>
<a id="trace-37093"></a>
<a id="trace-37106"></a>
<a id="trace-37108"></a>
<a id="trace-37132"></a>
<a id="trace-37134"></a>
<a id="trace-37149"></a>
<a id="trace-37151"></a>
<a id="trace-37262"></a>
<a id="trace-37264"></a>
<a id="trace-37274"></a>
<a id="trace-37276"></a>
<a id="trace-37294"></a>
<a id="trace-37296"></a>
<a id="trace-37323"></a>
<a id="trace-37325"></a>
<a id="trace-37353"></a>
<a id="trace-37355"></a>
<a id="trace-37367"></a>
<a id="trace-37369"></a>
<a id="trace-37454"></a>
<a id="trace-37456"></a>
<a id="trace-37475"></a>
<a id="trace-37477"></a>
<a id="trace-37490"></a>
<a id="trace-37492"></a>
<a id="trace-37511"></a>
<a id="trace-37513"></a>
<a id="trace-37523"></a>
<a id="trace-37525"></a>
<a id="trace-37544"></a>
<a id="trace-37546"></a>
<a id="trace-37557"></a>
<a id="trace-37559"></a>
<a id="trace-37577"></a>
<a id="trace-37579"></a>
<a id="trace-37666"></a>
<a id="trace-37668"></a>
<a id="trace-37694"></a>
<a id="trace-37696"></a>
<a id="trace-37737"></a>
<a id="trace-37739"></a>
<a id="trace-37765"></a>
<a id="trace-37767"></a>
<a id="trace-37801"></a>
<a id="trace-37803"></a>
<a id="trace-37878"></a>
<a id="trace-37880"></a>
<a id="trace-37890"></a>
<a id="trace-37892"></a>
<a id="trace-37910"></a>
<a id="trace-37912"></a>
<a id="trace-37922"></a>
<a id="trace-37924"></a>
<a id="trace-37939"></a>
<a id="trace-37941"></a>
<a id="trace-37954"></a>
<a id="trace-37956"></a>
<a id="trace-37984"></a>
<a id="trace-37986"></a>
<a id="trace-38014"></a>
<a id="trace-38016"></a>
<a id="trace-38092"></a>
<a id="trace-38094"></a>
<a id="trace-38107"></a>
<a id="trace-38109"></a>
<a id="trace-38130"></a>
<a id="trace-38132"></a>
<a id="trace-38159"></a>
<a id="trace-38161"></a>
<a id="trace-38172"></a>
<a id="trace-38174"></a>
<a id="trace-38190"></a>
<a id="trace-38192"></a>
<a id="trace-38203"></a>
<a id="trace-38205"></a>
<a id="trace-38221"></a>
<a id="trace-38223"></a>
<a id="trace-38234"></a>
<a id="trace-38236"></a>
<a id="trace-38314"></a>
<a id="trace-38316"></a>
<a id="trace-38343"></a>
<a id="trace-38345"></a>
<a id="trace-38395"></a>
<a id="trace-38397"></a>
<a id="trace-38411"></a>
<a id="trace-38413"></a>
<a id="trace-38421"></a>
<a id="trace-38423"></a>
<a id="trace-38438"></a>
<a id="trace-38440"></a>
<a id="trace-38452"></a>
<a id="trace-38454"></a>
<a id="trace-38543"></a>
<a id="trace-38545"></a>
<a id="trace-38559"></a>
<a id="trace-38561"></a>
<a id="trace-38572"></a>
<a id="trace-38574"></a>
<a id="trace-38592"></a>
<a id="trace-38594"></a>
<a id="trace-38610"></a>
<a id="trace-38612"></a>
<a id="trace-38628"></a>
<a id="trace-38630"></a>
<a id="trace-38664"></a>
<a id="trace-38666"></a>
<a id="trace-38749"></a>
<a id="trace-38751"></a>
<a id="trace-38762"></a>
<a id="trace-38764"></a>
<a id="trace-38790"></a>
<a id="trace-38792"></a>
<a id="trace-38811"></a>
<a id="trace-38813"></a>
<a id="trace-38824"></a>
<a id="trace-38826"></a>
<a id="trace-38840"></a>
<a id="trace-38842"></a>
<a id="trace-38853"></a>
<a id="trace-38855"></a>
<a id="trace-38877"></a>
<a id="trace-38879"></a>
<a id="trace-38893"></a>
<a id="trace-38895"></a>
<a id="trace-38980"></a>
<a id="trace-38982"></a>
<a id="trace-39042"></a>
<a id="trace-39044"></a>
<a id="trace-39057"></a>
<a id="trace-39059"></a>
<a id="trace-39207"></a>
<a id="trace-39209"></a>
<a id="trace-39219"></a>
<a id="trace-39221"></a>
<a id="trace-39239"></a>
<a id="trace-39241"></a>
<a id="trace-39283"></a>
<a id="trace-39285"></a>
<a id="trace-39301"></a>
<a id="trace-39303"></a>
<a id="trace-39312"></a>
<a id="trace-39314"></a>
<a id="trace-39388"></a>
<a id="trace-39390"></a>
<a id="trace-39401"></a>
<a id="trace-39403"></a>
<a id="trace-39421"></a>
<a id="trace-39423"></a>
<a id="trace-39466"></a>
<a id="trace-39468"></a>
<a id="trace-39486"></a>
<a id="trace-39488"></a>
<a id="trace-39523"></a>
<a id="trace-39525"></a>
<a id="trace-39618"></a>
<a id="trace-39620"></a>
<a id="trace-39634"></a>
<a id="trace-39636"></a>
<a id="trace-39648"></a>
<a id="trace-39650"></a>
<a id="trace-39678"></a>
<a id="trace-39680"></a>
<a id="trace-39709"></a>
<a id="trace-39711"></a>
<a id="trace-39730"></a>
<a id="trace-39732"></a>
<a id="trace-39746"></a>
<a id="trace-39748"></a>
<a id="trace-39828"></a>
<a id="trace-39830"></a>
<a id="trace-39847"></a>
<a id="trace-39849"></a>
<a id="trace-39863"></a>
<a id="trace-39865"></a>
<a id="trace-39874"></a>
<a id="trace-39876"></a>
<a id="trace-39891"></a>
<a id="trace-39893"></a>
<a id="trace-39905"></a>
<a id="trace-39907"></a>
<a id="trace-39921"></a>
<a id="trace-39923"></a>
<a id="trace-39949"></a>
<a id="trace-39951"></a>
<a id="trace-39962"></a>
<a id="trace-39964"></a>
<a id="trace-40041"></a>
<a id="trace-40043"></a>
<a id="trace-40077"></a>
<a id="trace-40079"></a>
<a id="trace-40117"></a>
<a id="trace-40119"></a>
<a id="trace-40130"></a>
<a id="trace-40132"></a>
<a id="trace-40145"></a>
<a id="trace-40147"></a>
<a id="trace-40157"></a>
<a id="trace-40159"></a>
<a id="trace-40175"></a>
<a id="trace-40177"></a>
<a id="trace-40188"></a>
<a id="trace-40190"></a>
<a id="trace-40265"></a>
<a id="trace-40267"></a>
<a id="trace-40275"></a>
<a id="trace-40277"></a>
<a id="trace-40292"></a>
<a id="trace-40294"></a>
<a id="trace-40306"></a>
<a id="trace-40308"></a>
<a id="trace-40330"></a>
<a id="trace-40332"></a>
<a id="trace-40348"></a>
<a id="trace-40350"></a>
<a id="trace-40366"></a>
<a id="trace-40368"></a>
<a id="trace-40377"></a>
<a id="trace-40379"></a>
<a id="trace-40403"></a>
<a id="trace-40405"></a>
<a id="trace-40416"></a>
<a id="trace-40418"></a>
<a id="trace-40493"></a>
<a id="trace-40495"></a>
<a id="trace-40505"></a>
<a id="trace-40507"></a>
<a id="trace-40521"></a>
<a id="trace-40523"></a>
<a id="trace-40532"></a>
<a id="trace-40534"></a>
<a id="trace-40563"></a>
<a id="trace-40565"></a>
<a id="trace-40579"></a>
<a id="trace-40581"></a>
<a id="trace-40592"></a>
<a id="trace-40594"></a>
<a id="trace-40618"></a>
<a id="trace-40620"></a>
<a id="trace-40630"></a>
<a id="trace-40632"></a>
<a id="trace-40709"></a>
<a id="trace-40711"></a>
<a id="trace-40728"></a>
<a id="trace-40730"></a>
<a id="trace-40747"></a>
<a id="trace-40749"></a>
<a id="trace-40776"></a>
<a id="trace-40778"></a>
<a id="trace-40788"></a>
<a id="trace-40790"></a>
<a id="trace-40803"></a>
<a id="trace-40805"></a>
<a id="trace-40815"></a>
<a id="trace-40817"></a>
<a id="trace-40834"></a>
<a id="trace-40836"></a>
<a id="trace-40848"></a>
<a id="trace-40850"></a>
<a id="trace-40956"></a>
<a id="trace-40958"></a>
<a id="trace-40973"></a>
<a id="trace-40975"></a>
<a id="trace-40997"></a>
<a id="trace-40999"></a>
<a id="trace-41011"></a>
<a id="trace-41013"></a>
<a id="trace-41029"></a>
<a id="trace-41031"></a>
<a id="trace-41040"></a>
<a id="trace-41042"></a>
<a id="trace-41143"></a>
<a id="trace-41145"></a>
<a id="trace-41155"></a>
<a id="trace-41157"></a>
<a id="trace-41173"></a>
<a id="trace-41175"></a>
<a id="trace-41184"></a>
<a id="trace-41186"></a>
<a id="trace-41220"></a>
<a id="trace-41222"></a>
<a id="trace-41241"></a>
<a id="trace-41243"></a>
<a id="trace-41261"></a>
<a id="trace-41263"></a>
<a id="trace-41278"></a>
<a id="trace-41280"></a>
<a id="trace-41290"></a>
<a id="trace-41292"></a>
<a id="trace-41369"></a>
<a id="trace-41371"></a>
<a id="trace-41396"></a>
<a id="trace-41398"></a>
<a id="trace-41409"></a>
<a id="trace-41411"></a>
<a id="trace-41437"></a>
<a id="trace-41439"></a>
<a id="trace-41485"></a>
<a id="trace-41487"></a>
<a id="trace-41501"></a>
<a id="trace-41503"></a>
<a id="trace-41596"></a>
<a id="trace-41598"></a>
<a id="trace-41612"></a>
<a id="trace-41614"></a>
<a id="trace-41644"></a>
<a id="trace-41646"></a>
<a id="trace-41659"></a>
<a id="trace-41661"></a>
<a id="trace-41698"></a>
<a id="trace-41700"></a>
<a id="trace-41711"></a>
<a id="trace-41713"></a>
<a id="trace-41792"></a>
<a id="trace-41794"></a>
<a id="trace-41807"></a>
<a id="trace-41809"></a>
<a id="trace-41827"></a>
<a id="trace-41829"></a>
<a id="trace-41840"></a>
<a id="trace-41842"></a>
<a id="trace-41866"></a>
<a id="trace-41868"></a>
<a id="trace-41881"></a>
<a id="trace-41883"></a>
<a id="trace-41897"></a>
<a id="trace-41899"></a>
<a id="trace-41909"></a>
<a id="trace-41911"></a>
<a id="trace-41929"></a>
<a id="trace-41931"></a>
<a id="trace-41941"></a>
<a id="trace-41943"></a>
<a id="trace-42017"></a>
<a id="trace-42019"></a>
<a id="trace-42030"></a>
<a id="trace-42032"></a>
<a id="trace-42080"></a>
<a id="trace-42082"></a>
<a id="trace-42092"></a>
<a id="trace-42094"></a>
<a id="trace-42110"></a>
<a id="trace-42112"></a>
<a id="trace-42129"></a>
<a id="trace-42131"></a>
<a id="trace-42149"></a>
<a id="trace-42151"></a>
<a id="trace-42238"></a>
<a id="trace-42240"></a>
<a id="trace-42249"></a>
<a id="trace-42251"></a>
<a id="trace-42279"></a>
<a id="trace-42281"></a>
<a id="trace-42298"></a>
<a id="trace-42300"></a>
<a id="trace-42312"></a>
<a id="trace-42314"></a>
<a id="trace-42328"></a>
<a id="trace-42330"></a>
<a id="trace-42341"></a>
<a id="trace-42343"></a>
<a id="trace-42377"></a>
<a id="trace-42379"></a>
<a id="trace-42460"></a>
<a id="trace-42462"></a>
<a id="trace-42490"></a>
<a id="trace-42492"></a>
<a id="trace-42502"></a>
<a id="trace-42504"></a>
<a id="trace-42519"></a>
<a id="trace-42521"></a>
<a id="trace-42552"></a>
<a id="trace-42554"></a>
<a id="trace-42565"></a>
<a id="trace-42567"></a>
<a id="trace-42583"></a>
<a id="trace-42585"></a>
<a id="trace-42672"></a>
<a id="trace-42674"></a>
<a id="trace-42738"></a>
<a id="trace-42740"></a>
<a id="trace-42751"></a>
<a id="trace-42753"></a>
<a id="trace-42770"></a>
<a id="trace-42772"></a>
<a id="trace-42783"></a>
<a id="trace-42785"></a>
<a id="trace-42812"></a>
<a id="trace-42814"></a>
<a id="trace-42891"></a>
<a id="trace-42893"></a>
<a id="trace-42903"></a>
<a id="trace-42905"></a>
<a id="trace-42919"></a>
<a id="trace-42921"></a>
<a id="trace-42953"></a>
<a id="trace-42955"></a>
<a id="trace-42970"></a>
<a id="trace-42972"></a>
<a id="trace-42993"></a>
<a id="trace-42995"></a>
<a id="trace-43018"></a>
<a id="trace-43020"></a>
<a id="trace-43032"></a>
<a id="trace-43034"></a>
<a id="trace-43111"></a>
<a id="trace-43113"></a>
<a id="trace-43125"></a>
<a id="trace-43127"></a>
<a id="trace-43181"></a>
<a id="trace-43183"></a>
<a id="trace-43202"></a>
<a id="trace-43204"></a>
<a id="trace-43216"></a>
<a id="trace-43218"></a>
<a id="trace-43238"></a>
<a id="trace-43240"></a>
<a id="trace-43249"></a>
<a id="trace-43251"></a>
<a id="trace-43331"></a>
<a id="trace-43333"></a>
<a id="trace-43359"></a>
<a id="trace-43361"></a>
<a id="trace-43372"></a>
<a id="trace-43374"></a>
<a id="trace-43392"></a>
<a id="trace-43394"></a>
<a id="trace-43418"></a>
<a id="trace-43420"></a>
<a id="trace-43432"></a>
<a id="trace-43434"></a>
<a id="trace-43453"></a>
<a id="trace-43455"></a>
<a id="trace-43468"></a>
<a id="trace-43470"></a>
<a id="trace-43557"></a>
<a id="trace-43559"></a>
<a id="trace-43593"></a>
<a id="trace-43595"></a>
<a id="trace-43610"></a>
<a id="trace-43612"></a>
<a id="trace-43625"></a>
<a id="trace-43627"></a>
<a id="trace-43640"></a>
<a id="trace-43642"></a>
<a id="trace-43651"></a>
<a id="trace-43653"></a>
<a id="trace-43770"></a>
<a id="trace-43772"></a>
<a id="trace-43790"></a>
<a id="trace-43792"></a>
<a id="trace-43805"></a>
<a id="trace-43807"></a>
<a id="trace-43823"></a>
<a id="trace-43825"></a>
<a id="trace-43840"></a>
<a id="trace-43842"></a>
<a id="trace-43862"></a>
<a id="trace-43864"></a>
<a id="trace-43874"></a>
<a id="trace-43876"></a>
<a id="trace-43893"></a>
<a id="trace-43895"></a>
<a id="trace-43904"></a>
<a id="trace-43906"></a>
<a id="trace-43982"></a>
<a id="trace-43984"></a>
<a id="trace-43995"></a>
<a id="trace-43997"></a>
<a id="trace-44014"></a>
<a id="trace-44016"></a>
<a id="trace-44029"></a>
<a id="trace-44031"></a>
<a id="trace-44057"></a>
<a id="trace-44059"></a>
<a id="trace-44079"></a>
<a id="trace-44081"></a>
<a id="trace-44093"></a>
<a id="trace-44095"></a>
<a id="trace-44114"></a>
<a id="trace-44116"></a>
<a id="trace-44133"></a>
<a id="trace-44135"></a>
<a id="trace-44218"></a>
<a id="trace-44220"></a>
<a id="trace-44234"></a>
<a id="trace-44236"></a>
<a id="trace-44248"></a>
<a id="trace-44250"></a>
<a id="trace-44265"></a>
<a id="trace-44267"></a>
<a id="trace-44306"></a>
<a id="trace-44308"></a>
<a id="trace-44323"></a>
<a id="trace-44325"></a>
<a id="trace-44341"></a>
<a id="trace-44343"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 955): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362514587421897, 'next_transition': 1305}.
<a id="trace-973"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 973): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362514615933857, 'next_transition': 1301}.
<a id="trace-1301"></a>
<a id="trace-1303"></a>
<a id="trace-1340"></a>
<a id="trace-1342"></a>
<a id="trace-1383"></a>
<a id="trace-1385"></a>
<a id="trace-1419"></a>
<a id="trace-1421"></a>
<a id="trace-1454"></a>
<a id="trace-1456"></a>
<a id="trace-1497"></a>
<a id="trace-1499"></a>
<a id="trace-1531"></a>
<a id="trace-1533"></a>
<a id="trace-1557"></a>
<a id="trace-1559"></a>
<a id="trace-1648"></a>
<a id="trace-1650"></a>
<a id="trace-1674"></a>
<a id="trace-1676"></a>
<a id="trace-1697"></a>
<a id="trace-1699"></a>
<a id="trace-1727"></a>
<a id="trace-1729"></a>
<a id="trace-1756"></a>
<a id="trace-1758"></a>
<a id="trace-1779"></a>
<a id="trace-1781"></a>
<a id="trace-1806"></a>
<a id="trace-1808"></a>
<a id="trace-1819"></a>
<a id="trace-1821"></a>
<a id="trace-1847"></a>
<a id="trace-1849"></a>
<a id="trace-1971"></a>
<a id="trace-1973"></a>
<a id="trace-2059"></a>
<a id="trace-2061"></a>
<a id="trace-2092"></a>
<a id="trace-2094"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1301): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9235470601025286, 'next_transition': 1340}.
<a id="trace-1856"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1856): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1577. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.000011597934247, 'next_transition': 2961}.
<a id="trace-2104"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2104): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1985. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06375341657511352, 'next_transition': 2419}.
<a id="trace-2419"></a>
<a id="trace-2421"></a>
<a id="trace-2458"></a>
<a id="trace-2460"></a>
<a id="trace-2486"></a>
<a id="trace-2488"></a>
<a id="trace-2508"></a>
<a id="trace-2510"></a>
<a id="trace-2540"></a>
<a id="trace-2542"></a>
<a id="trace-2573"></a>
<a id="trace-2575"></a>
<a id="trace-2596"></a>
<a id="trace-2598"></a>
<a id="trace-2623"></a>
<a id="trace-2625"></a>
<a id="trace-2714"></a>
<a id="trace-2716"></a>
<a id="trace-2745"></a>
<a id="trace-2747"></a>
<a id="trace-2771"></a>
<a id="trace-2773"></a>
<a id="trace-2799"></a>
<a id="trace-2801"></a>
<a id="trace-2832"></a>
<a id="trace-2834"></a>
<a id="trace-2859"></a>
<a id="trace-2861"></a>
<a id="trace-2889"></a>
<a id="trace-2891"></a>
<a id="trace-2917"></a>
<a id="trace-2919"></a>
<a id="trace-2947"></a>
<a id="trace-2949"></a>
<a id="trace-2976"></a>
<a id="trace-2978"></a>
<a id="trace-3058"></a>
<a id="trace-3060"></a>
<a id="trace-3077"></a>
<a id="trace-3079"></a>
<a id="trace-3100"></a>
<a id="trace-3102"></a>
<a id="trace-3114"></a>
<a id="trace-3116"></a>
<a id="trace-3130"></a>
<a id="trace-3132"></a>
<a id="trace-3142"></a>
<a id="trace-3144"></a>
<a id="trace-3167"></a>
<a id="trace-3169"></a>
<a id="trace-3190"></a>
<a id="trace-3192"></a>
- 16.25s–28.75s (×52), actor 5, squad 0 (trace 2419): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1990. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749462304838557, 'next_transition': 2458}.
<a id="trace-2961"></a>
- 24.60s–24.60s (×1), actor 8, squad 1 (trace 2961): matching received arrivals: deployment leg complete. Knowledge: actor memory at 20.00s, trace 2643. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 263}.
<a id="trace-263"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (events line 263): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3177"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3177): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3177. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3235}.
<a id="trace-3178"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3178): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3178. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3235}.
<a id="trace-3200"></a>
- 29.00s–29.00s (×1), actor 0, squad 0 (trace 3200): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 2987. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15309727708225235, 'next_transition': 3210}.
<a id="trace-3210"></a>
<a id="trace-3212"></a>
<a id="trace-3230"></a>
<a id="trace-3232"></a>
<a id="trace-3478"></a>
<a id="trace-3480"></a>
<a id="trace-3491"></a>
<a id="trace-3493"></a>
<a id="trace-3505"></a>
<a id="trace-3507"></a>
<a id="trace-3520"></a>
<a id="trace-3522"></a>
- 29.25s–31.75s (×12), actor 5, squad 0 (trace 3210): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 28.55s, trace 3178. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3230}.
<a id="trace-3235"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3235): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 2995. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4238}.
<a id="trace-3238"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3238): MoveTactically. Knowledge: actor memory at 25.00s, trace 2995. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4238}.
<a id="trace-3239"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3239): traveling overwatch. Knowledge: actor memory at 25.00s, trace 2995. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4238}.
<a id="trace-3240"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3240): Reorganise complete. Knowledge: actor memory at 25.00s, trace 2995. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.187447828307837, 'next_transition': 4238}.
<a id="trace-286"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (events line 286): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3553}.
<a id="trace-3538"></a>
<a id="trace-3540"></a>
- 32.25s–32.25s (×2), actor 5, squad 0 (trace 3538): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3395. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3553}.
<a id="trace-3545"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 3545): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 3545. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3553}.
<a id="trace-3546"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 3546): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 3546. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3553}.
<a id="trace-3553"></a>
<a id="trace-3555"></a>
<a id="trace-3571"></a>
<a id="trace-3573"></a>
<a id="trace-3584"></a>
<a id="trace-3586"></a>
<a id="trace-3602"></a>
<a id="trace-3604"></a>
- 32.75s–34.25s (×8), actor 5, squad 0 (trace 3553): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 3546. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3571}.
<a id="trace-3609"></a>
- 34.25s–34.25s (×1), actor 0, squad 0 (trace 3609): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 3390. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3994}.
<a id="trace-3616"></a>
- 34.25s–34.25s (×1), actor 0, squad 0 (trace 3616): MoveTactically. Knowledge: actor memory at 30.00s, trace 3390. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3994}.
<a id="trace-3617"></a>
- 34.25s–34.25s (×1), actor 0, squad 0 (trace 3617): traveling overwatch. Knowledge: actor memory at 30.00s, trace 3390. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3994}.
<a id="trace-3618"></a>
- 34.25s–34.25s (×1), actor 0, squad 0 (trace 3618): Reorganise complete. Knowledge: actor memory at 30.00s, trace 3390. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3994}.
<a id="trace-3994"></a>
<a id="trace-3996"></a>
<a id="trace-4087"></a>
<a id="trace-4089"></a>
<a id="trace-4116"></a>
<a id="trace-4118"></a>
<a id="trace-4143"></a>
<a id="trace-4145"></a>
<a id="trace-4176"></a>
<a id="trace-4178"></a>
<a id="trace-4215"></a>
<a id="trace-4217"></a>
<a id="trace-4231"></a>
<a id="trace-4233"></a>
<a id="trace-5318"></a>
<a id="trace-5320"></a>
<a id="trace-5348"></a>
<a id="trace-5350"></a>
<a id="trace-5398"></a>
<a id="trace-5400"></a>
<a id="trace-5431"></a>
<a id="trace-5433"></a>
<a id="trace-5539"></a>
<a id="trace-5541"></a>
<a id="trace-5584"></a>
<a id="trace-5586"></a>
<a id="trace-5611"></a>
<a id="trace-5613"></a>
<a id="trace-5633"></a>
<a id="trace-5635"></a>
- 34.75s–41.75s (×30), actor 5, squad 0 (trace 3994): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 3546. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13782050359979106, 'next_transition': 4087}.
<a id="trace-4238"></a>
- 37.80s–37.80s (×1), actor 8, squad 1 (trace 4238): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 4015. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4301}.
<a id="trace-4301"></a>
- 38.00s–38.00s (×1), actor 8, squad 1 (trace 4301): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4015. Next observer evidence: None.
<a id="trace-4302"></a>
- 38.00s–38.00s (×1), actor 8, squad 1 (trace 4302): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4015. Next observer evidence: None.
<a id="trace-4303"></a>
<a id="trace-4557"></a>
<a id="trace-4813"></a>
<a id="trace-5064"></a>
- 38.00s–38.20s (×4), actor 8, squad 1 (trace 4303): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4015. Next observer evidence: None.
<a id="trace-5627"></a>
- 41.55s–41.55s (×1), actor 8, squad 1 (trace 5627): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 5457. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450116521239295, 'next_transition': 418}.
<a id="trace-417"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 417): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-418"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 418): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5654"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 5654): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.762272 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5654. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2212619828372905, 'next_transition': 5674}.
<a id="trace-5655"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 5655): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.762272 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5655. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2212619828372905, 'next_transition': 5674}.
<a id="trace-5656"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 5656): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.762272 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5656. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7945160082717032, 'next_transition': 5699}.
<a id="trace-5657"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 5657): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.762272 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 5657. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7945160082717032, 'next_transition': 5699}.
<a id="trace-5674"></a>
<a id="trace-5676"></a>
<a id="trace-5692"></a>
<a id="trace-5694"></a>
<a id="trace-5965"></a>
<a id="trace-5967"></a>
- 42.25s–43.25s (×6), actor 5, squad 0 (trace 5674): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 5657. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34917348333538484, 'next_transition': 5692}.
<a id="trace-5699"></a>
- 42.85s–42.85s (×1), actor 8, squad 1 (trace 5699): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 5457. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1212627482318083, 'next_transition': 7744}.
<a id="trace-5985"></a>
- 43.60s–43.60s (×1), actor 0, squad 0 (trace 5985): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 5449. Next observer evidence: None.
<a id="trace-5986"></a>
- 43.60s–43.60s (×1), actor 0, squad 0 (trace 5986): bounding overwatch. Knowledge: actor memory at 40.00s, trace 5449. Next observer evidence: None.
<a id="trace-5987"></a>
- 43.60s–43.60s (×1), actor 0, squad 0 (trace 5987): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 5449. Next observer evidence: None.
<a id="trace-6479"></a>
<a id="trace-6481"></a>
- 43.75s–43.75s (×2), actor 5, squad 0 (trace 6479): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 5657. Next observer evidence: {'until': 43.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06268209517590032, 'next_transition': 6488}.
<a id="trace-6488"></a>
- 43.85s–43.85s (×1), actor 0, squad 0 (trace 6488): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 5449. Next observer evidence: {'until': 44.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12811420553363947, 'next_transition': 7008}.
<a id="trace-7008"></a>
<a id="trace-7010"></a>
<a id="trace-7051"></a>
<a id="trace-7053"></a>
<a id="trace-7169"></a>
<a id="trace-7171"></a>
- 44.25s–45.25s (×6), actor 5, squad 0 (trace 7008): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 5657. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749926459156785, 'next_transition': 7051}.
<a id="trace-7180"></a>
- 45.35s–45.35s (×1), actor 0, squad 0 (trace 7180): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 7074. Next observer evidence: {'until': 45.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6000172755370504, 'next_transition': 7687}.
<a id="trace-7687"></a>
<a id="trace-7689"></a>
<a id="trace-7757"></a>
<a id="trace-7759"></a>
<a id="trace-7838"></a>
<a id="trace-7840"></a>
<a id="trace-7872"></a>
<a id="trace-7874"></a>
<a id="trace-7926"></a>
<a id="trace-7928"></a>
<a id="trace-7984"></a>
<a id="trace-7986"></a>
<a id="trace-8029"></a>
<a id="trace-8031"></a>
<a id="trace-8068"></a>
<a id="trace-8070"></a>
<a id="trace-8106"></a>
<a id="trace-8108"></a>
- 45.75s–49.75s (×18), actor 5, squad 0 (trace 7687): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 7079. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6421651271809148, 'next_transition': 7757}.
<a id="trace-7744"></a>
- 46.20s–46.20s (×1), actor 8, squad 1 (trace 7744): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 7082. Next observer evidence: None.
<a id="trace-7764"></a>
- 46.25s–46.25s (×1), actor 8, squad 1 (trace 7764): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 7082. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06031999999999993, 'next_transition': 8037}.
<a id="trace-8037"></a>
- 48.75s–48.75s (×1), actor 8, squad 1 (trace 8037): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 45.00s, trace 7082. Next observer evidence: {'until': 50.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07319670415121264, 'next_transition': 691}.
<a id="trace-8119"></a>
- 49.80s–49.80s (×1), actor 0, squad 0 (trace 8119): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 7074. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11906}.
<a id="trace-8121"></a>
- 49.80s–49.80s (×1), actor 0, squad 0 (trace 8121): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 7074. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11906}.
<a id="trace-11638"></a>
- 49.80s–49.80s (×1), actor 0, squad 0 (trace 11638): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 7074. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11906}.
<a id="trace-11639"></a>
- 49.80s–49.80s (×1), actor 0, squad 0 (trace 11639): MoveTactically. Knowledge: actor memory at 45.00s, trace 7074. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11906}.
<a id="trace-11640"></a>
- 49.80s–49.80s (×1), actor 0, squad 0 (trace 11640): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 7074. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11906}.
<a id="trace-11906"></a>
<a id="trace-11908"></a>
<a id="trace-11938"></a>
<a id="trace-11940"></a>
<a id="trace-12000"></a>
<a id="trace-12002"></a>
- 50.25s–51.25s (×6), actor 5, squad 0 (trace 11906): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11820. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11938}.
<a id="trace-691"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (events line 691): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11950"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 11950): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.706129 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 11950. Next observer evidence: {'until': 52.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.007049150658057996, 'next_transition': 12639}.
<a id="trace-11951"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 11951): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.706129 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 11951. Next observer evidence: {'until': 52.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.007049150658057996, 'next_transition': 12639}.
<a id="trace-12026"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 12026): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 11815. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7372425022470454, 'next_transition': 12565}.
<a id="trace-12027"></a>
- 51.35s–51.35s (×1), actor 0, squad 0 (trace 12027): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 11815. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7372425022470454, 'next_transition': 12565}.
<a id="trace-12565"></a>
<a id="trace-12567"></a>
<a id="trace-12616"></a>
<a id="trace-12618"></a>
- 51.75s–52.25s (×4), actor 5, squad 0 (trace 12565): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.85s, trace 11951. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0527051976732482, 'next_transition': 12616}.
<a id="trace-12639"></a>
- 52.40s–52.40s (×1), actor 8, squad 1 (trace 12639): received platoon directive; retain held slots. Knowledge: actor memory at 50.00s, trace 11823. Next observer evidence: {'until': 57, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.025724113201430917, 'next_transition': 1022}.
<a id="trace-12668"></a>
- 52.60s–52.60s (×1), actor 0, squad 0 (trace 12668): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 50.00s, trace 11815. Next observer evidence: None.
<a id="trace-13193"></a>
<a id="trace-13195"></a>
<a id="trace-13256"></a>
<a id="trace-13258"></a>
<a id="trace-13313"></a>
<a id="trace-13315"></a>
<a id="trace-13383"></a>
<a id="trace-13385"></a>
<a id="trace-13446"></a>
<a id="trace-13448"></a>
<a id="trace-13556"></a>
<a id="trace-13558"></a>
<a id="trace-13628"></a>
<a id="trace-13630"></a>
<a id="trace-13682"></a>
<a id="trace-13684"></a>
- 52.75s–56.25s (×16), actor 5, squad 0 (trace 13193): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.85s, trace 11951. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3386646425853341, 'next_transition': 13256}.
<a id="trace-13689"></a>
- 56.25s–56.25s (×1), actor 0, squad 0 (trace 13689): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 13468. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020958959400175628, 'next_transition': 17603}.
<a id="trace-13691"></a>
- 56.25s–56.25s (×1), actor 0, squad 0 (trace 13691): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 13468. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020958959400175628, 'next_transition': 17603}.
<a id="trace-17202"></a>
- 56.25s–56.25s (×1), actor 0, squad 0 (trace 17202): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 55.00s, trace 13468. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020958959400175628, 'next_transition': 17603}.
<a id="trace-17203"></a>
- 56.25s–56.25s (×1), actor 0, squad 0 (trace 17203): MoveTactically. Knowledge: actor memory at 55.00s, trace 13468. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020958959400175628, 'next_transition': 17603}.
<a id="trace-17204"></a>
- 56.25s–56.25s (×1), actor 0, squad 0 (trace 17204): contact cover complete: assessment resumes closure. Knowledge: actor memory at 55.00s, trace 13468. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020958959400175628, 'next_transition': 17603}.
<a id="trace-17603"></a>
<a id="trace-17605"></a>
<a id="trace-17675"></a>
<a id="trace-17677"></a>
<a id="trace-17744"></a>
<a id="trace-17746"></a>
<a id="trace-17817"></a>
<a id="trace-17819"></a>
<a id="trace-17891"></a>
<a id="trace-17893"></a>
<a id="trace-17966"></a>
<a id="trace-17968"></a>
<a id="trace-18042"></a>
<a id="trace-18044"></a>
- 56.75s–59.75s (×14), actor 5, squad 0 (trace 17603): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 13473. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45694110358843276, 'next_transition': 17675}.
<a id="trace-1022"></a>
- 57.10s–57.10s (×1), actor 5, squad 1 (events line 1022): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17653"></a>
- 57.10s–57.10s (×1), actor 5, squad 1 (trace 17653): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.708361 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 57.10s, trace 17653. Next observer evidence: {'until': 57.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17763}.
<a id="trace-17654"></a>
- 57.10s–57.10s (×1), actor 5, squad 1 (trace 17654): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.708361 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 57.10s, trace 17654. Next observer evidence: {'until': 57.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17763}.
<a id="trace-17763"></a>
- 57.85s–57.85s (×1), actor 8, squad 1 (trace 17763): NeedSupport. Knowledge: actor memory at 55.00s, trace 13476. Next observer evidence: {'until': 58.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9657799999999996, 'next_transition': 17928}.
<a id="trace-17928"></a>
- 58.95s–58.95s (×1), actor 8, squad 1 (trace 17928): received platoon directive; retain held slots. Knowledge: actor memory at 55.00s, trace 13476. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8198499999999989, 'next_transition': 1337}.
<a id="trace-18049"></a>
- 59.75s–59.75s (×1), actor 0, squad 0 (trace 18049): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 13468. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0102549048722191, 'next_transition': 20853}.
<a id="trace-18050"></a>
- 59.75s–59.75s (×1), actor 0, squad 0 (trace 18050): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 55.00s, trace 13468. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0102549048722191, 'next_transition': 20853}.
<a id="trace-20853"></a>
<a id="trace-20855"></a>
<a id="trace-20927"></a>
<a id="trace-20929"></a>
<a id="trace-21000"></a>
<a id="trace-21002"></a>
<a id="trace-21061"></a>
<a id="trace-21063"></a>
- 60.25s–61.75s (×8), actor 5, squad 0 (trace 20853): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 20751. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4900967871266899, 'next_transition': 20927}.
<a id="trace-1336"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (events line 1336): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1337"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (events line 1337): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21108"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 21108): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.718072 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 21108. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43090151710121194, 'next_transition': 21139}.
<a id="trace-21109"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 21109): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.718072 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 21109. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43090151710121194, 'next_transition': 21139}.
<a id="trace-21110"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (trace 21110): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.718072 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 21110. Next observer evidence: {'until': 63.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.10464000000000073, 'next_transition': 21351}.
<a id="trace-21111"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (trace 21111): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.718072 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 21111. Next observer evidence: {'until': 63.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.10464000000000073, 'next_transition': 21351}.
<a id="trace-21139"></a>
<a id="trace-21141"></a>
<a id="trace-21220"></a>
<a id="trace-21222"></a>
<a id="trace-21292"></a>
<a id="trace-21294"></a>
<a id="trace-21357"></a>
<a id="trace-21359"></a>
<a id="trace-21423"></a>
<a id="trace-21425"></a>
<a id="trace-21473"></a>
<a id="trace-21475"></a>
<a id="trace-21568"></a>
<a id="trace-21570"></a>
<a id="trace-21603"></a>
<a id="trace-21605"></a>
<a id="trace-21666"></a>
<a id="trace-21668"></a>
<a id="trace-21714"></a>
<a id="trace-21716"></a>
<a id="trace-21766"></a>
<a id="trace-21768"></a>
<a id="trace-21814"></a>
<a id="trace-21816"></a>
- 62.25s–67.75s (×24), actor 5, squad 0 (trace 21139): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 21111. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5063604966354627, 'next_transition': 21220}.
<a id="trace-21351"></a>
- 63.70s–63.70s (×1), actor 8, squad 1 (trace 21351): received platoon directive; retain held slots. Knowledge: actor memory at 60.00s, trace 20754. Next observer evidence: {'until': 68, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31235000000000035, 'next_transition': 1626}.
<a id="trace-21831"></a>
- 67.85s–67.85s (×1), actor 0, squad 0 (trace 21831): NeedSupport. Knowledge: actor memory at 65.00s, trace 21492. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574998673461743, 'next_transition': 21872}.
<a id="trace-1626"></a>
- 68.15s–68.15s (×1), actor 5, squad 1 (events line 1626): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21853"></a>
- 68.15s–68.15s (×1), actor 5, squad 1 (trace 21853): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.574614 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.15s, trace 21853. Next observer evidence: {'until': 69.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3216000000000001, 'next_transition': 21969}.
<a id="trace-21854"></a>
- 68.15s–68.15s (×1), actor 5, squad 1 (trace 21854): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.574614 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.15s, trace 21854. Next observer evidence: {'until': 69.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3216000000000001, 'next_transition': 21969}.
<a id="trace-21872"></a>
<a id="trace-21874"></a>
<a id="trace-21909"></a>
<a id="trace-21911"></a>
<a id="trace-21948"></a>
<a id="trace-21950"></a>
<a id="trace-22975"></a>
<a id="trace-22977"></a>
<a id="trace-23331"></a>
<a id="trace-23333"></a>
<a id="trace-23387"></a>
<a id="trace-23389"></a>
<a id="trace-23701"></a>
<a id="trace-23703"></a>
<a id="trace-23782"></a>
<a id="trace-23784"></a>
<a id="trace-23841"></a>
<a id="trace-23843"></a>
<a id="trace-23894"></a>
<a id="trace-23896"></a>
<a id="trace-23950"></a>
<a id="trace-23952"></a>
<a id="trace-23971"></a>
<a id="trace-23973"></a>
<a id="trace-24018"></a>
<a id="trace-24020"></a>
<a id="trace-24059"></a>
<a id="trace-24061"></a>
<a id="trace-24172"></a>
<a id="trace-24174"></a>
<a id="trace-24211"></a>
<a id="trace-24213"></a>
<a id="trace-24254"></a>
<a id="trace-24256"></a>
<a id="trace-24291"></a>
<a id="trace-24293"></a>
<a id="trace-24311"></a>
<a id="trace-24313"></a>
<a id="trace-24339"></a>
<a id="trace-24341"></a>
- 68.25s–77.75s (×40), actor 5, squad 0 (trace 21872): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 68.15s, trace 21854. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14345907921010959, 'next_transition': 21909}.
<a id="trace-21969"></a>
- 69.45s–69.45s (×1), actor 8, squad 1 (trace 21969): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 21500. Next observer evidence: None.
<a id="trace-21970"></a>
- 69.45s–69.45s (×1), actor 8, squad 1 (trace 21970): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 65.00s, trace 21500. Next observer evidence: None.
<a id="trace-22950"></a>
- 69.50s–69.50s (×1), actor 8, squad 1 (trace 22950): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 65.00s, trace 21500. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22984}.
<a id="trace-22984"></a>
- 69.75s–69.75s (×1), actor 8, squad 1 (trace 22984): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 21500. Next observer evidence: {'until': 70.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6778000000000004, 'next_transition': 23400}.
<a id="trace-22985"></a>
- 69.75s–69.75s (×1), actor 8, squad 1 (trace 22985): received platoon directive. Knowledge: actor memory at 65.00s, trace 21500. Next observer evidence: {'until': 70.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6778000000000004, 'next_transition': 23400}.
<a id="trace-23400"></a>
- 70.80s–70.80s (×1), actor 8, squad 1 (trace 23400): new contact inside 100 m. Knowledge: actor memory at 70.00s, trace 23254. Next observer evidence: {'until': 74, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.19998, 'next_transition': 23998}.
<a id="trace-23998"></a>
- 74.15s–74.15s (×1), actor 8, squad 1 (trace 23998): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 70.00s, trace 23254. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8958261696214884, 'next_transition': 1997}.
<a id="trace-24000"></a>
- 74.15s–74.15s (×1), actor 8, squad 1 (trace 24000): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 70.00s, trace 23254. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8958261696214884, 'next_transition': 1997}.
<a id="trace-1997"></a>
- 77.75s–77.75s (×1), actor 5, squad 1 (events line 1997): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 79.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1203005644595987, 'next_transition': 27269}.
<a id="trace-24348"></a>
- 77.75s–77.75s (×1), actor 5, squad 1 (trace 24348): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.582533 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 77.75s, trace 24348. Next observer evidence: {'until': 79.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1203005644595987, 'next_transition': 27269}.
<a id="trace-24349"></a>
- 77.75s–77.75s (×1), actor 5, squad 1 (trace 24349): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.582533 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 77.75s, trace 24349. Next observer evidence: {'until': 79.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1203005644595987, 'next_transition': 27269}.
<a id="trace-24368"></a>
- 78.00s–78.00s (×1), actor 0, squad 0 (trace 24368): support established: element delivered fire on threat area. Knowledge: actor memory at 75.00s, trace 24081. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10275928960371519, 'next_transition': 24393}.
<a id="trace-24369"></a>
- 78.00s–78.00s (×1), actor 0, squad 0 (trace 24369): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 75.00s, trace 24081. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10275928960371519, 'next_transition': 24393}.
<a id="trace-24370"></a>
- 78.00s–78.00s (×1), actor 0, squad 0 (trace 24370): Fixing. Knowledge: actor memory at 75.00s, trace 24081. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10275928960371519, 'next_transition': 24393}.
<a id="trace-24393"></a>
<a id="trace-24395"></a>
<a id="trace-24412"></a>
<a id="trace-24414"></a>
- 78.25s–78.75s (×4), actor 5, squad 0 (trace 24393): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 77.75s, trace 24349. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17129454091078775, 'next_transition': 24412}.
<a id="trace-24435"></a>
- 79.00s–79.00s (×1), actor 0, squad 0 (trace 24435): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 24081. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25296994598691286, 'next_transition': 27276}.
<a id="trace-24436"></a>
- 79.00s–79.00s (×1), actor 0, squad 0 (trace 24436): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 75.00s, trace 24081. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25296994598691286, 'next_transition': 27276}.
<a id="trace-27269"></a>
- 79.70s–79.70s (×1), actor 8, squad 1 (trace 27269): received platoon directive; retain held slots. Knowledge: actor memory at 75.00s, trace 24089. Next observer evidence: {'until': 79.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27570}.
<a id="trace-27276"></a>
<a id="trace-27278"></a>
- 79.75s–79.75s (×2), actor 5, squad 0 (trace 27276): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 77.75s, trace 24349. Next observer evidence: {'until': 80, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21163889831877786, 'next_transition': 2106}.
<a id="trace-27570"></a>
- 79.85s–79.85s (×1), actor 8, squad 1 (trace 27570): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 75.00s, trace 24089. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0024850000000000705, 'next_transition': 2224}.
<a id="trace-2106"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (events line 2106): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27612"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 27612): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.578894 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 27612. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.06213614579343092, 'next_transition': 27677}.
<a id="trace-27613"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 27613): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.578894 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 27613. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.06213614579343092, 'next_transition': 27677}.
<a id="trace-27677"></a>
<a id="trace-27679"></a>
<a id="trace-27703"></a>
<a id="trace-27705"></a>
<a id="trace-27740"></a>
<a id="trace-27742"></a>
<a id="trace-27773"></a>
<a id="trace-27775"></a>
<a id="trace-27800"></a>
<a id="trace-27802"></a>
<a id="trace-27812"></a>
<a id="trace-27814"></a>
<a id="trace-27844"></a>
<a id="trace-27846"></a>
<a id="trace-27879"></a>
<a id="trace-27881"></a>
<a id="trace-27925"></a>
<a id="trace-27927"></a>
<a id="trace-27967"></a>
<a id="trace-27969"></a>
<a id="trace-28076"></a>
<a id="trace-28078"></a>
- 80.25s–85.25s (×22), actor 5, squad 0 (trace 27677): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 27613. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2572886919090119, 'next_transition': 27703}.
<a id="trace-2224"></a>
- 83.75s–83.75s (×1), actor 5, squad 1 (events line 2224): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9452050000000005, 'next_transition': 28093}.
<a id="trace-27889"></a>
- 83.75s–83.75s (×1), actor 5, squad 1 (trace 27889): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.576781 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 83.75s, trace 27889. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9452050000000005, 'next_transition': 28093}.
<a id="trace-27890"></a>
- 83.75s–83.75s (×1), actor 5, squad 1 (trace 27890): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.576781 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 83.75s, trace 27890. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9452050000000005, 'next_transition': 28093}.
<a id="trace-28089"></a>
- 85.30s–85.30s (×1), actor 1, squad 0 (trace 28089): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 85.00s, trace 27990. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3777976283710338, 'next_transition': 28130}.
<a id="trace-28093"></a>
- 85.35s–85.35s (×1), actor 8, squad 1 (trace 28093): received platoon directive; retain held slots. Knowledge: actor memory at 85.00s, trace 27996. Next observer evidence: {'until': 92, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.5161072945600926, 'next_transition': 2465}.
<a id="trace-28130"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 28130): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 27990. Next observer evidence: None.
<a id="trace-28135"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 28135): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 27990. Next observer evidence: None.
<a id="trace-28136"></a>
- 86.20s–86.20s (×1), actor 1, squad 0 (trace 28136): Reorganise complete: known contact. Knowledge: actor memory at 85.00s, trace 27990. Next observer evidence: None.
<a id="trace-28615"></a>
<a id="trace-28617"></a>
<a id="trace-28630"></a>
<a id="trace-28632"></a>
<a id="trace-28650"></a>
<a id="trace-28652"></a>
- 86.25s–87.25s (×6), actor 5, squad 0 (trace 28615): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 27994. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33442868361754036, 'next_transition': 28630}.
<a id="trace-28668"></a>
- 87.55s–87.55s (×1), actor 5, squad 0 (trace 28668): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 87.55s, trace 28668. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3701289324993047, 'next_transition': 28674}.
<a id="trace-28674"></a>
<a id="trace-28676"></a>
<a id="trace-28695"></a>
<a id="trace-28697"></a>
<a id="trace-28714"></a>
<a id="trace-28716"></a>
<a id="trace-28747"></a>
<a id="trace-28749"></a>
<a id="trace-28767"></a>
<a id="trace-28769"></a>
- 87.75s–89.75s (×10), actor 5, squad 0 (trace 28674): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.55s, trace 28668. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8273052973194414, 'next_transition': 28695}.
<a id="trace-28849"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 28849): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 28778. Next observer evidence: None.
<a id="trace-28851"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 28851): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 28778. Next observer evidence: None.
<a id="trace-31630"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 31630): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 90.00s, trace 28778. Next observer evidence: None.
<a id="trace-31631"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 31631): MoveTactically. Knowledge: actor memory at 90.00s, trace 28778. Next observer evidence: None.
<a id="trace-31632"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 31632): contact cover complete: assessment resumes closure. Knowledge: actor memory at 90.00s, trace 28778. Next observer evidence: None.
<a id="trace-31755"></a>
<a id="trace-31757"></a>
<a id="trace-31768"></a>
<a id="trace-31770"></a>
<a id="trace-31795"></a>
<a id="trace-31797"></a>
<a id="trace-31813"></a>
<a id="trace-31815"></a>
<a id="trace-31843"></a>
<a id="trace-31845"></a>
<a id="trace-31867"></a>
<a id="trace-31869"></a>
<a id="trace-31885"></a>
<a id="trace-31887"></a>
<a id="trace-31901"></a>
<a id="trace-31903"></a>
<a id="trace-31968"></a>
<a id="trace-31970"></a>
<a id="trace-31982"></a>
<a id="trace-31984"></a>
<a id="trace-32057"></a>
<a id="trace-32059"></a>
<a id="trace-32070"></a>
<a id="trace-32072"></a>
<a id="trace-32095"></a>
<a id="trace-32097"></a>
<a id="trace-32118"></a>
<a id="trace-32120"></a>
<a id="trace-32162"></a>
<a id="trace-32164"></a>
<a id="trace-32193"></a>
<a id="trace-32195"></a>
- 90.25s–97.75s (×32), actor 5, squad 0 (trace 31755): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 28782. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3675821579658401, 'next_transition': 31768}.
<a id="trace-2465"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (events line 2465): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31829"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (trace 31829): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368115 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.15s, trace 31829. Next observer evidence: {'until': 93.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.317850070829, 'next_transition': 31908}.
<a id="trace-31830"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (trace 31830): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.368115 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.15s, trace 31830. Next observer evidence: {'until': 93.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.317850070829, 'next_transition': 31908}.
<a id="trace-31908"></a>
- 93.80s–93.80s (×1), actor 9, squad 1 (trace 31908): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 28784. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.91926227567117, 'next_transition': 33203}.
<a id="trace-31909"></a>
- 93.80s–93.80s (×1), actor 9, squad 1 (trace 31909): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 28784. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.91926227567117, 'next_transition': 33203}.
<a id="trace-32218"></a>
- 97.90s–97.90s (×1), actor 2, squad 0 (trace 32218): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 95.00s, trace 31991. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2506040114479678, 'next_transition': 32611}.
<a id="trace-32219"></a>
- 97.90s–97.90s (×1), actor 2, squad 0 (trace 32219): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 31991. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2506040114479678, 'next_transition': 32611}.
<a id="trace-32611"></a>
<a id="trace-32613"></a>
<a id="trace-32637"></a>
<a id="trace-32639"></a>
<a id="trace-32663"></a>
<a id="trace-32665"></a>
<a id="trace-32680"></a>
<a id="trace-32682"></a>
<a id="trace-32758"></a>
<a id="trace-32760"></a>
<a id="trace-32769"></a>
<a id="trace-32771"></a>
<a id="trace-32787"></a>
<a id="trace-32789"></a>
<a id="trace-32804"></a>
<a id="trace-32806"></a>
<a id="trace-32821"></a>
<a id="trace-32823"></a>
<a id="trace-32831"></a>
<a id="trace-32833"></a>
<a id="trace-32851"></a>
<a id="trace-32853"></a>
<a id="trace-32882"></a>
<a id="trace-32884"></a>
<a id="trace-32904"></a>
<a id="trace-32906"></a>
<a id="trace-32912"></a>
<a id="trace-32914"></a>
<a id="trace-33011"></a>
<a id="trace-33013"></a>
<a id="trace-33028"></a>
<a id="trace-33030"></a>
<a id="trace-33064"></a>
<a id="trace-33066"></a>
- 98.25s–106.25s (×34), actor 5, squad 0 (trace 32611): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 31994. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21224552781345593, 'next_transition': 32637}.
<a id="trace-33078"></a>
- 106.40s–106.40s (×1), actor 3, squad 0 (trace 33078): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 32928. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00026500000000018176, 'next_transition': 33210}.
<a id="trace-33079"></a>
- 106.40s–106.40s (×1), actor 3, squad 0 (trace 33079): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 32928. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00026500000000018176, 'next_transition': 33210}.
<a id="trace-33203"></a>
- 106.70s–106.70s (×1), actor 9, squad 1 (trace 33203): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 32932. Next observer evidence: {'until': 118, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33765}.
<a id="trace-33204"></a>
- 106.70s–106.70s (×1), actor 9, squad 1 (trace 33204): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 32932. Next observer evidence: {'until': 118, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33765}.
<a id="trace-33210"></a>
<a id="trace-33212"></a>
<a id="trace-33250"></a>
<a id="trace-33252"></a>
<a id="trace-33274"></a>
<a id="trace-33276"></a>
<a id="trace-33306"></a>
<a id="trace-33308"></a>
<a id="trace-33326"></a>
<a id="trace-33328"></a>
<a id="trace-33347"></a>
<a id="trace-33349"></a>
<a id="trace-33363"></a>
<a id="trace-33365"></a>
<a id="trace-33436"></a>
<a id="trace-33438"></a>
<a id="trace-33455"></a>
<a id="trace-33457"></a>
<a id="trace-33473"></a>
<a id="trace-33475"></a>
<a id="trace-33485"></a>
<a id="trace-33487"></a>
<a id="trace-33507"></a>
<a id="trace-33509"></a>
<a id="trace-33523"></a>
<a id="trace-33525"></a>
<a id="trace-33537"></a>
<a id="trace-33539"></a>
<a id="trace-33552"></a>
<a id="trace-33554"></a>
<a id="trace-33570"></a>
<a id="trace-33572"></a>
<a id="trace-33584"></a>
<a id="trace-33586"></a>
<a id="trace-33663"></a>
<a id="trace-33665"></a>
<a id="trace-33678"></a>
<a id="trace-33680"></a>
<a id="trace-33699"></a>
<a id="trace-33701"></a>
<a id="trace-33732"></a>
<a id="trace-33734"></a>
<a id="trace-33748"></a>
<a id="trace-33750"></a>
<a id="trace-33775"></a>
<a id="trace-33777"></a>
<a id="trace-33795"></a>
<a id="trace-33797"></a>
<a id="trace-33814"></a>
<a id="trace-33816"></a>
<a id="trace-33830"></a>
<a id="trace-33832"></a>
<a id="trace-33911"></a>
<a id="trace-33913"></a>
<a id="trace-33930"></a>
<a id="trace-33932"></a>
<a id="trace-33950"></a>
<a id="trace-33952"></a>
<a id="trace-33967"></a>
<a id="trace-33969"></a>
<a id="trace-33991"></a>
<a id="trace-33993"></a>
<a id="trace-34012"></a>
<a id="trace-34014"></a>
<a id="trace-34034"></a>
<a id="trace-34036"></a>
<a id="trace-34050"></a>
<a id="trace-34052"></a>
<a id="trace-34071"></a>
<a id="trace-34073"></a>
- 106.75s–124.25s (×70), actor 5, squad 0 (trace 33210): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 32930. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05014547119381774, 'next_transition': 33250}.
<a id="trace-33765"></a>
- 118.00s–118.00s (×1), actor 9, squad 1 (trace 33765): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 115.00s, trace 33602. Next observer evidence: {'until': 132.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2917}.
<a id="trace-34078"></a>
- 124.30s–124.30s (×1), actor 3, squad 0 (trace 34078): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 33841. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680890261682887, 'next_transition': 34129}.
<a id="trace-34121"></a>
- 124.30s–124.30s (×1), actor 3, squad 0 (trace 34121): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 33841. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680890261682887, 'next_transition': 34129}.
<a id="trace-34129"></a>
<a id="trace-34131"></a>
<a id="trace-34219"></a>
<a id="trace-34221"></a>
<a id="trace-34233"></a>
<a id="trace-34235"></a>
<a id="trace-34254"></a>
<a id="trace-34256"></a>
<a id="trace-34270"></a>
<a id="trace-34272"></a>
<a id="trace-34281"></a>
<a id="trace-34283"></a>
<a id="trace-34292"></a>
<a id="trace-34294"></a>
<a id="trace-34308"></a>
<a id="trace-34310"></a>
<a id="trace-34324"></a>
<a id="trace-34326"></a>
<a id="trace-34341"></a>
<a id="trace-34343"></a>
<a id="trace-34351"></a>
<a id="trace-34353"></a>
<a id="trace-34429"></a>
<a id="trace-34431"></a>
<a id="trace-34439"></a>
<a id="trace-34441"></a>
<a id="trace-34455"></a>
<a id="trace-34457"></a>
<a id="trace-34466"></a>
<a id="trace-34468"></a>
<a id="trace-34479"></a>
<a id="trace-34481"></a>
<a id="trace-34491"></a>
<a id="trace-34493"></a>
<a id="trace-34505"></a>
<a id="trace-34507"></a>
<a id="trace-34568"></a>
<a id="trace-34570"></a>
<a id="trace-34589"></a>
<a id="trace-34591"></a>
<a id="trace-34600"></a>
<a id="trace-34602"></a>
- 124.75s–134.80s (×42), actor 5, squad 0 (trace 34129): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 33843. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4256401147855526, 'next_transition': 34219}.
<a id="trace-2917"></a>
- 132.55s–132.55s (×1), actor 5, squad 1 (events line 2917): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 133.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34513}.
<a id="trace-34487"></a>
- 132.55s–132.55s (×1), actor 5, squad 1 (trace 34487): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234175 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 132.55s, trace 34487. Next observer evidence: {'until': 133.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34513}.
<a id="trace-34488"></a>
- 132.55s–132.55s (×1), actor 5, squad 1 (trace 34488): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234175 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 132.55s, trace 34488. Next observer evidence: {'until': 133.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34513}.
<a id="trace-34513"></a>
- 133.75s–133.75s (×1), actor 9, squad 1 (trace 34513): Withdraw to received rally. Knowledge: actor memory at 130.00s, trace 34366. Next observer evidence: {'until': 144.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 35128}.
<a id="trace-34514"></a>
- 133.75s–133.75s (×1), actor 9, squad 1 (trace 34514): rearward bound: one stationary suppressing element. Knowledge: actor memory at 130.00s, trace 34366. Next observer evidence: {'until': 144.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 35128}.
<a id="trace-34676"></a>
- 135.20s–135.20s (×1), actor 3, squad 0 (trace 34676): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 34607. Next observer evidence: None.
<a id="trace-34686"></a>
<a id="trace-34688"></a>
<a id="trace-34710"></a>
<a id="trace-34712"></a>
<a id="trace-34732"></a>
<a id="trace-34734"></a>
<a id="trace-34751"></a>
<a id="trace-34753"></a>
<a id="trace-34776"></a>
<a id="trace-34778"></a>
- 135.30s–137.30s (×10), actor 5, squad 0 (trace 34686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 34609. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3401970972833251, 'next_transition': 34710}.
<a id="trace-34790"></a>
- 137.60s–137.60s (×1), actor 3, squad 0 (trace 34790): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 135.00s, trace 34607. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341766011076082, 'next_transition': 34796}.
<a id="trace-34791"></a>
- 137.60s–137.60s (×1), actor 3, squad 0 (trace 34791): MoveTactically. Knowledge: actor memory at 135.00s, trace 34607. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341766011076082, 'next_transition': 34796}.
<a id="trace-34792"></a>
- 137.60s–137.60s (×1), actor 3, squad 0 (trace 34792): . Knowledge: actor memory at 135.00s, trace 34607. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11341766011076082, 'next_transition': 34796}.
<a id="trace-34796"></a>
<a id="trace-34798"></a>
<a id="trace-34813"></a>
<a id="trace-34815"></a>
<a id="trace-34819"></a>
<a id="trace-34821"></a>
<a id="trace-34837"></a>
<a id="trace-34839"></a>
- 137.80s–139.30s (×8), actor 5, squad 0 (trace 34796): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 34609. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680150186892492, 'next_transition': 34813}.
<a id="trace-2968"></a>
- 139.75s–139.75s (×1), actor 5, squad 0 (events line 2968): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340590813533515, 'next_transition': 34848}.
<a id="trace-34845"></a>
- 139.75s–139.75s (×1), actor 5, squad 0 (trace 34845): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.239768 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 139.75s, trace 34845. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340590813533515, 'next_transition': 34848}.
<a id="trace-34846"></a>
- 139.75s–139.75s (×1), actor 5, squad 0 (trace 34846): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.239768 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 139.75s, trace 34846. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340590813533515, 'next_transition': 34848}.
<a id="trace-34848"></a>
<a id="trace-34850"></a>
<a id="trace-34931"></a>
<a id="trace-34933"></a>
<a id="trace-34946"></a>
<a id="trace-34948"></a>
<a id="trace-34968"></a>
<a id="trace-34970"></a>
- 139.80s–141.30s (×8), actor 5, squad 0 (trace 34848): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 139.75s, trace 34846. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2571415018689249, 'next_transition': 34931}.
<a id="trace-34978"></a>
- 141.60s–141.60s (×1), actor 3, squad 0 (trace 34978): Withdraw to received rally. Knowledge: actor memory at 140.00s, trace 34856. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35029}.
<a id="trace-34979"></a>
- 141.60s–141.60s (×1), actor 3, squad 0 (trace 34979): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 34856. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35029}.
<a id="trace-35029"></a>
<a id="trace-35031"></a>
<a id="trace-35052"></a>
<a id="trace-35054"></a>
<a id="trace-35069"></a>
<a id="trace-35071"></a>
<a id="trace-35085"></a>
<a id="trace-35087"></a>
<a id="trace-35097"></a>
<a id="trace-35099"></a>
<a id="trace-35121"></a>
<a id="trace-35123"></a>
<a id="trace-35134"></a>
<a id="trace-35136"></a>
<a id="trace-35223"></a>
<a id="trace-35225"></a>
<a id="trace-35236"></a>
<a id="trace-35238"></a>
<a id="trace-35263"></a>
<a id="trace-35265"></a>
<a id="trace-35279"></a>
<a id="trace-35281"></a>
<a id="trace-35295"></a>
<a id="trace-35297"></a>
<a id="trace-35303"></a>
<a id="trace-35305"></a>
<a id="trace-35322"></a>
<a id="trace-35324"></a>
<a id="trace-35333"></a>
<a id="trace-35335"></a>
<a id="trace-35357"></a>
<a id="trace-35359"></a>
<a id="trace-35376"></a>
<a id="trace-35378"></a>
<a id="trace-35460"></a>
<a id="trace-35462"></a>
<a id="trace-35475"></a>
<a id="trace-35477"></a>
<a id="trace-35491"></a>
<a id="trace-35493"></a>
<a id="trace-35501"></a>
<a id="trace-35503"></a>
<a id="trace-35518"></a>
<a id="trace-35520"></a>
<a id="trace-35531"></a>
<a id="trace-35533"></a>
<a id="trace-35547"></a>
<a id="trace-35549"></a>
<a id="trace-35554"></a>
<a id="trace-35556"></a>
<a id="trace-35569"></a>
<a id="trace-35571"></a>
<a id="trace-35579"></a>
<a id="trace-35581"></a>
<a id="trace-35656"></a>
<a id="trace-35658"></a>
<a id="trace-35665"></a>
<a id="trace-35667"></a>
<a id="trace-35678"></a>
<a id="trace-35680"></a>
<a id="trace-35688"></a>
<a id="trace-35690"></a>
<a id="trace-35701"></a>
<a id="trace-35703"></a>
<a id="trace-35713"></a>
<a id="trace-35715"></a>
<a id="trace-35728"></a>
<a id="trace-35730"></a>
<a id="trace-35739"></a>
<a id="trace-35741"></a>
<a id="trace-35752"></a>
<a id="trace-35754"></a>
<a id="trace-35760"></a>
<a id="trace-35762"></a>
<a id="trace-35833"></a>
<a id="trace-35835"></a>
<a id="trace-35844"></a>
<a id="trace-35846"></a>
<a id="trace-35859"></a>
<a id="trace-35861"></a>
<a id="trace-35870"></a>
<a id="trace-35872"></a>
<a id="trace-35886"></a>
<a id="trace-35888"></a>
<a id="trace-35896"></a>
<a id="trace-35898"></a>
<a id="trace-35912"></a>
<a id="trace-35914"></a>
<a id="trace-35920"></a>
<a id="trace-35922"></a>
<a id="trace-35934"></a>
<a id="trace-35936"></a>
<a id="trace-35942"></a>
<a id="trace-35944"></a>
<a id="trace-36016"></a>
<a id="trace-36018"></a>
<a id="trace-36028"></a>
<a id="trace-36030"></a>
<a id="trace-36046"></a>
<a id="trace-36048"></a>
<a id="trace-36056"></a>
<a id="trace-36058"></a>
<a id="trace-36073"></a>
<a id="trace-36075"></a>
<a id="trace-36085"></a>
<a id="trace-36087"></a>
<a id="trace-36097"></a>
<a id="trace-36099"></a>
<a id="trace-36107"></a>
<a id="trace-36109"></a>
<a id="trace-36120"></a>
<a id="trace-36122"></a>
<a id="trace-36126"></a>
<a id="trace-36128"></a>
<a id="trace-36198"></a>
<a id="trace-36200"></a>
<a id="trace-36210"></a>
<a id="trace-36212"></a>
<a id="trace-36226"></a>
<a id="trace-36228"></a>
<a id="trace-36236"></a>
<a id="trace-36238"></a>
<a id="trace-36248"></a>
<a id="trace-36250"></a>
<a id="trace-36259"></a>
<a id="trace-36261"></a>
<a id="trace-36272"></a>
<a id="trace-36274"></a>
<a id="trace-36281"></a>
<a id="trace-36283"></a>
<a id="trace-36296"></a>
<a id="trace-36298"></a>
<a id="trace-36305"></a>
<a id="trace-36307"></a>
<a id="trace-36380"></a>
<a id="trace-36382"></a>
<a id="trace-36391"></a>
<a id="trace-36393"></a>
<a id="trace-36405"></a>
<a id="trace-36407"></a>
<a id="trace-36415"></a>
<a id="trace-36417"></a>
<a id="trace-36430"></a>
<a id="trace-36432"></a>
<a id="trace-36441"></a>
<a id="trace-36443"></a>
<a id="trace-36460"></a>
<a id="trace-36462"></a>
<a id="trace-36470"></a>
<a id="trace-36472"></a>
<a id="trace-36486"></a>
<a id="trace-36488"></a>
<a id="trace-36499"></a>
<a id="trace-36501"></a>
<a id="trace-36576"></a>
<a id="trace-36578"></a>
<a id="trace-36591"></a>
<a id="trace-36593"></a>
<a id="trace-36608"></a>
<a id="trace-36610"></a>
<a id="trace-36619"></a>
<a id="trace-36621"></a>
<a id="trace-36638"></a>
<a id="trace-36640"></a>
<a id="trace-36652"></a>
<a id="trace-36654"></a>
<a id="trace-36667"></a>
<a id="trace-36669"></a>
<a id="trace-36680"></a>
<a id="trace-36682"></a>
<a id="trace-36698"></a>
<a id="trace-36700"></a>
<a id="trace-36710"></a>
<a id="trace-36712"></a>
<a id="trace-36789"></a>
<a id="trace-36791"></a>
<a id="trace-36801"></a>
<a id="trace-36803"></a>
<a id="trace-36818"></a>
<a id="trace-36820"></a>
<a id="trace-36831"></a>
<a id="trace-36833"></a>
<a id="trace-36849"></a>
<a id="trace-36851"></a>
<a id="trace-36859"></a>
<a id="trace-36861"></a>
<a id="trace-36876"></a>
<a id="trace-36878"></a>
<a id="trace-36890"></a>
<a id="trace-36892"></a>
<a id="trace-36913"></a>
<a id="trace-36915"></a>
<a id="trace-36934"></a>
<a id="trace-36936"></a>
<a id="trace-37012"></a>
<a id="trace-37014"></a>
<a id="trace-37020"></a>
<a id="trace-37022"></a>
<a id="trace-37036"></a>
<a id="trace-37038"></a>
<a id="trace-37050"></a>
<a id="trace-37052"></a>
<a id="trace-37070"></a>
<a id="trace-37072"></a>
<a id="trace-37087"></a>
<a id="trace-37089"></a>
<a id="trace-37102"></a>
<a id="trace-37104"></a>
<a id="trace-37113"></a>
<a id="trace-37115"></a>
<a id="trace-37128"></a>
<a id="trace-37130"></a>
<a id="trace-37145"></a>
<a id="trace-37147"></a>
<a id="trace-37225"></a>
<a id="trace-37227"></a>
<a id="trace-37238"></a>
<a id="trace-37240"></a>
<a id="trace-37258"></a>
<a id="trace-37260"></a>
<a id="trace-37270"></a>
<a id="trace-37272"></a>
<a id="trace-37290"></a>
<a id="trace-37292"></a>
<a id="trace-37305"></a>
<a id="trace-37307"></a>
<a id="trace-37319"></a>
<a id="trace-37321"></a>
<a id="trace-37331"></a>
<a id="trace-37333"></a>
<a id="trace-37349"></a>
<a id="trace-37351"></a>
- 141.80s–199.30s (×232), actor 5, squad 0 (trace 35029): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 34858. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35052}.
<a id="trace-35128"></a>
- 144.50s–144.50s (×1), actor 9, squad 1 (trace 35128): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 34860. Next observer evidence: {'until': 174.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3251}.
<a id="trace-35129"></a>
- 144.50s–144.50s (×1), actor 9, squad 1 (trace 35129): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 34860. Next observer evidence: {'until': 174.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3251}.
<a id="trace-3251"></a>
- 192.55s–192.55s (×1), actor 5, squad 1 (events line 3251): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 222.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3817}.
<a id="trace-37079"></a>
- 192.55s–192.55s (×1), actor 5, squad 1 (trace 37079): renew committed intent (75 s lifetime). Knowledge: actor memory at 192.55s, trace 37079. Next observer evidence: {'until': 222.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3817}.
<a id="trace-3321"></a>
- 199.75s–199.75s (×1), actor 5, squad 0 (events line 3321): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 199.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37362}.
<a id="trace-37360"></a>
- 199.75s–199.75s (×1), actor 5, squad 0 (trace 37360): renew committed intent (75 s lifetime). Knowledge: actor memory at 199.75s, trace 37360. Next observer evidence: {'until': 199.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37362}.
<a id="trace-37362"></a>
<a id="trace-37364"></a>
<a id="trace-37440"></a>
<a id="trace-37442"></a>
<a id="trace-37450"></a>
<a id="trace-37452"></a>
<a id="trace-37471"></a>
<a id="trace-37473"></a>
<a id="trace-37486"></a>
<a id="trace-37488"></a>
<a id="trace-37507"></a>
<a id="trace-37509"></a>
<a id="trace-37519"></a>
<a id="trace-37521"></a>
<a id="trace-37540"></a>
<a id="trace-37542"></a>
<a id="trace-37553"></a>
<a id="trace-37555"></a>
<a id="trace-37573"></a>
<a id="trace-37575"></a>
<a id="trace-37588"></a>
<a id="trace-37590"></a>
<a id="trace-37662"></a>
<a id="trace-37664"></a>
<a id="trace-37673"></a>
<a id="trace-37675"></a>
<a id="trace-37690"></a>
<a id="trace-37692"></a>
<a id="trace-37704"></a>
<a id="trace-37706"></a>
<a id="trace-37720"></a>
<a id="trace-37722"></a>
<a id="trace-37733"></a>
<a id="trace-37735"></a>
<a id="trace-37753"></a>
<a id="trace-37755"></a>
<a id="trace-37761"></a>
<a id="trace-37763"></a>
<a id="trace-37781"></a>
<a id="trace-37783"></a>
<a id="trace-37874"></a>
<a id="trace-37876"></a>
<a id="trace-37886"></a>
<a id="trace-37888"></a>
<a id="trace-37906"></a>
<a id="trace-37908"></a>
<a id="trace-37918"></a>
<a id="trace-37920"></a>
<a id="trace-37935"></a>
<a id="trace-37937"></a>
<a id="trace-37950"></a>
<a id="trace-37952"></a>
<a id="trace-37969"></a>
<a id="trace-37971"></a>
<a id="trace-37980"></a>
<a id="trace-37982"></a>
<a id="trace-37998"></a>
<a id="trace-38000"></a>
<a id="trace-38010"></a>
<a id="trace-38012"></a>
<a id="trace-38088"></a>
<a id="trace-38090"></a>
<a id="trace-38103"></a>
<a id="trace-38105"></a>
<a id="trace-38126"></a>
<a id="trace-38128"></a>
<a id="trace-38140"></a>
<a id="trace-38142"></a>
<a id="trace-38155"></a>
<a id="trace-38157"></a>
<a id="trace-38168"></a>
<a id="trace-38170"></a>
<a id="trace-38186"></a>
<a id="trace-38188"></a>
<a id="trace-38199"></a>
<a id="trace-38201"></a>
<a id="trace-38217"></a>
<a id="trace-38219"></a>
<a id="trace-38230"></a>
<a id="trace-38232"></a>
<a id="trace-38310"></a>
<a id="trace-38312"></a>
<a id="trace-38321"></a>
<a id="trace-38323"></a>
<a id="trace-38339"></a>
<a id="trace-38341"></a>
<a id="trace-38354"></a>
<a id="trace-38356"></a>
<a id="trace-38373"></a>
<a id="trace-38375"></a>
<a id="trace-38391"></a>
<a id="trace-38393"></a>
<a id="trace-38407"></a>
<a id="trace-38409"></a>
<a id="trace-38417"></a>
<a id="trace-38419"></a>
<a id="trace-38434"></a>
<a id="trace-38436"></a>
<a id="trace-38448"></a>
<a id="trace-38450"></a>
<a id="trace-38527"></a>
<a id="trace-38529"></a>
<a id="trace-38539"></a>
<a id="trace-38541"></a>
<a id="trace-38555"></a>
<a id="trace-38557"></a>
<a id="trace-38568"></a>
<a id="trace-38570"></a>
<a id="trace-38588"></a>
<a id="trace-38590"></a>
<a id="trace-38606"></a>
<a id="trace-38608"></a>
<a id="trace-38624"></a>
<a id="trace-38626"></a>
<a id="trace-38639"></a>
<a id="trace-38641"></a>
<a id="trace-38660"></a>
<a id="trace-38662"></a>
<a id="trace-38671"></a>
<a id="trace-38673"></a>
<a id="trace-38745"></a>
<a id="trace-38747"></a>
<a id="trace-38758"></a>
<a id="trace-38760"></a>
<a id="trace-38775"></a>
<a id="trace-38777"></a>
<a id="trace-38786"></a>
<a id="trace-38788"></a>
<a id="trace-38807"></a>
<a id="trace-38809"></a>
<a id="trace-38820"></a>
<a id="trace-38822"></a>
<a id="trace-38836"></a>
<a id="trace-38838"></a>
<a id="trace-38849"></a>
<a id="trace-38851"></a>
<a id="trace-38873"></a>
<a id="trace-38875"></a>
<a id="trace-38889"></a>
<a id="trace-38891"></a>
<a id="trace-38968"></a>
<a id="trace-38970"></a>
<a id="trace-38976"></a>
<a id="trace-38978"></a>
<a id="trace-38998"></a>
<a id="trace-39000"></a>
<a id="trace-39009"></a>
<a id="trace-39011"></a>
<a id="trace-39025"></a>
<a id="trace-39027"></a>
<a id="trace-39038"></a>
<a id="trace-39040"></a>
<a id="trace-39053"></a>
<a id="trace-39055"></a>
<a id="trace-39064"></a>
<a id="trace-39066"></a>
<a id="trace-39082"></a>
<a id="trace-39084"></a>
<a id="trace-39095"></a>
<a id="trace-39097"></a>
<a id="trace-39170"></a>
<a id="trace-39172"></a>
<a id="trace-39181"></a>
<a id="trace-39183"></a>
<a id="trace-39203"></a>
<a id="trace-39205"></a>
<a id="trace-39215"></a>
<a id="trace-39217"></a>
<a id="trace-39235"></a>
<a id="trace-39237"></a>
<a id="trace-39255"></a>
<a id="trace-39257"></a>
<a id="trace-39269"></a>
<a id="trace-39271"></a>
<a id="trace-39279"></a>
<a id="trace-39281"></a>
<a id="trace-39297"></a>
<a id="trace-39299"></a>
<a id="trace-39308"></a>
<a id="trace-39310"></a>
<a id="trace-39384"></a>
<a id="trace-39386"></a>
<a id="trace-39397"></a>
<a id="trace-39399"></a>
<a id="trace-39417"></a>
<a id="trace-39419"></a>
<a id="trace-39432"></a>
<a id="trace-39434"></a>
<a id="trace-39448"></a>
<a id="trace-39450"></a>
<a id="trace-39462"></a>
<a id="trace-39464"></a>
<a id="trace-39482"></a>
<a id="trace-39484"></a>
<a id="trace-39497"></a>
<a id="trace-39499"></a>
<a id="trace-39519"></a>
<a id="trace-39521"></a>
<a id="trace-39532"></a>
<a id="trace-39534"></a>
<a id="trace-39606"></a>
<a id="trace-39608"></a>
<a id="trace-39614"></a>
<a id="trace-39616"></a>
<a id="trace-39630"></a>
<a id="trace-39632"></a>
<a id="trace-39644"></a>
<a id="trace-39646"></a>
<a id="trace-39662"></a>
<a id="trace-39664"></a>
<a id="trace-39674"></a>
<a id="trace-39676"></a>
<a id="trace-39696"></a>
<a id="trace-39698"></a>
<a id="trace-39705"></a>
<a id="trace-39707"></a>
<a id="trace-39726"></a>
<a id="trace-39728"></a>
<a id="trace-39742"></a>
<a id="trace-39744"></a>
<a id="trace-39824"></a>
<a id="trace-39826"></a>
<a id="trace-39843"></a>
<a id="trace-39845"></a>
<a id="trace-39859"></a>
<a id="trace-39861"></a>
<a id="trace-39870"></a>
<a id="trace-39872"></a>
<a id="trace-39887"></a>
<a id="trace-39889"></a>
<a id="trace-39901"></a>
<a id="trace-39903"></a>
<a id="trace-39917"></a>
<a id="trace-39919"></a>
<a id="trace-39930"></a>
<a id="trace-39932"></a>
<a id="trace-39945"></a>
<a id="trace-39947"></a>
<a id="trace-39958"></a>
<a id="trace-39960"></a>
- 199.80s–259.80s (×240), actor 5, squad 0 (trace 37362): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 199.75s, trace 37360. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37440}.
<a id="trace-3817"></a>
- 253.00s–253.00s (×1), actor 5, squad 1 (events line 3817): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 283, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4399}.
<a id="trace-39682"></a>
- 253.00s–253.00s (×1), actor 5, squad 1 (trace 39682): renew committed intent (75 s lifetime). Knowledge: actor memory at 253.00s, trace 39682. Next observer evidence: {'until': 283, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4399}.
<a id="trace-3889"></a>
- 260.30s–260.30s (×1), actor 5, squad 0 (events line 3889): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-40037"></a>
<a id="trace-40039"></a>
- 260.30s–260.30s (×2), actor 5, squad 0 (trace 40037): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 39974. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40056}.
<a id="trace-40044"></a>
- 260.30s–260.30s (×1), actor 5, squad 0 (trace 40044): renew committed intent (75 s lifetime). Knowledge: actor memory at 260.30s, trace 40044. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40056}.
<a id="trace-40056"></a>
<a id="trace-40058"></a>
<a id="trace-40073"></a>
<a id="trace-40075"></a>
<a id="trace-40089"></a>
<a id="trace-40091"></a>
<a id="trace-40113"></a>
<a id="trace-40115"></a>
<a id="trace-40126"></a>
<a id="trace-40128"></a>
<a id="trace-40141"></a>
<a id="trace-40143"></a>
<a id="trace-40153"></a>
<a id="trace-40155"></a>
<a id="trace-40171"></a>
<a id="trace-40173"></a>
<a id="trace-40184"></a>
<a id="trace-40186"></a>
<a id="trace-40261"></a>
<a id="trace-40263"></a>
<a id="trace-40271"></a>
<a id="trace-40273"></a>
<a id="trace-40288"></a>
<a id="trace-40290"></a>
<a id="trace-40302"></a>
<a id="trace-40304"></a>
<a id="trace-40326"></a>
<a id="trace-40328"></a>
<a id="trace-40344"></a>
<a id="trace-40346"></a>
<a id="trace-40362"></a>
<a id="trace-40364"></a>
<a id="trace-40373"></a>
<a id="trace-40375"></a>
<a id="trace-40399"></a>
<a id="trace-40401"></a>
<a id="trace-40412"></a>
<a id="trace-40414"></a>
<a id="trace-40489"></a>
<a id="trace-40491"></a>
<a id="trace-40501"></a>
<a id="trace-40503"></a>
<a id="trace-40517"></a>
<a id="trace-40519"></a>
<a id="trace-40528"></a>
<a id="trace-40530"></a>
<a id="trace-40545"></a>
<a id="trace-40547"></a>
<a id="trace-40559"></a>
<a id="trace-40561"></a>
<a id="trace-40575"></a>
<a id="trace-40577"></a>
<a id="trace-40588"></a>
<a id="trace-40590"></a>
<a id="trace-40614"></a>
<a id="trace-40616"></a>
<a id="trace-40626"></a>
<a id="trace-40628"></a>
<a id="trace-40705"></a>
<a id="trace-40707"></a>
<a id="trace-40724"></a>
<a id="trace-40726"></a>
<a id="trace-40743"></a>
<a id="trace-40745"></a>
<a id="trace-40757"></a>
<a id="trace-40759"></a>
<a id="trace-40772"></a>
<a id="trace-40774"></a>
<a id="trace-40784"></a>
<a id="trace-40786"></a>
<a id="trace-40799"></a>
<a id="trace-40801"></a>
<a id="trace-40811"></a>
<a id="trace-40813"></a>
<a id="trace-40830"></a>
<a id="trace-40832"></a>
<a id="trace-40844"></a>
<a id="trace-40846"></a>
<a id="trace-40921"></a>
<a id="trace-40923"></a>
<a id="trace-40933"></a>
<a id="trace-40935"></a>
<a id="trace-40952"></a>
<a id="trace-40954"></a>
<a id="trace-40969"></a>
<a id="trace-40971"></a>
<a id="trace-40993"></a>
<a id="trace-40995"></a>
<a id="trace-41007"></a>
<a id="trace-41009"></a>
<a id="trace-41025"></a>
<a id="trace-41027"></a>
<a id="trace-41036"></a>
<a id="trace-41038"></a>
<a id="trace-41053"></a>
<a id="trace-41055"></a>
<a id="trace-41064"></a>
<a id="trace-41066"></a>
<a id="trace-41139"></a>
<a id="trace-41141"></a>
<a id="trace-41151"></a>
<a id="trace-41153"></a>
<a id="trace-41169"></a>
<a id="trace-41171"></a>
<a id="trace-41180"></a>
<a id="trace-41182"></a>
<a id="trace-41201"></a>
<a id="trace-41203"></a>
<a id="trace-41216"></a>
<a id="trace-41218"></a>
<a id="trace-41237"></a>
<a id="trace-41239"></a>
<a id="trace-41257"></a>
<a id="trace-41259"></a>
<a id="trace-41274"></a>
<a id="trace-41276"></a>
<a id="trace-41286"></a>
<a id="trace-41288"></a>
<a id="trace-41365"></a>
<a id="trace-41367"></a>
<a id="trace-41377"></a>
<a id="trace-41379"></a>
<a id="trace-41392"></a>
<a id="trace-41394"></a>
<a id="trace-41405"></a>
<a id="trace-41407"></a>
<a id="trace-41422"></a>
<a id="trace-41424"></a>
<a id="trace-41433"></a>
<a id="trace-41435"></a>
<a id="trace-41448"></a>
<a id="trace-41450"></a>
<a id="trace-41463"></a>
<a id="trace-41465"></a>
<a id="trace-41481"></a>
<a id="trace-41483"></a>
<a id="trace-41497"></a>
<a id="trace-41499"></a>
<a id="trace-41583"></a>
<a id="trace-41585"></a>
<a id="trace-41592"></a>
<a id="trace-41594"></a>
<a id="trace-41608"></a>
<a id="trace-41610"></a>
<a id="trace-41622"></a>
<a id="trace-41624"></a>
<a id="trace-41640"></a>
<a id="trace-41642"></a>
<a id="trace-41655"></a>
<a id="trace-41657"></a>
<a id="trace-41670"></a>
<a id="trace-41672"></a>
<a id="trace-41678"></a>
<a id="trace-41680"></a>
<a id="trace-41694"></a>
<a id="trace-41696"></a>
<a id="trace-41707"></a>
<a id="trace-41709"></a>
<a id="trace-41788"></a>
<a id="trace-41790"></a>
<a id="trace-41803"></a>
<a id="trace-41805"></a>
<a id="trace-41823"></a>
<a id="trace-41825"></a>
<a id="trace-41836"></a>
<a id="trace-41838"></a>
<a id="trace-41862"></a>
<a id="trace-41864"></a>
<a id="trace-41877"></a>
<a id="trace-41879"></a>
<a id="trace-41893"></a>
<a id="trace-41895"></a>
<a id="trace-41905"></a>
<a id="trace-41907"></a>
<a id="trace-41925"></a>
<a id="trace-41927"></a>
<a id="trace-41937"></a>
<a id="trace-41939"></a>
<a id="trace-42013"></a>
<a id="trace-42015"></a>
<a id="trace-42026"></a>
<a id="trace-42028"></a>
<a id="trace-42043"></a>
<a id="trace-42045"></a>
<a id="trace-42055"></a>
<a id="trace-42057"></a>
<a id="trace-42076"></a>
<a id="trace-42078"></a>
<a id="trace-42088"></a>
<a id="trace-42090"></a>
<a id="trace-42106"></a>
<a id="trace-42108"></a>
<a id="trace-42125"></a>
<a id="trace-42127"></a>
<a id="trace-42145"></a>
<a id="trace-42147"></a>
<a id="trace-42160"></a>
<a id="trace-42162"></a>
<a id="trace-42234"></a>
<a id="trace-42236"></a>
<a id="trace-42245"></a>
<a id="trace-42247"></a>
<a id="trace-42264"></a>
<a id="trace-42266"></a>
<a id="trace-42275"></a>
<a id="trace-42277"></a>
<a id="trace-42294"></a>
<a id="trace-42296"></a>
<a id="trace-42308"></a>
<a id="trace-42310"></a>
<a id="trace-42324"></a>
<a id="trace-42326"></a>
<a id="trace-42337"></a>
<a id="trace-42339"></a>
<a id="trace-42358"></a>
<a id="trace-42360"></a>
<a id="trace-42373"></a>
<a id="trace-42375"></a>
<a id="trace-42456"></a>
<a id="trace-42458"></a>
<a id="trace-42468"></a>
<a id="trace-42470"></a>
<a id="trace-42486"></a>
<a id="trace-42488"></a>
<a id="trace-42498"></a>
<a id="trace-42500"></a>
<a id="trace-42515"></a>
<a id="trace-42517"></a>
<a id="trace-42530"></a>
<a id="trace-42532"></a>
<a id="trace-42548"></a>
<a id="trace-42550"></a>
<a id="trace-42561"></a>
<a id="trace-42563"></a>
<a id="trace-42579"></a>
<a id="trace-42581"></a>
<a id="trace-42590"></a>
<a id="trace-42592"></a>
- 260.80s–319.80s (×238), actor 5, squad 0 (trace 40056): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.30s, trace 40044. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40073}.
<a id="trace-4399"></a>
- 314.05s–314.05s (×1), actor 5, squad 1 (events line 4399): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-42351"></a>
- 314.05s–314.05s (×1), actor 5, squad 1 (trace 42351): renew committed intent (75 s lifetime). Knowledge: actor memory at 314.05s, trace 42351. Next observer evidence: {'until': 344, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-4460"></a>
- 320.30s–320.30s (×1), actor 5, squad 0 (events line 4460): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-42668"></a>
<a id="trace-42670"></a>
- 320.30s–320.30s (×2), actor 5, squad 0 (trace 42668): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 42603. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42684}.
<a id="trace-42675"></a>
- 320.30s–320.30s (×1), actor 5, squad 0 (trace 42675): renew committed intent (75 s lifetime). Knowledge: actor memory at 320.30s, trace 42675. Next observer evidence: {'until': 320.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42684}.
<a id="trace-42684"></a>
<a id="trace-42686"></a>
<a id="trace-42702"></a>
<a id="trace-42704"></a>
<a id="trace-42720"></a>
<a id="trace-42722"></a>
<a id="trace-42734"></a>
<a id="trace-42736"></a>
<a id="trace-42747"></a>
<a id="trace-42749"></a>
<a id="trace-42766"></a>
<a id="trace-42768"></a>
<a id="trace-42779"></a>
<a id="trace-42781"></a>
<a id="trace-42797"></a>
<a id="trace-42799"></a>
<a id="trace-42808"></a>
<a id="trace-42810"></a>
<a id="trace-42887"></a>
<a id="trace-42889"></a>
<a id="trace-42899"></a>
<a id="trace-42901"></a>
<a id="trace-42915"></a>
<a id="trace-42917"></a>
<a id="trace-42932"></a>
<a id="trace-42934"></a>
<a id="trace-42949"></a>
<a id="trace-42951"></a>
<a id="trace-42966"></a>
<a id="trace-42968"></a>
<a id="trace-42989"></a>
<a id="trace-42991"></a>
<a id="trace-42999"></a>
<a id="trace-43001"></a>
<a id="trace-43014"></a>
<a id="trace-43016"></a>
<a id="trace-43028"></a>
<a id="trace-43030"></a>
<a id="trace-43107"></a>
<a id="trace-43109"></a>
<a id="trace-43121"></a>
<a id="trace-43123"></a>
<a id="trace-43137"></a>
<a id="trace-43139"></a>
<a id="trace-43147"></a>
<a id="trace-43149"></a>
<a id="trace-43165"></a>
<a id="trace-43167"></a>
<a id="trace-43177"></a>
<a id="trace-43179"></a>
<a id="trace-43198"></a>
<a id="trace-43200"></a>
<a id="trace-43212"></a>
<a id="trace-43214"></a>
<a id="trace-43234"></a>
<a id="trace-43236"></a>
<a id="trace-43245"></a>
<a id="trace-43247"></a>
<a id="trace-43327"></a>
<a id="trace-43329"></a>
<a id="trace-43340"></a>
<a id="trace-43342"></a>
<a id="trace-43355"></a>
<a id="trace-43357"></a>
<a id="trace-43368"></a>
<a id="trace-43370"></a>
<a id="trace-43388"></a>
<a id="trace-43390"></a>
<a id="trace-43401"></a>
<a id="trace-43403"></a>
<a id="trace-43414"></a>
<a id="trace-43416"></a>
<a id="trace-43428"></a>
<a id="trace-43430"></a>
<a id="trace-43449"></a>
<a id="trace-43451"></a>
<a id="trace-43464"></a>
<a id="trace-43466"></a>
<a id="trace-43545"></a>
<a id="trace-43547"></a>
<a id="trace-43553"></a>
<a id="trace-43555"></a>
<a id="trace-43572"></a>
<a id="trace-43574"></a>
<a id="trace-43589"></a>
<a id="trace-43591"></a>
<a id="trace-43606"></a>
<a id="trace-43608"></a>
<a id="trace-43621"></a>
<a id="trace-43623"></a>
<a id="trace-43636"></a>
<a id="trace-43638"></a>
<a id="trace-43647"></a>
<a id="trace-43649"></a>
<a id="trace-43668"></a>
<a id="trace-43670"></a>
<a id="trace-43680"></a>
<a id="trace-43682"></a>
<a id="trace-43756"></a>
<a id="trace-43758"></a>
<a id="trace-43766"></a>
<a id="trace-43768"></a>
<a id="trace-43786"></a>
<a id="trace-43788"></a>
<a id="trace-43801"></a>
<a id="trace-43803"></a>
<a id="trace-43819"></a>
<a id="trace-43821"></a>
<a id="trace-43836"></a>
<a id="trace-43838"></a>
<a id="trace-43858"></a>
<a id="trace-43860"></a>
<a id="trace-43870"></a>
<a id="trace-43872"></a>
<a id="trace-43889"></a>
<a id="trace-43891"></a>
<a id="trace-43900"></a>
<a id="trace-43902"></a>
<a id="trace-43978"></a>
<a id="trace-43980"></a>
<a id="trace-43991"></a>
<a id="trace-43993"></a>
<a id="trace-44010"></a>
<a id="trace-44012"></a>
<a id="trace-44025"></a>
<a id="trace-44027"></a>
<a id="trace-44042"></a>
<a id="trace-44044"></a>
<a id="trace-44053"></a>
<a id="trace-44055"></a>
<a id="trace-44075"></a>
<a id="trace-44077"></a>
<a id="trace-44089"></a>
<a id="trace-44091"></a>
<a id="trace-44110"></a>
<a id="trace-44112"></a>
<a id="trace-44129"></a>
<a id="trace-44131"></a>
<a id="trace-44206"></a>
<a id="trace-44208"></a>
<a id="trace-44214"></a>
<a id="trace-44216"></a>
<a id="trace-44230"></a>
<a id="trace-44232"></a>
<a id="trace-44244"></a>
<a id="trace-44246"></a>
<a id="trace-44261"></a>
<a id="trace-44263"></a>
<a id="trace-44275"></a>
<a id="trace-44277"></a>
<a id="trace-44292"></a>
<a id="trace-44294"></a>
<a id="trace-44302"></a>
<a id="trace-44304"></a>
<a id="trace-44319"></a>
<a id="trace-44321"></a>
<a id="trace-44337"></a>
<a id="trace-44339"></a>
- 320.80s–359.80s (×158), actor 5, squad 0 (trace 42684): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.30s, trace 42675. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42702}.

## Net delivery

210 matched order/radio deliveries; 490 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.398s; maximum 2.100s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 3545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 3546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4024: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 5449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5455: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 5457: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5459: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5460: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5461: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5462: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5463: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5464: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5465: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5466: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5467: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5468: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5654: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5655: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5656: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 5657: estimate 8.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 7074: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7079: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7080: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 7082: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7083: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7084: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7085: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7086: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7087: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7088: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7089: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7090: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7091: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7092: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7093: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 11815: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11820: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11821: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 11823: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11824: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11825: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11826: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11827: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11828: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11829: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11830: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11831: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11832: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11833: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11834: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 11950: estimate 9.83; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 11951: estimate 9.83; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 13468: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 13469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 13470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 13471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 13472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 13473: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 13474: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 13475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 13476: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 13477: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 13478: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 13479: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 13480: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 13481: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 13482: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 13483: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 13484: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 13485: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 13486: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 13487: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.10s leader 5, trace 17653: estimate 9.79; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.10s leader 5, trace 17654: estimate 9.79; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 20746: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 20747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 20748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 20749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 20750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 20751: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 20752: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 20753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 20754: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 20755: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 20756: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 20757: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 20758: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 20759: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 20760: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 20761: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 20762: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 20763: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 20764: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 20765: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 21108: estimate 9.64; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 21109: estimate 9.64; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 21110: estimate 9.64; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 21111: estimate 9.64; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 21492: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 21493: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 21494: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 21495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 21496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 21497: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 21498: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 21499: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 21500: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 21501: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 21502: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 21503: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 21504: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 21505: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 21506: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 21507: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 21508: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 21509: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 21510: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 21511: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.15s leader 5, trace 21853: estimate 12.42; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.15s leader 5, trace 21854: estimate 12.42; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 23246: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 23247: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 23248: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 23249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 23250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 23251: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 23252: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 23253: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 23254: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 23255: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 23256: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 23257: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 23258: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 23259: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 23260: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 23261: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 23262: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 23263: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 23264: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 23265: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 24081: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 24082: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 24083: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 24084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 24085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 24086: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 24087: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 24088: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 24089: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 24090: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 24091: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 24092: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 24093: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 24094: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 24095: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 24096: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 24097: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 24098: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 24099: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 24100: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 77.75s leader 5, trace 24348: estimate 12.23; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 77.75s leader 5, trace 24349: estimate 12.23; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 27580: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 27581: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 27582: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 27583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 27584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 27585: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 27586: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 27587: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 27588: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 27589: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 27590: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 27591: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 27592: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 27593: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 27594: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 27595: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 27596: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 27597: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 27598: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 27599: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 27612: estimate 12.32; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 27613: estimate 12.32; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 27889: estimate 12.37; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 27890: estimate 12.37; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 27990: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 27991: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 27992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 27993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 27994: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 27995: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 27996: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 27997: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 27998: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 27999: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 28000: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 28001: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 28002: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 28003: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 28004: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 28005: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 28006: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 28007: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.55s leader 5, trace 28668: estimate 12.23; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 28778: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 28779: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 28780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 28781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 28782: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 28783: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 28784: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 28785: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 28786: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 28787: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 28788: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 28789: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 28790: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 28791: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 28792: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 28793: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 28794: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 31829: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 31830: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 31991: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 31992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 31993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 31994: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 31995: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 31996: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 31997: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 31998: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 31999: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 32000: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 32001: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 32002: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 32003: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 32004: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 32005: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 32006: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 32687: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 32688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 32689: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 32690: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 32691: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 32692: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 32693: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 32694: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 32695: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 32696: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 32697: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 32698: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 32699: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 32700: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 32701: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 32928: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 32929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 32930: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 32931: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 32932: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 32933: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 32934: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 32935: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 32936: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 32937: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 32938: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 32939: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 32940: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 32941: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 32942: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 33370: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 33371: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 33372: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 33373: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 33374: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 33375: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 33376: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 33377: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 33378: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 33379: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 33380: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 33381: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 33382: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 33383: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 33384: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 33598: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 33599: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 33600: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 33601: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 33602: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 33603: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 33604: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 33605: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 33606: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 33607: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 33608: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 33609: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 33610: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 33611: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 33612: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 33841: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 33842: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 33843: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 33844: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 33845: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 33846: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 33847: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 33848: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 33849: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 33850: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 33851: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 33852: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 33853: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 33854: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 33855: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 34148: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 34149: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 34150: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 34151: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 34152: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 34153: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 34154: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 34155: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 34156: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 34157: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 34158: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 34159: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 34160: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 34161: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 34162: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 34362: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 34363: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 34364: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 34365: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 34366: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 34367: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 34368: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 34369: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 34370: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 34371: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 34372: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 34373: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 34374: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 34375: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 34376: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 132.55s leader 5, trace 34487: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 132.55s leader 5, trace 34488: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 34607: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 34608: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 34609: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 34610: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 34611: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 34612: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 34613: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 34614: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 34615: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 34616: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 34617: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 34618: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 34619: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 34620: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 34621: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 139.75s leader 5, trace 34845: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 139.75s leader 5, trace 34846: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 34856: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 34857: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 34858: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 34859: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 34860: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 34861: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 34862: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 34863: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 34864: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 34865: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 34866: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 34867: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 34868: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 34869: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 34870: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 35153: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 35154: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 35155: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 35156: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 35157: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 35158: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 35159: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 35160: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 35161: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 35162: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 35163: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 35164: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 35165: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 35166: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 35167: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 35388: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 35389: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 35390: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 35391: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 35392: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 35393: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 35394: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 35395: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 35396: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 35397: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 35398: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 35399: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 35400: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 35401: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 35402: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 35590: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 35591: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 35592: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 35593: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 35594: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 35595: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 35596: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 35597: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 35598: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 35599: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 35600: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 35601: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 35602: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 35603: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 35604: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 35769: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 35770: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 35771: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 35772: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 35773: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 35774: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 35775: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 35776: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 35777: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 35778: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 35779: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 35780: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 35781: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 35782: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 35951: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 35952: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 35953: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 35954: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 35955: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 35956: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 35957: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 35958: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 35959: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 35960: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 35961: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 35962: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 35963: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 35964: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 36133: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 36134: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 36135: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 36136: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 36137: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 36138: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 36139: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 36140: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 36141: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 36142: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 36143: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 36144: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 36145: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 36146: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 36314: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 36315: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 36316: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 36317: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 36318: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 36319: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 36320: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 36321: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 36322: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 36323: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 36324: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 36325: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 36326: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 36327: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 36508: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 36509: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 36510: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 36511: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 36512: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 36513: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 36514: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 36515: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 36516: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 36517: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 36518: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 36519: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 36520: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 36521: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 36724: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 36725: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 36726: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 36727: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 36728: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 36729: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 36730: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 36731: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 36732: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 36733: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 36734: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 36735: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 36736: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 36737: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 36943: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 36944: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 36945: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 36946: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 36947: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 36948: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 36949: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 36950: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 36951: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 36952: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 36953: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 36954: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 36955: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 36956: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.55s leader 5, trace 37079: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 37155: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 37156: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 37157: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 37158: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 37159: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 37160: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 37161: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 37162: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 37163: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 37164: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 37165: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 37166: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 37167: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 37168: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 199.75s leader 5, trace 37360: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 37375: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 37376: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 37377: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 37378: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 37379: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 37380: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 37381: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 37382: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 37383: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 37384: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 37385: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 37386: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 37387: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 37388: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 37595: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 37596: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 37597: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 37598: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 37599: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 37600: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 37601: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 37602: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 37603: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 37604: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 37605: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 37606: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 37607: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 37608: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 37807: estimate 1.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 37808: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 37809: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 37810: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 37811: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 37812: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 37813: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 37814: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 37815: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 37816: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 37817: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 37818: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 37819: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 37820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 38024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 38025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 38026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 38027: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 38028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 38029: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 38030: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 38031: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 38032: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 38033: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 38034: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 38035: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 38036: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 38037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 38240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 38241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 38242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 38243: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 38244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 38245: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 38246: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 38247: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 38248: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 38249: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 38250: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 38251: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 38252: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 38253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 38458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 38459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 38460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 38461: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 38462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 38463: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 38464: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 38465: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 38466: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 38467: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 38468: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 38469: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 38470: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 38471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 38681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 38682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 38683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 38684: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 38685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 38686: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 38687: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 38688: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 38689: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 38690: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 38691: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 38692: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 38693: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 38694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 38898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 38899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 38900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 38901: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 38902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 38903: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 38904: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 38905: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 38906: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 38907: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 38908: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 38909: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 38910: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 38911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 39103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 39104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 39105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 39106: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 39107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 39108: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 39109: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 39110: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 39111: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 39112: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 39113: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 39114: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 39115: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 39116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 39320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 39321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 39322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 39323: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 39324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 39325: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 39326: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 39327: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 39328: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 39329: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 39330: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 39331: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 39332: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 39333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 39539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 39540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 39541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 39542: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 39543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 39544: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 39545: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 39546: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 39547: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 39548: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 39549: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 39550: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 39551: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 39552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.00s leader 5, trace 39682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 39752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 39753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 39754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 39755: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 39756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 39757: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 39758: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 39759: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 39760: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 39761: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 39762: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 39763: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 39764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 39765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 39972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 39973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 39974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 39975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 39976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 39977: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 39978: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 39979: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 39980: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 39981: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 39982: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 39983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 39984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 39985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.30s leader 5, trace 40044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 40193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 40194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 40195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 40196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 40197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 40198: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 40199: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 40200: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 40201: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 40202: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 40203: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 40204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 40205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 40206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 40422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 40423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 40424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 40425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 40426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 40427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 40428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 40429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 40430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 40431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 40432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 40433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 40434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 40435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 40641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 40642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 40643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 40644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 40645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 40646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 40647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 40648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 40649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 40650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 40651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 40652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 40653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 40654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 40853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 40854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 40855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 40856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 40857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 40858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 40859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 40860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 40861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 40862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 40863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 40864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 40865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 40866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 41072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 41073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 41074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 41075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 41076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 41077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 41078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 41079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 41080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 41081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 41082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 41083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 41084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 41085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 41300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 41301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 41302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 41303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 41304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 41305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 41306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 41307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 41308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 41309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 41310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 41311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 41312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 41313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 41506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 41507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 41508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 41509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 41510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 41511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 41512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 41513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 41514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 41515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 41516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 41517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 41518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 41519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 41717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 41718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 41719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 41720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 41721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 41722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 41723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 41724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 41725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 41726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 41727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 41728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 41729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 41730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 41949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 41950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 41951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 41952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 41953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 41954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 41955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 41956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 41957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 41958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 41959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 41960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 41961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 41962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 42167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 42168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 42169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 42170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 42171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 42172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 42173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 42174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 42175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 42176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 42177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 42178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 42179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 42180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 314.05s leader 5, trace 42351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 42383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 42384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 42385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 42386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 42387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 42388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 42389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 42390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 42391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 42392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 42393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 42394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 42395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 42396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 42601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 42602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 42603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 42604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 42605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 42606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 42607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 42608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 42609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 42610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 42611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 42612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 42613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 42614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.30s leader 5, trace 42675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 42817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 42818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 42819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 42820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 42821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 42822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 42823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 42824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 42825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 42826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 42827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 42828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 42829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 42830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 43038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 43039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 43040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 43041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 43042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 43043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 43044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 43045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 43046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 43047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 43048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 43049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 43050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 43051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 43263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 43264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 43265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 43266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 43267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 43268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 43269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 43270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 43271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 43272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 43273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 43274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 43275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 43276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 43476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 43477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 43478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 43479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 43480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 43481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 43482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 43483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 43484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 43485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 43486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 43487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 43488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 43489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 43688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 43689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 43690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 43691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 43692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 43693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 43694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 43695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 43696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 43697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 43698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 43699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 43700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 43701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 43912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 43913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 43914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 43915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 43916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 43917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 43918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 43919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 43920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 43921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 43922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 43923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 43924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 43925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 44138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 44139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 44140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 44141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 44142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 44143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 44144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 44145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 44146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 44147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 44148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 44149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 44150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 44151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 44347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 44348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 44349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 44350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 44351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 44352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 44353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 44354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 44355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 44356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 44357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 44358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 44359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 44360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Reed killed in action
- 1: Bren killed in action
- 1: Rook incapacitated
- 1: Soren killed in action
- 1: Orin incapacitated

## Outcome attribution

- 132.55s, evidence 2917: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 133.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34513}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 132.55s, evidence 34487: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234175 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 133.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34513}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 132.55s, evidence 34488: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.234175 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 133.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34513}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 139.75s, evidence 2968: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340590813533515, 'next_transition': 34848}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 139.75s, evidence 34845: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.239768 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340590813533515, 'next_transition': 34848}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 139.75s, evidence 34846: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.239768 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340590813533515, 'next_transition': 34848}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 192.55s, evidence 3251: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 222.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3817}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 199.75s, evidence 3321: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 199.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37362}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 253.00s, evidence 3817: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 283, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4399}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 260.30s, evidence 3889: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 314.05s, evidence 4399: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 320.30s, evidence 4460: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
