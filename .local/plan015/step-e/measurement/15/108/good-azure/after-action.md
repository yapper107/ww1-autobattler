# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/15/108/good-azure/battle-108-1789673970279864113`

## Battle summary

**Ember** · 360 s · 745 shots.

### Turning points

- 23.0s, squad 4: contact (events line 291). First recorded contact.
- 46.1s, squad 1: help call ([trace 14203](#trace-14203)). 48.2s, squad 0: answered a neighbour with support by fire.
- 48.2s, squad 0: help answer ([trace 14468](#trace-14468)). 60.5s, squad 0: prepared a base of fire.
- 57.4s, squad 0: help call ([trace 17273](#trace-17273)). 58.8s, squad 1: answered a neighbour with support by fire.
- 58.8s, squad 1: help answer ([trace 17392](#trace-17392)). 62.5s, squad 1: took cover and returned fire.
- 67.1s, squad 1: withdrawal ([trace 21793](#trace-21793)). 107.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 87.0s, squad 1: help call ([trace 27041](#trace-27041)). 88.8s, squad 0: answered a neighbour with support by fire.
- 88.8s, squad 0: help answer ([trace 27481](#trace-27481)). 104.4s, squad 0: took cover and returned fire.
- 111.5s, squad 0: withdrawal ([trace 31158](#trace-31158)). 130.8s, squad 0: took cover and returned fire.
- 134.5s, squad 0: withdrawal ([trace 33145](#trace-33145)). 207.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 3 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 5 further drill types; withdrew; 86 shots, 7/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 35 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 388 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 236 shots, 0/4 lost.

### Decisions and attribution

At 58.8s, squad 1 chose answered a neighbour with support by fire ([trace 17392](#trace-17392)), followed by 2 shots and 1 own casualties; estimate 14.2 against 0 distinct squad-reported contacts; At 26.5s, squad 1 chose took cover and returned fire ([trace 3590](#trace-3590)), followed by 4 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 67.1s, squad 1 chose broke contact ([trace 21793](#trace-21793)), followed by 4 shots and 0 own casualties; estimate 14.2 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 831](#trace-831)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9445755043207733, 'next_transition': 850}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 833](#trace-833)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.054271614935352, 'next_transition': 1006}.

### Communication

239 matched deliveries (mean 0.40s, max 2.05s); 496 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 23.00s, squad 4, contact, evidence events line 291: First recorded contact; .
- 46.10s, squad 1, help call, evidence 14203: NeedSupport; 48.2s, squad 0: answered a neighbour with support by fire.
- 48.20s, squad 0, help answer, evidence 14468: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 60.5s, squad 0: prepared a base of fire.
- 57.35s, squad 0, help call, evidence 17273: NeedSupport; 58.8s, squad 1: answered a neighbour with support by fire.
- 58.75s, squad 1, help answer, evidence 17392: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 62.5s, squad 1: took cover and returned fire.
- 67.10s, squad 1, withdrawal, evidence 21793: BreakContact: believed ratio at least two without superiority; 107.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 87.00s, squad 1, help call, evidence 27041: NeedSupport; 88.8s, squad 0: answered a neighbour with support by fire.
- 88.80s, squad 0, help answer, evidence 27481: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 104.4s, squad 0: took cover and returned fire.
- 111.50s, squad 0, withdrawal, evidence 31158: BreakContact: believed ratio at least two without superiority; 130.8s, squad 0: took cover and returned fire.
- 134.50s, squad 0, withdrawal, evidence 33145: BreakContact: believed ratio at least two without superiority; 207.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 137.85s, squad 1, withdrawal, evidence 33453: Withdraw to received rally; No completion observed before termination.
- 305.85s, squad 0, withdrawal, evidence 41064: BreakContact: believed ratio at least two without superiority; 325.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 349.05s, squad 0, withdrawal, evidence 42595: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791588208486038, 'next_transition': 702}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791588208486038, 'next_transition': 702}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.791588208486038, 'next_transition': 702}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54449005858466, 'next_transition': 105}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54449005858466, 'next_transition': 105}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54449005858466, 'next_transition': 105}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-731"></a>
<a id="trace-733"></a>
<a id="trace-768"></a>
<a id="trace-770"></a>
<a id="trace-795"></a>
<a id="trace-797"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600170955451082, 'next_transition': 731}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9445755043207733, 'next_transition': 850}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.054271614935352, 'next_transition': 1006}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9445755043207733, 'next_transition': 850}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9445755043207733, 'next_transition': 850}.
<a id="trace-833"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 833): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.054271614935352, 'next_transition': 1006}.
<a id="trace-834"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 834): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.054271614935352, 'next_transition': 1006}.
<a id="trace-850"></a>
<a id="trace-852"></a>
<a id="trace-881"></a>
<a id="trace-883"></a>
<a id="trace-964"></a>
<a id="trace-966"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 850): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9444319242167485, 'next_transition': 881}.
<a id="trace-995"></a>
<a id="trace-997"></a>
<a id="trace-1552"></a>
<a id="trace-1554"></a>
<a id="trace-1604"></a>
<a id="trace-1606"></a>
<a id="trace-1645"></a>
<a id="trace-1647"></a>
<a id="trace-1696"></a>
<a id="trace-1698"></a>
<a id="trace-1736"></a>
<a id="trace-1738"></a>
<a id="trace-1803"></a>
<a id="trace-1805"></a>
<a id="trace-1831"></a>
<a id="trace-1833"></a>
<a id="trace-1952"></a>
<a id="trace-1954"></a>
<a id="trace-1982"></a>
<a id="trace-1984"></a>
<a id="trace-2006"></a>
<a id="trace-2008"></a>
<a id="trace-2043"></a>
<a id="trace-2045"></a>
<a id="trace-2072"></a>
<a id="trace-2074"></a>
<a id="trace-2110"></a>
<a id="trace-2112"></a>
<a id="trace-2134"></a>
<a id="trace-2136"></a>
<a id="trace-2189"></a>
<a id="trace-2191"></a>
<a id="trace-2219"></a>
<a id="trace-2221"></a>
<a id="trace-2306"></a>
<a id="trace-2308"></a>
<a id="trace-2338"></a>
<a id="trace-2340"></a>
<a id="trace-2607"></a>
<a id="trace-2609"></a>
<a id="trace-2673"></a>
<a id="trace-2675"></a>
<a id="trace-2966"></a>
<a id="trace-2968"></a>
<a id="trace-3007"></a>
<a id="trace-3009"></a>
<a id="trace-3061"></a>
<a id="trace-3063"></a>
<a id="trace-3088"></a>
<a id="trace-3090"></a>
<a id="trace-3185"></a>
<a id="trace-3187"></a>
<a id="trace-3212"></a>
<a id="trace-3214"></a>
<a id="trace-3241"></a>
<a id="trace-3243"></a>
<a id="trace-3269"></a>
<a id="trace-3271"></a>
<a id="trace-3312"></a>
<a id="trace-3314"></a>
<a id="trace-3333"></a>
<a id="trace-3335"></a>
<a id="trace-3391"></a>
<a id="trace-3393"></a>
<a id="trace-3424"></a>
<a id="trace-3426"></a>
<a id="trace-3536"></a>
<a id="trace-3538"></a>
<a id="trace-3553"></a>
<a id="trace-3555"></a>
<a id="trace-3582"></a>
<a id="trace-3584"></a>
<a id="trace-3877"></a>
<a id="trace-3879"></a>
<a id="trace-4238"></a>
<a id="trace-4240"></a>
<a id="trace-4264"></a>
<a id="trace-4266"></a>
<a id="trace-4311"></a>
<a id="trace-4313"></a>
<a id="trace-4345"></a>
<a id="trace-4347"></a>
<a id="trace-7445"></a>
<a id="trace-7447"></a>
<a id="trace-10299"></a>
<a id="trace-10301"></a>
<a id="trace-10349"></a>
<a id="trace-10351"></a>
<a id="trace-10387"></a>
<a id="trace-10389"></a>
<a id="trace-10521"></a>
<a id="trace-10523"></a>
<a id="trace-10546"></a>
<a id="trace-10548"></a>
<a id="trace-10640"></a>
<a id="trace-10642"></a>
<a id="trace-10663"></a>
<a id="trace-10665"></a>
<a id="trace-10698"></a>
<a id="trace-10700"></a>
<a id="trace-10724"></a>
<a id="trace-10726"></a>
<a id="trace-10749"></a>
<a id="trace-10751"></a>
<a id="trace-10785"></a>
<a id="trace-10787"></a>
<a id="trace-10813"></a>
<a id="trace-10815"></a>
<a id="trace-10863"></a>
<a id="trace-10865"></a>
<a id="trace-10901"></a>
<a id="trace-10903"></a>
<a id="trace-11017"></a>
<a id="trace-11019"></a>
<a id="trace-11083"></a>
<a id="trace-11085"></a>
<a id="trace-11142"></a>
<a id="trace-11144"></a>
<a id="trace-13839"></a>
<a id="trace-13841"></a>
<a id="trace-13876"></a>
<a id="trace-13878"></a>
<a id="trace-13930"></a>
<a id="trace-13932"></a>
<a id="trace-13989"></a>
<a id="trace-13991"></a>
<a id="trace-14110"></a>
<a id="trace-14112"></a>
<a id="trace-14172"></a>
<a id="trace-14174"></a>
<a id="trace-14242"></a>
<a id="trace-14244"></a>
<a id="trace-14307"></a>
<a id="trace-14309"></a>
<a id="trace-14376"></a>
<a id="trace-14378"></a>
<a id="trace-14432"></a>
<a id="trace-14434"></a>
<a id="trace-16189"></a>
<a id="trace-16191"></a>
<a id="trace-16233"></a>
<a id="trace-16235"></a>
<a id="trace-16263"></a>
<a id="trace-16265"></a>
<a id="trace-16294"></a>
<a id="trace-16296"></a>
<a id="trace-16395"></a>
<a id="trace-16397"></a>
<a id="trace-16420"></a>
<a id="trace-16422"></a>
<a id="trace-16454"></a>
<a id="trace-16456"></a>
<a id="trace-16483"></a>
<a id="trace-16485"></a>
<a id="trace-16512"></a>
<a id="trace-16514"></a>
<a id="trace-16534"></a>
<a id="trace-16536"></a>
<a id="trace-16554"></a>
<a id="trace-16556"></a>
<a id="trace-16568"></a>
<a id="trace-16570"></a>
<a id="trace-16693"></a>
<a id="trace-16695"></a>
<a id="trace-16949"></a>
<a id="trace-16951"></a>
<a id="trace-17051"></a>
<a id="trace-17053"></a>
<a id="trace-17088"></a>
<a id="trace-17090"></a>
<a id="trace-17145"></a>
<a id="trace-17147"></a>
<a id="trace-17201"></a>
<a id="trace-17203"></a>
<a id="trace-17260"></a>
<a id="trace-17262"></a>
<a id="trace-17322"></a>
<a id="trace-17324"></a>
<a id="trace-17389"></a>
<a id="trace-17391"></a>
<a id="trace-19135"></a>
<a id="trace-19137"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
<a id="trace-21059"></a>
<a id="trace-21061"></a>
<a id="trace-21119"></a>
<a id="trace-21121"></a>
<a id="trace-21163"></a>
<a id="trace-21165"></a>
<a id="trace-21368"></a>
<a id="trace-21370"></a>
<a id="trace-21393"></a>
<a id="trace-21395"></a>
<a id="trace-21428"></a>
<a id="trace-21430"></a>
<a id="trace-21482"></a>
<a id="trace-21484"></a>
<a id="trace-21713"></a>
<a id="trace-21715"></a>
<a id="trace-21962"></a>
<a id="trace-21964"></a>
<a id="trace-22013"></a>
<a id="trace-22015"></a>
<a id="trace-22044"></a>
<a id="trace-22046"></a>
<a id="trace-22068"></a>
<a id="trace-22070"></a>
<a id="trace-22196"></a>
<a id="trace-22198"></a>
<a id="trace-22237"></a>
<a id="trace-22239"></a>
<a id="trace-22302"></a>
<a id="trace-22304"></a>
<a id="trace-22367"></a>
<a id="trace-22369"></a>
<a id="trace-22422"></a>
<a id="trace-22424"></a>
<a id="trace-22481"></a>
<a id="trace-22483"></a>
<a id="trace-22538"></a>
<a id="trace-22540"></a>
<a id="trace-22584"></a>
<a id="trace-22586"></a>
<a id="trace-22627"></a>
<a id="trace-22629"></a>
<a id="trace-22737"></a>
<a id="trace-22739"></a>
<a id="trace-22763"></a>
<a id="trace-22765"></a>
<a id="trace-22785"></a>
<a id="trace-22787"></a>
<a id="trace-22825"></a>
<a id="trace-22827"></a>
<a id="trace-22871"></a>
<a id="trace-22873"></a>
<a id="trace-22904"></a>
<a id="trace-22906"></a>
<a id="trace-23391"></a>
<a id="trace-23393"></a>
<a id="trace-23433"></a>
<a id="trace-23435"></a>
<a id="trace-23483"></a>
<a id="trace-23485"></a>
<a id="trace-23518"></a>
<a id="trace-23520"></a>
<a id="trace-23642"></a>
<a id="trace-23644"></a>
<a id="trace-23684"></a>
<a id="trace-23686"></a>
<a id="trace-23709"></a>
<a id="trace-23711"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26630"></a>
<a id="trace-26632"></a>
<a id="trace-26683"></a>
<a id="trace-26685"></a>
<a id="trace-26750"></a>
<a id="trace-26752"></a>
<a id="trace-26804"></a>
<a id="trace-26806"></a>
<a id="trace-26934"></a>
<a id="trace-26936"></a>
<a id="trace-27001"></a>
<a id="trace-27003"></a>
<a id="trace-27032"></a>
<a id="trace-27034"></a>
<a id="trace-27070"></a>
<a id="trace-27072"></a>
<a id="trace-27426"></a>
<a id="trace-27428"></a>
<a id="trace-27470"></a>
<a id="trace-27472"></a>
<a id="trace-29311"></a>
<a id="trace-29313"></a>
<a id="trace-29360"></a>
<a id="trace-29362"></a>
<a id="trace-29506"></a>
<a id="trace-29508"></a>
<a id="trace-29544"></a>
<a id="trace-29546"></a>
<a id="trace-29599"></a>
<a id="trace-29601"></a>
<a id="trace-29650"></a>
<a id="trace-29652"></a>
<a id="trace-29670"></a>
<a id="trace-29672"></a>
<a id="trace-29716"></a>
<a id="trace-29718"></a>
<a id="trace-29753"></a>
<a id="trace-29755"></a>
<a id="trace-29842"></a>
<a id="trace-29844"></a>
<a id="trace-29864"></a>
<a id="trace-29866"></a>
<a id="trace-29896"></a>
<a id="trace-29898"></a>
<a id="trace-29917"></a>
<a id="trace-29919"></a>
<a id="trace-29935"></a>
<a id="trace-29937"></a>
<a id="trace-29951"></a>
<a id="trace-29953"></a>
<a id="trace-29977"></a>
<a id="trace-29979"></a>
<a id="trace-29994"></a>
<a id="trace-29996"></a>
<a id="trace-30007"></a>
<a id="trace-30009"></a>
<a id="trace-30083"></a>
<a id="trace-30085"></a>
<a id="trace-30094"></a>
<a id="trace-30096"></a>
<a id="trace-30113"></a>
<a id="trace-30115"></a>
<a id="trace-30153"></a>
<a id="trace-30155"></a>
<a id="trace-30172"></a>
<a id="trace-30174"></a>
<a id="trace-30186"></a>
<a id="trace-30188"></a>
<a id="trace-30214"></a>
<a id="trace-30216"></a>
<a id="trace-30638"></a>
<a id="trace-30640"></a>
<a id="trace-30790"></a>
<a id="trace-30792"></a>
<a id="trace-30874"></a>
<a id="trace-30876"></a>
<a id="trace-30913"></a>
<a id="trace-30915"></a>
<a id="trace-30939"></a>
<a id="trace-30941"></a>
<a id="trace-30970"></a>
<a id="trace-30972"></a>
<a id="trace-30989"></a>
<a id="trace-30991"></a>
<a id="trace-31013"></a>
<a id="trace-31015"></a>
<a id="trace-31107"></a>
<a id="trace-31109"></a>
<a id="trace-31129"></a>
<a id="trace-31131"></a>
<a id="trace-31146"></a>
<a id="trace-31148"></a>
<a id="trace-31486"></a>
<a id="trace-31488"></a>
<a id="trace-31510"></a>
<a id="trace-31512"></a>
<a id="trace-31553"></a>
<a id="trace-31555"></a>
<a id="trace-31571"></a>
<a id="trace-31573"></a>
<a id="trace-31599"></a>
<a id="trace-31601"></a>
<a id="trace-31621"></a>
<a id="trace-31623"></a>
<a id="trace-31701"></a>
<a id="trace-31703"></a>
<a id="trace-31764"></a>
<a id="trace-31766"></a>
<a id="trace-31813"></a>
<a id="trace-31815"></a>
<a id="trace-31858"></a>
<a id="trace-31860"></a>
<a id="trace-31885"></a>
<a id="trace-31887"></a>
<a id="trace-31902"></a>
<a id="trace-31904"></a>
<a id="trace-31937"></a>
<a id="trace-31939"></a>
<a id="trace-31952"></a>
<a id="trace-31954"></a>
<a id="trace-32033"></a>
<a id="trace-32035"></a>
<a id="trace-32044"></a>
<a id="trace-32046"></a>
<a id="trace-32111"></a>
<a id="trace-32113"></a>
<a id="trace-32131"></a>
<a id="trace-32133"></a>
<a id="trace-32153"></a>
<a id="trace-32155"></a>
<a id="trace-32165"></a>
<a id="trace-32167"></a>
<a id="trace-32188"></a>
<a id="trace-32190"></a>
<a id="trace-32201"></a>
<a id="trace-32203"></a>
<a id="trace-32280"></a>
<a id="trace-32282"></a>
<a id="trace-32293"></a>
<a id="trace-32295"></a>
<a id="trace-32316"></a>
<a id="trace-32318"></a>
<a id="trace-32596"></a>
<a id="trace-32598"></a>
<a id="trace-32611"></a>
<a id="trace-32613"></a>
<a id="trace-32705"></a>
<a id="trace-32707"></a>
<a id="trace-32734"></a>
<a id="trace-32736"></a>
<a id="trace-32758"></a>
<a id="trace-32760"></a>
<a id="trace-32840"></a>
<a id="trace-32842"></a>
<a id="trace-32989"></a>
<a id="trace-32991"></a>
<a id="trace-33012"></a>
<a id="trace-33014"></a>
<a id="trace-33031"></a>
<a id="trace-33033"></a>
<a id="trace-33056"></a>
<a id="trace-33058"></a>
<a id="trace-33071"></a>
<a id="trace-33073"></a>
<a id="trace-33094"></a>
<a id="trace-33096"></a>
<a id="trace-33355"></a>
<a id="trace-33357"></a>
<a id="trace-33394"></a>
<a id="trace-33396"></a>
<a id="trace-33412"></a>
<a id="trace-33414"></a>
<a id="trace-33441"></a>
<a id="trace-33443"></a>
<a id="trace-33542"></a>
<a id="trace-33544"></a>
<a id="trace-33562"></a>
<a id="trace-33564"></a>
<a id="trace-33650"></a>
<a id="trace-33652"></a>
<a id="trace-33683"></a>
<a id="trace-33685"></a>
<a id="trace-33701"></a>
<a id="trace-33703"></a>
<a id="trace-33718"></a>
<a id="trace-33720"></a>
<a id="trace-33734"></a>
<a id="trace-33736"></a>
<a id="trace-33767"></a>
<a id="trace-33769"></a>
<a id="trace-33810"></a>
<a id="trace-33812"></a>
<a id="trace-33910"></a>
<a id="trace-33912"></a>
<a id="trace-33983"></a>
<a id="trace-33985"></a>
<a id="trace-34014"></a>
<a id="trace-34016"></a>
<a id="trace-34099"></a>
<a id="trace-34101"></a>
<a id="trace-34184"></a>
<a id="trace-34186"></a>
<a id="trace-34201"></a>
<a id="trace-34203"></a>
<a id="trace-34279"></a>
<a id="trace-34281"></a>
<a id="trace-34305"></a>
<a id="trace-34307"></a>
<a id="trace-34375"></a>
<a id="trace-34377"></a>
<a id="trace-34388"></a>
<a id="trace-34390"></a>
<a id="trace-34418"></a>
<a id="trace-34420"></a>
<a id="trace-34433"></a>
<a id="trace-34435"></a>
<a id="trace-34477"></a>
<a id="trace-34479"></a>
<a id="trace-34497"></a>
<a id="trace-34499"></a>
<a id="trace-34512"></a>
<a id="trace-34514"></a>
<a id="trace-34588"></a>
<a id="trace-34598"></a>
<a id="trace-34617"></a>
<a id="trace-34660"></a>
<a id="trace-34662"></a>
<a id="trace-34669"></a>
<a id="trace-34671"></a>
<a id="trace-34688"></a>
<a id="trace-34690"></a>
<a id="trace-34720"></a>
<a id="trace-34722"></a>
<a id="trace-34725"></a>
<a id="trace-34727"></a>
<a id="trace-34797"></a>
<a id="trace-34799"></a>
<a id="trace-34803"></a>
<a id="trace-34805"></a>
<a id="trace-34824"></a>
<a id="trace-34826"></a>
<a id="trace-34833"></a>
<a id="trace-34835"></a>
<a id="trace-34849"></a>
<a id="trace-34851"></a>
<a id="trace-34857"></a>
<a id="trace-34859"></a>
<a id="trace-34872"></a>
<a id="trace-34874"></a>
<a id="trace-34894"></a>
<a id="trace-34896"></a>
<a id="trace-34899"></a>
<a id="trace-34901"></a>
<a id="trace-34972"></a>
<a id="trace-34974"></a>
<a id="trace-34978"></a>
<a id="trace-34980"></a>
<a id="trace-34992"></a>
<a id="trace-34994"></a>
<a id="trace-35001"></a>
<a id="trace-35003"></a>
<a id="trace-35015"></a>
<a id="trace-35017"></a>
<a id="trace-35031"></a>
<a id="trace-35033"></a>
<a id="trace-35124"></a>
<a id="trace-35126"></a>
<a id="trace-35130"></a>
<a id="trace-35132"></a>
<a id="trace-35144"></a>
<a id="trace-35146"></a>
<a id="trace-35245"></a>
<a id="trace-35247"></a>
<a id="trace-35258"></a>
<a id="trace-35260"></a>
<a id="trace-35270"></a>
<a id="trace-35272"></a>
<a id="trace-35277"></a>
<a id="trace-35279"></a>
<a id="trace-35294"></a>
<a id="trace-35296"></a>
<a id="trace-35303"></a>
<a id="trace-35305"></a>
<a id="trace-35369"></a>
<a id="trace-35371"></a>
<a id="trace-35376"></a>
<a id="trace-35378"></a>
<a id="trace-35390"></a>
<a id="trace-35392"></a>
<a id="trace-35399"></a>
<a id="trace-35401"></a>
<a id="trace-35418"></a>
<a id="trace-35420"></a>
<a id="trace-35432"></a>
<a id="trace-35434"></a>
<a id="trace-35439"></a>
<a id="trace-35441"></a>
<a id="trace-35453"></a>
<a id="trace-35455"></a>
<a id="trace-35460"></a>
<a id="trace-35462"></a>
<a id="trace-35530"></a>
<a id="trace-35532"></a>
<a id="trace-35540"></a>
<a id="trace-35542"></a>
<a id="trace-35556"></a>
<a id="trace-35558"></a>
<a id="trace-35566"></a>
<a id="trace-35568"></a>
<a id="trace-35581"></a>
<a id="trace-35583"></a>
<a id="trace-35603"></a>
<a id="trace-35605"></a>
<a id="trace-35613"></a>
<a id="trace-35615"></a>
<a id="trace-35629"></a>
<a id="trace-35631"></a>
<a id="trace-35636"></a>
<a id="trace-35638"></a>
<a id="trace-35714"></a>
<a id="trace-35716"></a>
<a id="trace-35735"></a>
<a id="trace-35737"></a>
<a id="trace-35748"></a>
<a id="trace-35750"></a>
<a id="trace-35832"></a>
<a id="trace-35834"></a>
<a id="trace-35859"></a>
<a id="trace-35861"></a>
<a id="trace-35873"></a>
<a id="trace-35875"></a>
<a id="trace-35887"></a>
<a id="trace-35889"></a>
<a id="trace-35898"></a>
<a id="trace-35900"></a>
<a id="trace-35971"></a>
<a id="trace-35973"></a>
<a id="trace-35986"></a>
<a id="trace-35988"></a>
<a id="trace-35994"></a>
<a id="trace-35996"></a>
<a id="trace-36016"></a>
<a id="trace-36018"></a>
<a id="trace-36025"></a>
<a id="trace-36027"></a>
<a id="trace-36047"></a>
<a id="trace-36049"></a>
<a id="trace-36080"></a>
<a id="trace-36082"></a>
<a id="trace-36095"></a>
<a id="trace-36097"></a>
<a id="trace-36183"></a>
<a id="trace-36185"></a>
<a id="trace-36191"></a>
<a id="trace-36193"></a>
<a id="trace-36205"></a>
<a id="trace-36207"></a>
<a id="trace-36229"></a>
<a id="trace-36231"></a>
<a id="trace-36262"></a>
<a id="trace-36264"></a>
<a id="trace-36270"></a>
<a id="trace-36272"></a>
<a id="trace-36355"></a>
<a id="trace-36357"></a>
<a id="trace-36374"></a>
<a id="trace-36376"></a>
<a id="trace-36387"></a>
<a id="trace-36389"></a>
<a id="trace-36404"></a>
<a id="trace-36406"></a>
<a id="trace-36411"></a>
<a id="trace-36413"></a>
<a id="trace-36484"></a>
<a id="trace-36486"></a>
<a id="trace-36492"></a>
<a id="trace-36494"></a>
<a id="trace-36514"></a>
<a id="trace-36516"></a>
<a id="trace-36593"></a>
<a id="trace-36595"></a>
<a id="trace-36624"></a>
<a id="trace-36626"></a>
<a id="trace-36666"></a>
<a id="trace-36668"></a>
<a id="trace-36697"></a>
<a id="trace-36699"></a>
<a id="trace-36729"></a>
<a id="trace-36731"></a>
<a id="trace-36798"></a>
<a id="trace-36800"></a>
<a id="trace-36810"></a>
<a id="trace-36812"></a>
<a id="trace-36824"></a>
<a id="trace-36826"></a>
<a id="trace-36831"></a>
<a id="trace-36833"></a>
<a id="trace-36849"></a>
<a id="trace-36851"></a>
<a id="trace-36861"></a>
<a id="trace-36863"></a>
<a id="trace-36894"></a>
<a id="trace-36896"></a>
<a id="trace-36919"></a>
<a id="trace-36921"></a>
<a id="trace-36987"></a>
<a id="trace-36989"></a>
<a id="trace-36995"></a>
<a id="trace-36997"></a>
<a id="trace-37011"></a>
<a id="trace-37013"></a>
<a id="trace-37031"></a>
<a id="trace-37033"></a>
<a id="trace-37037"></a>
<a id="trace-37039"></a>
<a id="trace-37053"></a>
<a id="trace-37055"></a>
<a id="trace-37065"></a>
<a id="trace-37067"></a>
<a id="trace-37084"></a>
<a id="trace-37086"></a>
<a id="trace-37098"></a>
<a id="trace-37100"></a>
<a id="trace-37173"></a>
<a id="trace-37175"></a>
<a id="trace-37194"></a>
<a id="trace-37196"></a>
<a id="trace-37221"></a>
<a id="trace-37223"></a>
<a id="trace-37237"></a>
<a id="trace-37239"></a>
<a id="trace-37245"></a>
<a id="trace-37247"></a>
<a id="trace-37263"></a>
<a id="trace-37265"></a>
<a id="trace-37270"></a>
<a id="trace-37272"></a>
<a id="trace-37348"></a>
<a id="trace-37350"></a>
<a id="trace-37368"></a>
<a id="trace-37370"></a>
<a id="trace-37376"></a>
<a id="trace-37378"></a>
<a id="trace-37398"></a>
<a id="trace-37400"></a>
<a id="trace-37407"></a>
<a id="trace-37409"></a>
<a id="trace-37424"></a>
<a id="trace-37426"></a>
<a id="trace-37449"></a>
<a id="trace-37451"></a>
<a id="trace-37521"></a>
<a id="trace-37523"></a>
<a id="trace-37530"></a>
<a id="trace-37532"></a>
<a id="trace-37552"></a>
<a id="trace-37554"></a>
<a id="trace-37568"></a>
<a id="trace-37570"></a>
<a id="trace-37576"></a>
<a id="trace-37578"></a>
<a id="trace-37597"></a>
<a id="trace-37599"></a>
<a id="trace-37616"></a>
<a id="trace-37618"></a>
<a id="trace-37638"></a>
<a id="trace-37640"></a>
<a id="trace-37644"></a>
<a id="trace-37646"></a>
<a id="trace-37715"></a>
<a id="trace-37717"></a>
<a id="trace-37756"></a>
<a id="trace-37758"></a>
<a id="trace-37773"></a>
<a id="trace-37775"></a>
<a id="trace-37905"></a>
<a id="trace-37907"></a>
<a id="trace-37913"></a>
<a id="trace-37915"></a>
<a id="trace-37926"></a>
<a id="trace-37928"></a>
<a id="trace-37956"></a>
<a id="trace-37958"></a>
<a id="trace-37972"></a>
<a id="trace-37974"></a>
<a id="trace-37979"></a>
<a id="trace-37981"></a>
<a id="trace-38052"></a>
<a id="trace-38054"></a>
<a id="trace-38063"></a>
<a id="trace-38065"></a>
<a id="trace-38080"></a>
<a id="trace-38082"></a>
<a id="trace-38117"></a>
<a id="trace-38119"></a>
<a id="trace-38132"></a>
<a id="trace-38134"></a>
<a id="trace-38154"></a>
<a id="trace-38156"></a>
<a id="trace-38237"></a>
<a id="trace-38239"></a>
<a id="trace-38251"></a>
<a id="trace-38253"></a>
<a id="trace-38263"></a>
<a id="trace-38265"></a>
<a id="trace-38291"></a>
<a id="trace-38293"></a>
<a id="trace-38336"></a>
<a id="trace-38338"></a>
<a id="trace-38416"></a>
<a id="trace-38418"></a>
<a id="trace-38426"></a>
<a id="trace-38428"></a>
<a id="trace-38492"></a>
<a id="trace-38494"></a>
<a id="trace-38560"></a>
<a id="trace-38562"></a>
<a id="trace-38573"></a>
<a id="trace-38575"></a>
<a id="trace-38587"></a>
<a id="trace-38589"></a>
<a id="trace-38602"></a>
<a id="trace-38604"></a>
<a id="trace-38613"></a>
<a id="trace-38615"></a>
<a id="trace-38633"></a>
<a id="trace-38635"></a>
<a id="trace-38671"></a>
<a id="trace-38673"></a>
<a id="trace-38679"></a>
<a id="trace-38681"></a>
<a id="trace-38756"></a>
<a id="trace-38758"></a>
<a id="trace-38781"></a>
<a id="trace-38783"></a>
<a id="trace-38913"></a>
<a id="trace-38915"></a>
<a id="trace-38926"></a>
<a id="trace-38928"></a>
<a id="trace-38941"></a>
<a id="trace-38943"></a>
<a id="trace-38952"></a>
<a id="trace-38954"></a>
<a id="trace-38977"></a>
<a id="trace-38979"></a>
<a id="trace-38986"></a>
<a id="trace-38988"></a>
<a id="trace-39061"></a>
<a id="trace-39063"></a>
<a id="trace-39070"></a>
<a id="trace-39072"></a>
<a id="trace-39090"></a>
<a id="trace-39092"></a>
<a id="trace-39110"></a>
<a id="trace-39112"></a>
<a id="trace-39130"></a>
<a id="trace-39132"></a>
<a id="trace-39143"></a>
<a id="trace-39145"></a>
<a id="trace-39159"></a>
<a id="trace-39161"></a>
<a id="trace-39169"></a>
<a id="trace-39171"></a>
<a id="trace-39186"></a>
<a id="trace-39188"></a>
<a id="trace-39196"></a>
<a id="trace-39198"></a>
<a id="trace-39267"></a>
<a id="trace-39269"></a>
<a id="trace-39276"></a>
<a id="trace-39278"></a>
<a id="trace-39294"></a>
<a id="trace-39296"></a>
<a id="trace-39305"></a>
<a id="trace-39307"></a>
<a id="trace-39333"></a>
<a id="trace-39335"></a>
<a id="trace-39357"></a>
<a id="trace-39359"></a>
<a id="trace-39373"></a>
<a id="trace-39375"></a>
<a id="trace-39389"></a>
<a id="trace-39391"></a>
<a id="trace-39494"></a>
<a id="trace-39496"></a>
<a id="trace-39569"></a>
<a id="trace-39571"></a>
<a id="trace-39578"></a>
<a id="trace-39580"></a>
<a id="trace-39595"></a>
<a id="trace-39597"></a>
<a id="trace-39624"></a>
<a id="trace-39626"></a>
<a id="trace-39631"></a>
<a id="trace-39633"></a>
<a id="trace-39653"></a>
<a id="trace-39655"></a>
<a id="trace-39666"></a>
<a id="trace-39668"></a>
<a id="trace-39686"></a>
<a id="trace-39688"></a>
<a id="trace-39703"></a>
<a id="trace-39705"></a>
<a id="trace-39800"></a>
<a id="trace-39802"></a>
<a id="trace-39813"></a>
<a id="trace-39815"></a>
<a id="trace-39830"></a>
<a id="trace-39832"></a>
<a id="trace-39837"></a>
<a id="trace-39839"></a>
<a id="trace-39855"></a>
<a id="trace-39857"></a>
<a id="trace-39865"></a>
<a id="trace-39867"></a>
<a id="trace-39969"></a>
<a id="trace-39971"></a>
<a id="trace-39979"></a>
<a id="trace-39981"></a>
<a id="trace-40002"></a>
<a id="trace-40004"></a>
<a id="trace-40013"></a>
<a id="trace-40015"></a>
<a id="trace-40036"></a>
<a id="trace-40038"></a>
<a id="trace-40056"></a>
<a id="trace-40058"></a>
<a id="trace-40066"></a>
<a id="trace-40068"></a>
<a id="trace-40083"></a>
<a id="trace-40085"></a>
<a id="trace-40092"></a>
<a id="trace-40094"></a>
<a id="trace-40163"></a>
<a id="trace-40165"></a>
<a id="trace-40187"></a>
<a id="trace-40189"></a>
<a id="trace-40198"></a>
<a id="trace-40200"></a>
<a id="trace-40362"></a>
<a id="trace-40364"></a>
<a id="trace-40417"></a>
<a id="trace-40419"></a>
<a id="trace-40425"></a>
<a id="trace-40427"></a>
<a id="trace-40508"></a>
<a id="trace-40510"></a>
<a id="trace-40525"></a>
<a id="trace-40527"></a>
<a id="trace-40553"></a>
<a id="trace-40555"></a>
<a id="trace-40564"></a>
<a id="trace-40566"></a>
<a id="trace-40615"></a>
<a id="trace-40617"></a>
<a id="trace-40632"></a>
<a id="trace-40634"></a>
<a id="trace-40704"></a>
<a id="trace-40706"></a>
<a id="trace-40709"></a>
<a id="trace-40711"></a>
<a id="trace-40723"></a>
<a id="trace-40725"></a>
<a id="trace-40731"></a>
<a id="trace-40733"></a>
<a id="trace-40918"></a>
<a id="trace-40920"></a>
<a id="trace-40928"></a>
<a id="trace-40930"></a>
<a id="trace-40948"></a>
<a id="trace-40950"></a>
<a id="trace-40959"></a>
<a id="trace-40961"></a>
<a id="trace-40977"></a>
<a id="trace-40979"></a>
<a id="trace-40985"></a>
<a id="trace-40987"></a>
<a id="trace-41056"></a>
<a id="trace-41058"></a>
<a id="trace-41060"></a>
<a id="trace-41062"></a>
<a id="trace-41146"></a>
<a id="trace-41148"></a>
<a id="trace-41153"></a>
<a id="trace-41155"></a>
<a id="trace-41168"></a>
<a id="trace-41170"></a>
<a id="trace-41177"></a>
<a id="trace-41179"></a>
<a id="trace-41192"></a>
<a id="trace-41194"></a>
<a id="trace-41266"></a>
<a id="trace-41268"></a>
<a id="trace-41272"></a>
<a id="trace-41274"></a>
<a id="trace-41290"></a>
<a id="trace-41292"></a>
<a id="trace-41304"></a>
<a id="trace-41306"></a>
<a id="trace-41311"></a>
<a id="trace-41313"></a>
<a id="trace-41326"></a>
<a id="trace-41328"></a>
<a id="trace-41333"></a>
<a id="trace-41335"></a>
<a id="trace-41354"></a>
<a id="trace-41356"></a>
<a id="trace-41421"></a>
<a id="trace-41423"></a>
<a id="trace-41439"></a>
<a id="trace-41441"></a>
<a id="trace-41446"></a>
<a id="trace-41448"></a>
<a id="trace-41461"></a>
<a id="trace-41463"></a>
<a id="trace-41485"></a>
<a id="trace-41487"></a>
<a id="trace-41493"></a>
<a id="trace-41495"></a>
<a id="trace-41511"></a>
<a id="trace-41513"></a>
<a id="trace-41585"></a>
<a id="trace-41587"></a>
<a id="trace-41628"></a>
<a id="trace-41630"></a>
<a id="trace-41641"></a>
<a id="trace-41643"></a>
<a id="trace-41658"></a>
<a id="trace-41660"></a>
<a id="trace-41669"></a>
<a id="trace-41671"></a>
<a id="trace-41713"></a>
<a id="trace-41715"></a>
<a id="trace-41785"></a>
<a id="trace-41787"></a>
<a id="trace-41791"></a>
<a id="trace-41793"></a>
<a id="trace-41812"></a>
<a id="trace-41814"></a>
<a id="trace-41837"></a>
<a id="trace-41839"></a>
<a id="trace-41845"></a>
<a id="trace-41847"></a>
<a id="trace-41860"></a>
<a id="trace-41862"></a>
<a id="trace-41887"></a>
<a id="trace-41889"></a>
<a id="trace-41900"></a>
<a id="trace-41902"></a>
<a id="trace-41969"></a>
<a id="trace-41971"></a>
<a id="trace-41982"></a>
<a id="trace-41984"></a>
<a id="trace-42036"></a>
<a id="trace-42038"></a>
<a id="trace-42050"></a>
<a id="trace-42052"></a>
<a id="trace-42059"></a>
<a id="trace-42061"></a>
<a id="trace-42073"></a>
<a id="trace-42075"></a>
<a id="trace-42078"></a>
<a id="trace-42080"></a>
<a id="trace-42146"></a>
<a id="trace-42148"></a>
<a id="trace-42170"></a>
<a id="trace-42172"></a>
<a id="trace-42178"></a>
<a id="trace-42180"></a>
<a id="trace-42201"></a>
<a id="trace-42203"></a>
<a id="trace-42231"></a>
<a id="trace-42233"></a>
<a id="trace-42245"></a>
<a id="trace-42247"></a>
<a id="trace-42260"></a>
<a id="trace-42262"></a>
<a id="trace-42269"></a>
<a id="trace-42271"></a>
<a id="trace-42338"></a>
<a id="trace-42340"></a>
<a id="trace-42357"></a>
<a id="trace-42359"></a>
<a id="trace-42374"></a>
<a id="trace-42376"></a>
<a id="trace-42380"></a>
<a id="trace-42382"></a>
<a id="trace-42403"></a>
<a id="trace-42405"></a>
<a id="trace-42410"></a>
<a id="trace-42412"></a>
<a id="trace-42524"></a>
<a id="trace-42526"></a>
<a id="trace-42537"></a>
<a id="trace-42539"></a>
<a id="trace-42544"></a>
<a id="trace-42546"></a>
<a id="trace-42563"></a>
<a id="trace-42565"></a>
<a id="trace-42569"></a>
<a id="trace-42571"></a>
<a id="trace-42585"></a>
<a id="trace-42587"></a>
<a id="trace-42592"></a>
<a id="trace-42594"></a>
<a id="trace-42662"></a>
<a id="trace-42664"></a>
<a id="trace-42673"></a>
<a id="trace-42675"></a>
<a id="trace-42742"></a>
<a id="trace-42744"></a>
<a id="trace-42756"></a>
<a id="trace-42758"></a>
<a id="trace-42784"></a>
<a id="trace-42786"></a>
<a id="trace-42797"></a>
<a id="trace-42799"></a>
<a id="trace-42819"></a>
<a id="trace-42821"></a>
<a id="trace-42836"></a>
<a id="trace-42838"></a>
<a id="trace-42846"></a>
<a id="trace-42848"></a>
<a id="trace-42864"></a>
<a id="trace-42866"></a>
<a id="trace-42870"></a>
<a id="trace-42872"></a>
<a id="trace-42942"></a>
<a id="trace-42944"></a>
<a id="trace-42960"></a>
<a id="trace-42962"></a>
<a id="trace-42970"></a>
<a id="trace-42972"></a>
<a id="trace-42990"></a>
<a id="trace-42992"></a>
<a id="trace-43040"></a>
<a id="trace-43042"></a>
<a id="trace-43058"></a>
<a id="trace-43060"></a>
<a id="trace-43067"></a>
<a id="trace-43069"></a>
- 5.70s–359.80s (×1095), actor 37, squad 4 (trace 995): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 908. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625018063815853, 'next_transition': 1552}.
<a id="trace-1006"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1006): received platoon directive. Knowledge: actor memory at 5.00s, trace 899. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.87351964895443, 'next_transition': 2680}.
<a id="trace-1221"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1221): received platoon directive. Knowledge: actor memory at 5.00s, trace 891. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300048822724628, 'next_transition': 1548}.
<a id="trace-1548"></a>
<a id="trace-1550"></a>
<a id="trace-1600"></a>
<a id="trace-1602"></a>
<a id="trace-1641"></a>
<a id="trace-1643"></a>
<a id="trace-1692"></a>
<a id="trace-1694"></a>
<a id="trace-1732"></a>
<a id="trace-1734"></a>
<a id="trace-1799"></a>
<a id="trace-1801"></a>
<a id="trace-1827"></a>
<a id="trace-1829"></a>
<a id="trace-1857"></a>
<a id="trace-1859"></a>
<a id="trace-1948"></a>
<a id="trace-1950"></a>
<a id="trace-1978"></a>
<a id="trace-1980"></a>
<a id="trace-2002"></a>
<a id="trace-2004"></a>
<a id="trace-2039"></a>
<a id="trace-2041"></a>
<a id="trace-2068"></a>
<a id="trace-2070"></a>
<a id="trace-2106"></a>
<a id="trace-2108"></a>
<a id="trace-2130"></a>
<a id="trace-2132"></a>
<a id="trace-2159"></a>
<a id="trace-2161"></a>
<a id="trace-2185"></a>
<a id="trace-2187"></a>
<a id="trace-2215"></a>
<a id="trace-2217"></a>
<a id="trace-2302"></a>
<a id="trace-2304"></a>
<a id="trace-2334"></a>
<a id="trace-2336"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1548): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 896. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600187425913334, 'next_transition': 1600}.
<a id="trace-2342"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2342): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2225. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43054892417114754, 'next_transition': 2603}.
<a id="trace-2343"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2343): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2225. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43054892417114754, 'next_transition': 2603}.
<a id="trace-2603"></a>
<a id="trace-2605"></a>
<a id="trace-2641"></a>
<a id="trace-2643"></a>
<a id="trace-2669"></a>
<a id="trace-2671"></a>
<a id="trace-2962"></a>
<a id="trace-2964"></a>
<a id="trace-3003"></a>
<a id="trace-3005"></a>
<a id="trace-3034"></a>
<a id="trace-3036"></a>
<a id="trace-3057"></a>
<a id="trace-3059"></a>
<a id="trace-3084"></a>
<a id="trace-3086"></a>
<a id="trace-3181"></a>
<a id="trace-3183"></a>
<a id="trace-3208"></a>
<a id="trace-3210"></a>
<a id="trace-3237"></a>
<a id="trace-3239"></a>
<a id="trace-3265"></a>
<a id="trace-3267"></a>
<a id="trace-3308"></a>
<a id="trace-3310"></a>
<a id="trace-3329"></a>
<a id="trace-3331"></a>
<a id="trace-3364"></a>
<a id="trace-3366"></a>
<a id="trace-3387"></a>
<a id="trace-3389"></a>
<a id="trace-3420"></a>
<a id="trace-3422"></a>
<a id="trace-3448"></a>
<a id="trace-3450"></a>
<a id="trace-3532"></a>
<a id="trace-3534"></a>
<a id="trace-3549"></a>
<a id="trace-3551"></a>
<a id="trace-3578"></a>
<a id="trace-3580"></a>
<a id="trace-3873"></a>
<a id="trace-3875"></a>
- 16.25s–26.75s (×44), actor 5, squad 0 (trace 2603): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2230. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843744539681024, 'next_transition': 2641}.
<a id="trace-2680"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2680): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2233. Next observer evidence: {'until': 26.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 11.96958774696493, 'next_transition': 3590}.
<a id="trace-2681"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2681): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2233. Next observer evidence: {'until': 26.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 11.96958774696493, 'next_transition': 3590}.
<a id="trace-3590"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3590): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3465. Next observer evidence: {'until': 29.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.414332022386442, 'next_transition': 567}.
<a id="trace-3591"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3591): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3465. Next observer evidence: {'until': 29.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.414332022386442, 'next_transition': 567}.
<a id="trace-3592"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3592): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3465. Next observer evidence: {'until': 29.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.414332022386442, 'next_transition': 567}.
<a id="trace-3891"></a>
- 26.95s–26.95s (×1), actor 0, squad 0 (trace 3891): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3457. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0639965127223741, 'next_transition': 4234}.
<a id="trace-3892"></a>
- 26.95s–26.95s (×1), actor 0, squad 0 (trace 3892): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3457. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0639965127223741, 'next_transition': 4234}.
<a id="trace-3893"></a>
- 26.95s–26.95s (×1), actor 0, squad 0 (trace 3893): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3457. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0639965127223741, 'next_transition': 4234}.
<a id="trace-4234"></a>
<a id="trace-4236"></a>
<a id="trace-4260"></a>
<a id="trace-4262"></a>
<a id="trace-4307"></a>
<a id="trace-4309"></a>
<a id="trace-4341"></a>
<a id="trace-4343"></a>
<a id="trace-4379"></a>
<a id="trace-4381"></a>
<a id="trace-4408"></a>
<a id="trace-4410"></a>
- 27.25s–29.75s (×12), actor 5, squad 0 (trace 4234): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3462. Next observer evidence: {'until': 27.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.06638856269155106, 'next_transition': 4260}.
<a id="trace-566"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 566): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-567"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (events line 567): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4414"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 4414): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.739221 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4414. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7441}.
<a id="trace-4415"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 4415): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.739221 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4415. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7441}.
<a id="trace-4416"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 4416): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.739221 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4416. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06715325429567806, 'next_transition': 4449}.
<a id="trace-4417"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 4417): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.739221 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4417. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06715325429567806, 'next_transition': 4449}.
<a id="trace-4449"></a>
- 30.00s–30.00s (×1), actor 8, squad 1 (trace 4449): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4432. Next observer evidence: {'until': 30.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.21064823404493577, 'next_transition': 7469}.
<a id="trace-4451"></a>
- 30.00s–30.00s (×1), actor 8, squad 1 (trace 4451): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 4432. Next observer evidence: {'until': 30.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.21064823404493577, 'next_transition': 7469}.
<a id="trace-7323"></a>
- 30.00s–30.00s (×1), actor 8, squad 1 (trace 7323): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 4432. Next observer evidence: {'until': 30.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.21064823404493577, 'next_transition': 7469}.
<a id="trace-7324"></a>
- 30.00s–30.00s (×1), actor 8, squad 1 (trace 7324): MoveTactically. Knowledge: actor memory at 30.00s, trace 4432. Next observer evidence: {'until': 30.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.21064823404493577, 'next_transition': 7469}.
<a id="trace-7325"></a>
- 30.00s–30.00s (×1), actor 8, squad 1 (trace 7325): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 4432. Next observer evidence: {'until': 30.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.21064823404493577, 'next_transition': 7469}.
<a id="trace-7441"></a>
<a id="trace-7443"></a>
<a id="trace-7464"></a>
<a id="trace-7466"></a>
- 30.25s–30.75s (×4), actor 5, squad 0 (trace 7441): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4429. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7464}.
<a id="trace-7469"></a>
- 30.75s–30.75s (×1), actor 8, squad 1 (trace 7469): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 4432. Next observer evidence: {'until': 31.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.3833203286688451, 'next_transition': 10302}.
<a id="trace-7470"></a>
- 30.75s–30.75s (×1), actor 8, squad 1 (trace 7470): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 4432. Next observer evidence: {'until': 31.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.3833203286688451, 'next_transition': 10302}.
<a id="trace-7748"></a>
- 31.00s–31.00s (×1), actor 1, squad 0 (trace 7748): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4425. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10272}.
<a id="trace-7750"></a>
- 31.00s–31.00s (×1), actor 1, squad 0 (trace 7750): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 4425. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10272}.
<a id="trace-10127"></a>
- 31.00s–31.00s (×1), actor 1, squad 0 (trace 10127): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 4425. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10272}.
<a id="trace-10128"></a>
- 31.00s–31.00s (×1), actor 1, squad 0 (trace 10128): MoveTactically. Knowledge: actor memory at 30.00s, trace 4425. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10272}.
<a id="trace-10129"></a>
- 31.00s–31.00s (×1), actor 1, squad 0 (trace 10129): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 4425. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10272}.
<a id="trace-10272"></a>
<a id="trace-10274"></a>
<a id="trace-10295"></a>
<a id="trace-10297"></a>
<a id="trace-10344"></a>
<a id="trace-10346"></a>
<a id="trace-10382"></a>
<a id="trace-10384"></a>
<a id="trace-10431"></a>
<a id="trace-10433"></a>
<a id="trace-10469"></a>
<a id="trace-10471"></a>
<a id="trace-10515"></a>
<a id="trace-10517"></a>
<a id="trace-10540"></a>
<a id="trace-10542"></a>
<a id="trace-10634"></a>
<a id="trace-10636"></a>
<a id="trace-10657"></a>
<a id="trace-10659"></a>
<a id="trace-10692"></a>
<a id="trace-10694"></a>
<a id="trace-10718"></a>
<a id="trace-10720"></a>
<a id="trace-10743"></a>
<a id="trace-10745"></a>
<a id="trace-10760"></a>
<a id="trace-10762"></a>
<a id="trace-10779"></a>
<a id="trace-10781"></a>
<a id="trace-10807"></a>
<a id="trace-10809"></a>
<a id="trace-10857"></a>
<a id="trace-10859"></a>
<a id="trace-10895"></a>
<a id="trace-10897"></a>
<a id="trace-11011"></a>
<a id="trace-11013"></a>
<a id="trace-11077"></a>
<a id="trace-11079"></a>
<a id="trace-11136"></a>
<a id="trace-11138"></a>
<a id="trace-11182"></a>
<a id="trace-11184"></a>
- 31.25s–41.75s (×44), actor 5, squad 0 (trace 10272): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4429. Next observer evidence: {'until': 31.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10295}.
<a id="trace-10302"></a>
- 31.75s–31.75s (×1), actor 8, squad 1 (trace 10302): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 4432. Next observer evidence: {'until': 34.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0850641425522416, 'next_transition': 10525}.
<a id="trace-10525"></a>
- 34.30s–34.30s (×1), actor 8, squad 1 (trace 10525): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4432. Next observer evidence: {'until': 41.8, 'shots': 9, 'casualties': 1, 'mean_displacement': 1.8093389369431614, 'next_transition': 11601}.
<a id="trace-11199"></a>
- 41.85s–41.85s (×1), actor 1, squad 0 (trace 11199): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 10921. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0175091563427485, 'next_transition': 13717}.
<a id="trace-11200"></a>
- 41.85s–41.85s (×1), actor 1, squad 0 (trace 11200): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 10921. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0175091563427485, 'next_transition': 13717}.
<a id="trace-11601"></a>
- 41.90s–41.90s (×1), actor 8, squad 1 (trace 11601): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 10928. Next observer evidence: {'until': 46, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.703387780716206, 'next_transition': 14203}.
<a id="trace-13575"></a>
- 41.90s–41.90s (×1), actor 8, squad 1 (trace 13575): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 10928. Next observer evidence: {'until': 46, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.703387780716206, 'next_transition': 14203}.
<a id="trace-13576"></a>
- 41.90s–41.90s (×1), actor 8, squad 1 (trace 13576): MoveTactically. Knowledge: actor memory at 40.00s, trace 10928. Next observer evidence: {'until': 46, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.703387780716206, 'next_transition': 14203}.
<a id="trace-13577"></a>
- 41.90s–41.90s (×1), actor 8, squad 1 (trace 13577): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 10928. Next observer evidence: {'until': 46, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.703387780716206, 'next_transition': 14203}.
<a id="trace-13717"></a>
<a id="trace-13719"></a>
<a id="trace-13763"></a>
<a id="trace-13765"></a>
<a id="trace-13834"></a>
<a id="trace-13836"></a>
<a id="trace-13871"></a>
<a id="trace-13873"></a>
<a id="trace-13925"></a>
<a id="trace-13927"></a>
<a id="trace-13984"></a>
<a id="trace-13986"></a>
<a id="trace-14105"></a>
<a id="trace-14107"></a>
- 42.25s–45.25s (×14), actor 5, squad 0 (trace 13717): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10925. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7097893997258059, 'next_transition': 13763}.
<a id="trace-14137"></a>
- 45.50s–45.50s (×1), actor 1, squad 0 (trace 14137): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 14016. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14014108784218368, 'next_transition': 14167}.
<a id="trace-14167"></a>
<a id="trace-14169"></a>
<a id="trace-14237"></a>
<a id="trace-14239"></a>
<a id="trace-14302"></a>
<a id="trace-14304"></a>
<a id="trace-14371"></a>
<a id="trace-14373"></a>
<a id="trace-14427"></a>
<a id="trace-14429"></a>
- 45.75s–47.75s (×10), actor 5, squad 0 (trace 14167): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 14020. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5293982597293244, 'next_transition': 14237}.
<a id="trace-14203"></a>
- 46.10s–46.10s (×1), actor 8, squad 1 (trace 14203): NeedSupport. Knowledge: actor memory at 45.00s, trace 14023. Next observer evidence: {'until': 54, 'shots': 6, 'casualties': 0, 'mean_displacement': 6.545434528874567, 'next_transition': 16575}.
<a id="trace-14468"></a>
- 48.20s–48.20s (×1), actor 1, squad 0 (trace 14468): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 14016. Next observer evidence: None.
<a id="trace-14469"></a>
- 48.20s–48.20s (×1), actor 1, squad 0 (trace 14469): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 14016. Next observer evidence: None.
<a id="trace-16185"></a>
<a id="trace-16187"></a>
<a id="trace-16229"></a>
<a id="trace-16231"></a>
<a id="trace-16259"></a>
<a id="trace-16261"></a>
<a id="trace-16290"></a>
<a id="trace-16292"></a>
<a id="trace-16390"></a>
<a id="trace-16392"></a>
<a id="trace-16415"></a>
<a id="trace-16417"></a>
- 48.25s–50.75s (×12), actor 5, squad 0 (trace 16185): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 14020. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03910201732882428, 'next_transition': 16229}.
<a id="trace-1067"></a>
- 50.85s–50.85s (×1), actor 5, squad 0 (events line 1067): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16426"></a>
- 50.85s–50.85s (×1), actor 5, squad 0 (trace 16426): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.569364 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 16426. Next observer evidence: {'until': 51.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11252537027311692, 'next_transition': 16448}.
<a id="trace-16427"></a>
- 50.85s–50.85s (×1), actor 5, squad 0 (trace 16427): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.569364 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 16427. Next observer evidence: {'until': 51.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.11252537027311692, 'next_transition': 16448}.
<a id="trace-16448"></a>
<a id="trace-16450"></a>
<a id="trace-16477"></a>
<a id="trace-16479"></a>
<a id="trace-16506"></a>
<a id="trace-16508"></a>
<a id="trace-16528"></a>
<a id="trace-16530"></a>
<a id="trace-16548"></a>
<a id="trace-16550"></a>
<a id="trace-16562"></a>
<a id="trace-16564"></a>
<a id="trace-16687"></a>
<a id="trace-16689"></a>
<a id="trace-16943"></a>
<a id="trace-16945"></a>
<a id="trace-17045"></a>
<a id="trace-17047"></a>
<a id="trace-17082"></a>
<a id="trace-17084"></a>
<a id="trace-17139"></a>
<a id="trace-17141"></a>
<a id="trace-17195"></a>
<a id="trace-17197"></a>
<a id="trace-17254"></a>
<a id="trace-17256"></a>
- 51.25s–57.25s (×26), actor 5, squad 0 (trace 16448): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.85s, trace 16427. Next observer evidence: {'until': 51.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16477}.
<a id="trace-16575"></a>
- 54.00s–54.00s (×1), actor 8, squad 1 (trace 16575): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 50.00s, trace 16324. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16696}.
<a id="trace-16696"></a>
- 54.25s–54.25s (×1), actor 8, squad 1 (trace 16696): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 50.00s, trace 16324. Next observer evidence: {'until': 58.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.7141166666666668, 'next_transition': 17392}.
<a id="trace-16919"></a>
- 54.25s–54.25s (×1), actor 8, squad 1 (trace 16919): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 50.00s, trace 16324. Next observer evidence: {'until': 58.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.7141166666666668, 'next_transition': 17392}.
<a id="trace-17273"></a>
- 57.35s–57.35s (×1), actor 1, squad 0 (trace 17273): NeedSupport. Knowledge: actor memory at 55.00s, trace 16963. Next observer evidence: {'until': 57.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.013868571428571437, 'next_transition': 17316}.
<a id="trace-17316"></a>
<a id="trace-17318"></a>
<a id="trace-17360"></a>
<a id="trace-17362"></a>
<a id="trace-17383"></a>
<a id="trace-17385"></a>
<a id="trace-19130"></a>
<a id="trace-19132"></a>
<a id="trace-19169"></a>
<a id="trace-19171"></a>
<a id="trace-19268"></a>
<a id="trace-19270"></a>
- 57.75s–60.25s (×12), actor 5, squad 0 (trace 17316): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 16967. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00015142857142854841, 'next_transition': 17360}.
<a id="trace-17392"></a>
- 58.75s–58.75s (×1), actor 8, squad 1 (trace 17392): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 16970. Next observer evidence: {'until': 62, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.030870000000000175, 'next_transition': 1360}.
<a id="trace-17393"></a>
- 58.75s–58.75s (×1), actor 8, squad 1 (trace 17393): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 55.00s, trace 16970. Next observer evidence: {'until': 62, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.030870000000000175, 'next_transition': 1360}.
<a id="trace-19274"></a>
- 60.25s–60.25s (×1), actor 1, squad 0 (trace 19274): support established: element delivered fire on threat area. Knowledge: actor memory at 60.00s, trace 19189. Next observer evidence: {'until': 60.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.09015057806854383, 'next_transition': 19296}.
<a id="trace-19275"></a>
- 60.25s–60.25s (×1), actor 1, squad 0 (trace 19275): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 60.00s, trace 19189. Next observer evidence: {'until': 60.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.09015057806854383, 'next_transition': 19296}.
<a id="trace-19276"></a>
- 60.25s–60.25s (×1), actor 1, squad 0 (trace 19276): Fixing. Knowledge: actor memory at 60.00s, trace 19189. Next observer evidence: {'until': 60.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.09015057806854383, 'next_transition': 19296}.
<a id="trace-19296"></a>
- 60.55s–60.55s (×1), actor 1, squad 0 (trace 19296): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 19189. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09015314917186179, 'next_transition': 21054}.
<a id="trace-19297"></a>
- 60.55s–60.55s (×1), actor 1, squad 0 (trace 19297): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 60.00s, trace 19189. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09015314917186179, 'next_transition': 21054}.
<a id="trace-21054"></a>
<a id="trace-21056"></a>
<a id="trace-21089"></a>
<a id="trace-21091"></a>
<a id="trace-21114"></a>
<a id="trace-21116"></a>
- 60.75s–61.75s (×6), actor 5, squad 0 (trace 21054): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 19193. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2864005911293604, 'next_transition': 21089}.
<a id="trace-1359"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (events line 1359): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1360"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (events line 1360): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21136"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 21136): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.572679 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 21136. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000040894929766, 'next_transition': 21156}.
<a id="trace-21137"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 21137): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.572679 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 21137. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000040894929766, 'next_transition': 21156}.
<a id="trace-21138"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (trace 21138): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.572679 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 21138. Next observer evidence: None.
<a id="trace-21139"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (trace 21139): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.572679 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 21139. Next observer evidence: None.
<a id="trace-21144"></a>
- 62.15s–62.15s (×1), actor 9, squad 1 (trace 21144): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 19196. Next observer evidence: {'until': 62.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21177}.
<a id="trace-21156"></a>
<a id="trace-21158"></a>
<a id="trace-21361"></a>
<a id="trace-21363"></a>
<a id="trace-21386"></a>
<a id="trace-21388"></a>
<a id="trace-21421"></a>
<a id="trace-21423"></a>
<a id="trace-21477"></a>
<a id="trace-21479"></a>
<a id="trace-21509"></a>
<a id="trace-21511"></a>
- 62.25s–64.75s (×12), actor 5, squad 0 (trace 21156): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 21139. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21761372754023442, 'next_transition': 21361}.
<a id="trace-21177"></a>
- 62.50s–62.50s (×1), actor 9, squad 1 (trace 21177): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 19196. Next observer evidence: {'until': 65.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.4944826116920336, 'next_transition': 1448}.
<a id="trace-21180"></a>
- 62.50s–62.50s (×1), actor 9, squad 1 (trace 21180): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 19196. Next observer evidence: {'until': 65.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.4944826116920336, 'next_transition': 1448}.
<a id="trace-21181"></a>
- 62.50s–62.50s (×1), actor 9, squad 1 (trace 21181): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 19196. Next observer evidence: {'until': 65.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.4944826116920336, 'next_transition': 1448}.
<a id="trace-21562"></a>
- 65.05s–65.05s (×1), actor 5, squad 0 (trace 21562): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 65.05s, trace 21562. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09025435120075051, 'next_transition': 21632}.
<a id="trace-21632"></a>
<a id="trace-21634"></a>
<a id="trace-21678"></a>
<a id="trace-21680"></a>
<a id="trace-21708"></a>
<a id="trace-21710"></a>
<a id="trace-21757"></a>
<a id="trace-21759"></a>
<a id="trace-21927"></a>
<a id="trace-21929"></a>
<a id="trace-21956"></a>
<a id="trace-21958"></a>
- 65.25s–67.75s (×12), actor 5, squad 0 (trace 21632): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.05s, trace 21562. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1965518057338905, 'next_transition': 21678}.
<a id="trace-1448"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (events line 1448): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0890782434325683, 'next_transition': 21749}.
<a id="trace-21684"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 21684): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500648 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 21684. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0890782434325683, 'next_transition': 21749}.
<a id="trace-21685"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 21685): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500648 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 21685. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0890782434325683, 'next_transition': 21749}.
<a id="trace-21749"></a>
- 66.70s–66.70s (×1), actor 9, squad 1 (trace 21749): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 65.00s, trace 21544. Next observer evidence: {'until': 67, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0313423354873605, 'next_transition': 21793}.
<a id="trace-21793"></a>
- 67.10s–67.10s (×1), actor 9, squad 1 (trace 21793): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 21544. Next observer evidence: {'until': 87, 'shots': 4, 'casualties': 0, 'mean_displacement': 14.315382298785874, 'next_transition': 27041}.
<a id="trace-21794"></a>
- 67.10s–67.10s (×1), actor 9, squad 1 (trace 21794): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 21544. Next observer evidence: {'until': 87, 'shots': 4, 'casualties': 0, 'mean_displacement': 14.315382298785874, 'next_transition': 27041}.
<a id="trace-21970"></a>
- 68.05s–68.05s (×1), actor 5, squad 0 (trace 21970): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 68.05s, trace 21970. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07314142857142857, 'next_transition': 21980}.
<a id="trace-21980"></a>
<a id="trace-21982"></a>
<a id="trace-22007"></a>
<a id="trace-22009"></a>
<a id="trace-22038"></a>
<a id="trace-22040"></a>
<a id="trace-22062"></a>
<a id="trace-22064"></a>
<a id="trace-22160"></a>
<a id="trace-22162"></a>
<a id="trace-22190"></a>
<a id="trace-22192"></a>
<a id="trace-22231"></a>
<a id="trace-22233"></a>
- 68.25s–71.25s (×14), actor 5, squad 0 (trace 21980): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 68.05s, trace 21970. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14899516537816376, 'next_transition': 22007}.
<a id="trace-22271"></a>
- 71.55s–71.55s (×1), actor 5, squad 0 (trace 22271): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 71.55s, trace 22271. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0001514285714286753, 'next_transition': 22296}.
<a id="trace-22296"></a>
<a id="trace-22298"></a>
<a id="trace-22361"></a>
<a id="trace-22363"></a>
<a id="trace-22416"></a>
<a id="trace-22418"></a>
<a id="trace-22475"></a>
<a id="trace-22477"></a>
<a id="trace-22532"></a>
<a id="trace-22534"></a>
<a id="trace-22578"></a>
<a id="trace-22580"></a>
<a id="trace-22621"></a>
<a id="trace-22623"></a>
<a id="trace-22731"></a>
<a id="trace-22733"></a>
<a id="trace-22757"></a>
<a id="trace-22759"></a>
<a id="trace-22779"></a>
<a id="trace-22781"></a>
<a id="trace-22819"></a>
<a id="trace-22821"></a>
<a id="trace-22865"></a>
<a id="trace-22867"></a>
<a id="trace-22898"></a>
<a id="trace-22900"></a>
- 71.75s–77.75s (×26), actor 5, squad 0 (trace 22296): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 71.55s, trace 22271. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00045571428571428943, 'next_transition': 22361}.
<a id="trace-22925"></a>
- 78.10s–78.10s (×1), actor 1, squad 0 (trace 22925): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 22647. Next observer evidence: {'until': 78.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00015285714285706575, 'next_transition': 23387}.
<a id="trace-22926"></a>
- 78.10s–78.10s (×1), actor 1, squad 0 (trace 22926): received platoon directive. Knowledge: actor memory at 75.00s, trace 22647. Next observer evidence: {'until': 78.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00015285714285706575, 'next_transition': 23387}.
<a id="trace-23387"></a>
<a id="trace-23389"></a>
<a id="trace-23429"></a>
<a id="trace-23431"></a>
<a id="trace-23513"></a>
<a id="trace-23515"></a>
<a id="trace-23607"></a>
<a id="trace-23609"></a>
<a id="trace-23637"></a>
<a id="trace-23639"></a>
<a id="trace-23678"></a>
<a id="trace-23680"></a>
- 78.25s–81.25s (×12), actor 5, squad 0 (trace 23387): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 22651. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0003028571428572237, 'next_transition': 23429}.
<a id="trace-23697"></a>
- 81.70s–81.70s (×1), actor 1, squad 0 (trace 23697): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 80.00s, trace 23528. Next observer evidence: None.
<a id="trace-23703"></a>
<a id="trace-23705"></a>
- 81.75s–81.75s (×2), actor 5, squad 0 (trace 23703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 23532. Next observer evidence: {'until': 82, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18000142876826652, 'next_transition': 23731}.
<a id="trace-23731"></a>
- 82.05s–82.05s (×1), actor 1, squad 0 (trace 23731): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 23528. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06722428585600912, 'next_transition': 26505}.
<a id="trace-26215"></a>
- 82.05s–82.05s (×1), actor 1, squad 0 (trace 26215): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 80.00s, trace 23528. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06722428585600912, 'next_transition': 26505}.
<a id="trace-26216"></a>
- 82.05s–82.05s (×1), actor 1, squad 0 (trace 26216): MoveTactically. Knowledge: actor memory at 80.00s, trace 23528. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06722428585600912, 'next_transition': 26505}.
<a id="trace-26217"></a>
- 82.05s–82.05s (×1), actor 1, squad 0 (trace 26217): contact cover complete: assessment resumes closure. Knowledge: actor memory at 80.00s, trace 23528. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06722428585600912, 'next_transition': 26505}.
<a id="trace-26505"></a>
<a id="trace-26507"></a>
<a id="trace-26565"></a>
<a id="trace-26567"></a>
<a id="trace-26624"></a>
<a id="trace-26626"></a>
<a id="trace-26677"></a>
<a id="trace-26679"></a>
<a id="trace-26744"></a>
<a id="trace-26746"></a>
<a id="trace-26798"></a>
<a id="trace-26800"></a>
<a id="trace-26928"></a>
<a id="trace-26930"></a>
<a id="trace-26995"></a>
<a id="trace-26997"></a>
<a id="trace-27026"></a>
<a id="trace-27028"></a>
<a id="trace-27064"></a>
<a id="trace-27066"></a>
<a id="trace-27106"></a>
<a id="trace-27108"></a>
- 82.25s–87.75s (×22), actor 5, squad 0 (trace 26505): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 23532. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11361857157254626, 'next_transition': 26565}.
<a id="trace-27041"></a>
- 87.00s–87.00s (×1), actor 9, squad 1 (trace 27041): NeedSupport. Knowledge: actor memory at 85.00s, trace 26841. Next observer evidence: {'until': 88.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.8087927166545993, 'next_transition': 29230}.
<a id="trace-27128"></a>
- 88.05s–88.05s (×1), actor 1, squad 0 (trace 27128): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 85.00s, trace 26834. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00011000000000002277, 'next_transition': 27420}.
<a id="trace-27420"></a>
<a id="trace-27422"></a>
<a id="trace-27464"></a>
<a id="trace-27466"></a>
- 88.25s–88.75s (×4), actor 5, squad 0 (trace 27420): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 26838. Next observer evidence: {'until': 88.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00021857142857140133, 'next_transition': 27464}.
<a id="trace-27481"></a>
- 88.80s–88.80s (×1), actor 1, squad 0 (trace 27481): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 85.00s, trace 26834. Next observer evidence: {'until': 89.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28015257598111876, 'next_transition': 29305}.
<a id="trace-27482"></a>
- 88.80s–88.80s (×1), actor 1, squad 0 (trace 27482): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 85.00s, trace 26834. Next observer evidence: {'until': 89.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28015257598111876, 'next_transition': 29305}.
<a id="trace-29230"></a>
- 88.80s–88.80s (×1), actor 9, squad 1 (trace 29230): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 26841. Next observer evidence: {'until': 107.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30922}.
<a id="trace-29247"></a>
- 88.80s–88.80s (×1), actor 9, squad 1 (trace 29247): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 26841. Next observer evidence: {'until': 107.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30922}.
<a id="trace-29305"></a>
<a id="trace-29307"></a>
<a id="trace-29354"></a>
<a id="trace-29356"></a>
<a id="trace-29462"></a>
<a id="trace-29464"></a>
<a id="trace-29500"></a>
<a id="trace-29502"></a>
<a id="trace-29538"></a>
<a id="trace-29540"></a>
- 89.25s–91.25s (×10), actor 5, squad 0 (trace 29305): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 26838. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5038378927552086, 'next_transition': 29354}.
<a id="trace-29554"></a>
- 91.55s–91.55s (×1), actor 5, squad 0 (trace 29554): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 91.55s, trace 29554. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05047571428571424, 'next_transition': 29562}.
<a id="trace-29562"></a>
<a id="trace-29564"></a>
<a id="trace-29593"></a>
<a id="trace-29595"></a>
<a id="trace-29623"></a>
<a id="trace-29625"></a>
<a id="trace-29644"></a>
<a id="trace-29646"></a>
<a id="trace-29665"></a>
<a id="trace-29667"></a>
<a id="trace-29711"></a>
<a id="trace-29713"></a>
<a id="trace-29747"></a>
<a id="trace-29749"></a>
<a id="trace-29836"></a>
<a id="trace-29838"></a>
<a id="trace-29858"></a>
<a id="trace-29860"></a>
<a id="trace-29890"></a>
<a id="trace-29892"></a>
<a id="trace-29911"></a>
<a id="trace-29913"></a>
<a id="trace-29929"></a>
<a id="trace-29931"></a>
<a id="trace-29945"></a>
<a id="trace-29947"></a>
<a id="trace-29962"></a>
<a id="trace-29964"></a>
<a id="trace-29973"></a>
<a id="trace-29975"></a>
<a id="trace-29990"></a>
<a id="trace-29992"></a>
<a id="trace-30003"></a>
<a id="trace-30005"></a>
<a id="trace-30079"></a>
<a id="trace-30081"></a>
<a id="trace-30089"></a>
<a id="trace-30091"></a>
<a id="trace-30108"></a>
<a id="trace-30110"></a>
<a id="trace-30125"></a>
<a id="trace-30127"></a>
<a id="trace-30137"></a>
<a id="trace-30139"></a>
<a id="trace-30147"></a>
<a id="trace-30149"></a>
<a id="trace-30166"></a>
<a id="trace-30168"></a>
- 91.75s–103.25s (×48), actor 5, squad 0 (trace 29562): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 91.55s, trace 29554. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09508142857142854, 'next_transition': 29593}.
<a id="trace-30177"></a>
- 103.40s–103.40s (×1), actor 1, squad 0 (trace 30177): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 100.00s, trace 30012. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500330333428143, 'next_transition': 30180}.
<a id="trace-30180"></a>
<a id="trace-30182"></a>
<a id="trace-30208"></a>
<a id="trace-30210"></a>
- 103.75s–104.25s (×4), actor 5, squad 0 (trace 30180): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 30016. Next observer evidence: {'until': 104.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3150569950376428, 'next_transition': 30208}.
<a id="trace-30225"></a>
- 104.40s–104.40s (×1), actor 1, squad 0 (trace 30225): Reorganise: completed/failed drill. Knowledge: actor memory at 100.00s, trace 30012. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1051294063796005, 'next_transition': 30632}.
<a id="trace-30230"></a>
- 104.40s–104.40s (×1), actor 1, squad 0 (trace 30230): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 30012. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1051294063796005, 'next_transition': 30632}.
<a id="trace-30231"></a>
- 104.40s–104.40s (×1), actor 1, squad 0 (trace 30231): Reorganise complete: known contact. Knowledge: actor memory at 100.00s, trace 30012. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1051294063796005, 'next_transition': 30632}.
<a id="trace-30632"></a>
<a id="trace-30634"></a>
<a id="trace-30739"></a>
<a id="trace-30741"></a>
<a id="trace-30784"></a>
<a id="trace-30786"></a>
<a id="trace-30830"></a>
<a id="trace-30832"></a>
<a id="trace-30868"></a>
<a id="trace-30870"></a>
<a id="trace-30907"></a>
<a id="trace-30909"></a>
<a id="trace-30933"></a>
<a id="trace-30935"></a>
- 104.75s–107.75s (×14), actor 5, squad 0 (trace 30632): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 30016. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3382286617043094, 'next_transition': 30739}.
<a id="trace-30922"></a>
- 107.40s–107.40s (×1), actor 9, squad 1 (trace 30922): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 105.00s, trace 30665. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2516}.
<a id="trace-30948"></a>
- 108.10s–108.10s (×1), actor 1, squad 0 (trace 30948): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 105.00s, trace 30659. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1057287904956794, 'next_transition': 30966}.
<a id="trace-30966"></a>
<a id="trace-30968"></a>
<a id="trace-30985"></a>
<a id="trace-30987"></a>
- 108.25s–108.75s (×4), actor 5, squad 0 (trace 30966): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 30662. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.206623919428895, 'next_transition': 30985}.
<a id="trace-2286"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 2286): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21680851673406254, 'next_transition': 31009}.
<a id="trace-30995"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 30995): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.360517 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 108.95s, trace 30995. Next observer evidence: {'until': 109.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21680851673406254, 'next_transition': 31009}.
<a id="trace-30996"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 30996): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.360517 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 108.95s, trace 30996. Next observer evidence: {'until': 109.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21680851673406254, 'next_transition': 31009}.
<a id="trace-31009"></a>
<a id="trace-31011"></a>
<a id="trace-31021"></a>
<a id="trace-31023"></a>
<a id="trace-31103"></a>
<a id="trace-31105"></a>
<a id="trace-31125"></a>
<a id="trace-31127"></a>
<a id="trace-31142"></a>
<a id="trace-31144"></a>
- 109.25s–111.25s (×10), actor 5, squad 0 (trace 31009): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 30996. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21443705624668072, 'next_transition': 31021}.
<a id="trace-31158"></a>
- 111.50s–111.50s (×1), actor 1, squad 0 (trace 31158): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 110.00s, trace 31034. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0794793469630105, 'next_transition': 31482}.
<a id="trace-31159"></a>
- 111.50s–111.50s (×1), actor 1, squad 0 (trace 31159): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 31034. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0794793469630105, 'next_transition': 31482}.
<a id="trace-31482"></a>
<a id="trace-31484"></a>
<a id="trace-31506"></a>
<a id="trace-31508"></a>
<a id="trace-31530"></a>
<a id="trace-31532"></a>
<a id="trace-31549"></a>
<a id="trace-31551"></a>
<a id="trace-31567"></a>
<a id="trace-31569"></a>
<a id="trace-31595"></a>
<a id="trace-31597"></a>
<a id="trace-31617"></a>
<a id="trace-31619"></a>
<a id="trace-31697"></a>
<a id="trace-31699"></a>
<a id="trace-31725"></a>
<a id="trace-31727"></a>
<a id="trace-31760"></a>
<a id="trace-31762"></a>
<a id="trace-31809"></a>
<a id="trace-31811"></a>
<a id="trace-31853"></a>
<a id="trace-31855"></a>
<a id="trace-31880"></a>
<a id="trace-31882"></a>
<a id="trace-31896"></a>
<a id="trace-31898"></a>
<a id="trace-31931"></a>
<a id="trace-31933"></a>
<a id="trace-31946"></a>
<a id="trace-31948"></a>
<a id="trace-32027"></a>
<a id="trace-32029"></a>
<a id="trace-32040"></a>
<a id="trace-32042"></a>
<a id="trace-32074"></a>
<a id="trace-32076"></a>
<a id="trace-32091"></a>
<a id="trace-32093"></a>
<a id="trace-32107"></a>
<a id="trace-32109"></a>
<a id="trace-32127"></a>
<a id="trace-32129"></a>
<a id="trace-32149"></a>
<a id="trace-32151"></a>
<a id="trace-32161"></a>
<a id="trace-32163"></a>
<a id="trace-32184"></a>
<a id="trace-32186"></a>
<a id="trace-32197"></a>
<a id="trace-32199"></a>
<a id="trace-32276"></a>
<a id="trace-32278"></a>
<a id="trace-32289"></a>
<a id="trace-32291"></a>
<a id="trace-32312"></a>
<a id="trace-32314"></a>
<a id="trace-32346"></a>
<a id="trace-32348"></a>
- 111.75s–126.75s (×60), actor 5, squad 0 (trace 31482): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 31037. Next observer evidence: {'until': 112.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23702892513539428, 'next_transition': 31506}.
<a id="trace-2516"></a>
- 125.75s–125.75s (×1), actor 5, squad 1 (events line 2516): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 136.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2639}.
<a id="trace-32296"></a>
- 125.75s–125.75s (×1), actor 5, squad 1 (trace 32296): renew committed intent (75 s lifetime). Knowledge: actor memory at 125.75s, trace 32296. Next observer evidence: {'until': 136.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2639}.
<a id="trace-32364"></a>
- 127.05s–127.05s (×1), actor 1, squad 0 (trace 32364): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 32210. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18105850733137738, 'next_transition': 32592}.
<a id="trace-32421"></a>
- 127.05s–127.05s (×1), actor 1, squad 0 (trace 32421): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 32210. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18105850733137738, 'next_transition': 32592}.
<a id="trace-32592"></a>
<a id="trace-32594"></a>
<a id="trace-32606"></a>
<a id="trace-32608"></a>
<a id="trace-32662"></a>
<a id="trace-32664"></a>
<a id="trace-32700"></a>
<a id="trace-32702"></a>
<a id="trace-32729"></a>
<a id="trace-32731"></a>
<a id="trace-32752"></a>
<a id="trace-32754"></a>
<a id="trace-32834"></a>
<a id="trace-32836"></a>
- 127.25s–130.30s (×14), actor 5, squad 0 (trace 32592): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.75s, trace 32296. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2578054477013049, 'next_transition': 32606}.
<a id="trace-32850"></a>
- 130.50s–130.50s (×1), actor 1, squad 0 (trace 32850): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 130.00s, trace 32764. Next observer evidence: {'until': 130.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574977922265896, 'next_transition': 32852}.
<a id="trace-32852"></a>
- 130.75s–130.75s (×1), actor 1, squad 0 (trace 32852): Reorganise: completed/failed drill. Knowledge: actor memory at 130.00s, trace 32764. Next observer evidence: {'until': 130.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15750384973469714, 'next_transition': 32983}.
<a id="trace-32855"></a>
- 130.75s–130.75s (×1), actor 1, squad 0 (trace 32855): ReactToContact: cover and return fire. Knowledge: actor memory at 130.00s, trace 32764. Next observer evidence: {'until': 130.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15750384973469714, 'next_transition': 32983}.
<a id="trace-32856"></a>
- 130.75s–130.75s (×1), actor 1, squad 0 (trace 32856): Reorganise complete: known contact. Knowledge: actor memory at 130.00s, trace 32764. Next observer evidence: {'until': 130.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15750384973469714, 'next_transition': 32983}.
<a id="trace-32983"></a>
<a id="trace-32985"></a>
<a id="trace-33006"></a>
<a id="trace-33008"></a>
<a id="trace-33025"></a>
<a id="trace-33027"></a>
<a id="trace-33050"></a>
<a id="trace-33052"></a>
<a id="trace-33065"></a>
<a id="trace-33067"></a>
<a id="trace-33088"></a>
<a id="trace-33090"></a>
<a id="trace-33117"></a>
<a id="trace-33119"></a>
<a id="trace-33137"></a>
<a id="trace-33139"></a>
- 130.80s–134.30s (×16), actor 5, squad 0 (trace 32983): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 32765. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4722608078087978, 'next_transition': 33006}.
<a id="trace-33145"></a>
- 134.50s–134.50s (×1), actor 1, squad 0 (trace 33145): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 130.00s, trace 32764. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417842353751404, 'next_transition': 33274}.
<a id="trace-33146"></a>
- 134.50s–134.50s (×1), actor 1, squad 0 (trace 33146): rearward bound: one stationary suppressing element. Knowledge: actor memory at 130.00s, trace 32764. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417842353751404, 'next_transition': 33274}.
<a id="trace-33274"></a>
<a id="trace-33276"></a>
<a id="trace-33351"></a>
<a id="trace-33353"></a>
<a id="trace-33373"></a>
<a id="trace-33375"></a>
<a id="trace-33390"></a>
<a id="trace-33392"></a>
- 134.80s–136.30s (×8), actor 5, squad 0 (trace 33274): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 32765. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418359290085224, 'next_transition': 33351}.
<a id="trace-2638"></a>
- 136.55s–136.55s (×1), actor 5, squad 0 (events line 2638): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417889089283684, 'next_transition': 33408}.
<a id="trace-2639"></a>
- 136.55s–136.55s (×1), actor 5, squad 1 (events line 2639): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33453}.
<a id="trace-33400"></a>
- 136.55s–136.55s (×1), actor 5, squad 0 (trace 33400): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229729 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 136.55s, trace 33400. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417889089283684, 'next_transition': 33408}.
<a id="trace-33401"></a>
- 136.55s–136.55s (×1), actor 5, squad 0 (trace 33401): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229729 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 136.55s, trace 33401. Next observer evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417889089283684, 'next_transition': 33408}.
<a id="trace-33402"></a>
- 136.55s–136.55s (×1), actor 5, squad 1 (trace 33402): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229729 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 136.55s, trace 33402. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33453}.
<a id="trace-33403"></a>
- 136.55s–136.55s (×1), actor 5, squad 1 (trace 33403): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229729 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 136.55s, trace 33403. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33453}.
<a id="trace-33408"></a>
<a id="trace-33410"></a>
<a id="trace-33437"></a>
<a id="trace-33439"></a>
<a id="trace-33448"></a>
<a id="trace-33450"></a>
<a id="trace-33519"></a>
<a id="trace-33521"></a>
- 136.80s–138.30s (×8), actor 5, squad 0 (trace 33408): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 136.55s, trace 33403. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417994365955686, 'next_transition': 33437}.
<a id="trace-33453"></a>
- 137.85s–137.85s (×1), actor 9, squad 1 (trace 33453): Withdraw to received rally. Knowledge: actor memory at 135.00s, trace 33284. Next observer evidence: {'until': 152.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000000000000004, 'next_transition': 34422}.
<a id="trace-33454"></a>
- 137.85s–137.85s (×1), actor 9, squad 1 (trace 33454): rearward bound: one stationary suppressing element. Knowledge: actor memory at 135.00s, trace 33284. Next observer evidence: {'until': 152.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000000000000004, 'next_transition': 34422}.
<a id="trace-33530"></a>
- 138.55s–138.55s (×1), actor 1, squad 0 (trace 33530): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 135.00s, trace 33280. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5596365804437923, 'next_transition': 33538}.
<a id="trace-33538"></a>
<a id="trace-33540"></a>
<a id="trace-33558"></a>
<a id="trace-33560"></a>
<a id="trace-33572"></a>
<a id="trace-33574"></a>
<a id="trace-33646"></a>
<a id="trace-33648"></a>
<a id="trace-33662"></a>
<a id="trace-33664"></a>
<a id="trace-33679"></a>
<a id="trace-33681"></a>
<a id="trace-33697"></a>
<a id="trace-33699"></a>
<a id="trace-33714"></a>
<a id="trace-33716"></a>
<a id="trace-33730"></a>
<a id="trace-33732"></a>
<a id="trace-33748"></a>
<a id="trace-33750"></a>
<a id="trace-33763"></a>
<a id="trace-33765"></a>
<a id="trace-33789"></a>
<a id="trace-33791"></a>
<a id="trace-33806"></a>
<a id="trace-33808"></a>
<a id="trace-33906"></a>
<a id="trace-33908"></a>
<a id="trace-33944"></a>
<a id="trace-33946"></a>
<a id="trace-33979"></a>
<a id="trace-33981"></a>
<a id="trace-34010"></a>
<a id="trace-34012"></a>
<a id="trace-34056"></a>
<a id="trace-34058"></a>
<a id="trace-34095"></a>
<a id="trace-34097"></a>
<a id="trace-34125"></a>
<a id="trace-34127"></a>
<a id="trace-34146"></a>
<a id="trace-34148"></a>
<a id="trace-34180"></a>
<a id="trace-34182"></a>
<a id="trace-34197"></a>
<a id="trace-34199"></a>
<a id="trace-34275"></a>
<a id="trace-34277"></a>
<a id="trace-34301"></a>
<a id="trace-34303"></a>
- 138.80s–150.80s (×50), actor 5, squad 0 (trace 33538): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 136.55s, trace 33403. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6705784602191243, 'next_transition': 33558}.
<a id="trace-34309"></a>
- 151.05s–151.05s (×1), actor 1, squad 0 (trace 34309): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 34204. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340002143959231, 'next_transition': 34371}.
<a id="trace-34310"></a>
- 151.05s–151.05s (×1), actor 1, squad 0 (trace 34310): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 34204. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340002143959231, 'next_transition': 34371}.
<a id="trace-34371"></a>
<a id="trace-34373"></a>
<a id="trace-34384"></a>
<a id="trace-34386"></a>
<a id="trace-34414"></a>
<a id="trace-34416"></a>
<a id="trace-34429"></a>
<a id="trace-34431"></a>
<a id="trace-34459"></a>
<a id="trace-34461"></a>
<a id="trace-34473"></a>
<a id="trace-34475"></a>
<a id="trace-34493"></a>
<a id="trace-34495"></a>
<a id="trace-34508"></a>
<a id="trace-34510"></a>
<a id="trace-34584"></a>
<a id="trace-34586"></a>
<a id="trace-34594"></a>
<a id="trace-34596"></a>
<a id="trace-34613"></a>
<a id="trace-34615"></a>
<a id="trace-34627"></a>
<a id="trace-34629"></a>
<a id="trace-34656"></a>
<a id="trace-34658"></a>
<a id="trace-34665"></a>
<a id="trace-34667"></a>
<a id="trace-34684"></a>
<a id="trace-34686"></a>
<a id="trace-34714"></a>
<a id="trace-34716"></a>
<a id="trace-34791"></a>
<a id="trace-34793"></a>
<a id="trace-34818"></a>
<a id="trace-34820"></a>
<a id="trace-34843"></a>
<a id="trace-34845"></a>
<a id="trace-34866"></a>
<a id="trace-34868"></a>
<a id="trace-34888"></a>
<a id="trace-34890"></a>
<a id="trace-34966"></a>
<a id="trace-34968"></a>
- 151.30s–165.30s (×44), actor 5, squad 0 (trace 34371): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 34205. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.340200064318777, 'next_transition': 34384}.
<a id="trace-34422"></a>
- 152.40s–152.40s (×1), actor 9, squad 1 (trace 34422): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 34208. Next observer evidence: {'until': 171.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2887}.
<a id="trace-34423"></a>
- 152.40s–152.40s (×1), actor 9, squad 1 (trace 34423): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 34208. Next observer evidence: {'until': 171.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2887}.
<a id="trace-35048"></a>
<a id="trace-35050"></a>
<a id="trace-35118"></a>
<a id="trace-35120"></a>
<a id="trace-35138"></a>
<a id="trace-35140"></a>
- 169.30s–171.30s (×6), actor 1, squad 0 (trace 35048): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 165.00s, trace 34903. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560863211300681, 'next_transition': 35118}.
<a id="trace-2886"></a>
- 171.40s–171.40s (×1), actor 1, squad 0 (events line 2886): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2887"></a>
- 171.40s–171.40s (×1), actor 1, squad 1 (events line 2887): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-35148"></a>
- 171.40s–171.40s (×1), actor 1, squad 0 (trace 35148): renew committed intent (75 s lifetime). Knowledge: actor memory at 171.40s, trace 35148. Next observer evidence: None.
<a id="trace-35149"></a>
- 171.40s–171.40s (×1), actor 1, squad 1 (trace 35149): renew committed intent (75 s lifetime). Knowledge: actor memory at 171.40s, trace 35149. Next observer evidence: {'until': 201.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3319}.
<a id="trace-35154"></a>
- 171.45s–171.45s (×1), actor 1, squad 0 (trace 35154): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 171.40s, trace 35149. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35239}.
<a id="trace-35176"></a>
- 171.45s–171.45s (×1), actor 1, squad 0 (trace 35176): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 171.40s, trace 35149. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35239}.
<a id="trace-35239"></a>
<a id="trace-35241"></a>
<a id="trace-35266"></a>
<a id="trace-35288"></a>
<a id="trace-35290"></a>
<a id="trace-35364"></a>
<a id="trace-35384"></a>
<a id="trace-35386"></a>
<a id="trace-35406"></a>
<a id="trace-35408"></a>
<a id="trace-35426"></a>
<a id="trace-35428"></a>
<a id="trace-35447"></a>
<a id="trace-35449"></a>
<a id="trace-35524"></a>
<a id="trace-35526"></a>
<a id="trace-35550"></a>
<a id="trace-35552"></a>
<a id="trace-35575"></a>
<a id="trace-35577"></a>
<a id="trace-35597"></a>
<a id="trace-35599"></a>
<a id="trace-35623"></a>
<a id="trace-35625"></a>
<a id="trace-35700"></a>
<a id="trace-35702"></a>
<a id="trace-35729"></a>
<a id="trace-35731"></a>
- 172.30s–186.30s (×28), actor 1, squad 0 (trace 35239): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 171.40s, trace 35149. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9639449984309264, 'next_transition': 35266}.
<a id="trace-35752"></a>
- 187.05s–187.05s (×1), actor 1, squad 0 (trace 35752): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 185.00s, trace 35643. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35817}.
<a id="trace-35753"></a>
- 187.05s–187.05s (×1), actor 1, squad 0 (trace 35753): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 185.00s, trace 35643. Next observer evidence: {'until': 187.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35817}.
<a id="trace-35817"></a>
<a id="trace-35819"></a>
<a id="trace-35853"></a>
<a id="trace-35855"></a>
<a id="trace-35881"></a>
<a id="trace-35883"></a>
<a id="trace-35961"></a>
<a id="trace-35980"></a>
<a id="trace-35982"></a>
<a id="trace-36010"></a>
<a id="trace-36012"></a>
<a id="trace-36041"></a>
<a id="trace-36043"></a>
<a id="trace-36074"></a>
<a id="trace-36076"></a>
<a id="trace-36159"></a>
<a id="trace-36161"></a>
<a id="trace-36177"></a>
<a id="trace-36179"></a>
<a id="trace-36199"></a>
<a id="trace-36201"></a>
<a id="trace-36223"></a>
<a id="trace-36225"></a>
<a id="trace-36256"></a>
<a id="trace-36258"></a>
<a id="trace-36336"></a>
<a id="trace-36338"></a>
<a id="trace-36368"></a>
<a id="trace-36370"></a>
<a id="trace-36398"></a>
<a id="trace-36400"></a>
- 187.30s–202.30s (×31), actor 1, squad 0 (trace 35817): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 185.00s, trace 35643. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35853}.
<a id="trace-36422"></a>
- 203.25s–203.25s (×1), actor 1, squad 0 (trace 36422): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 200.00s, trace 36277. Next observer evidence: None.
<a id="trace-36423"></a>
- 203.25s–203.25s (×1), actor 1, squad 0 (trace 36423): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 200.00s, trace 36277. Next observer evidence: None.
<a id="trace-36478"></a>
<a id="trace-36480"></a>
<a id="trace-36508"></a>
<a id="trace-36510"></a>
<a id="trace-36587"></a>
<a id="trace-36589"></a>
<a id="trace-36618"></a>
<a id="trace-36620"></a>
<a id="trace-36649"></a>
<a id="trace-36651"></a>
- 203.30s–207.30s (×10), actor 1, squad 0 (trace 36478): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 200.00s, trace 36277. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05668520530085307, 'next_transition': 36508}.
<a id="trace-36670"></a>
- 207.85s–207.85s (×1), actor 1, squad 0 (trace 36670): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 205.00s, trace 36525. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3264485947281744, 'next_transition': 36681}.
<a id="trace-36681"></a>
<a id="trace-36683"></a>
<a id="trace-36718"></a>
<a id="trace-36720"></a>
<a id="trace-36792"></a>
<a id="trace-36794"></a>
<a id="trace-36818"></a>
<a id="trace-36820"></a>
<a id="trace-36843"></a>
<a id="trace-36845"></a>
<a id="trace-36873"></a>
<a id="trace-36875"></a>
<a id="trace-36908"></a>
<a id="trace-36910"></a>
<a id="trace-36981"></a>
<a id="trace-36983"></a>
<a id="trace-37005"></a>
<a id="trace-37007"></a>
<a id="trace-37025"></a>
<a id="trace-37027"></a>
<a id="trace-37047"></a>
<a id="trace-37049"></a>
<a id="trace-37078"></a>
<a id="trace-37080"></a>
<a id="trace-37167"></a>
<a id="trace-37169"></a>
<a id="trace-37188"></a>
<a id="trace-37190"></a>
<a id="trace-37211"></a>
<a id="trace-37213"></a>
<a id="trace-37231"></a>
<a id="trace-37233"></a>
<a id="trace-37257"></a>
<a id="trace-37259"></a>
<a id="trace-37335"></a>
<a id="trace-37337"></a>
<a id="trace-37362"></a>
<a id="trace-37364"></a>
<a id="trace-37392"></a>
<a id="trace-37394"></a>
<a id="trace-37418"></a>
<a id="trace-37420"></a>
<a id="trace-37443"></a>
<a id="trace-37445"></a>
<a id="trace-37515"></a>
<a id="trace-37517"></a>
<a id="trace-37537"></a>
<a id="trace-37539"></a>
<a id="trace-37563"></a>
- 208.30s–232.30s (×49), actor 1, squad 0 (trace 36681): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 205.00s, trace 36525. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3264485947281744, 'next_transition': 36718}.
<a id="trace-3318"></a>
- 233.30s–233.30s (×1), actor 1, squad 0 (events line 3318): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37632}.
<a id="trace-3319"></a>
- 233.30s–233.30s (×1), actor 1, squad 1 (events line 3319): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3844}.
<a id="trace-37591"></a>
<a id="trace-37593"></a>
- 233.30s–233.30s (×2), actor 1, squad 0 (trace 37591): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 37458. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37632}.
<a id="trace-37600"></a>
- 233.30s–233.30s (×1), actor 1, squad 0 (trace 37600): renew committed intent (75 s lifetime). Knowledge: actor memory at 233.30s, trace 37600. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37632}.
<a id="trace-37601"></a>
- 233.30s–233.30s (×1), actor 1, squad 1 (trace 37601): renew committed intent (75 s lifetime). Knowledge: actor memory at 233.30s, trace 37601. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3844}.
<a id="trace-37632"></a>
<a id="trace-37634"></a>
<a id="trace-37705"></a>
<a id="trace-37707"></a>
<a id="trace-37725"></a>
<a id="trace-37727"></a>
<a id="trace-37744"></a>
<a id="trace-37746"></a>
<a id="trace-37767"></a>
<a id="trace-37769"></a>
<a id="trace-37796"></a>
<a id="trace-37798"></a>
<a id="trace-37880"></a>
<a id="trace-37882"></a>
<a id="trace-37899"></a>
<a id="trace-37901"></a>
<a id="trace-37920"></a>
<a id="trace-37922"></a>
<a id="trace-37941"></a>
<a id="trace-37943"></a>
<a id="trace-37966"></a>
<a id="trace-37968"></a>
<a id="trace-38046"></a>
<a id="trace-38048"></a>
<a id="trace-38074"></a>
<a id="trace-38076"></a>
<a id="trace-38107"></a>
<a id="trace-38109"></a>
<a id="trace-38126"></a>
<a id="trace-38128"></a>
<a id="trace-38148"></a>
<a id="trace-38150"></a>
<a id="trace-38223"></a>
<a id="trace-38225"></a>
- 234.30s–250.30s (×34), actor 1, squad 0 (trace 37632): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 233.30s, trace 37601. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37705}.
<a id="trace-3453"></a>
- 250.40s–250.40s (×1), actor 1, squad 0 (events line 3453): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-38230"></a>
- 250.40s–250.40s (×1), actor 1, squad 0 (trace 38230): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.832837 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 250.40s, trace 38230. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38245}.
<a id="trace-38231"></a>
- 250.40s–250.40s (×1), actor 1, squad 0 (trace 38231): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.832837 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 250.40s, trace 38231. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38245}.
<a id="trace-38245"></a>
<a id="trace-38247"></a>
<a id="trace-38276"></a>
<a id="trace-38278"></a>
- 251.30s–252.30s (×4), actor 1, squad 0 (trace 38245): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.40s, trace 38231. Next observer evidence: {'until': 252.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38276}.
<a id="trace-38294"></a>
- 252.80s–252.80s (×1), actor 1, squad 0 (trace 38294): MoveTactically. Knowledge: actor memory at 250.40s, trace 38231. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3485}.
<a id="trace-38295"></a>
- 252.80s–252.80s (×1), actor 1, squad 0 (trace 38295): traveling overwatch. Knowledge: actor memory at 250.40s, trace 38231. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3485}.
<a id="trace-38296"></a>
- 252.80s–252.80s (×1), actor 1, squad 0 (trace 38296): received platoon directive. Knowledge: actor memory at 250.40s, trace 38231. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3485}.
<a id="trace-3485"></a>
- 253.25s–253.25s (×1), actor 1, squad 0 (events line 3485): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-38312"></a>
- 253.25s–253.25s (×1), actor 1, squad 0 (trace 38312): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.926816 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 253.25s, trace 38312. Next observer evidence: None.
<a id="trace-38313"></a>
- 253.25s–253.25s (×1), actor 1, squad 0 (trace 38313): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.926816 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 253.25s, trace 38313. Next observer evidence: None.
<a id="trace-38318"></a>
<a id="trace-38320"></a>
- 253.30s–253.30s (×2), actor 1, squad 0 (trace 38318): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 253.25s, trace 38313. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38339}.
<a id="trace-38339"></a>
- 253.80s–253.80s (×1), actor 1, squad 0 (trace 38339): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 253.25s, trace 38313. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38410}.
<a id="trace-38410"></a>
<a id="trace-38412"></a>
<a id="trace-38486"></a>
<a id="trace-38488"></a>
- 254.30s–255.30s (×4), actor 1, squad 0 (trace 38410): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 253.25s, trace 38313. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5669849314576179, 'next_transition': 38486}.
<a id="trace-38503"></a>
- 255.75s–255.75s (×1), actor 1, squad 0 (trace 38503): received platoon directive. Knowledge: actor memory at 255.00s, trace 38429. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6804397640496904, 'next_transition': 38567}.
<a id="trace-38567"></a>
<a id="trace-38569"></a>
<a id="trace-38596"></a>
<a id="trace-38598"></a>
<a id="trace-38627"></a>
<a id="trace-38629"></a>
- 256.30s–258.30s (×6), actor 1, squad 0 (trace 38567): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 255.00s, trace 38429. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1305904309253656, 'next_transition': 38596}.
<a id="trace-3531"></a>
- 258.85s–258.85s (×1), actor 1, squad 0 (events line 3531): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-38648"></a>
- 258.85s–258.85s (×1), actor 1, squad 0 (trace 38648): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 258.85s, trace 38648. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536214556213145, 'next_transition': 38665}.
<a id="trace-38649"></a>
- 258.85s–258.85s (×1), actor 1, squad 0 (trace 38649): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 258.85s, trace 38649. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4536214556213145, 'next_transition': 38665}.
<a id="trace-38665"></a>
<a id="trace-38667"></a>
<a id="trace-38750"></a>
<a id="trace-38752"></a>
<a id="trace-38775"></a>
<a id="trace-38777"></a>
- 259.30s–261.30s (×6), actor 1, squad 0 (trace 38665): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 258.85s, trace 38649. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.133981139613881, 'next_transition': 38750}.
<a id="trace-38785"></a>
- 261.35s–261.35s (×1), actor 1, squad 0 (trace 38785): traveling. Knowledge: actor memory at 260.00s, trace 38692. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340265296720355, 'next_transition': 38907}.
<a id="trace-38786"></a>
- 261.35s–261.35s (×1), actor 1, squad 0 (trace 38786): received platoon directive. Knowledge: actor memory at 260.00s, trace 38692. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1340265296720355, 'next_transition': 38907}.
<a id="trace-38907"></a>
<a id="trace-38909"></a>
<a id="trace-38935"></a>
<a id="trace-38937"></a>
<a id="trace-38971"></a>
<a id="trace-38973"></a>
<a id="trace-39055"></a>
<a id="trace-39057"></a>
<a id="trace-39084"></a>
<a id="trace-39086"></a>
<a id="trace-39124"></a>
<a id="trace-39126"></a>
<a id="trace-39153"></a>
<a id="trace-39155"></a>
<a id="trace-39180"></a>
<a id="trace-39182"></a>
<a id="trace-39261"></a>
<a id="trace-39263"></a>
<a id="trace-39288"></a>
<a id="trace-39290"></a>
<a id="trace-39318"></a>
<a id="trace-39320"></a>
<a id="trace-39351"></a>
<a id="trace-39353"></a>
<a id="trace-39383"></a>
<a id="trace-39385"></a>
- 262.30s–274.30s (×26), actor 1, squad 0 (trace 38907): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 260.00s, trace 38692. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8143505759487013, 'next_transition': 38935}.
<a id="trace-39392"></a>
- 274.30s–274.30s (×1), actor 1, squad 0 (trace 39392): matching received arrivals: traveling stage complete. Knowledge: actor memory at 270.00s, trace 39201. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339773123832768, 'next_transition': 39563}.
<a id="trace-39563"></a>
<a id="trace-39565"></a>
<a id="trace-39589"></a>
<a id="trace-39591"></a>
<a id="trace-39618"></a>
<a id="trace-39620"></a>
<a id="trace-39647"></a>
<a id="trace-39649"></a>
<a id="trace-39680"></a>
<a id="trace-39682"></a>
<a id="trace-39772"></a>
<a id="trace-39774"></a>
<a id="trace-39794"></a>
<a id="trace-39796"></a>
<a id="trace-39824"></a>
<a id="trace-39826"></a>
<a id="trace-39849"></a>
<a id="trace-39851"></a>
<a id="trace-39880"></a>
<a id="trace-39882"></a>
<a id="trace-39963"></a>
<a id="trace-39965"></a>
<a id="trace-39996"></a>
<a id="trace-39998"></a>
- 275.30s–286.30s (×24), actor 1, squad 0 (trace 39563): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 275.00s, trace 39501. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2678512476698343, 'next_transition': 39589}.
<a id="trace-40010"></a>
- 286.65s–286.65s (×1), actor 1, squad 0 (trace 40010): matching received arrivals: deployment leg complete. Knowledge: actor memory at 285.00s, trace 39899. Next observer evidence: {'until': 287.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40025}.
<a id="trace-40025"></a>
<a id="trace-40027"></a>
<a id="trace-40050"></a>
<a id="trace-40052"></a>
<a id="trace-40077"></a>
<a id="trace-40079"></a>
- 287.30s–289.30s (×6), actor 1, squad 0 (trace 40025): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 285.00s, trace 39899. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40050}.
<a id="trace-40088"></a>
- 289.65s–289.65s (×1), actor 1, squad 0 (trace 40088): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 289.65s, trace 40088. Next observer evidence: None.
<a id="trace-40089"></a>
- 289.65s–289.65s (×1), actor 1, squad 0 (trace 40089): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 289.65s, trace 40089. Next observer evidence: None.
<a id="trace-3790"></a>
- 289.65s–289.65s (×1), actor 1, squad 0 (events line 3790): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40157}.
<a id="trace-40157"></a>
<a id="trace-40159"></a>
<a id="trace-40181"></a>
<a id="trace-40183"></a>
<a id="trace-40210"></a>
<a id="trace-40212"></a>
- 290.30s–292.30s (×6), actor 1, squad 0 (trace 40157): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 290.00s, trace 40096. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40181}.
<a id="trace-40217"></a>
- 292.65s–292.65s (×1), actor 1, squad 0 (trace 40217): Reorganise: completed/failed drill. Knowledge: actor memory at 290.00s, trace 40096. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40379}.
<a id="trace-40220"></a>
- 292.65s–292.65s (×1), actor 1, squad 0 (trace 40220): MoveTactically. Knowledge: actor memory at 290.00s, trace 40096. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40379}.
<a id="trace-40221"></a>
- 292.65s–292.65s (×1), actor 1, squad 0 (trace 40221): traveling overwatch. Knowledge: actor memory at 290.00s, trace 40096. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40379}.
<a id="trace-40222"></a>
- 292.65s–292.65s (×1), actor 1, squad 0 (trace 40222): Reorganise complete. Knowledge: actor memory at 290.00s, trace 40096. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40379}.
<a id="trace-40379"></a>
<a id="trace-40381"></a>
<a id="trace-40411"></a>
<a id="trace-40413"></a>
<a id="trace-40493"></a>
<a id="trace-40495"></a>
<a id="trace-40519"></a>
<a id="trace-40521"></a>
<a id="trace-40547"></a>
<a id="trace-40549"></a>
<a id="trace-40581"></a>
<a id="trace-40609"></a>
<a id="trace-40611"></a>
<a id="trace-40699"></a>
<a id="trace-40717"></a>
<a id="trace-40719"></a>
- 293.30s–301.30s (×16), actor 1, squad 0 (trace 40379): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 290.00s, trace 40096. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0772666840710916, 'next_transition': 40411}.
<a id="trace-3844"></a>
- 295.25s–295.25s (×1), actor 1, squad 1 (events line 3844): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 325.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4280}.
<a id="trace-40490"></a>
- 295.25s–295.25s (×1), actor 1, squad 1 (trace 40490): renew committed intent (75 s lifetime). Knowledge: actor memory at 295.25s, trace 40490. Next observer evidence: {'until': 325.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4280}.
<a id="trace-40734"></a>
- 301.80s–301.80s (×1), actor 1, squad 0 (trace 40734): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 301.80s, trace 40734. Next observer evidence: {'until': 302.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6271006963178085, 'next_transition': 40740}.
<a id="trace-40740"></a>
- 302.25s–302.25s (×1), actor 1, squad 0 (trace 40740): ReactToContact: cover and return fire. Knowledge: actor memory at 301.80s, trace 40734. Next observer evidence: None.
<a id="trace-40741"></a>
- 302.25s–302.25s (×1), actor 1, squad 0 (trace 40741): bounding overwatch. Knowledge: actor memory at 301.80s, trace 40734. Next observer evidence: None.
<a id="trace-40742"></a>
- 302.25s–302.25s (×1), actor 1, squad 0 (trace 40742): new contact inside 100 m. Knowledge: actor memory at 301.80s, trace 40734. Next observer evidence: None.
<a id="trace-40912"></a>
<a id="trace-40914"></a>
<a id="trace-40942"></a>
<a id="trace-40944"></a>
- 302.30s–303.30s (×4), actor 1, squad 0 (trace 40912): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 301.80s, trace 40734. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.313202285879305, 'next_transition': 40942}.
<a id="trace-40953"></a>
- 303.65s–303.65s (×1), actor 1, squad 0 (trace 40953): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229038 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 303.65s, trace 40953. Next observer evidence: None.
<a id="trace-40954"></a>
- 303.65s–303.65s (×1), actor 1, squad 0 (trace 40954): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229038 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 303.65s, trace 40954. Next observer evidence: None.
<a id="trace-3940"></a>
- 303.65s–303.65s (×1), actor 1, squad 0 (events line 3940): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.360800113551215, 'next_transition': 40971}.
<a id="trace-40971"></a>
<a id="trace-40973"></a>
<a id="trace-41050"></a>
<a id="trace-41052"></a>
- 304.30s–305.30s (×4), actor 1, squad 0 (trace 40971): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 303.65s, trace 40954. Next observer evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.257263592986207, 'next_transition': 41050}.
<a id="trace-41064"></a>
- 305.85s–305.85s (×1), actor 1, squad 0 (trace 41064): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 305.00s, trace 40991. Next observer evidence: {'until': 306.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9071949087709873, 'next_transition': 41123}.
<a id="trace-41065"></a>
- 305.85s–305.85s (×1), actor 1, squad 0 (trace 41065): rearward bound: one stationary suppressing element. Knowledge: actor memory at 305.00s, trace 40991. Next observer evidence: {'until': 306.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9071949087709873, 'next_transition': 41123}.
<a id="trace-41123"></a>
<a id="trace-41125"></a>
<a id="trace-41140"></a>
<a id="trace-41142"></a>
<a id="trace-41162"></a>
<a id="trace-41164"></a>
<a id="trace-41186"></a>
<a id="trace-41188"></a>
<a id="trace-41260"></a>
<a id="trace-41262"></a>
<a id="trace-41280"></a>
<a id="trace-41282"></a>
<a id="trace-41298"></a>
<a id="trace-41300"></a>
<a id="trace-41320"></a>
<a id="trace-41322"></a>
<a id="trace-41342"></a>
<a id="trace-41344"></a>
<a id="trace-41415"></a>
<a id="trace-41417"></a>
<a id="trace-41433"></a>
<a id="trace-41435"></a>
<a id="trace-41455"></a>
<a id="trace-41457"></a>
<a id="trace-41479"></a>
<a id="trace-41481"></a>
<a id="trace-41505"></a>
<a id="trace-41507"></a>
<a id="trace-41579"></a>
<a id="trace-41581"></a>
<a id="trace-41602"></a>
<a id="trace-41604"></a>
<a id="trace-41622"></a>
<a id="trace-41624"></a>
- 306.30s–322.30s (×34), actor 1, squad 0 (trace 41123): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 305.00s, trace 40991. Next observer evidence: {'until': 307.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.226797753516211, 'next_transition': 41140}.
<a id="trace-41635"></a>
- 322.65s–322.65s (×1), actor 1, squad 0 (trace 41635): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 320.00s, trace 41522. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41652}.
<a id="trace-41636"></a>
- 322.65s–322.65s (×1), actor 1, squad 0 (trace 41636): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 320.00s, trace 41522. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41652}.
<a id="trace-41652"></a>
<a id="trace-41654"></a>
<a id="trace-41688"></a>
<a id="trace-41690"></a>
<a id="trace-41779"></a>
<a id="trace-41781"></a>
- 323.30s–325.30s (×6), actor 1, squad 0 (trace 41652): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 320.00s, trace 41522. Next observer evidence: {'until': 324.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41688}.
<a id="trace-41795"></a>
- 325.90s–325.90s (×1), actor 1, squad 0 (trace 41795): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 325.00s, trace 41718. Next observer evidence: None.
<a id="trace-41798"></a>
- 325.95s–325.95s (×1), actor 1, squad 0 (trace 41798): MoveTactically. Knowledge: actor memory at 325.00s, trace 41718. Next observer evidence: {'until': 326, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41804}.
<a id="trace-41799"></a>
- 325.95s–325.95s (×1), actor 1, squad 0 (trace 41799): received platoon directive. Knowledge: actor memory at 325.00s, trace 41718. Next observer evidence: {'until': 326, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41804}.
<a id="trace-41804"></a>
- 326.00s–326.00s (×1), actor 1, squad 0 (trace 41804): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 325.00s, trace 41718. Next observer evidence: {'until': 326.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41806}.
<a id="trace-41806"></a>
<a id="trace-41808"></a>
<a id="trace-41832"></a>
<a id="trace-41854"></a>
<a id="trace-41856"></a>
<a id="trace-41881"></a>
<a id="trace-41883"></a>
<a id="trace-41963"></a>
<a id="trace-41965"></a>
<a id="trace-42002"></a>
<a id="trace-42004"></a>
<a id="trace-42023"></a>
<a id="trace-42025"></a>
<a id="trace-42044"></a>
<a id="trace-42046"></a>
<a id="trace-42067"></a>
<a id="trace-42069"></a>
<a id="trace-42140"></a>
<a id="trace-42142"></a>
<a id="trace-42164"></a>
<a id="trace-42166"></a>
<a id="trace-42195"></a>
<a id="trace-42197"></a>
<a id="trace-42225"></a>
<a id="trace-42227"></a>
<a id="trace-42254"></a>
<a id="trace-42256"></a>
<a id="trace-42329"></a>
<a id="trace-42331"></a>
<a id="trace-42346"></a>
<a id="trace-42348"></a>
<a id="trace-42368"></a>
<a id="trace-42370"></a>
<a id="trace-42397"></a>
<a id="trace-42399"></a>
<a id="trace-42426"></a>
<a id="trace-42428"></a>
<a id="trace-42511"></a>
<a id="trace-42513"></a>
<a id="trace-42531"></a>
<a id="trace-42533"></a>
- 326.30s–346.30s (×41), actor 1, squad 0 (trace 41806): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 325.00s, trace 41718. Next observer evidence: {'until': 327.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41832}.
<a id="trace-4184"></a>
- 346.80s–346.80s (×1), actor 1, squad 0 (events line 4184): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-42547"></a>
- 346.80s–346.80s (×1), actor 1, squad 0 (trace 42547): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.182185 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 346.80s, trace 42547. Next observer evidence: {'until': 347.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42557}.
<a id="trace-42548"></a>
- 346.80s–346.80s (×1), actor 1, squad 0 (trace 42548): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.182185 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 346.80s, trace 42548. Next observer evidence: {'until': 347.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42557}.
<a id="trace-42557"></a>
<a id="trace-42559"></a>
<a id="trace-42579"></a>
<a id="trace-42581"></a>
- 347.30s–348.30s (×4), actor 1, squad 0 (trace 42557): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 346.80s, trace 42548. Next observer evidence: {'until': 348.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42579}.
<a id="trace-42595"></a>
- 349.05s–349.05s (×1), actor 1, squad 0 (trace 42595): Withdraw to received rally. Knowledge: actor memory at 346.80s, trace 42548. Next observer evidence: {'until': 349.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42656}.
<a id="trace-42596"></a>
- 349.05s–349.05s (×1), actor 1, squad 0 (trace 42596): rearward bound: one stationary suppressing element. Knowledge: actor memory at 346.80s, trace 42548. Next observer evidence: {'until': 349.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42656}.
<a id="trace-42656"></a>
<a id="trace-42658"></a>
<a id="trace-42736"></a>
<a id="trace-42738"></a>
<a id="trace-42778"></a>
<a id="trace-42780"></a>
<a id="trace-42808"></a>
<a id="trace-42810"></a>
<a id="trace-42832"></a>
<a id="trace-42858"></a>
<a id="trace-42860"></a>
<a id="trace-42933"></a>
<a id="trace-42935"></a>
<a id="trace-42955"></a>
<a id="trace-42984"></a>
<a id="trace-42986"></a>
<a id="trace-43026"></a>
<a id="trace-43028"></a>
<a id="trace-43052"></a>
<a id="trace-43054"></a>
- 349.30s–359.30s (×20), actor 1, squad 0 (trace 42656): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 346.80s, trace 42548. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5670000000000002, 'next_transition': 42736}.
<a id="trace-4280"></a>
- 358.00s–358.00s (×1), actor 1, squad 1 (events line 4280): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-43019"></a>
- 358.00s–358.00s (×1), actor 1, squad 1 (trace 43019): renew committed intent (75 s lifetime). Knowledge: actor memory at 358.00s, trace 43019. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

