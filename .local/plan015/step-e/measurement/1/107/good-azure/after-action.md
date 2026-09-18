# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/1/107/good-azure/battle-107-1789673632831283549`

## Battle summary

**Ember** · 360 s · 533 shots.

### Turning points

- 28.9s, squad 4: contact (events line 348). First recorded contact.
- 52.0s, squad 0: withdrawal ([trace 7453](#trace-7453)). 95.5s, squad 0: took cover and returned fire.
- 68.3s, squad 0: help call ([trace 9966](#trace-9966)). 69.8s, squad 1: answered a neighbour with support by fire.
- 69.8s, squad 1: help answer ([trace 10060](#trace-10060)). 90.9s, squad 1: prepared a base of fire.
- 72.3s, squad 1: help call ([trace 12082](#trace-12082)). 96.5s, squad 0: answered a neighbour with support by fire.
- 94.5s, squad 0: help call ([trace 14835](#trace-14835)). 95.8s, squad 1: answered a neighbour with support by fire.
- 95.8s, squad 1: help answer ([trace 14967](#trace-14967)). 101.9s, squad 1: advanced tactically.
- 96.5s, squad 0: help answer ([trace 15892](#trace-15892)). 127.5s, squad 0: took cover and returned fire.
- 136.9s, squad 0: help call ([trace 23443](#trace-23443)). 138.1s, squad 1: answered a neighbour with support by fire.
- 138.1s, squad 1: help answer ([trace 23491](#trace-23491)). 138.2s, squad 1: Withdraw to received rally.
- 6 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, Withdraw to received rally and 4 further drill types; withdrew; 30 shots, 4/8 lost.
- **1** — FightHere; chose prepared a base of fire, Withdraw to received rally and 3 further drill types; no completed objective recorded; 29 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 338 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 136 shots, 0/4 lost.

### Decisions and attribution

At 73.0s, squad 1 chose HelpSquad: received need unanswered for one report round trip ([trace 12118](#trace-12118)), followed by 11 shots and 1 own casualties; estimate 16.0 against 8 distinct squad-reported contacts; At 101.9s, squad 1 chose advanced tactically ([trace 18376](#trace-18376)), followed by 5 shots and 0 own casualties; estimate 15.2 against 0 distinct squad-reported contacts; At 69.8s, squad 1 chose answered a neighbour with support by fire ([trace 10060](#trace-10060)), followed by 4 shots and 0 own casualties; estimate 14.3 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 830](#trace-830)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450037064512694, 'next_transition': 849}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 832](#trace-832)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977324265610297, 'next_transition': 1003}.

### Communication

319 matched deliveries (mean 0.37s, max 1.50s); 514 explicit drops; 4 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 28.90s, squad 4, contact, evidence events line 348: First recorded contact; .
- 52.05s, squad 0, withdrawal, evidence 7453: BreakContact: believed ratio at least two without superiority; 95.5s, squad 0: took cover and returned fire.
- 68.35s, squad 0, help call, evidence 9966: NeedSupport; 69.8s, squad 1: answered a neighbour with support by fire.
- 69.75s, squad 1, help answer, evidence 10060: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 90.9s, squad 1: prepared a base of fire.
- 72.30s, squad 1, help call, evidence 12082: NeedSupport; 96.5s, squad 0: answered a neighbour with support by fire.
- 94.45s, squad 0, help call, evidence 14835: NeedSupport; 95.8s, squad 1: answered a neighbour with support by fire.
- 95.85s, squad 1, help answer, evidence 14967: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 101.9s, squad 1: advanced tactically.
- 96.45s, squad 0, help answer, evidence 15892: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 127.5s, squad 0: took cover and returned fire.
- 136.90s, squad 0, help call, evidence 23443: NeedSupport; 138.1s, squad 1: answered a neighbour with support by fire.
- 138.10s, squad 1, help answer, evidence 23491: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 138.2s, squad 1: Withdraw to received rally.
- 138.25s, squad 1, withdrawal, evidence 23501: Withdraw to received rally; No completion observed before termination.
- 138.85s, squad 0, withdrawal, evidence 23584: Withdraw to received rally; 176.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 283.95s, squad 0, help call, evidence 32101: NeedSupport; No completion observed before termination.
- 288.25s, squad 0, withdrawal, evidence 32487: BreakContact: believed ratio at least two without superiority; 316.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 307.50s, squad 0, help call, evidence 33706: NeedSupport; No completion observed before termination.
- 332.25s, squad 0, withdrawal, evidence 34771: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915394053469063, 'next_transition': 703}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915394053469063, 'next_transition': 703}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915394053469063, 'next_transition': 703}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.504894923395208, 'next_transition': 104}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.504894923395208, 'next_transition': 104}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.504894923395208, 'next_transition': 104}.
<a id="trace-703"></a>
<a id="trace-705"></a>
<a id="trace-730"></a>
<a id="trace-732"></a>
<a id="trace-767"></a>
<a id="trace-769"></a>
<a id="trace-794"></a>
<a id="trace-796"></a>
<a id="trace-818"></a>
<a id="trace-820"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599998700444812, 'next_transition': 730}.
<a id="trace-103"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 103): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450037064512694, 'next_transition': 849}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977324265610297, 'next_transition': 1003}.
<a id="trace-830"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 830): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 830. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450037064512694, 'next_transition': 849}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450037064512694, 'next_transition': 849}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977324265610297, 'next_transition': 1003}.
<a id="trace-833"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 833): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.977324265610297, 'next_transition': 1003}.
<a id="trace-849"></a>
<a id="trace-851"></a>
<a id="trace-880"></a>
<a id="trace-882"></a>
<a id="trace-963"></a>
<a id="trace-965"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1231"></a>
<a id="trace-1233"></a>
<a id="trace-1278"></a>
<a id="trace-1280"></a>
<a id="trace-1306"></a>
<a id="trace-1308"></a>
<a id="trace-1349"></a>
<a id="trace-1351"></a>
<a id="trace-1385"></a>
<a id="trace-1387"></a>
<a id="trace-1434"></a>
<a id="trace-1436"></a>
<a id="trace-1458"></a>
<a id="trace-1460"></a>
<a id="trace-1477"></a>
<a id="trace-1479"></a>
<a id="trace-1571"></a>
<a id="trace-1573"></a>
<a id="trace-1592"></a>
<a id="trace-1594"></a>
<a id="trace-1615"></a>
<a id="trace-1617"></a>
<a id="trace-1644"></a>
<a id="trace-1646"></a>
<a id="trace-1673"></a>
<a id="trace-1675"></a>
<a id="trace-1702"></a>
<a id="trace-1704"></a>
- 4.20s–12.70s (×36), actor 5, squad 0 (trace 849): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449983137943638, 'next_transition': 880}.
<a id="trace-994"></a>
<a id="trace-1235"></a>
<a id="trace-1282"></a>
<a id="trace-1284"></a>
<a id="trace-1389"></a>
<a id="trace-1391"></a>
<a id="trace-1438"></a>
<a id="trace-1440"></a>
<a id="trace-1481"></a>
<a id="trace-1483"></a>
<a id="trace-1575"></a>
<a id="trace-1577"></a>
<a id="trace-1596"></a>
<a id="trace-1598"></a>
<a id="trace-1619"></a>
<a id="trace-1621"></a>
<a id="trace-1677"></a>
<a id="trace-1679"></a>
<a id="trace-2107"></a>
<a id="trace-2109"></a>
<a id="trace-2137"></a>
<a id="trace-2139"></a>
<a id="trace-2269"></a>
<a id="trace-2271"></a>
<a id="trace-2358"></a>
<a id="trace-2360"></a>
<a id="trace-2461"></a>
<a id="trace-2463"></a>
<a id="trace-2495"></a>
<a id="trace-2497"></a>
<a id="trace-2681"></a>
<a id="trace-2683"></a>
<a id="trace-2747"></a>
<a id="trace-2749"></a>
<a id="trace-2861"></a>
<a id="trace-2863"></a>
<a id="trace-2892"></a>
<a id="trace-2894"></a>
<a id="trace-2967"></a>
<a id="trace-2969"></a>
<a id="trace-3003"></a>
<a id="trace-3005"></a>
<a id="trace-3023"></a>
<a id="trace-3025"></a>
<a id="trace-3056"></a>
<a id="trace-3058"></a>
<a id="trace-3346"></a>
<a id="trace-3348"></a>
<a id="trace-3377"></a>
<a id="trace-3379"></a>
<a id="trace-3404"></a>
<a id="trace-3406"></a>
<a id="trace-3506"></a>
<a id="trace-3508"></a>
<a id="trace-3520"></a>
<a id="trace-3522"></a>
<a id="trace-3907"></a>
<a id="trace-3909"></a>
<a id="trace-3927"></a>
<a id="trace-3929"></a>
<a id="trace-3968"></a>
<a id="trace-3970"></a>
<a id="trace-3992"></a>
<a id="trace-3994"></a>
<a id="trace-4025"></a>
<a id="trace-4027"></a>
<a id="trace-4047"></a>
<a id="trace-4049"></a>
<a id="trace-4155"></a>
<a id="trace-4157"></a>
<a id="trace-4166"></a>
<a id="trace-4168"></a>
<a id="trace-4200"></a>
<a id="trace-4202"></a>
<a id="trace-4214"></a>
<a id="trace-4216"></a>
<a id="trace-4250"></a>
<a id="trace-4252"></a>
<a id="trace-4435"></a>
<a id="trace-4437"></a>
<a id="trace-4461"></a>
<a id="trace-4463"></a>
<a id="trace-4482"></a>
<a id="trace-4484"></a>
<a id="trace-4516"></a>
<a id="trace-4518"></a>
<a id="trace-4641"></a>
<a id="trace-4643"></a>
<a id="trace-4666"></a>
<a id="trace-4668"></a>
<a id="trace-4686"></a>
<a id="trace-4688"></a>
<a id="trace-4707"></a>
<a id="trace-4709"></a>
<a id="trace-4737"></a>
<a id="trace-4739"></a>
<a id="trace-4754"></a>
<a id="trace-4756"></a>
<a id="trace-4773"></a>
<a id="trace-4775"></a>
<a id="trace-4877"></a>
<a id="trace-4879"></a>
<a id="trace-4912"></a>
<a id="trace-4914"></a>
<a id="trace-5283"></a>
<a id="trace-5285"></a>
<a id="trace-5311"></a>
<a id="trace-5313"></a>
<a id="trace-5331"></a>
<a id="trace-5333"></a>
<a id="trace-5360"></a>
<a id="trace-5362"></a>
<a id="trace-5378"></a>
<a id="trace-5380"></a>
<a id="trace-5417"></a>
<a id="trace-5419"></a>
<a id="trace-5518"></a>
<a id="trace-5520"></a>
<a id="trace-5533"></a>
<a id="trace-5535"></a>
<a id="trace-5718"></a>
<a id="trace-5720"></a>
<a id="trace-5736"></a>
<a id="trace-5738"></a>
<a id="trace-5759"></a>
<a id="trace-5761"></a>
<a id="trace-5783"></a>
<a id="trace-5785"></a>
<a id="trace-6167"></a>
<a id="trace-6169"></a>
<a id="trace-6203"></a>
<a id="trace-6205"></a>
<a id="trace-6657"></a>
<a id="trace-6659"></a>
<a id="trace-7032"></a>
<a id="trace-7034"></a>
<a id="trace-7053"></a>
<a id="trace-7055"></a>
<a id="trace-7441"></a>
<a id="trace-7443"></a>
<a id="trace-7879"></a>
<a id="trace-7881"></a>
<a id="trace-7905"></a>
<a id="trace-7907"></a>
<a id="trace-7946"></a>
<a id="trace-7948"></a>
<a id="trace-7964"></a>
<a id="trace-7966"></a>
<a id="trace-8018"></a>
<a id="trace-8020"></a>
<a id="trace-8110"></a>
<a id="trace-8112"></a>
<a id="trace-8371"></a>
<a id="trace-8373"></a>
<a id="trace-8655"></a>
<a id="trace-8657"></a>
<a id="trace-8678"></a>
<a id="trace-8680"></a>
<a id="trace-8695"></a>
<a id="trace-8697"></a>
<a id="trace-8749"></a>
<a id="trace-8751"></a>
<a id="trace-8780"></a>
<a id="trace-8782"></a>
<a id="trace-8798"></a>
<a id="trace-8800"></a>
<a id="trace-8909"></a>
<a id="trace-8911"></a>
<a id="trace-9183"></a>
<a id="trace-9185"></a>
<a id="trace-9217"></a>
<a id="trace-9219"></a>
<a id="trace-9262"></a>
<a id="trace-9264"></a>
<a id="trace-9311"></a>
<a id="trace-9313"></a>
<a id="trace-9342"></a>
<a id="trace-9344"></a>
<a id="trace-9378"></a>
<a id="trace-9380"></a>
<a id="trace-9498"></a>
<a id="trace-9500"></a>
<a id="trace-9523"></a>
<a id="trace-9525"></a>
<a id="trace-9659"></a>
<a id="trace-9661"></a>
<a id="trace-9670"></a>
<a id="trace-9672"></a>
<a id="trace-9704"></a>
<a id="trace-9706"></a>
<a id="trace-9923"></a>
<a id="trace-9925"></a>
<a id="trace-9994"></a>
<a id="trace-9996"></a>
<a id="trace-10031"></a>
<a id="trace-10033"></a>
<a id="trace-10057"></a>
<a id="trace-10059"></a>
<a id="trace-11995"></a>
<a id="trace-11997"></a>
<a id="trace-12009"></a>
<a id="trace-12011"></a>
<a id="trace-12034"></a>
<a id="trace-12036"></a>
<a id="trace-12049"></a>
<a id="trace-12051"></a>
<a id="trace-12075"></a>
<a id="trace-12077"></a>
<a id="trace-12105"></a>
<a id="trace-12107"></a>
<a id="trace-12154"></a>
<a id="trace-12156"></a>
<a id="trace-12176"></a>
<a id="trace-12178"></a>
<a id="trace-12194"></a>
<a id="trace-12196"></a>
<a id="trace-12274"></a>
<a id="trace-12276"></a>
<a id="trace-12287"></a>
<a id="trace-12289"></a>
<a id="trace-12322"></a>
<a id="trace-12324"></a>
<a id="trace-12346"></a>
<a id="trace-12348"></a>
<a id="trace-12386"></a>
<a id="trace-12388"></a>
<a id="trace-12399"></a>
<a id="trace-12401"></a>
<a id="trace-12445"></a>
<a id="trace-12447"></a>
<a id="trace-12753"></a>
<a id="trace-12755"></a>
<a id="trace-12833"></a>
<a id="trace-12835"></a>
<a id="trace-12888"></a>
<a id="trace-12890"></a>
<a id="trace-12935"></a>
<a id="trace-12937"></a>
<a id="trace-12959"></a>
<a id="trace-12961"></a>
<a id="trace-13029"></a>
<a id="trace-13031"></a>
<a id="trace-13125"></a>
<a id="trace-13127"></a>
<a id="trace-13158"></a>
<a id="trace-13160"></a>
<a id="trace-13201"></a>
<a id="trace-13203"></a>
<a id="trace-13243"></a>
<a id="trace-13245"></a>
<a id="trace-13275"></a>
<a id="trace-13277"></a>
<a id="trace-13337"></a>
<a id="trace-13339"></a>
<a id="trace-13356"></a>
<a id="trace-13358"></a>
<a id="trace-13476"></a>
<a id="trace-13478"></a>
<a id="trace-14448"></a>
<a id="trace-14450"></a>
<a id="trace-14486"></a>
<a id="trace-14488"></a>
<a id="trace-14540"></a>
<a id="trace-14542"></a>
<a id="trace-14587"></a>
<a id="trace-14589"></a>
<a id="trace-14645"></a>
<a id="trace-14647"></a>
<a id="trace-14791"></a>
<a id="trace-14793"></a>
<a id="trace-14823"></a>
<a id="trace-14825"></a>
<a id="trace-14852"></a>
<a id="trace-14854"></a>
<a id="trace-14963"></a>
<a id="trace-14965"></a>
<a id="trace-15884"></a>
<a id="trace-15886"></a>
<a id="trace-18110"></a>
<a id="trace-18112"></a>
<a id="trace-18135"></a>
<a id="trace-18137"></a>
<a id="trace-18157"></a>
<a id="trace-18159"></a>
<a id="trace-18191"></a>
<a id="trace-18193"></a>
<a id="trace-18205"></a>
<a id="trace-18207"></a>
<a id="trace-18230"></a>
<a id="trace-18232"></a>
<a id="trace-18251"></a>
<a id="trace-18253"></a>
<a id="trace-18342"></a>
<a id="trace-18344"></a>
<a id="trace-18518"></a>
<a id="trace-18520"></a>
<a id="trace-18534"></a>
<a id="trace-18536"></a>
<a id="trace-18551"></a>
<a id="trace-18553"></a>
<a id="trace-18570"></a>
<a id="trace-18572"></a>
<a id="trace-18673"></a>
<a id="trace-18675"></a>
<a id="trace-18692"></a>
<a id="trace-18694"></a>
<a id="trace-18705"></a>
<a id="trace-18707"></a>
<a id="trace-18720"></a>
<a id="trace-18722"></a>
<a id="trace-18737"></a>
<a id="trace-18739"></a>
<a id="trace-18756"></a>
<a id="trace-18758"></a>
<a id="trace-18767"></a>
<a id="trace-18769"></a>
<a id="trace-18787"></a>
<a id="trace-18789"></a>
<a id="trace-18796"></a>
<a id="trace-18798"></a>
<a id="trace-18911"></a>
<a id="trace-18913"></a>
<a id="trace-18930"></a>
<a id="trace-18932"></a>
<a id="trace-18946"></a>
<a id="trace-18948"></a>
<a id="trace-18968"></a>
<a id="trace-18970"></a>
<a id="trace-18980"></a>
<a id="trace-18982"></a>
<a id="trace-18998"></a>
<a id="trace-19000"></a>
<a id="trace-19087"></a>
<a id="trace-19089"></a>
<a id="trace-19141"></a>
<a id="trace-19143"></a>
<a id="trace-19161"></a>
<a id="trace-19163"></a>
<a id="trace-19179"></a>
<a id="trace-19181"></a>
<a id="trace-19199"></a>
<a id="trace-19201"></a>
<a id="trace-19213"></a>
<a id="trace-19215"></a>
<a id="trace-19236"></a>
<a id="trace-19238"></a>
<a id="trace-19308"></a>
<a id="trace-19310"></a>
<a id="trace-19388"></a>
<a id="trace-19390"></a>
<a id="trace-19410"></a>
<a id="trace-19412"></a>
<a id="trace-19459"></a>
<a id="trace-19461"></a>
<a id="trace-19482"></a>
<a id="trace-19484"></a>
<a id="trace-19501"></a>
<a id="trace-19503"></a>
<a id="trace-19517"></a>
<a id="trace-19519"></a>
<a id="trace-19527"></a>
<a id="trace-19529"></a>
<a id="trace-19544"></a>
<a id="trace-19546"></a>
<a id="trace-19558"></a>
<a id="trace-19560"></a>
<a id="trace-19637"></a>
<a id="trace-19639"></a>
<a id="trace-19652"></a>
<a id="trace-19654"></a>
<a id="trace-19673"></a>
<a id="trace-19675"></a>
<a id="trace-19684"></a>
<a id="trace-19686"></a>
<a id="trace-19699"></a>
<a id="trace-19701"></a>
<a id="trace-22860"></a>
<a id="trace-22862"></a>
<a id="trace-22946"></a>
<a id="trace-22948"></a>
<a id="trace-22993"></a>
<a id="trace-22995"></a>
<a id="trace-23093"></a>
<a id="trace-23095"></a>
<a id="trace-23123"></a>
<a id="trace-23125"></a>
<a id="trace-23163"></a>
<a id="trace-23165"></a>
<a id="trace-23180"></a>
<a id="trace-23182"></a>
<a id="trace-23203"></a>
<a id="trace-23205"></a>
<a id="trace-23224"></a>
<a id="trace-23226"></a>
<a id="trace-23259"></a>
<a id="trace-23261"></a>
<a id="trace-23274"></a>
<a id="trace-23276"></a>
<a id="trace-23296"></a>
<a id="trace-23298"></a>
<a id="trace-23385"></a>
<a id="trace-23387"></a>
<a id="trace-23467"></a>
<a id="trace-23469"></a>
<a id="trace-23486"></a>
<a id="trace-23488"></a>
<a id="trace-24016"></a>
<a id="trace-24018"></a>
<a id="trace-24040"></a>
<a id="trace-24042"></a>
<a id="trace-24151"></a>
<a id="trace-24153"></a>
<a id="trace-24185"></a>
<a id="trace-24187"></a>
<a id="trace-24211"></a>
<a id="trace-24213"></a>
<a id="trace-24224"></a>
<a id="trace-24226"></a>
<a id="trace-24251"></a>
<a id="trace-24253"></a>
<a id="trace-24290"></a>
<a id="trace-24292"></a>
<a id="trace-24319"></a>
<a id="trace-24321"></a>
<a id="trace-24400"></a>
<a id="trace-24402"></a>
<a id="trace-24420"></a>
<a id="trace-24422"></a>
<a id="trace-24442"></a>
<a id="trace-24444"></a>
<a id="trace-24459"></a>
<a id="trace-24461"></a>
<a id="trace-24479"></a>
<a id="trace-24481"></a>
<a id="trace-24518"></a>
<a id="trace-24520"></a>
<a id="trace-24537"></a>
<a id="trace-24539"></a>
<a id="trace-24709"></a>
<a id="trace-24711"></a>
<a id="trace-24728"></a>
<a id="trace-24730"></a>
<a id="trace-24816"></a>
<a id="trace-24818"></a>
<a id="trace-24854"></a>
<a id="trace-24856"></a>
<a id="trace-24874"></a>
<a id="trace-24876"></a>
<a id="trace-24904"></a>
<a id="trace-24906"></a>
<a id="trace-24925"></a>
<a id="trace-24927"></a>
<a id="trace-24962"></a>
<a id="trace-24964"></a>
<a id="trace-24993"></a>
<a id="trace-24995"></a>
<a id="trace-25068"></a>
<a id="trace-25070"></a>
<a id="trace-25089"></a>
<a id="trace-25091"></a>
<a id="trace-25107"></a>
<a id="trace-25109"></a>
<a id="trace-25125"></a>
<a id="trace-25127"></a>
<a id="trace-25145"></a>
<a id="trace-25147"></a>
<a id="trace-25156"></a>
<a id="trace-25158"></a>
<a id="trace-25175"></a>
<a id="trace-25177"></a>
<a id="trace-25189"></a>
<a id="trace-25191"></a>
<a id="trace-25206"></a>
<a id="trace-25208"></a>
<a id="trace-25298"></a>
<a id="trace-25300"></a>
<a id="trace-25320"></a>
<a id="trace-25322"></a>
<a id="trace-25334"></a>
<a id="trace-25336"></a>
<a id="trace-25345"></a>
<a id="trace-25347"></a>
<a id="trace-25369"></a>
<a id="trace-25371"></a>
<a id="trace-25379"></a>
<a id="trace-25381"></a>
<a id="trace-25393"></a>
<a id="trace-25395"></a>
<a id="trace-25461"></a>
<a id="trace-25463"></a>
<a id="trace-25488"></a>
<a id="trace-25490"></a>
<a id="trace-25514"></a>
<a id="trace-25516"></a>
<a id="trace-25593"></a>
<a id="trace-25595"></a>
<a id="trace-25736"></a>
<a id="trace-25738"></a>
<a id="trace-25755"></a>
<a id="trace-25757"></a>
<a id="trace-25783"></a>
<a id="trace-25785"></a>
<a id="trace-25814"></a>
<a id="trace-25816"></a>
<a id="trace-25848"></a>
<a id="trace-25850"></a>
<a id="trace-25865"></a>
<a id="trace-25867"></a>
<a id="trace-25878"></a>
<a id="trace-25880"></a>
<a id="trace-25959"></a>
<a id="trace-25961"></a>
<a id="trace-25971"></a>
<a id="trace-25973"></a>
<a id="trace-25988"></a>
<a id="trace-25990"></a>
<a id="trace-26000"></a>
<a id="trace-26002"></a>
<a id="trace-26023"></a>
<a id="trace-26025"></a>
<a id="trace-26039"></a>
<a id="trace-26041"></a>
<a id="trace-26056"></a>
<a id="trace-26058"></a>
<a id="trace-26071"></a>
<a id="trace-26073"></a>
<a id="trace-26093"></a>
<a id="trace-26095"></a>
<a id="trace-26114"></a>
<a id="trace-26116"></a>
<a id="trace-26211"></a>
<a id="trace-26213"></a>
<a id="trace-26235"></a>
<a id="trace-26237"></a>
<a id="trace-26259"></a>
<a id="trace-26261"></a>
<a id="trace-26284"></a>
<a id="trace-26286"></a>
<a id="trace-26306"></a>
<a id="trace-26308"></a>
<a id="trace-26338"></a>
<a id="trace-26340"></a>
<a id="trace-26375"></a>
<a id="trace-26377"></a>
<a id="trace-26458"></a>
<a id="trace-26460"></a>
<a id="trace-26476"></a>
<a id="trace-26478"></a>
<a id="trace-26496"></a>
<a id="trace-26498"></a>
<a id="trace-26533"></a>
<a id="trace-26535"></a>
<a id="trace-26548"></a>
<a id="trace-26550"></a>
<a id="trace-26561"></a>
<a id="trace-26563"></a>
<a id="trace-26572"></a>
<a id="trace-26574"></a>
<a id="trace-26591"></a>
<a id="trace-26593"></a>
<a id="trace-26601"></a>
<a id="trace-26603"></a>
<a id="trace-26673"></a>
<a id="trace-26675"></a>
<a id="trace-26687"></a>
<a id="trace-26689"></a>
<a id="trace-26700"></a>
<a id="trace-26702"></a>
<a id="trace-26709"></a>
<a id="trace-26711"></a>
<a id="trace-26728"></a>
<a id="trace-26730"></a>
<a id="trace-26738"></a>
<a id="trace-26740"></a>
<a id="trace-26757"></a>
<a id="trace-26759"></a>
<a id="trace-26794"></a>
<a id="trace-26796"></a>
<a id="trace-26806"></a>
<a id="trace-26808"></a>
<a id="trace-26879"></a>
<a id="trace-26881"></a>
<a id="trace-26892"></a>
<a id="trace-26894"></a>
<a id="trace-26908"></a>
<a id="trace-26910"></a>
<a id="trace-26918"></a>
<a id="trace-26920"></a>
<a id="trace-26933"></a>
<a id="trace-26935"></a>
<a id="trace-26942"></a>
<a id="trace-26944"></a>
<a id="trace-26956"></a>
<a id="trace-26958"></a>
<a id="trace-26969"></a>
<a id="trace-26971"></a>
<a id="trace-26984"></a>
<a id="trace-26986"></a>
<a id="trace-27002"></a>
<a id="trace-27004"></a>
<a id="trace-27081"></a>
<a id="trace-27083"></a>
<a id="trace-27094"></a>
<a id="trace-27096"></a>
<a id="trace-27113"></a>
<a id="trace-27115"></a>
<a id="trace-27142"></a>
<a id="trace-27144"></a>
<a id="trace-27155"></a>
<a id="trace-27157"></a>
<a id="trace-27190"></a>
<a id="trace-27192"></a>
<a id="trace-27201"></a>
<a id="trace-27203"></a>
<a id="trace-27276"></a>
<a id="trace-27278"></a>
<a id="trace-27289"></a>
<a id="trace-27291"></a>
<a id="trace-27307"></a>
<a id="trace-27309"></a>
<a id="trace-27325"></a>
<a id="trace-27327"></a>
<a id="trace-27339"></a>
<a id="trace-27341"></a>
<a id="trace-27351"></a>
<a id="trace-27353"></a>
<a id="trace-27368"></a>
<a id="trace-27370"></a>
<a id="trace-27383"></a>
<a id="trace-27385"></a>
<a id="trace-27401"></a>
<a id="trace-27403"></a>
<a id="trace-27483"></a>
<a id="trace-27485"></a>
<a id="trace-27495"></a>
<a id="trace-27497"></a>
<a id="trace-27508"></a>
<a id="trace-27510"></a>
<a id="trace-27521"></a>
<a id="trace-27523"></a>
<a id="trace-27568"></a>
<a id="trace-27570"></a>
<a id="trace-27578"></a>
<a id="trace-27580"></a>
<a id="trace-27595"></a>
<a id="trace-27597"></a>
<a id="trace-27607"></a>
<a id="trace-27609"></a>
<a id="trace-27686"></a>
<a id="trace-27688"></a>
<a id="trace-27702"></a>
<a id="trace-27704"></a>
<a id="trace-27715"></a>
<a id="trace-27717"></a>
<a id="trace-27724"></a>
<a id="trace-27726"></a>
<a id="trace-27739"></a>
<a id="trace-27741"></a>
<a id="trace-27764"></a>
<a id="trace-27766"></a>
<a id="trace-27774"></a>
<a id="trace-27776"></a>
<a id="trace-27794"></a>
<a id="trace-27796"></a>
<a id="trace-27804"></a>
<a id="trace-27806"></a>
<a id="trace-27885"></a>
<a id="trace-27887"></a>
<a id="trace-27910"></a>
<a id="trace-27912"></a>
<a id="trace-27926"></a>
<a id="trace-27928"></a>
<a id="trace-27945"></a>
<a id="trace-27947"></a>
<a id="trace-27967"></a>
<a id="trace-27969"></a>
<a id="trace-27978"></a>
<a id="trace-27980"></a>
<a id="trace-27993"></a>
<a id="trace-27995"></a>
<a id="trace-28003"></a>
<a id="trace-28005"></a>
<a id="trace-28079"></a>
<a id="trace-28081"></a>
<a id="trace-28107"></a>
<a id="trace-28109"></a>
<a id="trace-28138"></a>
<a id="trace-28140"></a>
<a id="trace-28148"></a>
<a id="trace-28150"></a>
<a id="trace-28173"></a>
<a id="trace-28175"></a>
<a id="trace-28206"></a>
<a id="trace-28208"></a>
<a id="trace-28279"></a>
<a id="trace-28281"></a>
<a id="trace-28291"></a>
<a id="trace-28293"></a>
<a id="trace-28327"></a>
<a id="trace-28329"></a>
<a id="trace-28342"></a>
<a id="trace-28344"></a>
<a id="trace-28363"></a>
<a id="trace-28365"></a>
<a id="trace-28370"></a>
<a id="trace-28372"></a>
<a id="trace-28387"></a>
<a id="trace-28389"></a>
<a id="trace-28398"></a>
<a id="trace-28400"></a>
<a id="trace-28490"></a>
<a id="trace-28492"></a>
<a id="trace-28506"></a>
<a id="trace-28508"></a>
<a id="trace-28518"></a>
<a id="trace-28520"></a>
<a id="trace-28531"></a>
<a id="trace-28533"></a>
<a id="trace-28541"></a>
<a id="trace-28543"></a>
<a id="trace-28558"></a>
<a id="trace-28560"></a>
<a id="trace-28586"></a>
<a id="trace-28588"></a>
<a id="trace-28604"></a>
<a id="trace-28606"></a>
<a id="trace-28675"></a>
<a id="trace-28677"></a>
<a id="trace-28690"></a>
<a id="trace-28692"></a>
<a id="trace-28702"></a>
<a id="trace-28704"></a>
<a id="trace-28716"></a>
<a id="trace-28718"></a>
<a id="trace-28735"></a>
<a id="trace-28737"></a>
<a id="trace-28750"></a>
<a id="trace-28752"></a>
<a id="trace-28765"></a>
<a id="trace-28767"></a>
<a id="trace-28774"></a>
<a id="trace-28776"></a>
<a id="trace-28789"></a>
<a id="trace-28791"></a>
<a id="trace-28873"></a>
<a id="trace-28875"></a>
<a id="trace-28891"></a>
<a id="trace-28893"></a>
<a id="trace-28911"></a>
<a id="trace-28913"></a>
<a id="trace-28920"></a>
<a id="trace-28922"></a>
<a id="trace-28958"></a>
<a id="trace-28960"></a>
<a id="trace-28972"></a>
<a id="trace-28974"></a>
<a id="trace-28992"></a>
<a id="trace-28994"></a>
<a id="trace-29003"></a>
<a id="trace-29005"></a>
<a id="trace-29077"></a>
<a id="trace-29079"></a>
<a id="trace-29090"></a>
<a id="trace-29092"></a>
<a id="trace-29106"></a>
<a id="trace-29108"></a>
<a id="trace-29116"></a>
<a id="trace-29118"></a>
<a id="trace-29135"></a>
<a id="trace-29137"></a>
<a id="trace-29144"></a>
<a id="trace-29146"></a>
<a id="trace-29168"></a>
<a id="trace-29170"></a>
<a id="trace-29179"></a>
<a id="trace-29181"></a>
<a id="trace-29207"></a>
<a id="trace-29209"></a>
<a id="trace-29444"></a>
<a id="trace-29446"></a>
<a id="trace-29456"></a>
<a id="trace-29458"></a>
<a id="trace-29657"></a>
<a id="trace-29659"></a>
<a id="trace-29681"></a>
<a id="trace-29683"></a>
<a id="trace-29710"></a>
<a id="trace-29712"></a>
<a id="trace-29748"></a>
<a id="trace-29750"></a>
<a id="trace-29778"></a>
<a id="trace-29780"></a>
<a id="trace-29874"></a>
<a id="trace-29876"></a>
<a id="trace-29888"></a>
<a id="trace-29890"></a>
<a id="trace-29908"></a>
<a id="trace-29910"></a>
<a id="trace-29924"></a>
<a id="trace-29926"></a>
<a id="trace-29949"></a>
<a id="trace-29951"></a>
<a id="trace-30003"></a>
<a id="trace-30005"></a>
<a id="trace-30036"></a>
<a id="trace-30038"></a>
<a id="trace-30115"></a>
<a id="trace-30117"></a>
<a id="trace-30141"></a>
<a id="trace-30143"></a>
<a id="trace-30176"></a>
<a id="trace-30178"></a>
<a id="trace-30207"></a>
<a id="trace-30209"></a>
<a id="trace-30227"></a>
<a id="trace-30229"></a>
<a id="trace-30240"></a>
<a id="trace-30242"></a>
<a id="trace-30314"></a>
<a id="trace-30316"></a>
<a id="trace-30497"></a>
<a id="trace-30499"></a>
<a id="trace-30560"></a>
<a id="trace-30562"></a>
<a id="trace-30584"></a>
<a id="trace-30586"></a>
<a id="trace-30637"></a>
<a id="trace-30639"></a>
<a id="trace-30656"></a>
<a id="trace-30658"></a>
<a id="trace-30673"></a>
<a id="trace-30675"></a>
<a id="trace-30757"></a>
<a id="trace-30759"></a>
<a id="trace-30771"></a>
<a id="trace-30773"></a>
<a id="trace-30802"></a>
<a id="trace-30804"></a>
<a id="trace-30826"></a>
<a id="trace-30828"></a>
<a id="trace-30862"></a>
<a id="trace-30864"></a>
<a id="trace-30904"></a>
<a id="trace-30906"></a>
<a id="trace-30991"></a>
<a id="trace-30993"></a>
<a id="trace-31006"></a>
<a id="trace-31008"></a>
<a id="trace-31049"></a>
<a id="trace-31051"></a>
<a id="trace-31070"></a>
<a id="trace-31072"></a>
<a id="trace-31082"></a>
<a id="trace-31084"></a>
<a id="trace-31338"></a>
<a id="trace-31340"></a>
<a id="trace-31374"></a>
<a id="trace-31376"></a>
<a id="trace-31685"></a>
<a id="trace-31687"></a>
<a id="trace-31711"></a>
<a id="trace-31713"></a>
<a id="trace-31980"></a>
<a id="trace-31982"></a>
<a id="trace-32001"></a>
<a id="trace-32003"></a>
<a id="trace-32071"></a>
<a id="trace-32073"></a>
<a id="trace-32273"></a>
<a id="trace-32275"></a>
<a id="trace-32305"></a>
<a id="trace-32307"></a>
<a id="trace-32387"></a>
<a id="trace-32389"></a>
<a id="trace-32429"></a>
<a id="trace-32431"></a>
<a id="trace-32462"></a>
<a id="trace-32464"></a>
<a id="trace-32474"></a>
<a id="trace-32476"></a>
<a id="trace-32672"></a>
<a id="trace-32674"></a>
<a id="trace-32684"></a>
<a id="trace-32686"></a>
<a id="trace-32706"></a>
<a id="trace-32708"></a>
<a id="trace-32721"></a>
<a id="trace-32723"></a>
<a id="trace-32815"></a>
<a id="trace-32817"></a>
<a id="trace-32850"></a>
<a id="trace-32852"></a>
<a id="trace-32889"></a>
<a id="trace-32891"></a>
<a id="trace-32930"></a>
<a id="trace-32932"></a>
<a id="trace-32965"></a>
<a id="trace-32967"></a>
<a id="trace-32992"></a>
<a id="trace-32994"></a>
<a id="trace-33034"></a>
<a id="trace-33036"></a>
<a id="trace-33047"></a>
<a id="trace-33049"></a>
<a id="trace-33067"></a>
<a id="trace-33069"></a>
<a id="trace-33085"></a>
<a id="trace-33087"></a>
<a id="trace-33156"></a>
<a id="trace-33158"></a>
<a id="trace-33186"></a>
<a id="trace-33188"></a>
<a id="trace-33200"></a>
<a id="trace-33202"></a>
<a id="trace-33219"></a>
<a id="trace-33221"></a>
<a id="trace-33234"></a>
<a id="trace-33236"></a>
<a id="trace-33254"></a>
<a id="trace-33256"></a>
<a id="trace-33266"></a>
<a id="trace-33268"></a>
<a id="trace-33286"></a>
<a id="trace-33288"></a>
<a id="trace-33432"></a>
<a id="trace-33434"></a>
<a id="trace-33497"></a>
<a id="trace-33499"></a>
<a id="trace-33512"></a>
<a id="trace-33514"></a>
<a id="trace-33528"></a>
<a id="trace-33530"></a>
<a id="trace-33564"></a>
<a id="trace-33566"></a>
<a id="trace-33576"></a>
<a id="trace-33578"></a>
<a id="trace-33647"></a>
<a id="trace-33649"></a>
<a id="trace-33673"></a>
<a id="trace-33675"></a>
<a id="trace-33687"></a>
<a id="trace-33689"></a>
<a id="trace-33702"></a>
<a id="trace-33704"></a>
<a id="trace-33721"></a>
<a id="trace-33723"></a>
<a id="trace-33764"></a>
<a id="trace-33766"></a>
<a id="trace-33775"></a>
<a id="trace-33777"></a>
<a id="trace-33859"></a>
<a id="trace-33861"></a>
<a id="trace-33884"></a>
<a id="trace-33886"></a>
<a id="trace-33894"></a>
<a id="trace-33896"></a>
<a id="trace-33929"></a>
<a id="trace-33931"></a>
<a id="trace-33953"></a>
<a id="trace-33955"></a>
<a id="trace-33966"></a>
<a id="trace-33968"></a>
<a id="trace-33988"></a>
<a id="trace-33990"></a>
<a id="trace-33998"></a>
<a id="trace-34000"></a>
<a id="trace-34074"></a>
<a id="trace-34076"></a>
<a id="trace-34085"></a>
<a id="trace-34087"></a>
<a id="trace-34112"></a>
<a id="trace-34114"></a>
<a id="trace-34125"></a>
<a id="trace-34127"></a>
<a id="trace-34152"></a>
<a id="trace-34154"></a>
<a id="trace-34195"></a>
<a id="trace-34197"></a>
<a id="trace-34242"></a>
<a id="trace-34244"></a>
<a id="trace-34322"></a>
<a id="trace-34324"></a>
<a id="trace-34341"></a>
<a id="trace-34343"></a>
<a id="trace-34358"></a>
<a id="trace-34360"></a>
<a id="trace-34367"></a>
<a id="trace-34369"></a>
<a id="trace-34397"></a>
<a id="trace-34399"></a>
<a id="trace-34410"></a>
<a id="trace-34412"></a>
<a id="trace-34422"></a>
<a id="trace-34424"></a>
<a id="trace-34455"></a>
<a id="trace-34457"></a>
<a id="trace-34536"></a>
<a id="trace-34538"></a>
<a id="trace-34577"></a>
<a id="trace-34579"></a>
<a id="trace-34591"></a>
<a id="trace-34593"></a>
<a id="trace-34605"></a>
<a id="trace-34607"></a>
<a id="trace-34614"></a>
<a id="trace-34616"></a>
<a id="trace-34642"></a>
<a id="trace-34644"></a>
<a id="trace-34722"></a>
<a id="trace-34724"></a>
<a id="trace-34741"></a>
<a id="trace-34743"></a>
<a id="trace-34764"></a>
<a id="trace-34766"></a>
<a id="trace-34841"></a>
<a id="trace-34843"></a>
<a id="trace-34852"></a>
<a id="trace-34854"></a>
<a id="trace-34873"></a>
<a id="trace-34875"></a>
<a id="trace-34890"></a>
<a id="trace-34892"></a>
<a id="trace-34906"></a>
<a id="trace-34908"></a>
<a id="trace-34993"></a>
<a id="trace-34995"></a>
<a id="trace-35025"></a>
<a id="trace-35027"></a>
<a id="trace-35043"></a>
<a id="trace-35045"></a>
<a id="trace-35093"></a>
<a id="trace-35095"></a>
<a id="trace-35106"></a>
<a id="trace-35108"></a>
<a id="trace-35121"></a>
<a id="trace-35123"></a>
<a id="trace-35206"></a>
<a id="trace-35208"></a>
<a id="trace-35217"></a>
<a id="trace-35219"></a>
<a id="trace-35232"></a>
<a id="trace-35234"></a>
<a id="trace-35243"></a>
<a id="trace-35245"></a>
<a id="trace-35260"></a>
<a id="trace-35262"></a>
<a id="trace-35291"></a>
<a id="trace-35293"></a>
<a id="trace-35302"></a>
<a id="trace-35304"></a>
<a id="trace-35325"></a>
<a id="trace-35327"></a>
<a id="trace-35335"></a>
<a id="trace-35337"></a>
<a id="trace-35408"></a>
<a id="trace-35410"></a>
<a id="trace-35433"></a>
<a id="trace-35435"></a>
<a id="trace-35442"></a>
<a id="trace-35444"></a>
<a id="trace-35468"></a>
<a id="trace-35470"></a>
<a id="trace-35486"></a>
<a id="trace-35488"></a>
<a id="trace-35514"></a>
<a id="trace-35516"></a>
<a id="trace-35524"></a>
<a id="trace-35526"></a>
<a id="trace-35602"></a>
<a id="trace-35604"></a>
<a id="trace-35622"></a>
<a id="trace-35624"></a>
<a id="trace-35634"></a>
<a id="trace-35636"></a>
<a id="trace-35644"></a>
<a id="trace-35646"></a>
<a id="trace-35662"></a>
<a id="trace-35664"></a>
<a id="trace-35671"></a>
<a id="trace-35673"></a>
<a id="trace-35687"></a>
<a id="trace-35689"></a>
<a id="trace-35713"></a>
<a id="trace-35715"></a>
<a id="trace-35796"></a>
<a id="trace-35798"></a>
<a id="trace-35811"></a>
<a id="trace-35813"></a>
<a id="trace-35825"></a>
<a id="trace-35827"></a>
<a id="trace-35884"></a>
<a id="trace-35886"></a>
<a id="trace-35896"></a>
<a id="trace-35898"></a>
<a id="trace-35911"></a>
<a id="trace-35913"></a>
<a id="trace-35923"></a>
<a id="trace-35925"></a>
- 5.70s–359.80s (×1098), actor 37, squad 4 (trace 994): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 907. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625068154663625, 'next_transition': 1235}.
<a id="trace-1003"></a>
- 5.90s–5.90s (×1), actor 8, squad 1 (trace 1003): received platoon directive. Knowledge: actor memory at 5.00s, trace 898. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.93868066625806, 'next_transition': 2368}.
<a id="trace-1709"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1709): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1489. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724836511721874, 'next_transition': 2037}.
<a id="trace-2037"></a>
<a id="trace-2039"></a>
<a id="trace-2069"></a>
<a id="trace-2071"></a>
<a id="trace-2103"></a>
<a id="trace-2105"></a>
<a id="trace-2133"></a>
<a id="trace-2135"></a>
<a id="trace-2223"></a>
<a id="trace-2225"></a>
<a id="trace-2265"></a>
<a id="trace-2267"></a>
<a id="trace-2299"></a>
<a id="trace-2301"></a>
<a id="trace-2335"></a>
<a id="trace-2337"></a>
<a id="trace-2354"></a>
<a id="trace-2356"></a>
<a id="trace-2457"></a>
<a id="trace-2459"></a>
<a id="trace-2491"></a>
<a id="trace-2493"></a>
<a id="trace-2677"></a>
<a id="trace-2679"></a>
<a id="trace-2717"></a>
<a id="trace-2719"></a>
<a id="trace-2743"></a>
<a id="trace-2745"></a>
<a id="trace-2857"></a>
<a id="trace-2859"></a>
<a id="trace-2888"></a>
<a id="trace-2890"></a>
<a id="trace-2931"></a>
<a id="trace-2933"></a>
<a id="trace-2963"></a>
<a id="trace-2965"></a>
<a id="trace-2999"></a>
<a id="trace-3001"></a>
<a id="trace-3019"></a>
<a id="trace-3021"></a>
<a id="trace-3052"></a>
<a id="trace-3054"></a>
- 13.20s–23.25s (×42), actor 5, squad 0 (trace 2037): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1494. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134564417349163, 'next_transition': 2069}.
<a id="trace-2368"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2368): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2156. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2502}.
<a id="trace-2369"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2369): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2156. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2502}.
<a id="trace-2502"></a>
- 18.40s–18.40s (×1), actor 8, squad 1 (trace 2502): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 2156. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.149913550100425, 'next_transition': 3583}.
<a id="trace-3061"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 3061): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2772. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750554926588478, 'next_transition': 3342}.
<a id="trace-3062"></a>
- 23.55s–23.55s (×1), actor 0, squad 0 (trace 3062): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2772. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750554926588478, 'next_transition': 3342}.
<a id="trace-3342"></a>
<a id="trace-3344"></a>
<a id="trace-3373"></a>
<a id="trace-3375"></a>
<a id="trace-3400"></a>
<a id="trace-3402"></a>
<a id="trace-3502"></a>
<a id="trace-3504"></a>
<a id="trace-3516"></a>
<a id="trace-3518"></a>
<a id="trace-3562"></a>
<a id="trace-3564"></a>
<a id="trace-3880"></a>
<a id="trace-3882"></a>
<a id="trace-3903"></a>
<a id="trace-3905"></a>
<a id="trace-3923"></a>
<a id="trace-3925"></a>
<a id="trace-3964"></a>
<a id="trace-3966"></a>
<a id="trace-3988"></a>
<a id="trace-3990"></a>
<a id="trace-4021"></a>
<a id="trace-4023"></a>
<a id="trace-4043"></a>
<a id="trace-4045"></a>
<a id="trace-4151"></a>
<a id="trace-4153"></a>
<a id="trace-4162"></a>
<a id="trace-4164"></a>
<a id="trace-4196"></a>
<a id="trace-4198"></a>
<a id="trace-4210"></a>
<a id="trace-4212"></a>
<a id="trace-4246"></a>
<a id="trace-4248"></a>
- 23.75s–32.25s (×36), actor 5, squad 0 (trace 3342): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2777. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49219563427858576, 'next_transition': 3373}.
<a id="trace-3583"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3583): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 3429. Next observer evidence: {'until': 36, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.849708412852824, 'next_transition': 4649}.
<a id="trace-4262"></a>
- 32.65s–32.65s (×1), actor 0, squad 0 (trace 4262): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 4059. Next observer evidence: None.
<a id="trace-4431"></a>
<a id="trace-4433"></a>
<a id="trace-4457"></a>
<a id="trace-4459"></a>
<a id="trace-4478"></a>
<a id="trace-4480"></a>
<a id="trace-4512"></a>
<a id="trace-4514"></a>
<a id="trace-4526"></a>
<a id="trace-4528"></a>
<a id="trace-4617"></a>
<a id="trace-4619"></a>
<a id="trace-4637"></a>
<a id="trace-4639"></a>
<a id="trace-4662"></a>
<a id="trace-4664"></a>
<a id="trace-4682"></a>
<a id="trace-4684"></a>
<a id="trace-4703"></a>
<a id="trace-4705"></a>
<a id="trace-4716"></a>
<a id="trace-4718"></a>
<a id="trace-4733"></a>
<a id="trace-4735"></a>
<a id="trace-4750"></a>
<a id="trace-4752"></a>
<a id="trace-4769"></a>
<a id="trace-4771"></a>
<a id="trace-4786"></a>
<a id="trace-4788"></a>
<a id="trace-4873"></a>
<a id="trace-4875"></a>
<a id="trace-4892"></a>
<a id="trace-4894"></a>
<a id="trace-4908"></a>
<a id="trace-4910"></a>
<a id="trace-5279"></a>
<a id="trace-5281"></a>
<a id="trace-5307"></a>
<a id="trace-5309"></a>
<a id="trace-5327"></a>
<a id="trace-5329"></a>
<a id="trace-5356"></a>
<a id="trace-5358"></a>
<a id="trace-5374"></a>
<a id="trace-5376"></a>
<a id="trace-5413"></a>
<a id="trace-5415"></a>
<a id="trace-5432"></a>
<a id="trace-5434"></a>
<a id="trace-5514"></a>
<a id="trace-5516"></a>
<a id="trace-5529"></a>
<a id="trace-5531"></a>
<a id="trace-5714"></a>
<a id="trace-5716"></a>
<a id="trace-5732"></a>
<a id="trace-5734"></a>
<a id="trace-5755"></a>
<a id="trace-5757"></a>
<a id="trace-5779"></a>
<a id="trace-5781"></a>
- 32.75s–47.75s (×62), actor 5, squad 0 (trace 4431): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4064. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6286751901601849, 'next_transition': 4457}.
<a id="trace-4649"></a>
- 36.00s–36.00s (×1), actor 8, squad 1 (trace 4649): matching received arrivals: deployment leg complete. Knowledge: actor memory at 35.00s, trace 4549. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 438}.
<a id="trace-438"></a>
- 39.60s–39.60s (×1), actor 5, squad 1 (events line 438): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4779"></a>
- 39.60s–39.60s (×1), actor 5, squad 1 (trace 4779): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 4779. Next observer evidence: {'until': 41.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4919}.
<a id="trace-4780"></a>
- 39.60s–39.60s (×1), actor 5, squad 1 (trace 4780): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 4780. Next observer evidence: {'until': 41.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4919}.
<a id="trace-4919"></a>
- 41.55s–41.55s (×1), actor 8, squad 1 (trace 4919): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 4801. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0947448485495794, 'next_transition': 5547}.
<a id="trace-4924"></a>
- 41.55s–41.55s (×1), actor 8, squad 1 (trace 4924): MoveTactically. Knowledge: actor memory at 40.00s, trace 4801. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0947448485495794, 'next_transition': 5547}.
<a id="trace-4925"></a>
- 41.55s–41.55s (×1), actor 8, squad 1 (trace 4925): Reorganise complete. Knowledge: actor memory at 40.00s, trace 4801. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0947448485495794, 'next_transition': 5547}.
<a id="trace-5547"></a>
- 46.20s–46.20s (×1), actor 8, squad 1 (trace 5547): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 5446. Next observer evidence: {'until': 50, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.4790804514792235, 'next_transition': 6255}.
<a id="trace-5791"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 5791): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 5439. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09166677079912525, 'next_transition': 6137}.
<a id="trace-5792"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 5792): bounding overwatch. Knowledge: actor memory at 45.00s, trace 5439. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09166677079912525, 'next_transition': 6137}.
<a id="trace-5793"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 5793): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 5439. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09166677079912525, 'next_transition': 6137}.
<a id="trace-6137"></a>
<a id="trace-6139"></a>
<a id="trace-6163"></a>
<a id="trace-6165"></a>
<a id="trace-6199"></a>
<a id="trace-6201"></a>
<a id="trace-6217"></a>
<a id="trace-6219"></a>
<a id="trace-6653"></a>
<a id="trace-6655"></a>
<a id="trace-7028"></a>
<a id="trace-7030"></a>
<a id="trace-7049"></a>
<a id="trace-7051"></a>
<a id="trace-7437"></a>
<a id="trace-7439"></a>
- 48.25s–51.75s (×16), actor 5, squad 0 (trace 6137): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5443. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18120098753904296, 'next_transition': 6163}.
<a id="trace-6255"></a>
- 50.00s–50.00s (×1), actor 8, squad 1 (trace 6255): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 6239. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1027101424780652, 'next_transition': 6669}.
<a id="trace-6256"></a>
- 50.00s–50.00s (×1), actor 8, squad 1 (trace 6256): bounding overwatch. Knowledge: actor memory at 50.00s, trace 6239. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1027101424780652, 'next_transition': 6669}.
<a id="trace-6257"></a>
<a id="trace-6669"></a>
<a id="trace-7073"></a>
- 50.00s–51.45s (×3), actor 8, squad 1 (trace 6257): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 6239. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1027101424780652, 'next_transition': 6669}.
<a id="trace-7453"></a>
- 52.05s–52.05s (×1), actor 1, squad 0 (trace 7453): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 6232. Next observer evidence: None.
<a id="trace-7454"></a>
- 52.05s–52.05s (×1), actor 1, squad 0 (trace 7454): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 6232. Next observer evidence: None.
<a id="trace-676"></a>
- 52.10s–52.10s (×1), actor 5, squad 0 (events line 676): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-677"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (events line 677): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7857"></a>
- 52.10s–52.10s (×1), actor 5, squad 0 (trace 7857): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.613739 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 7857. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7875}.
<a id="trace-7858"></a>
- 52.10s–52.10s (×1), actor 5, squad 0 (trace 7858): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.613739 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 7858. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7875}.
<a id="trace-7859"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 7859): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.613739 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 7859. Next observer evidence: {'until': 55, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.2149004702664388, 'next_transition': 8053}.
<a id="trace-7860"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 7860): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.613739 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 7860. Next observer evidence: {'until': 55, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.2149004702664388, 'next_transition': 8053}.
<a id="trace-7875"></a>
<a id="trace-7877"></a>
<a id="trace-7901"></a>
<a id="trace-7903"></a>
<a id="trace-7942"></a>
<a id="trace-7944"></a>
<a id="trace-7960"></a>
<a id="trace-7962"></a>
<a id="trace-8001"></a>
<a id="trace-8003"></a>
<a id="trace-8014"></a>
<a id="trace-8016"></a>
<a id="trace-8106"></a>
<a id="trace-8108"></a>
<a id="trace-8367"></a>
<a id="trace-8369"></a>
<a id="trace-8391"></a>
<a id="trace-8393"></a>
<a id="trace-8651"></a>
<a id="trace-8653"></a>
<a id="trace-8674"></a>
<a id="trace-8676"></a>
<a id="trace-8691"></a>
<a id="trace-8693"></a>
<a id="trace-8726"></a>
<a id="trace-8728"></a>
<a id="trace-8744"></a>
<a id="trace-8746"></a>
<a id="trace-8774"></a>
<a id="trace-8776"></a>
<a id="trace-8792"></a>
<a id="trace-8794"></a>
<a id="trace-8886"></a>
<a id="trace-8888"></a>
<a id="trace-8903"></a>
<a id="trace-8905"></a>
<a id="trace-9177"></a>
<a id="trace-9179"></a>
<a id="trace-9211"></a>
<a id="trace-9213"></a>
<a id="trace-9243"></a>
<a id="trace-9245"></a>
<a id="trace-9258"></a>
<a id="trace-9260"></a>
<a id="trace-9307"></a>
<a id="trace-9309"></a>
<a id="trace-9338"></a>
<a id="trace-9340"></a>
<a id="trace-9374"></a>
<a id="trace-9376"></a>
<a id="trace-9399"></a>
<a id="trace-9401"></a>
<a id="trace-9494"></a>
<a id="trace-9496"></a>
<a id="trace-9519"></a>
<a id="trace-9521"></a>
- 52.25s–65.75s (×56), actor 5, squad 0 (trace 7875): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.10s, trace 7860. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7901}.
<a id="trace-8053"></a>
- 55.10s–55.10s (×1), actor 9, squad 1 (trace 8053): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 8033. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1186833013153541, 'next_transition': 8116}.
<a id="trace-8116"></a>
- 55.35s–55.35s (×1), actor 9, squad 1 (trace 8116): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 8033. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5921822264678706, 'next_transition': 8397}.
<a id="trace-8397"></a>
- 56.35s–56.35s (×1), actor 9, squad 1 (trace 8397): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 8033. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8840430641044026, 'next_transition': 8801}.
<a id="trace-8801"></a>
- 59.75s–59.75s (×1), actor 9, squad 1 (trace 8801): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 8033. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8912}.
<a id="trace-8912"></a>
- 60.75s–60.75s (×1), actor 9, squad 1 (trace 8912): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 8814. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.883293684649389, 'next_transition': 9394}.
<a id="trace-9394"></a>
- 64.70s–64.70s (×1), actor 9, squad 1 (trace 9394): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 8814. Next observer evidence: {'until': 67.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 3.388800109365652, 'next_transition': 9707}.
<a id="trace-9541"></a>
- 66.20s–66.20s (×1), actor 1, squad 0 (trace 9541): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 9413. Next observer evidence: None.
<a id="trace-9542"></a>
- 66.20s–66.20s (×1), actor 1, squad 0 (trace 9542): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 9413. Next observer evidence: None.
<a id="trace-9655"></a>
<a id="trace-9657"></a>
<a id="trace-9666"></a>
<a id="trace-9668"></a>
- 66.25s–66.75s (×4), actor 5, squad 0 (trace 9655): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 9417. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999878684398354, 'next_transition': 9666}.
<a id="trace-9689"></a>
- 67.05s–67.05s (×1), actor 5, squad 0 (trace 9689): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 67.05s, trace 9689. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08999939342199227, 'next_transition': 9700}.
<a id="trace-9700"></a>
<a id="trace-9702"></a>
<a id="trace-9919"></a>
<a id="trace-9921"></a>
- 67.25s–67.75s (×4), actor 5, squad 0 (trace 9700): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 67.05s, trace 9689. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17999878684398354, 'next_transition': 9919}.
<a id="trace-9707"></a>
- 67.25s–67.25s (×1), actor 9, squad 1 (trace 9707): new contact inside 100 m. Knowledge: actor memory at 65.00s, trace 9420. Next observer evidence: {'until': 69.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.7723300336710966, 'next_transition': 10060}.
<a id="trace-9936"></a>
- 68.05s–68.05s (×1), actor 5, squad 0 (trace 9936): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 68.05s, trace 9936. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9951}.
<a id="trace-9951"></a>
<a id="trace-9953"></a>
- 68.25s–68.25s (×2), actor 5, squad 0 (trace 9951): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 68.05s, trace 9936. Next observer evidence: None.
<a id="trace-9966"></a>
- 68.35s–68.35s (×1), actor 1, squad 0 (trace 9966): NeedSupport. Knowledge: actor memory at 65.00s, trace 9413. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9990}.
<a id="trace-9990"></a>
<a id="trace-9992"></a>
- 68.75s–68.75s (×2), actor 5, squad 0 (trace 9990): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 68.05s, trace 9936. Next observer evidence: {'until': 69, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2699802262024349, 'next_transition': 10016}.
<a id="trace-10016"></a>
- 69.05s–69.05s (×1), actor 5, squad 0 (trace 10016): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 69.05s, trace 10016. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18001003600139912, 'next_transition': 10027}.
<a id="trace-10027"></a>
<a id="trace-10029"></a>
<a id="trace-10053"></a>
<a id="trace-10055"></a>
<a id="trace-11990"></a>
<a id="trace-11992"></a>
<a id="trace-12004"></a>
<a id="trace-12006"></a>
<a id="trace-12028"></a>
<a id="trace-12030"></a>
<a id="trace-12043"></a>
<a id="trace-12045"></a>
- 69.25s–71.75s (×12), actor 5, squad 0 (trace 10027): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 69.05s, trace 10016. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11400912918485517, 'next_transition': 10053}.
<a id="trace-10060"></a>
- 69.75s–69.75s (×1), actor 9, squad 1 (trace 10060): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 9420. Next observer evidence: {'until': 72.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.2591087317137377, 'next_transition': 12082}.
<a id="trace-10061"></a>
- 69.75s–69.75s (×1), actor 9, squad 1 (trace 10061): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 65.00s, trace 9420. Next observer evidence: {'until': 72.2, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.2591087317137377, 'next_transition': 12082}.
<a id="trace-12058"></a>
- 72.05s–72.05s (×1), actor 5, squad 0 (trace 12058): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 72.05s, trace 12058. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06418230490770252, 'next_transition': 12069}.
<a id="trace-12069"></a>
<a id="trace-12071"></a>
<a id="trace-12099"></a>
<a id="trace-12101"></a>
<a id="trace-12133"></a>
<a id="trace-12135"></a>
<a id="trace-12148"></a>
<a id="trace-12150"></a>
- 72.25s–73.75s (×8), actor 5, squad 0 (trace 12069): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 72.05s, trace 12058. Next observer evidence: {'until': 72.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12957686245496736, 'next_transition': 12099}.
<a id="trace-12082"></a>
- 72.30s–72.30s (×1), actor 9, squad 1 (trace 12082): NeedSupport. Knowledge: actor memory at 70.00s, trace 11916. Next observer evidence: {'until': 72.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1003}.
<a id="trace-1003"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (events line 1003): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12117"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 12117): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500358 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 12117. Next observer evidence: {'until': 89.8, 'shots': 11, 'casualties': 1, 'mean_displacement': 2.583823027307941, 'next_transition': 13382}.
<a id="trace-12118"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 12118): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500358 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 12118. Next observer evidence: {'until': 89.8, 'shots': 11, 'casualties': 1, 'mean_displacement': 2.583823027307941, 'next_transition': 13382}.
<a id="trace-12161"></a>
- 74.05s–74.05s (×1), actor 5, squad 0 (trace 12161): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 74.05s, trace 12161. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03799561961863602, 'next_transition': 12171}.
<a id="trace-12171"></a>
<a id="trace-12173"></a>
<a id="trace-12189"></a>
<a id="trace-12191"></a>
<a id="trace-12268"></a>
<a id="trace-12270"></a>
<a id="trace-12281"></a>
<a id="trace-12283"></a>
- 74.25s–75.75s (×8), actor 5, squad 0 (trace 12171): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 74.05s, trace 12161. Next observer evidence: {'until': 74.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0721512384947518, 'next_transition': 12189}.
<a id="trace-12291"></a>
- 76.05s–76.05s (×1), actor 5, squad 0 (trace 12291): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 76.05s, trace 12291. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10007806706105736, 'next_transition': 12301}.
<a id="trace-12301"></a>
<a id="trace-12303"></a>
<a id="trace-12316"></a>
<a id="trace-12318"></a>
<a id="trace-12340"></a>
<a id="trace-12342"></a>
<a id="trace-12356"></a>
<a id="trace-12358"></a>
<a id="trace-12380"></a>
<a id="trace-12382"></a>
<a id="trace-12393"></a>
<a id="trace-12395"></a>
<a id="trace-12424"></a>
<a id="trace-12426"></a>
<a id="trace-12439"></a>
<a id="trace-12441"></a>
<a id="trace-12544"></a>
<a id="trace-12546"></a>
<a id="trace-12604"></a>
<a id="trace-12606"></a>
<a id="trace-12668"></a>
<a id="trace-12670"></a>
<a id="trace-12747"></a>
<a id="trace-12749"></a>
- 76.25s–81.75s (×24), actor 5, squad 0 (trace 12301): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 76.05s, trace 12291. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2025083455963444, 'next_transition': 12316}.
<a id="trace-12794"></a>
- 82.05s–82.05s (×1), actor 5, squad 0 (trace 12794): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 82.05s, trace 12794. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12548705489387127, 'next_transition': 12828}.
<a id="trace-12828"></a>
<a id="trace-12830"></a>
<a id="trace-12883"></a>
<a id="trace-12885"></a>
<a id="trace-12929"></a>
<a id="trace-12931"></a>
<a id="trace-12953"></a>
<a id="trace-12955"></a>
<a id="trace-12989"></a>
<a id="trace-12991"></a>
<a id="trace-13023"></a>
<a id="trace-13025"></a>
<a id="trace-13119"></a>
<a id="trace-13121"></a>
<a id="trace-13152"></a>
<a id="trace-13154"></a>
<a id="trace-13195"></a>
<a id="trace-13197"></a>
<a id="trace-13237"></a>
<a id="trace-13239"></a>
<a id="trace-13271"></a>
<a id="trace-13273"></a>
<a id="trace-13294"></a>
<a id="trace-13296"></a>
<a id="trace-13316"></a>
<a id="trace-13318"></a>
<a id="trace-13333"></a>
<a id="trace-13335"></a>
<a id="trace-13352"></a>
<a id="trace-13354"></a>
<a id="trace-13373"></a>
<a id="trace-13375"></a>
<a id="trace-13472"></a>
<a id="trace-13474"></a>
<a id="trace-13507"></a>
<a id="trace-13509"></a>
<a id="trace-14444"></a>
<a id="trace-14446"></a>
<a id="trace-14482"></a>
<a id="trace-14484"></a>
- 82.25s–91.75s (×40), actor 5, squad 0 (trace 12828): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.05s, trace 12794. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2535924089191711, 'next_transition': 12883}.
<a id="trace-13382"></a>
- 89.90s–89.90s (×1), actor 9, squad 1 (trace 13382): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 85.00s, trace 13046. Next observer evidence: {'until': 90.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.002700004629626474, 'next_transition': 13521}.
<a id="trace-13521"></a>
- 90.90s–90.90s (×1), actor 9, squad 1 (trace 13521): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 13396. Next observer evidence: {'until': 92, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.002649999999999153, 'next_transition': 1341}.
<a id="trace-13522"></a>
- 90.90s–90.90s (×1), actor 9, squad 1 (trace 13522): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 90.00s, trace 13396. Next observer evidence: {'until': 92, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.002649999999999153, 'next_transition': 1341}.
<a id="trace-14414"></a>
- 90.90s–90.90s (×1), actor 9, squad 1 (trace 14414): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 90.00s, trace 13396. Next observer evidence: {'until': 92, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.002649999999999153, 'next_transition': 1341}.
<a id="trace-14510"></a>
- 92.05s–92.05s (×1), actor 5, squad 0 (trace 14510): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 92.05s, trace 14510. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05740255489229808, 'next_transition': 14536}.
<a id="trace-1341"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (events line 1341): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14517"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (trace 14517): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.445237 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.15s, trace 14517. Next observer evidence: {'until': 93.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.015050000000000452, 'next_transition': 14657}.
<a id="trace-14518"></a>
- 92.15s–92.15s (×1), actor 5, squad 1 (trace 14518): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.445237 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.15s, trace 14518. Next observer evidence: {'until': 93.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.015050000000000452, 'next_transition': 14657}.
<a id="trace-14536"></a>
<a id="trace-14538"></a>
<a id="trace-14583"></a>
<a id="trace-14585"></a>
<a id="trace-14641"></a>
<a id="trace-14643"></a>
<a id="trace-14787"></a>
<a id="trace-14789"></a>
<a id="trace-14819"></a>
<a id="trace-14821"></a>
- 92.25s–94.25s (×10), actor 5, squad 0 (trace 14536): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.15s, trace 14518. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10863946899009096, 'next_transition': 14583}.
<a id="trace-14657"></a>
- 93.40s–93.40s (×1), actor 9, squad 1 (trace 14657): MoveTactically. Knowledge: actor memory at 90.00s, trace 13396. Next observer evidence: {'until': 95.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0002500000000011937, 'next_transition': 14967}.
<a id="trace-14658"></a>
- 93.40s–93.40s (×1), actor 9, squad 1 (trace 14658): received platoon directive. Knowledge: actor memory at 90.00s, trace 13396. Next observer evidence: {'until': 95.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0002500000000011937, 'next_transition': 14967}.
<a id="trace-14834"></a>
- 94.45s–94.45s (×1), actor 1, squad 0 (trace 14834): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 13389. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14848}.
<a id="trace-14835"></a>
- 94.45s–94.45s (×1), actor 1, squad 0 (trace 14835): NeedSupport. Knowledge: actor memory at 90.00s, trace 13389. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14848}.
<a id="trace-14848"></a>
<a id="trace-14850"></a>
- 94.75s–94.75s (×2), actor 5, squad 0 (trace 14848): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.15s, trace 14518. Next observer evidence: {'until': 95.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14934}.
<a id="trace-14934"></a>
- 95.45s–95.45s (×1), actor 1, squad 0 (trace 14934): Reorganise: completed/failed drill. Knowledge: actor memory at 95.00s, trace 14858. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14959}.
<a id="trace-14939"></a>
- 95.45s–95.45s (×1), actor 1, squad 0 (trace 14939): ReactToContact: cover and return fire. Knowledge: actor memory at 95.00s, trace 14858. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14959}.
<a id="trace-14940"></a>
- 95.45s–95.45s (×1), actor 1, squad 0 (trace 14940): Reorganise complete: known contact. Knowledge: actor memory at 95.00s, trace 14858. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14959}.
<a id="trace-14959"></a>
<a id="trace-14961"></a>
<a id="trace-15880"></a>
<a id="trace-15882"></a>
- 95.75s–96.25s (×4), actor 5, squad 0 (trace 14959): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14861. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15880}.
<a id="trace-14967"></a>
- 95.85s–95.85s (×1), actor 9, squad 1 (trace 14967): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 14864. Next observer evidence: {'until': 96.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15891}.
<a id="trace-14968"></a>
- 95.85s–95.85s (×1), actor 9, squad 1 (trace 14968): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 95.00s, trace 14864. Next observer evidence: {'until': 96.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15891}.
<a id="trace-15891"></a>
- 96.40s–96.40s (×1), actor 9, squad 1 (trace 15891): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 95.00s, trace 14864. Next observer evidence: {'until': 100.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1447}.
<a id="trace-15892"></a>
- 96.45s–96.45s (×1), actor 1, squad 0 (trace 15892): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 14858. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18106}.
<a id="trace-15893"></a>
- 96.45s–96.45s (×1), actor 1, squad 0 (trace 15893): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 95.00s, trace 14858. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18106}.
<a id="trace-18106"></a>
<a id="trace-18108"></a>
<a id="trace-18131"></a>
<a id="trace-18133"></a>
<a id="trace-18153"></a>
<a id="trace-18155"></a>
<a id="trace-18187"></a>
<a id="trace-18189"></a>
<a id="trace-18201"></a>
<a id="trace-18203"></a>
<a id="trace-18226"></a>
<a id="trace-18228"></a>
- 96.75s–99.25s (×12), actor 5, squad 0 (trace 18106): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14861. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250156702630788, 'next_transition': 18131}.
<a id="trace-18233"></a>
- 99.35s–99.35s (×1), actor 5, squad 0 (trace 18233): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387673 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 99.35s, trace 18233. Next observer evidence: None.
<a id="trace-18234"></a>
- 99.35s–99.35s (×1), actor 5, squad 0 (trace 18234): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.387673 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 99.35s, trace 18234. Next observer evidence: None.
<a id="trace-1437"></a>
- 99.35s–99.35s (×1), actor 5, squad 0 (events line 1437): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 99.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9386900618264001, 'next_transition': 18247}.
<a id="trace-18247"></a>
<a id="trace-18249"></a>
<a id="trace-18325"></a>
<a id="trace-18327"></a>
<a id="trace-18338"></a>
<a id="trace-18340"></a>
<a id="trace-18361"></a>
<a id="trace-18363"></a>
<a id="trace-18369"></a>
<a id="trace-18371"></a>
<a id="trace-18500"></a>
<a id="trace-18502"></a>
<a id="trace-18514"></a>
<a id="trace-18516"></a>
<a id="trace-18530"></a>
<a id="trace-18532"></a>
<a id="trace-18547"></a>
<a id="trace-18549"></a>
<a id="trace-18566"></a>
<a id="trace-18568"></a>
<a id="trace-18583"></a>
<a id="trace-18585"></a>
<a id="trace-18658"></a>
<a id="trace-18660"></a>
<a id="trace-18669"></a>
<a id="trace-18671"></a>
<a id="trace-18688"></a>
<a id="trace-18690"></a>
<a id="trace-18701"></a>
<a id="trace-18703"></a>
<a id="trace-18716"></a>
<a id="trace-18718"></a>
<a id="trace-18733"></a>
<a id="trace-18735"></a>
<a id="trace-18752"></a>
<a id="trace-18754"></a>
<a id="trace-18763"></a>
<a id="trace-18765"></a>
<a id="trace-18783"></a>
<a id="trace-18785"></a>
<a id="trace-18792"></a>
<a id="trace-18794"></a>
<a id="trace-18870"></a>
<a id="trace-18872"></a>
<a id="trace-18877"></a>
<a id="trace-18879"></a>
<a id="trace-18893"></a>
<a id="trace-18895"></a>
<a id="trace-18907"></a>
<a id="trace-18909"></a>
<a id="trace-18926"></a>
<a id="trace-18928"></a>
<a id="trace-18942"></a>
<a id="trace-18944"></a>
<a id="trace-18964"></a>
<a id="trace-18966"></a>
<a id="trace-18976"></a>
<a id="trace-18978"></a>
<a id="trace-18994"></a>
<a id="trace-18996"></a>
<a id="trace-19006"></a>
<a id="trace-19008"></a>
<a id="trace-19083"></a>
<a id="trace-19085"></a>
<a id="trace-19095"></a>
<a id="trace-19097"></a>
<a id="trace-19116"></a>
<a id="trace-19118"></a>
<a id="trace-19137"></a>
<a id="trace-19139"></a>
<a id="trace-19157"></a>
<a id="trace-19159"></a>
<a id="trace-19175"></a>
<a id="trace-19177"></a>
<a id="trace-19195"></a>
<a id="trace-19197"></a>
<a id="trace-19209"></a>
<a id="trace-19211"></a>
<a id="trace-19231"></a>
<a id="trace-19233"></a>
<a id="trace-19303"></a>
<a id="trace-19305"></a>
<a id="trace-19382"></a>
<a id="trace-19384"></a>
<a id="trace-19404"></a>
<a id="trace-19406"></a>
<a id="trace-19437"></a>
<a id="trace-19439"></a>
<a id="trace-19453"></a>
<a id="trace-19455"></a>
<a id="trace-19476"></a>
<a id="trace-19478"></a>
<a id="trace-19495"></a>
<a id="trace-19497"></a>
<a id="trace-19513"></a>
<a id="trace-19515"></a>
<a id="trace-19523"></a>
<a id="trace-19525"></a>
<a id="trace-19540"></a>
<a id="trace-19542"></a>
<a id="trace-19554"></a>
<a id="trace-19556"></a>
<a id="trace-19633"></a>
<a id="trace-19635"></a>
<a id="trace-19648"></a>
<a id="trace-19650"></a>
<a id="trace-19669"></a>
<a id="trace-19671"></a>
<a id="trace-19680"></a>
<a id="trace-19682"></a>
<a id="trace-19695"></a>
<a id="trace-19697"></a>
- 99.75s–127.25s (×112), actor 5, squad 0 (trace 18247): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 99.35s, trace 18234. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8568035427111172, 'next_transition': 18325}.
<a id="trace-1447"></a>
- 100.55s–100.55s (×1), actor 5, squad 1 (events line 1447): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 101.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3415499999999998, 'next_transition': 18376}.
<a id="trace-18331"></a>
- 100.55s–100.55s (×1), actor 5, squad 1 (trace 18331): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.389177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.55s, trace 18331. Next observer evidence: {'until': 101.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3415499999999998, 'next_transition': 18376}.
<a id="trace-18332"></a>
- 100.55s–100.55s (×1), actor 5, squad 1 (trace 18332): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.389177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.55s, trace 18332. Next observer evidence: {'until': 101.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3415499999999998, 'next_transition': 18376}.
<a id="trace-18376"></a>
- 101.90s–101.90s (×1), actor 9, squad 1 (trace 18376): MoveTactically. Knowledge: actor memory at 100.00s, trace 18261. Next observer evidence: {'until': 119.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 5.41472787687664, 'next_transition': 19240}.
<a id="trace-18377"></a>
- 101.90s–101.90s (×1), actor 9, squad 1 (trace 18377): received platoon directive. Knowledge: actor memory at 100.00s, trace 18261. Next observer evidence: {'until': 119.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 5.41472787687664, 'next_transition': 19240}.
<a id="trace-19240"></a>
- 119.30s–119.30s (×1), actor 9, squad 1 (trace 19240): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 115.00s, trace 19020. Next observer evidence: {'until': 129, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.10495634521075876, 'next_transition': 22925}.
<a id="trace-19704"></a>
- 127.45s–127.45s (×1), actor 1, squad 0 (trace 19704): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 125.00s, trace 19566. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20069}.
<a id="trace-19705"></a>
- 127.45s–127.45s (×1), actor 1, squad 0 (trace 19705): ReactToContact: cover and return fire. Knowledge: actor memory at 125.00s, trace 19566. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20069}.
<a id="trace-19706"></a>
- 127.45s–127.45s (×1), actor 1, squad 0 (trace 19706): . Knowledge: actor memory at 125.00s, trace 19566. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20069}.
<a id="trace-20069"></a>
<a id="trace-20071"></a>
- 127.75s–127.75s (×2), actor 5, squad 0 (trace 20069): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19569. Next observer evidence: {'until': 128.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.24320925684865305, 'next_transition': 20099}.
<a id="trace-20099"></a>
- 128.25s–128.25s (×1), actor 1, squad 0 (trace 20099): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 125.00s, trace 19566. Next observer evidence: None.
<a id="trace-20100"></a>
- 128.25s–128.25s (×1), actor 1, squad 0 (trace 20100): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 125.00s, trace 19566. Next observer evidence: None.
<a id="trace-22855"></a>
<a id="trace-22857"></a>
<a id="trace-22899"></a>
<a id="trace-22901"></a>
<a id="trace-22940"></a>
<a id="trace-22942"></a>
<a id="trace-22987"></a>
<a id="trace-22989"></a>
<a id="trace-23087"></a>
<a id="trace-23089"></a>
<a id="trace-23117"></a>
<a id="trace-23119"></a>
<a id="trace-23157"></a>
<a id="trace-23159"></a>
<a id="trace-23174"></a>
<a id="trace-23176"></a>
<a id="trace-23197"></a>
<a id="trace-23199"></a>
<a id="trace-23218"></a>
<a id="trace-23220"></a>
- 128.30s–132.80s (×20), actor 5, squad 0 (trace 22855): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 19569. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3756693033149885, 'next_transition': 22899}.
<a id="trace-22925"></a>
- 129.10s–129.10s (×1), actor 9, squad 1 (trace 22925): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 125.00s, trace 19572. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1892}.
<a id="trace-1836"></a>
- 132.95s–132.95s (×1), actor 5, squad 0 (events line 1836): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6315096004092039, 'next_transition': 23253}.
<a id="trace-23231"></a>
- 132.95s–132.95s (×1), actor 5, squad 0 (trace 23231): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.329877 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 132.95s, trace 23231. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6315096004092039, 'next_transition': 23253}.
<a id="trace-23232"></a>
- 132.95s–132.95s (×1), actor 5, squad 0 (trace 23232): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.329877 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 132.95s, trace 23232. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6315096004092039, 'next_transition': 23253}.
<a id="trace-23253"></a>
<a id="trace-23255"></a>
<a id="trace-23268"></a>
<a id="trace-23270"></a>
<a id="trace-23290"></a>
<a id="trace-23292"></a>
<a id="trace-23307"></a>
<a id="trace-23309"></a>
<a id="trace-23379"></a>
<a id="trace-23381"></a>
<a id="trace-23396"></a>
<a id="trace-23398"></a>
<a id="trace-23416"></a>
<a id="trace-23418"></a>
<a id="trace-23434"></a>
<a id="trace-23436"></a>
- 133.30s–136.80s (×16), actor 5, squad 0 (trace 23253): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 132.95s, trace 23232. Next observer evidence: {'until': 133.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5994627385546204, 'next_transition': 23268}.
<a id="trace-23443"></a>
- 136.90s–136.90s (×1), actor 1, squad 0 (trace 23443): NeedSupport. Knowledge: actor memory at 135.00s, trace 23314. Next observer evidence: {'until': 137, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3648843261361643, 'next_transition': 1891}.
<a id="trace-1891"></a>
- 137.05s–137.05s (×1), actor 5, squad 0 (events line 1891): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3133844589522256, 'next_transition': 23463}.
<a id="trace-1892"></a>
- 137.05s–137.05s (×1), actor 5, squad 1 (events line 1892): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23491}.
<a id="trace-23450"></a>
- 137.05s–137.05s (×1), actor 5, squad 0 (trace 23450): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332299 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 137.05s, trace 23450. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3133844589522256, 'next_transition': 23463}.
<a id="trace-23451"></a>
- 137.05s–137.05s (×1), actor 5, squad 0 (trace 23451): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332299 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 137.05s, trace 23451. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3133844589522256, 'next_transition': 23463}.
<a id="trace-23452"></a>
- 137.05s–137.05s (×1), actor 5, squad 1 (trace 23452): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332299 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 137.05s, trace 23452. Next observer evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23491}.
<a id="trace-23453"></a>
- 137.05s–137.05s (×1), actor 5, squad 1 (trace 23453): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332299 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 137.05s, trace 23453. Next observer evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23491}.
<a id="trace-23463"></a>
<a id="trace-23465"></a>
<a id="trace-23482"></a>
<a id="trace-23484"></a>
<a id="trace-23561"></a>
<a id="trace-23563"></a>
<a id="trace-23577"></a>
<a id="trace-23579"></a>
- 137.30s–138.80s (×8), actor 5, squad 0 (trace 23463): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.05s, trace 23453. Next observer evidence: {'until': 137.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43573836439400454, 'next_transition': 23482}.
<a id="trace-23491"></a>
- 138.10s–138.10s (×1), actor 9, squad 1 (trace 23491): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 135.00s, trace 23320. Next observer evidence: None.
<a id="trace-23492"></a>
- 138.10s–138.10s (×1), actor 9, squad 1 (trace 23492): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 135.00s, trace 23320. Next observer evidence: None.
<a id="trace-23494"></a>
- 138.15s–138.15s (×1), actor 9, squad 1 (trace 23494): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 135.00s, trace 23320. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23501}.
<a id="trace-23501"></a>
- 138.25s–138.25s (×1), actor 9, squad 1 (trace 23501): Withdraw to received rally. Knowledge: actor memory at 135.00s, trace 23320. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999993, 'next_transition': 24712}.
<a id="trace-23502"></a>
- 138.25s–138.25s (×1), actor 9, squad 1 (trace 23502): rearward bound: one stationary suppressing element. Knowledge: actor memory at 135.00s, trace 23320. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999993, 'next_transition': 24712}.
<a id="trace-23584"></a>
- 138.85s–138.85s (×1), actor 1, squad 0 (trace 23584): Withdraw to received rally. Knowledge: actor memory at 135.00s, trace 23314. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000114577068385, 'next_transition': 24012}.
<a id="trace-23585"></a>
- 138.85s–138.85s (×1), actor 1, squad 0 (trace 23585): rearward bound: one stationary suppressing element. Knowledge: actor memory at 135.00s, trace 23314. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000114577068385, 'next_transition': 24012}.
<a id="trace-24012"></a>
<a id="trace-24014"></a>
<a id="trace-24036"></a>
<a id="trace-24038"></a>
<a id="trace-24117"></a>
<a id="trace-24119"></a>
<a id="trace-24147"></a>
<a id="trace-24149"></a>
<a id="trace-24168"></a>
<a id="trace-24170"></a>
<a id="trace-24181"></a>
<a id="trace-24183"></a>
<a id="trace-24207"></a>
<a id="trace-24209"></a>
<a id="trace-24220"></a>
<a id="trace-24222"></a>
<a id="trace-24246"></a>
<a id="trace-24248"></a>
<a id="trace-24265"></a>
<a id="trace-24267"></a>
<a id="trace-24284"></a>
<a id="trace-24286"></a>
<a id="trace-24313"></a>
<a id="trace-24315"></a>
<a id="trace-24394"></a>
<a id="trace-24396"></a>
<a id="trace-24414"></a>
<a id="trace-24416"></a>
<a id="trace-24436"></a>
<a id="trace-24438"></a>
<a id="trace-24453"></a>
<a id="trace-24455"></a>
<a id="trace-24473"></a>
<a id="trace-24475"></a>
<a id="trace-24490"></a>
<a id="trace-24492"></a>
<a id="trace-24512"></a>
<a id="trace-24514"></a>
<a id="trace-24531"></a>
<a id="trace-24533"></a>
- 139.30s–148.80s (×40), actor 5, squad 0 (trace 24012): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 137.05s, trace 23453. Next observer evidence: {'until': 139.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23624903628552585, 'next_transition': 24036}.
<a id="trace-24542"></a>
- 149.15s–149.15s (×1), actor 1, squad 0 (trace 24542): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 24322. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999829877230358, 'next_transition': 24705}.
<a id="trace-24543"></a>
- 149.15s–149.15s (×1), actor 1, squad 0 (trace 24543): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 24322. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999829877230358, 'next_transition': 24705}.
<a id="trace-24705"></a>
<a id="trace-24707"></a>
<a id="trace-24724"></a>
<a id="trace-24726"></a>
<a id="trace-24811"></a>
<a id="trace-24813"></a>
<a id="trace-24834"></a>
<a id="trace-24836"></a>
<a id="trace-24848"></a>
<a id="trace-24850"></a>
<a id="trace-24868"></a>
<a id="trace-24870"></a>
<a id="trace-24898"></a>
<a id="trace-24900"></a>
<a id="trace-24919"></a>
<a id="trace-24921"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-24956"></a>
<a id="trace-24958"></a>
<a id="trace-24976"></a>
<a id="trace-24978"></a>
<a id="trace-24989"></a>
<a id="trace-24991"></a>
<a id="trace-25064"></a>
<a id="trace-25066"></a>
<a id="trace-25085"></a>
<a id="trace-25087"></a>
<a id="trace-25103"></a>
<a id="trace-25105"></a>
<a id="trace-25121"></a>
<a id="trace-25123"></a>
<a id="trace-25141"></a>
<a id="trace-25143"></a>
<a id="trace-25152"></a>
<a id="trace-25154"></a>
<a id="trace-25171"></a>
<a id="trace-25173"></a>
<a id="trace-25185"></a>
<a id="trace-25187"></a>
<a id="trace-25202"></a>
<a id="trace-25204"></a>
<a id="trace-25216"></a>
<a id="trace-25218"></a>
<a id="trace-25294"></a>
<a id="trace-25296"></a>
<a id="trace-25316"></a>
<a id="trace-25318"></a>
<a id="trace-25330"></a>
<a id="trace-25332"></a>
<a id="trace-25341"></a>
<a id="trace-25343"></a>
<a id="trace-25365"></a>
<a id="trace-25367"></a>
<a id="trace-25375"></a>
<a id="trace-25377"></a>
<a id="trace-25389"></a>
<a id="trace-25391"></a>
- 149.30s–163.30s (×58), actor 5, squad 0 (trace 24705): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 24325. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6340930300982994, 'next_transition': 24724}.
<a id="trace-24712"></a>
- 149.30s–149.30s (×1), actor 9, squad 1 (trace 24712): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 24328. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2289}.
<a id="trace-24713"></a>
- 149.30s–149.30s (×1), actor 9, squad 1 (trace 24713): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 24328. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2289}.
<a id="trace-25397"></a>
- 163.45s–163.45s (×1), actor 1, squad 0 (trace 25397): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 25224. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3653571493757575, 'next_transition': 25457}.
<a id="trace-25398"></a>
- 163.45s–163.45s (×1), actor 1, squad 0 (trace 25398): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 25224. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3653571493757575, 'next_transition': 25457}.
<a id="trace-25457"></a>
<a id="trace-25459"></a>
<a id="trace-25484"></a>
<a id="trace-25486"></a>
<a id="trace-25510"></a>
<a id="trace-25512"></a>
<a id="trace-25589"></a>
<a id="trace-25591"></a>
- 163.80s–165.30s (×8), actor 5, squad 0 (trace 25457): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 25226. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25484}.
<a id="trace-25603"></a>
- 165.65s–165.65s (×1), actor 1, squad 0 (trace 25603): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 165.00s, trace 25517. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25712}.
<a id="trace-25604"></a>
- 165.65s–165.65s (×1), actor 1, squad 0 (trace 25604): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 165.00s, trace 25517. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25712}.
<a id="trace-25712"></a>
<a id="trace-25714"></a>
<a id="trace-25732"></a>
<a id="trace-25734"></a>
<a id="trace-25751"></a>
<a id="trace-25753"></a>
<a id="trace-25772"></a>
<a id="trace-25774"></a>
<a id="trace-25779"></a>
<a id="trace-25781"></a>
<a id="trace-25810"></a>
<a id="trace-25812"></a>
<a id="trace-25844"></a>
<a id="trace-25846"></a>
<a id="trace-25861"></a>
<a id="trace-25863"></a>
<a id="trace-25874"></a>
<a id="trace-25876"></a>
<a id="trace-25955"></a>
<a id="trace-25957"></a>
<a id="trace-25967"></a>
<a id="trace-25969"></a>
<a id="trace-25984"></a>
<a id="trace-25986"></a>
<a id="trace-25996"></a>
<a id="trace-25998"></a>
<a id="trace-26019"></a>
<a id="trace-26021"></a>
<a id="trace-26035"></a>
<a id="trace-26037"></a>
<a id="trace-26052"></a>
<a id="trace-26054"></a>
<a id="trace-26067"></a>
<a id="trace-26069"></a>
<a id="trace-26089"></a>
<a id="trace-26091"></a>
<a id="trace-26110"></a>
<a id="trace-26112"></a>
<a id="trace-26196"></a>
<a id="trace-26198"></a>
<a id="trace-26207"></a>
<a id="trace-26209"></a>
<a id="trace-26231"></a>
<a id="trace-26233"></a>
- 165.80s–176.30s (×44), actor 5, squad 0 (trace 25712): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 25519. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25732}.
<a id="trace-26239"></a>
- 176.40s–176.40s (×1), actor 1, squad 0 (trace 26239): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 175.00s, trace 26119. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38598195806995883, 'next_transition': 26255}.
<a id="trace-26255"></a>
<a id="trace-26257"></a>
<a id="trace-26280"></a>
<a id="trace-26282"></a>
<a id="trace-26302"></a>
<a id="trace-26304"></a>
<a id="trace-26322"></a>
<a id="trace-26324"></a>
<a id="trace-26334"></a>
<a id="trace-26336"></a>
<a id="trace-26360"></a>
<a id="trace-26362"></a>
<a id="trace-26371"></a>
<a id="trace-26373"></a>
<a id="trace-26454"></a>
<a id="trace-26456"></a>
<a id="trace-26472"></a>
<a id="trace-26474"></a>
<a id="trace-26492"></a>
<a id="trace-26494"></a>
<a id="trace-26503"></a>
<a id="trace-26505"></a>
<a id="trace-26529"></a>
<a id="trace-26531"></a>
<a id="trace-26544"></a>
<a id="trace-26546"></a>
<a id="trace-26557"></a>
<a id="trace-26559"></a>
<a id="trace-26568"></a>
<a id="trace-26570"></a>
<a id="trace-26587"></a>
<a id="trace-26589"></a>
<a id="trace-26597"></a>
<a id="trace-26599"></a>
<a id="trace-26669"></a>
<a id="trace-26671"></a>
<a id="trace-26683"></a>
<a id="trace-26685"></a>
<a id="trace-26696"></a>
<a id="trace-26698"></a>
<a id="trace-26705"></a>
<a id="trace-26707"></a>
<a id="trace-26724"></a>
<a id="trace-26726"></a>
<a id="trace-26734"></a>
<a id="trace-26736"></a>
<a id="trace-26753"></a>
<a id="trace-26755"></a>
<a id="trace-26772"></a>
<a id="trace-26774"></a>
<a id="trace-26790"></a>
<a id="trace-26792"></a>
<a id="trace-26802"></a>
<a id="trace-26804"></a>
<a id="trace-26875"></a>
<a id="trace-26877"></a>
<a id="trace-26888"></a>
<a id="trace-26890"></a>
<a id="trace-26904"></a>
<a id="trace-26906"></a>
<a id="trace-26914"></a>
<a id="trace-26916"></a>
<a id="trace-26929"></a>
<a id="trace-26931"></a>
<a id="trace-26938"></a>
<a id="trace-26940"></a>
<a id="trace-26952"></a>
<a id="trace-26954"></a>
<a id="trace-26965"></a>
<a id="trace-26967"></a>
<a id="trace-26980"></a>
<a id="trace-26982"></a>
<a id="trace-26998"></a>
<a id="trace-27000"></a>
<a id="trace-27077"></a>
<a id="trace-27079"></a>
<a id="trace-27090"></a>
<a id="trace-27092"></a>
<a id="trace-27109"></a>
<a id="trace-27111"></a>
<a id="trace-27119"></a>
<a id="trace-27121"></a>
- 176.80s–196.80s (×82), actor 5, squad 0 (trace 26255): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 26121. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6924345632626289, 'next_transition': 26280}.
<a id="trace-2288"></a>
- 197.05s–197.05s (×1), actor 5, squad 0 (events line 2288): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27138}.
<a id="trace-2289"></a>
- 197.05s–197.05s (×1), actor 5, squad 1 (events line 2289): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 227, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2602}.
<a id="trace-27127"></a>
- 197.05s–197.05s (×1), actor 5, squad 0 (trace 27127): renew committed intent (75 s lifetime). Knowledge: actor memory at 197.05s, trace 27127. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27138}.
<a id="trace-27128"></a>
- 197.05s–197.05s (×1), actor 5, squad 1 (trace 27128): renew committed intent (75 s lifetime). Knowledge: actor memory at 197.05s, trace 27128. Next observer evidence: {'until': 227, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2602}.
<a id="trace-27138"></a>
<a id="trace-27140"></a>
<a id="trace-27151"></a>
<a id="trace-27153"></a>
<a id="trace-27165"></a>
<a id="trace-27167"></a>
<a id="trace-27174"></a>
<a id="trace-27176"></a>
<a id="trace-27186"></a>
<a id="trace-27188"></a>
<a id="trace-27197"></a>
<a id="trace-27199"></a>
<a id="trace-27272"></a>
<a id="trace-27274"></a>
<a id="trace-27285"></a>
<a id="trace-27287"></a>
<a id="trace-27303"></a>
<a id="trace-27305"></a>
<a id="trace-27321"></a>
<a id="trace-27323"></a>
<a id="trace-27335"></a>
<a id="trace-27337"></a>
<a id="trace-27347"></a>
<a id="trace-27349"></a>
<a id="trace-27364"></a>
<a id="trace-27366"></a>
<a id="trace-27379"></a>
<a id="trace-27381"></a>
<a id="trace-27397"></a>
<a id="trace-27399"></a>
<a id="trace-27408"></a>
<a id="trace-27410"></a>
<a id="trace-27479"></a>
<a id="trace-27481"></a>
<a id="trace-27491"></a>
<a id="trace-27493"></a>
<a id="trace-27504"></a>
<a id="trace-27506"></a>
<a id="trace-27517"></a>
<a id="trace-27519"></a>
<a id="trace-27531"></a>
<a id="trace-27533"></a>
<a id="trace-27544"></a>
<a id="trace-27546"></a>
<a id="trace-27564"></a>
<a id="trace-27566"></a>
<a id="trace-27574"></a>
<a id="trace-27576"></a>
<a id="trace-27591"></a>
<a id="trace-27593"></a>
<a id="trace-27603"></a>
<a id="trace-27605"></a>
<a id="trace-27682"></a>
<a id="trace-27684"></a>
<a id="trace-27698"></a>
<a id="trace-27700"></a>
<a id="trace-27711"></a>
<a id="trace-27713"></a>
<a id="trace-27720"></a>
<a id="trace-27722"></a>
<a id="trace-27735"></a>
<a id="trace-27737"></a>
<a id="trace-27745"></a>
<a id="trace-27747"></a>
<a id="trace-27760"></a>
<a id="trace-27762"></a>
<a id="trace-27770"></a>
<a id="trace-27772"></a>
<a id="trace-27790"></a>
<a id="trace-27792"></a>
<a id="trace-27800"></a>
<a id="trace-27802"></a>
<a id="trace-27881"></a>
<a id="trace-27883"></a>
<a id="trace-27895"></a>
<a id="trace-27897"></a>
<a id="trace-27906"></a>
<a id="trace-27908"></a>
<a id="trace-27922"></a>
<a id="trace-27924"></a>
<a id="trace-27941"></a>
<a id="trace-27943"></a>
<a id="trace-27951"></a>
<a id="trace-27953"></a>
<a id="trace-27963"></a>
<a id="trace-27965"></a>
<a id="trace-27974"></a>
<a id="trace-27976"></a>
<a id="trace-27989"></a>
<a id="trace-27991"></a>
<a id="trace-27999"></a>
<a id="trace-28001"></a>
<a id="trace-28075"></a>
<a id="trace-28077"></a>
<a id="trace-28087"></a>
<a id="trace-28089"></a>
<a id="trace-28103"></a>
<a id="trace-28105"></a>
<a id="trace-28120"></a>
<a id="trace-28122"></a>
<a id="trace-28134"></a>
<a id="trace-28136"></a>
<a id="trace-28144"></a>
<a id="trace-28146"></a>
<a id="trace-28159"></a>
<a id="trace-28161"></a>
<a id="trace-28169"></a>
<a id="trace-28171"></a>
<a id="trace-28192"></a>
<a id="trace-28194"></a>
<a id="trace-28202"></a>
<a id="trace-28204"></a>
<a id="trace-28275"></a>
<a id="trace-28277"></a>
<a id="trace-28287"></a>
<a id="trace-28289"></a>
<a id="trace-28300"></a>
<a id="trace-28302"></a>
<a id="trace-28311"></a>
<a id="trace-28313"></a>
<a id="trace-28323"></a>
<a id="trace-28325"></a>
<a id="trace-28338"></a>
<a id="trace-28340"></a>
<a id="trace-28359"></a>
<a id="trace-28361"></a>
<a id="trace-28383"></a>
<a id="trace-28385"></a>
<a id="trace-28394"></a>
<a id="trace-28396"></a>
<a id="trace-28468"></a>
<a id="trace-28470"></a>
<a id="trace-28486"></a>
<a id="trace-28488"></a>
<a id="trace-28502"></a>
<a id="trace-28504"></a>
<a id="trace-28514"></a>
<a id="trace-28516"></a>
<a id="trace-28527"></a>
<a id="trace-28529"></a>
<a id="trace-28537"></a>
<a id="trace-28539"></a>
<a id="trace-28554"></a>
<a id="trace-28556"></a>
<a id="trace-28564"></a>
<a id="trace-28566"></a>
<a id="trace-28582"></a>
<a id="trace-28584"></a>
<a id="trace-28600"></a>
<a id="trace-28602"></a>
<a id="trace-28671"></a>
<a id="trace-28673"></a>
<a id="trace-28686"></a>
<a id="trace-28688"></a>
<a id="trace-28698"></a>
<a id="trace-28700"></a>
<a id="trace-28712"></a>
<a id="trace-28714"></a>
<a id="trace-28731"></a>
<a id="trace-28733"></a>
<a id="trace-28746"></a>
<a id="trace-28748"></a>
<a id="trace-28761"></a>
<a id="trace-28763"></a>
<a id="trace-28770"></a>
<a id="trace-28772"></a>
<a id="trace-28785"></a>
<a id="trace-28787"></a>
<a id="trace-28799"></a>
<a id="trace-28801"></a>
<a id="trace-28869"></a>
<a id="trace-28871"></a>
<a id="trace-28887"></a>
<a id="trace-28889"></a>
<a id="trace-28907"></a>
<a id="trace-28909"></a>
<a id="trace-28916"></a>
<a id="trace-28918"></a>
<a id="trace-28931"></a>
<a id="trace-28933"></a>
<a id="trace-28940"></a>
<a id="trace-28942"></a>
<a id="trace-28954"></a>
<a id="trace-28956"></a>
<a id="trace-28968"></a>
<a id="trace-28970"></a>
<a id="trace-28988"></a>
<a id="trace-28990"></a>
<a id="trace-28999"></a>
<a id="trace-29001"></a>
<a id="trace-29073"></a>
<a id="trace-29075"></a>
<a id="trace-29086"></a>
<a id="trace-29088"></a>
<a id="trace-29102"></a>
<a id="trace-29104"></a>
<a id="trace-29112"></a>
<a id="trace-29114"></a>
<a id="trace-29131"></a>
<a id="trace-29133"></a>
- 197.30s–247.30s (×200), actor 5, squad 0 (trace 27138): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 197.05s, trace 27128. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27151}.
<a id="trace-2518"></a>
- 247.80s–247.80s (×1), actor 5, squad 0 (events line 2518): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29164}.
<a id="trace-29140"></a>
<a id="trace-29142"></a>
- 247.80s–247.80s (×2), actor 5, squad 0 (trace 29140): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 29011. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29164}.
<a id="trace-29147"></a>
- 247.80s–247.80s (×1), actor 5, squad 0 (trace 29147): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.523860 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 247.80s, trace 29147. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29164}.
<a id="trace-29148"></a>
- 247.80s–247.80s (×1), actor 5, squad 0 (trace 29148): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.523860 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 247.80s, trace 29148. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29164}.
<a id="trace-29164"></a>
<a id="trace-29166"></a>
<a id="trace-29175"></a>
<a id="trace-29177"></a>
- 248.30s–248.80s (×4), actor 5, squad 0 (trace 29164): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.80s, trace 29148. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29175}.
<a id="trace-2528"></a>
- 249.00s–249.00s (×1), actor 5, squad 0 (events line 2528): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29192}.
<a id="trace-29183"></a>
- 249.00s–249.00s (×1), actor 5, squad 0 (trace 29183): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 249.00s, trace 29183. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29192}.
<a id="trace-29184"></a>
- 249.00s–249.00s (×1), actor 5, squad 0 (trace 29184): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 249.00s, trace 29184. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29192}.
<a id="trace-29192"></a>
<a id="trace-29194"></a>
<a id="trace-29203"></a>
<a id="trace-29205"></a>
- 249.30s–249.80s (×4), actor 5, squad 0 (trace 29192): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 249.00s, trace 29184. Next observer evidence: {'until': 249.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29203}.
<a id="trace-29271"></a>
- 250.20s–250.20s (×1), actor 1, squad 0 (trace 29271): MoveTactically. Knowledge: actor memory at 250.00s, trace 29212. Next observer evidence: None.
<a id="trace-29272"></a>
- 250.20s–250.20s (×1), actor 1, squad 0 (trace 29272): traveling. Knowledge: actor memory at 250.00s, trace 29212. Next observer evidence: None.
<a id="trace-29273"></a>
- 250.20s–250.20s (×1), actor 1, squad 0 (trace 29273): received platoon directive. Knowledge: actor memory at 250.00s, trace 29212. Next observer evidence: None.
<a id="trace-29440"></a>
<a id="trace-29442"></a>
<a id="trace-29452"></a>
<a id="trace-29454"></a>
- 250.30s–250.80s (×4), actor 5, squad 0 (trace 29440): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 29214. Next observer evidence: {'until': 250.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29452}.
<a id="trace-29467"></a>
- 251.20s–251.20s (×1), actor 1, squad 0 (trace 29467): received platoon directive. Knowledge: actor memory at 250.00s, trace 29212. Next observer evidence: None.
<a id="trace-29631"></a>
<a id="trace-29633"></a>
<a id="trace-29653"></a>
<a id="trace-29655"></a>
<a id="trace-29677"></a>
<a id="trace-29679"></a>
<a id="trace-29706"></a>
<a id="trace-29708"></a>
<a id="trace-29729"></a>
<a id="trace-29731"></a>
<a id="trace-29744"></a>
<a id="trace-29746"></a>
<a id="trace-29774"></a>
<a id="trace-29776"></a>
<a id="trace-29797"></a>
<a id="trace-29799"></a>
<a id="trace-29870"></a>
<a id="trace-29872"></a>
<a id="trace-29884"></a>
<a id="trace-29886"></a>
<a id="trace-29904"></a>
<a id="trace-29906"></a>
<a id="trace-29920"></a>
<a id="trace-29922"></a>
<a id="trace-29945"></a>
<a id="trace-29947"></a>
<a id="trace-29962"></a>
<a id="trace-29964"></a>
<a id="trace-29986"></a>
<a id="trace-29988"></a>
<a id="trace-29999"></a>
<a id="trace-30001"></a>
<a id="trace-30017"></a>
<a id="trace-30019"></a>
<a id="trace-30032"></a>
<a id="trace-30034"></a>
<a id="trace-30111"></a>
<a id="trace-30113"></a>
<a id="trace-30137"></a>
<a id="trace-30139"></a>
<a id="trace-30164"></a>
<a id="trace-30166"></a>
<a id="trace-30172"></a>
<a id="trace-30174"></a>
<a id="trace-30194"></a>
<a id="trace-30196"></a>
<a id="trace-30203"></a>
<a id="trace-30205"></a>
<a id="trace-30223"></a>
<a id="trace-30225"></a>
<a id="trace-30236"></a>
<a id="trace-30238"></a>
- 251.30s–263.80s (×52), actor 5, squad 0 (trace 29631): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 29214. Next observer evidence: {'until': 251.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8517657778109247, 'next_transition': 29653}.
<a id="trace-2602"></a>
- 257.45s–257.45s (×1), actor 5, squad 1 (events line 2602): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29955"></a>
- 257.45s–257.45s (×1), actor 5, squad 1 (trace 29955): renew committed intent (75 s lifetime). Knowledge: actor memory at 257.45s, trace 29955. Next observer evidence: {'until': 287.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3110}.
<a id="trace-30256"></a>
- 264.25s–264.25s (×1), actor 1, squad 0 (trace 30256): traveling overwatch. Knowledge: actor memory at 260.00s, trace 30044. Next observer evidence: None.
<a id="trace-30257"></a>
- 264.25s–264.25s (×1), actor 1, squad 0 (trace 30257): matching received arrivals: traveling stage complete. Knowledge: actor memory at 260.00s, trace 30044. Next observer evidence: None.
<a id="trace-30295"></a>
<a id="trace-30297"></a>
<a id="trace-30310"></a>
<a id="trace-30312"></a>
- 264.30s–264.80s (×4), actor 5, squad 0 (trace 30295): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 30046. Next observer evidence: {'until': 264.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0630099192825914, 'next_transition': 30310}.
<a id="trace-30388"></a>
- 265.25s–265.25s (×1), actor 1, squad 0 (trace 30388): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 265.00s, trace 30322. Next observer evidence: None.
<a id="trace-30493"></a>
<a id="trace-30495"></a>
<a id="trace-30514"></a>
<a id="trace-30516"></a>
<a id="trace-30538"></a>
<a id="trace-30540"></a>
<a id="trace-30556"></a>
<a id="trace-30558"></a>
<a id="trace-30580"></a>
<a id="trace-30582"></a>
<a id="trace-30599"></a>
<a id="trace-30601"></a>
<a id="trace-30620"></a>
<a id="trace-30622"></a>
<a id="trace-30633"></a>
<a id="trace-30635"></a>
<a id="trace-30652"></a>
<a id="trace-30654"></a>
<a id="trace-30669"></a>
<a id="trace-30671"></a>
<a id="trace-30753"></a>
<a id="trace-30755"></a>
<a id="trace-30767"></a>
<a id="trace-30769"></a>
<a id="trace-30785"></a>
<a id="trace-30787"></a>
<a id="trace-30798"></a>
<a id="trace-30800"></a>
<a id="trace-30822"></a>
<a id="trace-30824"></a>
<a id="trace-30840"></a>
<a id="trace-30842"></a>
<a id="trace-30858"></a>
<a id="trace-30860"></a>
<a id="trace-30875"></a>
<a id="trace-30877"></a>
<a id="trace-30900"></a>
<a id="trace-30902"></a>
<a id="trace-30912"></a>
<a id="trace-30914"></a>
<a id="trace-30987"></a>
<a id="trace-30989"></a>
<a id="trace-31002"></a>
<a id="trace-31004"></a>
<a id="trace-31028"></a>
<a id="trace-31030"></a>
<a id="trace-31045"></a>
<a id="trace-31047"></a>
<a id="trace-31066"></a>
<a id="trace-31068"></a>
<a id="trace-31078"></a>
<a id="trace-31080"></a>
- 265.30s–277.80s (×52), actor 5, squad 0 (trace 30493): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 30324. Next observer evidence: {'until': 265.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6929893437852908, 'next_transition': 30514}.
<a id="trace-31089"></a>
- 278.00s–278.00s (×1), actor 1, squad 0 (trace 31089): ReactToContact: cover and return fire. Knowledge: actor memory at 275.00s, trace 30920. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4130536570287342, 'next_transition': 31314}.
<a id="trace-31090"></a>
- 278.00s–278.00s (×1), actor 1, squad 0 (trace 31090): bounding overwatch. Knowledge: actor memory at 275.00s, trace 30920. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4130536570287342, 'next_transition': 31314}.
<a id="trace-31091"></a>
- 278.00s–278.00s (×1), actor 1, squad 0 (trace 31091): new contact inside 100 m. Knowledge: actor memory at 275.00s, trace 30920. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4130536570287342, 'next_transition': 31314}.
<a id="trace-31314"></a>
<a id="trace-31316"></a>
<a id="trace-31334"></a>
<a id="trace-31336"></a>
<a id="trace-31355"></a>
<a id="trace-31357"></a>
<a id="trace-31370"></a>
<a id="trace-31372"></a>
- 278.30s–279.80s (×8), actor 5, squad 0 (trace 31314): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 30922. Next observer evidence: {'until': 278.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0283989012712733, 'next_transition': 31334}.
<a id="trace-31380"></a>
- 279.85s–279.85s (×1), actor 1, squad 0 (trace 31380): new contact inside 100 m. Knowledge: actor memory at 275.00s, trace 30920. Next observer evidence: {'until': 280.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1814399494268005, 'next_transition': 31661}.
<a id="trace-31661"></a>
<a id="trace-31663"></a>
<a id="trace-31681"></a>
<a id="trace-31683"></a>
- 280.30s–280.80s (×4), actor 5, squad 0 (trace 31661): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 31592. Next observer evidence: {'until': 280.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33512493335284155, 'next_transition': 31681}.
<a id="trace-2827"></a>
- 281.20s–281.20s (×1), actor 5, squad 0 (events line 2827): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31699"></a>
- 281.20s–281.20s (×1), actor 5, squad 0 (trace 31699): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.717796 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 281.20s, trace 31699. Next observer evidence: None.
<a id="trace-31700"></a>
- 281.20s–281.20s (×1), actor 5, squad 0 (trace 31700): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.717796 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 281.20s, trace 31700. Next observer evidence: None.
<a id="trace-31707"></a>
<a id="trace-31709"></a>
- 281.30s–281.30s (×2), actor 5, squad 0 (trace 31707): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 281.20s, trace 31700. Next observer evidence: {'until': 281.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36096961089483587, 'next_transition': 31725}.
<a id="trace-31725"></a>
- 281.75s–281.75s (×1), actor 1, squad 0 (trace 31725): new contact inside 100 m. Knowledge: actor memory at 280.00s, trace 31590. Next observer evidence: {'until': 281.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09071433677208907, 'next_transition': 31976}.
<a id="trace-31976"></a>
<a id="trace-31978"></a>
<a id="trace-31997"></a>
<a id="trace-31999"></a>
<a id="trace-32026"></a>
<a id="trace-32028"></a>
- 281.80s–282.80s (×6), actor 5, squad 0 (trace 31976): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 281.20s, trace 31700. Next observer evidence: {'until': 282.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1791711171366634, 'next_transition': 31997}.
<a id="trace-32031"></a>
- 282.80s–282.80s (×1), actor 1, squad 0 (trace 32031): received platoon directive; retain contact cover stage. Knowledge: actor memory at 280.00s, trace 31590. Next observer evidence: {'until': 283.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0006898414672952439, 'next_transition': 32067}.
<a id="trace-32067"></a>
<a id="trace-32069"></a>
<a id="trace-32082"></a>
<a id="trace-32084"></a>
- 283.30s–283.80s (×4), actor 5, squad 0 (trace 32067): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 281.20s, trace 31700. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0001634778272427976, 'next_transition': 32082}.
<a id="trace-32099"></a>
- 283.95s–283.95s (×1), actor 1, squad 0 (trace 32099): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 280.00s, trace 31590. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0035536038045906504, 'next_transition': 32126}.
<a id="trace-32101"></a>
- 283.95s–283.95s (×1), actor 1, squad 0 (trace 32101): NeedSupport. Knowledge: actor memory at 280.00s, trace 31590. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0035536038045906504, 'next_transition': 32126}.
<a id="trace-32126"></a>
- 284.20s–284.20s (×1), actor 1, squad 0 (trace 32126): Reorganise: completed/failed drill. Knowledge: actor memory at 280.00s, trace 31590. Next observer evidence: None.
<a id="trace-32129"></a>
- 284.20s–284.20s (×1), actor 1, squad 0 (trace 32129): ReactToContact: cover and return fire. Knowledge: actor memory at 280.00s, trace 31590. Next observer evidence: None.
<a id="trace-32130"></a>
- 284.20s–284.20s (×1), actor 1, squad 0 (trace 32130): Reorganise complete: known contact. Knowledge: actor memory at 280.00s, trace 31590. Next observer evidence: None.
<a id="trace-32269"></a>
<a id="trace-32271"></a>
<a id="trace-32301"></a>
<a id="trace-32303"></a>
- 284.30s–284.80s (×4), actor 5, squad 0 (trace 32269): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 281.20s, trace 31700. Next observer evidence: {'until': 284.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07896553600663046, 'next_transition': 32301}.
<a id="trace-32334"></a>
- 285.10s–285.10s (×1), actor 5, squad 0 (trace 32334): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 285.10s, trace 32334. Next observer evidence: {'until': 285.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31504172225659965, 'next_transition': 32383}.
<a id="trace-32383"></a>
<a id="trace-32385"></a>
<a id="trace-32408"></a>
<a id="trace-32410"></a>
<a id="trace-32425"></a>
<a id="trace-32427"></a>
<a id="trace-32440"></a>
<a id="trace-32442"></a>
<a id="trace-32458"></a>
<a id="trace-32460"></a>
<a id="trace-32470"></a>
<a id="trace-32472"></a>
- 285.30s–287.80s (×12), actor 5, squad 0 (trace 32383): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 285.10s, trace 32334. Next observer evidence: {'until': 285.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449726016187385, 'next_transition': 32408}.
<a id="trace-32487"></a>
- 288.25s–288.25s (×1), actor 1, squad 0 (trace 32487): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 285.00s, trace 32317. Next observer evidence: None.
<a id="trace-32488"></a>
- 288.25s–288.25s (×1), actor 1, squad 0 (trace 32488): rearward bound: one stationary suppressing element. Knowledge: actor memory at 285.00s, trace 32317. Next observer evidence: None.
<a id="trace-32668"></a>
<a id="trace-32670"></a>
<a id="trace-32680"></a>
<a id="trace-32682"></a>
<a id="trace-32702"></a>
<a id="trace-32704"></a>
<a id="trace-32717"></a>
<a id="trace-32719"></a>
<a id="trace-32811"></a>
<a id="trace-32813"></a>
<a id="trace-32846"></a>
<a id="trace-32848"></a>
<a id="trace-32885"></a>
<a id="trace-32887"></a>
<a id="trace-32926"></a>
<a id="trace-32928"></a>
<a id="trace-32961"></a>
<a id="trace-32963"></a>
<a id="trace-32988"></a>
<a id="trace-32990"></a>
<a id="trace-33030"></a>
<a id="trace-33032"></a>
<a id="trace-33043"></a>
<a id="trace-33045"></a>
<a id="trace-33081"></a>
<a id="trace-33083"></a>
<a id="trace-33152"></a>
<a id="trace-33154"></a>
<a id="trace-33165"></a>
<a id="trace-33167"></a>
<a id="trace-33182"></a>
<a id="trace-33184"></a>
<a id="trace-33196"></a>
<a id="trace-33198"></a>
<a id="trace-33215"></a>
<a id="trace-33217"></a>
<a id="trace-33230"></a>
<a id="trace-33232"></a>
<a id="trace-33250"></a>
<a id="trace-33252"></a>
<a id="trace-33262"></a>
<a id="trace-33264"></a>
<a id="trace-33282"></a>
<a id="trace-33284"></a>
<a id="trace-33295"></a>
<a id="trace-33297"></a>
- 288.30s–299.80s (×46), actor 5, squad 0 (trace 32668): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 285.10s, trace 32334. Next observer evidence: {'until': 288.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32680}.
<a id="trace-33368"></a>
- 300.25s–300.25s (×1), actor 1, squad 0 (trace 33368): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 300.00s, trace 33301. Next observer evidence: None.
<a id="trace-33369"></a>
- 300.25s–300.25s (×1), actor 1, squad 0 (trace 33369): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 300.00s, trace 33301. Next observer evidence: None.
<a id="trace-33428"></a>
<a id="trace-33430"></a>
<a id="trace-33441"></a>
<a id="trace-33443"></a>
<a id="trace-33461"></a>
<a id="trace-33463"></a>
<a id="trace-33470"></a>
<a id="trace-33472"></a>
<a id="trace-33493"></a>
<a id="trace-33495"></a>
<a id="trace-33508"></a>
<a id="trace-33510"></a>
<a id="trace-33524"></a>
<a id="trace-33526"></a>
<a id="trace-33538"></a>
<a id="trace-33540"></a>
<a id="trace-33560"></a>
<a id="trace-33562"></a>
<a id="trace-33572"></a>
<a id="trace-33574"></a>
<a id="trace-33643"></a>
<a id="trace-33645"></a>
<a id="trace-33656"></a>
<a id="trace-33658"></a>
<a id="trace-33669"></a>
<a id="trace-33671"></a>
<a id="trace-33683"></a>
<a id="trace-33685"></a>
<a id="trace-33698"></a>
<a id="trace-33700"></a>
- 300.30s–307.30s (×30), actor 5, squad 0 (trace 33428): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 33303. Next observer evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874488086481327, 'next_transition': 33441}.
<a id="trace-33706"></a>
- 307.50s–307.50s (×1), actor 1, squad 0 (trace 33706): NeedSupport. Knowledge: actor memory at 305.00s, trace 33580. Next observer evidence: {'until': 307.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03273278412005322, 'next_transition': 33717}.
<a id="trace-33717"></a>
<a id="trace-33719"></a>
<a id="trace-33733"></a>
<a id="trace-33735"></a>
<a id="trace-33743"></a>
<a id="trace-33745"></a>
<a id="trace-33760"></a>
<a id="trace-33762"></a>
<a id="trace-33771"></a>
<a id="trace-33773"></a>
<a id="trace-33846"></a>
<a id="trace-33848"></a>
<a id="trace-33855"></a>
<a id="trace-33857"></a>
<a id="trace-33880"></a>
<a id="trace-33882"></a>
<a id="trace-33890"></a>
<a id="trace-33892"></a>
<a id="trace-33911"></a>
<a id="trace-33913"></a>
<a id="trace-33925"></a>
<a id="trace-33927"></a>
<a id="trace-33949"></a>
<a id="trace-33951"></a>
<a id="trace-33962"></a>
<a id="trace-33964"></a>
<a id="trace-33984"></a>
<a id="trace-33986"></a>
<a id="trace-33994"></a>
<a id="trace-33996"></a>
<a id="trace-34070"></a>
<a id="trace-34072"></a>
<a id="trace-34081"></a>
<a id="trace-34083"></a>
- 307.80s–315.80s (×34), actor 5, squad 0 (trace 33717): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 33582. Next observer evidence: {'until': 308.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2666220381926445, 'next_transition': 33733}.
<a id="trace-34099"></a>
- 316.25s–316.25s (×1), actor 1, squad 0 (trace 34099): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 315.00s, trace 34002. Next observer evidence: None.
<a id="trace-34108"></a>
<a id="trace-34110"></a>
<a id="trace-34121"></a>
<a id="trace-34123"></a>
<a id="trace-34148"></a>
<a id="trace-34150"></a>
<a id="trace-34175"></a>
<a id="trace-34177"></a>
<a id="trace-34191"></a>
<a id="trace-34193"></a>
<a id="trace-34210"></a>
<a id="trace-34212"></a>
<a id="trace-34230"></a>
<a id="trace-34232"></a>
<a id="trace-34238"></a>
<a id="trace-34240"></a>
<a id="trace-34318"></a>
<a id="trace-34320"></a>
<a id="trace-34337"></a>
<a id="trace-34339"></a>
<a id="trace-34354"></a>
<a id="trace-34356"></a>
<a id="trace-34363"></a>
<a id="trace-34365"></a>
<a id="trace-34380"></a>
<a id="trace-34382"></a>
<a id="trace-34393"></a>
<a id="trace-34395"></a>
<a id="trace-34406"></a>
<a id="trace-34408"></a>
<a id="trace-34418"></a>
<a id="trace-34420"></a>
<a id="trace-34443"></a>
<a id="trace-34445"></a>
<a id="trace-34451"></a>
<a id="trace-34453"></a>
<a id="trace-34522"></a>
<a id="trace-34524"></a>
<a id="trace-34532"></a>
<a id="trace-34534"></a>
<a id="trace-34549"></a>
<a id="trace-34551"></a>
<a id="trace-34558"></a>
<a id="trace-34560"></a>
<a id="trace-34573"></a>
<a id="trace-34575"></a>
<a id="trace-34587"></a>
<a id="trace-34589"></a>
<a id="trace-34601"></a>
<a id="trace-34603"></a>
<a id="trace-34610"></a>
<a id="trace-34612"></a>
<a id="trace-34628"></a>
<a id="trace-34630"></a>
<a id="trace-34638"></a>
<a id="trace-34640"></a>
- 316.30s–329.80s (×56), actor 5, squad 0 (trace 34108): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.00s, trace 34004. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512676813666906, 'next_transition': 34121}.
<a id="trace-3110"></a>
- 317.45s–317.45s (×1), actor 5, squad 1 (events line 3110): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-34163"></a>
- 317.45s–317.45s (×1), actor 5, squad 1 (trace 34163): renew committed intent (75 s lifetime). Knowledge: actor memory at 317.45s, trace 34163. Next observer evidence: {'until': 347.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-3171"></a>
- 330.10s–330.10s (×1), actor 5, squad 0 (events line 3171): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-34670"></a>
- 330.10s–330.10s (×1), actor 5, squad 0 (trace 34670): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.262896 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 330.10s, trace 34670. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34718}.
<a id="trace-34671"></a>
- 330.10s–330.10s (×1), actor 5, squad 0 (trace 34671): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.262896 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 330.10s, trace 34671. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34718}.
<a id="trace-34718"></a>
<a id="trace-34720"></a>
<a id="trace-34737"></a>
<a id="trace-34739"></a>
<a id="trace-34753"></a>
<a id="trace-34755"></a>
<a id="trace-34760"></a>
<a id="trace-34762"></a>
- 330.30s–331.80s (×8), actor 5, squad 0 (trace 34718): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.10s, trace 34671. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34737}.
<a id="trace-34771"></a>
- 332.25s–332.25s (×1), actor 1, squad 0 (trace 34771): Withdraw to received rally. Knowledge: actor memory at 330.00s, trace 34645. Next observer evidence: None.
<a id="trace-34772"></a>
- 332.25s–332.25s (×1), actor 1, squad 0 (trace 34772): rearward bound: one stationary suppressing element. Knowledge: actor memory at 330.00s, trace 34645. Next observer evidence: None.
<a id="trace-34837"></a>
<a id="trace-34839"></a>
<a id="trace-34848"></a>
<a id="trace-34850"></a>
<a id="trace-34869"></a>
<a id="trace-34871"></a>
<a id="trace-34886"></a>
<a id="trace-34888"></a>
<a id="trace-34902"></a>
<a id="trace-34904"></a>
<a id="trace-34916"></a>
<a id="trace-34918"></a>
<a id="trace-34989"></a>
<a id="trace-34991"></a>
<a id="trace-35002"></a>
<a id="trace-35004"></a>
<a id="trace-35021"></a>
<a id="trace-35023"></a>
<a id="trace-35039"></a>
<a id="trace-35041"></a>
<a id="trace-35064"></a>
<a id="trace-35066"></a>
<a id="trace-35073"></a>
<a id="trace-35075"></a>
<a id="trace-35089"></a>
<a id="trace-35091"></a>
<a id="trace-35102"></a>
<a id="trace-35104"></a>
<a id="trace-35117"></a>
<a id="trace-35119"></a>
<a id="trace-35130"></a>
<a id="trace-35132"></a>
<a id="trace-35202"></a>
<a id="trace-35204"></a>
<a id="trace-35213"></a>
<a id="trace-35215"></a>
<a id="trace-35228"></a>
<a id="trace-35230"></a>
<a id="trace-35239"></a>
<a id="trace-35241"></a>
<a id="trace-35256"></a>
<a id="trace-35258"></a>
<a id="trace-35268"></a>
<a id="trace-35270"></a>
<a id="trace-35287"></a>
<a id="trace-35289"></a>
<a id="trace-35298"></a>
<a id="trace-35300"></a>
<a id="trace-35321"></a>
<a id="trace-35323"></a>
<a id="trace-35331"></a>
<a id="trace-35333"></a>
<a id="trace-35404"></a>
<a id="trace-35406"></a>
<a id="trace-35416"></a>
<a id="trace-35418"></a>
<a id="trace-35429"></a>
<a id="trace-35431"></a>
<a id="trace-35438"></a>
<a id="trace-35440"></a>
<a id="trace-35456"></a>
<a id="trace-35458"></a>
<a id="trace-35464"></a>
<a id="trace-35466"></a>
<a id="trace-35482"></a>
<a id="trace-35484"></a>
<a id="trace-35493"></a>
<a id="trace-35495"></a>
<a id="trace-35510"></a>
<a id="trace-35512"></a>
<a id="trace-35520"></a>
<a id="trace-35522"></a>
<a id="trace-35598"></a>
<a id="trace-35600"></a>
<a id="trace-35618"></a>
<a id="trace-35620"></a>
<a id="trace-35630"></a>
<a id="trace-35632"></a>
<a id="trace-35640"></a>
<a id="trace-35642"></a>
<a id="trace-35658"></a>
<a id="trace-35660"></a>
<a id="trace-35667"></a>
<a id="trace-35669"></a>
<a id="trace-35683"></a>
<a id="trace-35685"></a>
<a id="trace-35698"></a>
<a id="trace-35700"></a>
<a id="trace-35709"></a>
<a id="trace-35711"></a>
<a id="trace-35719"></a>
<a id="trace-35721"></a>
<a id="trace-35792"></a>
<a id="trace-35794"></a>
<a id="trace-35807"></a>
<a id="trace-35809"></a>
<a id="trace-35821"></a>
<a id="trace-35823"></a>
<a id="trace-35837"></a>
<a id="trace-35839"></a>
<a id="trace-35860"></a>
<a id="trace-35862"></a>
<a id="trace-35867"></a>
<a id="trace-35869"></a>
<a id="trace-35880"></a>
<a id="trace-35882"></a>
<a id="trace-35892"></a>
<a id="trace-35894"></a>
<a id="trace-35907"></a>
<a id="trace-35909"></a>
<a id="trace-35919"></a>
<a id="trace-35921"></a>
- 332.30s–359.80s (×112), actor 5, squad 0 (trace 34837): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.10s, trace 34671. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34848}.

