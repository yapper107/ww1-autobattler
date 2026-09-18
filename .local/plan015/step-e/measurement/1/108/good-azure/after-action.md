# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/1/108/good-azure/battle-108-1789673641619612738`

## Battle summary

**Ember** · 360 s · 618 shots.

### Turning points

- 25.6s, squad 4: contact (events line 315). First recorded contact.
- 54.9s, squad 0: help call ([trace 17115](#trace-17115)). 56.5s, squad 1: answered a neighbour with support by fire.
- 56.5s, squad 1: help answer ([trace 17708](#trace-17708)). 61.4s, squad 1: answered a neighbour with support by fire.
- 59.7s, squad 0: help call ([trace 19816](#trace-19816)). 61.4s, squad 1: answered a neighbour with support by fire.
- 61.4s, squad 1: help answer ([trace 20087](#trace-20087)). 61.7s, squad 1: prepared a base of fire.
- 62.2s, squad 1: help call ([trace 23771](#trace-23771)). 76.0s, squad 0: answered a neighbour with support by fire.
- 73.6s, squad 1: withdrawal ([trace 24666](#trace-24666)). No completion observed before termination.
- 75.8s, squad 0: help call ([trace 26765](#trace-26765)). No completion observed before termination.
- 76.0s, squad 0: help answer ([trace 26775](#trace-26775)). 77.0s, squad 0: prepared a base of fire.
- 104.2s, squad 0: withdrawal ([trace 31749](#trace-31749)). 113.7s, squad 0: took cover and returned fire.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose Withdraw to received rally, broke contact and 5 further drill types; withdrew; 54 shots, 5/8 lost.
- **1** — FightHere; chose prepared a base of fire, broke contact and 4 further drill types; no completed objective recorded; 14 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 350 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 200 shots, 0/4 lost.

### Decisions and attribution

At 74.2s, squad 1 chose FightHere: nearest known group ([trace 24841](#trace-24841)), followed by 4 shots and 1 own casualties; estimate 14.7 against 7 distinct squad-reported contacts; At 32.2s, squad 0 chose FightHere: nearest known group ([trace 5185](#trace-5185)), followed by 0 shots and 1 own casualties; estimate 3.9 against 3 distinct squad-reported contacts; At 65.8s, squad 1 chose HelpSquad: received need unanswered for one report round trip ([trace 24037](#trace-24037)), followed by 0 shots and 1 own casualties; estimate 14.7 against 9 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 830](#trace-830)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450037064512694, 'next_transition': 849}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 832](#trace-832)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111920123757026, 'next_transition': 1005}.

### Communication

300 matched deliveries (mean 0.40s, max 1.65s); 484 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.55s, squad 4, contact, evidence events line 315: First recorded contact; .
- 54.85s, squad 0, help call, evidence 17115: NeedSupport; 56.5s, squad 1: answered a neighbour with support by fire.
- 56.55s, squad 1, help answer, evidence 17708: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 61.4s, squad 1: answered a neighbour with support by fire.
- 59.65s, squad 0, help call, evidence 19816: NeedSupport; 61.4s, squad 1: answered a neighbour with support by fire.
- 61.40s, squad 1, help answer, evidence 20087: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 61.7s, squad 1: prepared a base of fire.
- 62.25s, squad 1, help call, evidence 23771: NeedSupport; 76.0s, squad 0: answered a neighbour with support by fire.
- 73.60s, squad 1, withdrawal, evidence 24666: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 75.75s, squad 0, help call, evidence 26765: NeedSupport; No completion observed before termination.
- 76.00s, squad 0, help answer, evidence 26775: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 77.0s, squad 0: prepared a base of fire.
- 104.20s, squad 0, withdrawal, evidence 31749: Withdraw to received rally; 113.7s, squad 0: took cover and returned fire.
- 104.20s, squad 0, help call, evidence 32043: NeedSupport; No completion observed before termination.
- 117.65s, squad 0, withdrawal, evidence 32899: BreakContact: believed ratio at least two without superiority; 155.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 263.60s, squad 0, withdrawal, evidence 39184: BreakContact: believed ratio at least two without superiority; 298.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 313.85s, squad 0, withdrawal, evidence 41497: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915394053469063, 'next_transition': 703}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915394053469063, 'next_transition': 703}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7915394053469063, 'next_transition': 703}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544269950010362, 'next_transition': 104}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544269950010362, 'next_transition': 104}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544269950010362, 'next_transition': 104}.
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
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111920123757026, 'next_transition': 1005}.
<a id="trace-830"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 830): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 830. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450037064512694, 'next_transition': 849}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450037064512694, 'next_transition': 849}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111920123757026, 'next_transition': 1005}.
<a id="trace-833"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 833): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111920123757026, 'next_transition': 1005}.
<a id="trace-849"></a>
<a id="trace-851"></a>
<a id="trace-880"></a>
<a id="trace-882"></a>
<a id="trace-963"></a>
<a id="trace-965"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 849): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449983137943638, 'next_transition': 880}.
<a id="trace-994"></a>
<a id="trace-996"></a>
<a id="trace-1551"></a>
<a id="trace-1553"></a>
<a id="trace-1604"></a>
<a id="trace-1606"></a>
<a id="trace-1646"></a>
<a id="trace-1648"></a>
<a id="trace-1696"></a>
<a id="trace-1698"></a>
<a id="trace-1735"></a>
<a id="trace-1737"></a>
<a id="trace-1803"></a>
<a id="trace-1805"></a>
<a id="trace-1830"></a>
<a id="trace-1832"></a>
<a id="trace-1951"></a>
<a id="trace-1953"></a>
<a id="trace-1981"></a>
<a id="trace-1983"></a>
<a id="trace-2005"></a>
<a id="trace-2007"></a>
<a id="trace-2040"></a>
<a id="trace-2042"></a>
<a id="trace-2071"></a>
<a id="trace-2073"></a>
<a id="trace-2109"></a>
<a id="trace-2111"></a>
<a id="trace-2130"></a>
<a id="trace-2132"></a>
<a id="trace-2185"></a>
<a id="trace-2187"></a>
<a id="trace-2213"></a>
<a id="trace-2215"></a>
<a id="trace-2302"></a>
<a id="trace-2304"></a>
<a id="trace-2331"></a>
<a id="trace-2333"></a>
<a id="trace-2669"></a>
<a id="trace-2671"></a>
<a id="trace-2737"></a>
<a id="trace-2739"></a>
<a id="trace-2838"></a>
<a id="trace-2840"></a>
<a id="trace-2879"></a>
<a id="trace-2881"></a>
<a id="trace-3101"></a>
<a id="trace-3103"></a>
<a id="trace-3132"></a>
<a id="trace-3134"></a>
<a id="trace-3242"></a>
<a id="trace-3244"></a>
<a id="trace-3273"></a>
<a id="trace-3275"></a>
<a id="trace-3314"></a>
<a id="trace-3316"></a>
<a id="trace-3343"></a>
<a id="trace-3345"></a>
<a id="trace-3384"></a>
<a id="trace-3386"></a>
<a id="trace-3406"></a>
<a id="trace-3408"></a>
<a id="trace-3458"></a>
<a id="trace-3460"></a>
<a id="trace-3495"></a>
<a id="trace-3497"></a>
<a id="trace-3627"></a>
<a id="trace-3629"></a>
<a id="trace-3647"></a>
<a id="trace-3649"></a>
<a id="trace-3685"></a>
<a id="trace-3687"></a>
<a id="trace-3998"></a>
<a id="trace-4000"></a>
<a id="trace-4022"></a>
<a id="trace-4024"></a>
<a id="trace-4031"></a>
<a id="trace-4033"></a>
<a id="trace-4072"></a>
<a id="trace-4074"></a>
<a id="trace-4091"></a>
<a id="trace-4093"></a>
<a id="trace-4650"></a>
<a id="trace-4652"></a>
<a id="trace-5137"></a>
<a id="trace-5139"></a>
<a id="trace-5181"></a>
<a id="trace-5183"></a>
<a id="trace-5223"></a>
<a id="trace-5225"></a>
<a id="trace-5308"></a>
<a id="trace-5310"></a>
<a id="trace-5684"></a>
<a id="trace-5686"></a>
<a id="trace-5776"></a>
<a id="trace-5778"></a>
<a id="trace-5806"></a>
<a id="trace-5808"></a>
<a id="trace-5848"></a>
<a id="trace-5850"></a>
<a id="trace-5883"></a>
<a id="trace-5885"></a>
<a id="trace-5926"></a>
<a id="trace-5928"></a>
<a id="trace-5974"></a>
<a id="trace-5976"></a>
<a id="trace-5990"></a>
<a id="trace-5992"></a>
<a id="trace-6013"></a>
<a id="trace-6015"></a>
<a id="trace-6366"></a>
<a id="trace-6368"></a>
<a id="trace-7302"></a>
<a id="trace-7304"></a>
<a id="trace-7343"></a>
<a id="trace-7345"></a>
<a id="trace-7391"></a>
<a id="trace-7393"></a>
<a id="trace-8685"></a>
<a id="trace-8687"></a>
<a id="trace-8719"></a>
<a id="trace-8721"></a>
<a id="trace-9645"></a>
<a id="trace-9647"></a>
<a id="trace-9709"></a>
<a id="trace-9711"></a>
<a id="trace-9858"></a>
<a id="trace-9860"></a>
<a id="trace-10708"></a>
<a id="trace-10710"></a>
<a id="trace-10793"></a>
<a id="trace-10795"></a>
<a id="trace-10888"></a>
<a id="trace-10890"></a>
<a id="trace-11195"></a>
<a id="trace-11197"></a>
<a id="trace-11258"></a>
<a id="trace-11260"></a>
<a id="trace-11333"></a>
<a id="trace-11335"></a>
<a id="trace-11381"></a>
<a id="trace-11383"></a>
<a id="trace-11445"></a>
<a id="trace-11447"></a>
<a id="trace-11491"></a>
<a id="trace-11493"></a>
<a id="trace-14511"></a>
<a id="trace-14513"></a>
<a id="trace-14546"></a>
<a id="trace-14548"></a>
<a id="trace-14616"></a>
<a id="trace-14618"></a>
<a id="trace-14658"></a>
<a id="trace-14660"></a>
<a id="trace-16906"></a>
<a id="trace-16908"></a>
<a id="trace-16967"></a>
<a id="trace-16969"></a>
<a id="trace-17017"></a>
<a id="trace-17019"></a>
<a id="trace-17045"></a>
<a id="trace-17047"></a>
<a id="trace-17084"></a>
<a id="trace-17086"></a>
<a id="trace-17106"></a>
<a id="trace-17108"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17658"></a>
<a id="trace-17660"></a>
<a id="trace-17689"></a>
<a id="trace-17691"></a>
<a id="trace-19599"></a>
<a id="trace-19601"></a>
<a id="trace-19636"></a>
<a id="trace-19638"></a>
<a id="trace-19665"></a>
<a id="trace-19667"></a>
<a id="trace-19754"></a>
<a id="trace-19756"></a>
<a id="trace-19800"></a>
<a id="trace-19802"></a>
<a id="trace-19834"></a>
<a id="trace-19836"></a>
<a id="trace-20050"></a>
<a id="trace-20052"></a>
<a id="trace-23736"></a>
<a id="trace-23738"></a>
<a id="trace-23768"></a>
<a id="trace-23770"></a>
<a id="trace-23804"></a>
<a id="trace-23806"></a>
<a id="trace-23829"></a>
<a id="trace-23831"></a>
<a id="trace-23864"></a>
<a id="trace-23866"></a>
<a id="trace-23899"></a>
<a id="trace-23901"></a>
<a id="trace-24060"></a>
<a id="trace-24062"></a>
<a id="trace-24112"></a>
<a id="trace-24114"></a>
<a id="trace-24151"></a>
<a id="trace-24153"></a>
<a id="trace-24176"></a>
<a id="trace-24178"></a>
<a id="trace-24200"></a>
<a id="trace-24202"></a>
<a id="trace-24556"></a>
<a id="trace-24558"></a>
<a id="trace-24577"></a>
<a id="trace-24579"></a>
<a id="trace-24598"></a>
<a id="trace-24600"></a>
<a id="trace-24619"></a>
<a id="trace-24621"></a>
<a id="trace-24638"></a>
<a id="trace-24640"></a>
<a id="trace-24658"></a>
<a id="trace-24660"></a>
<a id="trace-24829"></a>
<a id="trace-24831"></a>
<a id="trace-24855"></a>
<a id="trace-24857"></a>
<a id="trace-24878"></a>
<a id="trace-24880"></a>
<a id="trace-24961"></a>
<a id="trace-24963"></a>
<a id="trace-24979"></a>
<a id="trace-24981"></a>
<a id="trace-28575"></a>
<a id="trace-28577"></a>
<a id="trace-28597"></a>
<a id="trace-28599"></a>
<a id="trace-30412"></a>
<a id="trace-30414"></a>
<a id="trace-30432"></a>
<a id="trace-30434"></a>
<a id="trace-30467"></a>
<a id="trace-30469"></a>
<a id="trace-30493"></a>
<a id="trace-30495"></a>
<a id="trace-30519"></a>
<a id="trace-30521"></a>
<a id="trace-30537"></a>
<a id="trace-30539"></a>
<a id="trace-30643"></a>
<a id="trace-30645"></a>
<a id="trace-30668"></a>
<a id="trace-30670"></a>
<a id="trace-30687"></a>
<a id="trace-30689"></a>
<a id="trace-30713"></a>
<a id="trace-30715"></a>
<a id="trace-30754"></a>
<a id="trace-30756"></a>
<a id="trace-30770"></a>
<a id="trace-30772"></a>
<a id="trace-30794"></a>
<a id="trace-30796"></a>
<a id="trace-30814"></a>
<a id="trace-30816"></a>
<a id="trace-30894"></a>
<a id="trace-30896"></a>
<a id="trace-30926"></a>
<a id="trace-30928"></a>
<a id="trace-30938"></a>
<a id="trace-30940"></a>
<a id="trace-30956"></a>
<a id="trace-30958"></a>
<a id="trace-30991"></a>
<a id="trace-30993"></a>
<a id="trace-31011"></a>
<a id="trace-31013"></a>
<a id="trace-31036"></a>
<a id="trace-31038"></a>
<a id="trace-31049"></a>
<a id="trace-31051"></a>
<a id="trace-31146"></a>
<a id="trace-31148"></a>
<a id="trace-31166"></a>
<a id="trace-31168"></a>
<a id="trace-31203"></a>
<a id="trace-31205"></a>
<a id="trace-31240"></a>
<a id="trace-31242"></a>
<a id="trace-31257"></a>
<a id="trace-31259"></a>
<a id="trace-31282"></a>
<a id="trace-31284"></a>
<a id="trace-31305"></a>
<a id="trace-31307"></a>
<a id="trace-31382"></a>
<a id="trace-31384"></a>
<a id="trace-31391"></a>
<a id="trace-31393"></a>
<a id="trace-31415"></a>
<a id="trace-31417"></a>
<a id="trace-31429"></a>
<a id="trace-31431"></a>
<a id="trace-31451"></a>
<a id="trace-31453"></a>
<a id="trace-31462"></a>
<a id="trace-31464"></a>
<a id="trace-31495"></a>
<a id="trace-31497"></a>
<a id="trace-31514"></a>
<a id="trace-31516"></a>
<a id="trace-31532"></a>
<a id="trace-31534"></a>
<a id="trace-31614"></a>
<a id="trace-31616"></a>
<a id="trace-31631"></a>
<a id="trace-31633"></a>
<a id="trace-31655"></a>
<a id="trace-31657"></a>
<a id="trace-31712"></a>
<a id="trace-31714"></a>
<a id="trace-31728"></a>
<a id="trace-31730"></a>
<a id="trace-31740"></a>
<a id="trace-31742"></a>
<a id="trace-32061"></a>
<a id="trace-32063"></a>
<a id="trace-32078"></a>
<a id="trace-32080"></a>
<a id="trace-32172"></a>
<a id="trace-32174"></a>
<a id="trace-32208"></a>
<a id="trace-32210"></a>
<a id="trace-32235"></a>
<a id="trace-32237"></a>
<a id="trace-32255"></a>
<a id="trace-32257"></a>
<a id="trace-32278"></a>
<a id="trace-32280"></a>
<a id="trace-32298"></a>
<a id="trace-32300"></a>
<a id="trace-32322"></a>
<a id="trace-32324"></a>
<a id="trace-32422"></a>
<a id="trace-32424"></a>
<a id="trace-32441"></a>
<a id="trace-32443"></a>
<a id="trace-32465"></a>
<a id="trace-32467"></a>
<a id="trace-32486"></a>
<a id="trace-32488"></a>
<a id="trace-32508"></a>
<a id="trace-32510"></a>
<a id="trace-32549"></a>
<a id="trace-32551"></a>
<a id="trace-32700"></a>
<a id="trace-32702"></a>
<a id="trace-32715"></a>
<a id="trace-32717"></a>
<a id="trace-32740"></a>
<a id="trace-32742"></a>
<a id="trace-32820"></a>
<a id="trace-32822"></a>
<a id="trace-32859"></a>
<a id="trace-32861"></a>
<a id="trace-32892"></a>
<a id="trace-32894"></a>
<a id="trace-33081"></a>
<a id="trace-33083"></a>
<a id="trace-33105"></a>
<a id="trace-33107"></a>
<a id="trace-33123"></a>
<a id="trace-33125"></a>
<a id="trace-33145"></a>
<a id="trace-33147"></a>
<a id="trace-33162"></a>
<a id="trace-33164"></a>
<a id="trace-33238"></a>
<a id="trace-33240"></a>
<a id="trace-33256"></a>
<a id="trace-33258"></a>
<a id="trace-33305"></a>
<a id="trace-33307"></a>
<a id="trace-33315"></a>
<a id="trace-33317"></a>
<a id="trace-33331"></a>
<a id="trace-33333"></a>
<a id="trace-33343"></a>
<a id="trace-33345"></a>
<a id="trace-33364"></a>
<a id="trace-33366"></a>
<a id="trace-33377"></a>
<a id="trace-33379"></a>
<a id="trace-33454"></a>
<a id="trace-33456"></a>
<a id="trace-33465"></a>
<a id="trace-33467"></a>
<a id="trace-33482"></a>
<a id="trace-33484"></a>
<a id="trace-33509"></a>
<a id="trace-33511"></a>
<a id="trace-33518"></a>
<a id="trace-33520"></a>
<a id="trace-33553"></a>
<a id="trace-33555"></a>
<a id="trace-33629"></a>
<a id="trace-33631"></a>
<a id="trace-33640"></a>
<a id="trace-33642"></a>
<a id="trace-33712"></a>
<a id="trace-33714"></a>
<a id="trace-33727"></a>
<a id="trace-33729"></a>
<a id="trace-33743"></a>
<a id="trace-33745"></a>
<a id="trace-33756"></a>
<a id="trace-33758"></a>
<a id="trace-33772"></a>
<a id="trace-33774"></a>
<a id="trace-33791"></a>
<a id="trace-33793"></a>
<a id="trace-33802"></a>
<a id="trace-33804"></a>
<a id="trace-33902"></a>
<a id="trace-33904"></a>
<a id="trace-33920"></a>
<a id="trace-33922"></a>
<a id="trace-33934"></a>
<a id="trace-33936"></a>
<a id="trace-33948"></a>
<a id="trace-33950"></a>
<a id="trace-33977"></a>
<a id="trace-33979"></a>
<a id="trace-33991"></a>
<a id="trace-33993"></a>
<a id="trace-34073"></a>
<a id="trace-34075"></a>
<a id="trace-34098"></a>
<a id="trace-34100"></a>
<a id="trace-34109"></a>
<a id="trace-34111"></a>
<a id="trace-34123"></a>
<a id="trace-34125"></a>
<a id="trace-34138"></a>
<a id="trace-34140"></a>
<a id="trace-34157"></a>
<a id="trace-34159"></a>
<a id="trace-34189"></a>
<a id="trace-34191"></a>
<a id="trace-34263"></a>
<a id="trace-34265"></a>
<a id="trace-34282"></a>
<a id="trace-34284"></a>
<a id="trace-34298"></a>
<a id="trace-34300"></a>
<a id="trace-34317"></a>
<a id="trace-34319"></a>
<a id="trace-34354"></a>
<a id="trace-34356"></a>
<a id="trace-34371"></a>
<a id="trace-34373"></a>
<a id="trace-34445"></a>
<a id="trace-34447"></a>
<a id="trace-34457"></a>
<a id="trace-34459"></a>
<a id="trace-34472"></a>
<a id="trace-34474"></a>
<a id="trace-34483"></a>
<a id="trace-34485"></a>
<a id="trace-34574"></a>
<a id="trace-34576"></a>
<a id="trace-34587"></a>
<a id="trace-34589"></a>
<a id="trace-34617"></a>
<a id="trace-34619"></a>
<a id="trace-34639"></a>
<a id="trace-34641"></a>
<a id="trace-34657"></a>
<a id="trace-34659"></a>
<a id="trace-34727"></a>
<a id="trace-34738"></a>
<a id="trace-34760"></a>
<a id="trace-34800"></a>
<a id="trace-34816"></a>
<a id="trace-34835"></a>
<a id="trace-34865"></a>
<a id="trace-34877"></a>
<a id="trace-34947"></a>
<a id="trace-34955"></a>
<a id="trace-34969"></a>
<a id="trace-34978"></a>
<a id="trace-34992"></a>
<a id="trace-35002"></a>
<a id="trace-35011"></a>
<a id="trace-35034"></a>
<a id="trace-35036"></a>
<a id="trace-35046"></a>
<a id="trace-35048"></a>
<a id="trace-35118"></a>
<a id="trace-35120"></a>
<a id="trace-35128"></a>
<a id="trace-35130"></a>
<a id="trace-35143"></a>
<a id="trace-35145"></a>
<a id="trace-35153"></a>
<a id="trace-35155"></a>
<a id="trace-35163"></a>
<a id="trace-35165"></a>
<a id="trace-35180"></a>
<a id="trace-35182"></a>
<a id="trace-35272"></a>
<a id="trace-35274"></a>
<a id="trace-35282"></a>
<a id="trace-35284"></a>
<a id="trace-35298"></a>
<a id="trace-35300"></a>
<a id="trace-35323"></a>
<a id="trace-35325"></a>
<a id="trace-35331"></a>
<a id="trace-35333"></a>
<a id="trace-35347"></a>
<a id="trace-35349"></a>
<a id="trace-35357"></a>
<a id="trace-35359"></a>
<a id="trace-35368"></a>
<a id="trace-35370"></a>
<a id="trace-35376"></a>
<a id="trace-35378"></a>
<a id="trace-35444"></a>
<a id="trace-35446"></a>
<a id="trace-35452"></a>
<a id="trace-35454"></a>
<a id="trace-35462"></a>
<a id="trace-35464"></a>
<a id="trace-35475"></a>
<a id="trace-35477"></a>
<a id="trace-35495"></a>
<a id="trace-35497"></a>
<a id="trace-35513"></a>
<a id="trace-35515"></a>
<a id="trace-35524"></a>
<a id="trace-35526"></a>
<a id="trace-35538"></a>
<a id="trace-35540"></a>
<a id="trace-35551"></a>
<a id="trace-35553"></a>
<a id="trace-35617"></a>
<a id="trace-35619"></a>
<a id="trace-35625"></a>
<a id="trace-35627"></a>
<a id="trace-35634"></a>
<a id="trace-35636"></a>
<a id="trace-35643"></a>
<a id="trace-35645"></a>
<a id="trace-35654"></a>
<a id="trace-35656"></a>
<a id="trace-35680"></a>
<a id="trace-35682"></a>
<a id="trace-35692"></a>
<a id="trace-35694"></a>
<a id="trace-35706"></a>
<a id="trace-35708"></a>
<a id="trace-35717"></a>
<a id="trace-35719"></a>
<a id="trace-35798"></a>
<a id="trace-35800"></a>
<a id="trace-35815"></a>
<a id="trace-35817"></a>
<a id="trace-35827"></a>
<a id="trace-35829"></a>
<a id="trace-35846"></a>
<a id="trace-35848"></a>
<a id="trace-35860"></a>
<a id="trace-35862"></a>
<a id="trace-35870"></a>
<a id="trace-35872"></a>
<a id="trace-35886"></a>
<a id="trace-35888"></a>
<a id="trace-35899"></a>
<a id="trace-35901"></a>
<a id="trace-35976"></a>
<a id="trace-35978"></a>
<a id="trace-35992"></a>
<a id="trace-35994"></a>
<a id="trace-36008"></a>
<a id="trace-36010"></a>
<a id="trace-36022"></a>
<a id="trace-36024"></a>
<a id="trace-36041"></a>
<a id="trace-36043"></a>
<a id="trace-36052"></a>
<a id="trace-36054"></a>
<a id="trace-36072"></a>
<a id="trace-36074"></a>
<a id="trace-36082"></a>
<a id="trace-36084"></a>
<a id="trace-36173"></a>
<a id="trace-36175"></a>
<a id="trace-36186"></a>
<a id="trace-36188"></a>
<a id="trace-36200"></a>
<a id="trace-36202"></a>
<a id="trace-36230"></a>
<a id="trace-36232"></a>
<a id="trace-36263"></a>
<a id="trace-36265"></a>
<a id="trace-36272"></a>
<a id="trace-36274"></a>
<a id="trace-36344"></a>
<a id="trace-36346"></a>
<a id="trace-36358"></a>
<a id="trace-36360"></a>
<a id="trace-36369"></a>
<a id="trace-36371"></a>
<a id="trace-36384"></a>
<a id="trace-36386"></a>
<a id="trace-36392"></a>
<a id="trace-36394"></a>
<a id="trace-36412"></a>
<a id="trace-36414"></a>
<a id="trace-36424"></a>
<a id="trace-36426"></a>
<a id="trace-36442"></a>
<a id="trace-36444"></a>
<a id="trace-36524"></a>
<a id="trace-36526"></a>
<a id="trace-36548"></a>
<a id="trace-36550"></a>
<a id="trace-36576"></a>
<a id="trace-36578"></a>
<a id="trace-36599"></a>
<a id="trace-36601"></a>
<a id="trace-36627"></a>
<a id="trace-36629"></a>
<a id="trace-36695"></a>
<a id="trace-36697"></a>
<a id="trace-36706"></a>
<a id="trace-36708"></a>
<a id="trace-36724"></a>
<a id="trace-36726"></a>
<a id="trace-36735"></a>
<a id="trace-36737"></a>
<a id="trace-36751"></a>
<a id="trace-36753"></a>
<a id="trace-36767"></a>
<a id="trace-36769"></a>
<a id="trace-36788"></a>
<a id="trace-36790"></a>
<a id="trace-36809"></a>
<a id="trace-36811"></a>
<a id="trace-36877"></a>
<a id="trace-36879"></a>
<a id="trace-36887"></a>
<a id="trace-36889"></a>
<a id="trace-36904"></a>
<a id="trace-36906"></a>
<a id="trace-36930"></a>
<a id="trace-36932"></a>
<a id="trace-36942"></a>
<a id="trace-36944"></a>
<a id="trace-36959"></a>
<a id="trace-36961"></a>
<a id="trace-36972"></a>
<a id="trace-36974"></a>
<a id="trace-36994"></a>
<a id="trace-36996"></a>
<a id="trace-37002"></a>
<a id="trace-37004"></a>
<a id="trace-37069"></a>
<a id="trace-37071"></a>
<a id="trace-37087"></a>
<a id="trace-37089"></a>
<a id="trace-37126"></a>
<a id="trace-37128"></a>
<a id="trace-37142"></a>
<a id="trace-37144"></a>
<a id="trace-37151"></a>
<a id="trace-37153"></a>
<a id="trace-37170"></a>
<a id="trace-37172"></a>
<a id="trace-37182"></a>
<a id="trace-37184"></a>
<a id="trace-37267"></a>
<a id="trace-37269"></a>
<a id="trace-37278"></a>
<a id="trace-37280"></a>
<a id="trace-37289"></a>
<a id="trace-37291"></a>
<a id="trace-37301"></a>
<a id="trace-37303"></a>
<a id="trace-37312"></a>
<a id="trace-37314"></a>
<a id="trace-37325"></a>
<a id="trace-37327"></a>
<a id="trace-37353"></a>
<a id="trace-37355"></a>
<a id="trace-37430"></a>
<a id="trace-37432"></a>
<a id="trace-37443"></a>
<a id="trace-37445"></a>
<a id="trace-37475"></a>
<a id="trace-37477"></a>
<a id="trace-37495"></a>
<a id="trace-37497"></a>
<a id="trace-37530"></a>
<a id="trace-37532"></a>
<a id="trace-37548"></a>
<a id="trace-37550"></a>
<a id="trace-37616"></a>
<a id="trace-37618"></a>
<a id="trace-37634"></a>
<a id="trace-37636"></a>
<a id="trace-37647"></a>
<a id="trace-37649"></a>
<a id="trace-37728"></a>
<a id="trace-37730"></a>
<a id="trace-37799"></a>
<a id="trace-37801"></a>
<a id="trace-37819"></a>
<a id="trace-37821"></a>
<a id="trace-37956"></a>
<a id="trace-37958"></a>
<a id="trace-37968"></a>
<a id="trace-37970"></a>
<a id="trace-37985"></a>
<a id="trace-37987"></a>
<a id="trace-38034"></a>
<a id="trace-38036"></a>
<a id="trace-38117"></a>
<a id="trace-38119"></a>
<a id="trace-38129"></a>
<a id="trace-38131"></a>
<a id="trace-38208"></a>
<a id="trace-38210"></a>
<a id="trace-38229"></a>
<a id="trace-38231"></a>
<a id="trace-38244"></a>
<a id="trace-38246"></a>
<a id="trace-38283"></a>
<a id="trace-38285"></a>
<a id="trace-38300"></a>
<a id="trace-38302"></a>
<a id="trace-38387"></a>
<a id="trace-38389"></a>
<a id="trace-38486"></a>
<a id="trace-38488"></a>
<a id="trace-38506"></a>
<a id="trace-38508"></a>
<a id="trace-38522"></a>
<a id="trace-38524"></a>
<a id="trace-38557"></a>
<a id="trace-38559"></a>
<a id="trace-38579"></a>
<a id="trace-38581"></a>
<a id="trace-38601"></a>
<a id="trace-38603"></a>
<a id="trace-38614"></a>
<a id="trace-38616"></a>
<a id="trace-38688"></a>
<a id="trace-38690"></a>
<a id="trace-38700"></a>
<a id="trace-38702"></a>
<a id="trace-38725"></a>
<a id="trace-38727"></a>
<a id="trace-38736"></a>
<a id="trace-38738"></a>
<a id="trace-38759"></a>
<a id="trace-38761"></a>
<a id="trace-38773"></a>
<a id="trace-38775"></a>
<a id="trace-38919"></a>
<a id="trace-38921"></a>
<a id="trace-38963"></a>
<a id="trace-38965"></a>
<a id="trace-38973"></a>
<a id="trace-38975"></a>
<a id="trace-39052"></a>
<a id="trace-39054"></a>
<a id="trace-39086"></a>
<a id="trace-39088"></a>
<a id="trace-39124"></a>
<a id="trace-39126"></a>
<a id="trace-39142"></a>
<a id="trace-39144"></a>
<a id="trace-39175"></a>
<a id="trace-39177"></a>
<a id="trace-39338"></a>
<a id="trace-39340"></a>
<a id="trace-39359"></a>
<a id="trace-39361"></a>
<a id="trace-39378"></a>
<a id="trace-39380"></a>
<a id="trace-39455"></a>
<a id="trace-39457"></a>
<a id="trace-39474"></a>
<a id="trace-39476"></a>
<a id="trace-39505"></a>
<a id="trace-39507"></a>
<a id="trace-39541"></a>
<a id="trace-39543"></a>
<a id="trace-39580"></a>
<a id="trace-39582"></a>
<a id="trace-39622"></a>
<a id="trace-39624"></a>
<a id="trace-39669"></a>
<a id="trace-39671"></a>
<a id="trace-39703"></a>
<a id="trace-39705"></a>
<a id="trace-39735"></a>
<a id="trace-39737"></a>
<a id="trace-39758"></a>
<a id="trace-39760"></a>
<a id="trace-39832"></a>
<a id="trace-39834"></a>
<a id="trace-39846"></a>
<a id="trace-39848"></a>
<a id="trace-39859"></a>
<a id="trace-39861"></a>
<a id="trace-39869"></a>
<a id="trace-39871"></a>
<a id="trace-39898"></a>
<a id="trace-39900"></a>
<a id="trace-39915"></a>
<a id="trace-39917"></a>
<a id="trace-39925"></a>
<a id="trace-39927"></a>
<a id="trace-39944"></a>
<a id="trace-39946"></a>
<a id="trace-39956"></a>
<a id="trace-39958"></a>
<a id="trace-40024"></a>
<a id="trace-40026"></a>
<a id="trace-40090"></a>
<a id="trace-40092"></a>
<a id="trace-40111"></a>
<a id="trace-40113"></a>
<a id="trace-40154"></a>
<a id="trace-40156"></a>
<a id="trace-40173"></a>
<a id="trace-40175"></a>
<a id="trace-40199"></a>
<a id="trace-40201"></a>
<a id="trace-40210"></a>
<a id="trace-40212"></a>
<a id="trace-40233"></a>
<a id="trace-40235"></a>
<a id="trace-40245"></a>
<a id="trace-40247"></a>
<a id="trace-40337"></a>
<a id="trace-40339"></a>
<a id="trace-40348"></a>
<a id="trace-40350"></a>
<a id="trace-40363"></a>
<a id="trace-40365"></a>
<a id="trace-40376"></a>
<a id="trace-40378"></a>
<a id="trace-40388"></a>
<a id="trace-40390"></a>
<a id="trace-40396"></a>
<a id="trace-40398"></a>
<a id="trace-40486"></a>
<a id="trace-40488"></a>
<a id="trace-40495"></a>
<a id="trace-40497"></a>
<a id="trace-40508"></a>
<a id="trace-40510"></a>
<a id="trace-40519"></a>
<a id="trace-40521"></a>
<a id="trace-40538"></a>
<a id="trace-40540"></a>
<a id="trace-40551"></a>
<a id="trace-40553"></a>
<a id="trace-40560"></a>
<a id="trace-40562"></a>
<a id="trace-40579"></a>
<a id="trace-40581"></a>
<a id="trace-40590"></a>
<a id="trace-40592"></a>
<a id="trace-40656"></a>
<a id="trace-40658"></a>
<a id="trace-40675"></a>
<a id="trace-40677"></a>
<a id="trace-40687"></a>
<a id="trace-40689"></a>
<a id="trace-40705"></a>
<a id="trace-40707"></a>
<a id="trace-40743"></a>
<a id="trace-40745"></a>
<a id="trace-40754"></a>
<a id="trace-40756"></a>
<a id="trace-40833"></a>
<a id="trace-40835"></a>
<a id="trace-40847"></a>
<a id="trace-40849"></a>
<a id="trace-40868"></a>
<a id="trace-40870"></a>
<a id="trace-40883"></a>
<a id="trace-40885"></a>
<a id="trace-40927"></a>
<a id="trace-40929"></a>
<a id="trace-40948"></a>
<a id="trace-40950"></a>
<a id="trace-41021"></a>
<a id="trace-41023"></a>
<a id="trace-41033"></a>
<a id="trace-41035"></a>
<a id="trace-41052"></a>
<a id="trace-41054"></a>
<a id="trace-41061"></a>
<a id="trace-41063"></a>
<a id="trace-41079"></a>
<a id="trace-41081"></a>
<a id="trace-41095"></a>
<a id="trace-41097"></a>
<a id="trace-41106"></a>
<a id="trace-41108"></a>
<a id="trace-41120"></a>
<a id="trace-41122"></a>
<a id="trace-41137"></a>
<a id="trace-41139"></a>
<a id="trace-41150"></a>
<a id="trace-41152"></a>
<a id="trace-41217"></a>
<a id="trace-41219"></a>
<a id="trace-41229"></a>
<a id="trace-41231"></a>
<a id="trace-41269"></a>
<a id="trace-41271"></a>
<a id="trace-41279"></a>
<a id="trace-41281"></a>
<a id="trace-41293"></a>
<a id="trace-41295"></a>
<a id="trace-41307"></a>
<a id="trace-41309"></a>
<a id="trace-41323"></a>
<a id="trace-41325"></a>
<a id="trace-41399"></a>
<a id="trace-41401"></a>
<a id="trace-41407"></a>
<a id="trace-41409"></a>
<a id="trace-41435"></a>
<a id="trace-41437"></a>
<a id="trace-41454"></a>
<a id="trace-41456"></a>
<a id="trace-41471"></a>
<a id="trace-41473"></a>
<a id="trace-41483"></a>
<a id="trace-41485"></a>
<a id="trace-41493"></a>
<a id="trace-41495"></a>
<a id="trace-41525"></a>
<a id="trace-41527"></a>
<a id="trace-41595"></a>
<a id="trace-41597"></a>
<a id="trace-41626"></a>
<a id="trace-41628"></a>
<a id="trace-41636"></a>
<a id="trace-41638"></a>
<a id="trace-41654"></a>
<a id="trace-41656"></a>
<a id="trace-41684"></a>
<a id="trace-41686"></a>
<a id="trace-41698"></a>
<a id="trace-41700"></a>
<a id="trace-41719"></a>
<a id="trace-41721"></a>
<a id="trace-41794"></a>
<a id="trace-41796"></a>
<a id="trace-41840"></a>
<a id="trace-41842"></a>
<a id="trace-41851"></a>
<a id="trace-41853"></a>
<a id="trace-41863"></a>
<a id="trace-41865"></a>
<a id="trace-41873"></a>
<a id="trace-41875"></a>
<a id="trace-41902"></a>
<a id="trace-41904"></a>
<a id="trace-41972"></a>
<a id="trace-41974"></a>
<a id="trace-41980"></a>
<a id="trace-41982"></a>
<a id="trace-41999"></a>
<a id="trace-42001"></a>
<a id="trace-42022"></a>
<a id="trace-42024"></a>
<a id="trace-42034"></a>
<a id="trace-42036"></a>
<a id="trace-42051"></a>
<a id="trace-42053"></a>
<a id="trace-42074"></a>
<a id="trace-42076"></a>
<a id="trace-42083"></a>
<a id="trace-42085"></a>
<a id="trace-42152"></a>
<a id="trace-42154"></a>
<a id="trace-42164"></a>
<a id="trace-42166"></a>
<a id="trace-42217"></a>
<a id="trace-42219"></a>
<a id="trace-42230"></a>
<a id="trace-42232"></a>
<a id="trace-42239"></a>
<a id="trace-42241"></a>
<a id="trace-42255"></a>
<a id="trace-42257"></a>
<a id="trace-42264"></a>
<a id="trace-42266"></a>
<a id="trace-42335"></a>
<a id="trace-42337"></a>
<a id="trace-42357"></a>
<a id="trace-42359"></a>
<a id="trace-42368"></a>
<a id="trace-42370"></a>
<a id="trace-42385"></a>
<a id="trace-42387"></a>
<a id="trace-42408"></a>
<a id="trace-42410"></a>
<a id="trace-42421"></a>
<a id="trace-42423"></a>
<a id="trace-42441"></a>
<a id="trace-42443"></a>
<a id="trace-42451"></a>
<a id="trace-42453"></a>
<a id="trace-42526"></a>
<a id="trace-42528"></a>
<a id="trace-42551"></a>
<a id="trace-42553"></a>
<a id="trace-42569"></a>
<a id="trace-42571"></a>
<a id="trace-42578"></a>
<a id="trace-42580"></a>
<a id="trace-42592"></a>
<a id="trace-42594"></a>
<a id="trace-42600"></a>
<a id="trace-42602"></a>
<a id="trace-42711"></a>
<a id="trace-42713"></a>
<a id="trace-42722"></a>
<a id="trace-42724"></a>
<a id="trace-42733"></a>
<a id="trace-42735"></a>
<a id="trace-42747"></a>
<a id="trace-42749"></a>
<a id="trace-42758"></a>
<a id="trace-42760"></a>
<a id="trace-42776"></a>
<a id="trace-42778"></a>
<a id="trace-42786"></a>
<a id="trace-42788"></a>
<a id="trace-42801"></a>
<a id="trace-42803"></a>
<a id="trace-42810"></a>
<a id="trace-42812"></a>
<a id="trace-42878"></a>
<a id="trace-42880"></a>
<a id="trace-42895"></a>
<a id="trace-42897"></a>
<a id="trace-42905"></a>
<a id="trace-42907"></a>
<a id="trace-42919"></a>
<a id="trace-42921"></a>
<a id="trace-42947"></a>
<a id="trace-42949"></a>
<a id="trace-42961"></a>
<a id="trace-42963"></a>
<a id="trace-42970"></a>
<a id="trace-42972"></a>
<a id="trace-42986"></a>
<a id="trace-42988"></a>
<a id="trace-43000"></a>
<a id="trace-43002"></a>
<a id="trace-43076"></a>
<a id="trace-43078"></a>
<a id="trace-43087"></a>
<a id="trace-43089"></a>
<a id="trace-43099"></a>
<a id="trace-43101"></a>
<a id="trace-43119"></a>
<a id="trace-43121"></a>
<a id="trace-43149"></a>
<a id="trace-43151"></a>
<a id="trace-43170"></a>
<a id="trace-43172"></a>
<a id="trace-43181"></a>
<a id="trace-43183"></a>
- 5.70s–359.80s (×1083), actor 37, squad 4 (trace 994): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 907. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625068154663625, 'next_transition': 1551}.
<a id="trace-1005"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1005): received platoon directive. Knowledge: actor memory at 5.00s, trace 898. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.78789262865852, 'next_transition': 2745}.
<a id="trace-1220"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1220): received platoon directive. Knowledge: actor memory at 5.00s, trace 890. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300141902767235, 'next_transition': 1547}.
<a id="trace-1547"></a>
<a id="trace-1549"></a>
<a id="trace-1600"></a>
<a id="trace-1602"></a>
<a id="trace-1642"></a>
<a id="trace-1644"></a>
<a id="trace-1692"></a>
<a id="trace-1694"></a>
<a id="trace-1731"></a>
<a id="trace-1733"></a>
<a id="trace-1799"></a>
<a id="trace-1801"></a>
<a id="trace-1826"></a>
<a id="trace-1828"></a>
<a id="trace-1855"></a>
<a id="trace-1857"></a>
<a id="trace-1947"></a>
<a id="trace-1949"></a>
<a id="trace-1977"></a>
<a id="trace-1979"></a>
<a id="trace-2001"></a>
<a id="trace-2003"></a>
<a id="trace-2036"></a>
<a id="trace-2038"></a>
<a id="trace-2067"></a>
<a id="trace-2069"></a>
<a id="trace-2105"></a>
<a id="trace-2107"></a>
<a id="trace-2126"></a>
<a id="trace-2128"></a>
<a id="trace-2155"></a>
<a id="trace-2157"></a>
<a id="trace-2181"></a>
<a id="trace-2183"></a>
<a id="trace-2209"></a>
<a id="trace-2211"></a>
<a id="trace-2298"></a>
<a id="trace-2300"></a>
<a id="trace-2327"></a>
<a id="trace-2329"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1547): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 895. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2403084057248805, 'next_transition': 1600}.
<a id="trace-2335"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2335): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2220. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3724326155494444, 'next_transition': 2665}.
<a id="trace-2665"></a>
<a id="trace-2667"></a>
<a id="trace-2705"></a>
<a id="trace-2707"></a>
<a id="trace-2733"></a>
<a id="trace-2735"></a>
<a id="trace-2834"></a>
<a id="trace-2836"></a>
<a id="trace-2875"></a>
<a id="trace-2877"></a>
<a id="trace-3064"></a>
<a id="trace-3066"></a>
<a id="trace-3097"></a>
<a id="trace-3099"></a>
<a id="trace-3128"></a>
<a id="trace-3130"></a>
<a id="trace-3238"></a>
<a id="trace-3240"></a>
<a id="trace-3269"></a>
<a id="trace-3271"></a>
<a id="trace-3310"></a>
<a id="trace-3312"></a>
<a id="trace-3339"></a>
<a id="trace-3341"></a>
<a id="trace-3380"></a>
<a id="trace-3382"></a>
<a id="trace-3402"></a>
<a id="trace-3404"></a>
<a id="trace-3434"></a>
<a id="trace-3436"></a>
<a id="trace-3454"></a>
<a id="trace-3456"></a>
<a id="trace-3491"></a>
<a id="trace-3493"></a>
<a id="trace-3527"></a>
<a id="trace-3529"></a>
<a id="trace-3623"></a>
<a id="trace-3625"></a>
<a id="trace-3643"></a>
<a id="trace-3645"></a>
<a id="trace-3681"></a>
<a id="trace-3683"></a>
<a id="trace-3994"></a>
<a id="trace-3996"></a>
<a id="trace-4018"></a>
<a id="trace-4020"></a>
<a id="trace-4027"></a>
<a id="trace-4029"></a>
<a id="trace-4068"></a>
<a id="trace-4070"></a>
<a id="trace-4087"></a>
<a id="trace-4089"></a>
- 16.25s–28.75s (×52), actor 5, squad 0 (trace 2665): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2225. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843667142508428, 'next_transition': 2705}.
<a id="trace-2745"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2745): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2228. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2889}.
<a id="trace-2746"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2746): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2228. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2889}.
<a id="trace-2889"></a>
- 18.40s–18.40s (×1), actor 8, squad 1 (trace 2889): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 2228. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.218941381311623, 'next_transition': 3700}.
<a id="trace-3700"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3700): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 3551. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.508655940837215, 'next_transition': 418}.
<a id="trace-4108"></a>
- 29.00s–29.00s (×1), actor 0, squad 0 (trace 4108): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 3543. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749686703233198, 'next_transition': 4122}.
<a id="trace-4122"></a>
<a id="trace-4124"></a>
- 29.25s–29.25s (×2), actor 5, squad 0 (trace 4122): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3548. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08620094018258087, 'next_transition': 4549}.
<a id="trace-4127"></a>
- 29.25s–29.25s (×1), actor 0, squad 0 (trace 4127): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 3543. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08620094018258087, 'next_transition': 4549}.
<a id="trace-4134"></a>
- 29.25s–29.25s (×1), actor 0, squad 0 (trace 4134): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3543. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08620094018258087, 'next_transition': 4549}.
<a id="trace-4135"></a>
- 29.25s–29.25s (×1), actor 0, squad 0 (trace 4135): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3543. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08620094018258087, 'next_transition': 4549}.
<a id="trace-4136"></a>
- 29.25s–29.25s (×1), actor 0, squad 0 (trace 4136): Reorganise complete: known contact. Knowledge: actor memory at 25.00s, trace 3543. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08620094018258087, 'next_transition': 4549}.
<a id="trace-4549"></a>
<a id="trace-4551"></a>
<a id="trace-4646"></a>
<a id="trace-4648"></a>
<a id="trace-4671"></a>
<a id="trace-4673"></a>
<a id="trace-4709"></a>
<a id="trace-4711"></a>
- 29.75s–31.25s (×8), actor 5, squad 0 (trace 4549): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3548. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13592245178777512, 'next_transition': 4646}.
<a id="trace-4719"></a>
- 31.60s–31.60s (×1), actor 0, squad 0 (trace 4719): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 4559. Next observer evidence: None.
<a id="trace-5133"></a>
<a id="trace-5135"></a>
- 31.75s–31.75s (×2), actor 5, squad 0 (trace 5133): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4564. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0403917090886614, 'next_transition': 417}.
<a id="trace-417"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (events line 417): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6862300604926671, 'next_transition': 5219}.
<a id="trace-418"></a>
- 32.25s–32.25s (×1), actor 5, squad 1 (events line 418): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749874388169738, 'next_transition': 5311}.
<a id="trace-5177"></a>
<a id="trace-5179"></a>
- 32.25s–32.25s (×2), actor 5, squad 0 (trace 5177): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4564. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6862300604926671, 'next_transition': 5219}.
<a id="trace-5184"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 5184): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.535797 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 5184. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6862300604926671, 'next_transition': 5219}.
<a id="trace-5185"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 5185): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.535797 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 5185. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6862300604926671, 'next_transition': 5219}.
<a id="trace-5186"></a>
- 32.25s–32.25s (×1), actor 5, squad 1 (trace 5186): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.535797 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 5186. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749874388169738, 'next_transition': 5311}.
<a id="trace-5187"></a>
- 32.25s–32.25s (×1), actor 5, squad 1 (trace 5187): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.535797 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 5187. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749874388169738, 'next_transition': 5311}.
<a id="trace-5219"></a>
<a id="trace-5221"></a>
<a id="trace-5261"></a>
<a id="trace-5263"></a>
<a id="trace-5272"></a>
<a id="trace-5274"></a>
<a id="trace-5304"></a>
<a id="trace-5306"></a>
<a id="trace-5680"></a>
<a id="trace-5682"></a>
<a id="trace-5772"></a>
<a id="trace-5774"></a>
- 32.75s–35.25s (×12), actor 5, squad 0 (trace 5219): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 5187. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.513427887799731, 'next_transition': 5261}.
<a id="trace-5311"></a>
- 34.25s–34.25s (×1), actor 8, squad 1 (trace 5311): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 4567. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7201519724071965, 'next_transition': 5954}.
<a id="trace-5312"></a>
- 34.25s–34.25s (×1), actor 8, squad 1 (trace 5312): bounding overwatch. Knowledge: actor memory at 30.00s, trace 4567. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7201519724071965, 'next_transition': 5954}.
<a id="trace-5313"></a>
- 34.25s–34.25s (×1), actor 8, squad 1 (trace 5313): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 4567. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7201519724071965, 'next_transition': 5954}.
<a id="trace-5791"></a>
- 35.60s–35.60s (×1), actor 1, squad 0 (trace 5791): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 5695. Next observer evidence: None.
<a id="trace-5802"></a>
<a id="trace-5804"></a>
<a id="trace-5844"></a>
<a id="trace-5846"></a>
<a id="trace-5879"></a>
<a id="trace-5881"></a>
<a id="trace-5922"></a>
<a id="trace-5924"></a>
<a id="trace-5938"></a>
<a id="trace-5940"></a>
<a id="trace-5970"></a>
<a id="trace-5972"></a>
<a id="trace-5986"></a>
<a id="trace-5988"></a>
<a id="trace-6009"></a>
<a id="trace-6011"></a>
<a id="trace-6362"></a>
<a id="trace-6364"></a>
- 35.75s–39.75s (×18), actor 5, squad 0 (trace 5802): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5699. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7985114948611517, 'next_transition': 5844}.
<a id="trace-5954"></a>
- 38.05s–38.05s (×1), actor 8, squad 1 (trace 5954): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 5702. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.531059764473354, 'next_transition': 6017}.
<a id="trace-6017"></a>
<a id="trace-6880"></a>
<a id="trace-7927"></a>
<a id="trace-8283"></a>
<a id="trace-8723"></a>
<a id="trace-10455"></a>
- 39.35s–45.55s (×6), actor 8, squad 1 (trace 6017): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 5702. Next observer evidence: {'until': 39.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27561337287267074, 'next_transition': 6880}.
<a id="trace-6372"></a>
- 39.80s–39.80s (×1), actor 1, squad 0 (trace 6372): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 5695. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.116536848249712, 'next_transition': 7298}.
<a id="trace-7298"></a>
<a id="trace-7300"></a>
<a id="trace-7339"></a>
<a id="trace-7341"></a>
<a id="trace-7387"></a>
<a id="trace-7389"></a>
- 40.25s–41.25s (×6), actor 5, squad 0 (trace 7298): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7224. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026109486026956553, 'next_transition': 7339}.
<a id="trace-7404"></a>
- 41.50s–41.50s (×1), actor 1, squad 0 (trace 7404): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 7220. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3599945868281524, 'next_transition': 7900}.
<a id="trace-7900"></a>
<a id="trace-7902"></a>
<a id="trace-8273"></a>
<a id="trace-8275"></a>
<a id="trace-8644"></a>
<a id="trace-8646"></a>
<a id="trace-8680"></a>
<a id="trace-8682"></a>
<a id="trace-8714"></a>
<a id="trace-8716"></a>
- 41.75s–43.75s (×10), actor 5, squad 0 (trace 7900): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7224. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.856991712569907, 'next_transition': 8273}.
<a id="trace-9091"></a>
- 44.10s–44.10s (×1), actor 1, squad 0 (trace 9091): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 7220. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1827554050861659, 'next_transition': 9639}.
<a id="trace-9639"></a>
<a id="trace-9641"></a>
<a id="trace-9703"></a>
<a id="trace-9705"></a>
<a id="trace-9852"></a>
<a id="trace-9854"></a>
- 44.25s–45.25s (×6), actor 5, squad 0 (trace 9639): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7224. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47807690392810376, 'next_transition': 9703}.
<a id="trace-9873"></a>
- 45.30s–45.30s (×1), actor 1, squad 0 (trace 9873): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 9747. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.389235571568397, 'next_transition': 10702}.
<a id="trace-10702"></a>
<a id="trace-10704"></a>
<a id="trace-10787"></a>
<a id="trace-10789"></a>
<a id="trace-10882"></a>
<a id="trace-10884"></a>
<a id="trace-11189"></a>
<a id="trace-11191"></a>
<a id="trace-11252"></a>
<a id="trace-11254"></a>
<a id="trace-11327"></a>
<a id="trace-11329"></a>
<a id="trace-11375"></a>
<a id="trace-11377"></a>
- 45.75s–48.75s (×14), actor 5, squad 0 (trace 10702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9751. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6418289134206685, 'next_transition': 10787}.
<a id="trace-10900"></a>
- 46.80s–46.80s (×1), actor 8, squad 1 (trace 10900): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 9754. Next observer evidence: {'until': 51, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.228697881698603, 'next_transition': 14590}.
<a id="trace-11413"></a>
- 49.05s–49.05s (×1), actor 1, squad 0 (trace 11413): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 9747. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24946535275793708, 'next_transition': 11439}.
<a id="trace-11439"></a>
<a id="trace-11441"></a>
<a id="trace-11485"></a>
<a id="trace-11487"></a>
- 49.25s–49.75s (×4), actor 5, squad 0 (trace 11439): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9751. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34639510992915906, 'next_transition': 11485}.
<a id="trace-11523"></a>
- 50.10s–50.10s (×1), actor 1, squad 0 (trace 11523): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 11499. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000243113496498, 'next_transition': 14505}.
<a id="trace-14196"></a>
- 50.10s–50.10s (×1), actor 1, squad 0 (trace 14196): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 11499. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000243113496498, 'next_transition': 14505}.
<a id="trace-14197"></a>
- 50.10s–50.10s (×1), actor 1, squad 0 (trace 14197): MoveTactically. Knowledge: actor memory at 50.00s, trace 11499. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000243113496498, 'next_transition': 14505}.
<a id="trace-14198"></a>
- 50.10s–50.10s (×1), actor 1, squad 0 (trace 14198): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 11499. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000243113496498, 'next_transition': 14505}.
<a id="trace-14505"></a>
<a id="trace-14507"></a>
<a id="trace-14540"></a>
<a id="trace-14542"></a>
<a id="trace-14610"></a>
<a id="trace-14612"></a>
<a id="trace-14652"></a>
<a id="trace-14654"></a>
<a id="trace-16902"></a>
<a id="trace-16904"></a>
<a id="trace-16963"></a>
<a id="trace-16965"></a>
<a id="trace-17013"></a>
<a id="trace-17015"></a>
<a id="trace-17041"></a>
<a id="trace-17043"></a>
<a id="trace-17080"></a>
<a id="trace-17082"></a>
<a id="trace-17102"></a>
<a id="trace-17104"></a>
- 50.25s–54.75s (×20), actor 5, squad 0 (trace 14505): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 11503. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19339057655564357, 'next_transition': 14540}.
<a id="trace-14590"></a>
- 51.10s–51.10s (×1), actor 8, squad 1 (trace 14590): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 11506. Next observer evidence: {'until': 52, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3369557361828805, 'next_transition': 14690}.
<a id="trace-14690"></a>
- 52.10s–52.10s (×1), actor 8, squad 1 (trace 14690): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 11506. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.486109736202572, 'next_transition': 17708}.
<a id="trace-16832"></a>
- 52.10s–52.10s (×1), actor 8, squad 1 (trace 16832): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 11506. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.486109736202572, 'next_transition': 17708}.
<a id="trace-16833"></a>
- 52.10s–52.10s (×1), actor 8, squad 1 (trace 16833): MoveTactically. Knowledge: actor memory at 50.00s, trace 11506. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.486109736202572, 'next_transition': 17708}.
<a id="trace-16834"></a>
- 52.10s–52.10s (×1), actor 8, squad 1 (trace 16834): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 11506. Next observer evidence: {'until': 56.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.486109736202572, 'next_transition': 17708}.
<a id="trace-17113"></a>
- 54.85s–54.85s (×1), actor 1, squad 0 (trace 17113): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 50.00s, trace 11499. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.43563684081727017, 'next_transition': 17189}.
<a id="trace-17115"></a>
- 54.85s–54.85s (×1), actor 1, squad 0 (trace 17115): NeedSupport. Knowledge: actor memory at 50.00s, trace 11499. Next observer evidence: {'until': 55.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.43563684081727017, 'next_transition': 17189}.
<a id="trace-17189"></a>
- 55.20s–55.20s (×1), actor 1, squad 0 (trace 17189): Reorganise: completed/failed drill. Knowledge: actor memory at 55.00s, trace 17125. Next observer evidence: None.
<a id="trace-17194"></a>
- 55.20s–55.20s (×1), actor 1, squad 0 (trace 17194): MoveTactically. Knowledge: actor memory at 55.00s, trace 17125. Next observer evidence: None.
<a id="trace-17195"></a>
- 55.20s–55.20s (×1), actor 1, squad 0 (trace 17195): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 55.00s, trace 17125. Next observer evidence: None.
<a id="trace-17635"></a>
<a id="trace-17637"></a>
<a id="trace-17654"></a>
<a id="trace-17656"></a>
<a id="trace-17684"></a>
<a id="trace-17686"></a>
<a id="trace-19594"></a>
<a id="trace-19596"></a>
- 55.25s–56.75s (×8), actor 5, squad 0 (trace 17635): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 17128. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5472870427550228, 'next_transition': 17654}.
<a id="trace-17708"></a>
- 56.55s–56.55s (×1), actor 8, squad 1 (trace 17708): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 17131. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.519243848399323, 'next_transition': 1164}.
<a id="trace-17709"></a>
- 56.55s–56.55s (×1), actor 8, squad 1 (trace 17709): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 55.00s, trace 17131. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.519243848399323, 'next_transition': 1164}.
<a id="trace-19617"></a>
- 57.05s–57.05s (×1), actor 5, squad 0 (trace 19617): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 57.05s, trace 19617. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000134922743216, 'next_transition': 19630}.
<a id="trace-19630"></a>
<a id="trace-19632"></a>
<a id="trace-19659"></a>
<a id="trace-19661"></a>
<a id="trace-19695"></a>
<a id="trace-19697"></a>
<a id="trace-19748"></a>
<a id="trace-19750"></a>
<a id="trace-19794"></a>
<a id="trace-19796"></a>
- 57.25s–59.25s (×10), actor 5, squad 0 (trace 19630): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 57.05s, trace 19617. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41998813254055545, 'next_transition': 19659}.
<a id="trace-1164"></a>
- 59.60s–59.60s (×1), actor 5, squad 1 (events line 1164): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19812"></a>
- 59.60s–59.60s (×1), actor 5, squad 1 (trace 19812): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.478750 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 59.60s, trace 19812. Next observer evidence: {'until': 60.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7445149784580334, 'next_transition': 1213}.
<a id="trace-19813"></a>
- 59.60s–59.60s (×1), actor 5, squad 1 (trace 19813): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.478750 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 59.60s, trace 19813. Next observer evidence: {'until': 60.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7445149784580334, 'next_transition': 1213}.
<a id="trace-19816"></a>
- 59.65s–59.65s (×1), actor 1, squad 0 (trace 19816): NeedSupport. Knowledge: actor memory at 55.00s, trace 17125. Next observer evidence: None.
<a id="trace-19828"></a>
<a id="trace-19830"></a>
<a id="trace-19933"></a>
<a id="trace-19935"></a>
- 59.75s–60.25s (×4), actor 5, squad 0 (trace 19828): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 59.60s, trace 19813. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6066410149658176, 'next_transition': 19933}.
<a id="trace-19943"></a>
- 60.40s–60.40s (×1), actor 1, squad 0 (trace 19943): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 60.00s, trace 19852. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500104761382141, 'next_transition': 20045}.
<a id="trace-20025"></a>
- 60.40s–60.40s (×1), actor 1, squad 0 (trace 20025): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 60.00s, trace 19852. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500104761382141, 'next_transition': 20045}.
<a id="trace-20045"></a>
<a id="trace-20047"></a>
<a id="trace-20074"></a>
<a id="trace-20076"></a>
<a id="trace-23730"></a>
<a id="trace-23732"></a>
<a id="trace-23762"></a>
<a id="trace-23764"></a>
<a id="trace-23798"></a>
<a id="trace-23800"></a>
<a id="trace-23823"></a>
<a id="trace-23825"></a>
<a id="trace-23858"></a>
<a id="trace-23860"></a>
<a id="trace-23895"></a>
<a id="trace-23897"></a>
<a id="trace-23924"></a>
<a id="trace-23926"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
- 60.75s–65.25s (×20), actor 5, squad 0 (trace 20045): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 19855. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5250262083214641, 'next_transition': 20074}.
<a id="trace-1213"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (events line 1213): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20056"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (trace 20056): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.480626 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 20056. Next observer evidence: {'until': 61.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.468099350682772, 'next_transition': 20087}.
<a id="trace-20057"></a>
- 60.85s–60.85s (×1), actor 5, squad 1 (trace 20057): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.480626 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 60.85s, trace 20057. Next observer evidence: {'until': 61.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.468099350682772, 'next_transition': 20087}.
<a id="trace-20087"></a>
- 61.40s–61.40s (×1), actor 8, squad 1 (trace 20087): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 19858. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5300266954361373, 'next_transition': 21904}.
<a id="trace-20088"></a>
- 61.40s–61.40s (×1), actor 8, squad 1 (trace 20088): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 60.00s, trace 19858. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5300266954361373, 'next_transition': 21904}.
<a id="trace-21904"></a>
- 61.65s–61.65s (×1), actor 8, squad 1 (trace 21904): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 19858. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6883517066244601, 'next_transition': 1258}.
<a id="trace-21905"></a>
- 61.65s–61.65s (×1), actor 8, squad 1 (trace 21905): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 60.00s, trace 19858. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6883517066244601, 'next_transition': 1258}.
<a id="trace-1258"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (events line 1258): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23742"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (trace 23742): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.475605 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 23742. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5056954042487823, 'next_transition': 23771}.
<a id="trace-23743"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (trace 23743): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.475605 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 23743. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5056954042487823, 'next_transition': 23771}.
<a id="trace-23771"></a>
- 62.25s–62.25s (×1), actor 8, squad 1 (trace 23771): NeedSupport. Knowledge: actor memory at 60.00s, trace 19858. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6957811622335346, 'next_transition': 1302}.
<a id="trace-1302"></a>
- 63.35s–63.35s (×1), actor 5, squad 1 (events line 1302): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23837"></a>
- 63.35s–63.35s (×1), actor 5, squad 1 (trace 23837): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.475571 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 63.35s, trace 23837. Next observer evidence: {'until': 64.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.535353111345959, 'next_transition': 1337}.
<a id="trace-23838"></a>
- 63.35s–63.35s (×1), actor 5, squad 1 (trace 23838): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.475571 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 63.35s, trace 23838. Next observer evidence: {'until': 64.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.535353111345959, 'next_transition': 1337}.
<a id="trace-1337"></a>
- 64.55s–64.55s (×1), actor 5, squad 1 (events line 1337): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23911"></a>
- 64.55s–64.55s (×1), actor 5, squad 1 (trace 23911): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477132 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 64.55s, trace 23911. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.551101346235845, 'next_transition': 1385}.
<a id="trace-23912"></a>
- 64.55s–64.55s (×1), actor 5, squad 1 (trace 23912): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477132 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 64.55s, trace 23912. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.551101346235845, 'next_transition': 1385}.
<a id="trace-24015"></a>
- 65.60s–65.60s (×1), actor 1, squad 0 (trace 24015): Fixing. Knowledge: actor memory at 65.00s, trace 23938. Next observer evidence: {'until': 65.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.17674682562193458, 'next_transition': 24030}.
<a id="trace-1385"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (events line 1385): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 66.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.3079258316506632, 'next_transition': 1422}.
<a id="trace-24030"></a>
<a id="trace-24032"></a>
<a id="trace-24055"></a>
<a id="trace-24057"></a>
<a id="trace-24074"></a>
<a id="trace-24076"></a>
<a id="trace-24093"></a>
<a id="trace-24095"></a>
<a id="trace-24107"></a>
<a id="trace-24109"></a>
<a id="trace-24130"></a>
<a id="trace-24132"></a>
<a id="trace-24146"></a>
<a id="trace-24148"></a>
<a id="trace-24171"></a>
<a id="trace-24173"></a>
<a id="trace-24193"></a>
<a id="trace-24195"></a>
<a id="trace-24532"></a>
<a id="trace-24534"></a>
<a id="trace-24549"></a>
<a id="trace-24551"></a>
<a id="trace-24572"></a>
<a id="trace-24574"></a>
<a id="trace-24593"></a>
<a id="trace-24595"></a>
<a id="trace-24614"></a>
<a id="trace-24616"></a>
<a id="trace-24633"></a>
<a id="trace-24635"></a>
<a id="trace-24653"></a>
<a id="trace-24655"></a>
<a id="trace-24824"></a>
<a id="trace-24826"></a>
- 65.75s–73.75s (×34), actor 5, squad 0 (trace 24030): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 23941. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3287336436901238, 'next_transition': 24055}.
<a id="trace-24036"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 24036): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.476512 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 24036. Next observer evidence: {'until': 66.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.3079258316506632, 'next_transition': 1422}.
<a id="trace-24037"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 24037): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.476512 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 24037. Next observer evidence: {'until': 66.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.3079258316506632, 'next_transition': 1422}.
<a id="trace-1422"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (events line 1422): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24082"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 24082): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.478160 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 24082. Next observer evidence: {'until': 68, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22425038293534405, 'next_transition': 1451}.
<a id="trace-24083"></a>
- 66.95s–66.95s (×1), actor 5, squad 1 (trace 24083): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.478160 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 24083. Next observer evidence: {'until': 68, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22425038293534405, 'next_transition': 1451}.
<a id="trace-1451"></a>
- 68.15s–68.15s (×1), actor 5, squad 1 (events line 1451): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24119"></a>
- 68.15s–68.15s (×1), actor 5, squad 1 (trace 24119): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477429 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.15s, trace 24119. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2471245280444132, 'next_transition': 24179}.
<a id="trace-24120"></a>
- 68.15s–68.15s (×1), actor 5, squad 1 (trace 24120): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477429 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.15s, trace 24120. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2471245280444132, 'next_transition': 24179}.
<a id="trace-24179"></a>
- 69.35s–69.35s (×1), actor 5, squad 1 (trace 24179): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.476808 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 24179. Next observer evidence: None.
<a id="trace-24180"></a>
- 69.35s–69.35s (×1), actor 5, squad 1 (trace 24180): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.476808 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 69.35s, trace 24180. Next observer evidence: None.
<a id="trace-1486"></a>
- 69.35s–69.35s (×1), actor 5, squad 1 (events line 1486): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24190}.
<a id="trace-24190"></a>
- 69.65s–69.65s (×1), actor 9, squad 1 (trace 24190): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 65.00s, trace 23945. Next observer evidence: {'until': 69.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24205}.
<a id="trace-24205"></a>
- 69.90s–69.90s (×1), actor 9, squad 1 (trace 24205): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 23945. Next observer evidence: {'until': 70.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150018066313273, 'next_transition': 1525}.
<a id="trace-24208"></a>
- 69.90s–69.90s (×1), actor 9, squad 1 (trace 24208): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 23945. Next observer evidence: {'until': 70.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150018066313273, 'next_transition': 1525}.
<a id="trace-24209"></a>
- 69.90s–69.90s (×1), actor 9, squad 1 (trace 24209): Reorganise complete: known contact. Knowledge: actor memory at 65.00s, trace 23945. Next observer evidence: {'until': 70.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150018066313273, 'next_transition': 1525}.
<a id="trace-1525"></a>
- 70.55s–70.55s (×1), actor 5, squad 1 (events line 1525): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24544"></a>
- 70.55s–70.55s (×1), actor 5, squad 1 (trace 24544): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.476458 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 70.55s, trace 24544. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.441248493652184, 'next_transition': 1556}.
<a id="trace-24545"></a>
- 70.55s–70.55s (×1), actor 5, squad 1 (trace 24545): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.476458 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 70.55s, trace 24545. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.441248493652184, 'next_transition': 1556}.
<a id="trace-1556"></a>
- 71.75s–71.75s (×1), actor 5, squad 1 (events line 1556): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7800076255490014, 'next_transition': 1598}.
<a id="trace-24601"></a>
- 71.75s–71.75s (×1), actor 5, squad 1 (trace 24601): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.475652 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 71.75s, trace 24601. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7800076255490014, 'next_transition': 1598}.
<a id="trace-24602"></a>
- 71.75s–71.75s (×1), actor 5, squad 1 (trace 24602): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.475652 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 71.75s, trace 24602. Next observer evidence: {'until': 72.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7800076255490014, 'next_transition': 1598}.
<a id="trace-1598"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (events line 1598): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24642"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 24642): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477105 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 24642. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.867222815244089, 'next_transition': 24666}.
<a id="trace-24643"></a>
- 72.95s–72.95s (×1), actor 5, squad 1 (trace 24643): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477105 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 24643. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.867222815244089, 'next_transition': 24666}.
<a id="trace-24666"></a>
- 73.60s–73.60s (×1), actor 9, squad 1 (trace 24666): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 24465. Next observer evidence: {'until': 74, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4844381687046262, 'next_transition': 1645}.
<a id="trace-24667"></a>
- 73.60s–73.60s (×1), actor 9, squad 1 (trace 24667): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 24465. Next observer evidence: {'until': 74, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4844381687046262, 'next_transition': 1645}.
<a id="trace-1644"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (events line 1644): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1645"></a>
- 74.15s–74.15s (×1), actor 5, squad 1 (events line 1645): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24838"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (trace 24838): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340539 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 24838. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600890522498795, 'next_transition': 24850}.
<a id="trace-24839"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (trace 24839): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340539 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 24839. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600890522498795, 'next_transition': 24850}.
<a id="trace-24840"></a>
- 74.15s–74.15s (×1), actor 5, squad 1 (trace 24840): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340539 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 24840. Next observer evidence: {'until': 104, 'shots': 4, 'casualties': 1, 'mean_displacement': 8.921153604001603, 'next_transition': None}.
<a id="trace-24841"></a>
- 74.15s–74.15s (×1), actor 5, squad 1 (trace 24841): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340539 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 24841. Next observer evidence: {'until': 104, 'shots': 4, 'casualties': 1, 'mean_displacement': 8.921153604001603, 'next_transition': None}.
<a id="trace-24850"></a>
<a id="trace-24852"></a>
<a id="trace-24873"></a>
<a id="trace-24875"></a>
<a id="trace-24955"></a>
<a id="trace-24957"></a>
- 74.25s–75.25s (×6), actor 5, squad 0 (trace 24850): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 74.15s, trace 24841. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35455114331902327, 'next_transition': 24873}.
<a id="trace-24964"></a>
- 75.35s–75.35s (×1), actor 5, squad 0 (trace 24964): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.341562 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 75.35s, trace 24964. Next observer evidence: None.
<a id="trace-24965"></a>
- 75.35s–75.35s (×1), actor 5, squad 0 (trace 24965): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.341562 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 75.35s, trace 24965. Next observer evidence: None.
<a id="trace-1686"></a>
- 75.35s–75.35s (×1), actor 5, squad 0 (events line 1686): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3547063673843592, 'next_transition': 24973}.
<a id="trace-24973"></a>
<a id="trace-24975"></a>
- 75.75s–75.75s (×2), actor 5, squad 0 (trace 24973): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.35s, trace 24965. Next observer evidence: {'until': 76, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4344224287168633, 'next_transition': 26775}.
<a id="trace-24982"></a>
- 75.75s–75.75s (×1), actor 1, squad 0 (trace 24982): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 24887. Next observer evidence: {'until': 76, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4344224287168633, 'next_transition': 26775}.
<a id="trace-24983"></a>
- 75.75s–75.75s (×1), actor 1, squad 0 (trace 24983): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 75.00s, trace 24887. Next observer evidence: {'until': 76, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4344224287168633, 'next_transition': 26775}.
<a id="trace-26765"></a>
- 75.75s–75.75s (×1), actor 1, squad 0 (trace 26765): NeedSupport. Knowledge: actor memory at 75.00s, trace 24887. Next observer evidence: {'until': 76, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4344224287168633, 'next_transition': 26775}.
<a id="trace-26775"></a>
- 76.00s–76.00s (×1), actor 1, squad 0 (trace 26775): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 24887. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21932282147815893, 'next_transition': 28569}.
<a id="trace-26776"></a>
- 76.00s–76.00s (×1), actor 1, squad 0 (trace 26776): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 75.00s, trace 24887. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21932282147815893, 'next_transition': 28569}.
<a id="trace-28569"></a>
<a id="trace-28571"></a>
- 76.25s–76.25s (×2), actor 5, squad 0 (trace 28569): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.35s, trace 24965. Next observer evidence: {'until': 76.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22102632448589313, 'next_transition': 1716}.
<a id="trace-1716"></a>
- 76.55s–76.55s (×1), actor 5, squad 0 (events line 1716): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28581"></a>
- 76.55s–76.55s (×1), actor 5, squad 0 (trace 28581): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.342709 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 76.55s, trace 28581. Next observer evidence: {'until': 76.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2227293679013802, 'next_transition': 28591}.
<a id="trace-28582"></a>
- 76.55s–76.55s (×1), actor 5, squad 0 (trace 28582): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.342709 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 76.55s, trace 28582. Next observer evidence: {'until': 76.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2227293679013802, 'next_transition': 28591}.
<a id="trace-28591"></a>
<a id="trace-28593"></a>
- 76.75s–76.75s (×2), actor 5, squad 0 (trace 28591): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 76.55s, trace 28582. Next observer evidence: {'until': 77, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29441663674500457, 'next_transition': 28615}.
<a id="trace-28615"></a>
- 77.00s–77.00s (×1), actor 1, squad 0 (trace 28615): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 24887. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21606176645714287, 'next_transition': 30406}.
<a id="trace-28616"></a>
- 77.00s–77.00s (×1), actor 1, squad 0 (trace 28616): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 75.00s, trace 24887. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21606176645714287, 'next_transition': 30406}.
<a id="trace-30406"></a>
<a id="trace-30408"></a>
- 77.25s–77.25s (×2), actor 5, squad 0 (trace 30406): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 76.55s, trace 28582. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.574588075921383, 'next_transition': 1738}.
<a id="trace-1738"></a>
- 77.75s–77.75s (×1), actor 5, squad 0 (events line 1738): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 78.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5727815715720286, 'next_transition': 30462}.
<a id="trace-30426"></a>
<a id="trace-30428"></a>
- 77.75s–77.75s (×2), actor 5, squad 0 (trace 30426): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 76.55s, trace 28582. Next observer evidence: {'until': 78.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5727815715720286, 'next_transition': 30462}.
<a id="trace-30435"></a>
- 77.75s–77.75s (×1), actor 5, squad 0 (trace 30435): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.343883 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 77.75s, trace 30435. Next observer evidence: {'until': 78.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5727815715720286, 'next_transition': 30462}.
<a id="trace-30436"></a>
- 77.75s–77.75s (×1), actor 5, squad 0 (trace 30436): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.343883 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 77.75s, trace 30436. Next observer evidence: {'until': 78.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5727815715720286, 'next_transition': 30462}.
<a id="trace-30462"></a>
<a id="trace-30464"></a>
<a id="trace-30488"></a>
<a id="trace-30490"></a>
- 78.25s–78.75s (×4), actor 5, squad 0 (trace 30462): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 77.75s, trace 30436. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6326130531665265, 'next_transition': 30488}.
<a id="trace-1759"></a>
- 78.95s–78.95s (×1), actor 5, squad 0 (events line 1759): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30499"></a>
- 78.95s–78.95s (×1), actor 5, squad 0 (trace 30499): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.345084 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 78.95s, trace 30499. Next observer evidence: {'until': 79.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.075046383899224, 'next_transition': 30531}.
<a id="trace-30500"></a>
- 78.95s–78.95s (×1), actor 5, squad 0 (trace 30500): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.345084 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 78.95s, trace 30500. Next observer evidence: {'until': 79.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.075046383899224, 'next_transition': 30531}.
<a id="trace-30531"></a>
<a id="trace-30533"></a>
- 79.75s–79.75s (×2), actor 5, squad 0 (trace 30531): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 78.95s, trace 30500. Next observer evidence: {'until': 80, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44723351382167975, 'next_transition': 1774}.
<a id="trace-1774"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (events line 1774): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30565"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 30565): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340789 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 30565. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24030205429844642, 'next_transition': 30618}.
<a id="trace-30566"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 30566): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340789 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 30566. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24030205429844642, 'next_transition': 30618}.
<a id="trace-30618"></a>
<a id="trace-30620"></a>
<a id="trace-30637"></a>
<a id="trace-30639"></a>
<a id="trace-30662"></a>
<a id="trace-30664"></a>
- 80.25s–81.25s (×6), actor 5, squad 0 (trace 30618): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 30566. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3004580036681717, 'next_transition': 30637}.
<a id="trace-30671"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (trace 30671): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340327 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.35s, trace 30671. Next observer evidence: None.
<a id="trace-30672"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (trace 30672): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.340327 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 81.35s, trace 30672. Next observer evidence: None.
<a id="trace-1799"></a>
- 81.35s–81.35s (×1), actor 5, squad 0 (events line 1799): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3694628849975, 'next_transition': 30681}.
<a id="trace-30681"></a>
<a id="trace-30683"></a>
<a id="trace-30707"></a>
<a id="trace-30709"></a>
- 81.75s–82.25s (×4), actor 5, squad 0 (trace 30681): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.35s, trace 30672. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2394384669930878, 'next_transition': 30707}.
<a id="trace-1823"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (events line 1823): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30722"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (trace 30722): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.341485 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 82.55s, trace 30722. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30728}.
<a id="trace-30723"></a>
- 82.55s–82.55s (×1), actor 5, squad 0 (trace 30723): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.341485 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 82.55s, trace 30723. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30728}.
<a id="trace-30728"></a>
<a id="trace-30730"></a>
<a id="trace-30749"></a>
<a id="trace-30751"></a>
- 82.75s–83.25s (×4), actor 5, squad 0 (trace 30728): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.55s, trace 30723. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4091617425606839, 'next_transition': 30749}.
<a id="trace-1842"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (events line 1842): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45067832037472255, 'next_transition': 30788}.
<a id="trace-30764"></a>
<a id="trace-30766"></a>
- 83.75s–83.75s (×2), actor 5, squad 0 (trace 30764): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.55s, trace 30723. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45067832037472255, 'next_transition': 30788}.
<a id="trace-30773"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (trace 30773): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.342767 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 83.75s, trace 30773. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45067832037472255, 'next_transition': 30788}.
<a id="trace-30774"></a>
- 83.75s–83.75s (×1), actor 5, squad 0 (trace 30774): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.342767 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 83.75s, trace 30774. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45067832037472255, 'next_transition': 30788}.
<a id="trace-30788"></a>
<a id="trace-30790"></a>
<a id="trace-30808"></a>
<a id="trace-30810"></a>
- 84.25s–84.75s (×4), actor 5, squad 0 (trace 30788): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 83.75s, trace 30774. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30950433997394833, 'next_transition': 30808}.
<a id="trace-1854"></a>
- 84.95s–84.95s (×1), actor 5, squad 0 (events line 1854): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30820"></a>
- 84.95s–84.95s (×1), actor 5, squad 0 (trace 30820): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.95s, trace 30820. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4896914719305808, 'next_transition': 30888}.
<a id="trace-30821"></a>
- 84.95s–84.95s (×1), actor 5, squad 0 (trace 30821): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339177 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 84.95s, trace 30821. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4896914719305808, 'next_transition': 30888}.
<a id="trace-30888"></a>
<a id="trace-30890"></a>
- 85.25s–85.25s (×2), actor 5, squad 0 (trace 30888): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 30824. Next observer evidence: {'until': 86, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7566375142640711, 'next_transition': 1872}.
<a id="trace-1872"></a>
- 86.15s–86.15s (×1), actor 5, squad 0 (events line 1872): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30911"></a>
- 86.15s–86.15s (×1), actor 5, squad 0 (trace 30911): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339751 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 86.15s, trace 30911. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600134024684018, 'next_transition': 30920}.
<a id="trace-30912"></a>
- 86.15s–86.15s (×1), actor 5, squad 0 (trace 30912): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.339751 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 86.15s, trace 30912. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600134024684018, 'next_transition': 30920}.
<a id="trace-30920"></a>
<a id="trace-30922"></a>
<a id="trace-30932"></a>
<a id="trace-30934"></a>
<a id="trace-30950"></a>
<a id="trace-30952"></a>
- 86.25s–87.25s (×6), actor 5, squad 0 (trace 30920): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 86.15s, trace 30912. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200268049368035, 'next_transition': 30932}.
<a id="trace-30959"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 30959): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.270854 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 30959. Next observer evidence: None.
<a id="trace-30960"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (trace 30960): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.270854 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 87.35s, trace 30960. Next observer evidence: None.
<a id="trace-1890"></a>
- 87.35s–87.35s (×1), actor 5, squad 0 (events line 1890): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 87.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.35032120861364136, 'next_transition': 30966}.
<a id="trace-30966"></a>
<a id="trace-30968"></a>
<a id="trace-30985"></a>
<a id="trace-30987"></a>
- 87.75s–88.25s (×4), actor 5, squad 0 (trace 30966): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 87.35s, trace 30960. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5140006984401683, 'next_transition': 30985}.
<a id="trace-1902"></a>
- 88.55s–88.55s (×1), actor 5, squad 0 (events line 1902): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30998"></a>
- 88.55s–88.55s (×1), actor 5, squad 0 (trace 30998): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.270398 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 30998. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12784705843219493, 'next_transition': 31005}.
<a id="trace-30999"></a>
- 88.55s–88.55s (×1), actor 5, squad 0 (trace 30999): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.270398 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 88.55s, trace 30999. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12784705843219493, 'next_transition': 31005}.
<a id="trace-31005"></a>
<a id="trace-31007"></a>
<a id="trace-31030"></a>
<a id="trace-31032"></a>
- 88.75s–89.25s (×4), actor 5, squad 0 (trace 31005): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 88.55s, trace 30999. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4721971694717726, 'next_transition': 31030}.
<a id="trace-1914"></a>
- 89.75s–89.75s (×1), actor 5, squad 0 (events line 1914): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5144456251519232, 'next_transition': 31126}.
<a id="trace-31043"></a>
<a id="trace-31045"></a>
- 89.75s–89.75s (×2), actor 5, squad 0 (trace 31043): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 88.55s, trace 30999. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5144456251519232, 'next_transition': 31126}.
<a id="trace-31052"></a>
- 89.75s–89.75s (×1), actor 5, squad 0 (trace 31052): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.270641 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 89.75s, trace 31052. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5144456251519232, 'next_transition': 31126}.
<a id="trace-31053"></a>
- 89.75s–89.75s (×1), actor 5, squad 0 (trace 31053): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.270641 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 89.75s, trace 31053. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5144456251519232, 'next_transition': 31126}.
<a id="trace-31126"></a>
<a id="trace-31128"></a>
<a id="trace-31140"></a>
<a id="trace-31142"></a>
- 90.25s–90.75s (×4), actor 5, squad 0 (trace 31126): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 31060. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3625177883158476, 'next_transition': 31140}.
<a id="trace-1921"></a>
- 90.95s–90.95s (×1), actor 5, squad 0 (events line 1921): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31150"></a>
- 90.95s–90.95s (×1), actor 5, squad 0 (trace 31150): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.271602 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 31150. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36986409521537034, 'next_transition': 31160}.
<a id="trace-31151"></a>
- 90.95s–90.95s (×1), actor 5, squad 0 (trace 31151): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.271602 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 90.95s, trace 31151. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36986409521537034, 'next_transition': 31160}.
<a id="trace-31160"></a>
<a id="trace-31162"></a>
<a id="trace-31173"></a>
<a id="trace-31175"></a>
- 91.25s–91.75s (×4), actor 5, squad 0 (trace 31160): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.95s, trace 31151. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37475201456289176, 'next_transition': 31173}.
<a id="trace-1928"></a>
- 92.15s–92.15s (×1), actor 5, squad 0 (events line 1928): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31185"></a>
- 92.15s–92.15s (×1), actor 5, squad 0 (trace 31185): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272616 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.15s, trace 31185. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19166961133617508, 'next_transition': 31197}.
<a id="trace-31186"></a>
- 92.15s–92.15s (×1), actor 5, squad 0 (trace 31186): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272616 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 92.15s, trace 31186. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19166961133617508, 'next_transition': 31197}.
<a id="trace-31197"></a>
<a id="trace-31199"></a>
<a id="trace-31212"></a>
<a id="trace-31214"></a>
<a id="trace-31234"></a>
<a id="trace-31236"></a>
- 92.25s–93.25s (×6), actor 5, squad 0 (trace 31197): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 92.15s, trace 31186. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3811723293926638, 'next_transition': 31212}.
<a id="trace-31245"></a>
- 93.35s–93.35s (×1), actor 5, squad 0 (trace 31245): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.273638 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.35s, trace 31245. Next observer evidence: None.
<a id="trace-31246"></a>
- 93.35s–93.35s (×1), actor 5, squad 0 (trace 31246): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.273638 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 93.35s, trace 31246. Next observer evidence: None.
<a id="trace-1939"></a>
- 93.35s–93.35s (×1), actor 5, squad 0 (events line 1939): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14724986141602986, 'next_transition': 31251}.
<a id="trace-31251"></a>
<a id="trace-31253"></a>
<a id="trace-31276"></a>
<a id="trace-31278"></a>
- 93.75s–94.25s (×4), actor 5, squad 0 (trace 31251): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 93.35s, trace 31246. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2023715183122365, 'next_transition': 31276}.
<a id="trace-1958"></a>
- 94.55s–94.55s (×1), actor 5, squad 0 (events line 1958): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31289"></a>
- 94.55s–94.55s (×1), actor 5, squad 0 (trace 31289): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272554 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 94.55s, trace 31289. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24638412493085404, 'next_transition': 31299}.
<a id="trace-31290"></a>
- 94.55s–94.55s (×1), actor 5, squad 0 (trace 31290): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272554 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 94.55s, trace 31290. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24638412493085404, 'next_transition': 31299}.
<a id="trace-31299"></a>
<a id="trace-31301"></a>
<a id="trace-31376"></a>
<a id="trace-31378"></a>
- 94.75s–95.25s (×4), actor 5, squad 0 (trace 31299): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 94.55s, trace 31290. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780102611358588, 'next_transition': 31376}.
<a id="trace-1975"></a>
- 95.75s–95.75s (×1), actor 5, squad 0 (events line 1975): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4457441662422381, 'next_transition': 31411}.
<a id="trace-31387"></a>
<a id="trace-31389"></a>
- 95.75s–95.75s (×2), actor 5, squad 0 (trace 31387): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 31314. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4457441662422381, 'next_transition': 31411}.
<a id="trace-31394"></a>
- 95.75s–95.75s (×1), actor 5, squad 0 (trace 31394): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272770 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 95.75s, trace 31394. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4457441662422381, 'next_transition': 31411}.
<a id="trace-31395"></a>
- 95.75s–95.75s (×1), actor 5, squad 0 (trace 31395): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272770 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 95.75s, trace 31395. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4457441662422381, 'next_transition': 31411}.
<a id="trace-31411"></a>
<a id="trace-31413"></a>
<a id="trace-31425"></a>
<a id="trace-31427"></a>
- 96.25s–96.75s (×4), actor 5, squad 0 (trace 31411): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.75s, trace 31395. Next observer evidence: {'until': 96.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4223356715665555, 'next_transition': 31425}.
<a id="trace-1986"></a>
- 96.95s–96.95s (×1), actor 5, squad 0 (events line 1986): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31438"></a>
- 96.95s–96.95s (×1), actor 5, squad 0 (trace 31438): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272647 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.95s, trace 31438. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43343014652494416, 'next_transition': 31446}.
<a id="trace-31439"></a>
- 96.95s–96.95s (×1), actor 5, squad 0 (trace 31439): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272647 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 96.95s, trace 31439. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43343014652494416, 'next_transition': 31446}.
<a id="trace-31446"></a>
<a id="trace-31448"></a>
<a id="trace-31457"></a>
<a id="trace-31459"></a>
- 97.25s–97.75s (×4), actor 5, squad 0 (trace 31446): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 96.95s, trace 31439. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43344149339432736, 'next_transition': 31457}.
<a id="trace-1994"></a>
- 98.15s–98.15s (×1), actor 5, squad 0 (events line 1994): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-31467"></a>
- 98.15s–98.15s (×1), actor 5, squad 0 (trace 31467): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.271021 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 98.15s, trace 31467. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21672808440208105, 'next_transition': 31481}.
<a id="trace-31468"></a>
- 98.15s–98.15s (×1), actor 5, squad 0 (trace 31468): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.271021 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 98.15s, trace 31468. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21672808440208105, 'next_transition': 31481}.
<a id="trace-31481"></a>
<a id="trace-31483"></a>
<a id="trace-31490"></a>
<a id="trace-31492"></a>
<a id="trace-31508"></a>
<a id="trace-31510"></a>
- 98.25s–99.25s (×6), actor 5, squad 0 (trace 31481): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 98.15s, trace 31468. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4334313015158511, 'next_transition': 31490}.
<a id="trace-31517"></a>
- 99.35s–99.35s (×1), actor 5, squad 0 (trace 31517): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.271678 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 99.35s, trace 31517. Next observer evidence: None.
<a id="trace-31518"></a>
- 99.35s–99.35s (×1), actor 5, squad 0 (trace 31518): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.271678 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 99.35s, trace 31518. Next observer evidence: None.
<a id="trace-2001"></a>
- 99.35s–99.35s (×1), actor 5, squad 0 (events line 2001): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 99.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1252492107919248, 'next_transition': 31526}.
<a id="trace-31526"></a>
<a id="trace-31528"></a>
<a id="trace-31608"></a>
<a id="trace-31610"></a>
- 99.75s–100.25s (×4), actor 5, squad 0 (trace 31526): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 99.35s, trace 31518. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19929911912499765, 'next_transition': 31608}.
<a id="trace-2022"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (events line 2022): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 100.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.021356727183723626, 'next_transition': 31625}.
<a id="trace-31617"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (trace 31617): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272477 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.55s, trace 31617. Next observer evidence: {'until': 100.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.021356727183723626, 'next_transition': 31625}.
<a id="trace-31618"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (trace 31618): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.272477 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 100.55s, trace 31618. Next observer evidence: {'until': 100.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.021356727183723626, 'next_transition': 31625}.
<a id="trace-31625"></a>
<a id="trace-31627"></a>
<a id="trace-31649"></a>
<a id="trace-31651"></a>
- 100.75s–101.25s (×4), actor 5, squad 0 (trace 31625): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 31618. Next observer evidence: {'until': 101.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2860402073129761, 'next_transition': 31649}.
<a id="trace-2045"></a>
- 101.75s–101.75s (×1), actor 5, squad 0 (events line 2045): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2401638430921141, 'next_transition': 2048}.
<a id="trace-31664"></a>
<a id="trace-31666"></a>
- 101.75s–101.75s (×2), actor 5, squad 0 (trace 31664): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 31618. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2401638430921141, 'next_transition': 2048}.
<a id="trace-31671"></a>
- 101.75s–101.75s (×1), actor 5, squad 0 (trace 31671): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.273358 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.75s, trace 31671. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2401638430921141, 'next_transition': 2048}.
<a id="trace-31672"></a>
- 101.75s–101.75s (×1), actor 5, squad 0 (trace 31672): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.273358 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 101.75s, trace 31672. Next observer evidence: {'until': 102, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2401638430921141, 'next_transition': 2048}.
<a id="trace-2048"></a>
- 102.05s–102.05s (×1), actor 5, squad 0 (events line 2048): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11208592750464483, 'next_transition': 31692}.
<a id="trace-31677"></a>
- 102.05s–102.05s (×1), actor 5, squad 0 (trace 31677): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.273583 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 102.05s, trace 31677. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11208592750464483, 'next_transition': 31692}.
<a id="trace-31678"></a>
- 102.05s–102.05s (×1), actor 5, squad 0 (trace 31678): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.273583 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 102.05s, trace 31678. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11208592750464483, 'next_transition': 31692}.
<a id="trace-31692"></a>
<a id="trace-31694"></a>
<a id="trace-31706"></a>
<a id="trace-31708"></a>
<a id="trace-31722"></a>
<a id="trace-31724"></a>
<a id="trace-31734"></a>
<a id="trace-31736"></a>
- 102.25s–103.75s (×8), actor 5, squad 0 (trace 31692): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 102.05s, trace 31678. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17377734877548956, 'next_transition': 31706}.
<a id="trace-31749"></a>
- 104.20s–104.20s (×1), actor 1, squad 0 (trace 31749): Withdraw to received rally. Knowledge: actor memory at 100.00s, trace 31539. Next observer evidence: None.
<a id="trace-31750"></a>
- 104.20s–104.20s (×1), actor 1, squad 0 (trace 31750): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 31539. Next observer evidence: None.
<a id="trace-32043"></a>
- 104.20s–104.20s (×1), actor 1, squad 0 (trace 32043): NeedSupport. Knowledge: actor memory at 100.00s, trace 31539. Next observer evidence: None.
<a id="trace-32057"></a>
<a id="trace-32059"></a>
<a id="trace-32074"></a>
<a id="trace-32076"></a>
<a id="trace-32154"></a>
<a id="trace-32156"></a>
<a id="trace-32167"></a>
<a id="trace-32169"></a>
<a id="trace-32189"></a>
<a id="trace-32191"></a>
<a id="trace-32202"></a>
<a id="trace-32204"></a>
<a id="trace-32229"></a>
<a id="trace-32231"></a>
<a id="trace-32249"></a>
<a id="trace-32251"></a>
<a id="trace-32272"></a>
<a id="trace-32274"></a>
<a id="trace-32292"></a>
<a id="trace-32294"></a>
<a id="trace-32316"></a>
<a id="trace-32318"></a>
<a id="trace-32337"></a>
<a id="trace-32339"></a>
<a id="trace-32416"></a>
<a id="trace-32418"></a>
<a id="trace-32435"></a>
<a id="trace-32437"></a>
<a id="trace-32459"></a>
<a id="trace-32461"></a>
<a id="trace-32480"></a>
<a id="trace-32482"></a>
<a id="trace-32504"></a>
<a id="trace-32506"></a>
<a id="trace-32519"></a>
<a id="trace-32521"></a>
- 104.25s–112.75s (×36), actor 5, squad 0 (trace 32057): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 102.05s, trace 31678. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21171810740821292, 'next_transition': 32074}.
<a id="trace-32536"></a>
- 113.15s–113.15s (×1), actor 1, squad 0 (trace 32536): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 110.00s, trace 32349. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.422189584410143, 'next_transition': 32545}.
<a id="trace-32545"></a>
<a id="trace-32547"></a>
- 113.25s–113.25s (×2), actor 5, squad 0 (trace 32545): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 32351. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8571116530233475, 'next_transition': 32564}.
<a id="trace-32564"></a>
- 113.65s–113.65s (×1), actor 1, squad 0 (trace 32564): Reorganise: completed/failed drill. Knowledge: actor memory at 110.00s, trace 32349. Next observer evidence: None.
<a id="trace-32567"></a>
- 113.65s–113.65s (×1), actor 1, squad 0 (trace 32567): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 32349. Next observer evidence: None.
<a id="trace-32568"></a>
- 113.65s–113.65s (×1), actor 1, squad 0 (trace 32568): Reorganise complete: known contact. Knowledge: actor memory at 110.00s, trace 32349. Next observer evidence: None.
<a id="trace-32696"></a>
<a id="trace-32698"></a>
<a id="trace-32711"></a>
<a id="trace-32713"></a>
<a id="trace-32736"></a>
<a id="trace-32738"></a>
<a id="trace-32816"></a>
<a id="trace-32818"></a>
<a id="trace-32827"></a>
<a id="trace-32829"></a>
<a id="trace-32855"></a>
<a id="trace-32857"></a>
<a id="trace-32887"></a>
<a id="trace-32889"></a>
- 113.75s–117.25s (×14), actor 5, squad 0 (trace 32696): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 32351. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3175719090161555, 'next_transition': 32711}.
<a id="trace-32899"></a>
- 117.65s–117.65s (×1), actor 1, squad 0 (trace 32899): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 115.00s, trace 32748. Next observer evidence: None.
<a id="trace-32900"></a>
- 117.65s–117.65s (×1), actor 1, squad 0 (trace 32900): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 32748. Next observer evidence: None.
<a id="trace-33076"></a>
<a id="trace-33078"></a>
<a id="trace-33100"></a>
<a id="trace-33102"></a>
<a id="trace-33118"></a>
<a id="trace-33120"></a>
<a id="trace-33140"></a>
<a id="trace-33142"></a>
<a id="trace-33157"></a>
<a id="trace-33159"></a>
<a id="trace-33234"></a>
<a id="trace-33236"></a>
<a id="trace-33252"></a>
<a id="trace-33254"></a>
<a id="trace-33272"></a>
<a id="trace-33274"></a>
<a id="trace-33281"></a>
<a id="trace-33283"></a>
<a id="trace-33301"></a>
<a id="trace-33303"></a>
<a id="trace-33311"></a>
<a id="trace-33313"></a>
<a id="trace-33327"></a>
<a id="trace-33329"></a>
<a id="trace-33339"></a>
<a id="trace-33341"></a>
<a id="trace-33360"></a>
<a id="trace-33362"></a>
<a id="trace-33373"></a>
<a id="trace-33375"></a>
<a id="trace-33450"></a>
<a id="trace-33452"></a>
<a id="trace-33461"></a>
<a id="trace-33463"></a>
<a id="trace-33480"></a>
<a id="trace-33493"></a>
<a id="trace-33507"></a>
<a id="trace-33516"></a>
<a id="trace-33542"></a>
<a id="trace-33551"></a>
- 117.75s–128.80s (×40), actor 5, squad 0 (trace 33076): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 32749. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2150802268347507, 'next_transition': 33100}.
<a id="trace-33568"></a>
- 129.25s–129.25s (×1), actor 1, squad 0 (trace 33568): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 33383. Next observer evidence: None.
<a id="trace-33569"></a>
- 129.25s–129.25s (×1), actor 1, squad 0 (trace 33569): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 33383. Next observer evidence: None.
<a id="trace-33627"></a>
<a id="trace-33638"></a>
<a id="trace-33710"></a>
<a id="trace-33725"></a>
<a id="trace-33741"></a>
<a id="trace-33754"></a>
<a id="trace-33770"></a>
<a id="trace-33789"></a>
<a id="trace-33800"></a>
<a id="trace-33807"></a>
<a id="trace-33824"></a>
<a id="trace-33832"></a>
<a id="trace-33900"></a>
<a id="trace-33909"></a>
<a id="trace-33918"></a>
<a id="trace-33932"></a>
<a id="trace-33946"></a>
<a id="trace-33958"></a>
<a id="trace-33969"></a>
<a id="trace-33975"></a>
<a id="trace-33989"></a>
<a id="trace-33999"></a>
<a id="trace-34071"></a>
<a id="trace-34084"></a>
<a id="trace-34096"></a>
<a id="trace-34107"></a>
<a id="trace-34121"></a>
<a id="trace-34136"></a>
<a id="trace-34148"></a>
<a id="trace-34155"></a>
<a id="trace-34174"></a>
<a id="trace-34187"></a>
<a id="trace-34261"></a>
<a id="trace-34268"></a>
<a id="trace-34280"></a>
<a id="trace-34296"></a>
<a id="trace-34308"></a>
<a id="trace-34315"></a>
<a id="trace-34331"></a>
<a id="trace-34341"></a>
<a id="trace-34352"></a>
<a id="trace-34369"></a>
<a id="trace-34443"></a>
<a id="trace-34455"></a>
<a id="trace-34470"></a>
<a id="trace-34481"></a>
- 129.30s–151.80s (×46), actor 5, squad 0 (trace 33627): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 33384. Next observer evidence: {'until': 129.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1545507965409999, 'next_transition': 33638}.
<a id="trace-34488"></a>
- 152.10s–152.10s (×1), actor 1, squad 0 (trace 34488): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 34375. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34572}.
<a id="trace-34510"></a>
- 152.10s–152.10s (×1), actor 1, squad 0 (trace 34510): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 34375. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34572}.
<a id="trace-34572"></a>
<a id="trace-34585"></a>
<a id="trace-34607"></a>
<a id="trace-34615"></a>
<a id="trace-34637"></a>
<a id="trace-34655"></a>
<a id="trace-34725"></a>
- 152.30s–155.30s (×7), actor 5, squad 0 (trace 34572): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 34376. Next observer evidence: {'until': 152.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34585}.
<a id="trace-34729"></a>
- 155.35s–155.35s (×1), actor 1, squad 0 (trace 34729): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 155.00s, trace 34662. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5473060604669768, 'next_transition': 34736}.
<a id="trace-34736"></a>
<a id="trace-34758"></a>
<a id="trace-34774"></a>
<a id="trace-34798"></a>
<a id="trace-34814"></a>
<a id="trace-34833"></a>
<a id="trace-34851"></a>
<a id="trace-34863"></a>
<a id="trace-34875"></a>
<a id="trace-34945"></a>
<a id="trace-34953"></a>
<a id="trace-34967"></a>
<a id="trace-34976"></a>
- 155.80s–161.80s (×13), actor 5, squad 0 (trace 34736): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 34663. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21200954307256964, 'next_transition': 34758}.
<a id="trace-2466"></a>
- 162.05s–162.05s (×1), actor 5, squad 0 (events line 2466): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34990}.
<a id="trace-34979"></a>
- 162.05s–162.05s (×1), actor 5, squad 0 (trace 34979): renew committed intent (75 s lifetime). Knowledge: actor memory at 162.05s, trace 34979. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34990}.
<a id="trace-34990"></a>
<a id="trace-35000"></a>
<a id="trace-35009"></a>
<a id="trace-35019"></a>
<a id="trace-35032"></a>
<a id="trace-35044"></a>
<a id="trace-35116"></a>
<a id="trace-35126"></a>
<a id="trace-35141"></a>
<a id="trace-35151"></a>
<a id="trace-35161"></a>
<a id="trace-35170"></a>
<a id="trace-35178"></a>
<a id="trace-35188"></a>
<a id="trace-35198"></a>
<a id="trace-35203"></a>
<a id="trace-35270"></a>
<a id="trace-35280"></a>
<a id="trace-35296"></a>
<a id="trace-35310"></a>
<a id="trace-35321"></a>
<a id="trace-35329"></a>
<a id="trace-35345"></a>
<a id="trace-35355"></a>
<a id="trace-35366"></a>
<a id="trace-35374"></a>
<a id="trace-35442"></a>
<a id="trace-35450"></a>
<a id="trace-35460"></a>
<a id="trace-35473"></a>
<a id="trace-35485"></a>
<a id="trace-35493"></a>
<a id="trace-35511"></a>
<a id="trace-35522"></a>
<a id="trace-35536"></a>
<a id="trace-35549"></a>
<a id="trace-35615"></a>
<a id="trace-35623"></a>
<a id="trace-35632"></a>
<a id="trace-35641"></a>
<a id="trace-35652"></a>
<a id="trace-35662"></a>
<a id="trace-35678"></a>
<a id="trace-35690"></a>
<a id="trace-35704"></a>
<a id="trace-35715"></a>
<a id="trace-35787"></a>
<a id="trace-35796"></a>
<a id="trace-35813"></a>
<a id="trace-35825"></a>
<a id="trace-35837"></a>
<a id="trace-35844"></a>
<a id="trace-35858"></a>
<a id="trace-35868"></a>
<a id="trace-35884"></a>
<a id="trace-35897"></a>
<a id="trace-35968"></a>
<a id="trace-35974"></a>
<a id="trace-35990"></a>
<a id="trace-36006"></a>
<a id="trace-36020"></a>
<a id="trace-36039"></a>
<a id="trace-36050"></a>
<a id="trace-36059"></a>
<a id="trace-36070"></a>
<a id="trace-36080"></a>
<a id="trace-36149"></a>
<a id="trace-36157"></a>
<a id="trace-36171"></a>
<a id="trace-36184"></a>
<a id="trace-36198"></a>
<a id="trace-36213"></a>
<a id="trace-36228"></a>
<a id="trace-36243"></a>
<a id="trace-36261"></a>
<a id="trace-36270"></a>
<a id="trace-36337"></a>
<a id="trace-36342"></a>
<a id="trace-36356"></a>
<a id="trace-36367"></a>
<a id="trace-36382"></a>
<a id="trace-36390"></a>
<a id="trace-36410"></a>
<a id="trace-36422"></a>
<a id="trace-36440"></a>
<a id="trace-36454"></a>
<a id="trace-36522"></a>
<a id="trace-36529"></a>
<a id="trace-36546"></a>
<a id="trace-36557"></a>
<a id="trace-36568"></a>
<a id="trace-36574"></a>
<a id="trace-36589"></a>
<a id="trace-36597"></a>
<a id="trace-36612"></a>
<a id="trace-36693"></a>
<a id="trace-36704"></a>
<a id="trace-36722"></a>
<a id="trace-36733"></a>
<a id="trace-36749"></a>
<a id="trace-36765"></a>
<a id="trace-36779"></a>
<a id="trace-36786"></a>
<a id="trace-36799"></a>
<a id="trace-36807"></a>
<a id="trace-36875"></a>
<a id="trace-36885"></a>
<a id="trace-36902"></a>
<a id="trace-36917"></a>
<a id="trace-36928"></a>
<a id="trace-36940"></a>
<a id="trace-36957"></a>
<a id="trace-36970"></a>
<a id="trace-36992"></a>
<a id="trace-37000"></a>
<a id="trace-37067"></a>
<a id="trace-37074"></a>
<a id="trace-37085"></a>
<a id="trace-37098"></a>
- 162.30s–221.80s (×119), actor 5, squad 0 (trace 34990): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 162.05s, trace 34979. Next observer evidence: {'until': 162.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35000}.
<a id="trace-2835"></a>
- 222.05s–222.05s (×1), actor 5, squad 0 (events line 2835): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37111}.
<a id="trace-37104"></a>
- 222.05s–222.05s (×1), actor 5, squad 0 (trace 37104): renew committed intent (75 s lifetime). Knowledge: actor memory at 222.05s, trace 37104. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37111}.
<a id="trace-37111"></a>
<a id="trace-37124"></a>
<a id="trace-37140"></a>
<a id="trace-37149"></a>
<a id="trace-37168"></a>
<a id="trace-37180"></a>
<a id="trace-37252"></a>
<a id="trace-37265"></a>
<a id="trace-37276"></a>
<a id="trace-37287"></a>
<a id="trace-37299"></a>
<a id="trace-37310"></a>
<a id="trace-37323"></a>
<a id="trace-37336"></a>
<a id="trace-37351"></a>
<a id="trace-37361"></a>
<a id="trace-37428"></a>
- 222.30s–230.30s (×17), actor 5, squad 0 (trace 37111): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 222.05s, trace 37104. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37124}.
<a id="trace-2902"></a>
- 230.80s–230.80s (×1), actor 5, squad 0 (events line 2902): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37460}.
<a id="trace-37441"></a>
- 230.80s–230.80s (×1), actor 5, squad 0 (trace 37441): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 37369. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37460}.
<a id="trace-37446"></a>
- 230.80s–230.80s (×1), actor 5, squad 0 (trace 37446): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.836354 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 230.80s, trace 37446. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37460}.
<a id="trace-37447"></a>
- 230.80s–230.80s (×1), actor 5, squad 0 (trace 37447): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.836354 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 230.80s, trace 37447. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37460}.
<a id="trace-37460"></a>
<a id="trace-37473"></a>
<a id="trace-37493"></a>
- 231.30s–232.30s (×3), actor 5, squad 0 (trace 37460): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.80s, trace 37447. Next observer evidence: {'until': 231.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37473}.
<a id="trace-37499"></a>
- 232.45s–232.45s (×1), actor 1, squad 0 (trace 37499): MoveTactically. Knowledge: actor memory at 230.00s, trace 37368. Next observer evidence: {'until': 232.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37528}.
<a id="trace-37500"></a>
- 232.45s–232.45s (×1), actor 1, squad 0 (trace 37500): received platoon directive. Knowledge: actor memory at 230.00s, trace 37368. Next observer evidence: {'until': 232.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37528}.
<a id="trace-37528"></a>
<a id="trace-37546"></a>
- 232.80s–233.30s (×2), actor 5, squad 0 (trace 37528): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.80s, trace 37447. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37546}.
<a id="trace-37553"></a>
- 233.45s–233.45s (×1), actor 1, squad 0 (trace 37553): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 230.00s, trace 37368. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37614}.
<a id="trace-37614"></a>
<a id="trace-37632"></a>
<a id="trace-37645"></a>
<a id="trace-37718"></a>
<a id="trace-37726"></a>
<a id="trace-37749"></a>
<a id="trace-37763"></a>
<a id="trace-37783"></a>
<a id="trace-37797"></a>
<a id="trace-37817"></a>
<a id="trace-37829"></a>
<a id="trace-37852"></a>
<a id="trace-37860"></a>
<a id="trace-37929"></a>
<a id="trace-37940"></a>
<a id="trace-37954"></a>
<a id="trace-37966"></a>
<a id="trace-37983"></a>
<a id="trace-38002"></a>
- 233.80s–242.80s (×19), actor 5, squad 0 (trace 37614): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.80s, trace 37447. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03938649038693151, 'next_transition': 37632}.
<a id="trace-38013"></a>
- 243.25s–243.25s (×1), actor 1, squad 0 (trace 38013): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 240.00s, trace 37863. Next observer evidence: None.
<a id="trace-38021"></a>
<a id="trace-38032"></a>
- 243.30s–243.80s (×2), actor 5, squad 0 (trace 38021): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 37864. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19845508937792455, 'next_transition': 38032}.
<a id="trace-38038"></a>
- 243.85s–243.85s (×1), actor 1, squad 0 (trace 38038): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 240.00s, trace 37863. Next observer evidence: {'until': 244.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38115}.
<a id="trace-38115"></a>
<a id="trace-38127"></a>
<a id="trace-38206"></a>
<a id="trace-38227"></a>
<a id="trace-38242"></a>
<a id="trace-38259"></a>
<a id="trace-38271"></a>
<a id="trace-38281"></a>
<a id="trace-38298"></a>
- 244.30s–248.30s (×9), actor 5, squad 0 (trace 38115): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 37864. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874524191975094, 'next_transition': 38127}.
<a id="trace-38309"></a>
- 248.70s–248.70s (×1), actor 1, squad 0 (trace 38309): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 245.00s, trace 38140. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874853173234318, 'next_transition': 38362}.
<a id="trace-38362"></a>
<a id="trace-38385"></a>
<a id="trace-38397"></a>
<a id="trace-38473"></a>
<a id="trace-38484"></a>
<a id="trace-38504"></a>
<a id="trace-38520"></a>
<a id="trace-38544"></a>
<a id="trace-38555"></a>
<a id="trace-38571"></a>
<a id="trace-38577"></a>
<a id="trace-38599"></a>
<a id="trace-38612"></a>
<a id="trace-38686"></a>
<a id="trace-38698"></a>
- 248.80s–255.80s (×15), actor 5, squad 0 (trace 38362): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 38141. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5134556933568191, 'next_transition': 38385}.
<a id="trace-3155"></a>
- 256.00s–256.00s (×1), actor 5, squad 0 (events line 3155): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1406473080270293, 'next_transition': 38723}.
<a id="trace-38707"></a>
- 256.00s–256.00s (×1), actor 5, squad 0 (trace 38707): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.808289 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 256.00s, trace 38707. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1406473080270293, 'next_transition': 38723}.
<a id="trace-38708"></a>
- 256.00s–256.00s (×1), actor 5, squad 0 (trace 38708): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.808289 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 256.00s, trace 38708. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1406473080270293, 'next_transition': 38723}.
<a id="trace-38723"></a>
<a id="trace-38734"></a>
<a id="trace-38757"></a>
<a id="trace-38771"></a>
- 256.30s–257.80s (×4), actor 5, squad 0 (trace 38723): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 256.00s, trace 38708. Next observer evidence: {'until': 256.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5118960481934269, 'next_transition': 38734}.
<a id="trace-38777"></a>
- 257.85s–257.85s (×1), actor 1, squad 0 (trace 38777): ReactToContact: cover and return fire. Knowledge: actor memory at 255.00s, trace 38620. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8567615310489919, 'next_transition': 38917}.
<a id="trace-38778"></a>
- 257.85s–257.85s (×1), actor 1, squad 0 (trace 38778): new contact inside 100 m. Knowledge: actor memory at 255.00s, trace 38620. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8567615310489919, 'next_transition': 38917}.
<a id="trace-38917"></a>
<a id="trace-38944"></a>
<a id="trace-38961"></a>
<a id="trace-38971"></a>
<a id="trace-39050"></a>
<a id="trace-39066"></a>
<a id="trace-39084"></a>
- 258.30s–261.30s (×7), actor 5, squad 0 (trace 38917): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 256.00s, trace 38708. Next observer evidence: {'until': 258.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2743067098162704, 'next_transition': 38944}.
<a id="trace-39092"></a>
- 261.60s–261.60s (×1), actor 1, squad 0 (trace 39092): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 260.00s, trace 38980. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38668418075071825, 'next_transition': 39104}.
<a id="trace-39094"></a>
- 261.60s–261.60s (×1), actor 1, squad 0 (trace 39094): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 260.00s, trace 38980. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38668418075071825, 'next_transition': 39104}.
<a id="trace-39104"></a>
<a id="trace-39122"></a>
<a id="trace-39140"></a>
<a id="trace-39173"></a>
- 261.80s–263.30s (×4), actor 5, squad 0 (trace 39104): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 38981. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7797323047267852, 'next_transition': 39122}.
<a id="trace-3305"></a>
- 263.45s–263.45s (×1), actor 5, squad 0 (events line 3305): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-39180"></a>
- 263.45s–263.45s (×1), actor 5, squad 0 (trace 39180): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 263.45s, trace 39180. Next observer evidence: {'until': 263.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39184}.
<a id="trace-39181"></a>
- 263.45s–263.45s (×1), actor 5, squad 0 (trace 39181): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 263.45s, trace 39181. Next observer evidence: {'until': 263.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39184}.
<a id="trace-39184"></a>
- 263.60s–263.60s (×1), actor 1, squad 0 (trace 39184): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 260.00s, trace 38980. Next observer evidence: {'until': 263.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39336}.
<a id="trace-39185"></a>
- 263.60s–263.60s (×1), actor 1, squad 0 (trace 39185): rearward bound: one stationary suppressing element. Knowledge: actor memory at 260.00s, trace 38980. Next observer evidence: {'until': 263.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39336}.
<a id="trace-39336"></a>
<a id="trace-39357"></a>
<a id="trace-39376"></a>
<a id="trace-39453"></a>
<a id="trace-39472"></a>
<a id="trace-39503"></a>
<a id="trace-39539"></a>
- 263.80s–266.80s (×7), actor 5, squad 0 (trace 39336): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 263.45s, trace 39181. Next observer evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39357}.
<a id="trace-39568"></a>
- 267.25s–267.25s (×1), actor 5, squad 0 (trace 39568): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 267.25s, trace 39568. Next observer evidence: None.
<a id="trace-39578"></a>
<a id="trace-39620"></a>
<a id="trace-39667"></a>
<a id="trace-39701"></a>
<a id="trace-39733"></a>
<a id="trace-39756"></a>
<a id="trace-39830"></a>
<a id="trace-39844"></a>
<a id="trace-39857"></a>
<a id="trace-39867"></a>
<a id="trace-39883"></a>
<a id="trace-39896"></a>
<a id="trace-39913"></a>
<a id="trace-39923"></a>
<a id="trace-39942"></a>
<a id="trace-39954"></a>
<a id="trace-40022"></a>
- 267.30s–275.30s (×17), actor 5, squad 0 (trace 39578): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 267.25s, trace 39568. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4732984047592125, 'next_transition': 39620}.
<a id="trace-40032"></a>
- 275.75s–275.75s (×1), actor 1, squad 0 (trace 40032): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 275.00s, trace 39962. Next observer evidence: {'until': 275.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.033144531977387405, 'next_transition': 40088}.
<a id="trace-40033"></a>
- 275.75s–275.75s (×1), actor 1, squad 0 (trace 40033): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 275.00s, trace 39962. Next observer evidence: {'until': 275.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.033144531977387405, 'next_transition': 40088}.
<a id="trace-40088"></a>
<a id="trace-40109"></a>
<a id="trace-40137"></a>
<a id="trace-40152"></a>
<a id="trace-40171"></a>
<a id="trace-40197"></a>
<a id="trace-40208"></a>
<a id="trace-40231"></a>
<a id="trace-40243"></a>
<a id="trace-40313"></a>
<a id="trace-40319"></a>
<a id="trace-40335"></a>
<a id="trace-40346"></a>
<a id="trace-40361"></a>
<a id="trace-40374"></a>
<a id="trace-40386"></a>
<a id="trace-40394"></a>
<a id="trace-40411"></a>
<a id="trace-40421"></a>
<a id="trace-40484"></a>
<a id="trace-40493"></a>
<a id="trace-40506"></a>
<a id="trace-40517"></a>
<a id="trace-40528"></a>
<a id="trace-40536"></a>
<a id="trace-40549"></a>
<a id="trace-40558"></a>
<a id="trace-40577"></a>
<a id="trace-40588"></a>
<a id="trace-40654"></a>
<a id="trace-40663"></a>
<a id="trace-40673"></a>
<a id="trace-40685"></a>
<a id="trace-40696"></a>
<a id="trace-40703"></a>
<a id="trace-40717"></a>
<a id="trace-40723"></a>
<a id="trace-40741"></a>
<a id="trace-40752"></a>
<a id="trace-40825"></a>
<a id="trace-40831"></a>
<a id="trace-40845"></a>
<a id="trace-40857"></a>
<a id="trace-40866"></a>
<a id="trace-40881"></a>
<a id="trace-40896"></a>
- 275.80s–298.30s (×46), actor 5, squad 0 (trace 40088): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 39963. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40109}.
<a id="trace-40900"></a>
- 298.60s–298.60s (×1), actor 1, squad 0 (trace 40900): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 295.00s, trace 40759. Next observer evidence: None.
<a id="trace-40904"></a>
- 298.65s–298.65s (×1), actor 1, squad 0 (trace 40904): MoveTactically. Knowledge: actor memory at 295.00s, trace 40759. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40908}.
<a id="trace-40905"></a>
- 298.65s–298.65s (×1), actor 1, squad 0 (trace 40905): traveling overwatch. Knowledge: actor memory at 295.00s, trace 40759. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40908}.
<a id="trace-40906"></a>
- 298.65s–298.65s (×1), actor 1, squad 0 (trace 40906): received platoon directive. Knowledge: actor memory at 295.00s, trace 40759. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40908}.
<a id="trace-40908"></a>
<a id="trace-40925"></a>
<a id="trace-40946"></a>
<a id="trace-41019"></a>
<a id="trace-41031"></a>
<a id="trace-41050"></a>
<a id="trace-41059"></a>
<a id="trace-41077"></a>
<a id="trace-41093"></a>
<a id="trace-41104"></a>
- 298.80s–303.30s (×10), actor 5, squad 0 (trace 40908): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 40760. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 40925}.
<a id="trace-3631"></a>
- 303.45s–303.45s (×1), actor 5, squad 0 (events line 3631): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-41110"></a>
- 303.45s–303.45s (×1), actor 5, squad 0 (trace 41110): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.088271 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 303.45s, trace 41110. Next observer evidence: {'until': 303.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41118}.
<a id="trace-41111"></a>
- 303.45s–303.45s (×1), actor 5, squad 0 (trace 41111): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.088271 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 303.45s, trace 41111. Next observer evidence: {'until': 303.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41118}.
<a id="trace-41118"></a>
<a id="trace-41135"></a>
<a id="trace-41148"></a>
- 303.80s–304.80s (×3), actor 5, squad 0 (trace 41118): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 303.45s, trace 41111. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41135}.
<a id="trace-41169"></a>
- 305.05s–305.05s (×1), actor 1, squad 0 (trace 41169): received platoon directive. Knowledge: actor memory at 305.00s, trace 41154. Next observer evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41215}.
<a id="trace-41215"></a>
<a id="trace-41227"></a>
<a id="trace-41249"></a>
<a id="trace-41256"></a>
<a id="trace-41267"></a>
<a id="trace-41277"></a>
<a id="trace-41291"></a>
<a id="trace-41305"></a>
<a id="trace-41321"></a>
<a id="trace-41331"></a>
<a id="trace-41397"></a>
<a id="trace-41405"></a>
<a id="trace-41426"></a>
<a id="trace-41433"></a>
- 305.30s–311.80s (×14), actor 5, squad 0 (trace 41215): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 41155. Next observer evidence: {'until': 305.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41227}.
<a id="trace-3701"></a>
- 312.25s–312.25s (×1), actor 5, squad 0 (events line 3701): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-41445"></a>
- 312.25s–312.25s (×1), actor 5, squad 0 (trace 41445): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.091211 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 312.25s, trace 41445. Next observer evidence: None.
<a id="trace-41446"></a>
- 312.25s–312.25s (×1), actor 5, squad 0 (trace 41446): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.091211 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 312.25s, trace 41446. Next observer evidence: None.
<a id="trace-41451"></a>
<a id="trace-41469"></a>
<a id="trace-41481"></a>
<a id="trace-41491"></a>
- 312.30s–313.80s (×4), actor 5, squad 0 (trace 41451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 312.25s, trace 41446. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41469}.
<a id="trace-41497"></a>
- 313.85s–313.85s (×1), actor 1, squad 0 (trace 41497): Withdraw to received rally. Knowledge: actor memory at 310.00s, trace 41335. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41509}.
<a id="trace-41498"></a>
- 313.85s–313.85s (×1), actor 1, squad 0 (trace 41498): rearward bound: one stationary suppressing element. Knowledge: actor memory at 310.00s, trace 41335. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41509}.
<a id="trace-41509"></a>
<a id="trace-41523"></a>
<a id="trace-41593"></a>
<a id="trace-41604"></a>
<a id="trace-41624"></a>
<a id="trace-41634"></a>
<a id="trace-41652"></a>
<a id="trace-41669"></a>
<a id="trace-41682"></a>
<a id="trace-41696"></a>
<a id="trace-41717"></a>
<a id="trace-41726"></a>
<a id="trace-41792"></a>
<a id="trace-41802"></a>
<a id="trace-41812"></a>
<a id="trace-41825"></a>
<a id="trace-41838"></a>
<a id="trace-41849"></a>
<a id="trace-41861"></a>
<a id="trace-41871"></a>
<a id="trace-41893"></a>
<a id="trace-41900"></a>
<a id="trace-41970"></a>
<a id="trace-41978"></a>
<a id="trace-41997"></a>
<a id="trace-42009"></a>
<a id="trace-42020"></a>
<a id="trace-42032"></a>
<a id="trace-42049"></a>
<a id="trace-42057"></a>
<a id="trace-42072"></a>
<a id="trace-42081"></a>
<a id="trace-42150"></a>
<a id="trace-42162"></a>
<a id="trace-42177"></a>
<a id="trace-42184"></a>
<a id="trace-42199"></a>
<a id="trace-42215"></a>
<a id="trace-42228"></a>
<a id="trace-42237"></a>
<a id="trace-42253"></a>
<a id="trace-42262"></a>
<a id="trace-42333"></a>
<a id="trace-42345"></a>
<a id="trace-42355"></a>
<a id="trace-42366"></a>
<a id="trace-42383"></a>
<a id="trace-42396"></a>
<a id="trace-42406"></a>
<a id="trace-42419"></a>
<a id="trace-42439"></a>
<a id="trace-42449"></a>
<a id="trace-42517"></a>
<a id="trace-42524"></a>
<a id="trace-42537"></a>
<a id="trace-42549"></a>
<a id="trace-42567"></a>
<a id="trace-42576"></a>
<a id="trace-42590"></a>
<a id="trace-42598"></a>
<a id="trace-42619"></a>
<a id="trace-42627"></a>
<a id="trace-42694"></a>
<a id="trace-42709"></a>
<a id="trace-42720"></a>
<a id="trace-42731"></a>
<a id="trace-42745"></a>
<a id="trace-42756"></a>
<a id="trace-42774"></a>
<a id="trace-42784"></a>
<a id="trace-42799"></a>
<a id="trace-42808"></a>
<a id="trace-42876"></a>
<a id="trace-42893"></a>
<a id="trace-42903"></a>
<a id="trace-42917"></a>
<a id="trace-42938"></a>
<a id="trace-42945"></a>
<a id="trace-42959"></a>
<a id="trace-42968"></a>
<a id="trace-42984"></a>
<a id="trace-42998"></a>
<a id="trace-43066"></a>
<a id="trace-43074"></a>
<a id="trace-43085"></a>
<a id="trace-43097"></a>
<a id="trace-43117"></a>
<a id="trace-43127"></a>
<a id="trace-43141"></a>
<a id="trace-43147"></a>
<a id="trace-43168"></a>
<a id="trace-43179"></a>
- 314.30s–359.80s (×92), actor 5, squad 0 (trace 41509): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 312.25s, trace 41446. Next observer evidence: {'until': 314.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41523}.