239 matched order/radio deliveries; 496 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.398s; maximum 2.050s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3460: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3470: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3471: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3472: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3473: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3474: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3475: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3476: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3479: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3480: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4414: estimate 13.53; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4415: estimate 13.53; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4416: estimate 13.53; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4417: estimate 13.53; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4425: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4427: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4429: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4430: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4432: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4433: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4434: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4435: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4436: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4437: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4438: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4439: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4440: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4441: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4442: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4443: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4444: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4445: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4446: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4447: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 10560: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 10562: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10564: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10565: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 10567: estimate 14.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10568: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 10569: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 10570: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10571: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10572: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10573: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10574: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 10575: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10576: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10577: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 10578: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10579: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10580: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 10581: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 10582: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10921: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 10923: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10925: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10926: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 10928: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 10929: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 10930: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 10931: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 10932: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 10933: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 10934: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 10935: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 10936: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 10937: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 10938: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 10939: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 10940: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 10941: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 10942: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 14016: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 14017: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 14018: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 14019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 14020: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 14021: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 14022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 14023: estimate 14.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 14024: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 14025: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 14026: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 14027: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 14028: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 14029: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 14030: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 14031: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 14032: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 14033: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 14034: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 14035: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 14036: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 14037: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 16317: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 16318: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 16319: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 16320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 16321: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 16322: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 16323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 16324: estimate 14.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 16325: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 16326: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 16327: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 16328: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 16329: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 16330: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 16331: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 16332: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 16333: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 16334: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 16335: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 16336: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 16337: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 16338: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 16426: estimate 14.05; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 16427: estimate 14.05; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 16963: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 16964: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 16965: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 16966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 16967: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 16968: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 16969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 16970: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 16971: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 16972: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 16973: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 16974: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 16975: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 16976: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 16977: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 16978: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 16979: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 16980: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 16981: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 16982: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 16983: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 16984: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 19189: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 19190: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 19191: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 19192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 19193: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 19194: estimate 14.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 19195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 19196: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 19197: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 19198: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 19199: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 19200: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 19201: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 19202: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 19203: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 19204: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 19205: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 19206: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 19207: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 19208: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 19209: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 21136: estimate 13.97; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 21137: estimate 13.97; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 21138: estimate 13.97; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 21139: estimate 13.97; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 21537: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 21538: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 21539: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 21540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 21541: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 21542: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 21543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 21544: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 21545: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 21546: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 21547: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 21548: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 21549: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 21550: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 21551: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 21552: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 21553: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 21554: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 21555: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 21556: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 21557: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.05s leader 5, trace 21562: estimate 14.02; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 21684: estimate 13.98; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 21685: estimate 13.98; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.05s leader 5, trace 21970: estimate 14.03; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 22083: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 22084: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 22085: estimate 13.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 22086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 22087: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 22088: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 22089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 22090: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 22091: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 22092: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 22093: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 22094: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 22095: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 22096: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 22097: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 22098: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 22099: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 22100: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 22101: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 22102: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 22103: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 71.55s leader 5, trace 22271: estimate 14.15; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 22647: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 22648: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 22649: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 22650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 22651: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 22652: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 22653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 22654: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 22655: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 22656: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 22657: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 22658: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 22659: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 22660: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 22661: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 22662: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 22663: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 22664: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 22665: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 22666: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 22667: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 23528: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 23529: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 23530: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 23531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 23532: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 23533: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 23534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 23535: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 23536: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 23537: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 23538: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 23539: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 23540: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 23541: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 23542: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 23543: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 23544: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 23545: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 23546: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 23547: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 23548: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 26834: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 26835: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 26836: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 26837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 26838: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 26839: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 26840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 26841: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 26842: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 26843: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 26844: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 26845: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 26846: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 26847: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 26848: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 26849: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 26850: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 26851: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 26852: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 26853: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 26854: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 29381: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 29382: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 29383: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 29384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 29385: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 29386: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 29387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 29388: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 29389: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 29390: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 29391: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 29392: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 29393: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 29394: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 29395: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 29396: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 29397: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 29398: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 29399: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 29400: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 91.55s leader 5, trace 29554: estimate 13.88; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 29769: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 29770: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 29771: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 29772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 29773: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 29774: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 29775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 29776: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 29777: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 29778: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 29779: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 29780: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 29781: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 29782: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 29783: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 29784: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 29785: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 29786: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 29787: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 29788: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 30012: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 30013: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 30014: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 30015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 30016: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 30017: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 30018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 30019: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 30020: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 30021: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 30022: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 30023: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 30024: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 30025: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 30026: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 30027: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 30028: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 30029: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 30030: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 30031: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 30659: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 30660: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 30661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 30662: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 30663: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 30664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 30665: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 30666: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 30667: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 30668: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 30669: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 30670: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 30671: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 30672: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 30673: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 30674: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 30675: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 30676: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 30677: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 30995: estimate 13.87; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 30996: estimate 13.87; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 31034: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 31035: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 31036: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 31037: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 31038: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 31039: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 31040: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 31041: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 31042: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 31043: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 31044: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 31045: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 31046: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 31047: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 31048: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 31049: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 31050: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 31051: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 31052: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 31628: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 31629: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 31630: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 31631: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 31632: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 31633: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 31634: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 31635: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 31636: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 31637: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 31638: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 31639: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 31640: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 31641: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 31642: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 31643: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 31644: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 31645: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 31646: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 31956: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 31957: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 31958: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 31959: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 31960: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 31961: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 31962: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 31963: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 31964: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 31965: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 31966: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 31967: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 31968: estimate 13.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 31969: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 31970: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 31971: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 31972: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 31973: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 31974: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 32210: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 32211: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 32212: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 32213: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 32214: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 32215: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 32216: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 32217: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 32218: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 32219: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 32220: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 32221: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 32222: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 32223: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 32224: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 32225: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 32226: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 32227: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 32228: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.75s leader 5, trace 32296: estimate 13.82; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 32764: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 32765: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 32766: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 32767: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 32768: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 32769: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 32770: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 32771: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 32772: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 32773: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 32774: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 32775: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 32776: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 32777: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 32778: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 32779: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 32780: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 33280: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 33281: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 33282: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 33283: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 33284: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 33285: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 33286: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 33287: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 33288: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 33289: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 33290: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 33291: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 33292: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 33293: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 33294: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 33295: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 33296: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.55s leader 5, trace 33400: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.55s leader 5, trace 33401: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.55s leader 5, trace 33402: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.55s leader 5, trace 33403: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 33578: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 33579: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 33580: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 33581: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 33582: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 33583: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 33584: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 33585: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 33586: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 33587: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 33588: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 33589: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 33590: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 33591: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 33592: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 33593: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 33594: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 33826: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 33827: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 33828: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 33829: estimate 13.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 33830: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 33831: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 33832: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 33833: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 33834: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 33835: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 33836: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 33837: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 33838: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 33839: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 33840: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 33841: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 33842: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 34204: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 34205: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 34206: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 34207: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 34208: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 34209: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 34210: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 34211: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 34212: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 34213: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 34214: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 34215: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 34216: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 34217: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 34218: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 34219: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 34220: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 34520: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 34521: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 34522: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 34523: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 34524: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 34525: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 34526: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 34527: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 34528: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 34529: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 34530: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 34531: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 34532: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 34533: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 34534: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 34535: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 34536: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 34729: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 34730: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 34731: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 34732: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 34733: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 34734: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 34735: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 34736: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 34737: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 34738: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 34739: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 34740: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 34741: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 34742: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 34743: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 34744: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 34903: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 34904: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 34905: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 34906: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 34907: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 34908: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 34909: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 34910: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 34911: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 34912: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 34913: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 34914: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 34915: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 34916: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 34917: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 34918: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 35061: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 35062: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 35063: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 35064: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 35065: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 35066: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 35067: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 35068: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 35069: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 35070: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 35071: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 35072: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 35073: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 35074: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 35075: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.40s leader 1, trace 35148: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.40s leader 1, trace 35149: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 35306: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 35307: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 35308: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 35309: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 35310: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 35311: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 35312: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 35313: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 35314: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 35315: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 35316: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 35317: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 35318: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 35319: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 35320: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 35464: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 35465: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 35466: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 35467: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 35468: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 35469: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 35470: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 35471: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 35472: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 35473: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 35474: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 35475: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 35476: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 35477: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 35478: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 35643: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 35644: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 35645: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 35646: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 35647: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 35648: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 35649: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 35650: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 35651: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 35652: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 35653: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 35654: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 35655: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 35656: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 35657: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 35901: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 35902: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 35903: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 35904: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 35905: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 35906: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 35907: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 35908: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 35909: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 35910: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 35911: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 35912: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 35913: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 35914: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 35915: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 36098: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 36099: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 36100: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 36101: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 36102: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 36103: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 36104: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 36105: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 36106: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 36107: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 36108: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 36109: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 36110: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 36111: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 36112: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 36277: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 36278: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 36279: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 36280: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 36281: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 36282: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 36283: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 36284: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 36285: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 36286: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 36287: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 36288: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 36289: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 36290: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 36291: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 36525: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 36526: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 36527: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 36528: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 36529: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 36530: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 36531: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 36532: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 36533: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 36534: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 36535: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 36536: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 36537: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 36538: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 36539: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 36734: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 36735: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 36736: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 36737: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 36738: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 36739: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 36740: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 36741: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 36742: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 36743: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 36744: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 36745: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 36746: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 36747: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 36748: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 36924: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 36925: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 36926: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 36927: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 36928: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 36929: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 36930: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 36931: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 36932: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 36933: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 36934: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 36935: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 36936: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 36937: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 36938: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 37102: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 37103: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 37104: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 37105: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 37106: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 37107: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 37108: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 37109: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 37110: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 37111: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 37112: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 37113: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 37114: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 37115: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 37116: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 37274: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 37275: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 37276: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 37277: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 37278: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 37279: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 37280: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 37281: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 37282: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 37283: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 37284: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 37285: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 37286: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 37287: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 37288: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 37458: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 37459: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 37460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 37461: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 37462: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 37463: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 37464: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 37465: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 37466: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 37467: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 37468: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 37469: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 37470: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 37471: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 37472: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.30s leader 1, trace 37600: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.30s leader 1, trace 37601: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 37647: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 37648: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 37649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 37650: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 37651: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 37652: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 37653: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 37654: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 37655: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 37656: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 37657: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 37658: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 37659: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 37660: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 37661: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 37812: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 37813: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 37814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 37815: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 37816: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 37817: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 37818: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 37819: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 37820: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 37821: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 37822: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 37823: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 37824: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 37825: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 37826: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 37986: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 37987: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 37988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 37989: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 37990: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 37991: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 37992: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 37993: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 37994: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 37995: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 37996: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 37997: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 37998: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 37999: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 38000: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 38164: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 38165: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 38166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 38167: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 38168: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 38169: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 38170: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 38171: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 38172: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 38173: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 38174: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 38175: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 38176: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 38177: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 38178: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.40s leader 1, trace 38230: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.40s leader 1, trace 38231: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.25s leader 1, trace 38312: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.25s leader 1, trace 38313: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 38429: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 38430: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 38431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 38432: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 38433: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 38434: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 38435: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 38436: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 38437: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 38438: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 38439: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 38440: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 38441: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 38442: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 38443: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 258.85s leader 1, trace 38648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 258.85s leader 1, trace 38649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 38692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 38693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 38694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 38695: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 38696: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 38697: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 38698: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 38699: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 38700: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 38701: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 38702: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 38703: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 38704: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 38705: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 38706: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 38994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 38995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 38996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 38997: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 38998: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 38999: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 39000: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 39001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 39002: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 39003: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 39004: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 39005: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 39006: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 39007: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 39008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 39201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 39202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 39203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 39204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 39205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 39206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 39207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 39208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 39209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 39210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 39211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 39212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 39213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 39214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 39215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 39501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 39502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 39503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 39504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 39505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 39506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 39507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 39508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 39509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 39510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 39511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 39512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 39513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 39514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 39515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 39707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 39708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 39709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 39710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 39711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 39712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 39713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 39714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 39715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 39716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 39717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 39718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 39719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 39720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 39721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 39899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 39900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 39901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 39902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 39903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 39904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 39905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 39906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 39907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 39908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 39909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 39910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 39911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 39912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 39913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.65s leader 1, trace 40088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.65s leader 1, trace 40089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 40096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 40097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 40098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 40099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 40100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 40101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 40102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 40103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 40104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 40105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 40106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 40107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 40108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 40109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 40110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 40429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 40430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 40431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 40432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 40433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 40434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 40435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 40436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 40437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 40438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 40439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 40440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 40441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 40442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 40443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.25s leader 1, trace 40490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 40635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 40636: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 40637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 40638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 40639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 40640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 40641: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 40642: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 40643: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 40644: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 40645: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 40646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 40647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 40648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 40649: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 301.80s leader 1, trace 40734: estimate 13.19; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 303.65s leader 1, trace 40953: estimate 13.10; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 303.65s leader 1, trace 40954: estimate 13.10; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 40991: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 40992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 40993: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 40994: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 40995: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 40996: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 40997: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 40998: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 40999: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 41000: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 41001: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 41002: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 41003: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 41004: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 41202: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 41203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 41204: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 41205: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 41206: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 41207: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 41208: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 41209: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 41210: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 41211: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 41212: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 41213: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 41214: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 41215: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 41358: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 41359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 41360: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 41361: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 41362: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 41363: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 41364: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 41365: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 41366: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 41367: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 41368: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 41369: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 41370: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 41371: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 41522: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 41523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 41524: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 41525: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 41526: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 41527: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 41528: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 41529: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 41530: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 41531: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 41532: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 41533: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 41534: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 41535: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 41718: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 41719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 41720: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 41721: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 41722: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 41723: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 41724: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 41725: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 41726: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 41727: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 41728: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 41729: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 41730: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 41731: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 41905: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 41906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 41907: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 41908: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 41909: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 41910: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 41911: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 41912: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 41913: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 41914: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 41915: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 41916: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 41917: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 41918: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 42084: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 42085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 42086: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 42087: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 42088: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 42089: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 42090: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 42091: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 42092: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 42093: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 42094: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 42095: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 42096: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 42097: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 42273: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 42274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 42275: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 42276: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 42277: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 42278: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 42279: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 42280: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 42281: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 42282: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 42283: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 42284: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 42285: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 42286: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 42453: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 42454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 42455: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 42456: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 42457: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 42458: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 42459: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 42460: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 42461: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 42462: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 42463: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 42464: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 42465: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 42466: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 346.80s leader 1, trace 42547: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 346.80s leader 1, trace 42548: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 42677: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 42678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 42679: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 42680: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 42681: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 42682: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 42683: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 42684: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 42685: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 42686: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 42687: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 42688: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 42689: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 42690: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 42873: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 42874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 42875: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 42876: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 42877: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 42878: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 42879: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 42880: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 42881: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 42882: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 42883: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 42884: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 42885: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 42886: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 1, trace 43019: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 43071: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 43072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 43073: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 43074: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 43075: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 43076: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 43077: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 43078: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 43079: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 43080: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 43081: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 43082: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 43083: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 43084: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Ellis killed in action
- 1: Bren killed in action
- 1: Dane incapacitated
- 1: Ash killed in action
- 1: Soren incapacitated
- 1: Tern incapacitated
- 1: Moss incapacitated
- 1: Iven killed in action
- 1: Reed killed in action

## Outcome attribution

- 136.55s, evidence 2638: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417889089283684, 'next_transition': 33408}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 136.55s, evidence 2639: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33453}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 136.55s, evidence 33400: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229729 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417889089283684, 'next_transition': 33408}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 136.55s, evidence 33401: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229729 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 136.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417889089283684, 'next_transition': 33408}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 136.55s, evidence 33402: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229729 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33453}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 136.55s, evidence 33403: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.229729 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33453}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.40s, evidence 2886: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 171.40s, evidence 2887: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 233.30s, evidence 3318: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37632}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 233.30s, evidence 3319: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3844}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 295.25s, evidence 3844: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 325.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4280}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 346.80s, evidence 4184: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 346.80s, evidence 42547: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.182185 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 347.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42557}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 346.80s, evidence 42548: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.182185 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 347.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 42557}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 358.00s, evidence 4280: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
