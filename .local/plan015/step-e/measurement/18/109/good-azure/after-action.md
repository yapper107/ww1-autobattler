# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/18/109/good-azure/battle-109-1789674055652208560`

## Battle summary

**Ember** · 360 s · 479 shots.

### Turning points

- 15.2s, squad 4: contact (events line 211). First recorded contact.
- 23.1s, squad 1: assault ([trace 4244](#trace-4244)). 25.8s, squad 1: took cover and returned fire.
- 24.8s, squad 1: help call ([trace 4583](#trace-4583)). 26.8s, squad 0: answered a neighbour with support by fire.
- 26.8s, squad 0: help answer ([trace 7908](#trace-7908)). 32.4s, squad 0: prepared a base of fire.
- 32.2s, squad 0: help call ([trace 10247](#trace-10247)). 34.2s, squad 1: answered a neighbour with support by fire.
- 34.2s, squad 1: help answer ([trace 12258](#trace-12258)). 40.5s, squad 1: answered a neighbour with support by fire.
- 39.4s, squad 0: help call ([trace 13557](#trace-13557)). 40.5s, squad 1: answered a neighbour with support by fire.
- 39.9s, squad 1: help call ([trace 13574](#trace-13574)). No completion observed before termination.
- 40.0s, squad 0: withdrawal ([trace 13603](#trace-13603)). No completion observed before termination.
- 40.5s, squad 1: help answer ([trace 13852](#trace-13852)). 46.9s, squad 1: answered a neighbour with support by fire.
- 4 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 4 further drill types; no completed objective recorded; 19 shots, 7/8 lost.
- **1** — FightHere; chose answered a neighbour with support by fire, Withdraw to received rally and 3 further drill types; no completed objective recorded; 12 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 386 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 62 shots, 0/4 lost.

### Decisions and attribution

At 19.8s, squad 1 chose FightHere: nearest known group ([trace 3643](#trace-3643)), followed by 4 shots and 1 own casualties; estimate 10.0 against 9 distinct squad-reported contacts; At 23.1s, squad 1 chose prepared a base of fire ([trace 3902](#trace-3902)), followed by 1 shots and 1 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 25.8s, squad 1 chose took cover and returned fire ([trace 7721](#trace-7721)), followed by 2 shots and 0 own casualties; estimate 15.2 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 829](#trace-829)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 831](#trace-831)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011192330870361, 'next_transition': 1004}.

### Communication

136 matched deliveries (mean 0.56s, max 2.80s); 497 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.20s, squad 4, contact, evidence events line 211: First recorded contact; .
- 23.05s, squad 1, assault, evidence 4244: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 25.8s, squad 1: took cover and returned fire.
- 24.80s, squad 1, help call, evidence 4583: NeedSupport; 26.8s, squad 0: answered a neighbour with support by fire.
- 26.75s, squad 0, help answer, evidence 7908: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 32.4s, squad 0: prepared a base of fire.
- 32.15s, squad 0, help call, evidence 10247: NeedSupport; 34.2s, squad 1: answered a neighbour with support by fire.
- 34.15s, squad 1, help answer, evidence 12258: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 40.5s, squad 1: answered a neighbour with support by fire.
- 39.35s, squad 0, help call, evidence 13557: NeedSupport; 40.5s, squad 1: answered a neighbour with support by fire.
- 39.85s, squad 1, help call, evidence 13574: NeedSupport; No completion observed before termination.
- 40.00s, squad 0, withdrawal, evidence 13603: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 40.55s, squad 1, help answer, evidence 13852: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 46.9s, squad 1: answered a neighbour with support by fire.
- 45.70s, squad 0, help call, evidence 14102: NeedSupport; 46.9s, squad 1: answered a neighbour with support by fire.
- 46.90s, squad 1, help answer, evidence 14156: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 73.2s, squad 1: Withdraw to received rally.
- 73.25s, squad 1, withdrawal, evidence 15356: Withdraw to received rally; No completion observed before termination.
- 100.65s, squad 0, help call, evidence 16380: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.836553451687371, 'next_transition': 701}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.836553451687371, 'next_transition': 701}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.836553451687371, 'next_transition': 701}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544319269111105, 'next_transition': 104}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544319269111105, 'next_transition': 104}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544319269111105, 'next_transition': 104}.
<a id="trace-701"></a>
<a id="trace-703"></a>
<a id="trace-729"></a>
<a id="trace-731"></a>
<a id="trace-770"></a>
<a id="trace-772"></a>
<a id="trace-793"></a>
<a id="trace-795"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 701): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2300063829237942, 'next_transition': 729}.
<a id="trace-103"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 103): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011192330870361, 'next_transition': 1004}.
<a id="trace-829"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 829): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 829. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
<a id="trace-830"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 830): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 830. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150041186673635, 'next_transition': 848}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011192330870361, 'next_transition': 1004}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.011192330870361, 'next_transition': 1004}.
<a id="trace-848"></a>
<a id="trace-850"></a>
<a id="trace-881"></a>
<a id="trace-883"></a>
<a id="trace-962"></a>
<a id="trace-964"></a>
<a id="trace-993"></a>
<a id="trace-995"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 848): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149922781749492, 'next_transition': 881}.
<a id="trace-997"></a>
<a id="trace-1363"></a>
<a id="trace-1561"></a>
<a id="trace-1563"></a>
<a id="trace-1608"></a>
<a id="trace-1610"></a>
<a id="trace-1706"></a>
<a id="trace-1708"></a>
<a id="trace-1768"></a>
<a id="trace-1770"></a>
<a id="trace-1805"></a>
<a id="trace-1807"></a>
<a id="trace-1834"></a>
<a id="trace-1836"></a>
<a id="trace-1930"></a>
<a id="trace-1932"></a>
<a id="trace-1954"></a>
<a id="trace-1956"></a>
<a id="trace-1980"></a>
<a id="trace-1982"></a>
<a id="trace-2012"></a>
<a id="trace-2014"></a>
<a id="trace-2066"></a>
<a id="trace-2068"></a>
<a id="trace-2102"></a>
<a id="trace-2104"></a>
<a id="trace-2121"></a>
<a id="trace-2123"></a>
<a id="trace-2175"></a>
<a id="trace-2177"></a>
<a id="trace-2263"></a>
<a id="trace-2265"></a>
<a id="trace-2291"></a>
<a id="trace-2293"></a>
<a id="trace-2700"></a>
<a id="trace-2702"></a>
<a id="trace-2730"></a>
<a id="trace-2732"></a>
<a id="trace-2777"></a>
<a id="trace-2779"></a>
<a id="trace-3189"></a>
<a id="trace-3191"></a>
<a id="trace-3565"></a>
<a id="trace-3567"></a>
<a id="trace-3635"></a>
<a id="trace-3637"></a>
<a id="trace-3754"></a>
<a id="trace-3756"></a>
<a id="trace-3786"></a>
<a id="trace-3788"></a>
<a id="trace-3821"></a>
<a id="trace-3823"></a>
<a id="trace-3839"></a>
<a id="trace-3841"></a>
<a id="trace-3868"></a>
<a id="trace-3870"></a>
<a id="trace-3891"></a>
<a id="trace-3893"></a>
<a id="trace-4503"></a>
<a id="trace-4505"></a>
<a id="trace-4528"></a>
<a id="trace-4530"></a>
<a id="trace-4574"></a>
<a id="trace-4576"></a>
<a id="trace-7694"></a>
<a id="trace-7696"></a>
<a id="trace-7712"></a>
<a id="trace-7714"></a>
<a id="trace-7875"></a>
<a id="trace-7877"></a>
<a id="trace-7905"></a>
<a id="trace-7907"></a>
<a id="trace-9772"></a>
<a id="trace-9774"></a>
<a id="trace-9807"></a>
<a id="trace-9809"></a>
<a id="trace-9840"></a>
<a id="trace-9842"></a>
<a id="trace-9893"></a>
<a id="trace-9895"></a>
<a id="trace-9921"></a>
<a id="trace-9923"></a>
<a id="trace-10017"></a>
<a id="trace-10019"></a>
<a id="trace-10044"></a>
<a id="trace-10046"></a>
<a id="trace-10212"></a>
<a id="trace-10214"></a>
<a id="trace-10230"></a>
<a id="trace-10232"></a>
<a id="trace-10267"></a>
<a id="trace-10269"></a>
<a id="trace-12172"></a>
<a id="trace-12174"></a>
<a id="trace-12189"></a>
<a id="trace-12191"></a>
<a id="trace-12226"></a>
<a id="trace-12228"></a>
<a id="trace-13256"></a>
<a id="trace-13258"></a>
<a id="trace-13265"></a>
<a id="trace-13267"></a>
<a id="trace-13355"></a>
<a id="trace-13357"></a>
<a id="trace-13374"></a>
<a id="trace-13376"></a>
<a id="trace-13440"></a>
<a id="trace-13442"></a>
<a id="trace-13465"></a>
<a id="trace-13467"></a>
<a id="trace-13482"></a>
<a id="trace-13484"></a>
<a id="trace-13504"></a>
<a id="trace-13506"></a>
<a id="trace-13524"></a>
<a id="trace-13526"></a>
<a id="trace-13553"></a>
<a id="trace-13555"></a>
<a id="trace-13570"></a>
<a id="trace-13572"></a>
<a id="trace-13847"></a>
<a id="trace-13849"></a>
<a id="trace-13868"></a>
<a id="trace-13870"></a>
<a id="trace-13891"></a>
<a id="trace-13893"></a>
<a id="trace-13909"></a>
<a id="trace-13911"></a>
<a id="trace-13950"></a>
<a id="trace-13952"></a>
<a id="trace-13970"></a>
<a id="trace-13972"></a>
<a id="trace-13983"></a>
<a id="trace-13985"></a>
<a id="trace-14002"></a>
<a id="trace-14004"></a>
<a id="trace-14016"></a>
<a id="trace-14018"></a>
<a id="trace-14096"></a>
<a id="trace-14098"></a>
<a id="trace-14113"></a>
<a id="trace-14115"></a>
<a id="trace-14131"></a>
<a id="trace-14133"></a>
<a id="trace-14146"></a>
<a id="trace-14148"></a>
<a id="trace-14174"></a>
<a id="trace-14176"></a>
<a id="trace-14189"></a>
<a id="trace-14191"></a>
<a id="trace-14210"></a>
<a id="trace-14212"></a>
<a id="trace-14335"></a>
<a id="trace-14337"></a>
<a id="trace-14351"></a>
<a id="trace-14353"></a>
<a id="trace-14369"></a>
<a id="trace-14371"></a>
<a id="trace-14385"></a>
<a id="trace-14387"></a>
<a id="trace-14407"></a>
<a id="trace-14409"></a>
<a id="trace-14441"></a>
<a id="trace-14443"></a>
<a id="trace-14455"></a>
<a id="trace-14457"></a>
<a id="trace-14486"></a>
<a id="trace-14488"></a>
<a id="trace-14564"></a>
<a id="trace-14566"></a>
<a id="trace-14576"></a>
<a id="trace-14578"></a>
<a id="trace-14597"></a>
<a id="trace-14599"></a>
<a id="trace-14635"></a>
<a id="trace-14637"></a>
<a id="trace-14649"></a>
<a id="trace-14651"></a>
<a id="trace-14666"></a>
<a id="trace-14668"></a>
<a id="trace-14682"></a>
<a id="trace-14684"></a>
<a id="trace-14700"></a>
<a id="trace-14702"></a>
<a id="trace-14770"></a>
<a id="trace-14772"></a>
<a id="trace-14847"></a>
<a id="trace-14849"></a>
<a id="trace-14891"></a>
<a id="trace-14893"></a>
<a id="trace-14903"></a>
<a id="trace-14905"></a>
<a id="trace-14924"></a>
<a id="trace-14926"></a>
<a id="trace-14948"></a>
<a id="trace-14950"></a>
<a id="trace-14967"></a>
<a id="trace-14969"></a>
<a id="trace-14977"></a>
<a id="trace-14979"></a>
<a id="trace-15079"></a>
<a id="trace-15081"></a>
<a id="trace-15090"></a>
<a id="trace-15092"></a>
<a id="trace-15107"></a>
<a id="trace-15109"></a>
<a id="trace-15123"></a>
<a id="trace-15125"></a>
<a id="trace-15149"></a>
<a id="trace-15151"></a>
<a id="trace-15175"></a>
<a id="trace-15177"></a>
<a id="trace-15190"></a>
<a id="trace-15192"></a>
<a id="trace-15201"></a>
<a id="trace-15203"></a>
<a id="trace-15298"></a>
<a id="trace-15300"></a>
<a id="trace-15309"></a>
<a id="trace-15311"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15338"></a>
<a id="trace-15340"></a>
<a id="trace-15353"></a>
<a id="trace-15355"></a>
<a id="trace-15424"></a>
<a id="trace-15426"></a>
<a id="trace-15438"></a>
<a id="trace-15440"></a>
<a id="trace-15452"></a>
<a id="trace-15454"></a>
<a id="trace-15520"></a>
<a id="trace-15522"></a>
<a id="trace-15535"></a>
<a id="trace-15537"></a>
<a id="trace-15551"></a>
<a id="trace-15553"></a>
<a id="trace-15593"></a>
<a id="trace-15595"></a>
<a id="trace-15607"></a>
<a id="trace-15609"></a>
<a id="trace-15633"></a>
<a id="trace-15635"></a>
<a id="trace-15644"></a>
<a id="trace-15646"></a>
<a id="trace-15714"></a>
<a id="trace-15716"></a>
<a id="trace-15728"></a>
<a id="trace-15730"></a>
<a id="trace-15755"></a>
<a id="trace-15757"></a>
<a id="trace-15771"></a>
<a id="trace-15773"></a>
<a id="trace-15786"></a>
<a id="trace-15788"></a>
<a id="trace-15803"></a>
<a id="trace-15805"></a>
<a id="trace-15817"></a>
<a id="trace-15819"></a>
<a id="trace-15915"></a>
<a id="trace-15917"></a>
<a id="trace-15945"></a>
<a id="trace-15947"></a>
<a id="trace-15970"></a>
<a id="trace-15972"></a>
<a id="trace-15982"></a>
<a id="trace-15984"></a>
<a id="trace-15993"></a>
<a id="trace-15995"></a>
<a id="trace-15998"></a>
<a id="trace-16000"></a>
<a id="trace-16008"></a>
<a id="trace-16010"></a>
<a id="trace-16013"></a>
<a id="trace-16015"></a>
<a id="trace-16079"></a>
<a id="trace-16081"></a>
<a id="trace-16101"></a>
<a id="trace-16103"></a>
<a id="trace-16136"></a>
<a id="trace-16138"></a>
<a id="trace-16144"></a>
<a id="trace-16146"></a>
<a id="trace-16154"></a>
<a id="trace-16156"></a>
<a id="trace-16159"></a>
<a id="trace-16161"></a>
<a id="trace-16245"></a>
<a id="trace-16247"></a>
<a id="trace-16254"></a>
<a id="trace-16256"></a>
<a id="trace-16266"></a>
<a id="trace-16268"></a>
<a id="trace-16274"></a>
<a id="trace-16276"></a>
<a id="trace-16288"></a>
<a id="trace-16290"></a>
<a id="trace-16302"></a>
<a id="trace-16304"></a>
<a id="trace-16375"></a>
<a id="trace-16377"></a>
<a id="trace-16388"></a>
<a id="trace-16390"></a>
<a id="trace-16401"></a>
<a id="trace-16403"></a>
<a id="trace-16411"></a>
<a id="trace-16413"></a>
<a id="trace-16420"></a>
<a id="trace-16422"></a>
<a id="trace-16431"></a>
<a id="trace-16433"></a>
<a id="trace-16445"></a>
<a id="trace-16447"></a>
<a id="trace-16451"></a>
<a id="trace-16453"></a>
<a id="trace-16457"></a>
<a id="trace-16459"></a>
<a id="trace-16462"></a>
<a id="trace-16464"></a>
<a id="trace-16534"></a>
<a id="trace-16536"></a>
<a id="trace-16548"></a>
<a id="trace-16550"></a>
<a id="trace-16556"></a>
<a id="trace-16558"></a>
<a id="trace-16578"></a>
<a id="trace-16580"></a>
<a id="trace-16591"></a>
<a id="trace-16593"></a>
<a id="trace-16597"></a>
<a id="trace-16599"></a>
<a id="trace-16612"></a>
<a id="trace-16614"></a>
<a id="trace-16619"></a>
<a id="trace-16621"></a>
<a id="trace-16690"></a>
<a id="trace-16692"></a>
<a id="trace-16695"></a>
<a id="trace-16697"></a>
<a id="trace-16707"></a>
<a id="trace-16709"></a>
<a id="trace-16714"></a>
<a id="trace-16716"></a>
<a id="trace-16727"></a>
<a id="trace-16729"></a>
<a id="trace-16735"></a>
<a id="trace-16737"></a>
<a id="trace-16751"></a>
<a id="trace-16753"></a>
<a id="trace-16758"></a>
<a id="trace-16760"></a>
<a id="trace-16768"></a>
<a id="trace-16770"></a>
<a id="trace-16842"></a>
<a id="trace-16844"></a>
<a id="trace-16848"></a>
<a id="trace-16850"></a>
<a id="trace-16865"></a>
<a id="trace-16867"></a>
<a id="trace-16873"></a>
<a id="trace-16875"></a>
<a id="trace-16884"></a>
<a id="trace-16886"></a>
<a id="trace-16908"></a>
<a id="trace-16910"></a>
<a id="trace-16919"></a>
<a id="trace-16921"></a>
<a id="trace-16927"></a>
<a id="trace-16929"></a>
<a id="trace-16996"></a>
<a id="trace-16998"></a>
<a id="trace-17018"></a>
<a id="trace-17020"></a>
<a id="trace-17058"></a>
<a id="trace-17060"></a>
<a id="trace-17069"></a>
<a id="trace-17071"></a>
<a id="trace-17079"></a>
<a id="trace-17081"></a>
<a id="trace-17171"></a>
<a id="trace-17173"></a>
<a id="trace-17182"></a>
<a id="trace-17184"></a>
<a id="trace-17192"></a>
<a id="trace-17194"></a>
<a id="trace-17206"></a>
<a id="trace-17208"></a>
<a id="trace-17216"></a>
<a id="trace-17218"></a>
<a id="trace-17239"></a>
<a id="trace-17241"></a>
<a id="trace-17311"></a>
<a id="trace-17313"></a>
<a id="trace-17315"></a>
<a id="trace-17317"></a>
<a id="trace-17330"></a>
<a id="trace-17332"></a>
<a id="trace-17335"></a>
<a id="trace-17337"></a>
<a id="trace-17347"></a>
<a id="trace-17349"></a>
<a id="trace-17357"></a>
<a id="trace-17359"></a>
<a id="trace-17372"></a>
<a id="trace-17374"></a>
<a id="trace-17377"></a>
<a id="trace-17379"></a>
<a id="trace-17390"></a>
<a id="trace-17392"></a>
<a id="trace-17395"></a>
<a id="trace-17397"></a>
<a id="trace-17466"></a>
<a id="trace-17468"></a>
<a id="trace-17475"></a>
<a id="trace-17477"></a>
<a id="trace-17494"></a>
<a id="trace-17496"></a>
<a id="trace-17498"></a>
<a id="trace-17500"></a>
<a id="trace-17515"></a>
<a id="trace-17517"></a>
<a id="trace-17536"></a>
<a id="trace-17538"></a>
<a id="trace-17542"></a>
<a id="trace-17544"></a>
<a id="trace-17555"></a>
<a id="trace-17557"></a>
<a id="trace-17559"></a>
<a id="trace-17561"></a>
<a id="trace-17627"></a>
<a id="trace-17629"></a>
<a id="trace-17633"></a>
<a id="trace-17635"></a>
<a id="trace-17652"></a>
<a id="trace-17654"></a>
<a id="trace-17671"></a>
<a id="trace-17673"></a>
<a id="trace-17679"></a>
<a id="trace-17681"></a>
<a id="trace-17697"></a>
<a id="trace-17699"></a>
<a id="trace-17708"></a>
<a id="trace-17710"></a>
<a id="trace-17719"></a>
<a id="trace-17721"></a>
<a id="trace-17723"></a>
<a id="trace-17725"></a>
<a id="trace-17808"></a>
<a id="trace-17810"></a>
<a id="trace-17814"></a>
<a id="trace-17816"></a>
<a id="trace-17827"></a>
<a id="trace-17829"></a>
<a id="trace-17835"></a>
<a id="trace-17837"></a>
<a id="trace-17851"></a>
<a id="trace-17853"></a>
<a id="trace-17859"></a>
<a id="trace-17861"></a>
<a id="trace-17874"></a>
<a id="trace-17876"></a>
<a id="trace-17883"></a>
<a id="trace-17885"></a>
<a id="trace-17955"></a>
<a id="trace-17957"></a>
<a id="trace-17959"></a>
<a id="trace-17961"></a>
<a id="trace-17978"></a>
<a id="trace-17980"></a>
<a id="trace-17998"></a>
<a id="trace-18000"></a>
<a id="trace-18016"></a>
<a id="trace-18018"></a>
<a id="trace-18028"></a>
<a id="trace-18030"></a>
<a id="trace-18102"></a>
<a id="trace-18104"></a>
<a id="trace-18129"></a>
<a id="trace-18131"></a>
<a id="trace-18139"></a>
<a id="trace-18141"></a>
<a id="trace-18150"></a>
<a id="trace-18152"></a>
<a id="trace-18159"></a>
<a id="trace-18161"></a>
<a id="trace-18173"></a>
<a id="trace-18175"></a>
<a id="trace-18179"></a>
<a id="trace-18181"></a>
<a id="trace-18260"></a>
<a id="trace-18262"></a>
<a id="trace-18266"></a>
<a id="trace-18268"></a>
<a id="trace-18288"></a>
<a id="trace-18290"></a>
<a id="trace-18332"></a>
<a id="trace-18334"></a>
<a id="trace-18337"></a>
<a id="trace-18339"></a>
<a id="trace-18349"></a>
<a id="trace-18351"></a>
<a id="trace-18354"></a>
<a id="trace-18356"></a>
<a id="trace-18421"></a>
<a id="trace-18423"></a>
<a id="trace-18442"></a>
<a id="trace-18444"></a>
<a id="trace-18457"></a>
<a id="trace-18459"></a>
<a id="trace-18465"></a>
<a id="trace-18467"></a>
<a id="trace-18482"></a>
<a id="trace-18484"></a>
<a id="trace-18508"></a>
<a id="trace-18510"></a>
<a id="trace-18512"></a>
<a id="trace-18514"></a>
<a id="trace-18583"></a>
<a id="trace-18585"></a>
<a id="trace-18602"></a>
<a id="trace-18604"></a>
<a id="trace-18609"></a>
<a id="trace-18611"></a>
<a id="trace-18628"></a>
<a id="trace-18630"></a>
<a id="trace-18643"></a>
<a id="trace-18645"></a>
<a id="trace-18650"></a>
<a id="trace-18652"></a>
<a id="trace-18661"></a>
<a id="trace-18663"></a>
<a id="trace-18667"></a>
<a id="trace-18669"></a>
<a id="trace-18741"></a>
<a id="trace-18743"></a>
<a id="trace-18746"></a>
<a id="trace-18748"></a>
<a id="trace-18765"></a>
<a id="trace-18767"></a>
<a id="trace-18775"></a>
<a id="trace-18777"></a>
<a id="trace-18787"></a>
<a id="trace-18789"></a>
<a id="trace-18807"></a>
<a id="trace-18809"></a>
<a id="trace-18812"></a>
<a id="trace-18814"></a>
<a id="trace-18825"></a>
<a id="trace-18827"></a>
<a id="trace-18896"></a>
<a id="trace-18898"></a>
<a id="trace-18900"></a>
<a id="trace-18902"></a>
<a id="trace-18917"></a>
<a id="trace-18919"></a>
<a id="trace-18924"></a>
<a id="trace-18926"></a>
<a id="trace-18941"></a>
<a id="trace-18943"></a>
<a id="trace-18953"></a>
<a id="trace-18955"></a>
<a id="trace-18972"></a>
<a id="trace-18974"></a>
<a id="trace-18977"></a>
<a id="trace-18979"></a>
<a id="trace-18989"></a>
<a id="trace-18991"></a>
<a id="trace-18994"></a>
<a id="trace-18996"></a>
<a id="trace-19080"></a>
<a id="trace-19082"></a>
<a id="trace-19084"></a>
<a id="trace-19086"></a>
<a id="trace-19103"></a>
<a id="trace-19105"></a>
<a id="trace-19120"></a>
<a id="trace-19122"></a>
<a id="trace-19144"></a>
<a id="trace-19146"></a>
<a id="trace-19154"></a>
<a id="trace-19156"></a>
<a id="trace-19220"></a>
<a id="trace-19222"></a>
<a id="trace-19238"></a>
<a id="trace-19240"></a>
<a id="trace-19255"></a>
<a id="trace-19257"></a>
<a id="trace-19275"></a>
<a id="trace-19277"></a>
<a id="trace-19292"></a>
<a id="trace-19294"></a>
<a id="trace-19301"></a>
<a id="trace-19303"></a>
<a id="trace-19379"></a>
<a id="trace-19381"></a>
<a id="trace-19412"></a>
<a id="trace-19414"></a>
<a id="trace-19432"></a>
<a id="trace-19434"></a>
<a id="trace-19440"></a>
<a id="trace-19442"></a>
<a id="trace-19452"></a>
<a id="trace-19454"></a>
<a id="trace-19456"></a>
<a id="trace-19458"></a>
<a id="trace-19524"></a>
<a id="trace-19526"></a>
<a id="trace-19529"></a>
<a id="trace-19531"></a>
<a id="trace-19555"></a>
<a id="trace-19557"></a>
<a id="trace-19572"></a>
<a id="trace-19574"></a>
<a id="trace-19600"></a>
<a id="trace-19602"></a>
<a id="trace-19683"></a>
<a id="trace-19685"></a>
<a id="trace-19699"></a>
<a id="trace-19701"></a>
<a id="trace-19705"></a>
<a id="trace-19707"></a>
<a id="trace-19725"></a>
<a id="trace-19727"></a>
<a id="trace-19746"></a>
<a id="trace-19748"></a>
<a id="trace-19751"></a>
<a id="trace-19753"></a>
<a id="trace-19766"></a>
<a id="trace-19768"></a>
<a id="trace-19776"></a>
<a id="trace-19778"></a>
<a id="trace-19843"></a>
<a id="trace-19845"></a>
<a id="trace-19862"></a>
<a id="trace-19864"></a>
<a id="trace-19866"></a>
<a id="trace-19868"></a>
<a id="trace-19880"></a>
<a id="trace-19882"></a>
<a id="trace-19889"></a>
<a id="trace-19891"></a>
<a id="trace-19904"></a>
<a id="trace-19906"></a>
<a id="trace-19909"></a>
<a id="trace-19911"></a>
<a id="trace-19922"></a>
<a id="trace-19924"></a>
<a id="trace-19929"></a>
<a id="trace-19931"></a>
<a id="trace-20001"></a>
<a id="trace-20003"></a>
<a id="trace-20010"></a>
<a id="trace-20012"></a>
<a id="trace-20030"></a>
<a id="trace-20032"></a>
<a id="trace-20034"></a>
<a id="trace-20036"></a>
<a id="trace-20046"></a>
<a id="trace-20048"></a>
<a id="trace-20054"></a>
<a id="trace-20056"></a>
<a id="trace-20068"></a>
<a id="trace-20070"></a>
<a id="trace-20076"></a>
<a id="trace-20078"></a>
<a id="trace-20157"></a>
<a id="trace-20159"></a>
<a id="trace-20162"></a>
<a id="trace-20164"></a>
<a id="trace-20188"></a>
<a id="trace-20190"></a>
<a id="trace-20204"></a>
<a id="trace-20206"></a>
<a id="trace-20217"></a>
<a id="trace-20219"></a>
<a id="trace-20230"></a>
<a id="trace-20232"></a>
<a id="trace-20237"></a>
<a id="trace-20239"></a>
<a id="trace-20247"></a>
<a id="trace-20249"></a>
<a id="trace-20252"></a>
<a id="trace-20254"></a>
<a id="trace-20321"></a>
<a id="trace-20323"></a>
<a id="trace-20339"></a>
<a id="trace-20341"></a>
<a id="trace-20345"></a>
<a id="trace-20347"></a>
<a id="trace-20357"></a>
<a id="trace-20359"></a>
<a id="trace-20369"></a>
<a id="trace-20371"></a>
<a id="trace-20412"></a>
<a id="trace-20414"></a>
<a id="trace-20480"></a>
<a id="trace-20482"></a>
<a id="trace-20487"></a>
<a id="trace-20489"></a>
<a id="trace-20502"></a>
<a id="trace-20504"></a>
<a id="trace-20509"></a>
<a id="trace-20511"></a>
<a id="trace-20522"></a>
<a id="trace-20524"></a>
<a id="trace-20529"></a>
<a id="trace-20531"></a>
<a id="trace-20546"></a>
<a id="trace-20548"></a>
<a id="trace-20552"></a>
<a id="trace-20554"></a>
<a id="trace-20566"></a>
<a id="trace-20568"></a>
<a id="trace-20575"></a>
<a id="trace-20577"></a>
<a id="trace-20667"></a>
<a id="trace-20669"></a>
<a id="trace-20672"></a>
<a id="trace-20674"></a>
<a id="trace-20684"></a>
<a id="trace-20686"></a>
<a id="trace-20692"></a>
<a id="trace-20694"></a>
<a id="trace-20708"></a>
<a id="trace-20710"></a>
<a id="trace-20713"></a>
<a id="trace-20715"></a>
<a id="trace-20725"></a>
<a id="trace-20727"></a>
<a id="trace-20731"></a>
<a id="trace-20733"></a>
<a id="trace-20798"></a>
<a id="trace-20800"></a>
<a id="trace-20804"></a>
<a id="trace-20806"></a>
<a id="trace-20826"></a>
<a id="trace-20828"></a>
<a id="trace-20831"></a>
<a id="trace-20833"></a>
<a id="trace-20858"></a>
<a id="trace-20860"></a>
<a id="trace-20872"></a>
<a id="trace-20874"></a>
<a id="trace-20878"></a>
<a id="trace-20880"></a>
<a id="trace-20889"></a>
<a id="trace-20891"></a>
<a id="trace-20893"></a>
<a id="trace-20895"></a>
<a id="trace-20966"></a>
<a id="trace-20968"></a>
<a id="trace-20982"></a>
<a id="trace-20984"></a>
<a id="trace-20986"></a>
<a id="trace-20988"></a>
<a id="trace-20999"></a>
<a id="trace-21001"></a>
<a id="trace-21009"></a>
<a id="trace-21011"></a>
<a id="trace-21028"></a>
<a id="trace-21030"></a>
<a id="trace-21038"></a>
<a id="trace-21040"></a>
<a id="trace-21054"></a>
<a id="trace-21056"></a>
<a id="trace-21058"></a>
<a id="trace-21060"></a>
<a id="trace-21125"></a>
<a id="trace-21127"></a>
<a id="trace-21130"></a>
<a id="trace-21132"></a>
<a id="trace-21145"></a>
<a id="trace-21147"></a>
<a id="trace-21152"></a>
<a id="trace-21154"></a>
<a id="trace-21170"></a>
<a id="trace-21172"></a>
<a id="trace-21190"></a>
<a id="trace-21192"></a>
<a id="trace-21205"></a>
<a id="trace-21207"></a>
<a id="trace-21214"></a>
<a id="trace-21216"></a>
<a id="trace-21285"></a>
<a id="trace-21287"></a>
<a id="trace-21295"></a>
<a id="trace-21297"></a>
<a id="trace-21313"></a>
<a id="trace-21315"></a>
<a id="trace-21325"></a>
<a id="trace-21327"></a>
<a id="trace-21347"></a>
<a id="trace-21349"></a>
<a id="trace-21354"></a>
<a id="trace-21356"></a>
<a id="trace-21364"></a>
<a id="trace-21366"></a>
<a id="trace-21370"></a>
<a id="trace-21372"></a>
<a id="trace-21437"></a>
<a id="trace-21439"></a>
<a id="trace-21464"></a>
<a id="trace-21466"></a>
<a id="trace-21473"></a>
<a id="trace-21475"></a>
<a id="trace-21490"></a>
<a id="trace-21492"></a>
<a id="trace-21497"></a>
<a id="trace-21499"></a>
<a id="trace-21511"></a>
<a id="trace-21513"></a>
<a id="trace-21517"></a>
<a id="trace-21519"></a>
<a id="trace-21533"></a>
<a id="trace-21535"></a>
<a id="trace-21601"></a>
<a id="trace-21603"></a>
<a id="trace-21620"></a>
<a id="trace-21622"></a>
<a id="trace-21625"></a>
<a id="trace-21627"></a>
<a id="trace-21641"></a>
<a id="trace-21643"></a>
<a id="trace-21669"></a>
<a id="trace-21671"></a>
<a id="trace-21674"></a>
<a id="trace-21676"></a>
<a id="trace-21762"></a>
<a id="trace-21764"></a>
<a id="trace-21781"></a>
<a id="trace-21783"></a>
<a id="trace-21794"></a>
<a id="trace-21796"></a>
<a id="trace-21803"></a>
<a id="trace-21805"></a>
<a id="trace-21822"></a>
<a id="trace-21824"></a>
<a id="trace-21840"></a>
<a id="trace-21842"></a>
<a id="trace-21935"></a>
<a id="trace-21937"></a>
<a id="trace-21939"></a>
<a id="trace-21941"></a>
<a id="trace-21952"></a>
<a id="trace-21954"></a>
<a id="trace-21959"></a>
<a id="trace-21961"></a>
<a id="trace-21975"></a>
<a id="trace-21977"></a>
<a id="trace-21982"></a>
<a id="trace-21984"></a>
<a id="trace-22064"></a>
<a id="trace-22066"></a>
<a id="trace-22071"></a>
<a id="trace-22073"></a>
<a id="trace-22090"></a>
<a id="trace-22092"></a>
<a id="trace-22114"></a>
<a id="trace-22116"></a>
<a id="trace-22121"></a>
<a id="trace-22123"></a>
<a id="trace-22140"></a>
<a id="trace-22142"></a>
<a id="trace-22151"></a>
<a id="trace-22153"></a>
<a id="trace-22158"></a>
<a id="trace-22160"></a>
<a id="trace-22228"></a>
<a id="trace-22230"></a>
<a id="trace-22244"></a>
<a id="trace-22246"></a>
<a id="trace-22249"></a>
<a id="trace-22251"></a>
<a id="trace-22265"></a>
<a id="trace-22267"></a>
<a id="trace-22294"></a>
<a id="trace-22296"></a>
<a id="trace-22305"></a>
<a id="trace-22307"></a>
<a id="trace-22315"></a>
<a id="trace-22317"></a>
<a id="trace-22386"></a>
<a id="trace-22388"></a>
<a id="trace-22391"></a>
<a id="trace-22393"></a>
<a id="trace-22408"></a>
<a id="trace-22410"></a>
<a id="trace-22414"></a>
<a id="trace-22416"></a>
<a id="trace-22434"></a>
<a id="trace-22436"></a>
<a id="trace-22448"></a>
<a id="trace-22450"></a>
<a id="trace-22458"></a>
<a id="trace-22460"></a>
<a id="trace-22474"></a>
<a id="trace-22476"></a>
<a id="trace-22483"></a>
<a id="trace-22485"></a>
<a id="trace-22557"></a>
<a id="trace-22559"></a>
<a id="trace-22561"></a>
<a id="trace-22563"></a>
<a id="trace-22577"></a>
<a id="trace-22579"></a>
<a id="trace-22582"></a>
<a id="trace-22584"></a>
<a id="trace-22594"></a>
<a id="trace-22596"></a>
<a id="trace-22604"></a>
<a id="trace-22606"></a>
<a id="trace-22619"></a>
<a id="trace-22621"></a>
<a id="trace-22624"></a>
<a id="trace-22626"></a>
<a id="trace-22636"></a>
<a id="trace-22638"></a>
<a id="trace-22641"></a>
<a id="trace-22643"></a>
<a id="trace-22711"></a>
<a id="trace-22713"></a>
<a id="trace-22720"></a>
<a id="trace-22722"></a>
<a id="trace-22740"></a>
<a id="trace-22742"></a>
<a id="trace-22745"></a>
<a id="trace-22747"></a>
<a id="trace-22763"></a>
<a id="trace-22765"></a>
<a id="trace-22771"></a>
<a id="trace-22773"></a>
<a id="trace-22790"></a>
<a id="trace-22792"></a>
<a id="trace-22805"></a>
<a id="trace-22807"></a>
<a id="trace-22876"></a>
<a id="trace-22878"></a>
<a id="trace-22891"></a>
<a id="trace-22893"></a>
<a id="trace-22915"></a>
<a id="trace-22917"></a>
<a id="trace-22923"></a>
<a id="trace-22925"></a>
<a id="trace-22941"></a>
<a id="trace-22943"></a>
<a id="trace-22961"></a>
<a id="trace-22963"></a>
<a id="trace-22966"></a>
<a id="trace-22968"></a>
<a id="trace-23050"></a>
<a id="trace-23052"></a>
<a id="trace-23068"></a>
<a id="trace-23070"></a>
<a id="trace-23075"></a>
<a id="trace-23077"></a>
<a id="trace-23090"></a>
<a id="trace-23092"></a>
<a id="trace-23098"></a>
<a id="trace-23100"></a>
<a id="trace-23121"></a>
<a id="trace-23123"></a>
<a id="trace-23191"></a>
<a id="trace-23193"></a>
<a id="trace-23195"></a>
<a id="trace-23197"></a>
<a id="trace-23211"></a>
<a id="trace-23213"></a>
<a id="trace-23227"></a>
<a id="trace-23229"></a>
<a id="trace-23237"></a>
<a id="trace-23239"></a>
<a id="trace-23253"></a>
<a id="trace-23255"></a>
<a id="trace-23259"></a>
<a id="trace-23261"></a>
<a id="trace-23274"></a>
<a id="trace-23276"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23354"></a>
<a id="trace-23356"></a>
<a id="trace-23373"></a>
<a id="trace-23375"></a>
<a id="trace-23398"></a>
<a id="trace-23400"></a>
<a id="trace-23412"></a>
<a id="trace-23414"></a>
<a id="trace-23419"></a>
<a id="trace-23421"></a>
<a id="trace-23436"></a>
<a id="trace-23438"></a>
<a id="trace-23501"></a>
<a id="trace-23503"></a>
<a id="trace-23528"></a>
<a id="trace-23530"></a>
<a id="trace-23544"></a>
<a id="trace-23546"></a>
<a id="trace-23573"></a>
<a id="trace-23575"></a>
<a id="trace-23579"></a>
<a id="trace-23581"></a>
<a id="trace-23591"></a>
<a id="trace-23593"></a>
<a id="trace-23596"></a>
<a id="trace-23598"></a>
<a id="trace-23667"></a>
<a id="trace-23669"></a>
<a id="trace-23683"></a>
<a id="trace-23685"></a>
<a id="trace-23687"></a>
<a id="trace-23689"></a>
<a id="trace-23700"></a>
<a id="trace-23702"></a>
<a id="trace-23708"></a>
<a id="trace-23710"></a>
<a id="trace-23726"></a>
<a id="trace-23728"></a>
<a id="trace-23751"></a>
<a id="trace-23753"></a>
<a id="trace-23757"></a>
<a id="trace-23759"></a>
<a id="trace-23844"></a>
<a id="trace-23846"></a>
<a id="trace-23849"></a>
<a id="trace-23851"></a>
<a id="trace-23863"></a>
<a id="trace-23865"></a>
<a id="trace-23870"></a>
<a id="trace-23872"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23892"></a>
<a id="trace-23894"></a>
<a id="trace-23904"></a>
<a id="trace-23906"></a>
<a id="trace-23982"></a>
<a id="trace-23984"></a>
<a id="trace-23986"></a>
<a id="trace-23988"></a>
<a id="trace-24005"></a>
<a id="trace-24007"></a>
<a id="trace-24031"></a>
<a id="trace-24033"></a>
<a id="trace-24046"></a>
<a id="trace-24048"></a>
<a id="trace-24051"></a>
<a id="trace-24053"></a>
<a id="trace-24064"></a>
<a id="trace-24066"></a>
<a id="trace-24071"></a>
<a id="trace-24073"></a>
<a id="trace-24138"></a>
<a id="trace-24140"></a>
<a id="trace-24142"></a>
<a id="trace-24144"></a>
<a id="trace-24159"></a>
<a id="trace-24161"></a>
<a id="trace-24166"></a>
<a id="trace-24168"></a>
<a id="trace-24193"></a>
<a id="trace-24195"></a>
<a id="trace-24215"></a>
<a id="trace-24217"></a>
<a id="trace-24231"></a>
<a id="trace-24233"></a>
<a id="trace-24297"></a>
<a id="trace-24299"></a>
<a id="trace-24306"></a>
<a id="trace-24308"></a>
<a id="trace-24322"></a>
<a id="trace-24324"></a>
<a id="trace-24326"></a>
<a id="trace-24328"></a>
<a id="trace-24338"></a>
<a id="trace-24340"></a>
<a id="trace-24346"></a>
<a id="trace-24348"></a>
<a id="trace-24364"></a>
<a id="trace-24366"></a>
<a id="trace-24377"></a>
<a id="trace-24379"></a>
<a id="trace-24392"></a>
<a id="trace-24394"></a>
<a id="trace-24402"></a>
<a id="trace-24404"></a>
<a id="trace-24467"></a>
<a id="trace-24469"></a>
<a id="trace-24474"></a>
<a id="trace-24476"></a>
<a id="trace-24489"></a>
<a id="trace-24491"></a>
<a id="trace-24508"></a>
<a id="trace-24510"></a>
<a id="trace-24517"></a>
<a id="trace-24519"></a>
<a id="trace-24530"></a>
<a id="trace-24532"></a>
<a id="trace-24537"></a>
<a id="trace-24539"></a>
<a id="trace-24548"></a>
<a id="trace-24550"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 997): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 906. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624793790105342, 'next_transition': 1363}.
<a id="trace-1004"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1004): traveling overwatch. Knowledge: actor memory at 5.00s, trace 897. Next observer evidence: {'until': 6.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812213945815602, 'next_transition': 1395}.
<a id="trace-1005"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1005): received platoon directive. Knowledge: actor memory at 5.00s, trace 897. Next observer evidence: {'until': 6.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812213945815602, 'next_transition': 1395}.
<a id="trace-1060"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1060): received platoon directive. Knowledge: actor memory at 5.00s, trace 889. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362505938674533, 'next_transition': 1359}.
<a id="trace-1359"></a>
<a id="trace-1361"></a>
<a id="trace-1557"></a>
<a id="trace-1559"></a>
<a id="trace-1604"></a>
<a id="trace-1606"></a>
<a id="trace-1652"></a>
<a id="trace-1654"></a>
<a id="trace-1702"></a>
<a id="trace-1704"></a>
<a id="trace-1764"></a>
<a id="trace-1766"></a>
<a id="trace-1801"></a>
<a id="trace-1803"></a>
<a id="trace-1830"></a>
<a id="trace-1832"></a>
<a id="trace-1926"></a>
<a id="trace-1928"></a>
<a id="trace-1950"></a>
<a id="trace-1952"></a>
<a id="trace-1976"></a>
<a id="trace-1978"></a>
<a id="trace-2008"></a>
<a id="trace-2010"></a>
<a id="trace-2039"></a>
<a id="trace-2041"></a>
<a id="trace-2062"></a>
<a id="trace-2064"></a>
<a id="trace-2098"></a>
<a id="trace-2100"></a>
<a id="trace-2117"></a>
<a id="trace-2119"></a>
<a id="trace-2151"></a>
<a id="trace-2153"></a>
<a id="trace-2171"></a>
<a id="trace-2173"></a>
<a id="trace-2259"></a>
<a id="trace-2261"></a>
<a id="trace-2287"></a>
<a id="trace-2289"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1359): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 894. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.939533183385469, 'next_transition': 1557}.
<a id="trace-1395"></a>
- 6.60s–6.60s (×1), actor 8, squad 1 (trace 1395): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 5.00s, trace 897. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.999840341726077, 'next_transition': 2788}.
<a id="trace-2297"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2297): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2180. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14249398120924672, 'next_transition': 2696}.
<a id="trace-2298"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2298): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2180. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14249398120924672, 'next_transition': 2696}.
<a id="trace-2299"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2299): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2180. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14249398120924672, 'next_transition': 2696}.
<a id="trace-2696"></a>
<a id="trace-2698"></a>
<a id="trace-2726"></a>
<a id="trace-2728"></a>
<a id="trace-2773"></a>
<a id="trace-2775"></a>
<a id="trace-3140"></a>
<a id="trace-3142"></a>
<a id="trace-3185"></a>
<a id="trace-3187"></a>
<a id="trace-3561"></a>
<a id="trace-3563"></a>
<a id="trace-3603"></a>
<a id="trace-3605"></a>
<a id="trace-3631"></a>
<a id="trace-3633"></a>
- 16.25s–19.75s (×16), actor 5, squad 0 (trace 2696): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2185. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2849972079891788, 'next_transition': 2726}.
<a id="trace-2788"></a>
- 17.65s–17.65s (×1), actor 8, squad 1 (trace 2788): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2188. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6161186918862522, 'next_transition': 3208}.
<a id="trace-2789"></a>
- 17.65s–17.65s (×1), actor 8, squad 1 (trace 2789): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2188. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6161186918862522, 'next_transition': 3208}.
<a id="trace-2790"></a>
<a id="trace-3208"></a>
- 17.65s–18.65s (×2), actor 8, squad 1 (trace 2790): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2188. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6161186918862522, 'next_transition': 3208}.
<a id="trace-355"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (events line 355): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-356"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (events line 356): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3640"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 3640): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.872729 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3640. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.975112686143669, 'next_transition': 3750}.
<a id="trace-3641"></a>
- 19.80s–19.80s (×1), actor 5, squad 0 (trace 3641): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.872729 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3641. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.975112686143669, 'next_transition': 3750}.
<a id="trace-3642"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 3642): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.872729 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3642. Next observer evidence: {'until': 23, 'shots': 4, 'casualties': 1, 'mean_displacement': 1.1861442828484603, 'next_transition': 3900}.
<a id="trace-3643"></a>
- 19.80s–19.80s (×1), actor 5, squad 1 (trace 3643): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.872729 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 19.80s, trace 3643. Next observer evidence: {'until': 23, 'shots': 4, 'casualties': 1, 'mean_displacement': 1.1861442828484603, 'next_transition': 3900}.
<a id="trace-3750"></a>
<a id="trace-3752"></a>
<a id="trace-3782"></a>
<a id="trace-3784"></a>
- 20.25s–20.75s (×4), actor 5, squad 0 (trace 3750): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3657. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8623684853761754, 'next_transition': 3782}.
<a id="trace-3794"></a>
- 20.95s–20.95s (×1), actor 1, squad 0 (trace 3794): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3653. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0658077654264209, 'next_transition': 3817}.
<a id="trace-3817"></a>
<a id="trace-3819"></a>
<a id="trace-3835"></a>
<a id="trace-3837"></a>
<a id="trace-3864"></a>
<a id="trace-3866"></a>
<a id="trace-3887"></a>
<a id="trace-3889"></a>
<a id="trace-4499"></a>
<a id="trace-4501"></a>
<a id="trace-4524"></a>
<a id="trace-4526"></a>
<a id="trace-4547"></a>
<a id="trace-4549"></a>
<a id="trace-4570"></a>
<a id="trace-4572"></a>
- 21.25s–24.75s (×16), actor 5, squad 0 (trace 3817): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3657. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0238660797138448, 'next_transition': 3835}.
<a id="trace-3900"></a>
- 23.05s–23.05s (×1), actor 9, squad 1 (trace 3900): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3661. Next observer evidence: {'until': 24.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.3077733333333332, 'next_transition': 4582}.
<a id="trace-3902"></a>
- 23.05s–23.05s (×1), actor 9, squad 1 (trace 3902): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 20.00s, trace 3661. Next observer evidence: {'until': 24.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.3077733333333332, 'next_transition': 4582}.
<a id="trace-4244"></a>
- 23.05s–23.05s (×1), actor 9, squad 1 (trace 4244): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 20.00s, trace 3661. Next observer evidence: {'until': 24.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.3077733333333332, 'next_transition': 4582}.
<a id="trace-4245"></a>
- 23.05s–23.05s (×1), actor 9, squad 1 (trace 4245): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 20.00s, trace 3661. Next observer evidence: {'until': 24.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.3077733333333332, 'next_transition': 4582}.
<a id="trace-4478"></a>
- 23.05s–23.05s (×1), actor 9, squad 1 (trace 4478): Assaulting. Knowledge: actor memory at 20.00s, trace 3661. Next observer evidence: {'until': 24.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.3077733333333332, 'next_transition': 4582}.
<a id="trace-4582"></a>
- 24.80s–24.80s (×1), actor 9, squad 1 (trace 4582): InsufficientStrength: frozen element failed; Reorganise before retirement assessment. Knowledge: actor memory at 20.00s, trace 3661. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0655487886997159, 'next_transition': 7718}.
<a id="trace-4583"></a>
- 24.80s–24.80s (×1), actor 9, squad 1 (trace 4583): NeedSupport. Knowledge: actor memory at 20.00s, trace 3661. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0655487886997159, 'next_transition': 7718}.
<a id="trace-4662"></a>
- 25.10s–25.10s (×1), actor 1, squad 0 (trace 4662): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 4593. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25891832808325327, 'next_transition': 7690}.
<a id="trace-7522"></a>
- 25.10s–25.10s (×1), actor 1, squad 0 (trace 7522): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 4593. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25891832808325327, 'next_transition': 7690}.
<a id="trace-7523"></a>
- 25.10s–25.10s (×1), actor 1, squad 0 (trace 7523): MoveTactically. Knowledge: actor memory at 25.00s, trace 4593. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25891832808325327, 'next_transition': 7690}.
<a id="trace-7524"></a>
- 25.10s–25.10s (×1), actor 1, squad 0 (trace 7524): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 4593. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25891832808325327, 'next_transition': 7690}.
<a id="trace-7690"></a>
<a id="trace-7692"></a>
<a id="trace-7708"></a>
<a id="trace-7710"></a>
<a id="trace-7870"></a>
<a id="trace-7872"></a>
<a id="trace-7900"></a>
<a id="trace-7902"></a>
- 25.25s–26.75s (×8), actor 5, squad 0 (trace 7690): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4597. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2876639091524393, 'next_transition': 7708}.
<a id="trace-7718"></a>
- 25.80s–25.80s (×1), actor 9, squad 1 (trace 7718): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 4600. Next observer evidence: {'until': 29.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.424802410216537, 'next_transition': 9907}.
<a id="trace-7721"></a>
- 25.80s–25.80s (×1), actor 9, squad 1 (trace 7721): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 4600. Next observer evidence: {'until': 29.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.424802410216537, 'next_transition': 9907}.
<a id="trace-7722"></a>
- 25.80s–25.80s (×1), actor 9, squad 1 (trace 7722): Reorganise complete: known contact. Knowledge: actor memory at 25.00s, trace 4600. Next observer evidence: {'until': 29.4, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.424802410216537, 'next_transition': 9907}.
<a id="trace-7908"></a>
- 26.75s–26.75s (×1), actor 1, squad 0 (trace 7908): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 4593. Next observer evidence: {'until': 27, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7501659119249953, 'next_transition': 9758}.
<a id="trace-7909"></a>
- 26.75s–26.75s (×1), actor 1, squad 0 (trace 7909): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 25.00s, trace 4593. Next observer evidence: {'until': 27, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7501659119249953, 'next_transition': 9758}.
<a id="trace-9758"></a>
- 27.05s–27.05s (×1), actor 5, squad 0 (trace 9758): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 27.05s, trace 9758. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3428630382743649, 'next_transition': 9767}.
<a id="trace-9767"></a>
<a id="trace-9769"></a>
<a id="trace-9802"></a>
<a id="trace-9804"></a>
<a id="trace-9834"></a>
<a id="trace-9836"></a>
<a id="trace-9869"></a>
<a id="trace-9871"></a>
<a id="trace-9887"></a>
<a id="trace-9889"></a>
<a id="trace-9915"></a>
<a id="trace-9917"></a>
- 27.25s–29.75s (×12), actor 5, squad 0 (trace 9767): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 27.05s, trace 9758. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6050382825678978, 'next_transition': 9802}.
<a id="trace-9907"></a>
- 29.45s–29.45s (×1), actor 9, squad 1 (trace 9907): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4600. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22589335011239292, 'next_transition': 10060}.
<a id="trace-9909"></a>
- 29.45s–29.45s (×1), actor 9, squad 1 (trace 9909): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 4600. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22589335011239292, 'next_transition': 10060}.
<a id="trace-611"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 611): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9925"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 9925): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.446390 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 9925. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6789120785711749, 'next_transition': 10011}.
<a id="trace-9926"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 9926): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.446390 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 9926. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6789120785711749, 'next_transition': 10011}.
<a id="trace-10011"></a>
<a id="trace-10013"></a>
<a id="trace-10038"></a>
<a id="trace-10040"></a>
<a id="trace-10208"></a>
<a id="trace-10210"></a>
<a id="trace-10226"></a>
<a id="trace-10228"></a>
- 30.25s–31.75s (×8), actor 5, squad 0 (trace 10011): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 9933. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8003323051471336, 'next_transition': 10038}.
<a id="trace-10060"></a>
- 31.10s–31.10s (×1), actor 9, squad 1 (trace 10060): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 9936. Next observer evidence: {'until': 34, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.8751619586385062, 'next_transition': 12258}.
<a id="trace-10246"></a>
- 32.15s–32.15s (×1), actor 1, squad 0 (trace 10246): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 30.00s, trace 9929. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2689551856812195, 'next_transition': 10263}.
<a id="trace-10247"></a>
- 32.15s–32.15s (×1), actor 1, squad 0 (trace 10247): NeedSupport. Knowledge: actor memory at 30.00s, trace 9929. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2689551856812195, 'next_transition': 10263}.
<a id="trace-10263"></a>
<a id="trace-10265"></a>
- 32.25s–32.25s (×2), actor 5, squad 0 (trace 10263): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 9933. Next observer evidence: {'until': 32.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20935501294295988, 'next_transition': 10272}.
<a id="trace-10272"></a>
- 32.40s–32.40s (×1), actor 1, squad 0 (trace 10272): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 9929. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21566968187473726, 'next_transition': 12168}.
<a id="trace-10273"></a>
- 32.40s–32.40s (×1), actor 1, squad 0 (trace 10273): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 30.00s, trace 9929. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21566968187473726, 'next_transition': 12168}.
<a id="trace-12168"></a>
<a id="trace-12170"></a>
<a id="trace-12185"></a>
<a id="trace-12187"></a>
<a id="trace-12222"></a>
<a id="trace-12224"></a>
<a id="trace-13252"></a>
<a id="trace-13254"></a>
<a id="trace-13260"></a>
<a id="trace-13262"></a>
<a id="trace-13350"></a>
<a id="trace-13352"></a>
<a id="trace-13369"></a>
<a id="trace-13371"></a>
<a id="trace-13394"></a>
<a id="trace-13396"></a>
<a id="trace-13435"></a>
<a id="trace-13437"></a>
<a id="trace-13460"></a>
<a id="trace-13462"></a>
<a id="trace-13476"></a>
<a id="trace-13478"></a>
<a id="trace-13498"></a>
<a id="trace-13500"></a>
<a id="trace-13518"></a>
<a id="trace-13520"></a>
<a id="trace-13547"></a>
<a id="trace-13549"></a>
- 32.75s–39.25s (×28), actor 5, squad 0 (trace 12168): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 9933. Next observer evidence: {'until': 33.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5334953542168066, 'next_transition': 12185}.
<a id="trace-12258"></a>
- 34.15s–34.15s (×1), actor 9, squad 1 (trace 12258): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 9936. Next observer evidence: {'until': 34.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13274}.
<a id="trace-12259"></a>
- 34.15s–34.15s (×1), actor 9, squad 1 (trace 12259): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 30.00s, trace 9936. Next observer evidence: {'until': 34.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13274}.
<a id="trace-13274"></a>
- 34.85s–34.85s (×1), actor 9, squad 1 (trace 13274): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 30.00s, trace 9936. Next observer evidence: {'until': 39.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 2.07454148467806, 'next_transition': 13574}.
<a id="trace-13556"></a>
- 39.35s–39.35s (×1), actor 1, squad 0 (trace 13556): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 35.00s, trace 13278. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21314938077554899, 'next_transition': 13566}.
<a id="trace-13557"></a>
- 39.35s–39.35s (×1), actor 1, squad 0 (trace 13557): NeedSupport. Knowledge: actor memory at 35.00s, trace 13278. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21314938077554899, 'next_transition': 13566}.
<a id="trace-13566"></a>
<a id="trace-13568"></a>
- 39.75s–39.75s (×2), actor 5, squad 0 (trace 13566): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 13281. Next observer evidence: {'until': 40, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2938225443880855, 'next_transition': 13603}.
<a id="trace-13574"></a>
- 39.85s–39.85s (×1), actor 9, squad 1 (trace 13574): NeedSupport. Knowledge: actor memory at 35.00s, trace 13284. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13852}.
<a id="trace-13603"></a>
- 40.00s–40.00s (×1), actor 1, squad 0 (trace 13603): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 13584. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21316042165777688, 'next_transition': 13843}.
<a id="trace-13604"></a>
- 40.00s–40.00s (×1), actor 1, squad 0 (trace 13604): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 13584. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21316042165777688, 'next_transition': 13843}.
<a id="trace-13843"></a>
<a id="trace-13845"></a>
<a id="trace-13864"></a>
<a id="trace-13866"></a>
<a id="trace-13887"></a>
<a id="trace-13889"></a>
<a id="trace-13905"></a>
<a id="trace-13907"></a>
- 40.25s–41.75s (×8), actor 5, squad 0 (trace 13843): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 13586. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4076145308315075, 'next_transition': 13864}.
<a id="trace-13852"></a>
- 40.55s–40.55s (×1), actor 9, squad 1 (trace 13852): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 13588. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13855}.
<a id="trace-13853"></a>
- 40.55s–40.55s (×1), actor 9, squad 1 (trace 13853): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 40.00s, trace 13588. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13855}.
<a id="trace-13855"></a>
- 40.60s–40.60s (×1), actor 9, squad 1 (trace 13855): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 40.00s, trace 13588. Next observer evidence: {'until': 46.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14156}.
<a id="trace-869"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 869): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13919"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 13919): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.175936 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 13919. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09649022738728516, 'next_transition': 13931}.
<a id="trace-13920"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 13920): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.175936 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 13920. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09649022738728516, 'next_transition': 13931}.
<a id="trace-13931"></a>
<a id="trace-13933"></a>
<a id="trace-13946"></a>
<a id="trace-13948"></a>
<a id="trace-13966"></a>
<a id="trace-13968"></a>
<a id="trace-13979"></a>
<a id="trace-13981"></a>
<a id="trace-13998"></a>
<a id="trace-14000"></a>
<a id="trace-14012"></a>
<a id="trace-14014"></a>
<a id="trace-14092"></a>
<a id="trace-14094"></a>
- 42.25s–45.25s (×14), actor 5, squad 0 (trace 13931): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 13920. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680116326035454, 'next_transition': 13946}.
<a id="trace-14102"></a>
- 45.70s–45.70s (×1), actor 1, squad 0 (trace 14102): NeedSupport. Knowledge: actor memory at 45.00s, trace 14020. Next observer evidence: None.
<a id="trace-14109"></a>
<a id="trace-14111"></a>
<a id="trace-14127"></a>
<a id="trace-14129"></a>
<a id="trace-14142"></a>
<a id="trace-14144"></a>
<a id="trace-14170"></a>
<a id="trace-14172"></a>
<a id="trace-14185"></a>
<a id="trace-14187"></a>
<a id="trace-14206"></a>
<a id="trace-14208"></a>
<a id="trace-14224"></a>
<a id="trace-14226"></a>
<a id="trace-14239"></a>
<a id="trace-14241"></a>
<a id="trace-14251"></a>
<a id="trace-14253"></a>
<a id="trace-14331"></a>
<a id="trace-14333"></a>
<a id="trace-14347"></a>
<a id="trace-14349"></a>
<a id="trace-14365"></a>
<a id="trace-14367"></a>
<a id="trace-14381"></a>
<a id="trace-14383"></a>
<a id="trace-14403"></a>
<a id="trace-14405"></a>
<a id="trace-14418"></a>
<a id="trace-14420"></a>
<a id="trace-14437"></a>
<a id="trace-14439"></a>
<a id="trace-14451"></a>
<a id="trace-14453"></a>
<a id="trace-14468"></a>
<a id="trace-14470"></a>
<a id="trace-14482"></a>
<a id="trace-14484"></a>
<a id="trace-14560"></a>
<a id="trace-14562"></a>
<a id="trace-14572"></a>
<a id="trace-14574"></a>
<a id="trace-14593"></a>
<a id="trace-14595"></a>
<a id="trace-14607"></a>
<a id="trace-14609"></a>
<a id="trace-14631"></a>
<a id="trace-14633"></a>
<a id="trace-14645"></a>
<a id="trace-14647"></a>
<a id="trace-14662"></a>
<a id="trace-14664"></a>
<a id="trace-14678"></a>
<a id="trace-14680"></a>
<a id="trace-14696"></a>
<a id="trace-14698"></a>
- 45.75s–59.25s (×56), actor 5, squad 0 (trace 14109): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 14022. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9214438185030556, 'next_transition': 14127}.
<a id="trace-14156"></a>
- 46.90s–46.90s (×1), actor 9, squad 1 (trace 14156): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 14024. Next observer evidence: None.
<a id="trace-14157"></a>
- 46.90s–46.90s (×1), actor 9, squad 1 (trace 14157): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 14024. Next observer evidence: None.
<a id="trace-14159"></a>
- 46.95s–46.95s (×1), actor 9, squad 1 (trace 14159): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 45.00s, trace 14024. Next observer evidence: {'until': 72, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1035}.
<a id="trace-14703"></a>
- 59.35s–59.35s (×1), actor 1, squad 0 (trace 14703): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 14493. Next observer evidence: {'until': 59.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.20549428723644003, 'next_transition': 14766}.
<a id="trace-14710"></a>
- 59.35s–59.35s (×1), actor 1, squad 0 (trace 14710): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 14493. Next observer evidence: {'until': 59.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.20549428723644003, 'next_transition': 14766}.
<a id="trace-14766"></a>
<a id="trace-14768"></a>
<a id="trace-14843"></a>
<a id="trace-14845"></a>
<a id="trace-14868"></a>
<a id="trace-14870"></a>
<a id="trace-14887"></a>
<a id="trace-14889"></a>
<a id="trace-14899"></a>
<a id="trace-14901"></a>
<a id="trace-14920"></a>
<a id="trace-14922"></a>
<a id="trace-14944"></a>
<a id="trace-14946"></a>
<a id="trace-14963"></a>
<a id="trace-14965"></a>
<a id="trace-14973"></a>
<a id="trace-14975"></a>
<a id="trace-14991"></a>
<a id="trace-14993"></a>
<a id="trace-15000"></a>
<a id="trace-15002"></a>
<a id="trace-15075"></a>
<a id="trace-15077"></a>
<a id="trace-15086"></a>
<a id="trace-15088"></a>
<a id="trace-15103"></a>
<a id="trace-15105"></a>
<a id="trace-15119"></a>
<a id="trace-15121"></a>
<a id="trace-15136"></a>
<a id="trace-15138"></a>
<a id="trace-15145"></a>
<a id="trace-15147"></a>
<a id="trace-15162"></a>
<a id="trace-15164"></a>
<a id="trace-15171"></a>
<a id="trace-15173"></a>
<a id="trace-15186"></a>
<a id="trace-15188"></a>
<a id="trace-15197"></a>
<a id="trace-15199"></a>
<a id="trace-15271"></a>
<a id="trace-15273"></a>
<a id="trace-15279"></a>
<a id="trace-15281"></a>
<a id="trace-15294"></a>
<a id="trace-15296"></a>
<a id="trace-15305"></a>
<a id="trace-15307"></a>
<a id="trace-15324"></a>
<a id="trace-15326"></a>
<a id="trace-15334"></a>
<a id="trace-15336"></a>
<a id="trace-15349"></a>
<a id="trace-15351"></a>
<a id="trace-15420"></a>
<a id="trace-15422"></a>
<a id="trace-15434"></a>
<a id="trace-15436"></a>
<a id="trace-15448"></a>
<a id="trace-15450"></a>
<a id="trace-15516"></a>
<a id="trace-15518"></a>
<a id="trace-15531"></a>
<a id="trace-15533"></a>
<a id="trace-15547"></a>
<a id="trace-15549"></a>
<a id="trace-15562"></a>
<a id="trace-15564"></a>
<a id="trace-15577"></a>
<a id="trace-15579"></a>
<a id="trace-15589"></a>
<a id="trace-15591"></a>
<a id="trace-15603"></a>
<a id="trace-15605"></a>
<a id="trace-15618"></a>
<a id="trace-15620"></a>
<a id="trace-15629"></a>
<a id="trace-15631"></a>
<a id="trace-15640"></a>
<a id="trace-15642"></a>
<a id="trace-15710"></a>
<a id="trace-15712"></a>
<a id="trace-15724"></a>
<a id="trace-15726"></a>
<a id="trace-15738"></a>
<a id="trace-15740"></a>
<a id="trace-15751"></a>
<a id="trace-15753"></a>
<a id="trace-15767"></a>
<a id="trace-15769"></a>
<a id="trace-15782"></a>
<a id="trace-15784"></a>
<a id="trace-15799"></a>
<a id="trace-15801"></a>
<a id="trace-15813"></a>
<a id="trace-15815"></a>
<a id="trace-15828"></a>
<a id="trace-15830"></a>
<a id="trace-15840"></a>
<a id="trace-15842"></a>
<a id="trace-15911"></a>
<a id="trace-15913"></a>
<a id="trace-15923"></a>
<a id="trace-15925"></a>
<a id="trace-15941"></a>
<a id="trace-15943"></a>
<a id="trace-15953"></a>
<a id="trace-15955"></a>
<a id="trace-15966"></a>
<a id="trace-15968"></a>
- 59.75s–87.25s (×112), actor 5, squad 0 (trace 14766): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 14495. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3275310951577727, 'next_transition': 14843}.
<a id="trace-1035"></a>
- 72.05s–72.05s (×1), actor 5, squad 1 (events line 1035): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15314"></a>
- 72.05s–72.05s (×1), actor 5, squad 1 (trace 15314): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.120485 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.05s, trace 15314. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15356}.
<a id="trace-15315"></a>
- 72.05s–72.05s (×1), actor 5, squad 1 (trace 15315): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.120485 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.05s, trace 15315. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15356}.
<a id="trace-15356"></a>
- 73.25s–73.25s (×1), actor 9, squad 1 (trace 15356): Withdraw to received rally. Knowledge: actor memory at 70.00s, trace 15209. Next observer evidence: {'until': 84.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 15834}.
<a id="trace-15357"></a>
- 73.25s–73.25s (×1), actor 9, squad 1 (trace 15357): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 15209. Next observer evidence: {'until': 84.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 15834}.
<a id="trace-15834"></a>
- 84.50s–84.50s (×1), actor 9, squad 1 (trace 15834): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 15651. Next observer evidence: {'until': 90.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16086}.
<a id="trace-15835"></a>
- 84.50s–84.50s (×1), actor 9, squad 1 (trace 15835): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 15651. Next observer evidence: {'until': 90.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16086}.
<a id="trace-16085"></a>
- 90.60s–90.60s (×1), actor 6, squad 0 (trace 16085): renew committed intent (75 s lifetime). Knowledge: actor memory at 90.60s, trace 16085. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1102}.
<a id="trace-16086"></a>
- 90.60s–90.60s (×1), actor 6, squad 1 (trace 16086): renew committed intent (75 s lifetime). Knowledge: actor memory at 90.60s, trace 16086. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1103}.
<a id="trace-1102"></a>
- 90.60s–90.60s (×1), actor 6, squad 0 (events line 1102): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16095}.
<a id="trace-1103"></a>
- 90.60s–90.60s (×1), actor 6, squad 1 (events line 1103): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1138}.
<a id="trace-16095"></a>
<a id="trace-16097"></a>
<a id="trace-16112"></a>
<a id="trace-16114"></a>
<a id="trace-16130"></a>
<a id="trace-16132"></a>
<a id="trace-16148"></a>
<a id="trace-16150"></a>
<a id="trace-16222"></a>
<a id="trace-16224"></a>
<a id="trace-16239"></a>
<a id="trace-16241"></a>
<a id="trace-16260"></a>
<a id="trace-16262"></a>
<a id="trace-16282"></a>
<a id="trace-16284"></a>
<a id="trace-16296"></a>
<a id="trace-16298"></a>
<a id="trace-16369"></a>
<a id="trace-16371"></a>
- 91.25s–100.25s (×20), actor 6, squad 0 (trace 16095): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 90.60s, trace 16086. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16112}.
<a id="trace-16380"></a>
- 100.65s–100.65s (×1), actor 1, squad 0 (trace 16380): NeedSupport. Knowledge: actor memory at 100.00s, trace 16310. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16395}.
<a id="trace-16395"></a>
<a id="trace-16397"></a>
- 101.25s–101.25s (×2), actor 6, squad 0 (trace 16395): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 100.00s, trace 16311. Next observer evidence: {'until': 104.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 16465}.
<a id="trace-16465"></a>
- 104.80s–104.80s (×1), actor 1, squad 0 (trace 16465): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 100.00s, trace 16310. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16525}.
<a id="trace-16525"></a>
<a id="trace-16542"></a>
<a id="trace-16544"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16585"></a>
<a id="trace-16587"></a>
<a id="trace-16606"></a>
<a id="trace-16608"></a>
- 105.25s–109.25s (×9), actor 1, squad 0 (trace 16525): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 105.00s, trace 16467. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16542}.
<a id="trace-1138"></a>
- 107.35s–107.35s (×1), actor 1, squad 1 (events line 1138): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1351}.
<a id="trace-16570"></a>
- 107.35s–107.35s (×1), actor 1, squad 1 (trace 16570): renew committed intent (75 s lifetime). Knowledge: actor memory at 107.35s, trace 16570. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1351}.
<a id="trace-1150"></a>
- 110.15s–110.15s (×1), actor 1, squad 0 (events line 1150): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16684}.
<a id="trace-16639"></a>
- 110.15s–110.15s (×1), actor 1, squad 0 (trace 16639): renew committed intent (75 s lifetime). Knowledge: actor memory at 110.15s, trace 16639. Next observer evidence: {'until': 110.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16684}.
<a id="trace-16684"></a>
<a id="trace-16686"></a>
<a id="trace-16701"></a>
<a id="trace-16703"></a>
<a id="trace-16721"></a>
<a id="trace-16723"></a>
<a id="trace-16745"></a>
<a id="trace-16747"></a>
<a id="trace-16762"></a>
<a id="trace-16764"></a>
<a id="trace-16836"></a>
<a id="trace-16838"></a>
<a id="trace-16859"></a>
<a id="trace-16861"></a>
<a id="trace-16878"></a>
<a id="trace-16880"></a>
<a id="trace-16898"></a>
<a id="trace-16900"></a>
<a id="trace-16913"></a>
<a id="trace-16915"></a>
<a id="trace-16990"></a>
<a id="trace-16992"></a>
<a id="trace-17007"></a>
<a id="trace-17009"></a>
<a id="trace-17025"></a>
<a id="trace-17027"></a>
<a id="trace-17052"></a>
<a id="trace-17054"></a>
<a id="trace-17073"></a>
<a id="trace-17075"></a>
<a id="trace-17143"></a>
<a id="trace-17145"></a>
<a id="trace-17159"></a>
<a id="trace-17161"></a>
<a id="trace-17176"></a>
<a id="trace-17178"></a>
<a id="trace-17200"></a>
<a id="trace-17202"></a>
<a id="trace-17226"></a>
<a id="trace-17228"></a>
<a id="trace-17305"></a>
<a id="trace-17307"></a>
<a id="trace-17324"></a>
<a id="trace-17326"></a>
<a id="trace-17341"></a>
<a id="trace-17343"></a>
<a id="trace-17366"></a>
<a id="trace-17368"></a>
<a id="trace-17384"></a>
<a id="trace-17386"></a>
<a id="trace-17460"></a>
<a id="trace-17462"></a>
<a id="trace-17488"></a>
<a id="trace-17490"></a>
<a id="trace-17509"></a>
<a id="trace-17511"></a>
<a id="trace-17530"></a>
<a id="trace-17532"></a>
<a id="trace-17549"></a>
<a id="trace-17551"></a>
<a id="trace-17621"></a>
<a id="trace-17623"></a>
<a id="trace-17642"></a>
<a id="trace-17644"></a>
<a id="trace-17665"></a>
<a id="trace-17667"></a>
<a id="trace-17691"></a>
<a id="trace-17693"></a>
<a id="trace-17713"></a>
<a id="trace-17715"></a>
<a id="trace-17785"></a>
<a id="trace-17787"></a>
<a id="trace-17802"></a>
<a id="trace-17804"></a>
<a id="trace-17821"></a>
<a id="trace-17823"></a>
<a id="trace-17845"></a>
<a id="trace-17847"></a>
<a id="trace-17868"></a>
<a id="trace-17870"></a>
<a id="trace-17949"></a>
<a id="trace-17951"></a>
<a id="trace-17969"></a>
<a id="trace-17971"></a>
<a id="trace-17984"></a>
<a id="trace-17986"></a>
<a id="trace-18007"></a>
<a id="trace-18009"></a>
<a id="trace-18022"></a>
<a id="trace-18024"></a>
<a id="trace-18096"></a>
<a id="trace-18098"></a>
<a id="trace-18123"></a>
<a id="trace-18125"></a>
<a id="trace-18144"></a>
<a id="trace-18146"></a>
<a id="trace-18167"></a>
<a id="trace-18169"></a>
<a id="trace-18186"></a>
<a id="trace-18188"></a>
<a id="trace-18254"></a>
<a id="trace-18256"></a>
<a id="trace-18275"></a>
<a id="trace-18277"></a>
<a id="trace-18299"></a>
<a id="trace-18301"></a>
<a id="trace-18326"></a>
<a id="trace-18328"></a>
<a id="trace-18343"></a>
<a id="trace-18345"></a>
<a id="trace-18415"></a>
<a id="trace-18417"></a>
<a id="trace-18436"></a>
<a id="trace-18438"></a>
<a id="trace-18451"></a>
<a id="trace-18453"></a>
<a id="trace-18477"></a>
<a id="trace-18502"></a>
<a id="trace-18504"></a>
<a id="trace-18579"></a>
- 110.25s–170.30s (×120), actor 1, squad 0 (trace 16684): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 110.15s, trace 16639. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16701}.
<a id="trace-1351"></a>
- 168.50s–168.50s (×1), actor 1, squad 1 (events line 1351): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 198.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1602}.
<a id="trace-18485"></a>
- 168.50s–168.50s (×1), actor 1, squad 1 (trace 18485): renew committed intent (75 s lifetime). Knowledge: actor memory at 168.50s, trace 18485. Next observer evidence: {'until': 198.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1602}.
<a id="trace-1371"></a>
- 171.30s–171.30s (×1), actor 1, squad 0 (events line 1371): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18617}.
<a id="trace-18596"></a>
<a id="trace-18598"></a>
- 171.30s–171.30s (×2), actor 1, squad 0 (trace 18596): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 170.00s, trace 18522. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18617}.
<a id="trace-18605"></a>
- 171.30s–171.30s (×1), actor 1, squad 0 (trace 18605): renew committed intent (75 s lifetime). Knowledge: actor memory at 171.30s, trace 18605. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18617}.
<a id="trace-18617"></a>
<a id="trace-18619"></a>
<a id="trace-18637"></a>
<a id="trace-18639"></a>
<a id="trace-18655"></a>
<a id="trace-18657"></a>
<a id="trace-18735"></a>
<a id="trace-18737"></a>
<a id="trace-18759"></a>
<a id="trace-18761"></a>
<a id="trace-18781"></a>
<a id="trace-18783"></a>
<a id="trace-18802"></a>
<a id="trace-18819"></a>
<a id="trace-18821"></a>
<a id="trace-18892"></a>
<a id="trace-18911"></a>
<a id="trace-18913"></a>
<a id="trace-18935"></a>
<a id="trace-18937"></a>
<a id="trace-18966"></a>
<a id="trace-18968"></a>
<a id="trace-18983"></a>
<a id="trace-18985"></a>
<a id="trace-19055"></a>
<a id="trace-19057"></a>
<a id="trace-19074"></a>
<a id="trace-19076"></a>
<a id="trace-19091"></a>
<a id="trace-19093"></a>
<a id="trace-19116"></a>
<a id="trace-19138"></a>
<a id="trace-19140"></a>
<a id="trace-19214"></a>
<a id="trace-19216"></a>
<a id="trace-19232"></a>
<a id="trace-19234"></a>
<a id="trace-19249"></a>
<a id="trace-19251"></a>
<a id="trace-19269"></a>
<a id="trace-19271"></a>
<a id="trace-19286"></a>
<a id="trace-19288"></a>
<a id="trace-19366"></a>
<a id="trace-19368"></a>
<a id="trace-19393"></a>
<a id="trace-19395"></a>
<a id="trace-19406"></a>
<a id="trace-19408"></a>
<a id="trace-19426"></a>
<a id="trace-19428"></a>
<a id="trace-19446"></a>
<a id="trace-19448"></a>
<a id="trace-19518"></a>
<a id="trace-19520"></a>
<a id="trace-19542"></a>
<a id="trace-19544"></a>
<a id="trace-19566"></a>
<a id="trace-19568"></a>
<a id="trace-19590"></a>
<a id="trace-19592"></a>
<a id="trace-19605"></a>
<a id="trace-19607"></a>
<a id="trace-19675"></a>
<a id="trace-19677"></a>
<a id="trace-19693"></a>
<a id="trace-19695"></a>
<a id="trace-19712"></a>
<a id="trace-19714"></a>
<a id="trace-19740"></a>
<a id="trace-19742"></a>
<a id="trace-19760"></a>
<a id="trace-19762"></a>
<a id="trace-19837"></a>
<a id="trace-19839"></a>
<a id="trace-19856"></a>
<a id="trace-19858"></a>
<a id="trace-19874"></a>
<a id="trace-19876"></a>
<a id="trace-19898"></a>
<a id="trace-19900"></a>
<a id="trace-19916"></a>
<a id="trace-19918"></a>
<a id="trace-19995"></a>
<a id="trace-19997"></a>
<a id="trace-20024"></a>
<a id="trace-20026"></a>
<a id="trace-20040"></a>
<a id="trace-20042"></a>
<a id="trace-20062"></a>
<a id="trace-20064"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
<a id="trace-20151"></a>
<a id="trace-20153"></a>
<a id="trace-20175"></a>
<a id="trace-20177"></a>
<a id="trace-20198"></a>
<a id="trace-20200"></a>
<a id="trace-20224"></a>
<a id="trace-20226"></a>
<a id="trace-20242"></a>
<a id="trace-20315"></a>
<a id="trace-20317"></a>
<a id="trace-20333"></a>
<a id="trace-20335"></a>
<a id="trace-20351"></a>
<a id="trace-20353"></a>
<a id="trace-20382"></a>
<a id="trace-20384"></a>
<a id="trace-20404"></a>
<a id="trace-20406"></a>
<a id="trace-20474"></a>
<a id="trace-20476"></a>
<a id="trace-20496"></a>
<a id="trace-20498"></a>
<a id="trace-20516"></a>
<a id="trace-20518"></a>
- 172.30s–232.30s (×118), actor 1, squad 0 (trace 18617): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 171.30s, trace 18605. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18637}.
<a id="trace-1602"></a>
- 230.35s–230.35s (×1), actor 1, squad 1 (events line 1602): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20483"></a>
- 230.35s–230.35s (×1), actor 1, squad 1 (trace 20483): renew committed intent (75 s lifetime). Knowledge: actor memory at 230.35s, trace 20483. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1841}.
<a id="trace-1611"></a>
- 233.15s–233.15s (×1), actor 1, squad 0 (events line 1611): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20537"></a>
- 233.15s–233.15s (×1), actor 1, squad 0 (trace 20537): renew committed intent (75 s lifetime). Knowledge: actor memory at 233.15s, trace 20537. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20540}.
<a id="trace-20540"></a>
<a id="trace-20542"></a>
<a id="trace-20562"></a>
<a id="trace-20641"></a>
<a id="trace-20643"></a>
<a id="trace-20661"></a>
<a id="trace-20663"></a>
<a id="trace-20679"></a>
<a id="trace-20702"></a>
<a id="trace-20704"></a>
<a id="trace-20719"></a>
<a id="trace-20721"></a>
<a id="trace-20792"></a>
<a id="trace-20794"></a>
<a id="trace-20820"></a>
<a id="trace-20822"></a>
<a id="trace-20841"></a>
<a id="trace-20843"></a>
<a id="trace-20866"></a>
<a id="trace-20868"></a>
<a id="trace-20884"></a>
<a id="trace-20956"></a>
<a id="trace-20958"></a>
<a id="trace-20976"></a>
<a id="trace-20978"></a>
<a id="trace-20995"></a>
<a id="trace-21022"></a>
<a id="trace-21024"></a>
<a id="trace-21048"></a>
<a id="trace-21050"></a>
<a id="trace-21119"></a>
<a id="trace-21121"></a>
<a id="trace-21139"></a>
<a id="trace-21141"></a>
<a id="trace-21159"></a>
<a id="trace-21161"></a>
<a id="trace-21180"></a>
<a id="trace-21182"></a>
<a id="trace-21199"></a>
<a id="trace-21201"></a>
<a id="trace-21279"></a>
<a id="trace-21281"></a>
<a id="trace-21303"></a>
<a id="trace-21305"></a>
<a id="trace-21319"></a>
<a id="trace-21321"></a>
<a id="trace-21341"></a>
<a id="trace-21343"></a>
<a id="trace-21358"></a>
<a id="trace-21360"></a>
<a id="trace-21431"></a>
<a id="trace-21433"></a>
<a id="trace-21458"></a>
<a id="trace-21460"></a>
<a id="trace-21484"></a>
<a id="trace-21486"></a>
<a id="trace-21505"></a>
<a id="trace-21507"></a>
<a id="trace-21522"></a>
<a id="trace-21524"></a>
<a id="trace-21595"></a>
<a id="trace-21597"></a>
<a id="trace-21614"></a>
<a id="trace-21616"></a>
<a id="trace-21635"></a>
<a id="trace-21637"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21684"></a>
<a id="trace-21686"></a>
<a id="trace-21753"></a>
<a id="trace-21755"></a>
<a id="trace-21773"></a>
<a id="trace-21775"></a>
<a id="trace-21788"></a>
<a id="trace-21790"></a>
<a id="trace-21811"></a>
<a id="trace-21813"></a>
<a id="trace-21834"></a>
<a id="trace-21836"></a>
<a id="trace-21908"></a>
<a id="trace-21910"></a>
<a id="trace-21929"></a>
<a id="trace-21931"></a>
<a id="trace-21946"></a>
<a id="trace-21948"></a>
<a id="trace-21969"></a>
<a id="trace-21971"></a>
<a id="trace-21988"></a>
<a id="trace-21990"></a>
<a id="trace-22058"></a>
<a id="trace-22060"></a>
<a id="trace-22084"></a>
<a id="trace-22086"></a>
<a id="trace-22108"></a>
<a id="trace-22110"></a>
<a id="trace-22130"></a>
<a id="trace-22132"></a>
<a id="trace-22145"></a>
<a id="trace-22147"></a>
<a id="trace-22220"></a>
<a id="trace-22222"></a>
<a id="trace-22238"></a>
<a id="trace-22240"></a>
<a id="trace-22259"></a>
<a id="trace-22261"></a>
<a id="trace-22288"></a>
<a id="trace-22290"></a>
<a id="trace-22309"></a>
<a id="trace-22311"></a>
<a id="trace-22380"></a>
<a id="trace-22382"></a>
<a id="trace-22402"></a>
<a id="trace-22404"></a>
<a id="trace-22421"></a>
<a id="trace-22423"></a>
<a id="trace-22442"></a>
<a id="trace-22444"></a>
<a id="trace-22468"></a>
<a id="trace-22470"></a>
- 233.30s–294.30s (×120), actor 1, squad 0 (trace 20540): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 233.15s, trace 20537. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20562}.
<a id="trace-1841"></a>
- 292.05s–292.05s (×1), actor 1, squad 1 (events line 1841): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22417"></a>
<a id="trace-24372"></a>
- 292.05s–353.65s (×2), actor 1, squad 1 (trace 22417): renew committed intent (75 s lifetime). Knowledge: actor memory at 292.05s, trace 22417. Next observer evidence: {'until': 322, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24372}.
<a id="trace-1856"></a>
- 294.85s–294.85s (×1), actor 1, squad 0 (events line 1856): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22486"></a>
- 294.85s–294.85s (×1), actor 1, squad 0 (trace 22486): renew committed intent (75 s lifetime). Knowledge: actor memory at 294.85s, trace 22486. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22551}.
<a id="trace-22551"></a>
<a id="trace-22553"></a>
<a id="trace-22571"></a>
<a id="trace-22573"></a>
<a id="trace-22588"></a>
<a id="trace-22590"></a>
<a id="trace-22613"></a>
<a id="trace-22615"></a>
<a id="trace-22630"></a>
<a id="trace-22632"></a>
<a id="trace-22706"></a>
<a id="trace-22736"></a>
<a id="trace-22757"></a>
<a id="trace-22759"></a>
<a id="trace-22780"></a>
<a id="trace-22782"></a>
<a id="trace-22797"></a>
<a id="trace-22799"></a>
<a id="trace-22866"></a>
<a id="trace-22868"></a>
<a id="trace-22885"></a>
<a id="trace-22887"></a>
<a id="trace-22909"></a>
<a id="trace-22911"></a>
<a id="trace-22935"></a>
<a id="trace-22937"></a>
<a id="trace-22955"></a>
<a id="trace-22957"></a>
<a id="trace-23027"></a>
<a id="trace-23029"></a>
<a id="trace-23044"></a>
<a id="trace-23046"></a>
<a id="trace-23062"></a>
<a id="trace-23064"></a>
<a id="trace-23085"></a>
<a id="trace-23108"></a>
<a id="trace-23110"></a>
<a id="trace-23186"></a>
<a id="trace-23205"></a>
<a id="trace-23207"></a>
<a id="trace-23221"></a>
<a id="trace-23223"></a>
<a id="trace-23247"></a>
<a id="trace-23249"></a>
<a id="trace-23265"></a>
<a id="trace-23267"></a>
<a id="trace-23338"></a>
<a id="trace-23340"></a>
<a id="trace-23367"></a>
<a id="trace-23369"></a>
<a id="trace-23386"></a>
<a id="trace-23388"></a>
<a id="trace-23406"></a>
<a id="trace-23408"></a>
<a id="trace-23426"></a>
<a id="trace-23428"></a>
<a id="trace-23495"></a>
<a id="trace-23497"></a>
<a id="trace-23515"></a>
<a id="trace-23517"></a>
<a id="trace-23538"></a>
<a id="trace-23540"></a>
<a id="trace-23567"></a>
<a id="trace-23569"></a>
<a id="trace-23585"></a>
<a id="trace-23587"></a>
<a id="trace-23656"></a>
<a id="trace-23658"></a>
<a id="trace-23677"></a>
<a id="trace-23679"></a>
<a id="trace-23694"></a>
<a id="trace-23696"></a>
<a id="trace-23720"></a>
<a id="trace-23722"></a>
<a id="trace-23745"></a>
<a id="trace-23747"></a>
<a id="trace-23822"></a>
<a id="trace-23824"></a>
<a id="trace-23838"></a>
<a id="trace-23840"></a>
<a id="trace-23857"></a>
<a id="trace-23859"></a>
<a id="trace-23879"></a>
<a id="trace-23881"></a>
<a id="trace-23898"></a>
<a id="trace-23900"></a>
<a id="trace-23976"></a>
<a id="trace-23978"></a>
<a id="trace-23999"></a>
<a id="trace-24001"></a>
<a id="trace-24019"></a>
<a id="trace-24021"></a>
<a id="trace-24040"></a>
<a id="trace-24042"></a>
<a id="trace-24058"></a>
<a id="trace-24060"></a>
<a id="trace-24132"></a>
<a id="trace-24134"></a>
<a id="trace-24153"></a>
<a id="trace-24155"></a>
<a id="trace-24177"></a>
<a id="trace-24179"></a>
<a id="trace-24206"></a>
<a id="trace-24208"></a>
<a id="trace-24221"></a>
<a id="trace-24223"></a>
<a id="trace-24291"></a>
<a id="trace-24293"></a>
<a id="trace-24316"></a>
<a id="trace-24318"></a>
<a id="trace-24333"></a>
<a id="trace-24358"></a>
<a id="trace-24360"></a>
<a id="trace-24386"></a>
<a id="trace-24388"></a>
<a id="trace-24461"></a>
<a id="trace-24463"></a>
<a id="trace-24483"></a>
<a id="trace-24485"></a>
- 295.30s–356.30s (×119), actor 1, squad 0 (trace 22551): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 295.00s, trace 22489. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22571}.
<a id="trace-2089"></a>
- 353.65s–353.65s (×1), actor 1, squad 1 (events line 2089): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-2105"></a>
- 356.45s–356.45s (×1), actor 1, squad 0 (events line 2105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24493"></a>
- 356.45s–356.45s (×1), actor 1, squad 0 (trace 24493): renew committed intent (75 s lifetime). Knowledge: actor memory at 356.45s, trace 24493. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24502}.
<a id="trace-24502"></a>
<a id="trace-24504"></a>
<a id="trace-24524"></a>
<a id="trace-24526"></a>
<a id="trace-24542"></a>
<a id="trace-24544"></a>
- 357.30s–359.30s (×6), actor 1, squad 0 (trace 24502): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 356.45s, trace 24493. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24524}.