## Net delivery

319 matched order/radio deliveries; 514 explicitly recorded losses; 4 unmatched orders (not classified as lost).
Matched delay: mean 0.367s; maximum 1.500s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4071: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4072: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4073: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4074: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4075: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4076: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4077: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4079: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4080: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4081: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4082: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4553: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4554: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4555: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4556: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4557: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4558: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4559: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4560: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4561: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4562: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4563: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4564: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 4779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 4780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 4801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 4802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 4803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 4804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4805: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4806: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4807: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4808: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4809: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4810: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4811: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4812: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 4813: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 4814: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 4815: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 4816: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 5446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 5448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 5449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5450: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5451: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5452: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5453: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5454: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5455: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5456: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5457: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5458: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5459: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 5460: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 5461: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6232: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6233: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6234: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6237: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 6239: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 6241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 6242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6243: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6244: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6245: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6246: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6247: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6248: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6249: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6250: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6251: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6252: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 6253: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 6254: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 7857: estimate 14.66; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 7858: estimate 14.66; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 7859: estimate 14.66; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 7860: estimate 14.66; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8026: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8027: estimate 14.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8028: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8030: estimate 14.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8031: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 8033: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 8034: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 8035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8036: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8037: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8038: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8039: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8040: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8041: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8042: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8043: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 8044: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 8045: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 8046: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 8047: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8807: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 8808: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8809: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8811: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8812: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8814: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 8815: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 8816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8817: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8818: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8819: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8820: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8821: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8822: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8823: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8824: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8825: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8826: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 8827: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 8828: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9413: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 9414: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9415: estimate 15.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9417: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9418: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 9420: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 9421: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 9422: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9423: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9424: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9425: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9426: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9427: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9428: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9429: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9430: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 9431: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 9432: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 9433: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 9434: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.05s leader 5, trace 9689: estimate 16.04; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.05s leader 5, trace 9936: estimate 16.00; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.05s leader 5, trace 10016: estimate 16.06; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 11909: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 11910: estimate 15.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 11911: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11913: estimate 16.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11914: estimate 16.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 11915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 11916: estimate 15.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 11917: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 11918: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11919: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11920: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 11921: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11922: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11923: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11924: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11925: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11926: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 11927: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 11928: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 11929: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 11930: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.05s leader 5, trace 12058: estimate 16.03; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 12117: estimate 15.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 12118: estimate 15.99; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.05s leader 5, trace 12161: estimate 16.02; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 12199: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 12200: estimate 15.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 12201: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 12202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 12203: estimate 15.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 12204: estimate 16.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 12205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 12206: estimate 15.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 12207: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 12208: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 12209: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 12210: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 12211: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 12212: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 12213: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 12214: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 12215: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 12216: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 12217: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 12218: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 12219: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 12220: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 76.05s leader 5, trace 12291: estimate 16.03; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 12456: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 12457: estimate 15.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 12458: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 12459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 12460: estimate 15.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 12461: estimate 16.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 12462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 12463: estimate 15.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 12464: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 12465: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 12466: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 12467: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 12468: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 12469: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 12470: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 12471: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 12472: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 12473: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 12474: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 12475: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 12476: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 12477: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.05s leader 5, trace 12794: estimate 16.03; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 13039: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 13040: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13041: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13043: estimate 15.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13044: estimate 16.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 13045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 13046: estimate 15.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 13047: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 13048: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13049: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13050: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13051: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13052: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13053: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13054: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13055: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13056: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13057: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13058: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 13059: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 13060: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 13389: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 13390: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 13391: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 13392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 13393: estimate 15.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 13394: estimate 15.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 13395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 13396: estimate 15.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 13397: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 13398: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 13399: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 13400: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 13401: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 13402: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 13403: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 13404: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 13405: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 13406: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 13407: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 13408: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 13409: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.05s leader 5, trace 14510: estimate 15.73; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 14517: estimate 15.72; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 14518: estimate 15.72; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14858: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 14859: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14861: estimate 15.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14862: estimate 15.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14864: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 14865: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14866: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14867: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14868: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14869: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14870: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14871: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14872: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14873: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14874: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14875: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 14876: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 14877: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 99.35s leader 5, trace 18233: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 99.35s leader 5, trace 18234: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 18255: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 18256: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 18257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 18258: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 18259: estimate 15.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 18260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 18261: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 18262: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 18263: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 18264: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 18265: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 18266: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 18267: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 18268: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 18269: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 18270: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 18271: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 18272: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 18273: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 18274: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 18331: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 18332: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 18593: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 18594: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 18595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 18596: estimate 15.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 18597: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 18598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 18599: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 18600: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 18601: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 18602: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 18603: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 18604: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 18605: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 18606: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 18607: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 18608: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 18609: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 18610: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 18611: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 18612: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 18800: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 18801: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 18802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 18803: estimate 15.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 18804: estimate 15.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 18805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 18806: estimate 15.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 18807: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 18808: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 18809: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 18810: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 18811: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 18812: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 18813: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 18814: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 18815: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 18816: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 18817: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 18818: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 18819: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 19014: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 19015: estimate 15.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 19016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 19017: estimate 15.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 19018: estimate 15.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 19019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 19020: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 19021: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 19022: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 19023: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 19024: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 19025: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 19026: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 19027: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 19028: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 19029: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 19030: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 19031: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 19032: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 19033: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 19313: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 19314: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 19315: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 19316: estimate 15.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 19317: estimate 15.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 19318: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 19319: estimate 15.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 19320: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 19321: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 19322: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 19323: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 19324: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 19325: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 19326: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 19327: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 19328: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 19329: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 19330: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 19331: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 19566: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 19567: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 19568: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 19569: estimate 15.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 19570: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 19571: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 19572: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 19573: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 19574: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 19575: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 19576: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 19577: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 19578: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 19579: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 19580: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 19581: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 19582: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 19583: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 19584: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 23000: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 23001: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 23002: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 23003: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 23004: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 23005: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 23006: estimate 15.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 23007: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 23008: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 23009: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 23010: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 23011: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 23012: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 23013: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 23014: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 23015: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 23016: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 23017: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 23018: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 132.95s leader 5, trace 23231: estimate 15.16; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 132.95s leader 5, trace 23232: estimate 15.16; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 23314: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 23315: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 23316: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 23317: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 23318: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 23319: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 23320: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 23321: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 23322: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 23323: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 23324: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 23325: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 23326: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 23327: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 23328: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 23329: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 23330: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 23331: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 23332: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.05s leader 5, trace 23450: estimate 15.05; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.05s leader 5, trace 23451: estimate 15.05; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.05s leader 5, trace 23452: estimate 15.05; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 137.05s leader 5, trace 23453: estimate 15.05; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 24044: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 24045: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 24046: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 24047: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 24048: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 24049: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 24050: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 24051: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 24052: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 24053: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 24054: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 24055: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 24056: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 24057: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 24058: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 24059: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 24060: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 24061: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 24062: estimate 1.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 24322: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 24323: estimate 14.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 24324: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 24325: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 24326: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 24327: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 24328: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 24329: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 24330: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 24331: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 24332: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 24333: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 24334: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 24335: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 24336: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 24337: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 24338: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 24339: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 24340: estimate 1.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 24739: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 24740: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 24741: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 24742: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 24743: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 24744: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 24745: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 24746: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 24747: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 24748: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 24749: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 24750: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 24751: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 24752: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 24753: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 24754: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 24755: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 24756: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 24757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 24999: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 25000: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 25001: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 25002: estimate 13.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 25003: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 25004: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 25005: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 25006: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 25007: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 25008: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 25009: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 25010: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 25011: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 25012: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 25013: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 25014: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 25015: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 25016: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 25017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 25224: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 25225: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 25226: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 25227: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 25228: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 25229: estimate 14.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 25230: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 25231: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 25232: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 25233: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 25234: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 25235: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 25236: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 25237: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 25238: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 25239: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 25240: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 25241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 25517: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 25518: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 25519: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 25520: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 25521: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 25522: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 25523: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 25524: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 25525: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 25526: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 25527: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 25528: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 25529: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 25530: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 25531: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 25532: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 25533: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 25534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 25887: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 25888: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 25889: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 25890: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 25891: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 25892: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 25893: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 25894: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 25895: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 25896: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 25897: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 25898: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 25899: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 25900: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 25901: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 25902: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 25903: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 25904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 26119: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 26120: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 26121: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 26122: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 26123: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 26124: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 26125: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 26126: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 26127: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 26128: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 26129: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 26130: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 26131: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 26132: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 26133: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 26134: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 26135: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 26136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 26378: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 26379: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 26380: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 26381: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 26382: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 26383: estimate 13.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 26384: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 26385: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 26386: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 26387: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 26388: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 26389: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 26390: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 26391: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 26392: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 26393: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 26394: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 26395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 26605: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 26606: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 26607: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 26608: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 26609: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 26610: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 26611: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 26612: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 26613: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 26614: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 26615: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 26616: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 26617: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 26618: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 26619: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 26620: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 26621: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 26622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 26809: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 26810: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 26811: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 26812: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 26813: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 26814: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 26815: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 26816: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 26817: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 26818: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 26819: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 26820: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 26821: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 26822: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 26823: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 26824: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 26825: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 26826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 27005: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 27006: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 27007: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 27008: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 27009: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 27010: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 27011: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 27012: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 27013: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 27014: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 27015: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 27016: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 27017: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 27018: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 27019: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 27020: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 27021: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 27022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.05s leader 5, trace 27127: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.05s leader 5, trace 27128: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 27204: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 27205: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 27206: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 27207: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 27208: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 27209: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 27210: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 27211: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 27212: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 27213: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 27214: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 27215: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 27216: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 27217: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 27218: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 27219: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 27220: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 27221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 27413: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 27414: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 27415: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 27416: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 27417: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 27418: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 27419: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 27420: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 27421: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 27422: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 27423: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 27424: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 27425: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 27426: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 27427: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 27428: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 27429: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 27430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 27612: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 27613: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 27614: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 27615: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 27616: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 27617: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 27618: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 27619: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 27620: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 27621: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 27622: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 27623: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 27624: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 27625: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 27626: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 27627: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 27628: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 27629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 27816: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 27817: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 27818: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 27819: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 27820: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 27821: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 27822: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 27823: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 27824: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 27825: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 27826: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 27827: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 27828: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 27829: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 27830: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 27831: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 27832: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 27833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 28010: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 28011: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 28012: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 28013: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 28014: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 28015: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 28016: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 28017: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 28018: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 28019: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 28020: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 28021: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 28022: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 28023: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 28024: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 28025: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 28026: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 28027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 28209: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 28210: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 28211: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 28212: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 28213: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 28214: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 28215: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 28216: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 28217: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 28218: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 28219: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 28220: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 28221: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 28222: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 28223: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 28224: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 28225: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 28226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 28403: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 28404: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 28405: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 28406: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 28407: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 28408: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 28409: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 28410: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 28411: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 28412: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 28413: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 28414: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 28415: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 28416: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 28417: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 28418: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 28419: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 28420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 28607: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 28608: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 28609: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 28610: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 28611: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 28612: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 28613: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 28614: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 28615: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 28616: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 28617: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 28618: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 28619: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 28620: estimate 1.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 28621: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 28622: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 28623: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 28624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 28804: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 28805: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 28806: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 28807: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 28808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 28809: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 28810: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 28811: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 28812: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 28813: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 28814: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 28815: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 28816: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 28817: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 28818: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 28819: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 28820: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 28821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 29009: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 29010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 29011: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 29012: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 29013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 29014: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 29015: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 29016: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 29017: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 29018: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 29019: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 29020: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 29021: estimate 1.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 29022: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 29023: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 29024: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 29025: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 29026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.80s leader 5, trace 29147: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.80s leader 5, trace 29148: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 249.00s leader 5, trace 29183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 249.00s leader 5, trace 29184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 29212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 29213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 29214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 29215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 29216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 29217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 29218: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 29219: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 29220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 29221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 29222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 29223: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 29224: estimate 1.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 29225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 29226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 29227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 29228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 29229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 29804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 29805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 29806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 29807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 29808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 29809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 29810: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 29811: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 29812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 29813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 29814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 29815: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 29816: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 29817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 29818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 29819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 29820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 29821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 257.45s leader 5, trace 29955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 30044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 30045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 30046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 30047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 30048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 30049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 30050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 30051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 30052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 30053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 30054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 30055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 30056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 30057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 30058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 30059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 30060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 30061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 30322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 30323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 30324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 30325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 30326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 30327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 30328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 30329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 30330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 30331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 30332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 30333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 30334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 30335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 30336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 30337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 30338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 30339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 30677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 30678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 30679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 30680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 30681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 30682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 30683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 30684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 30685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 30686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 30687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 30688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 30689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 30690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 30691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 30692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 30693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 30694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 30920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 30921: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 30922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 30923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 30924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 30925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 30926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 30927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 30928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 30929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 30930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 30931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 30932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 30933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 30934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 30935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 30936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 30937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 31590: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 31591: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 31592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 31593: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 31594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 31595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 31596: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 31597: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 31598: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 31599: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 31600: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 31601: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 31602: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 31603: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 31604: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 31605: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 31606: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 31607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 281.20s leader 5, trace 31699: estimate 1.47; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 281.20s leader 5, trace 31700: estimate 1.47; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 32317: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 32318: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 32319: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 32320: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 32321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 32322: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 32323: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 32324: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 32325: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 32326: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 32327: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 32328: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 32329: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 32330: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 32331: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 32332: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 32333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.10s leader 5, trace 32334: estimate 13.20; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 32731: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 32732: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 32733: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 32734: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 32735: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 32736: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 32737: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 32738: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 32739: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 32740: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 32741: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 32742: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 32743: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 32744: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 32745: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 32746: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 32747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 33088: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 33089: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 33090: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 33091: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 33092: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 33093: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 33094: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 33095: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 33096: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 33097: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 33098: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 33099: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 33100: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 33101: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 33102: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 33103: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 33104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 33301: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 33302: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 33303: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 33304: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 33305: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 33306: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 33307: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 33308: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 33309: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 33310: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 33311: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 33312: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 33313: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 33314: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 33315: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 33316: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 33317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 33580: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 33581: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 33582: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 33583: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 33584: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 33585: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 33586: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 33587: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 33588: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 33589: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 33590: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 33591: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 33592: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 33593: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 33594: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 33595: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 33596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 33779: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 33780: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 33781: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 33782: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 33783: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 33784: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 33785: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 33786: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 33787: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 33788: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 33789: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 33790: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 33791: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 33792: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 33793: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 33794: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 33795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 34002: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 34003: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 34004: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 34005: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 34006: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 34007: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 34008: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 34009: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 34010: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 34011: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 34012: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 34013: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 34014: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 34015: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 34016: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 34017: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 34018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 317.45s leader 5, trace 34163: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 34249: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 34250: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 34251: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 34252: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 34253: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 34254: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 34255: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 34256: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 34257: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 34258: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 34259: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 34260: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 34261: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 34262: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 34263: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 34264: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 34265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 34458: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 34459: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 34460: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 34461: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 34462: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 34463: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 34464: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 34465: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 34466: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 34467: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 34468: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 34469: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 34470: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 34471: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 34472: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 34473: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 34474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 34645: estimate 11.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 34646: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 34647: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 34648: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 34649: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 34650: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 34651: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 34652: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 34653: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 34654: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 34655: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 34656: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 34657: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 34658: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 34659: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 34660: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 34661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.10s leader 5, trace 34670: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.10s leader 5, trace 34671: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 34924: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 34925: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 34926: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 34927: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 34928: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 34929: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 34930: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 34931: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 34932: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 34933: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 34934: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 34935: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 34936: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 34937: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 34938: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 34939: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 34940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 35135: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 35136: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 35137: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 35138: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 35139: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 35140: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 35141: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 35142: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 35143: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 35144: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 35145: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 35146: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 35147: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 35148: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 35149: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 35150: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 35151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 35338: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 35339: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 35340: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 35341: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 35342: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 35343: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 35344: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 35345: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 35346: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 35347: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 35348: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 35349: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 35350: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 35351: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 35352: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 35353: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 35354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 35534: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 35535: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 35536: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 35537: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 35538: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 35539: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 35540: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 35541: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 35542: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 35543: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 35544: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 35545: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 35546: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 35547: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 35548: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 35549: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 35550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 35726: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 35727: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 35728: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 35729: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 35730: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 35731: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 35732: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 35733: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 35734: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 35735: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 35736: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 35737: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 35738: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 35739: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 35740: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 35741: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 35742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 35926: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 35927: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 35928: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 35929: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 35930: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 35931: estimate 1.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 35932: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 35933: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 35934: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 35935: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 35936: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 35937: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 35938: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 35939: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 35940: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 35941: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 35942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren killed in action
- 1: Dane incapacitated
- 1: Ash incapacitated
- 1: Ellis killed in action
- 1: Soren incapacitated
- 1: Reed incapacitated

## Outcome attribution

- 137.05s, evidence 1891: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3133844589522256, 'next_transition': 23463}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.05s, evidence 1892: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23491}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.05s, evidence 23450: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332299 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3133844589522256, 'next_transition': 23463}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.05s, evidence 23451: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332299 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3133844589522256, 'next_transition': 23463}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.05s, evidence 23452: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332299 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23491}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 137.05s, evidence 23453: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.332299 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23491}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 197.05s, evidence 2288: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27138}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 197.05s, evidence 2289: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 227, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2602}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 257.45s, evidence 2602: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 317.45s, evidence 3110: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 330.10s, evidence 3171: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 330.10s, evidence 34670: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.262896 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34718}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 330.10s, evidence 34671: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.262896 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34718}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
