# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/30/107/good-azure/battle-107-1789674332010720708`

## Battle summary

**Ember** · 360 s · 323 shots.

### Turning points

- 30.1s, squad 4: contact (events line 278). First recorded contact.
- 51.7s, squad 0: help call ([trace 6125](#trace-6125)). No completion observed before termination.
- 53.0s, squad 1: help answer ([trace 6317](#trace-6317)). 59.4s, squad 1: took cover and returned fire.
- 57.9s, squad 1: help call ([trace 7390](#trace-7390)). 59.8s, squad 0: answered a neighbour with support by fire.
- 59.8s, squad 0: help answer ([trace 7641](#trace-7641)). 60.8s, squad 0: advanced tactically.
- 63.4s, squad 0: help call ([trace 10356](#trace-10356)). 64.8s, squad 1: answered a neighbour with support by fire.
- 64.8s, squad 1: help answer ([trace 12756](#trace-12756)). 68.5s, squad 1: took cover and returned fire.
- 91.2s, squad 0: help call ([trace 15245](#trace-15245)). 92.7s, squad 1: answered a neighbour with support by fire.
- 92.7s, squad 1: help answer ([trace 15377](#trace-15377)). 94.8s, squad 1: advanced tactically.
- 102.2s, squad 0: withdrawal ([trace 16968](#trace-16968)). 139.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 8 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 64 shots, 5/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 14 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 224 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 21 shots, 1/2 lost.

### Decisions and attribution

At 99.4s, squad 1 chose took cover and returned fire ([trace 16618](#trace-16618)), followed by 0 shots and 1 own casualties; estimate 9.6 against 0 distinct squad-reported contacts; At 52.2s, squad 0 chose took cover and returned fire ([trace 6171](#trace-6171)), followed by 1 shots and 0 own casualties; estimate 9.7 against 0 distinct squad-reported contacts; At 59.8s, squad 0 chose answered a neighbour with support by fire ([trace 7641](#trace-7641)), followed by 1 shots and 0 own casualties; estimate 9.7 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9426936231347823, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.410024195796955, 'next_transition': 827}.

### Communication

285 matched deliveries (mean 0.31s, max 2.00s); 494 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 30.15s, squad 4, contact, evidence events line 278: First recorded contact; .
- 51.65s, squad 0, help call, evidence 6125: NeedSupport; No completion observed before termination.
- 53.00s, squad 1, help answer, evidence 6317: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 59.4s, squad 1: took cover and returned fire.
- 57.90s, squad 1, help call, evidence 7390: NeedSupport; 59.8s, squad 0: answered a neighbour with support by fire.
- 59.75s, squad 0, help answer, evidence 7641: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 60.8s, squad 0: advanced tactically.
- 63.40s, squad 0, help call, evidence 10356: NeedSupport; 64.8s, squad 1: answered a neighbour with support by fire.
- 64.80s, squad 1, help answer, evidence 12756: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 68.5s, squad 1: took cover and returned fire.
- 91.25s, squad 0, help call, evidence 15245: NeedSupport; 92.7s, squad 1: answered a neighbour with support by fire.
- 92.65s, squad 1, help answer, evidence 15377: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 94.8s, squad 1: advanced tactically.
- 102.15s, squad 0, withdrawal, evidence 16968: BreakContact: believed ratio at least two without superiority; 139.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 103.15s, squad 0, help call, evidence 17125: NeedSupport; 104.8s, squad 1: answered a neighbour with support by fire.
- 104.75s, squad 1, help answer, evidence 17211: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 108.8s, squad 1: took cover and returned fire.
- 112.15s, squad 1, withdrawal, evidence 18463: BreakContact: believed ratio at least two without superiority; 133.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 114.40s, squad 1, help call, evidence 18684: NeedSupport; 139.9s, squad 0: answered a neighbour with support by fire.
- 139.85s, squad 0, help answer, evidence 19984: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 146.1s, squad 0: Withdraw to received rally.
- 140.70s, squad 1, withdrawal, evidence 20821: Withdraw to received rally; No completion observed before termination.
- 146.05s, squad 0, withdrawal, evidence 21145: Withdraw to received rally; 160.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 338.70s, squad 0, help call, evidence 30115: NeedSupport; No completion observed before termination.

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
<a id="trace-983"></a>
<a id="trace-985"></a>
<a id="trace-1015"></a>
<a id="trace-1017"></a>
<a id="trace-1045"></a>
<a id="trace-1047"></a>
<a id="trace-1075"></a>
<a id="trace-1077"></a>
<a id="trace-1106"></a>
<a id="trace-1108"></a>
<a id="trace-1134"></a>
<a id="trace-1136"></a>
<a id="trace-1165"></a>
<a id="trace-1167"></a>
<a id="trace-1181"></a>
<a id="trace-1183"></a>
<a id="trace-1274"></a>
<a id="trace-1276"></a>
<a id="trace-1290"></a>
<a id="trace-1292"></a>
<a id="trace-1313"></a>
<a id="trace-1315"></a>
<a id="trace-1334"></a>
<a id="trace-1336"></a>
<a id="trace-1364"></a>
<a id="trace-1366"></a>
<a id="trace-1381"></a>
<a id="trace-1383"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9439232876035892, 'next_transition': 739}.
<a id="trace-827"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 827): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.92973264250155, 'next_transition': 1784}.
<a id="trace-953"></a>
<a id="trace-987"></a>
<a id="trace-1019"></a>
<a id="trace-1021"></a>
<a id="trace-1110"></a>
<a id="trace-1112"></a>
<a id="trace-1138"></a>
<a id="trace-1140"></a>
<a id="trace-1185"></a>
<a id="trace-1187"></a>
<a id="trace-1278"></a>
<a id="trace-1280"></a>
<a id="trace-1294"></a>
<a id="trace-1296"></a>
<a id="trace-1317"></a>
<a id="trace-1319"></a>
<a id="trace-1368"></a>
<a id="trace-1370"></a>
<a id="trace-1778"></a>
<a id="trace-1780"></a>
<a id="trace-1883"></a>
<a id="trace-1885"></a>
<a id="trace-2014"></a>
<a id="trace-2016"></a>
<a id="trace-2104"></a>
<a id="trace-2106"></a>
<a id="trace-2126"></a>
<a id="trace-2128"></a>
<a id="trace-2157"></a>
<a id="trace-2159"></a>
<a id="trace-2184"></a>
<a id="trace-2186"></a>
<a id="trace-2232"></a>
<a id="trace-2234"></a>
<a id="trace-2327"></a>
<a id="trace-2329"></a>
<a id="trace-2358"></a>
<a id="trace-2360"></a>
<a id="trace-2417"></a>
<a id="trace-2419"></a>
<a id="trace-2449"></a>
<a id="trace-2451"></a>
<a id="trace-2472"></a>
<a id="trace-2474"></a>
<a id="trace-2501"></a>
<a id="trace-2503"></a>
<a id="trace-2751"></a>
<a id="trace-2753"></a>
<a id="trace-2770"></a>
<a id="trace-2772"></a>
<a id="trace-2800"></a>
<a id="trace-2802"></a>
<a id="trace-2887"></a>
<a id="trace-2889"></a>
<a id="trace-2900"></a>
<a id="trace-2902"></a>
<a id="trace-2977"></a>
<a id="trace-2979"></a>
<a id="trace-2991"></a>
<a id="trace-2993"></a>
<a id="trace-3013"></a>
<a id="trace-3015"></a>
<a id="trace-3035"></a>
<a id="trace-3037"></a>
<a id="trace-3053"></a>
<a id="trace-3055"></a>
<a id="trace-3072"></a>
<a id="trace-3074"></a>
<a id="trace-3331"></a>
<a id="trace-3333"></a>
<a id="trace-3348"></a>
<a id="trace-3350"></a>
<a id="trace-3526"></a>
<a id="trace-3528"></a>
<a id="trace-3550"></a>
<a id="trace-3552"></a>
<a id="trace-3587"></a>
<a id="trace-3589"></a>
<a id="trace-3609"></a>
<a id="trace-3611"></a>
<a id="trace-3633"></a>
<a id="trace-3635"></a>
<a id="trace-3652"></a>
<a id="trace-3654"></a>
<a id="trace-3678"></a>
<a id="trace-3680"></a>
<a id="trace-3805"></a>
<a id="trace-3807"></a>
<a id="trace-3831"></a>
<a id="trace-3833"></a>
<a id="trace-3854"></a>
<a id="trace-3856"></a>
<a id="trace-3878"></a>
<a id="trace-3880"></a>
<a id="trace-4251"></a>
<a id="trace-4253"></a>
<a id="trace-4435"></a>
<a id="trace-4437"></a>
<a id="trace-4473"></a>
<a id="trace-4475"></a>
<a id="trace-4598"></a>
<a id="trace-4600"></a>
<a id="trace-4655"></a>
<a id="trace-4657"></a>
<a id="trace-4676"></a>
<a id="trace-4678"></a>
<a id="trace-4711"></a>
<a id="trace-4713"></a>
<a id="trace-4725"></a>
<a id="trace-4727"></a>
<a id="trace-4906"></a>
<a id="trace-4908"></a>
<a id="trace-5143"></a>
<a id="trace-5145"></a>
<a id="trace-5167"></a>
<a id="trace-5169"></a>
<a id="trace-5296"></a>
<a id="trace-5298"></a>
<a id="trace-5317"></a>
<a id="trace-5319"></a>
<a id="trace-5347"></a>
<a id="trace-5349"></a>
<a id="trace-5372"></a>
<a id="trace-5374"></a>
<a id="trace-5398"></a>
<a id="trace-5400"></a>
<a id="trace-5417"></a>
<a id="trace-5419"></a>
<a id="trace-5673"></a>
<a id="trace-5675"></a>
<a id="trace-5704"></a>
<a id="trace-5706"></a>
<a id="trace-6037"></a>
<a id="trace-6039"></a>
<a id="trace-6057"></a>
<a id="trace-6059"></a>
<a id="trace-6105"></a>
<a id="trace-6107"></a>
<a id="trace-6137"></a>
<a id="trace-6139"></a>
<a id="trace-6163"></a>
<a id="trace-6165"></a>
<a id="trace-6302"></a>
<a id="trace-6304"></a>
<a id="trace-7092"></a>
<a id="trace-7094"></a>
<a id="trace-7119"></a>
<a id="trace-7121"></a>
<a id="trace-7174"></a>
<a id="trace-7176"></a>
<a id="trace-7268"></a>
<a id="trace-7270"></a>
<a id="trace-7286"></a>
<a id="trace-7288"></a>
<a id="trace-7338"></a>
<a id="trace-7340"></a>
<a id="trace-7367"></a>
<a id="trace-7369"></a>
<a id="trace-7385"></a>
<a id="trace-7387"></a>
<a id="trace-7429"></a>
<a id="trace-7431"></a>
<a id="trace-7448"></a>
<a id="trace-7450"></a>
<a id="trace-7638"></a>
<a id="trace-7640"></a>
<a id="trace-10064"></a>
<a id="trace-10066"></a>
<a id="trace-10213"></a>
<a id="trace-10215"></a>
<a id="trace-10238"></a>
<a id="trace-10240"></a>
<a id="trace-10312"></a>
<a id="trace-10314"></a>
<a id="trace-10347"></a>
<a id="trace-10349"></a>
<a id="trace-10379"></a>
<a id="trace-10381"></a>
<a id="trace-12732"></a>
<a id="trace-12734"></a>
<a id="trace-13595"></a>
<a id="trace-13597"></a>
<a id="trace-13614"></a>
<a id="trace-13616"></a>
<a id="trace-13633"></a>
<a id="trace-13635"></a>
<a id="trace-13660"></a>
<a id="trace-13662"></a>
<a id="trace-13681"></a>
<a id="trace-13683"></a>
<a id="trace-13691"></a>
<a id="trace-13693"></a>
<a id="trace-13900"></a>
<a id="trace-13902"></a>
<a id="trace-13928"></a>
<a id="trace-13930"></a>
<a id="trace-13949"></a>
<a id="trace-13951"></a>
<a id="trace-14036"></a>
<a id="trace-14038"></a>
<a id="trace-14059"></a>
<a id="trace-14061"></a>
<a id="trace-14086"></a>
<a id="trace-14088"></a>
<a id="trace-14102"></a>
<a id="trace-14104"></a>
<a id="trace-14124"></a>
<a id="trace-14126"></a>
<a id="trace-14138"></a>
<a id="trace-14140"></a>
<a id="trace-14171"></a>
<a id="trace-14173"></a>
<a id="trace-14186"></a>
<a id="trace-14188"></a>
<a id="trace-14200"></a>
<a id="trace-14202"></a>
<a id="trace-14281"></a>
<a id="trace-14283"></a>
<a id="trace-14302"></a>
<a id="trace-14304"></a>
<a id="trace-14337"></a>
<a id="trace-14339"></a>
<a id="trace-14369"></a>
<a id="trace-14371"></a>
<a id="trace-14400"></a>
<a id="trace-14402"></a>
<a id="trace-14421"></a>
<a id="trace-14423"></a>
<a id="trace-14449"></a>
<a id="trace-14451"></a>
<a id="trace-14591"></a>
<a id="trace-14612"></a>
<a id="trace-14629"></a>
<a id="trace-14652"></a>
<a id="trace-14669"></a>
<a id="trace-14696"></a>
<a id="trace-14698"></a>
<a id="trace-14774"></a>
<a id="trace-14776"></a>
<a id="trace-14793"></a>
<a id="trace-14795"></a>
<a id="trace-14812"></a>
<a id="trace-14814"></a>
<a id="trace-14825"></a>
<a id="trace-14827"></a>
<a id="trace-15038"></a>
<a id="trace-15040"></a>
<a id="trace-15092"></a>
<a id="trace-15094"></a>
<a id="trace-15113"></a>
<a id="trace-15115"></a>
<a id="trace-15209"></a>
<a id="trace-15211"></a>
<a id="trace-15241"></a>
<a id="trace-15243"></a>
<a id="trace-15269"></a>
<a id="trace-15271"></a>
<a id="trace-15293"></a>
<a id="trace-15295"></a>
<a id="trace-16136"></a>
<a id="trace-16138"></a>
<a id="trace-16171"></a>
<a id="trace-16173"></a>
<a id="trace-16195"></a>
<a id="trace-16197"></a>
<a id="trace-16229"></a>
<a id="trace-16231"></a>
<a id="trace-16258"></a>
<a id="trace-16260"></a>
<a id="trace-16439"></a>
<a id="trace-16441"></a>
<a id="trace-16467"></a>
<a id="trace-16469"></a>
<a id="trace-16499"></a>
<a id="trace-16501"></a>
<a id="trace-16530"></a>
<a id="trace-16532"></a>
<a id="trace-16548"></a>
<a id="trace-16550"></a>
<a id="trace-16575"></a>
<a id="trace-16577"></a>
<a id="trace-16595"></a>
<a id="trace-16597"></a>
<a id="trace-16615"></a>
<a id="trace-16617"></a>
<a id="trace-16800"></a>
<a id="trace-16802"></a>
<a id="trace-16910"></a>
<a id="trace-16912"></a>
<a id="trace-17110"></a>
<a id="trace-17112"></a>
<a id="trace-17146"></a>
<a id="trace-17148"></a>
<a id="trace-17165"></a>
<a id="trace-17167"></a>
<a id="trace-17190"></a>
<a id="trace-17192"></a>
<a id="trace-18074"></a>
<a id="trace-18076"></a>
<a id="trace-18098"></a>
<a id="trace-18100"></a>
<a id="trace-18126"></a>
<a id="trace-18128"></a>
<a id="trace-18150"></a>
<a id="trace-18152"></a>
<a id="trace-18173"></a>
<a id="trace-18175"></a>
<a id="trace-18201"></a>
<a id="trace-18203"></a>
<a id="trace-18216"></a>
<a id="trace-18218"></a>
<a id="trace-18307"></a>
<a id="trace-18309"></a>
<a id="trace-18320"></a>
<a id="trace-18322"></a>
<a id="trace-18449"></a>
<a id="trace-18451"></a>
<a id="trace-18540"></a>
<a id="trace-18542"></a>
<a id="trace-18555"></a>
<a id="trace-18557"></a>
<a id="trace-18584"></a>
<a id="trace-18586"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18676"></a>
<a id="trace-18678"></a>
<a id="trace-18789"></a>
<a id="trace-18791"></a>
<a id="trace-18851"></a>
<a id="trace-18853"></a>
<a id="trace-18873"></a>
<a id="trace-18875"></a>
<a id="trace-18887"></a>
<a id="trace-18889"></a>
<a id="trace-18907"></a>
<a id="trace-18909"></a>
<a id="trace-18918"></a>
<a id="trace-18920"></a>
<a id="trace-18938"></a>
<a id="trace-18940"></a>
<a id="trace-18950"></a>
<a id="trace-18952"></a>
<a id="trace-19034"></a>
<a id="trace-19036"></a>
<a id="trace-19046"></a>
<a id="trace-19048"></a>
<a id="trace-19080"></a>
<a id="trace-19082"></a>
<a id="trace-19099"></a>
<a id="trace-19101"></a>
<a id="trace-19115"></a>
<a id="trace-19117"></a>
<a id="trace-19134"></a>
<a id="trace-19136"></a>
<a id="trace-19144"></a>
<a id="trace-19146"></a>
<a id="trace-19167"></a>
<a id="trace-19169"></a>
<a id="trace-19177"></a>
<a id="trace-19179"></a>
<a id="trace-19260"></a>
<a id="trace-19262"></a>
<a id="trace-19325"></a>
<a id="trace-19327"></a>
<a id="trace-19343"></a>
<a id="trace-19345"></a>
<a id="trace-19361"></a>
<a id="trace-19363"></a>
<a id="trace-19381"></a>
<a id="trace-19383"></a>
<a id="trace-19420"></a>
<a id="trace-19422"></a>
<a id="trace-19450"></a>
<a id="trace-19452"></a>
<a id="trace-19470"></a>
<a id="trace-19472"></a>
<a id="trace-19550"></a>
<a id="trace-19552"></a>
<a id="trace-19562"></a>
<a id="trace-19564"></a>
<a id="trace-19579"></a>
<a id="trace-19581"></a>
<a id="trace-19589"></a>
<a id="trace-19591"></a>
<a id="trace-19608"></a>
<a id="trace-19610"></a>
<a id="trace-19625"></a>
<a id="trace-19627"></a>
<a id="trace-19642"></a>
<a id="trace-19644"></a>
<a id="trace-19655"></a>
<a id="trace-19657"></a>
<a id="trace-19679"></a>
<a id="trace-19681"></a>
<a id="trace-19773"></a>
<a id="trace-19775"></a>
<a id="trace-19839"></a>
<a id="trace-19841"></a>
<a id="trace-19908"></a>
<a id="trace-19910"></a>
<a id="trace-19963"></a>
<a id="trace-19965"></a>
<a id="trace-19976"></a>
<a id="trace-19978"></a>
<a id="trace-20894"></a>
<a id="trace-20896"></a>
<a id="trace-20939"></a>
<a id="trace-20941"></a>
<a id="trace-20961"></a>
<a id="trace-20963"></a>
<a id="trace-20981"></a>
<a id="trace-20983"></a>
<a id="trace-21006"></a>
<a id="trace-21008"></a>
<a id="trace-21037"></a>
<a id="trace-21039"></a>
<a id="trace-21050"></a>
<a id="trace-21052"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21137"></a>
<a id="trace-21139"></a>
<a id="trace-21225"></a>
<a id="trace-21227"></a>
<a id="trace-21242"></a>
<a id="trace-21244"></a>
<a id="trace-21262"></a>
<a id="trace-21264"></a>
<a id="trace-21302"></a>
<a id="trace-21304"></a>
<a id="trace-21316"></a>
<a id="trace-21318"></a>
<a id="trace-21336"></a>
<a id="trace-21338"></a>
<a id="trace-21350"></a>
<a id="trace-21352"></a>
<a id="trace-21431"></a>
<a id="trace-21433"></a>
<a id="trace-21461"></a>
<a id="trace-21463"></a>
<a id="trace-21470"></a>
<a id="trace-21472"></a>
<a id="trace-21492"></a>
<a id="trace-21494"></a>
<a id="trace-21511"></a>
<a id="trace-21513"></a>
<a id="trace-21539"></a>
<a id="trace-21541"></a>
<a id="trace-21570"></a>
<a id="trace-21572"></a>
<a id="trace-21649"></a>
<a id="trace-21651"></a>
<a id="trace-21662"></a>
<a id="trace-21664"></a>
<a id="trace-21696"></a>
<a id="trace-21698"></a>
<a id="trace-21715"></a>
<a id="trace-21717"></a>
<a id="trace-21738"></a>
<a id="trace-21740"></a>
<a id="trace-21758"></a>
<a id="trace-21760"></a>
<a id="trace-21838"></a>
<a id="trace-21840"></a>
<a id="trace-21871"></a>
<a id="trace-21873"></a>
<a id="trace-21915"></a>
<a id="trace-21917"></a>
<a id="trace-22032"></a>
<a id="trace-22034"></a>
<a id="trace-22059"></a>
<a id="trace-22061"></a>
<a id="trace-22090"></a>
<a id="trace-22092"></a>
<a id="trace-22105"></a>
<a id="trace-22107"></a>
<a id="trace-22125"></a>
<a id="trace-22127"></a>
<a id="trace-22146"></a>
<a id="trace-22148"></a>
<a id="trace-22164"></a>
<a id="trace-22166"></a>
<a id="trace-22175"></a>
<a id="trace-22177"></a>
<a id="trace-22196"></a>
<a id="trace-22198"></a>
<a id="trace-22209"></a>
<a id="trace-22211"></a>
<a id="trace-22286"></a>
<a id="trace-22288"></a>
<a id="trace-22312"></a>
<a id="trace-22314"></a>
<a id="trace-22324"></a>
<a id="trace-22326"></a>
<a id="trace-22351"></a>
<a id="trace-22353"></a>
<a id="trace-22368"></a>
<a id="trace-22370"></a>
<a id="trace-22382"></a>
<a id="trace-22384"></a>
<a id="trace-22407"></a>
<a id="trace-22409"></a>
<a id="trace-22417"></a>
<a id="trace-22419"></a>
<a id="trace-22492"></a>
<a id="trace-22494"></a>
<a id="trace-22505"></a>
<a id="trace-22507"></a>
<a id="trace-22521"></a>
<a id="trace-22523"></a>
<a id="trace-22532"></a>
<a id="trace-22534"></a>
<a id="trace-22550"></a>
<a id="trace-22552"></a>
<a id="trace-22566"></a>
<a id="trace-22568"></a>
<a id="trace-22583"></a>
<a id="trace-22585"></a>
<a id="trace-22592"></a>
<a id="trace-22594"></a>
<a id="trace-22612"></a>
<a id="trace-22614"></a>
<a id="trace-22625"></a>
<a id="trace-22627"></a>
<a id="trace-22705"></a>
<a id="trace-22707"></a>
<a id="trace-22728"></a>
<a id="trace-22730"></a>
<a id="trace-22744"></a>
<a id="trace-22746"></a>
<a id="trace-22764"></a>
<a id="trace-22766"></a>
<a id="trace-22775"></a>
<a id="trace-22777"></a>
<a id="trace-22806"></a>
<a id="trace-22808"></a>
<a id="trace-22829"></a>
<a id="trace-22831"></a>
<a id="trace-22906"></a>
<a id="trace-22908"></a>
<a id="trace-22919"></a>
<a id="trace-22921"></a>
<a id="trace-22941"></a>
<a id="trace-22943"></a>
<a id="trace-22965"></a>
<a id="trace-22967"></a>
<a id="trace-22983"></a>
<a id="trace-22985"></a>
<a id="trace-22996"></a>
<a id="trace-22998"></a>
<a id="trace-23010"></a>
<a id="trace-23012"></a>
<a id="trace-23029"></a>
<a id="trace-23031"></a>
<a id="trace-23042"></a>
<a id="trace-23044"></a>
<a id="trace-23122"></a>
<a id="trace-23124"></a>
<a id="trace-23133"></a>
<a id="trace-23135"></a>
<a id="trace-23149"></a>
<a id="trace-23151"></a>
<a id="trace-23161"></a>
<a id="trace-23163"></a>
<a id="trace-23176"></a>
<a id="trace-23178"></a>
<a id="trace-23189"></a>
<a id="trace-23191"></a>
<a id="trace-23208"></a>
<a id="trace-23210"></a>
<a id="trace-23240"></a>
<a id="trace-23242"></a>
<a id="trace-23249"></a>
<a id="trace-23251"></a>
<a id="trace-23325"></a>
<a id="trace-23327"></a>
<a id="trace-23336"></a>
<a id="trace-23338"></a>
<a id="trace-23351"></a>
<a id="trace-23353"></a>
<a id="trace-23363"></a>
<a id="trace-23365"></a>
<a id="trace-23384"></a>
<a id="trace-23386"></a>
<a id="trace-23399"></a>
<a id="trace-23401"></a>
<a id="trace-23417"></a>
<a id="trace-23419"></a>
<a id="trace-23425"></a>
<a id="trace-23427"></a>
<a id="trace-23445"></a>
<a id="trace-23447"></a>
<a id="trace-23458"></a>
<a id="trace-23460"></a>
<a id="trace-23532"></a>
<a id="trace-23534"></a>
<a id="trace-23544"></a>
<a id="trace-23546"></a>
<a id="trace-23561"></a>
<a id="trace-23563"></a>
<a id="trace-23588"></a>
<a id="trace-23590"></a>
<a id="trace-23601"></a>
<a id="trace-23603"></a>
<a id="trace-23647"></a>
<a id="trace-23649"></a>
<a id="trace-23658"></a>
<a id="trace-23660"></a>
<a id="trace-23735"></a>
<a id="trace-23737"></a>
<a id="trace-23751"></a>
<a id="trace-23753"></a>
<a id="trace-23769"></a>
<a id="trace-23771"></a>
<a id="trace-23780"></a>
<a id="trace-23782"></a>
<a id="trace-23798"></a>
<a id="trace-23800"></a>
<a id="trace-23811"></a>
<a id="trace-23813"></a>
<a id="trace-23824"></a>
<a id="trace-23826"></a>
<a id="trace-23834"></a>
<a id="trace-23836"></a>
<a id="trace-23853"></a>
<a id="trace-23855"></a>
<a id="trace-23945"></a>
<a id="trace-23947"></a>
<a id="trace-23955"></a>
<a id="trace-23957"></a>
<a id="trace-23975"></a>
<a id="trace-23977"></a>
<a id="trace-23987"></a>
<a id="trace-23989"></a>
<a id="trace-24035"></a>
<a id="trace-24037"></a>
<a id="trace-24102"></a>
<a id="trace-24104"></a>
<a id="trace-24122"></a>
<a id="trace-24124"></a>
<a id="trace-24135"></a>
<a id="trace-24137"></a>
<a id="trace-24210"></a>
<a id="trace-24212"></a>
<a id="trace-24224"></a>
<a id="trace-24226"></a>
<a id="trace-24240"></a>
<a id="trace-24242"></a>
<a id="trace-24250"></a>
<a id="trace-24252"></a>
<a id="trace-24270"></a>
<a id="trace-24272"></a>
<a id="trace-24309"></a>
<a id="trace-24311"></a>
<a id="trace-24326"></a>
<a id="trace-24328"></a>
<a id="trace-24347"></a>
<a id="trace-24349"></a>
<a id="trace-24360"></a>
<a id="trace-24362"></a>
<a id="trace-24435"></a>
<a id="trace-24437"></a>
<a id="trace-24517"></a>
<a id="trace-24519"></a>
<a id="trace-24531"></a>
<a id="trace-24533"></a>
<a id="trace-24547"></a>
<a id="trace-24549"></a>
<a id="trace-24576"></a>
<a id="trace-24578"></a>
<a id="trace-24593"></a>
<a id="trace-24595"></a>
<a id="trace-24609"></a>
<a id="trace-24611"></a>
<a id="trace-24624"></a>
<a id="trace-24626"></a>
<a id="trace-24709"></a>
<a id="trace-24711"></a>
<a id="trace-24742"></a>
<a id="trace-24744"></a>
<a id="trace-24771"></a>
<a id="trace-24773"></a>
<a id="trace-24784"></a>
<a id="trace-24786"></a>
<a id="trace-24807"></a>
<a id="trace-24809"></a>
<a id="trace-24836"></a>
<a id="trace-24838"></a>
<a id="trace-24916"></a>
<a id="trace-24918"></a>
<a id="trace-24927"></a>
<a id="trace-24929"></a>
<a id="trace-24979"></a>
<a id="trace-24981"></a>
<a id="trace-24994"></a>
<a id="trace-24996"></a>
<a id="trace-25009"></a>
<a id="trace-25011"></a>
<a id="trace-25019"></a>
<a id="trace-25021"></a>
<a id="trace-25033"></a>
<a id="trace-25035"></a>
<a id="trace-25042"></a>
<a id="trace-25044"></a>
<a id="trace-25122"></a>
<a id="trace-25124"></a>
<a id="trace-25136"></a>
<a id="trace-25138"></a>
<a id="trace-25147"></a>
<a id="trace-25149"></a>
<a id="trace-25162"></a>
<a id="trace-25164"></a>
<a id="trace-25175"></a>
<a id="trace-25177"></a>
<a id="trace-25189"></a>
<a id="trace-25191"></a>
<a id="trace-25221"></a>
<a id="trace-25223"></a>
<a id="trace-25234"></a>
<a id="trace-25236"></a>
<a id="trace-25310"></a>
<a id="trace-25312"></a>
<a id="trace-25319"></a>
<a id="trace-25321"></a>
<a id="trace-25332"></a>
<a id="trace-25334"></a>
<a id="trace-25342"></a>
<a id="trace-25344"></a>
<a id="trace-25354"></a>
<a id="trace-25356"></a>
<a id="trace-25367"></a>
<a id="trace-25369"></a>
<a id="trace-25382"></a>
<a id="trace-25384"></a>
<a id="trace-25391"></a>
<a id="trace-25393"></a>
<a id="trace-25405"></a>
<a id="trace-25407"></a>
<a id="trace-25492"></a>
<a id="trace-25494"></a>
<a id="trace-25503"></a>
<a id="trace-25505"></a>
<a id="trace-25524"></a>
<a id="trace-25526"></a>
<a id="trace-25535"></a>
<a id="trace-25537"></a>
<a id="trace-25573"></a>
<a id="trace-25575"></a>
<a id="trace-25581"></a>
<a id="trace-25583"></a>
<a id="trace-25595"></a>
<a id="trace-25597"></a>
<a id="trace-25604"></a>
<a id="trace-25606"></a>
<a id="trace-25679"></a>
<a id="trace-25681"></a>
<a id="trace-25689"></a>
<a id="trace-25691"></a>
<a id="trace-25703"></a>
<a id="trace-25705"></a>
<a id="trace-25717"></a>
<a id="trace-25719"></a>
<a id="trace-25733"></a>
<a id="trace-25735"></a>
<a id="trace-25746"></a>
<a id="trace-25748"></a>
<a id="trace-25765"></a>
<a id="trace-25767"></a>
<a id="trace-25779"></a>
<a id="trace-25781"></a>
<a id="trace-25800"></a>
<a id="trace-25802"></a>
<a id="trace-25873"></a>
<a id="trace-25875"></a>
<a id="trace-25882"></a>
<a id="trace-25884"></a>
<a id="trace-25906"></a>
<a id="trace-25908"></a>
<a id="trace-25919"></a>
<a id="trace-25921"></a>
<a id="trace-25932"></a>
<a id="trace-25934"></a>
<a id="trace-25957"></a>
<a id="trace-25959"></a>
<a id="trace-25973"></a>
<a id="trace-25975"></a>
<a id="trace-26061"></a>
<a id="trace-26063"></a>
<a id="trace-26074"></a>
<a id="trace-26076"></a>
<a id="trace-26088"></a>
<a id="trace-26090"></a>
<a id="trace-26098"></a>
<a id="trace-26100"></a>
<a id="trace-26110"></a>
<a id="trace-26112"></a>
<a id="trace-26143"></a>
<a id="trace-26145"></a>
<a id="trace-26165"></a>
<a id="trace-26167"></a>
<a id="trace-26247"></a>
<a id="trace-26249"></a>
<a id="trace-26259"></a>
<a id="trace-26261"></a>
<a id="trace-26341"></a>
<a id="trace-26343"></a>
<a id="trace-26371"></a>
<a id="trace-26373"></a>
<a id="trace-26387"></a>
<a id="trace-26389"></a>
<a id="trace-26399"></a>
<a id="trace-26401"></a>
<a id="trace-26429"></a>
<a id="trace-26431"></a>
<a id="trace-26507"></a>
<a id="trace-26509"></a>
<a id="trace-26547"></a>
<a id="trace-26549"></a>
<a id="trace-26564"></a>
<a id="trace-26566"></a>
<a id="trace-26667"></a>
<a id="trace-26669"></a>
<a id="trace-26692"></a>
<a id="trace-26694"></a>
<a id="trace-26703"></a>
<a id="trace-26705"></a>
<a id="trace-26780"></a>
<a id="trace-26782"></a>
<a id="trace-26794"></a>
<a id="trace-26796"></a>
<a id="trace-26819"></a>
<a id="trace-26821"></a>
<a id="trace-26838"></a>
<a id="trace-26840"></a>
<a id="trace-26876"></a>
<a id="trace-26878"></a>
<a id="trace-26905"></a>
<a id="trace-26907"></a>
<a id="trace-26992"></a>
<a id="trace-26994"></a>
<a id="trace-27058"></a>
<a id="trace-27060"></a>
<a id="trace-27091"></a>
<a id="trace-27093"></a>
<a id="trace-27113"></a>
<a id="trace-27115"></a>
<a id="trace-27125"></a>
<a id="trace-27127"></a>
<a id="trace-27159"></a>
<a id="trace-27161"></a>
<a id="trace-27187"></a>
<a id="trace-27189"></a>
<a id="trace-27277"></a>
<a id="trace-27279"></a>
<a id="trace-27299"></a>
<a id="trace-27301"></a>
<a id="trace-27314"></a>
<a id="trace-27316"></a>
<a id="trace-27329"></a>
<a id="trace-27331"></a>
<a id="trace-27413"></a>
<a id="trace-27415"></a>
<a id="trace-27442"></a>
<a id="trace-27444"></a>
<a id="trace-27459"></a>
<a id="trace-27461"></a>
<a id="trace-27541"></a>
<a id="trace-27543"></a>
<a id="trace-27572"></a>
<a id="trace-27574"></a>
<a id="trace-27600"></a>
<a id="trace-27602"></a>
<a id="trace-27614"></a>
<a id="trace-27616"></a>
<a id="trace-27636"></a>
<a id="trace-27638"></a>
<a id="trace-27648"></a>
<a id="trace-27650"></a>
<a id="trace-27667"></a>
<a id="trace-27669"></a>
<a id="trace-27678"></a>
<a id="trace-27680"></a>
<a id="trace-27759"></a>
<a id="trace-27761"></a>
<a id="trace-27774"></a>
<a id="trace-27776"></a>
<a id="trace-27793"></a>
<a id="trace-27795"></a>
<a id="trace-27803"></a>
<a id="trace-27805"></a>
<a id="trace-27820"></a>
<a id="trace-27822"></a>
<a id="trace-27834"></a>
<a id="trace-27836"></a>
<a id="trace-27853"></a>
<a id="trace-27855"></a>
<a id="trace-27863"></a>
<a id="trace-27865"></a>
<a id="trace-27933"></a>
<a id="trace-27935"></a>
<a id="trace-27947"></a>
<a id="trace-27949"></a>
<a id="trace-28022"></a>
<a id="trace-28024"></a>
<a id="trace-28051"></a>
<a id="trace-28053"></a>
<a id="trace-28061"></a>
<a id="trace-28063"></a>
<a id="trace-28084"></a>
<a id="trace-28086"></a>
<a id="trace-28098"></a>
<a id="trace-28100"></a>
<a id="trace-28118"></a>
<a id="trace-28120"></a>
<a id="trace-28130"></a>
<a id="trace-28132"></a>
<a id="trace-28150"></a>
<a id="trace-28152"></a>
<a id="trace-28247"></a>
<a id="trace-28249"></a>
<a id="trace-28331"></a>
<a id="trace-28333"></a>
<a id="trace-28347"></a>
<a id="trace-28349"></a>
<a id="trace-28362"></a>
<a id="trace-28364"></a>
<a id="trace-28396"></a>
<a id="trace-28398"></a>
<a id="trace-28409"></a>
<a id="trace-28411"></a>
<a id="trace-28489"></a>
<a id="trace-28491"></a>
<a id="trace-28522"></a>
<a id="trace-28524"></a>
<a id="trace-28538"></a>
<a id="trace-28540"></a>
<a id="trace-28554"></a>
<a id="trace-28556"></a>
<a id="trace-28566"></a>
<a id="trace-28568"></a>
<a id="trace-28689"></a>
<a id="trace-28691"></a>
<a id="trace-28704"></a>
<a id="trace-28706"></a>
<a id="trace-28796"></a>
<a id="trace-28798"></a>
<a id="trace-28819"></a>
<a id="trace-28821"></a>
<a id="trace-28830"></a>
<a id="trace-28832"></a>
<a id="trace-28869"></a>
<a id="trace-28871"></a>
<a id="trace-28897"></a>
<a id="trace-28899"></a>
<a id="trace-28907"></a>
<a id="trace-28909"></a>
<a id="trace-28930"></a>
<a id="trace-28932"></a>
<a id="trace-28949"></a>
<a id="trace-28951"></a>
<a id="trace-29025"></a>
<a id="trace-29027"></a>
<a id="trace-29036"></a>
<a id="trace-29038"></a>
<a id="trace-29058"></a>
<a id="trace-29060"></a>
<a id="trace-29070"></a>
<a id="trace-29072"></a>
<a id="trace-29090"></a>
<a id="trace-29092"></a>
<a id="trace-29123"></a>
<a id="trace-29125"></a>
<a id="trace-29167"></a>
<a id="trace-29169"></a>
<a id="trace-29244"></a>
<a id="trace-29246"></a>
<a id="trace-29258"></a>
<a id="trace-29260"></a>
<a id="trace-29278"></a>
<a id="trace-29280"></a>
<a id="trace-29289"></a>
<a id="trace-29291"></a>
<a id="trace-29317"></a>
<a id="trace-29319"></a>
<a id="trace-29332"></a>
<a id="trace-29334"></a>
<a id="trace-29410"></a>
<a id="trace-29412"></a>
<a id="trace-29447"></a>
<a id="trace-29449"></a>
<a id="trace-29548"></a>
<a id="trace-29550"></a>
<a id="trace-29631"></a>
<a id="trace-29633"></a>
<a id="trace-29667"></a>
<a id="trace-29669"></a>
<a id="trace-29690"></a>
<a id="trace-29692"></a>
<a id="trace-29701"></a>
<a id="trace-29703"></a>
<a id="trace-29727"></a>
<a id="trace-29729"></a>
<a id="trace-29805"></a>
<a id="trace-29807"></a>
<a id="trace-29818"></a>
<a id="trace-29820"></a>
<a id="trace-29844"></a>
<a id="trace-29846"></a>
<a id="trace-29864"></a>
<a id="trace-29866"></a>
<a id="trace-29885"></a>
<a id="trace-29887"></a>
<a id="trace-29902"></a>
<a id="trace-29904"></a>
<a id="trace-29914"></a>
<a id="trace-29916"></a>
<a id="trace-29936"></a>
<a id="trace-29938"></a>
<a id="trace-30024"></a>
<a id="trace-30026"></a>
<a id="trace-30051"></a>
<a id="trace-30053"></a>
<a id="trace-30062"></a>
<a id="trace-30064"></a>
<a id="trace-30110"></a>
<a id="trace-30112"></a>
<a id="trace-30129"></a>
<a id="trace-30131"></a>
<a id="trace-30153"></a>
<a id="trace-30155"></a>
<a id="trace-30245"></a>
<a id="trace-30247"></a>
<a id="trace-30256"></a>
<a id="trace-30258"></a>
<a id="trace-30276"></a>
<a id="trace-30278"></a>
<a id="trace-30287"></a>
<a id="trace-30289"></a>
<a id="trace-30305"></a>
<a id="trace-30307"></a>
<a id="trace-30338"></a>
<a id="trace-30340"></a>
<a id="trace-30348"></a>
<a id="trace-30350"></a>
<a id="trace-30370"></a>
<a id="trace-30372"></a>
<a id="trace-30382"></a>
<a id="trace-30384"></a>
<a id="trace-30459"></a>
<a id="trace-30461"></a>
<a id="trace-30490"></a>
<a id="trace-30492"></a>
<a id="trace-30501"></a>
<a id="trace-30503"></a>
<a id="trace-30539"></a>
<a id="trace-30541"></a>
<a id="trace-30555"></a>
<a id="trace-30557"></a>
<a id="trace-30585"></a>
<a id="trace-30587"></a>
<a id="trace-30596"></a>
<a id="trace-30598"></a>
<a id="trace-30675"></a>
<a id="trace-30677"></a>
<a id="trace-30688"></a>
<a id="trace-30690"></a>
<a id="trace-30704"></a>
<a id="trace-30706"></a>
<a id="trace-30716"></a>
<a id="trace-30718"></a>
<a id="trace-30733"></a>
<a id="trace-30735"></a>
<a id="trace-30754"></a>
<a id="trace-30756"></a>
<a id="trace-30775"></a>
<a id="trace-30777"></a>
<a id="trace-30815"></a>
<a id="trace-30817"></a>
<a id="trace-30923"></a>
<a id="trace-30925"></a>
<a id="trace-30935"></a>
<a id="trace-30937"></a>
<a id="trace-30965"></a>
<a id="trace-30967"></a>
<a id="trace-31035"></a>
<a id="trace-31037"></a>
<a id="trace-31048"></a>
<a id="trace-31050"></a>
<a id="trace-31066"></a>
<a id="trace-31068"></a>
<a id="trace-31077"></a>
<a id="trace-31079"></a>
- 5.70s–359.80s (×1093), actor 37, squad 4 (trace 953): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362537628536318, 'next_transition': 987}.
<a id="trace-1389"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1389): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1195. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724913369205297, 'next_transition': 1718}.
<a id="trace-1718"></a>
<a id="trace-1720"></a>
<a id="trace-1738"></a>
<a id="trace-1740"></a>
<a id="trace-1774"></a>
<a id="trace-1776"></a>
<a id="trace-1879"></a>
<a id="trace-1881"></a>
<a id="trace-1969"></a>
<a id="trace-1971"></a>
<a id="trace-2010"></a>
<a id="trace-2012"></a>
<a id="trace-2047"></a>
<a id="trace-2049"></a>
<a id="trace-2080"></a>
<a id="trace-2082"></a>
<a id="trace-2100"></a>
<a id="trace-2102"></a>
<a id="trace-2122"></a>
<a id="trace-2124"></a>
<a id="trace-2153"></a>
<a id="trace-2155"></a>
<a id="trace-2180"></a>
<a id="trace-2182"></a>
<a id="trace-2206"></a>
<a id="trace-2208"></a>
<a id="trace-2228"></a>
<a id="trace-2230"></a>
<a id="trace-2323"></a>
<a id="trace-2325"></a>
<a id="trace-2354"></a>
<a id="trace-2356"></a>
<a id="trace-2382"></a>
<a id="trace-2384"></a>
<a id="trace-2413"></a>
<a id="trace-2415"></a>
<a id="trace-2445"></a>
<a id="trace-2447"></a>
<a id="trace-2468"></a>
<a id="trace-2470"></a>
<a id="trace-2497"></a>
<a id="trace-2499"></a>
- 13.20s–23.25s (×42), actor 5, squad 0 (trace 1718): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1200. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134503821725479, 'next_transition': 1738}.
<a id="trace-1784"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1784): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1203. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.500073578405882, 'next_transition': 2780}.
<a id="trace-2509"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2509): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2242. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748002603504963, 'next_transition': 2747}.
<a id="trace-2510"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 2510): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2242. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748002603504963, 'next_transition': 2747}.
<a id="trace-2747"></a>
<a id="trace-2749"></a>
<a id="trace-2766"></a>
<a id="trace-2768"></a>
<a id="trace-2796"></a>
<a id="trace-2798"></a>
<a id="trace-2883"></a>
<a id="trace-2885"></a>
<a id="trace-2896"></a>
<a id="trace-2898"></a>
<a id="trace-2937"></a>
<a id="trace-2939"></a>
<a id="trace-2959"></a>
<a id="trace-2961"></a>
<a id="trace-2973"></a>
<a id="trace-2975"></a>
<a id="trace-2987"></a>
<a id="trace-2989"></a>
<a id="trace-3009"></a>
<a id="trace-3011"></a>
<a id="trace-3031"></a>
<a id="trace-3033"></a>
<a id="trace-3049"></a>
<a id="trace-3051"></a>
<a id="trace-3068"></a>
<a id="trace-3070"></a>
<a id="trace-3327"></a>
<a id="trace-3329"></a>
<a id="trace-3344"></a>
<a id="trace-3346"></a>
- 23.75s–30.75s (×30), actor 5, squad 0 (trace 2747): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2247. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49220325812731547, 'next_transition': 2766}.
<a id="trace-2780"></a>
- 24.60s–24.60s (×1), actor 8, squad 1 (trace 2780): matching received arrivals: deployment leg complete. Knowledge: actor memory at 20.00s, trace 2250. Next observer evidence: {'until': 28.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 259}.
<a id="trace-259"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (events line 259): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3018"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3018): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3018. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3076}.
<a id="trace-3019"></a>
- 28.55s–28.55s (×1), actor 5, squad 1 (trace 3019): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 28.55s, trace 3019. Next observer evidence: {'until': 29.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3076}.
<a id="trace-3076"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3076): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 2817. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.126043056777448, 'next_transition': 3894}.
<a id="trace-3079"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3079): MoveTactically. Knowledge: actor memory at 25.00s, trace 2817. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.126043056777448, 'next_transition': 3894}.
<a id="trace-3080"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3080): traveling overwatch. Knowledge: actor memory at 25.00s, trace 2817. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.126043056777448, 'next_transition': 3894}.
<a id="trace-3081"></a>
- 29.85s–29.85s (×1), actor 8, squad 1 (trace 3081): Reorganise complete. Knowledge: actor memory at 25.00s, trace 2817. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.126043056777448, 'next_transition': 3894}.
<a id="trace-3351"></a>
- 30.75s–30.75s (×1), actor 0, squad 0 (trace 3351): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 3237. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3522}.
<a id="trace-3522"></a>
<a id="trace-3524"></a>
<a id="trace-3546"></a>
<a id="trace-3548"></a>
<a id="trace-3583"></a>
<a id="trace-3585"></a>
<a id="trace-3605"></a>
<a id="trace-3607"></a>
<a id="trace-3629"></a>
<a id="trace-3631"></a>
<a id="trace-3648"></a>
<a id="trace-3650"></a>
<a id="trace-3674"></a>
<a id="trace-3676"></a>
<a id="trace-3699"></a>
<a id="trace-3701"></a>
<a id="trace-3784"></a>
<a id="trace-3786"></a>
<a id="trace-3801"></a>
<a id="trace-3803"></a>
<a id="trace-3827"></a>
<a id="trace-3829"></a>
<a id="trace-3850"></a>
<a id="trace-3852"></a>
<a id="trace-3874"></a>
<a id="trace-3876"></a>
<a id="trace-3887"></a>
<a id="trace-3889"></a>
<a id="trace-4247"></a>
<a id="trace-4249"></a>
<a id="trace-4431"></a>
<a id="trace-4433"></a>
<a id="trace-4469"></a>
<a id="trace-4471"></a>
<a id="trace-4493"></a>
<a id="trace-4495"></a>
<a id="trace-4594"></a>
<a id="trace-4596"></a>
<a id="trace-4625"></a>
<a id="trace-4627"></a>
<a id="trace-4651"></a>
<a id="trace-4653"></a>
<a id="trace-4672"></a>
<a id="trace-4674"></a>
- 31.25s–41.75s (×44), actor 5, squad 0 (trace 3522): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3242. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.008769052917077264, 'next_transition': 3546}.
<a id="trace-3894"></a>
- 38.00s–38.00s (×1), actor 8, squad 1 (trace 3894): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 3714. Next observer evidence: None.
<a id="trace-3895"></a>
- 38.00s–38.00s (×1), actor 8, squad 1 (trace 3895): bounding overwatch. Knowledge: actor memory at 35.00s, trace 3714. Next observer evidence: None.
<a id="trace-3896"></a>
<a id="trace-4068"></a>
<a id="trace-4258"></a>
- 38.00s–38.50s (×3), actor 8, squad 1 (trace 3896): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 3714. Next observer evidence: None.
<a id="trace-4679"></a>
- 41.85s–41.85s (×1), actor 8, squad 1 (trace 4679): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4507. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500025115069447, 'next_transition': 447}.
<a id="trace-446"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 446): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-447"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 447): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4690"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 4690): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.835318 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 4690. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.046685507277911396, 'next_transition': 4707}.
<a id="trace-4691"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 4691): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.835318 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 4691. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.046685507277911396, 'next_transition': 4707}.
<a id="trace-4692"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 4692): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.835318 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 4692. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600036590819887, 'next_transition': 4728}.
<a id="trace-4693"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 4693): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.835318 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 4693. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600036590819887, 'next_transition': 4728}.
<a id="trace-4707"></a>
<a id="trace-4709"></a>
<a id="trace-4721"></a>
<a id="trace-4723"></a>
<a id="trace-4902"></a>
<a id="trace-4904"></a>
- 42.25s–43.25s (×6), actor 5, squad 0 (trace 4707): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 4693. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08381054806733412, 'next_transition': 4721}.
<a id="trace-4728"></a>
- 42.90s–42.90s (×1), actor 8, squad 1 (trace 4728): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 4507. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.819075284692056, 'next_transition': 5350}.
<a id="trace-4921"></a>
- 43.70s–43.70s (×1), actor 1, squad 0 (trace 4921): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 4500. Next observer evidence: None.
<a id="trace-4922"></a>
- 43.70s–43.70s (×1), actor 1, squad 0 (trace 4922): bounding overwatch. Knowledge: actor memory at 40.00s, trace 4500. Next observer evidence: None.
<a id="trace-4923"></a>
- 43.70s–43.70s (×1), actor 1, squad 0 (trace 4923): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 4500. Next observer evidence: None.
<a id="trace-5139"></a>
<a id="trace-5141"></a>
<a id="trace-5163"></a>
<a id="trace-5165"></a>
<a id="trace-5196"></a>
<a id="trace-5198"></a>
<a id="trace-5292"></a>
<a id="trace-5294"></a>
<a id="trace-5313"></a>
<a id="trace-5315"></a>
<a id="trace-5343"></a>
<a id="trace-5345"></a>
<a id="trace-5368"></a>
<a id="trace-5370"></a>
<a id="trace-5394"></a>
<a id="trace-5396"></a>
- 43.75s–47.25s (×16), actor 5, squad 0 (trace 5139): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 4693. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5163}.
<a id="trace-5350"></a>
- 46.25s–46.25s (×1), actor 8, squad 1 (trace 5350): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 5218. Next observer evidence: None.
<a id="trace-5358"></a>
- 46.30s–46.30s (×1), actor 8, squad 1 (trace 5358): received platoon directive; retain contact cover stage. Knowledge: actor memory at 45.00s, trace 5218. Next observer evidence: {'until': 50.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 7.675449561475395, 'next_transition': 588}.
<a id="trace-5407"></a>
- 47.45s–47.45s (×1), actor 1, squad 0 (trace 5407): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 5211. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10298880557517699, 'next_transition': 5413}.
<a id="trace-5413"></a>
<a id="trace-5415"></a>
- 47.75s–47.75s (×2), actor 5, squad 0 (trace 5413): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5215. Next observer evidence: {'until': 48.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2516143474731064, 'next_transition': 5434}.
<a id="trace-5434"></a>
- 48.20s–48.20s (×1), actor 1, squad 0 (trace 5434): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 5211. Next observer evidence: None.
<a id="trace-5653"></a>
<a id="trace-5655"></a>
<a id="trace-5669"></a>
<a id="trace-5671"></a>
<a id="trace-5700"></a>
<a id="trace-5702"></a>
<a id="trace-5727"></a>
<a id="trace-5729"></a>
- 48.25s–49.75s (×8), actor 5, squad 0 (trace 5653): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5215. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17063488040173155, 'next_transition': 5669}.
<a id="trace-5760"></a>
- 50.05s–50.05s (×1), actor 1, squad 0 (trace 5760): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 5739. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.05647946265698229, 'next_transition': 6033}.
<a id="trace-6033"></a>
<a id="trace-6035"></a>
<a id="trace-6053"></a>
<a id="trace-6055"></a>
<a id="trace-6101"></a>
<a id="trace-6103"></a>
- 50.25s–51.25s (×6), actor 5, squad 0 (trace 6033): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 5743. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0673565148626653, 'next_transition': 6053}.
<a id="trace-588"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (events line 588): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6076"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 6076): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.841931 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 6076. Next observer evidence: {'until': 51, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4713923682291762, 'next_transition': 6079}.
<a id="trace-6077"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 6077): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.841931 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 6077. Next observer evidence: {'until': 51, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4713923682291762, 'next_transition': 6079}.
<a id="trace-6079"></a>
- 51.00s–51.00s (×1), actor 8, squad 1 (trace 6079): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 50.00s, trace 5746. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4366977253348603, 'next_transition': 6283}.
<a id="trace-6123"></a>
- 51.65s–51.65s (×1), actor 1, squad 0 (trace 6123): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 50.00s, trace 5739. Next observer evidence: None.
<a id="trace-6125"></a>
- 51.65s–51.65s (×1), actor 1, squad 0 (trace 6125): NeedSupport. Knowledge: actor memory at 50.00s, trace 5739. Next observer evidence: None.
<a id="trace-6133"></a>
<a id="trace-6135"></a>
<a id="trace-6159"></a>
<a id="trace-6161"></a>
- 51.75s–52.25s (×4), actor 5, squad 0 (trace 6133): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.85s, trace 6077. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6159}.
<a id="trace-6166"></a>
- 52.25s–52.25s (×1), actor 1, squad 0 (trace 6166): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 5739. Next observer evidence: {'until': 52.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08680052171182188, 'next_transition': 6298}.
<a id="trace-6171"></a>
- 52.25s–52.25s (×1), actor 1, squad 0 (trace 6171): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 5739. Next observer evidence: {'until': 52.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08680052171182188, 'next_transition': 6298}.
<a id="trace-6172"></a>
- 52.25s–52.25s (×1), actor 1, squad 0 (trace 6172): Reorganise complete: known contact. Knowledge: actor memory at 50.00s, trace 5739. Next observer evidence: {'until': 52.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08680052171182188, 'next_transition': 6298}.
<a id="trace-6283"></a>
- 52.30s–52.30s (×1), actor 8, squad 1 (trace 6283): received platoon directive; retain held slots. Knowledge: actor memory at 50.00s, trace 5746. Next observer evidence: {'until': 53, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3772515066474234, 'next_transition': 6317}.
<a id="trace-6298"></a>
<a id="trace-6300"></a>
<a id="trace-7087"></a>
<a id="trace-7089"></a>
<a id="trace-7114"></a>
<a id="trace-7116"></a>
<a id="trace-7134"></a>
<a id="trace-7136"></a>
<a id="trace-7168"></a>
<a id="trace-7170"></a>
<a id="trace-7262"></a>
<a id="trace-7264"></a>
<a id="trace-7280"></a>
<a id="trace-7282"></a>
- 52.75s–55.75s (×14), actor 5, squad 0 (trace 6298): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.85s, trace 6077. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6204505402356383, 'next_transition': 7087}.
<a id="trace-6317"></a>
- 53.00s–53.00s (×1), actor 8, squad 1 (trace 6317): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 5746. Next observer evidence: None.
<a id="trace-6318"></a>
- 53.00s–53.00s (×1), actor 8, squad 1 (trace 6318): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 50.00s, trace 5746. Next observer evidence: None.
<a id="trace-7078"></a>
- 53.05s–53.05s (×1), actor 8, squad 1 (trace 7078): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 50.00s, trace 5746. Next observer evidence: {'until': 57, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.335985281004844, 'next_transition': 690}.
<a id="trace-672"></a>
- 55.85s–55.85s (×1), actor 5, squad 0 (events line 672): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7292"></a>
- 55.85s–55.85s (×1), actor 5, squad 0 (trace 7292): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.614019 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.85s, trace 7292. Next observer evidence: {'until': 56, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07540815591020501, 'next_transition': 7300}.
<a id="trace-7293"></a>
- 55.85s–55.85s (×1), actor 5, squad 0 (trace 7293): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.614019 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.85s, trace 7293. Next observer evidence: {'until': 56, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07540815591020501, 'next_transition': 7300}.
<a id="trace-7300"></a>
- 56.05s–56.05s (×1), actor 1, squad 0 (trace 7300): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 7189. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07560068130571895, 'next_transition': 7312}.
<a id="trace-7312"></a>
<a id="trace-7314"></a>
<a id="trace-7332"></a>
<a id="trace-7334"></a>
<a id="trace-7361"></a>
<a id="trace-7363"></a>
<a id="trace-7379"></a>
<a id="trace-7381"></a>
<a id="trace-7405"></a>
<a id="trace-7407"></a>
<a id="trace-7423"></a>
<a id="trace-7425"></a>
<a id="trace-7442"></a>
<a id="trace-7444"></a>
<a id="trace-7632"></a>
<a id="trace-7634"></a>
- 56.25s–59.75s (×16), actor 5, squad 0 (trace 7312): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.85s, trace 7293. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120103200889723, 'next_transition': 7332}.
<a id="trace-690"></a>
- 57.10s–57.10s (×1), actor 5, squad 1 (events line 690): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7350"></a>
- 57.10s–57.10s (×1), actor 5, squad 1 (trace 7350): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.616535 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 57.10s, trace 7350. Next observer evidence: {'until': 57.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1046303631704721, 'next_transition': 7390}.
<a id="trace-7351"></a>
- 57.10s–57.10s (×1), actor 5, squad 1 (trace 7351): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.616535 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 57.10s, trace 7351. Next observer evidence: {'until': 57.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1046303631704721, 'next_transition': 7390}.
<a id="trace-7390"></a>
- 57.90s–57.90s (×1), actor 8, squad 1 (trace 7390): NeedSupport. Knowledge: actor memory at 55.00s, trace 7195. Next observer evidence: {'until': 59.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9615872048337581, 'next_transition': 7455}.
<a id="trace-7455"></a>
- 59.35s–59.35s (×1), actor 8, squad 1 (trace 7455): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 7195. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.791752452582469, 'next_transition': 10300}.
<a id="trace-7456"></a>
- 59.35s–59.35s (×1), actor 8, squad 1 (trace 7456): received platoon directive. Knowledge: actor memory at 55.00s, trace 7195. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.791752452582469, 'next_transition': 10300}.
<a id="trace-7641"></a>
- 59.75s–59.75s (×1), actor 1, squad 0 (trace 7641): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 7189. Next observer evidence: {'until': 60.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22628604378333003, 'next_transition': 10037}.
<a id="trace-7642"></a>
- 59.75s–59.75s (×1), actor 1, squad 0 (trace 7642): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 55.00s, trace 7189. Next observer evidence: {'until': 60.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22628604378333003, 'next_transition': 10037}.
<a id="trace-10037"></a>
<a id="trace-10039"></a>
<a id="trace-10059"></a>
<a id="trace-10061"></a>
- 60.25s–60.75s (×4), actor 5, squad 0 (trace 10037): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9963. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119917806397695, 'next_transition': 10059}.
<a id="trace-10068"></a>
- 60.75s–60.75s (×1), actor 1, squad 0 (trace 10068): MoveTactically. Knowledge: actor memory at 60.00s, trace 9960. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0342554790381417, 'next_transition': 10207}.
<a id="trace-10069"></a>
- 60.75s–60.75s (×1), actor 1, squad 0 (trace 10069): received platoon directive. Knowledge: actor memory at 60.00s, trace 9960. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0342554790381417, 'next_transition': 10207}.
<a id="trace-10207"></a>
<a id="trace-10209"></a>
<a id="trace-10232"></a>
<a id="trace-10234"></a>
- 61.25s–61.75s (×4), actor 5, squad 0 (trace 10207): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9963. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9097423510744834, 'next_transition': 10232}.
<a id="trace-751"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (events line 751): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10258"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 10258): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.615799 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 10258. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000085514780417, 'next_transition': 10272}.
<a id="trace-10259"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 10259): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.615799 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 10259. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000085514780417, 'next_transition': 10272}.
<a id="trace-10272"></a>
<a id="trace-10274"></a>
<a id="trace-10306"></a>
<a id="trace-10308"></a>
<a id="trace-10341"></a>
<a id="trace-10343"></a>
- 62.25s–63.25s (×6), actor 5, squad 0 (trace 10272): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 10259. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.42000171029560623, 'next_transition': 10306}.
<a id="trace-10300"></a>
- 62.70s–62.70s (×1), actor 8, squad 1 (trace 10300): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 9966. Next observer evidence: {'until': 64.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.6562049277389033, 'next_transition': 12756}.
<a id="trace-10356"></a>
- 63.40s–63.40s (×1), actor 1, squad 0 (trace 10356): NeedSupport. Knowledge: actor memory at 60.00s, trace 9960. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10373}.
<a id="trace-10373"></a>
<a id="trace-10375"></a>
- 63.75s–63.75s (×2), actor 5, squad 0 (trace 10373): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 10259. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12726}.
<a id="trace-10382"></a>
- 63.75s–63.75s (×1), actor 1, squad 0 (trace 10382): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 9960. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12726}.
<a id="trace-10383"></a>
- 63.75s–63.75s (×1), actor 1, squad 0 (trace 10383): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 60.00s, trace 9960. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12726}.
<a id="trace-12726"></a>
<a id="trace-12728"></a>
<a id="trace-12746"></a>
<a id="trace-12748"></a>
<a id="trace-13589"></a>
<a id="trace-13591"></a>
<a id="trace-13608"></a>
<a id="trace-13610"></a>
<a id="trace-13627"></a>
<a id="trace-13629"></a>
<a id="trace-13654"></a>
<a id="trace-13656"></a>
<a id="trace-13677"></a>
<a id="trace-13679"></a>
<a id="trace-13687"></a>
<a id="trace-13689"></a>
<a id="trace-13711"></a>
<a id="trace-13713"></a>
<a id="trace-13895"></a>
<a id="trace-13897"></a>
<a id="trace-13923"></a>
<a id="trace-13925"></a>
<a id="trace-13944"></a>
<a id="trace-13946"></a>
<a id="trace-14030"></a>
<a id="trace-14032"></a>
<a id="trace-14053"></a>
<a id="trace-14055"></a>
<a id="trace-14080"></a>
<a id="trace-14082"></a>
<a id="trace-14096"></a>
<a id="trace-14098"></a>
<a id="trace-14118"></a>
<a id="trace-14120"></a>
<a id="trace-14132"></a>
<a id="trace-14134"></a>
<a id="trace-14153"></a>
<a id="trace-14155"></a>
<a id="trace-14165"></a>
<a id="trace-14167"></a>
<a id="trace-14182"></a>
<a id="trace-14184"></a>
<a id="trace-14196"></a>
<a id="trace-14198"></a>
<a id="trace-14277"></a>
<a id="trace-14279"></a>
<a id="trace-14298"></a>
<a id="trace-14300"></a>
<a id="trace-14320"></a>
<a id="trace-14322"></a>
<a id="trace-14333"></a>
<a id="trace-14335"></a>
<a id="trace-14365"></a>
<a id="trace-14367"></a>
<a id="trace-14378"></a>
<a id="trace-14380"></a>
<a id="trace-14396"></a>
<a id="trace-14398"></a>
<a id="trace-14417"></a>
<a id="trace-14419"></a>
<a id="trace-14435"></a>
<a id="trace-14437"></a>
<a id="trace-14444"></a>
<a id="trace-14446"></a>
<a id="trace-14529"></a>
<a id="trace-14531"></a>
<a id="trace-14543"></a>
<a id="trace-14545"></a>
<a id="trace-14567"></a>
<a id="trace-14569"></a>
<a id="trace-14585"></a>
<a id="trace-14587"></a>
<a id="trace-14606"></a>
<a id="trace-14608"></a>
<a id="trace-14623"></a>
<a id="trace-14625"></a>
<a id="trace-14646"></a>
<a id="trace-14648"></a>
<a id="trace-14663"></a>
<a id="trace-14665"></a>
<a id="trace-14680"></a>
<a id="trace-14682"></a>
<a id="trace-14690"></a>
<a id="trace-14692"></a>
<a id="trace-14768"></a>
<a id="trace-14770"></a>
- 64.25s–85.25s (×86), actor 5, squad 0 (trace 12726): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 10259. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12746}.
<a id="trace-12756"></a>
- 64.80s–64.80s (×1), actor 8, squad 1 (trace 12756): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 9966. Next observer evidence: None.
<a id="trace-12757"></a>
- 64.80s–64.80s (×1), actor 8, squad 1 (trace 12757): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 60.00s, trace 9966. Next observer evidence: None.
<a id="trace-13504"></a>
- 64.85s–64.85s (×1), actor 8, squad 1 (trace 13504): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 60.00s, trace 9966. Next observer evidence: {'until': 66.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.270858205745835, 'next_transition': 796}.
<a id="trace-796"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (events line 796): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13664"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 13664): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.517266 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 13664. Next observer evidence: {'until': 68.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1441724360079433, 'next_transition': 13719}.
<a id="trace-13665"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 13665): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.517266 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 13665. Next observer evidence: {'until': 68.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1441724360079433, 'next_transition': 13719}.
<a id="trace-13719"></a>
- 68.45s–68.45s (×1), actor 8, squad 1 (trace 13719): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 13524. Next observer evidence: {'until': 71.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.642768249450906, 'next_transition': 14105}.
<a id="trace-13720"></a>
- 68.45s–68.45s (×1), actor 8, squad 1 (trace 13720): received platoon directive. Knowledge: actor memory at 65.00s, trace 13524. Next observer evidence: {'until': 71.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.642768249450906, 'next_transition': 14105}.
<a id="trace-14105"></a>
- 71.80s–71.80s (×1), actor 8, squad 1 (trace 14105): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 70.00s, trace 13960. Next observer evidence: {'until': 74.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9678706257784772, 'next_transition': 14194}.
<a id="trace-14194"></a>
- 74.65s–74.65s (×1), actor 8, squad 1 (trace 14194): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 70.00s, trace 13960. Next observer evidence: {'until': 75.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3978479156976939, 'next_transition': 14286}.
<a id="trace-14286"></a>
- 75.35s–75.35s (×1), actor 5, squad 1 (trace 14286): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.519140 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 75.35s, trace 14286. Next observer evidence: None.
<a id="trace-14287"></a>
- 75.35s–75.35s (×1), actor 5, squad 1 (trace 14287): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.519140 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 75.35s, trace 14287. Next observer evidence: None.
<a id="trace-877"></a>
- 75.35s–75.35s (×1), actor 5, squad 1 (events line 877): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 76.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.3320801575119572, 'next_transition': 14344}.
<a id="trace-14344"></a>
- 76.80s–76.80s (×1), actor 8, squad 1 (trace 14344): received platoon directive; retain held slots. Knowledge: actor memory at 75.00s, trace 14211. Next observer evidence: {'until': 81.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.6157271109472664, 'next_transition': 14573}.
<a id="trace-14573"></a>
- 81.35s–81.35s (×1), actor 5, squad 1 (trace 14573): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.518469 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.35s, trace 14573. Next observer evidence: None.
<a id="trace-14574"></a>
- 81.35s–81.35s (×1), actor 5, squad 1 (trace 14574): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.518469 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.35s, trace 14574. Next observer evidence: None.
<a id="trace-1065"></a>
- 81.35s–81.35s (×1), actor 5, squad 1 (events line 1065): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 82.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1173270527133046, 'next_transition': 14630}.
<a id="trace-14630"></a>
- 82.80s–82.80s (×1), actor 8, squad 1 (trace 14630): received platoon directive; retain held slots. Knowledge: actor memory at 80.00s, trace 14459. Next observer evidence: {'until': 87, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3684733134502418, 'next_transition': 15019}.
<a id="trace-14777"></a>
- 85.60s–85.60s (×1), actor 1, squad 0 (trace 14777): support established: element delivered fire on threat area. Knowledge: actor memory at 85.00s, trace 14700. Next observer evidence: {'until': 85.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14787}.
<a id="trace-14778"></a>
- 85.60s–85.60s (×1), actor 1, squad 0 (trace 14778): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 85.00s, trace 14700. Next observer evidence: {'until': 85.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14787}.
<a id="trace-14779"></a>
- 85.60s–85.60s (×1), actor 1, squad 0 (trace 14779): Fixing. Knowledge: actor memory at 85.00s, trace 14700. Next observer evidence: {'until': 85.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14787}.
<a id="trace-14787"></a>
<a id="trace-14789"></a>
<a id="trace-14806"></a>
<a id="trace-14808"></a>
<a id="trace-14819"></a>
<a id="trace-14821"></a>
<a id="trace-15032"></a>
<a id="trace-15034"></a>
- 85.75s–87.25s (×8), actor 5, squad 0 (trace 14787): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 14702. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14806}.
<a id="trace-15019"></a>
- 87.00s–87.00s (×1), actor 8, squad 1 (trace 15019): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 85.00s, trace 14705. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2177388422514458, 'next_transition': 15043}.
<a id="trace-15041"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 15041): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.523155 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 15041. Next observer evidence: None.
<a id="trace-15042"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 15042): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.523155 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 15042. Next observer evidence: None.
<a id="trace-15043"></a>
- 87.35s–87.35s (×1), actor 5, squad 1 (trace 15043): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.523155 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 15043. Next observer evidence: None.
<a id="trace-15044"></a>
- 87.35s–87.35s (×1), actor 5, squad 1 (trace 15044): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.523155 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 15044. Next observer evidence: None.
<a id="trace-1224"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (events line 1224): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15055}.
<a id="trace-1225"></a>
- 87.35s–87.35s (×1), actor 5, squad 1 (events line 1225): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 88.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7790166832410539, 'next_transition': 15095}.
<a id="trace-15055"></a>
<a id="trace-15057"></a>
<a id="trace-15072"></a>
<a id="trace-15074"></a>
<a id="trace-15086"></a>
<a id="trace-15088"></a>
<a id="trace-15107"></a>
<a id="trace-15109"></a>
<a id="trace-15121"></a>
<a id="trace-15123"></a>
<a id="trace-15203"></a>
<a id="trace-15205"></a>
<a id="trace-15217"></a>
<a id="trace-15219"></a>
<a id="trace-15235"></a>
<a id="trace-15237"></a>
- 87.75s–91.25s (×16), actor 5, squad 0 (trace 15055): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 15044. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15072}.
<a id="trace-15095"></a>
- 88.80s–88.80s (×1), actor 8, squad 1 (trace 15095): received platoon directive; retain held slots. Knowledge: actor memory at 85.00s, trace 14705. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8312744274455939, 'next_transition': 15377}.
<a id="trace-15244"></a>
- 91.25s–91.25s (×1), actor 1, squad 0 (trace 15244): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 15130. Next observer evidence: {'until': 91.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15263}.
<a id="trace-15245"></a>
- 91.25s–91.25s (×1), actor 1, squad 0 (trace 15245): NeedSupport. Knowledge: actor memory at 90.00s, trace 15130. Next observer evidence: {'until': 91.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15263}.
<a id="trace-15263"></a>
<a id="trace-15265"></a>
<a id="trace-15287"></a>
<a id="trace-15289"></a>
- 91.75s–92.25s (×4), actor 5, squad 0 (trace 15263): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 15132. Next observer evidence: {'until': 92.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15287}.
<a id="trace-15296"></a>
- 92.25s–92.25s (×1), actor 1, squad 0 (trace 15296): Reorganise: completed/failed drill. Knowledge: actor memory at 90.00s, trace 15130. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16130}.
<a id="trace-15299"></a>
- 92.25s–92.25s (×1), actor 1, squad 0 (trace 15299): ReactToContact: cover and return fire. Knowledge: actor memory at 90.00s, trace 15130. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16130}.
<a id="trace-15300"></a>
- 92.25s–92.25s (×1), actor 1, squad 0 (trace 15300): Reorganise complete: known contact. Knowledge: actor memory at 90.00s, trace 15130. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16130}.
<a id="trace-15377"></a>
- 92.65s–92.65s (×1), actor 8, squad 1 (trace 15377): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 15135. Next observer evidence: None.
<a id="trace-15378"></a>
- 92.65s–92.65s (×1), actor 8, squad 1 (trace 15378): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 90.00s, trace 15135. Next observer evidence: None.
<a id="trace-16126"></a>
- 92.70s–92.70s (×1), actor 8, squad 1 (trace 16126): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 90.00s, trace 15135. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2667872441197291, 'next_transition': 16178}.
<a id="trace-16130"></a>
<a id="trace-16132"></a>
<a id="trace-16165"></a>
<a id="trace-16167"></a>
<a id="trace-16189"></a>
<a id="trace-16191"></a>
- 92.75s–93.75s (×6), actor 5, squad 0 (trace 16130): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 15132. Next observer evidence: {'until': 93.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5921957932369134, 'next_transition': 16165}.
<a id="trace-16178"></a>
- 93.35s–93.35s (×1), actor 5, squad 1 (trace 16178): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.526541 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.35s, trace 16178. Next observer evidence: None.
<a id="trace-16179"></a>
- 93.35s–93.35s (×1), actor 5, squad 1 (trace 16179): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.526541 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.35s, trace 16179. Next observer evidence: None.
<a id="trace-1392"></a>
- 93.35s–93.35s (×1), actor 5, squad 1 (events line 1392): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 94.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2888507834591487, 'next_transition': 16262}.
<a id="trace-16212"></a>
- 94.20s–94.20s (×1), actor 5, squad 0 (trace 16212): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 94.20s, trace 16212. Next observer evidence: None.
<a id="trace-16223"></a>
<a id="trace-16225"></a>
<a id="trace-16252"></a>
<a id="trace-16254"></a>
<a id="trace-16433"></a>
<a id="trace-16435"></a>
<a id="trace-16461"></a>
<a id="trace-16463"></a>
- 94.25s–96.25s (×8), actor 5, squad 0 (trace 16223): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 94.20s, trace 16212. Next observer evidence: {'until': 94.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7970989198784469, 'next_transition': 16252}.
<a id="trace-16262"></a>
- 94.80s–94.80s (×1), actor 8, squad 1 (trace 16262): MoveTactically. Knowledge: actor memory at 90.00s, trace 15135. Next observer evidence: {'until': 99.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.227856170375318, 'next_transition': 16618}.
<a id="trace-16263"></a>
- 94.80s–94.80s (×1), actor 8, squad 1 (trace 16263): received platoon directive. Knowledge: actor memory at 90.00s, trace 15135. Next observer evidence: {'until': 99.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 6.227856170375318, 'next_transition': 16618}.
<a id="trace-16473"></a>
- 96.50s–96.50s (×1), actor 1, squad 0 (trace 16473): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 95.00s, trace 16324. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340714814331566, 'next_transition': 16493}.
<a id="trace-16475"></a>
- 96.50s–96.50s (×1), actor 1, squad 0 (trace 16475): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 95.00s, trace 16324. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340714814331566, 'next_transition': 16493}.
<a id="trace-16493"></a>
<a id="trace-16495"></a>
<a id="trace-16524"></a>
<a id="trace-16526"></a>
<a id="trace-16542"></a>
<a id="trace-16544"></a>
<a id="trace-16569"></a>
<a id="trace-16571"></a>
<a id="trace-16589"></a>
<a id="trace-16591"></a>
<a id="trace-16609"></a>
<a id="trace-16611"></a>
<a id="trace-16794"></a>
<a id="trace-16796"></a>
<a id="trace-16885"></a>
<a id="trace-16887"></a>
- 96.75s–100.25s (×16), actor 5, squad 0 (trace 16493): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 16325. Next observer evidence: {'until': 97.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.34018320982964473, 'next_transition': 16524}.
<a id="trace-16618"></a>
- 99.40s–99.40s (×1), actor 8, squad 1 (trace 16618): ReactToContact: cover and return fire. Knowledge: actor memory at 95.00s, trace 16328. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.9203300648257884, 'next_transition': 17113}.
<a id="trace-16619"></a>
- 99.40s–99.40s (×1), actor 8, squad 1 (trace 16619): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 95.00s, trace 16328. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.9203300648257884, 'next_transition': 17113}.
<a id="trace-1551"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (events line 1551): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16904}.
<a id="trace-16894"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (trace 16894): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.422674 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.55s, trace 16894. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16904}.
<a id="trace-16895"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (trace 16895): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.422674 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.55s, trace 16895. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16904}.
<a id="trace-16904"></a>
<a id="trace-16906"></a>
<a id="trace-16930"></a>
<a id="trace-16932"></a>
<a id="trace-16951"></a>
<a id="trace-16953"></a>
- 100.75s–101.75s (×6), actor 5, squad 0 (trace 16904): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 16895. Next observer evidence: {'until': 101.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16930}.
<a id="trace-16968"></a>
- 102.15s–102.15s (×1), actor 1, squad 0 (trace 16968): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 100.00s, trace 16811. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17089}.
<a id="trace-16969"></a>
- 102.15s–102.15s (×1), actor 1, squad 0 (trace 16969): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 16811. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17089}.
<a id="trace-17089"></a>
<a id="trace-17091"></a>
<a id="trace-17105"></a>
<a id="trace-17107"></a>
- 102.25s–102.75s (×4), actor 5, squad 0 (trace 17089): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 16895. Next observer evidence: {'until': 102.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17105}.
<a id="trace-17113"></a>
- 102.75s–102.75s (×1), actor 8, squad 1 (trace 17113): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 100.00s, trace 16815. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.9516989485536476, 'next_transition': 17211}.
<a id="trace-17125"></a>
- 103.15s–103.15s (×1), actor 1, squad 0 (trace 17125): NeedSupport. Knowledge: actor memory at 100.00s, trace 16811. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574782147631861, 'next_transition': 17140}.
<a id="trace-17140"></a>
<a id="trace-17142"></a>
<a id="trace-17159"></a>
<a id="trace-17161"></a>
<a id="trace-17184"></a>
<a id="trace-17186"></a>
<a id="trace-17204"></a>
<a id="trace-17206"></a>
<a id="trace-18046"></a>
<a id="trace-18048"></a>
<a id="trace-18068"></a>
<a id="trace-18070"></a>
<a id="trace-18092"></a>
<a id="trace-18094"></a>
<a id="trace-18120"></a>
<a id="trace-18122"></a>
<a id="trace-18144"></a>
<a id="trace-18146"></a>
<a id="trace-18167"></a>
<a id="trace-18169"></a>
<a id="trace-18195"></a>
<a id="trace-18197"></a>
<a id="trace-18210"></a>
<a id="trace-18212"></a>
<a id="trace-18301"></a>
<a id="trace-18303"></a>
<a id="trace-18314"></a>
<a id="trace-18316"></a>
<a id="trace-18398"></a>
<a id="trace-18400"></a>
<a id="trace-18412"></a>
<a id="trace-18414"></a>
<a id="trace-18428"></a>
<a id="trace-18430"></a>
<a id="trace-18443"></a>
<a id="trace-18445"></a>
<a id="trace-18534"></a>
<a id="trace-18536"></a>
<a id="trace-18549"></a>
<a id="trace-18551"></a>
<a id="trace-18578"></a>
<a id="trace-18580"></a>
- 103.25s–113.25s (×42), actor 5, squad 0 (trace 17140): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 16895. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150053134571701, 'next_transition': 17159}.
<a id="trace-17211"></a>
- 104.75s–104.75s (×1), actor 8, squad 1 (trace 17211): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 16815. Next observer evidence: {'until': 104.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37020043219855897, 'next_transition': 17972}.
<a id="trace-17212"></a>
- 104.75s–104.75s (×1), actor 8, squad 1 (trace 17212): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 100.00s, trace 16815. Next observer evidence: {'until': 104.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37020043219855897, 'next_transition': 17972}.
<a id="trace-17972"></a>
- 104.80s–104.80s (×1), actor 8, squad 1 (trace 17972): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 100.00s, trace 16815. Next observer evidence: {'until': 106.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.153263072641148, 'next_transition': 1635}.
<a id="trace-1635"></a>
- 106.55s–106.55s (×1), actor 5, squad 1 (events line 1635): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1277884856378955, 'next_transition': 18221}.
<a id="trace-18116"></a>
- 106.55s–106.55s (×1), actor 5, squad 1 (trace 18116): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316950 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 106.55s, trace 18116. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1277884856378955, 'next_transition': 18221}.
<a id="trace-18117"></a>
- 106.55s–106.55s (×1), actor 5, squad 1 (trace 18117): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316950 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 106.55s, trace 18117. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1277884856378955, 'next_transition': 18221}.
<a id="trace-18221"></a>
- 108.80s–108.80s (×1), actor 8, squad 1 (trace 18221): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 17982. Next observer evidence: {'until': 112, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7220510854701705, 'next_transition': 18463}.
<a id="trace-18222"></a>
- 108.80s–108.80s (×1), actor 8, squad 1 (trace 18222): received platoon directive. Knowledge: actor memory at 105.00s, trace 17982. Next observer evidence: {'until': 112, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7220510854701705, 'next_transition': 18463}.
<a id="trace-18463"></a>
- 112.15s–112.15s (×1), actor 8, squad 1 (trace 18463): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 110.00s, trace 18331. Next observer evidence: {'until': 114.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4859449541958127, 'next_transition': 18684}.
<a id="trace-18464"></a>
- 112.15s–112.15s (×1), actor 8, squad 1 (trace 18464): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 18331. Next observer evidence: {'until': 114.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4859449541958127, 'next_transition': 18684}.
<a id="trace-18592"></a>
- 113.65s–113.65s (×1), actor 1, squad 0 (trace 18592): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 18327. Next observer evidence: None.
<a id="trace-18593"></a>
- 113.65s–113.65s (×1), actor 1, squad 0 (trace 18593): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 18327. Next observer evidence: None.
<a id="trace-18648"></a>
<a id="trace-18650"></a>
<a id="trace-18670"></a>
<a id="trace-18672"></a>
<a id="trace-18704"></a>
<a id="trace-18706"></a>
<a id="trace-18783"></a>
<a id="trace-18785"></a>
<a id="trace-18796"></a>
<a id="trace-18798"></a>
<a id="trace-18832"></a>
<a id="trace-18834"></a>
<a id="trace-18845"></a>
<a id="trace-18847"></a>
<a id="trace-18868"></a>
<a id="trace-18870"></a>
<a id="trace-18882"></a>
<a id="trace-18884"></a>
<a id="trace-18902"></a>
<a id="trace-18904"></a>
<a id="trace-18913"></a>
<a id="trace-18915"></a>
<a id="trace-18932"></a>
<a id="trace-18934"></a>
<a id="trace-18944"></a>
<a id="trace-18946"></a>
<a id="trace-19028"></a>
<a id="trace-19030"></a>
<a id="trace-19040"></a>
<a id="trace-19042"></a>
<a id="trace-19063"></a>
<a id="trace-19065"></a>
<a id="trace-19074"></a>
<a id="trace-19076"></a>
<a id="trace-19093"></a>
<a id="trace-19095"></a>
<a id="trace-19109"></a>
<a id="trace-19111"></a>
<a id="trace-19130"></a>
<a id="trace-19132"></a>
<a id="trace-19140"></a>
<a id="trace-19142"></a>
<a id="trace-19163"></a>
<a id="trace-19165"></a>
<a id="trace-19173"></a>
<a id="trace-19175"></a>
<a id="trace-19256"></a>
<a id="trace-19258"></a>
- 113.75s–125.25s (×48), actor 5, squad 0 (trace 18648): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 18328. Next observer evidence: {'until': 114.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8126969482221835, 'next_transition': 18670}.
<a id="trace-18684"></a>
- 114.40s–114.40s (×1), actor 8, squad 1 (trace 18684): NeedSupport. Knowledge: actor memory at 110.00s, trace 18331. Next observer evidence: {'until': 133.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.180910127825145, 'next_transition': 19645}.
<a id="trace-19265"></a>
- 125.65s–125.65s (×1), actor 1, squad 0 (trace 19265): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 19188. Next observer evidence: None.
<a id="trace-19266"></a>
- 125.65s–125.65s (×1), actor 1, squad 0 (trace 19266): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 19188. Next observer evidence: None.
<a id="trace-19321"></a>
<a id="trace-19323"></a>
<a id="trace-19339"></a>
<a id="trace-19341"></a>
<a id="trace-19357"></a>
<a id="trace-19359"></a>
<a id="trace-19377"></a>
<a id="trace-19379"></a>
<a id="trace-19390"></a>
<a id="trace-19392"></a>
<a id="trace-19416"></a>
<a id="trace-19418"></a>
<a id="trace-19429"></a>
<a id="trace-19431"></a>
<a id="trace-19446"></a>
<a id="trace-19448"></a>
<a id="trace-19466"></a>
<a id="trace-19468"></a>
<a id="trace-19546"></a>
<a id="trace-19548"></a>
<a id="trace-19558"></a>
<a id="trace-19560"></a>
<a id="trace-19575"></a>
<a id="trace-19577"></a>
<a id="trace-19585"></a>
<a id="trace-19587"></a>
<a id="trace-19604"></a>
<a id="trace-19606"></a>
<a id="trace-19621"></a>
<a id="trace-19623"></a>
<a id="trace-19638"></a>
<a id="trace-19640"></a>
<a id="trace-19651"></a>
<a id="trace-19653"></a>
<a id="trace-19675"></a>
<a id="trace-19677"></a>
<a id="trace-19690"></a>
<a id="trace-19692"></a>
<a id="trace-19769"></a>
<a id="trace-19771"></a>
<a id="trace-19783"></a>
<a id="trace-19785"></a>
<a id="trace-19808"></a>
<a id="trace-19810"></a>
<a id="trace-19819"></a>
<a id="trace-19821"></a>
<a id="trace-19835"></a>
<a id="trace-19837"></a>
- 125.75s–137.30s (×48), actor 5, squad 0 (trace 19321): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19189. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.812719989449158, 'next_transition': 19339}.
<a id="trace-19645"></a>
- 133.40s–133.40s (×1), actor 8, squad 1 (trace 19645): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 130.00s, trace 19480. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1817}.
<a id="trace-19847"></a>
- 137.65s–137.65s (×1), actor 1, squad 0 (trace 19847): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 19698. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709096373640485, 'next_transition': 19904}.
<a id="trace-19848"></a>
- 137.65s–137.65s (×1), actor 1, squad 0 (trace 19848): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 19698. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709096373640485, 'next_transition': 19904}.
<a id="trace-19904"></a>
<a id="trace-19906"></a>
<a id="trace-19920"></a>
<a id="trace-19922"></a>
<a id="trace-19938"></a>
<a id="trace-19940"></a>
<a id="trace-19958"></a>
<a id="trace-19960"></a>
- 137.80s–139.30s (×8), actor 5, squad 0 (trace 19904): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 19699. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417946226852929, 'next_transition': 19920}.
<a id="trace-1817"></a>
- 139.25s–139.25s (×1), actor 5, squad 1 (events line 1817): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20821}.
<a id="trace-19950"></a>
- 139.25s–139.25s (×1), actor 5, squad 1 (trace 19950): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.351973 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 139.25s, trace 19950. Next observer evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20821}.
<a id="trace-19951"></a>
- 139.25s–139.25s (×1), actor 5, squad 1 (trace 19951): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.351973 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 139.25s, trace 19951. Next observer evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20821}.
<a id="trace-19966"></a>
- 139.45s–139.45s (×1), actor 1, squad 0 (trace 19966): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 19698. Next observer evidence: {'until': 139.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43007825284102574, 'next_transition': 19972}.
<a id="trace-19972"></a>
<a id="trace-19974"></a>
- 139.80s–139.80s (×2), actor 5, squad 0 (trace 19972): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 139.25s, trace 19951. Next observer evidence: None.
<a id="trace-19984"></a>
- 139.85s–139.85s (×1), actor 1, squad 0 (trace 19984): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 135.00s, trace 19698. Next observer evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575096227219141, 'next_transition': 20742}.
<a id="trace-19985"></a>
- 139.85s–139.85s (×1), actor 1, squad 0 (trace 19985): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 135.00s, trace 19698. Next observer evidence: {'until': 140, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575096227219141, 'next_transition': 20742}.
<a id="trace-20742"></a>
- 140.10s–140.10s (×1), actor 1, squad 0 (trace 20742): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 140.00s, trace 20724. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748098297889804, 'next_transition': 20807}.
<a id="trace-20807"></a>
<a id="trace-20809"></a>
<a id="trace-20890"></a>
<a id="trace-20892"></a>
<a id="trace-20919"></a>
<a id="trace-20921"></a>
<a id="trace-20935"></a>
<a id="trace-20937"></a>
<a id="trace-20957"></a>
<a id="trace-20959"></a>
<a id="trace-20977"></a>
<a id="trace-20979"></a>
<a id="trace-21002"></a>
<a id="trace-21004"></a>
<a id="trace-21011"></a>
<a id="trace-21013"></a>
- 140.30s–143.80s (×16), actor 5, squad 0 (trace 20807): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 20725. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575222436461297, 'next_transition': 20890}.
<a id="trace-20821"></a>
- 140.70s–140.70s (×1), actor 8, squad 1 (trace 20821): Withdraw to received rally. Knowledge: actor memory at 140.00s, trace 20728. Next observer evidence: {'until': 170.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339999999999995, 'next_transition': 2185}.
<a id="trace-20822"></a>
- 140.70s–140.70s (×1), actor 8, squad 1 (trace 20822): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 20728. Next observer evidence: {'until': 170.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339999999999995, 'next_transition': 2185}.
<a id="trace-1859"></a>
- 144.05s–144.05s (×1), actor 5, squad 0 (events line 1859): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574991607120489, 'next_transition': 21033}.
<a id="trace-21017"></a>
- 144.05s–144.05s (×1), actor 5, squad 0 (trace 21017): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358683 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 144.05s, trace 21017. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574991607120489, 'next_transition': 21033}.
<a id="trace-21018"></a>
- 144.05s–144.05s (×1), actor 5, squad 0 (trace 21018): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358683 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 144.05s, trace 21018. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574991607120489, 'next_transition': 21033}.
<a id="trace-21033"></a>
<a id="trace-21035"></a>
<a id="trace-21046"></a>
<a id="trace-21048"></a>
<a id="trace-21125"></a>
<a id="trace-21127"></a>
<a id="trace-21133"></a>
<a id="trace-21135"></a>
- 144.30s–145.80s (×8), actor 5, squad 0 (trace 21033): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 144.05s, trace 21018. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512394856984152, 'next_transition': 21046}.
<a id="trace-21145"></a>
- 146.05s–146.05s (×1), actor 1, squad 0 (trace 21145): Withdraw to received rally. Knowledge: actor memory at 145.00s, trace 21056. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42839426532877234, 'next_transition': 21221}.
<a id="trace-21146"></a>
- 146.05s–146.05s (×1), actor 1, squad 0 (trace 21146): rearward bound: one stationary suppressing element. Knowledge: actor memory at 145.00s, trace 21056. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42839426532877234, 'next_transition': 21221}.
<a id="trace-21221"></a>
<a id="trace-21223"></a>
<a id="trace-21238"></a>
<a id="trace-21240"></a>
<a id="trace-21258"></a>
<a id="trace-21260"></a>
<a id="trace-21273"></a>
<a id="trace-21275"></a>
<a id="trace-21298"></a>
<a id="trace-21300"></a>
<a id="trace-21312"></a>
<a id="trace-21314"></a>
<a id="trace-21332"></a>
<a id="trace-21334"></a>
<a id="trace-21346"></a>
<a id="trace-21348"></a>
<a id="trace-21427"></a>
<a id="trace-21429"></a>
<a id="trace-21440"></a>
<a id="trace-21442"></a>
<a id="trace-21457"></a>
<a id="trace-21459"></a>
<a id="trace-21466"></a>
<a id="trace-21468"></a>
<a id="trace-21488"></a>
<a id="trace-21490"></a>
<a id="trace-21507"></a>
<a id="trace-21509"></a>
<a id="trace-21527"></a>
<a id="trace-21529"></a>
<a id="trace-21535"></a>
<a id="trace-21537"></a>
<a id="trace-21555"></a>
<a id="trace-21557"></a>
<a id="trace-21566"></a>
<a id="trace-21568"></a>
<a id="trace-21645"></a>
<a id="trace-21647"></a>
<a id="trace-21658"></a>
<a id="trace-21660"></a>
<a id="trace-21692"></a>
<a id="trace-21694"></a>
<a id="trace-21711"></a>
<a id="trace-21713"></a>
<a id="trace-21734"></a>
<a id="trace-21736"></a>
<a id="trace-21754"></a>
<a id="trace-21756"></a>
- 146.30s–157.80s (×48), actor 5, squad 0 (trace 21221): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 21057. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6363531264121791, 'next_transition': 21238}.
<a id="trace-21772"></a>
- 158.25s–158.25s (×1), actor 1, squad 0 (trace 21772): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 21576. Next observer evidence: None.
<a id="trace-21773"></a>
- 158.25s–158.25s (×1), actor 1, squad 0 (trace 21773): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 21576. Next observer evidence: None.
<a id="trace-21834"></a>
<a id="trace-21836"></a>
<a id="trace-21867"></a>
<a id="trace-21869"></a>
<a id="trace-21910"></a>
<a id="trace-21912"></a>
<a id="trace-21938"></a>
<a id="trace-21940"></a>
<a id="trace-22026"></a>
<a id="trace-22028"></a>
<a id="trace-22053"></a>
<a id="trace-22055"></a>
- 158.30s–160.80s (×12), actor 5, squad 0 (trace 21834): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 21577. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7641323629230592, 'next_transition': 21867}.
<a id="trace-22072"></a>
- 160.95s–160.95s (×1), actor 1, squad 0 (trace 22072): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 21948. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6845610989777159, 'next_transition': 22084}.
<a id="trace-22084"></a>
<a id="trace-22086"></a>
<a id="trace-22099"></a>
<a id="trace-22101"></a>
<a id="trace-22119"></a>
<a id="trace-22121"></a>
<a id="trace-22140"></a>
<a id="trace-22142"></a>
<a id="trace-22158"></a>
<a id="trace-22160"></a>
<a id="trace-22169"></a>
<a id="trace-22171"></a>
<a id="trace-22192"></a>
<a id="trace-22194"></a>
<a id="trace-22205"></a>
<a id="trace-22207"></a>
<a id="trace-22282"></a>
<a id="trace-22284"></a>
<a id="trace-22292"></a>
<a id="trace-22294"></a>
<a id="trace-22308"></a>
<a id="trace-22310"></a>
<a id="trace-22320"></a>
<a id="trace-22322"></a>
<a id="trace-22333"></a>
<a id="trace-22335"></a>
<a id="trace-22347"></a>
<a id="trace-22349"></a>
<a id="trace-22364"></a>
<a id="trace-22366"></a>
<a id="trace-22378"></a>
<a id="trace-22380"></a>
<a id="trace-22403"></a>
<a id="trace-22405"></a>
<a id="trace-22413"></a>
<a id="trace-22415"></a>
<a id="trace-22488"></a>
<a id="trace-22490"></a>
<a id="trace-22501"></a>
<a id="trace-22503"></a>
<a id="trace-22517"></a>
<a id="trace-22519"></a>
<a id="trace-22528"></a>
<a id="trace-22530"></a>
<a id="trace-22546"></a>
<a id="trace-22548"></a>
<a id="trace-22562"></a>
<a id="trace-22564"></a>
<a id="trace-22579"></a>
<a id="trace-22581"></a>
<a id="trace-22588"></a>
<a id="trace-22590"></a>
<a id="trace-22608"></a>
<a id="trace-22610"></a>
<a id="trace-22621"></a>
<a id="trace-22623"></a>
<a id="trace-22695"></a>
<a id="trace-22697"></a>
<a id="trace-22701"></a>
<a id="trace-22703"></a>
<a id="trace-22724"></a>
<a id="trace-22726"></a>
<a id="trace-22740"></a>
<a id="trace-22742"></a>
<a id="trace-22760"></a>
<a id="trace-22762"></a>
<a id="trace-22771"></a>
<a id="trace-22773"></a>
<a id="trace-22791"></a>
<a id="trace-22793"></a>
<a id="trace-22802"></a>
<a id="trace-22804"></a>
<a id="trace-22818"></a>
<a id="trace-22820"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22902"></a>
<a id="trace-22904"></a>
<a id="trace-22915"></a>
<a id="trace-22917"></a>
<a id="trace-22937"></a>
<a id="trace-22939"></a>
<a id="trace-22946"></a>
<a id="trace-22948"></a>
<a id="trace-22961"></a>
<a id="trace-22963"></a>
<a id="trace-22979"></a>
<a id="trace-22981"></a>
<a id="trace-22992"></a>
<a id="trace-22994"></a>
<a id="trace-23006"></a>
<a id="trace-23008"></a>
<a id="trace-23025"></a>
<a id="trace-23027"></a>
<a id="trace-23038"></a>
<a id="trace-23040"></a>
<a id="trace-23118"></a>
<a id="trace-23120"></a>
<a id="trace-23129"></a>
<a id="trace-23131"></a>
<a id="trace-23145"></a>
<a id="trace-23147"></a>
<a id="trace-23157"></a>
<a id="trace-23159"></a>
<a id="trace-23172"></a>
<a id="trace-23174"></a>
<a id="trace-23185"></a>
<a id="trace-23187"></a>
<a id="trace-23204"></a>
<a id="trace-23206"></a>
<a id="trace-23217"></a>
<a id="trace-23219"></a>
<a id="trace-23236"></a>
<a id="trace-23238"></a>
<a id="trace-23245"></a>
<a id="trace-23247"></a>
<a id="trace-23321"></a>
<a id="trace-23323"></a>
<a id="trace-23332"></a>
<a id="trace-23334"></a>
<a id="trace-23347"></a>
<a id="trace-23349"></a>
<a id="trace-23359"></a>
<a id="trace-23361"></a>
<a id="trace-23380"></a>
<a id="trace-23382"></a>
<a id="trace-23395"></a>
<a id="trace-23397"></a>
<a id="trace-23413"></a>
<a id="trace-23415"></a>
<a id="trace-23421"></a>
<a id="trace-23423"></a>
<a id="trace-23441"></a>
<a id="trace-23443"></a>
<a id="trace-23454"></a>
<a id="trace-23456"></a>
<a id="trace-23528"></a>
<a id="trace-23530"></a>
<a id="trace-23540"></a>
<a id="trace-23542"></a>
<a id="trace-23557"></a>
<a id="trace-23559"></a>
<a id="trace-23570"></a>
<a id="trace-23572"></a>
<a id="trace-23584"></a>
<a id="trace-23586"></a>
<a id="trace-23597"></a>
<a id="trace-23599"></a>
<a id="trace-23615"></a>
<a id="trace-23617"></a>
<a id="trace-23626"></a>
<a id="trace-23628"></a>
<a id="trace-23642"></a>
<a id="trace-23644"></a>
<a id="trace-23654"></a>
<a id="trace-23656"></a>
<a id="trace-23731"></a>
<a id="trace-23733"></a>
<a id="trace-23747"></a>
<a id="trace-23749"></a>
<a id="trace-23765"></a>
<a id="trace-23767"></a>
<a id="trace-23776"></a>
<a id="trace-23778"></a>
<a id="trace-23794"></a>
<a id="trace-23796"></a>
<a id="trace-23807"></a>
<a id="trace-23809"></a>
<a id="trace-23820"></a>
<a id="trace-23822"></a>
<a id="trace-23830"></a>
<a id="trace-23832"></a>
- 161.30s–203.80s (×172), actor 5, squad 0 (trace 22084): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 21949. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0836041720286345, 'next_transition': 22099}.
<a id="trace-2185"></a>
- 199.25s–199.25s (×1), actor 5, squad 1 (events line 2185): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2440}.
<a id="trace-23635"></a>
- 199.25s–199.25s (×1), actor 5, squad 1 (trace 23635): renew committed intent (75 s lifetime). Knowledge: actor memory at 199.25s, trace 23635. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2440}.
<a id="trace-2207"></a>
- 204.05s–204.05s (×1), actor 5, squad 0 (events line 2207): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23849}.
<a id="trace-23838"></a>
- 204.05s–204.05s (×1), actor 5, squad 0 (trace 23838): renew committed intent (75 s lifetime). Knowledge: actor memory at 204.05s, trace 23838. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23849}.
<a id="trace-23849"></a>
<a id="trace-23851"></a>
<a id="trace-23864"></a>
<a id="trace-23866"></a>
<a id="trace-23941"></a>
<a id="trace-23943"></a>
<a id="trace-23951"></a>
<a id="trace-23953"></a>
<a id="trace-23971"></a>
<a id="trace-23973"></a>
<a id="trace-23983"></a>
<a id="trace-23985"></a>
- 204.30s–206.80s (×12), actor 5, squad 0 (trace 23849): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 204.05s, trace 23838. Next observer evidence: {'until': 204.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23864}.
<a id="trace-2226"></a>
- 207.00s–207.00s (×1), actor 5, squad 0 (events line 2226): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24003}.
<a id="trace-23990"></a>
- 207.00s–207.00s (×1), actor 5, squad 0 (trace 23990): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.675628 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 207.00s, trace 23990. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24003}.
<a id="trace-23991"></a>
- 207.00s–207.00s (×1), actor 5, squad 0 (trace 23991): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.675628 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 207.00s, trace 23991. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24003}.
<a id="trace-24003"></a>
<a id="trace-24005"></a>
<a id="trace-24014"></a>
<a id="trace-24016"></a>
<a id="trace-24031"></a>
<a id="trace-24033"></a>
- 207.30s–208.30s (×6), actor 5, squad 0 (trace 24003): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 207.00s, trace 23991. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24014}.
<a id="trace-24038"></a>
- 208.60s–208.60s (×1), actor 1, squad 0 (trace 24038): MoveTactically. Knowledge: actor memory at 205.00s, trace 23872. Next observer evidence: {'until': 208.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24098}.
<a id="trace-24039"></a>
- 208.60s–208.60s (×1), actor 1, squad 0 (trace 24039): traveling. Knowledge: actor memory at 205.00s, trace 23872. Next observer evidence: {'until': 208.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24098}.
<a id="trace-24040"></a>
- 208.60s–208.60s (×1), actor 1, squad 0 (trace 24040): received platoon directive. Knowledge: actor memory at 205.00s, trace 23872. Next observer evidence: {'until': 208.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24098}.
<a id="trace-24098"></a>
<a id="trace-24100"></a>
<a id="trace-24118"></a>
<a id="trace-24120"></a>
<a id="trace-24131"></a>
<a id="trace-24133"></a>
<a id="trace-24206"></a>
<a id="trace-24208"></a>
<a id="trace-24220"></a>
<a id="trace-24222"></a>
<a id="trace-24236"></a>
<a id="trace-24238"></a>
<a id="trace-24246"></a>
<a id="trace-24248"></a>
<a id="trace-24266"></a>
<a id="trace-24268"></a>
<a id="trace-24286"></a>
<a id="trace-24288"></a>
<a id="trace-24305"></a>
<a id="trace-24307"></a>
<a id="trace-24322"></a>
<a id="trace-24324"></a>
<a id="trace-24343"></a>
<a id="trace-24345"></a>
<a id="trace-24356"></a>
<a id="trace-24358"></a>
<a id="trace-24431"></a>
<a id="trace-24433"></a>
- 208.80s–215.30s (×28), actor 5, squad 0 (trace 24098): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 207.00s, trace 23991. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24118}.
<a id="trace-24443"></a>
- 215.65s–215.65s (×1), actor 1, squad 0 (trace 24443): matching received arrivals: traveling stage complete. Knowledge: actor memory at 215.00s, trace 24365. Next observer evidence: {'until': 215.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24498}.
<a id="trace-24498"></a>
<a id="trace-24500"></a>
<a id="trace-24513"></a>
<a id="trace-24515"></a>
<a id="trace-24527"></a>
<a id="trace-24529"></a>
<a id="trace-24543"></a>
<a id="trace-24545"></a>
<a id="trace-24555"></a>
<a id="trace-24557"></a>
<a id="trace-24572"></a>
<a id="trace-24574"></a>
<a id="trace-24589"></a>
<a id="trace-24591"></a>
<a id="trace-24605"></a>
<a id="trace-24607"></a>
<a id="trace-24620"></a>
<a id="trace-24622"></a>
<a id="trace-24705"></a>
<a id="trace-24707"></a>
<a id="trace-24720"></a>
<a id="trace-24722"></a>
<a id="trace-24738"></a>
<a id="trace-24740"></a>
<a id="trace-24750"></a>
<a id="trace-24752"></a>
<a id="trace-24767"></a>
<a id="trace-24769"></a>
<a id="trace-24780"></a>
<a id="trace-24782"></a>
- 215.80s–222.80s (×30), actor 5, squad 0 (trace 24498): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 24366. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24513}.
<a id="trace-24788"></a>
- 222.85s–222.85s (×1), actor 1, squad 0 (trace 24788): traveling overwatch. Knowledge: actor memory at 220.00s, trace 24629. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7223705600838884, 'next_transition': 24796}.
<a id="trace-24789"></a>
- 222.85s–222.85s (×1), actor 1, squad 0 (trace 24789): matching received arrivals: traveling stage complete. Knowledge: actor memory at 220.00s, trace 24629. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7223705600838884, 'next_transition': 24796}.
<a id="trace-24796"></a>
<a id="trace-24798"></a>
<a id="trace-24803"></a>
<a id="trace-24805"></a>
<a id="trace-24820"></a>
<a id="trace-24822"></a>
<a id="trace-24832"></a>
<a id="trace-24834"></a>
<a id="trace-24912"></a>
<a id="trace-24914"></a>
<a id="trace-24923"></a>
<a id="trace-24925"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-24953"></a>
<a id="trace-24955"></a>
<a id="trace-24975"></a>
<a id="trace-24977"></a>
<a id="trace-24990"></a>
<a id="trace-24992"></a>
<a id="trace-25005"></a>
<a id="trace-25007"></a>
<a id="trace-25029"></a>
<a id="trace-25031"></a>
<a id="trace-25038"></a>
<a id="trace-25040"></a>
<a id="trace-25111"></a>
<a id="trace-25113"></a>
<a id="trace-25118"></a>
<a id="trace-25120"></a>
<a id="trace-25132"></a>
<a id="trace-25134"></a>
<a id="trace-25143"></a>
<a id="trace-25145"></a>
<a id="trace-25158"></a>
<a id="trace-25160"></a>
<a id="trace-25171"></a>
<a id="trace-25173"></a>
<a id="trace-25185"></a>
<a id="trace-25187"></a>
<a id="trace-25200"></a>
<a id="trace-25202"></a>
<a id="trace-25217"></a>
<a id="trace-25219"></a>
<a id="trace-25230"></a>
<a id="trace-25232"></a>
<a id="trace-25306"></a>
<a id="trace-25308"></a>
<a id="trace-25315"></a>
<a id="trace-25317"></a>
<a id="trace-25328"></a>
<a id="trace-25330"></a>
<a id="trace-25338"></a>
<a id="trace-25340"></a>
<a id="trace-25350"></a>
<a id="trace-25352"></a>
<a id="trace-25363"></a>
<a id="trace-25365"></a>
<a id="trace-25378"></a>
<a id="trace-25380"></a>
<a id="trace-25387"></a>
<a id="trace-25389"></a>
<a id="trace-25401"></a>
<a id="trace-25403"></a>
<a id="trace-25413"></a>
<a id="trace-25415"></a>
<a id="trace-25488"></a>
<a id="trace-25490"></a>
<a id="trace-25499"></a>
<a id="trace-25501"></a>
<a id="trace-25520"></a>
<a id="trace-25522"></a>
<a id="trace-25531"></a>
<a id="trace-25533"></a>
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
<a id="trace-25600"></a>
<a id="trace-25602"></a>
<a id="trace-25675"></a>
<a id="trace-25677"></a>
<a id="trace-25685"></a>
<a id="trace-25687"></a>
<a id="trace-25699"></a>
<a id="trace-25701"></a>
<a id="trace-25713"></a>
<a id="trace-25715"></a>
<a id="trace-25729"></a>
<a id="trace-25731"></a>
<a id="trace-25742"></a>
<a id="trace-25744"></a>
<a id="trace-25761"></a>
<a id="trace-25763"></a>
<a id="trace-25775"></a>
<a id="trace-25777"></a>
<a id="trace-25789"></a>
<a id="trace-25791"></a>
<a id="trace-25796"></a>
<a id="trace-25798"></a>
<a id="trace-25869"></a>
<a id="trace-25871"></a>
<a id="trace-25878"></a>
<a id="trace-25880"></a>
<a id="trace-25892"></a>
<a id="trace-25894"></a>
<a id="trace-25902"></a>
<a id="trace-25904"></a>
<a id="trace-25915"></a>
<a id="trace-25917"></a>
<a id="trace-25928"></a>
<a id="trace-25930"></a>
<a id="trace-25945"></a>
<a id="trace-25947"></a>
<a id="trace-25953"></a>
<a id="trace-25955"></a>
<a id="trace-25969"></a>
<a id="trace-25971"></a>
<a id="trace-25981"></a>
<a id="trace-25983"></a>
<a id="trace-26057"></a>
<a id="trace-26059"></a>
<a id="trace-26070"></a>
<a id="trace-26072"></a>
<a id="trace-26084"></a>
<a id="trace-26086"></a>
<a id="trace-26094"></a>
<a id="trace-26096"></a>
<a id="trace-26106"></a>
<a id="trace-26108"></a>
<a id="trace-26119"></a>
<a id="trace-26121"></a>
<a id="trace-26133"></a>
<a id="trace-26135"></a>
<a id="trace-26139"></a>
<a id="trace-26141"></a>
<a id="trace-26154"></a>
<a id="trace-26156"></a>
<a id="trace-26161"></a>
<a id="trace-26163"></a>
- 223.30s–259.80s (×146), actor 5, squad 0 (trace 24796): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 24630. Next observer evidence: {'until': 223.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.08378950062683, 'next_transition': 24803}.
<a id="trace-2439"></a>
- 259.95s–259.95s (×1), actor 5, squad 0 (events line 2439): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2440"></a>
- 259.95s–259.95s (×1), actor 5, squad 1 (events line 2440): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26171"></a>
- 259.95s–259.95s (×1), actor 5, squad 0 (trace 26171): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 259.95s, trace 26171. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26243}.
<a id="trace-26172"></a>
- 259.95s–259.95s (×1), actor 5, squad 0 (trace 26172): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 259.95s, trace 26172. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26243}.
<a id="trace-26173"></a>
- 259.95s–259.95s (×1), actor 5, squad 1 (trace 26173): renew committed intent (75 s lifetime). Knowledge: actor memory at 259.95s, trace 26173. Next observer evidence: {'until': 289.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2798}.
<a id="trace-26243"></a>
<a id="trace-26245"></a>
<a id="trace-26255"></a>
<a id="trace-26257"></a>
<a id="trace-26271"></a>
<a id="trace-26273"></a>
- 260.30s–261.30s (×6), actor 5, squad 0 (trace 26243): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 26175. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26255}.
<a id="trace-26277"></a>
- 261.55s–261.55s (×1), actor 1, squad 0 (trace 26277): traveling. Knowledge: actor memory at 260.00s, trace 26174. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26337}.
<a id="trace-26278"></a>
- 261.55s–261.55s (×1), actor 1, squad 0 (trace 26278): received platoon directive. Knowledge: actor memory at 260.00s, trace 26174. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26337}.
<a id="trace-26337"></a>
<a id="trace-26339"></a>
<a id="trace-26354"></a>
<a id="trace-26356"></a>
<a id="trace-26367"></a>
<a id="trace-26369"></a>
<a id="trace-26383"></a>
<a id="trace-26385"></a>
<a id="trace-26395"></a>
<a id="trace-26397"></a>
<a id="trace-26413"></a>
<a id="trace-26415"></a>
<a id="trace-26425"></a>
<a id="trace-26427"></a>
<a id="trace-26503"></a>
<a id="trace-26505"></a>
<a id="trace-26514"></a>
<a id="trace-26516"></a>
<a id="trace-26528"></a>
<a id="trace-26530"></a>
<a id="trace-26543"></a>
<a id="trace-26545"></a>
<a id="trace-26560"></a>
<a id="trace-26562"></a>
<a id="trace-26579"></a>
<a id="trace-26581"></a>
<a id="trace-26598"></a>
<a id="trace-26600"></a>
- 261.80s–268.30s (×28), actor 5, squad 0 (trace 26337): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 26175. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26354}.
<a id="trace-26605"></a>
- 268.45s–268.45s (×1), actor 1, squad 0 (trace 26605): matching received arrivals: traveling stage complete. Knowledge: actor memory at 265.00s, trace 26438. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05249999999999962, 'next_transition': 26663}.
<a id="trace-26663"></a>
<a id="trace-26665"></a>
<a id="trace-26688"></a>
<a id="trace-26690"></a>
<a id="trace-26699"></a>
<a id="trace-26701"></a>
<a id="trace-26776"></a>
<a id="trace-26778"></a>
<a id="trace-26790"></a>
<a id="trace-26792"></a>
<a id="trace-26807"></a>
<a id="trace-26809"></a>
<a id="trace-26815"></a>
<a id="trace-26817"></a>
<a id="trace-26834"></a>
<a id="trace-26836"></a>
<a id="trace-26849"></a>
<a id="trace-26851"></a>
<a id="trace-26872"></a>
<a id="trace-26874"></a>
<a id="trace-26883"></a>
<a id="trace-26885"></a>
<a id="trace-26901"></a>
<a id="trace-26903"></a>
<a id="trace-26914"></a>
<a id="trace-26916"></a>
<a id="trace-26988"></a>
<a id="trace-26990"></a>
- 268.80s–275.30s (×28), actor 5, squad 0 (trace 26663): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 26439. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6993000000000033, 'next_transition': 26688}.
<a id="trace-26999"></a>
- 275.65s–275.65s (×1), actor 1, squad 0 (trace 26999): matching received arrivals: traveling stage complete. Knowledge: actor memory at 275.00s, trace 26923. Next observer evidence: {'until': 275.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30873333700683553, 'next_transition': 27054}.
<a id="trace-27054"></a>
<a id="trace-27056"></a>
<a id="trace-27075"></a>
<a id="trace-27077"></a>
<a id="trace-27087"></a>
<a id="trace-27089"></a>
<a id="trace-27109"></a>
<a id="trace-27111"></a>
<a id="trace-27121"></a>
<a id="trace-27123"></a>
<a id="trace-27142"></a>
<a id="trace-27144"></a>
<a id="trace-27155"></a>
<a id="trace-27157"></a>
<a id="trace-27170"></a>
<a id="trace-27172"></a>
<a id="trace-27183"></a>
<a id="trace-27185"></a>
<a id="trace-27265"></a>
<a id="trace-27267"></a>
<a id="trace-27273"></a>
<a id="trace-27275"></a>
<a id="trace-27295"></a>
<a id="trace-27297"></a>
<a id="trace-27310"></a>
<a id="trace-27312"></a>
<a id="trace-27325"></a>
<a id="trace-27327"></a>
<a id="trace-27338"></a>
<a id="trace-27340"></a>
- 275.80s–282.80s (×30), actor 5, squad 0 (trace 27054): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 26924. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240000000000106, 'next_transition': 27075}.
<a id="trace-27344"></a>
- 282.85s–282.85s (×1), actor 1, squad 0 (trace 27344): matching received arrivals: traveling stage complete. Knowledge: actor memory at 280.00s, trace 27194. Next observer evidence: {'until': 283.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.722399999999998, 'next_transition': 27409}.
<a id="trace-27409"></a>
<a id="trace-27411"></a>
<a id="trace-27421"></a>
<a id="trace-27423"></a>
<a id="trace-27438"></a>
<a id="trace-27440"></a>
<a id="trace-27455"></a>
<a id="trace-27457"></a>
<a id="trace-27537"></a>
<a id="trace-27539"></a>
<a id="trace-27548"></a>
<a id="trace-27550"></a>
<a id="trace-27568"></a>
<a id="trace-27570"></a>
<a id="trace-27581"></a>
<a id="trace-27583"></a>
- 283.30s–286.80s (×16), actor 5, squad 0 (trace 27409): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 27195. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3461000000000023, 'next_transition': 27421}.
<a id="trace-27589"></a>
- 287.05s–287.05s (×1), actor 1, squad 0 (trace 27589): matching received arrivals: deployment leg complete. Knowledge: actor memory at 285.00s, trace 27469. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119999999999814, 'next_transition': 27596}.
<a id="trace-27596"></a>
<a id="trace-27598"></a>
<a id="trace-27610"></a>
<a id="trace-27612"></a>
<a id="trace-27632"></a>
<a id="trace-27634"></a>
<a id="trace-27644"></a>
<a id="trace-27646"></a>
<a id="trace-27663"></a>
<a id="trace-27665"></a>
<a id="trace-27674"></a>
<a id="trace-27676"></a>
<a id="trace-27755"></a>
<a id="trace-27757"></a>
<a id="trace-27770"></a>
<a id="trace-27772"></a>
<a id="trace-27789"></a>
<a id="trace-27791"></a>
<a id="trace-27799"></a>
<a id="trace-27801"></a>
<a id="trace-27816"></a>
<a id="trace-27818"></a>
- 287.30s–292.30s (×22), actor 5, squad 0 (trace 27596): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 285.00s, trace 27470. Next observer evidence: {'until': 287.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45360000000000156, 'next_transition': 27610}.
<a id="trace-2617"></a>
- 292.45s–292.45s (×1), actor 5, squad 0 (events line 2617): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27824"></a>
- 292.45s–292.45s (×1), actor 5, squad 0 (trace 27824): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 292.45s, trace 27824. Next observer evidence: {'until': 292.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27830}.
<a id="trace-27825"></a>
- 292.45s–292.45s (×1), actor 5, squad 0 (trace 27825): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 292.45s, trace 27825. Next observer evidence: {'until': 292.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27830}.
<a id="trace-27830"></a>
<a id="trace-27832"></a>
<a id="trace-27849"></a>
<a id="trace-27851"></a>
<a id="trace-27859"></a>
<a id="trace-27861"></a>
- 292.80s–293.80s (×6), actor 5, squad 0 (trace 27830): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 292.45s, trace 27825. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27849}.
<a id="trace-27869"></a>
- 294.05s–294.05s (×1), actor 1, squad 0 (trace 27869): Reorganise: completed/failed drill. Knowledge: actor memory at 290.00s, trace 27685. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05249999999999962, 'next_transition': 27943}.
<a id="trace-27871"></a>
- 294.05s–294.05s (×1), actor 1, squad 0 (trace 27871): MoveTactically. Knowledge: actor memory at 290.00s, trace 27685. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05249999999999962, 'next_transition': 27943}.
<a id="trace-27872"></a>
- 294.05s–294.05s (×1), actor 1, squad 0 (trace 27872): Reorganise complete. Knowledge: actor memory at 290.00s, trace 27685. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05249999999999962, 'next_transition': 27943}.
<a id="trace-27943"></a>
<a id="trace-27945"></a>
<a id="trace-28018"></a>
<a id="trace-28020"></a>
<a id="trace-28028"></a>
<a id="trace-28030"></a>
<a id="trace-28047"></a>
<a id="trace-28049"></a>
<a id="trace-28057"></a>
<a id="trace-28059"></a>
<a id="trace-28080"></a>
<a id="trace-28082"></a>
<a id="trace-28094"></a>
<a id="trace-28096"></a>
<a id="trace-28114"></a>
<a id="trace-28116"></a>
<a id="trace-28126"></a>
<a id="trace-28128"></a>
<a id="trace-28146"></a>
<a id="trace-28148"></a>
<a id="trace-28163"></a>
<a id="trace-28165"></a>
<a id="trace-28243"></a>
<a id="trace-28245"></a>
<a id="trace-28254"></a>
<a id="trace-28256"></a>
- 294.80s–300.80s (×26), actor 5, squad 0 (trace 27943): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 292.45s, trace 27825. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200000000000017, 'next_transition': 28018}.
<a id="trace-28262"></a>
- 300.85s–300.85s (×1), actor 1, squad 0 (trace 28262): traveling overwatch. Knowledge: actor memory at 300.00s, trace 28169. Next observer evidence: {'until': 301.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6468000000000013, 'next_transition': 28306}.
<a id="trace-28263"></a>
- 300.85s–300.85s (×1), actor 1, squad 0 (trace 28263): matching received arrivals: traveling stage complete. Knowledge: actor memory at 300.00s, trace 28169. Next observer evidence: {'until': 301.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6468000000000013, 'next_transition': 28306}.
<a id="trace-28306"></a>
<a id="trace-28308"></a>
<a id="trace-28315"></a>
<a id="trace-28317"></a>
<a id="trace-28327"></a>
<a id="trace-28329"></a>
<a id="trace-28343"></a>
<a id="trace-28345"></a>
<a id="trace-28358"></a>
<a id="trace-28360"></a>
<a id="trace-28368"></a>
<a id="trace-28370"></a>
<a id="trace-28392"></a>
<a id="trace-28394"></a>
<a id="trace-28405"></a>
<a id="trace-28407"></a>
<a id="trace-28485"></a>
<a id="trace-28487"></a>
<a id="trace-28497"></a>
<a id="trace-28499"></a>
<a id="trace-28518"></a>
<a id="trace-28520"></a>
<a id="trace-28534"></a>
<a id="trace-28536"></a>
<a id="trace-28550"></a>
<a id="trace-28552"></a>
<a id="trace-28562"></a>
<a id="trace-28564"></a>
<a id="trace-28588"></a>
<a id="trace-28590"></a>
<a id="trace-28598"></a>
<a id="trace-28600"></a>
- 301.30s–308.80s (×32), actor 5, squad 0 (trace 28306): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 28170. Next observer evidence: {'until': 301.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3460945868749548, 'next_transition': 28315}.
<a id="trace-28608"></a>
- 308.95s–308.95s (×1), actor 1, squad 0 (trace 28608): ReactToContact: cover and return fire. Knowledge: actor memory at 305.00s, trace 28418. Next observer evidence: {'until': 309.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7224019381362168, 'next_transition': 28685}.
<a id="trace-28609"></a>
- 308.95s–308.95s (×1), actor 1, squad 0 (trace 28609): bounding overwatch. Knowledge: actor memory at 305.00s, trace 28418. Next observer evidence: {'until': 309.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7224019381362168, 'next_transition': 28685}.
<a id="trace-28610"></a>
- 308.95s–308.95s (×1), actor 1, squad 0 (trace 28610): new contact inside 100 m. Knowledge: actor memory at 305.00s, trace 28418. Next observer evidence: {'until': 309.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7224019381362168, 'next_transition': 28685}.
<a id="trace-28685"></a>
<a id="trace-28687"></a>
<a id="trace-28700"></a>
<a id="trace-28702"></a>
<a id="trace-28777"></a>
<a id="trace-28779"></a>
<a id="trace-28792"></a>
<a id="trace-28794"></a>
<a id="trace-28815"></a>
<a id="trace-28817"></a>
<a id="trace-28826"></a>
<a id="trace-28828"></a>
<a id="trace-28845"></a>
<a id="trace-28847"></a>
- 309.30s–312.30s (×14), actor 5, squad 0 (trace 28685): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 28419. Next observer evidence: {'until': 309.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2078750507997207, 'next_transition': 28700}.
<a id="trace-2728"></a>
- 312.45s–312.45s (×1), actor 5, squad 0 (events line 2728): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28851"></a>
- 312.45s–312.45s (×1), actor 5, squad 0 (trace 28851): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 312.45s, trace 28851. Next observer evidence: None.
<a id="trace-28852"></a>
- 312.45s–312.45s (×1), actor 5, squad 0 (trace 28852): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 312.45s, trace 28852. Next observer evidence: None.
<a id="trace-28856"></a>
- 312.55s–312.55s (×1), actor 1, squad 0 (trace 28856): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 310.00s, trace 28707. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5052218056955063, 'next_transition': 28865}.
<a id="trace-28858"></a>
- 312.55s–312.55s (×1), actor 1, squad 0 (trace 28858): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 310.00s, trace 28707. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5052218056955063, 'next_transition': 28865}.
<a id="trace-28865"></a>
<a id="trace-28867"></a>
<a id="trace-28892"></a>
<a id="trace-28894"></a>
<a id="trace-28902"></a>
<a id="trace-28904"></a>
- 312.80s–313.80s (×6), actor 5, squad 0 (trace 28865): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 312.45s, trace 28852. Next observer evidence: {'until': 313.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6686632426833934, 'next_transition': 28892}.
<a id="trace-28914"></a>
- 314.05s–314.05s (×1), actor 1, squad 0 (trace 28914): MoveTactically. Knowledge: actor memory at 310.00s, trace 28707. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511847070822826, 'next_transition': 28924}.
<a id="trace-28915"></a>
- 314.05s–314.05s (×1), actor 1, squad 0 (trace 28915): received platoon directive. Knowledge: actor memory at 310.00s, trace 28707. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511847070822826, 'next_transition': 28924}.
<a id="trace-28924"></a>
<a id="trace-28926"></a>
<a id="trace-28943"></a>
<a id="trace-28945"></a>
<a id="trace-29019"></a>
<a id="trace-29021"></a>
<a id="trace-29030"></a>
<a id="trace-29032"></a>
<a id="trace-29052"></a>
<a id="trace-29054"></a>
<a id="trace-29064"></a>
<a id="trace-29066"></a>
<a id="trace-29084"></a>
<a id="trace-29086"></a>
<a id="trace-29102"></a>
<a id="trace-29104"></a>
<a id="trace-29117"></a>
<a id="trace-29119"></a>
<a id="trace-29134"></a>
<a id="trace-29136"></a>
<a id="trace-29150"></a>
<a id="trace-29152"></a>
<a id="trace-29161"></a>
<a id="trace-29163"></a>
<a id="trace-29238"></a>
<a id="trace-29240"></a>
<a id="trace-29252"></a>
<a id="trace-29254"></a>
<a id="trace-29272"></a>
<a id="trace-29274"></a>
<a id="trace-29283"></a>
<a id="trace-29285"></a>
<a id="trace-29299"></a>
<a id="trace-29301"></a>
<a id="trace-29311"></a>
<a id="trace-29313"></a>
<a id="trace-29326"></a>
<a id="trace-29328"></a>
- 314.30s–323.30s (×38), actor 5, squad 0 (trace 28924): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 312.45s, trace 28852. Next observer evidence: {'until': 314.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4535977782622443, 'next_transition': 28943}.
<a id="trace-2798"></a>
- 319.95s–319.95s (×1), actor 5, squad 1 (events line 2798): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29171"></a>
- 319.95s–319.95s (×1), actor 5, squad 1 (trace 29171): renew committed intent (75 s lifetime). Knowledge: actor memory at 319.95s, trace 29171. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-29336"></a>
- 323.70s–323.70s (×1), actor 1, squad 0 (trace 29336): ReactToContact: cover and return fire. Knowledge: actor memory at 320.00s, trace 29172. Next observer evidence: {'until': 323.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1512161266017765, 'next_transition': 29404}.
<a id="trace-29337"></a>
- 323.70s–323.70s (×1), actor 1, squad 0 (trace 29337): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 320.00s, trace 29172. Next observer evidence: {'until': 323.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1512161266017765, 'next_transition': 29404}.
<a id="trace-29404"></a>
<a id="trace-29406"></a>
<a id="trace-29427"></a>
<a id="trace-29429"></a>
<a id="trace-29441"></a>
<a id="trace-29443"></a>
<a id="trace-29527"></a>
<a id="trace-29529"></a>
<a id="trace-29542"></a>
<a id="trace-29544"></a>
<a id="trace-29586"></a>
<a id="trace-29588"></a>
<a id="trace-29609"></a>
<a id="trace-29611"></a>
<a id="trace-29625"></a>
<a id="trace-29627"></a>
- 323.80s–327.30s (×16), actor 5, squad 0 (trace 29404): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 29173. Next observer evidence: {'until': 324.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30240018004109853, 'next_transition': 29427}.
<a id="trace-29634"></a>
- 327.30s–327.30s (×1), actor 1, squad 0 (trace 29634): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 325.00s, trace 29458. Next observer evidence: {'until': 327.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15120009002054927, 'next_transition': 29661}.
<a id="trace-29636"></a>
- 327.30s–327.30s (×1), actor 1, squad 0 (trace 29636): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 325.00s, trace 29458. Next observer evidence: {'until': 327.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15120009002054927, 'next_transition': 29661}.
<a id="trace-29661"></a>
<a id="trace-29663"></a>
<a id="trace-29684"></a>
<a id="trace-29686"></a>
<a id="trace-29695"></a>
<a id="trace-29697"></a>
<a id="trace-29712"></a>
<a id="trace-29714"></a>
<a id="trace-29721"></a>
<a id="trace-29723"></a>
<a id="trace-29799"></a>
<a id="trace-29801"></a>
<a id="trace-29812"></a>
<a id="trace-29814"></a>
<a id="trace-29829"></a>
<a id="trace-29831"></a>
<a id="trace-29838"></a>
<a id="trace-29840"></a>
<a id="trace-29858"></a>
<a id="trace-29860"></a>
- 327.80s–332.30s (×20), actor 5, squad 0 (trace 29661): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 29459. Next observer evidence: {'until': 328.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29684}.
<a id="trace-2967"></a>
- 332.45s–332.45s (×1), actor 5, squad 0 (events line 2967): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29869"></a>
- 332.45s–332.45s (×1), actor 5, squad 0 (trace 29869): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.357557 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 332.45s, trace 29869. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29879}.
<a id="trace-29870"></a>
- 332.45s–332.45s (×1), actor 5, squad 0 (trace 29870): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.357557 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 332.45s, trace 29870. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29879}.
<a id="trace-29879"></a>
<a id="trace-29881"></a>
<a id="trace-29896"></a>
<a id="trace-29898"></a>
<a id="trace-29908"></a>
<a id="trace-29910"></a>
- 332.80s–333.80s (×6), actor 5, squad 0 (trace 29879): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 332.45s, trace 29870. Next observer evidence: {'until': 333.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29896}.
<a id="trace-29918"></a>
- 334.05s–334.05s (×1), actor 1, squad 0 (trace 29918): received platoon directive; retain held slots. Knowledge: actor memory at 330.00s, trace 29732. Next observer evidence: {'until': 334.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29930}.
<a id="trace-29930"></a>
<a id="trace-29932"></a>
<a id="trace-29941"></a>
<a id="trace-29943"></a>
<a id="trace-30018"></a>
<a id="trace-30020"></a>
<a id="trace-30031"></a>
<a id="trace-30033"></a>
<a id="trace-30045"></a>
<a id="trace-30047"></a>
<a id="trace-30056"></a>
<a id="trace-30058"></a>
<a id="trace-30074"></a>
<a id="trace-30076"></a>
- 334.30s–337.30s (×14), actor 5, squad 0 (trace 29930): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 332.45s, trace 29870. Next observer evidence: {'until': 334.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29941}.
<a id="trace-3084"></a>
- 337.45s–337.45s (×1), actor 5, squad 0 (events line 3084): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30082"></a>
- 337.45s–337.45s (×1), actor 5, squad 0 (trace 30082): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 337.45s, trace 30082. Next observer evidence: {'until': 337.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30090}.
<a id="trace-30083"></a>
- 337.45s–337.45s (×1), actor 5, squad 0 (trace 30083): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 337.45s, trace 30083. Next observer evidence: {'until': 337.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30090}.
<a id="trace-30090"></a>
<a id="trace-30092"></a>
<a id="trace-30104"></a>
<a id="trace-30106"></a>
- 337.80s–338.30s (×4), actor 5, squad 0 (trace 30090): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 337.45s, trace 30083. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30104}.
<a id="trace-30115"></a>
- 338.70s–338.70s (×1), actor 1, squad 0 (trace 30115): NeedSupport. Knowledge: actor memory at 335.00s, trace 29952. Next observer evidence: {'until': 338.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30123}.
<a id="trace-30123"></a>
<a id="trace-30125"></a>
- 338.80s–338.80s (×2), actor 5, squad 0 (trace 30123): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 337.45s, trace 30083. Next observer evidence: {'until': 339, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30135}.
<a id="trace-30135"></a>
- 339.05s–339.05s (×1), actor 1, squad 0 (trace 30135): received platoon directive; retain held slots. Knowledge: actor memory at 335.00s, trace 29952. Next observer evidence: {'until': 339.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30147}.
<a id="trace-30147"></a>
<a id="trace-30149"></a>
<a id="trace-30159"></a>
<a id="trace-30161"></a>
<a id="trace-30239"></a>
<a id="trace-30241"></a>
<a id="trace-30250"></a>
<a id="trace-30252"></a>
<a id="trace-30270"></a>
<a id="trace-30272"></a>
<a id="trace-30281"></a>
<a id="trace-30283"></a>
<a id="trace-30299"></a>
<a id="trace-30301"></a>
- 339.30s–342.30s (×14), actor 5, squad 0 (trace 30147): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 337.45s, trace 30083. Next observer evidence: {'until': 339.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30159}.
<a id="trace-3203"></a>
- 342.45s–342.45s (×1), actor 5, squad 0 (events line 3203): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30310"></a>
- 342.45s–342.45s (×1), actor 5, squad 0 (trace 30310): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.45s, trace 30310. Next observer evidence: {'until': 342.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30317}.
<a id="trace-30311"></a>
- 342.45s–342.45s (×1), actor 5, squad 0 (trace 30311): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.45s, trace 30311. Next observer evidence: {'until': 342.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30317}.
<a id="trace-30317"></a>
<a id="trace-30319"></a>
<a id="trace-30332"></a>
<a id="trace-30334"></a>
<a id="trace-30342"></a>
<a id="trace-30344"></a>
- 342.80s–343.80s (×6), actor 5, squad 0 (trace 30317): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 342.45s, trace 30311. Next observer evidence: {'until': 343.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30332}.
<a id="trace-30355"></a>
- 344.05s–344.05s (×1), actor 1, squad 0 (trace 30355): received platoon directive; retain held slots. Knowledge: actor memory at 340.00s, trace 30168. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30364}.
<a id="trace-30364"></a>
<a id="trace-30366"></a>
<a id="trace-30376"></a>
<a id="trace-30378"></a>
<a id="trace-30453"></a>
<a id="trace-30455"></a>
<a id="trace-30465"></a>
<a id="trace-30467"></a>
<a id="trace-30484"></a>
<a id="trace-30486"></a>
<a id="trace-30495"></a>
<a id="trace-30497"></a>
<a id="trace-30512"></a>
<a id="trace-30514"></a>
- 344.30s–347.30s (×14), actor 5, squad 0 (trace 30364): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 342.45s, trace 30311. Next observer evidence: {'until': 344.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30376}.
<a id="trace-3320"></a>
- 347.45s–347.45s (×1), actor 5, squad 0 (events line 3320): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30523"></a>
- 347.45s–347.45s (×1), actor 5, squad 0 (trace 30523): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 347.45s, trace 30523. Next observer evidence: {'until': 347.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30533}.
<a id="trace-30524"></a>
- 347.45s–347.45s (×1), actor 5, squad 0 (trace 30524): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 347.45s, trace 30524. Next observer evidence: {'until': 347.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30533}.
<a id="trace-30533"></a>
<a id="trace-30535"></a>
<a id="trace-30549"></a>
<a id="trace-30551"></a>
<a id="trace-30560"></a>
<a id="trace-30562"></a>
- 347.80s–348.80s (×6), actor 5, squad 0 (trace 30533): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 347.45s, trace 30524. Next observer evidence: {'until': 348.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30549}.
<a id="trace-30569"></a>
- 349.05s–349.05s (×1), actor 1, squad 0 (trace 30569): received platoon directive; retain held slots. Knowledge: actor memory at 345.00s, trace 30386. Next observer evidence: {'until': 349.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30579}.
<a id="trace-30579"></a>
<a id="trace-30581"></a>
<a id="trace-30590"></a>
<a id="trace-30592"></a>
<a id="trace-30669"></a>
<a id="trace-30671"></a>
<a id="trace-30682"></a>
<a id="trace-30684"></a>
<a id="trace-30698"></a>
<a id="trace-30700"></a>
<a id="trace-30710"></a>
<a id="trace-30712"></a>
<a id="trace-30727"></a>
<a id="trace-30729"></a>
- 349.30s–352.30s (×14), actor 5, squad 0 (trace 30579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 347.45s, trace 30524. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30590}.
<a id="trace-3437"></a>
- 352.45s–352.45s (×1), actor 5, squad 0 (events line 3437): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30737"></a>
- 352.45s–352.45s (×1), actor 5, squad 0 (trace 30737): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 352.45s, trace 30737. Next observer evidence: {'until': 352.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30748}.
<a id="trace-30738"></a>
- 352.45s–352.45s (×1), actor 5, squad 0 (trace 30738): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.348435 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 352.45s, trace 30738. Next observer evidence: {'until': 352.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30748}.
<a id="trace-30748"></a>
<a id="trace-30750"></a>
<a id="trace-30769"></a>
<a id="trace-30771"></a>
<a id="trace-30781"></a>
<a id="trace-30783"></a>
<a id="trace-30809"></a>
<a id="trace-30811"></a>
<a id="trace-30838"></a>
<a id="trace-30840"></a>
- 352.80s–354.80s (×10), actor 5, squad 0 (trace 30748): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 352.45s, trace 30738. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.030699999999999505, 'next_transition': 30769}.
<a id="trace-30846"></a>
- 354.85s–354.85s (×1), actor 1, squad 0 (trace 30846): received platoon directive; retain held slots. Knowledge: actor memory at 350.00s, trace 30602. Next observer evidence: {'until': 355.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28283333333333377, 'next_transition': 30917}.
<a id="trace-30917"></a>
<a id="trace-30919"></a>
<a id="trace-30929"></a>
<a id="trace-30931"></a>
<a id="trace-30959"></a>
<a id="trace-30961"></a>
<a id="trace-30979"></a>
<a id="trace-30981"></a>
<a id="trace-30998"></a>
<a id="trace-31000"></a>
<a id="trace-31011"></a>
<a id="trace-31013"></a>
<a id="trace-31029"></a>
<a id="trace-31031"></a>
- 355.30s–358.30s (×14), actor 5, squad 0 (trace 30917): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 355.00s, trace 30849. Next observer evidence: {'until': 355.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16526666666666637, 'next_transition': 30929}.
<a id="trace-3599"></a>
- 358.70s–358.70s (×1), actor 5, squad 0 (events line 3599): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31038"></a>
- 358.70s–358.70s (×1), actor 5, squad 0 (trace 31038): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.351652 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 358.70s, trace 31038. Next observer evidence: {'until': 358.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31042}.
<a id="trace-31039"></a>
- 358.70s–358.70s (×1), actor 5, squad 0 (trace 31039): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.351652 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 358.70s, trace 31039. Next observer evidence: {'until': 358.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31042}.
<a id="trace-31042"></a>
<a id="trace-31044"></a>
<a id="trace-31062"></a>
<a id="trace-31064"></a>
<a id="trace-31073"></a>
<a id="trace-31075"></a>
- 358.80s–359.80s (×6), actor 5, squad 0 (trace 31042): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 358.70s, trace 31039. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31062}.