## Net delivery

136 matched order/radio deliveries; 497 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.556s; maximum 2.800s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3640: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3641: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3642: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 19.80s leader 5, trace 3643: estimate 9.96; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3657: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3658: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3660: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3662: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3663: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3664: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3665: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3667: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3669: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3670: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3671: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3672: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3673: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3674: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3675: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4594: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4597: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4598: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4600: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 4601: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4602: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4603: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4605: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4607: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4608: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4609: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4610: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4611: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 4612: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 4613: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 27.05s leader 5, trace 9758: estimate 14.27; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 9925: estimate 14.18; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 9926: estimate 14.18; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 9929: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 9930: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 9931: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 9932: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 9933: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 9934: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 9935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 9936: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 9937: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 9938: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 9939: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 9940: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 9941: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 9942: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 9943: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 9944: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 9945: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 9946: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 9947: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 9948: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 9949: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 13278: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 13279: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 13280: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 13281: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 13282: estimate 15.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 13283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 13284: estimate 16.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 13285: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 13286: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 13287: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 13288: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 13289: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 13290: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 13291: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 13292: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 13293: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 13294: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 13295: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 13296: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 13297: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 13584: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 13585: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 13586: estimate 15.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 13587: estimate 15.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 13588: estimate 15.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 13589: estimate 13.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 13590: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 13591: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 13592: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 13593: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 13594: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 13595: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 13596: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 13597: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 13598: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 13599: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 13600: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 13919: estimate 15.55; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 13920: estimate 15.55; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 14020: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 14021: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 14022: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 14023: estimate 15.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 14024: estimate 15.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 14025: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 14026: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 14027: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 14028: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 14029: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 14030: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 14031: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 14032: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 14033: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 14034: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 14035: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 14036: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 14262: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 14263: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 14264: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 14265: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 14266: estimate 15.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 14267: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 14268: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 14269: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 14270: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 14271: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 14272: estimate 13.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 14273: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 14274: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 14275: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 14276: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 14277: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 14278: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 14493: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 14494: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 14495: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 14496: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 14497: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 14498: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 14499: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 14500: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 14501: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 14502: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 14503: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 14504: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 14505: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 14506: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 14507: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 14508: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 14509: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 14774: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 14775: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 14776: estimate 15.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 14777: estimate 15.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 14778: estimate 15.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 14779: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 14780: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 14781: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 14782: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 14783: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 14784: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 14785: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 14786: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 14787: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 14788: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 14789: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 15012: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 15013: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 15014: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 15015: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 15016: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 15017: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 15018: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 15019: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 15020: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 15021: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 15022: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 15023: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 15024: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 15025: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 15026: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 15206: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 15207: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 15208: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 15209: estimate 14.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 15210: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 15211: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 15212: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 15213: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 15214: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 15215: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 15216: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 15217: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 15218: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 15219: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 15220: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.05s leader 5, trace 15314: estimate 15.10; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.05s leader 5, trace 15315: estimate 15.10; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 15455: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 15456: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 15457: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 15458: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 15459: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 15460: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 15461: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 15462: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 15463: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 15464: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 15465: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 15466: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 15467: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 15468: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 15469: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 15648: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 15649: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 15650: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 15651: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 15652: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 15653: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 15654: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 15655: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 15656: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 15657: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 15658: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 15659: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 15660: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 15661: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 15662: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 15850: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 15851: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 15852: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 15853: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 15854: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 15855: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 15856: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 15857: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 15858: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 15859: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 15860: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 15861: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 15862: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 15863: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 15864: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 16018: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 16019: estimate 14.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 16020: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 16021: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 16022: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 16023: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 16024: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 16025: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 16026: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 16027: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 16028: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 16029: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 16030: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 16031: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.60s leader 6, trace 16085: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.60s leader 6, trace 16086: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 16163: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 16164: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 16165: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 16166: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 16167: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 16168: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 16169: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 16170: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 16171: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 16172: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 16173: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 16174: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 16175: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 16176: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 16310: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 16311: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 16312: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 16313: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 16314: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 16315: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 16316: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 16317: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 16318: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 16319: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 16320: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 16321: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 16322: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 16323: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 16467: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 16468: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 16469: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 16470: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 16471: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 16472: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 16473: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 16474: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 16475: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 16476: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 16477: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 16478: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 16479: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.35s leader 1, trace 16570: estimate 12.86; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 16625: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 16626: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16627: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16628: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16629: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16630: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16631: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16632: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16633: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16634: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16635: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 16636: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 16637: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.15s leader 1, trace 16639: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16778: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 16779: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16780: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16781: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16782: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16783: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16784: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16785: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16786: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16787: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16788: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 16789: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 16790: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16931: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16932: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16933: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16934: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16935: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16936: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16937: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16938: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16939: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16940: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16941: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 16942: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 16943: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 17086: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 17087: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17088: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17089: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17090: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17091: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17092: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17093: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17094: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17095: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17096: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 17097: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 17098: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 17243: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 17244: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 17245: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 17246: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 17247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 17248: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 17249: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 17250: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 17251: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 17252: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 17253: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 17254: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 17255: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 17399: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 17400: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 17401: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17402: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 17403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17404: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17405: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17406: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 17407: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 17408: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 17409: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 17410: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 17411: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 17565: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 17566: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17567: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17568: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17570: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17571: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17572: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17573: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17574: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 17575: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 17576: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 17577: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 17728: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17729: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17730: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17731: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17733: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17734: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17735: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17736: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17737: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17738: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 17739: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 17740: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 17887: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 17888: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 17889: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17890: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 17891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17892: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17893: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17894: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 17895: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17896: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 17897: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 17898: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 17899: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 18037: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 18038: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 18039: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 18040: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 18041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 18042: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 18043: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 18044: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 18045: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 18046: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 18047: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 18048: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 18049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 18198: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 18199: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 18200: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 18201: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 18202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 18203: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 18204: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 18205: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 18206: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 18207: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 18208: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 18209: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 18210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 18358: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 18359: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18360: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18361: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18363: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18364: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18365: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18366: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18367: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18368: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 18369: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 18370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 168.50s leader 1, trace 18485: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 18522: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 18523: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18524: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18525: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18527: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18528: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18529: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18530: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18531: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18532: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 18533: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 18534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 171.30s leader 1, trace 18605: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 18674: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 18675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 18676: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18677: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 18678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18679: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18680: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18681: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 18682: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18683: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 18684: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 18685: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 18686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 18833: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 18834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 18835: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 18836: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 18837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 18838: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 18839: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 18840: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 18841: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 18842: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 18843: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 18844: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 18845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 18999: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 19000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 19001: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 19002: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 19003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 19004: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 19005: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 19006: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 19007: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 19008: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 19009: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 19010: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 19011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 19158: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 19159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 19160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 19162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19164: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19165: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19167: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19168: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 19169: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 19170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 19305: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 19306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19311: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19312: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 19313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19314: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19315: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 19316: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 19317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 19460: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 19461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19466: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19467: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 19468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19469: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19470: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 19471: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 19472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 19616: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 19617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 19618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 19619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 19620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 19621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 19624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 19626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 19627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 19628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 19780: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 19781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 19782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 19783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 19784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 19785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 19786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 19787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 19788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 19789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 19790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 19791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 19792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 19938: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 19939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 19940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 19941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 19942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 19943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 19944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 19945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 19946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 19947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 19948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 19949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 19950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 20094: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 20095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 20096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 20097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 20098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 20099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 20102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 20105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 20106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 20256: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 20257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 20264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 20267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 20268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 20416: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 20417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 20418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 20420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 20424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 20426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 20427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 20428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.35s leader 1, trace 20483: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.15s leader 1, trace 20537: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 20580: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 20581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 20582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 20583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 20584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 20585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 20586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 20587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 20588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 20589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 20590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 20591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 20592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 20735: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 20736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 20737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 20738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 20739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 20740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 20741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 20742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 20743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 20744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 20745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 20746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 20747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 20900: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 20901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 20902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 20910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 20911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 20912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 21063: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 21064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 21067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 21071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 21074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 21075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 21218: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 21219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 21220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 21221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 21222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 21223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 21224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 21225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 21226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 21227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 21229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 21230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 21374: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 21375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 21376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 21377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 21378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 21379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 21382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 21385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 21386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 21537: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 21538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 21539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 21540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 21541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 21542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 21543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 21544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 21545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 21546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 21547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 21548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 21549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 21696: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 21697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 21698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 21699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 21700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 21701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 21702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 21703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 21704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 21705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 21706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 21707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 21708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 21852: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 21853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 21854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 21855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 21856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 21857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 21858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 21859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 21860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 21861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 21862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 21863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 21864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 22000: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 22001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 22002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 22003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 22004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 22005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 22006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 22007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 22008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 22009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 22011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 22012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 22162: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 22163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 22164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 22165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 22166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 22167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 22170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 22173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 22174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 22323: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 22324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 22325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 22326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 22327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 22328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 22329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 22330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 22331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 22332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 22333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 22334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 22335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 292.05s leader 1, trace 22417: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 294.85s leader 1, trace 22486: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 22489: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 22490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 22491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 22492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 22493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 22494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 22495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 22496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 22497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 22498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 22499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 22500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 22501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 22645: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 22646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 22647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 22648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 22649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 22650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 22651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 22652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 22653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 22654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 22655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 22656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 22657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 22811: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 22812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 22813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 22814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 22815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 22816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 22817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 22818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 22819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 22820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 22821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 22822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 22823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 22971: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 22972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 22973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 22974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 22975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 22976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 22977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 22978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 22979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 22980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 22981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 22982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 22983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 23125: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 23126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 23133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 23136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 23137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 23280: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 23281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 23282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 23283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 23284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 23285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 23286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 23287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 23288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 23289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 23290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 23291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 23292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 23440: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 23441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 23442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 23443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 23444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 23445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 23446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 23447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 23448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 23449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 23450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 23451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 23452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 23600: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 23601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 23602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 23603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 23604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 23606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 23607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 23608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 23609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 23610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 23611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 23612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 23767: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 23768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 23770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 23773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 23774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 23776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 23777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 23778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 23779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 23916: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 23917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 23918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 23919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 23920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 23921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 23922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 23923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 23924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 23925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 23926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 23927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 23928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 24075: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 24076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 24077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 24083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 24086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 24087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 24236: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 24237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 24247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 24248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 353.65s leader 1, trace 24372: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 24406: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 24407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 24408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 24409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 24410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 24413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 24414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 24415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 24416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 24417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 24418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.45s leader 1, trace 24493: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 24559: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 24560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 24561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 24562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 24563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 24564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 24565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 24566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 24567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 24568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 24569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 24570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 24571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Bren incapacitated
- 1: Dane incapacitated
- 1: Ash killed in action
- 1: Tern incapacitated
- 1: Ellis incapacitated
- 1: Reed incapacitated
- 1: Bram incapacitated
- 1: Soren killed in action
- 1: Iven killed in action
- 1: Moss incapacitated

## Outcome attribution

- 72.05s, evidence 1035: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 72.05s, evidence 15314: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.120485 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15356}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 72.05s, evidence 15315: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.120485 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15356}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 90.60s, evidence 1103: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1138}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 107.35s, evidence 1138: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1351}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 168.50s, evidence 1351: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 198.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1602}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 230.35s, evidence 1602: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 292.05s, evidence 1841: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 353.65s, evidence 2089: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