## Net delivery

300 matched order/radio deliveries; 484 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.396s; maximum 1.650s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4559: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4571: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4572: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4573: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4574: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4575: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4576: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4578: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4579: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4580: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4581: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4582: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 5184: estimate 3.94; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 5185: estimate 3.94; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 5186: estimate 3.94; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 5187: estimate 3.94; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5699: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5700: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 5702: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 5704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 5705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5706: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5707: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5708: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5709: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5710: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5711: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5712: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5713: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5714: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5715: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 5716: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 5717: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7220: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7221: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7224: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7225: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 7227: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 7229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 7230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7231: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7232: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7233: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7234: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7235: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7236: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7237: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7238: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7239: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7240: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 7241: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 7242: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 9747: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 9748: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 9749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 9750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 9751: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 9752: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 9753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 9754: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 9755: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 9756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 9757: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 9758: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 9759: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 9760: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 9761: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 9762: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 9763: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 9764: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 9765: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 9766: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 9767: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 9768: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 11499: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 11500: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 11501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 11502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 11503: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 11504: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 11505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 11506: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 11507: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 11508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 11509: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 11510: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 11511: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 11512: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 11513: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 11514: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 11515: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 11516: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 11517: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 11518: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 11519: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 11520: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 17125: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 17126: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 17127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 17128: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 17129: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 17130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 17131: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 17132: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 17133: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 17134: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 17135: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 17136: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 17137: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 17138: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 17139: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 17140: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 17141: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 17142: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 17143: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 17144: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 17145: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.05s leader 5, trace 19617: estimate 14.68; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 59.60s leader 5, trace 19812: estimate 14.62; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 59.60s leader 5, trace 19813: estimate 14.62; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 19852: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 19853: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 19854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 19855: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 19856: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 19857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 19858: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 19859: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 19860: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 19861: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 19862: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 19863: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 19864: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 19865: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 19866: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 19867: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 19868: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 19869: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 19870: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 19871: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 19872: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 20056: estimate 14.56; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.85s leader 5, trace 20057: estimate 14.56; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 23742: estimate 14.72; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 23743: estimate 14.72; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 63.35s leader 5, trace 23837: estimate 14.72; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 63.35s leader 5, trace 23838: estimate 14.72; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 64.55s leader 5, trace 23911: estimate 14.67; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 64.55s leader 5, trace 23912: estimate 14.67; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 23938: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 23939: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 23940: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 23941: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 23942: estimate 14.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 23943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 23944: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 23945: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 23946: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 23947: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 23948: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 23949: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 23950: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 23951: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 23952: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 23953: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 23954: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 23955: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 23956: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 23957: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 23958: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 24036: estimate 14.69; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 24037: estimate 14.69; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 24082: estimate 14.64; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 24083: estimate 14.64; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.15s leader 5, trace 24119: estimate 14.66; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.15s leader 5, trace 24120: estimate 14.66; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 24179: estimate 14.68; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 69.35s leader 5, trace 24180: estimate 14.68; 11 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 24460: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 24461: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 24462: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 24463: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 24464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 24465: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 24466: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 24467: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 24468: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 24469: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 24470: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 24471: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 24472: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 24473: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 24474: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 24475: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 24476: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 24477: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 24478: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.55s leader 5, trace 24544: estimate 14.69; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.55s leader 5, trace 24545: estimate 14.69; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 71.75s leader 5, trace 24601: estimate 14.72; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 71.75s leader 5, trace 24602: estimate 14.72; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 24642: estimate 14.67; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 24643: estimate 14.67; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 24838: estimate 14.68; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 24839: estimate 14.68; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 24840: estimate 14.68; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 24841: estimate 14.68; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 24887: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 24888: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 24889: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 24890: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 24891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 24892: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 24893: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 24894: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 24895: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 24896: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 24897: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 24898: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 24899: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 24900: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 24901: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 24902: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 24903: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 24904: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 24905: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.35s leader 5, trace 24964: estimate 14.64; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.35s leader 5, trace 24965: estimate 14.64; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 76.55s leader 5, trace 28581: estimate 14.59; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 76.55s leader 5, trace 28582: estimate 14.59; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 77.75s leader 5, trace 30435: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 77.75s leader 5, trace 30436: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.95s leader 5, trace 30499: estimate 14.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.95s leader 5, trace 30500: estimate 14.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 30546: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 30547: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 30548: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 30549: estimate 14.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 30550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 30551: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 30552: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 30553: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 30554: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 30555: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 30556: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 30557: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 30558: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 30559: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 30560: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 30561: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 30562: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 30563: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 30564: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 30565: estimate 14.67; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 30566: estimate 14.67; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.35s leader 5, trace 30671: estimate 14.69; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.35s leader 5, trace 30672: estimate 14.69; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.55s leader 5, trace 30722: estimate 14.64; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.55s leader 5, trace 30723: estimate 14.64; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 30773: estimate 14.59; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 83.75s leader 5, trace 30774: estimate 14.59; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.95s leader 5, trace 30820: estimate 14.74; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.95s leader 5, trace 30821: estimate 14.74; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 30822: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 30823: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 30824: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 30825: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 30826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 30827: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 30828: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 30829: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 30830: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 30831: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 30832: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 30833: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 30834: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 30835: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 30836: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 30837: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 30838: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 30839: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 86.15s leader 5, trace 30911: estimate 14.72; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 86.15s leader 5, trace 30912: estimate 14.72; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 30959: estimate 14.77; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 87.35s leader 5, trace 30960: estimate 14.77; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 30998: estimate 14.79; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 88.55s leader 5, trace 30999: estimate 14.79; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 89.75s leader 5, trace 31052: estimate 14.78; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 89.75s leader 5, trace 31053: estimate 14.78; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 31058: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 31059: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 31060: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 31061: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 31062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 31063: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 31064: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 31065: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 31066: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 31067: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 31068: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 31069: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 31070: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 31071: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 31072: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 31073: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 31074: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 31075: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 31150: estimate 14.73; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 31151: estimate 14.73; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 31185: estimate 14.67; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 92.15s leader 5, trace 31186: estimate 14.67; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.35s leader 5, trace 31245: estimate 14.62; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 93.35s leader 5, trace 31246: estimate 14.62; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.55s leader 5, trace 31289: estimate 14.68; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 94.55s leader 5, trace 31290: estimate 14.68; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 31312: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 31313: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 31314: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 31315: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 31316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 31317: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 31318: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 31319: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 31320: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 31321: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 31322: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 31323: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 31324: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 31325: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 31326: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 31327: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 31328: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 31329: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.75s leader 5, trace 31394: estimate 14.66; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.75s leader 5, trace 31395: estimate 14.66; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.95s leader 5, trace 31438: estimate 14.67; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 96.95s leader 5, trace 31439: estimate 14.67; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 5, trace 31467: estimate 14.76; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 98.15s leader 5, trace 31468: estimate 14.76; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 99.35s leader 5, trace 31517: estimate 14.72; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 99.35s leader 5, trace 31518: estimate 14.72; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 31539: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 31540: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 31541: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 31542: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 31543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 31544: estimate 14.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 31545: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 31546: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 31547: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 31548: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 31549: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 31550: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 31551: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 31552: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 31553: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 31554: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 31555: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 31556: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 31617: estimate 14.68; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 31618: estimate 14.68; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.75s leader 5, trace 31671: estimate 14.63; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 101.75s leader 5, trace 31672: estimate 14.63; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.05s leader 5, trace 31677: estimate 14.62; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.05s leader 5, trace 31678: estimate 14.62; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 32089: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 32090: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 32091: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 32092: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 32093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 32094: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 32095: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 32096: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 32097: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 32098: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 32099: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 32100: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 32101: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 32102: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 32103: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 32104: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 32105: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 32106: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 32349: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 32350: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 32351: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 32352: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 32353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 32354: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 32355: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 32356: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 32357: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 32358: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 32359: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 32360: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 32361: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 32362: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 32363: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 32364: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 32365: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 32366: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 32748: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 32749: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 32750: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 32751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 32752: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 32753: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 32754: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 32755: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 32756: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 32757: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 32758: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 32759: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 32760: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 32761: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 32762: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 32763: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 32764: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 33168: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 33169: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 33170: estimate 14.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 33171: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 33172: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 33173: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 33174: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 33175: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 33176: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 33177: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 33178: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 33179: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 33180: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 33181: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 33182: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 33183: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 33383: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 33384: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 33385: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 33386: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 33387: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 33388: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 33389: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 33390: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 33391: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 33392: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 33393: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 33394: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 33395: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 33396: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 33397: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 33398: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 33643: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 33644: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 33645: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 33646: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 33647: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 33648: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 33649: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 33650: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 33651: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 33652: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 33653: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 33654: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 33655: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 33656: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 33657: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 33658: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 33837: estimate 14.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 33838: estimate 14.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 33839: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 33840: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 33841: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 33842: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 33843: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 33844: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 33845: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 33846: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 33847: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 33848: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 33849: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 33850: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 33851: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 33852: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 34004: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 34005: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 34006: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 34007: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 34008: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 34009: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 34010: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 34011: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 34012: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 34013: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 34014: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 34015: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 34016: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 34017: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 34018: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 34019: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 34197: estimate 13.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 34198: estimate 14.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 34199: estimate 14.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 34200: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 34201: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 34202: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 34203: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 34204: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 34205: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 34206: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 34207: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 34208: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 34209: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 34210: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 34211: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 34212: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 34375: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 34376: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 34377: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 34378: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 34379: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 34380: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 34381: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 34382: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 34383: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 34384: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 34385: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 34386: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 34387: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 34388: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 34389: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 34390: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 34662: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 34663: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 34664: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 34665: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 34666: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 34667: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 34668: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 34669: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 34670: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 34671: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 34672: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 34673: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 34674: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 34675: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 34676: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 34878: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 34879: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 34880: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 34881: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 34882: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 34883: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 34884: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 34885: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 34886: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 34887: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 34888: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 34889: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 34890: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 34891: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 34892: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 162.05s leader 5, trace 34979: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 35049: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 35050: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 35051: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 35052: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 35053: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 35054: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 35055: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 35056: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 35057: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 35058: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 35059: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 35060: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 35061: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 35062: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 35063: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 35207: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 35208: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 35209: estimate 13.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 35210: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 35211: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 35212: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 35213: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 35214: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 35215: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 35216: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 35217: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 35218: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 35219: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 35220: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 35221: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 35379: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 35380: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 35381: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 35382: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 35383: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 35384: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 35385: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 35386: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 35387: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 35388: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 35389: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 35390: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 35391: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 35392: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 35393: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 35555: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 35556: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 35557: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 35558: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 35559: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 35560: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 35561: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 35562: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 35563: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 35564: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 35565: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 35566: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 35567: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 35568: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 35569: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 35726: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 35727: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 35728: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 35729: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 35730: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 35731: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 35732: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 35733: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 35734: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 35735: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 35736: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 35737: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 35738: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 35739: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 35740: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 35904: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 35905: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 35906: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 35907: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 35908: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 35909: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 35910: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 35911: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 35912: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 35913: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 35914: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 35915: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 35916: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 35917: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 35918: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 36086: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 36087: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 36088: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 36089: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 36090: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 36091: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 36092: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 36093: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 36094: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 36095: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 36096: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 36097: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 36098: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 36099: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 36100: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 36277: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 36278: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 36279: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 36280: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 36281: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 36282: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 36283: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 36284: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 36285: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 36286: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 36287: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 36288: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 36289: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 36290: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 36291: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 36457: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 36458: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 36459: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 36460: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 36461: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 36462: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 36463: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 36464: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 36465: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 36466: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 36467: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 36468: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 36469: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 36470: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 36471: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 36630: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 36631: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 36632: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 36633: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 36634: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 36635: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 36636: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 36637: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 36638: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 36639: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 36640: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 36641: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 36642: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 36643: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 36644: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 36813: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 36814: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 36815: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 36816: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 36817: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 36818: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 36819: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 36820: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 36821: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 36822: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 36823: estimate 1.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 36824: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 36825: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 36826: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 36827: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 37005: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 37006: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 37007: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 37008: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 37009: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 37010: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 37011: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 37012: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 37013: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 37014: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 37015: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 37016: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 37017: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 37018: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 37019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.05s leader 5, trace 37104: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 37186: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 37187: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 37188: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 37189: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 37190: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 37191: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 37192: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 37193: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 37194: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 37195: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 37196: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 37197: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 37198: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 37199: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 37200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 37368: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 37369: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 37370: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 37371: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 37372: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 37373: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 37374: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 37375: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 37376: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 37377: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 37378: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 37379: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 37380: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 37381: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 37382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.80s leader 5, trace 37446: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.80s leader 5, trace 37447: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 37651: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 37652: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 37653: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 37654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 37655: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 37656: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 37657: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 37658: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 37659: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 37660: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 37661: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 37662: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 37663: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 37664: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 37665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 37863: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 37864: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 37865: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 37866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 37867: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 37868: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 37869: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 37870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 37871: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 37872: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 37873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 37874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 37875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 37876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 37877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 38140: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 38141: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 38142: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 38143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 38144: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 38145: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 38146: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 38147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 38148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 38149: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 38150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 38151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 38152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 38153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 38154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 38404: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 38405: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 38406: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 38407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 38408: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 38409: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 38410: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 38411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 38412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 38413: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 38414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 38415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 38416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 38417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 38418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 38620: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 38621: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 38622: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 38623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 38624: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 38625: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 38626: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 38627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 38628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 38629: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 38630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 38631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 38632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 38633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 38634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 256.00s leader 5, trace 38707: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 256.00s leader 5, trace 38708: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 38980: estimate 1.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 38981: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 38982: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 38983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 38984: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 38985: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 38986: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 38987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 38988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 38989: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 38990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 38991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 38992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 38993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 38994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 263.45s leader 5, trace 39180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 263.45s leader 5, trace 39181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 39387: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 39388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 39389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 39390: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 39391: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 39392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 39393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 39394: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 39395: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 39396: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 39397: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 39398: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 39399: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 39400: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 39401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 267.25s leader 5, trace 39568: estimate 12.75; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 39766: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 39767: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 39768: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 39769: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 39770: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 39771: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 39772: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 39773: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 39774: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 39775: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 39776: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 39777: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 39778: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 39779: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 39780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 39962: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 39963: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 39964: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 39965: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 39966: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 39967: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 39968: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 39969: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 39970: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 39971: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 39972: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 39973: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 39974: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 39975: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 39976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 40249: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 40250: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 40251: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 40252: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 40253: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 40254: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 40255: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 40256: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 40257: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 40258: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 40259: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 40260: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 40261: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 40262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 40424: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 40425: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 40426: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 40427: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 40428: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 40429: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 40430: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 40431: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 40432: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 40433: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 40434: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 40435: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 40436: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 40437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 40594: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 40595: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 40596: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 40597: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 40598: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 40599: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 40600: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 40601: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 40602: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 40603: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 40604: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 40605: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 40606: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 40607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 40759: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 40760: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 40761: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 40762: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 40763: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 40764: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 40765: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 40766: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 40767: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 40768: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 40769: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 40770: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 40771: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 40772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 40952: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 40953: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 40954: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 40955: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 40956: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 40957: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 40958: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 40959: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 40960: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 40961: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 40962: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 40963: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 40964: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 40965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 303.45s leader 5, trace 41110: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 303.45s leader 5, trace 41111: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 41154: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 41155: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 41156: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 41157: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 41158: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 41159: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 41160: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 41161: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 41162: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 41163: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 41164: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 41165: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 41166: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 41167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 41335: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 41336: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 41337: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 41338: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 41339: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 41340: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 41341: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 41342: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 41343: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 41344: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 41345: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 41346: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 41347: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 41348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.25s leader 5, trace 41445: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.25s leader 5, trace 41446: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 41528: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 41529: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 41530: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 41531: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 41532: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 41533: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 41534: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 41535: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 41536: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 41537: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 41538: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 41539: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 41540: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 41541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 41730: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 41731: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 41732: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 41733: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 41734: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 41735: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 41736: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 41737: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 41738: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 41739: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 41740: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 41741: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 41742: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 41743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 41905: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 41906: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 41907: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 41908: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 41909: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 41910: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 41911: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 41912: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 41913: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 41914: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 41915: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 41916: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 41917: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 41918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 42087: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 42088: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 42089: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 42090: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 42091: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 42092: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 42093: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 42094: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 42095: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 42096: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 42097: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 42098: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 42099: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 42100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 42273: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 42274: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 42275: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 42276: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 42277: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 42278: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 42279: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 42280: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 42281: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 42282: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 42283: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 42284: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 42285: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 42286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 42457: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 42458: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 42459: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 42460: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 42461: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 42462: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 42463: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 42464: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 42465: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 42466: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 42467: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 42468: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 42469: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 42470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 42630: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 42631: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 42632: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 42633: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 42634: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 42635: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 42636: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 42637: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 42638: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 42639: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 42640: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 42641: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 42642: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 42643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 42816: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 42817: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 42818: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 42819: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 42820: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 42821: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 42822: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 42823: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 42824: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 42825: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 42826: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 42827: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 42828: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 42829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 43003: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 43004: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 43005: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 43006: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 43007: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 43008: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 43009: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 43010: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 43011: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 43012: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 43013: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 43014: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 43015: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 43016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 43185: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 43186: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 43187: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 43188: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 43189: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 43190: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 43191: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 43192: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 43193: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 43194: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 43195: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 43196: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 43197: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 43198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Dane killed in action
- 1: Ash incapacitated
- 1: Bren incapacitated
- 1: Soren incapacitated
- 1: Ellis killed in action
- 1: Tern killed in action
- 1: Cole killed in action
- 1: Voss killed in action
- 1: Reed incapacitated

## Outcome attribution

- 102.05s, evidence 2048: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11208592750464483, 'next_transition': 31692}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 102.05s, evidence 31677: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.273583 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11208592750464483, 'next_transition': 31692}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 102.05s, evidence 31678: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.273583 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11208592750464483, 'next_transition': 31692}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 162.05s, evidence 2466: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34990}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 222.05s, evidence 2835: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37111}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 312.25s, evidence 3701: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 312.25s, evidence 41445: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.091211 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 312.25s, evidence 41446: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.091211 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