## Net delivery

285 matched order/radio deliveries; 494 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.309s; maximum 2.000s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 28.55s leader 5, trace 3019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 3714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3716: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3717: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3718: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3719: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3720: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3721: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3722: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3723: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3724: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3725: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4505: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 4507: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4509: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4510: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4511: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4512: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4513: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4514: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4515: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4516: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4517: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4518: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 4690: estimate 8.38; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 4691: estimate 8.38; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 4692: estimate 8.38; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 4693: estimate 8.38; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5211: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5215: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5216: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 5218: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5219: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5220: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5221: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5222: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5223: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5224: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5225: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5226: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5227: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5228: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5229: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5739: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 5740: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 5741: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5743: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5744: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 5746: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 5747: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5748: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5749: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 5750: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 5751: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5752: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 5753: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 5754: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 5755: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 5756: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 5757: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 6076: estimate 8.31; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 6077: estimate 8.31; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7189: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7190: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7192: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7193: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 7195: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 7196: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7197: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7198: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7199: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7200: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7201: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7202: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7203: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7204: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 7205: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 7206: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.85s leader 5, trace 7292: estimate 9.77; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.85s leader 5, trace 7293: estimate 9.77; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.10s leader 5, trace 7350: estimate 9.73; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.10s leader 5, trace 7351: estimate 9.73; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9960: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9961: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9963: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9964: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 9966: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 9967: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9968: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9969: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9970: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9971: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9972: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9973: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9974: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9975: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 9976: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 9977: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 10258: estimate 9.74; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 10259: estimate 9.74; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 13519: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 13520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 13521: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 13522: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 13523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 13524: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 13525: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 13526: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 13527: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 13528: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 13529: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 13530: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 13531: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 13532: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 13533: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 13534: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 13535: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 13664: estimate 9.67; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 13665: estimate 9.67; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 13955: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 13956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 13957: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 13958: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 13959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 13960: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 13961: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 13962: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 13963: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 13964: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 13965: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 13966: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 13967: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 13968: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 13969: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 13970: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 13971: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 14206: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 14207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 14208: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 14209: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 14210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 14211: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 14212: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 14213: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 14214: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 14215: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 14216: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 14217: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 14218: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 14219: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 14220: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 14221: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.35s leader 5, trace 14286: estimate 9.63; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.35s leader 5, trace 14287: estimate 9.63; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 14454: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 14455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 14456: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 14457: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 14458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 14459: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 14460: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 14461: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 14462: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 14463: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 14464: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 14465: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 14466: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 14467: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 14468: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 14469: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.35s leader 5, trace 14573: estimate 9.64; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.35s leader 5, trace 14574: estimate 9.64; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 14700: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 14701: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 14702: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 14703: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 14704: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 14705: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 14706: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 14707: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 14708: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 14709: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14710: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14711: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14712: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14713: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 14714: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 14715: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 15041: estimate 9.56; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 15042: estimate 9.56; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 15043: estimate 9.56; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 15044: estimate 9.56; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 15130: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 15131: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 15132: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 15133: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 15134: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 15135: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 15136: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 15137: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 15138: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 15139: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 15140: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 15141: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 15142: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 15143: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 15144: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 15145: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.35s leader 5, trace 16178: estimate 9.50; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.35s leader 5, trace 16179: estimate 9.50; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.20s leader 5, trace 16212: estimate 9.47; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 16324: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 16325: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 16326: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 16327: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 16328: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 16329: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 16330: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 16331: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 16332: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 16333: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 16334: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 16335: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 16336: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 16337: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 16338: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 16811: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 16812: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 16813: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 16814: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 16815: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 16816: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 16817: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 16818: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 16819: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 16820: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 16821: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 16822: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 16823: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 16824: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 16825: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 16894: estimate 9.46; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 16895: estimate 9.46; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 17978: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 17979: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 17980: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 17981: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 17982: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 17983: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 17984: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 17985: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 17986: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 17987: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 17988: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 17989: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 17990: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 17991: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 106.55s leader 5, trace 18116: estimate 9.47; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 106.55s leader 5, trace 18117: estimate 9.47; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 18327: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 18328: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 18329: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 18330: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 18331: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 18332: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 18333: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 18334: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 18335: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 18336: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 18337: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 18338: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 18339: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 18340: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 18717: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 18718: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 18719: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 18720: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 18721: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 18722: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 18723: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 18724: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 18725: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 18726: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 18727: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 18728: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 18729: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 18730: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 18957: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 18958: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 18959: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 18960: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 18961: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 18962: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 18963: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 18964: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 18965: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 18966: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 18967: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 18968: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 18969: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 18970: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 19188: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19189: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 19190: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 19191: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 19192: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 19193: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19194: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19195: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19196: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19197: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19198: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19199: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19200: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19201: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 19476: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 19477: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 19478: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 19479: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 19480: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 19481: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 19482: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 19483: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 19484: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 19485: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 19486: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 19487: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 19488: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 19489: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 19698: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 19699: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 19700: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 19701: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 19702: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 19703: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 19704: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 19705: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 19706: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 19707: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 19708: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 19709: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 19710: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 19711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 139.25s leader 5, trace 19950: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 139.25s leader 5, trace 19951: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 20724: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 20725: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 20726: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 20727: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 20728: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 20729: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 20730: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 20731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 20732: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 20733: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 20734: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 20735: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 20736: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 20737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.05s leader 5, trace 21017: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 144.05s leader 5, trace 21018: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 21056: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 21057: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 21058: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 21059: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 21060: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 21061: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 21062: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 21063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 21064: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 21065: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 21066: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 21067: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 21068: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 21069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 21354: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 21355: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 21356: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 21357: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 21358: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 21359: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 21360: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 21361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 21362: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 21363: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 21364: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 21365: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 21366: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 21367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 21576: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 21577: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 21578: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 21579: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 21580: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 21581: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 21582: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 21583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 21584: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 21585: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 21586: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 21587: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 21588: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 21589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 21948: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 21949: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 21950: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 21951: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 21952: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 21953: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 21954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 21955: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 21956: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 21957: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 21958: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 21959: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 21960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 22216: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 22217: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 22218: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 22219: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 22220: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 22221: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 22222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 22223: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 22224: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 22225: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 22226: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 22227: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 22228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 22420: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 22421: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 22422: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 22423: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 22424: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 22425: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 22426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 22427: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 22428: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 22429: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 22430: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 22431: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 22432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 22628: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 22629: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 22630: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 22631: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 22632: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 22633: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 22634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 22635: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 22636: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 22637: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 22638: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 22639: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 22640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 22832: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 22833: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 22834: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 22835: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 22836: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 22837: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 22838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 22839: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 22840: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 22841: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 22842: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 22843: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 22844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 23051: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 23052: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 23053: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 23054: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 23055: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 23056: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 23057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 23058: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 23059: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 23060: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 23061: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 23062: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 23063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 23252: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 23253: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 23254: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 23255: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 23256: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 23257: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 23258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 23259: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 23260: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 23261: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 23262: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 23263: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 23264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 23461: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 23462: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 23463: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 23464: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 23465: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 23466: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 23467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 23468: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 23469: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 23470: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 23471: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 23472: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 23473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 199.25s leader 5, trace 23635: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 23662: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 23663: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 23664: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 23665: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 23666: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 23667: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 23668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 23669: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 23670: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 23671: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 23672: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 23673: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 23674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.05s leader 5, trace 23838: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 23872: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 23873: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 23874: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 23875: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 23876: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 23877: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 23878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 23879: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 23880: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 23881: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 23882: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 23883: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 23884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 207.00s leader 5, trace 23990: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 207.00s leader 5, trace 23991: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 24138: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 24139: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 24140: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 24141: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 24142: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 24143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 24144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 24145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 24146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 24147: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 24148: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 24149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 24150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 24365: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 24366: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 24367: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 24368: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 24369: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 24370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 24371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 24372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 24373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 24374: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 24375: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 24376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 24377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 24629: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 24630: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 24631: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 24632: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 24633: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 24634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 24635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 24636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 24637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 24638: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 24639: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 24640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 24641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 24843: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 24844: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 24845: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 24846: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 24847: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 24848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 24849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 24850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 24851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 24852: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 24853: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 24854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 24855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 25045: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 25046: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 25047: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 25048: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 25049: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 25050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 25051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 25052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 25053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 25054: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 25055: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 25056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 25057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 25237: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 25238: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 25239: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 25240: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 25241: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 25242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 25243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 25244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 25245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 25246: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 25247: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 25248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 25249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 25418: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 25419: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 25420: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 25421: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 25422: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 25423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 25424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 25425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 25426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 25427: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 25428: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 25429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 25430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 25609: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 25610: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 25611: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 25612: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 25613: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 25614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 25615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 25616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 25617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 25618: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 25619: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 25620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 25621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 25804: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 25805: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 25806: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 25807: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 25808: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 25809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 25810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 25811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 25812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 25813: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 25814: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 25815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 25816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 25986: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 25987: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 25988: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 8, trace 25989: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 25990: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 25991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 25992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 25993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 25994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 25995: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 25996: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 25997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 25998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.95s leader 5, trace 26171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.95s leader 5, trace 26172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.95s leader 5, trace 26173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 26174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 26175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 26176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 8, trace 26177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 26178: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 26179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 26180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 26181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 26182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 26183: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 26184: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 26185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 26186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 26438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 26439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 26440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 8, trace 26441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 26442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 26443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 26444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 26445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 26446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 26447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 26448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 26449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 26450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 26706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 26707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 26708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 8, trace 26709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 26710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 26711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 26712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 26713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 26714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 26715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 26716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 26717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 26718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 26923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 26924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 26925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 8, trace 26926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 26927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 26928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 26929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 26930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 26931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 26932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 26933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 26934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 26935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 27194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 27195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 27196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 8, trace 27197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 27198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 27199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 27200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 27201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 27202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 27203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 27204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 27205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 27206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 27469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 27470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 27471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 8, trace 27472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 27473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 27474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 27475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 27476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 27477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 27478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 27479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 27480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 27481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 27685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 27686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 27687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 8, trace 27688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 27689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 27690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 27691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 27692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 27693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 27694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 27695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 27696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 27697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 292.45s leader 5, trace 27824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 292.45s leader 5, trace 27825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 27952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 27953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 27954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 8, trace 27955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 27956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 27957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 27958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 27959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 27960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 27961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 27962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 27963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 27964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 28169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 28170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 28171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 8, trace 28172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 28173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 28174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 28175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 28176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 28177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 28178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 28179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 28180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 28181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 28418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 28419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 28420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 8, trace 28421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 28422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 28423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 28424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 28425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 28426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 28427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 28428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 28429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 28430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 28707: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 28708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 28709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 8, trace 28710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 28711: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 28712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 28713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 28714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 28715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 28716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 28717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 28718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 28719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.45s leader 5, trace 28851: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.45s leader 5, trace 28852: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 28952: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 28953: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 28954: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 8, trace 28955: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 28956: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 28957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 28958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 28959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 28960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 28961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 28962: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 28963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 28964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 319.95s leader 5, trace 29171: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 29172: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 29173: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 29174: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 8, trace 29175: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 29176: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 29177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 29178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 29179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 29180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 29181: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 29182: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 29183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 29184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 29458: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 29459: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 29460: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 8, trace 29461: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 29462: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 29463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 29464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 29465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 29466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 29467: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 29468: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 29469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 29470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 29732: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 29733: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 29734: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 8, trace 29735: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 29736: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 29737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 29738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 29739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 29740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 29741: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 29742: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 29743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 29744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 332.45s leader 5, trace 29869: estimate 1.47; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 332.45s leader 5, trace 29870: estimate 1.47; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 29952: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 29953: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 29954: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 8, trace 29955: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 29956: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 29957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 29958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 29959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 29960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 29961: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 29962: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 29963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 29964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 337.45s leader 5, trace 30082: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 337.45s leader 5, trace 30083: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 30168: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 30169: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 30170: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 8, trace 30171: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 30172: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 30173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 30174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 30175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 30176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 30177: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 30178: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 30179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 30180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.45s leader 5, trace 30310: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.45s leader 5, trace 30311: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 30386: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 30387: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 30388: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 8, trace 30389: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 30390: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 30391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 30392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 30393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 30394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 30395: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 30396: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 30397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 30398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 347.45s leader 5, trace 30523: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 347.45s leader 5, trace 30524: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 30602: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 30603: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 30604: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 8, trace 30605: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 30606: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 30607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 30608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 30609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 30610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 30611: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 30612: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 30613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 30614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 352.45s leader 5, trace 30737: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 352.45s leader 5, trace 30738: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 30848: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 30849: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 30850: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 8, trace 30851: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 30852: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 30853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 30854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 30855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 30856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 30857: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 30858: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 30859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 30860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.70s leader 5, trace 31038: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.70s leader 5, trace 31039: estimate 1.48; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 31081: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 31082: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 31083: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 8, trace 31084: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 31085: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 31086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 31087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 31088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 31089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 31090: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 31091: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 31092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 31093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Ash killed in action
- 1: Soren killed in action
- 1: Quill killed in action
- 1: Tern killed in action
- 1: Cole killed in action
- 1: Reed incapacitated

## Outcome attribution

- 139.25s, evidence 1817: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20821}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 139.25s, evidence 19950: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.351973 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20821}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 139.25s, evidence 19951: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.351973 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20821}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 144.05s, evidence 1859: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574991607120489, 'next_transition': 21033}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 144.05s, evidence 21017: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358683 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574991607120489, 'next_transition': 21033}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 144.05s, evidence 21018: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358683 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574991607120489, 'next_transition': 21033}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 199.25s, evidence 2185: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2440}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 204.05s, evidence 2207: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23849}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 259.95s, evidence 2440: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 319.95s, evidence 2798: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
