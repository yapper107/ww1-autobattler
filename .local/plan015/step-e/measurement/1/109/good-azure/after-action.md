# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/1/109/good-azure/battle-109-1789673651406109291`

## Battle summary

**Ember** · 360 s · 521 shots.

### Turning points

- 25.6s, squad 4: contact (events line 314). First recorded contact.
- 48.0s, squad 0: help call ([trace 12165](#trace-12165)). No completion observed before termination.
- 49.5s, squad 1: help answer ([trace 12726](#trace-12726)). 79.8s, squad 1: answered a neighbour with support by fire.
- 50.0s, squad 0: help call ([trace 15971](#trace-15971)). No completion observed before termination.
- 62.2s, squad 1: help call ([trace 19728](#trace-19728)). 64.7s, squad 0: answered a neighbour with support by fire.
- 64.7s, squad 0: help answer ([trace 20277](#trace-20277)). 65.3s, squad 0: advanced tactically.
- 78.2s, squad 0: help call ([trace 27165](#trace-27165)). 79.8s, squad 1: answered a neighbour with support by fire.
- 79.8s, squad 1: help answer ([trace 27582](#trace-27582)). 86.3s, squad 1: took cover and returned fire.
- 89.6s, squad 1: withdrawal ([trace 30798](#trace-30798)). 109.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 92.3s, squad 0: withdrawal ([trace 31004](#trace-31004)). 174.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 2 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 5 further drill types; withdrew; 92 shots, 6/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 30 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 291 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 108 shots, 0/4 lost.

### Decisions and attribution

At 79.8s, squad 1 chose answered a neighbour with support by fire ([trace 27582](#trace-27582)), followed by 1 shots and 2 own casualties; estimate 14.8 against 0 distinct squad-reported contacts; At 65.8s, squad 1 chose FightHere: nearest known group ([trace 23716](#trace-23716)), followed by 11 shots and 0 own casualties; estimate 14.6 against 5 distinct squad-reported contacts; At 52.1s, squad 1 chose HelpSquad: received need unanswered for one report round trip ([trace 16183](#trace-16183)), followed by 5 shots and 0 own casualties; estimate 14.8 against 1 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 830](#trace-830)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.936513370010878, 'next_transition': 849}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 832](#trace-832)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111920123757026, 'next_transition': 1003}.

### Communication

312 matched deliveries (mean 0.39s, max 2.85s); 485 explicit drops; 3 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.55s, squad 4, contact, evidence events line 314: First recorded contact; .
- 48.05s, squad 0, help call, evidence 12165: NeedSupport; No completion observed before termination.
- 49.55s, squad 1, help answer, evidence 12726: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 79.8s, squad 1: answered a neighbour with support by fire.
- 50.05s, squad 0, help call, evidence 15971: NeedSupport; No completion observed before termination.
- 62.25s, squad 1, help call, evidence 19728: NeedSupport; 64.7s, squad 0: answered a neighbour with support by fire.
- 64.65s, squad 0, help answer, evidence 20277: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 65.3s, squad 0: advanced tactically.
- 78.25s, squad 0, help call, evidence 27165: NeedSupport; 79.8s, squad 1: answered a neighbour with support by fire.
- 79.80s, squad 1, help answer, evidence 27582: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 86.3s, squad 1: took cover and returned fire.
- 89.60s, squad 1, withdrawal, evidence 30798: BreakContact: believed ratio at least two without superiority; 109.7s, squad 1: contact broken or rally reached: Occupy and report strength.
- 92.35s, squad 0, withdrawal, evidence 31004: BreakContact: believed ratio at least two without superiority; 174.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 115.25s, squad 1, withdrawal, evidence 32186: Withdraw to received rally; No completion observed before termination.
- 178.90s, squad 0, withdrawal, evidence 35018: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8702932723117236, 'next_transition': 703}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8702932723117236, 'next_transition': 703}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8702932723117236, 'next_transition': 703}.
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
<a id="trace-771"></a>
<a id="trace-773"></a>
<a id="trace-794"></a>
<a id="trace-796"></a>
<a id="trace-820"></a>
<a id="trace-822"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 703): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599998700444814, 'next_transition': 730}.
<a id="trace-103"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 103): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.936513370010878, 'next_transition': 849}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111920123757026, 'next_transition': 1003}.
<a id="trace-830"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 830): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 830. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.936513370010878, 'next_transition': 849}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.936513370010878, 'next_transition': 849}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111920123757026, 'next_transition': 1003}.
<a id="trace-833"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 833): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0111920123757026, 'next_transition': 1003}.
<a id="trace-849"></a>
<a id="trace-851"></a>
<a id="trace-882"></a>
<a id="trace-884"></a>
<a id="trace-963"></a>
<a id="trace-965"></a>
<a id="trace-992"></a>
<a id="trace-994"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 849): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9441862309482401, 'next_transition': 882}.
<a id="trace-996"></a>
<a id="trace-1549"></a>
<a id="trace-1602"></a>
<a id="trace-1604"></a>
<a id="trace-1646"></a>
<a id="trace-1648"></a>
<a id="trace-1729"></a>
<a id="trace-1731"></a>
<a id="trace-1800"></a>
<a id="trace-1802"></a>
<a id="trace-1824"></a>
<a id="trace-1826"></a>
<a id="trace-1854"></a>
<a id="trace-1856"></a>
<a id="trace-1947"></a>
<a id="trace-1949"></a>
<a id="trace-1978"></a>
<a id="trace-1980"></a>
<a id="trace-2001"></a>
<a id="trace-2003"></a>
<a id="trace-2037"></a>
<a id="trace-2039"></a>
<a id="trace-2104"></a>
<a id="trace-2106"></a>
<a id="trace-2124"></a>
<a id="trace-2126"></a>
<a id="trace-2154"></a>
<a id="trace-2156"></a>
<a id="trace-2209"></a>
<a id="trace-2211"></a>
<a id="trace-2296"></a>
<a id="trace-2298"></a>
<a id="trace-2326"></a>
<a id="trace-2328"></a>
<a id="trace-2663"></a>
<a id="trace-2665"></a>
<a id="trace-2704"></a>
<a id="trace-2706"></a>
<a id="trace-2733"></a>
<a id="trace-2735"></a>
<a id="trace-2875"></a>
<a id="trace-2877"></a>
<a id="trace-3062"></a>
<a id="trace-3064"></a>
<a id="trace-3126"></a>
<a id="trace-3128"></a>
<a id="trace-3237"></a>
<a id="trace-3239"></a>
<a id="trace-3267"></a>
<a id="trace-3269"></a>
<a id="trace-3309"></a>
<a id="trace-3311"></a>
<a id="trace-3337"></a>
<a id="trace-3339"></a>
<a id="trace-3379"></a>
<a id="trace-3381"></a>
<a id="trace-3400"></a>
<a id="trace-3402"></a>
<a id="trace-3433"></a>
<a id="trace-3435"></a>
<a id="trace-3454"></a>
<a id="trace-3456"></a>
<a id="trace-3525"></a>
<a id="trace-3527"></a>
<a id="trace-3624"></a>
<a id="trace-3626"></a>
<a id="trace-3643"></a>
<a id="trace-3645"></a>
<a id="trace-3681"></a>
<a id="trace-3683"></a>
<a id="trace-3994"></a>
<a id="trace-3996"></a>
<a id="trace-4018"></a>
<a id="trace-4020"></a>
<a id="trace-4028"></a>
<a id="trace-4030"></a>
<a id="trace-4069"></a>
<a id="trace-4071"></a>
<a id="trace-4123"></a>
<a id="trace-4125"></a>
<a id="trace-4549"></a>
<a id="trace-4551"></a>
<a id="trace-4652"></a>
<a id="trace-4654"></a>
<a id="trace-4674"></a>
<a id="trace-4676"></a>
<a id="trace-5126"></a>
<a id="trace-5128"></a>
<a id="trace-5145"></a>
<a id="trace-5147"></a>
<a id="trace-5201"></a>
<a id="trace-5203"></a>
<a id="trace-5247"></a>
<a id="trace-5249"></a>
<a id="trace-5276"></a>
<a id="trace-5278"></a>
<a id="trace-5307"></a>
<a id="trace-5309"></a>
<a id="trace-5338"></a>
<a id="trace-5340"></a>
<a id="trace-6197"></a>
<a id="trace-6199"></a>
<a id="trace-6305"></a>
<a id="trace-6307"></a>
<a id="trace-6350"></a>
<a id="trace-6352"></a>
<a id="trace-6440"></a>
<a id="trace-6442"></a>
<a id="trace-6491"></a>
<a id="trace-6493"></a>
<a id="trace-6530"></a>
<a id="trace-6532"></a>
<a id="trace-6581"></a>
<a id="trace-6583"></a>
<a id="trace-6607"></a>
<a id="trace-6609"></a>
<a id="trace-6641"></a>
<a id="trace-6643"></a>
<a id="trace-7001"></a>
<a id="trace-7003"></a>
<a id="trace-7440"></a>
<a id="trace-7442"></a>
<a id="trace-7816"></a>
<a id="trace-7818"></a>
<a id="trace-7857"></a>
<a id="trace-7859"></a>
<a id="trace-8236"></a>
<a id="trace-8238"></a>
<a id="trace-9567"></a>
<a id="trace-9569"></a>
<a id="trace-9999"></a>
<a id="trace-10001"></a>
<a id="trace-10790"></a>
<a id="trace-10792"></a>
<a id="trace-10864"></a>
<a id="trace-10866"></a>
<a id="trace-10970"></a>
<a id="trace-10972"></a>
<a id="trace-11465"></a>
<a id="trace-11467"></a>
<a id="trace-11544"></a>
<a id="trace-11546"></a>
<a id="trace-11633"></a>
<a id="trace-11635"></a>
<a id="trace-12050"></a>
<a id="trace-12052"></a>
<a id="trace-12104"></a>
<a id="trace-12106"></a>
<a id="trace-12150"></a>
<a id="trace-12152"></a>
<a id="trace-12193"></a>
<a id="trace-12195"></a>
<a id="trace-16050"></a>
<a id="trace-16052"></a>
<a id="trace-16083"></a>
<a id="trace-16085"></a>
<a id="trace-16131"></a>
<a id="trace-16133"></a>
<a id="trace-16166"></a>
<a id="trace-16168"></a>
<a id="trace-16206"></a>
<a id="trace-16208"></a>
<a id="trace-16249"></a>
<a id="trace-16251"></a>
<a id="trace-16266"></a>
<a id="trace-16268"></a>
<a id="trace-16309"></a>
<a id="trace-16311"></a>
<a id="trace-16388"></a>
<a id="trace-16390"></a>
<a id="trace-16402"></a>
<a id="trace-16404"></a>
<a id="trace-16428"></a>
<a id="trace-16430"></a>
<a id="trace-16486"></a>
<a id="trace-16488"></a>
<a id="trace-19481"></a>
<a id="trace-19483"></a>
<a id="trace-19502"></a>
<a id="trace-19504"></a>
<a id="trace-19524"></a>
<a id="trace-19526"></a>
<a id="trace-19546"></a>
<a id="trace-19548"></a>
<a id="trace-19565"></a>
<a id="trace-19567"></a>
<a id="trace-19648"></a>
<a id="trace-19650"></a>
<a id="trace-19694"></a>
<a id="trace-19696"></a>
<a id="trace-19703"></a>
<a id="trace-19705"></a>
<a id="trace-19725"></a>
<a id="trace-19727"></a>
<a id="trace-20181"></a>
<a id="trace-20183"></a>
<a id="trace-20199"></a>
<a id="trace-20201"></a>
<a id="trace-20233"></a>
<a id="trace-20235"></a>
<a id="trace-23242"></a>
<a id="trace-23244"></a>
<a id="trace-23712"></a>
<a id="trace-23714"></a>
<a id="trace-23764"></a>
<a id="trace-23766"></a>
<a id="trace-23788"></a>
<a id="trace-23790"></a>
<a id="trace-23845"></a>
<a id="trace-23847"></a>
<a id="trace-26544"></a>
<a id="trace-26546"></a>
<a id="trace-26565"></a>
<a id="trace-26567"></a>
<a id="trace-26583"></a>
<a id="trace-26585"></a>
<a id="trace-26718"></a>
<a id="trace-26720"></a>
<a id="trace-26732"></a>
<a id="trace-26734"></a>
<a id="trace-26772"></a>
<a id="trace-26774"></a>
<a id="trace-26792"></a>
<a id="trace-26794"></a>
<a id="trace-26821"></a>
<a id="trace-26823"></a>
<a id="trace-26843"></a>
<a id="trace-26845"></a>
<a id="trace-26889"></a>
<a id="trace-26891"></a>
<a id="trace-26929"></a>
<a id="trace-26931"></a>
<a id="trace-27015"></a>
<a id="trace-27017"></a>
<a id="trace-27039"></a>
<a id="trace-27041"></a>
<a id="trace-27083"></a>
<a id="trace-27085"></a>
<a id="trace-27142"></a>
<a id="trace-27144"></a>
<a id="trace-27159"></a>
<a id="trace-27161"></a>
<a id="trace-27252"></a>
<a id="trace-27254"></a>
<a id="trace-27578"></a>
<a id="trace-27580"></a>
<a id="trace-29535"></a>
<a id="trace-29537"></a>
<a id="trace-29559"></a>
<a id="trace-29561"></a>
<a id="trace-29642"></a>
<a id="trace-29644"></a>
<a id="trace-29692"></a>
<a id="trace-29694"></a>
<a id="trace-29728"></a>
<a id="trace-29730"></a>
<a id="trace-29753"></a>
<a id="trace-29755"></a>
<a id="trace-29779"></a>
<a id="trace-29781"></a>
<a id="trace-29972"></a>
<a id="trace-29974"></a>
<a id="trace-30063"></a>
<a id="trace-30065"></a>
<a id="trace-30288"></a>
<a id="trace-30290"></a>
<a id="trace-30335"></a>
<a id="trace-30337"></a>
<a id="trace-30383"></a>
<a id="trace-30385"></a>
<a id="trace-30740"></a>
<a id="trace-30742"></a>
<a id="trace-30788"></a>
<a id="trace-30790"></a>
<a id="trace-30860"></a>
<a id="trace-30862"></a>
<a id="trace-30939"></a>
<a id="trace-30941"></a>
<a id="trace-30971"></a>
<a id="trace-30973"></a>
<a id="trace-31138"></a>
<a id="trace-31140"></a>
<a id="trace-31162"></a>
<a id="trace-31164"></a>
<a id="trace-31187"></a>
<a id="trace-31189"></a>
<a id="trace-31199"></a>
<a id="trace-31201"></a>
<a id="trace-31301"></a>
<a id="trace-31303"></a>
<a id="trace-31317"></a>
<a id="trace-31319"></a>
<a id="trace-31339"></a>
<a id="trace-31341"></a>
<a id="trace-31352"></a>
<a id="trace-31354"></a>
<a id="trace-31375"></a>
<a id="trace-31377"></a>
<a id="trace-31403"></a>
<a id="trace-31405"></a>
<a id="trace-31491"></a>
<a id="trace-31493"></a>
<a id="trace-31506"></a>
<a id="trace-31508"></a>
<a id="trace-31526"></a>
<a id="trace-31528"></a>
<a id="trace-31540"></a>
<a id="trace-31542"></a>
<a id="trace-31568"></a>
<a id="trace-31570"></a>
<a id="trace-31582"></a>
<a id="trace-31584"></a>
<a id="trace-31600"></a>
<a id="trace-31602"></a>
<a id="trace-31614"></a>
<a id="trace-31616"></a>
<a id="trace-31634"></a>
<a id="trace-31636"></a>
<a id="trace-31649"></a>
<a id="trace-31651"></a>
<a id="trace-31737"></a>
<a id="trace-31739"></a>
<a id="trace-31759"></a>
<a id="trace-31761"></a>
<a id="trace-31774"></a>
<a id="trace-31776"></a>
<a id="trace-31805"></a>
<a id="trace-31807"></a>
<a id="trace-31823"></a>
<a id="trace-31825"></a>
<a id="trace-31836"></a>
<a id="trace-31838"></a>
<a id="trace-31854"></a>
<a id="trace-31856"></a>
<a id="trace-31869"></a>
<a id="trace-31871"></a>
<a id="trace-31950"></a>
<a id="trace-31952"></a>
<a id="trace-31966"></a>
<a id="trace-31968"></a>
<a id="trace-31993"></a>
<a id="trace-31995"></a>
<a id="trace-32007"></a>
<a id="trace-32009"></a>
<a id="trace-32023"></a>
<a id="trace-32025"></a>
<a id="trace-32036"></a>
<a id="trace-32038"></a>
<a id="trace-32056"></a>
<a id="trace-32058"></a>
<a id="trace-32074"></a>
<a id="trace-32076"></a>
<a id="trace-32098"></a>
<a id="trace-32100"></a>
<a id="trace-32183"></a>
<a id="trace-32185"></a>
<a id="trace-32205"></a>
<a id="trace-32207"></a>
<a id="trace-32228"></a>
<a id="trace-32230"></a>
<a id="trace-32250"></a>
<a id="trace-32252"></a>
<a id="trace-32268"></a>
<a id="trace-32270"></a>
<a id="trace-32315"></a>
<a id="trace-32317"></a>
<a id="trace-32331"></a>
<a id="trace-32333"></a>
<a id="trace-32346"></a>
<a id="trace-32348"></a>
<a id="trace-32429"></a>
<a id="trace-32431"></a>
<a id="trace-32476"></a>
<a id="trace-32478"></a>
<a id="trace-32516"></a>
<a id="trace-32518"></a>
<a id="trace-32530"></a>
<a id="trace-32532"></a>
<a id="trace-32554"></a>
<a id="trace-32556"></a>
<a id="trace-32701"></a>
<a id="trace-32703"></a>
<a id="trace-32719"></a>
<a id="trace-32721"></a>
<a id="trace-32732"></a>
<a id="trace-32734"></a>
<a id="trace-32752"></a>
<a id="trace-32754"></a>
<a id="trace-32768"></a>
<a id="trace-32770"></a>
<a id="trace-32796"></a>
<a id="trace-32798"></a>
<a id="trace-32876"></a>
<a id="trace-32878"></a>
<a id="trace-32892"></a>
<a id="trace-32894"></a>
<a id="trace-32914"></a>
<a id="trace-32916"></a>
<a id="trace-32931"></a>
<a id="trace-32933"></a>
<a id="trace-32948"></a>
<a id="trace-32950"></a>
<a id="trace-32967"></a>
<a id="trace-32969"></a>
<a id="trace-32989"></a>
<a id="trace-32991"></a>
<a id="trace-33002"></a>
<a id="trace-33004"></a>
<a id="trace-33025"></a>
<a id="trace-33027"></a>
<a id="trace-33043"></a>
<a id="trace-33045"></a>
<a id="trace-33119"></a>
<a id="trace-33121"></a>
<a id="trace-33133"></a>
<a id="trace-33135"></a>
<a id="trace-33158"></a>
<a id="trace-33160"></a>
<a id="trace-33173"></a>
<a id="trace-33175"></a>
<a id="trace-33196"></a>
<a id="trace-33198"></a>
<a id="trace-33237"></a>
<a id="trace-33239"></a>
<a id="trace-33252"></a>
<a id="trace-33254"></a>
<a id="trace-33273"></a>
<a id="trace-33275"></a>
<a id="trace-33284"></a>
<a id="trace-33286"></a>
<a id="trace-33367"></a>
<a id="trace-33369"></a>
<a id="trace-33387"></a>
<a id="trace-33389"></a>
<a id="trace-33421"></a>
<a id="trace-33423"></a>
<a id="trace-33442"></a>
<a id="trace-33444"></a>
<a id="trace-33456"></a>
<a id="trace-33458"></a>
<a id="trace-33472"></a>
<a id="trace-33474"></a>
<a id="trace-33488"></a>
<a id="trace-33490"></a>
<a id="trace-33512"></a>
<a id="trace-33514"></a>
<a id="trace-33530"></a>
<a id="trace-33532"></a>
<a id="trace-33639"></a>
<a id="trace-33641"></a>
<a id="trace-33659"></a>
<a id="trace-33661"></a>
<a id="trace-33675"></a>
<a id="trace-33677"></a>
<a id="trace-33686"></a>
<a id="trace-33688"></a>
<a id="trace-33706"></a>
<a id="trace-33708"></a>
<a id="trace-33724"></a>
<a id="trace-33726"></a>
<a id="trace-33740"></a>
<a id="trace-33742"></a>
<a id="trace-33751"></a>
<a id="trace-33753"></a>
<a id="trace-33825"></a>
<a id="trace-33827"></a>
<a id="trace-33844"></a>
<a id="trace-33846"></a>
<a id="trace-33883"></a>
<a id="trace-33885"></a>
<a id="trace-33929"></a>
<a id="trace-33931"></a>
<a id="trace-33964"></a>
<a id="trace-33966"></a>
<a id="trace-33986"></a>
<a id="trace-33988"></a>
<a id="trace-34075"></a>
<a id="trace-34104"></a>
<a id="trace-34121"></a>
<a id="trace-34140"></a>
<a id="trace-34148"></a>
<a id="trace-34150"></a>
<a id="trace-34172"></a>
<a id="trace-34174"></a>
<a id="trace-34186"></a>
<a id="trace-34188"></a>
<a id="trace-34298"></a>
<a id="trace-34300"></a>
<a id="trace-34315"></a>
<a id="trace-34317"></a>
<a id="trace-34344"></a>
<a id="trace-34346"></a>
<a id="trace-34384"></a>
<a id="trace-34386"></a>
<a id="trace-34396"></a>
<a id="trace-34398"></a>
<a id="trace-34416"></a>
<a id="trace-34418"></a>
<a id="trace-34433"></a>
<a id="trace-34435"></a>
<a id="trace-34503"></a>
<a id="trace-34505"></a>
<a id="trace-34537"></a>
<a id="trace-34539"></a>
<a id="trace-34559"></a>
<a id="trace-34561"></a>
<a id="trace-34568"></a>
<a id="trace-34570"></a>
<a id="trace-34585"></a>
<a id="trace-34587"></a>
<a id="trace-34615"></a>
<a id="trace-34617"></a>
<a id="trace-34624"></a>
<a id="trace-34626"></a>
<a id="trace-34699"></a>
<a id="trace-34701"></a>
<a id="trace-34729"></a>
<a id="trace-34731"></a>
<a id="trace-34738"></a>
<a id="trace-34740"></a>
<a id="trace-34768"></a>
<a id="trace-34770"></a>
<a id="trace-34789"></a>
<a id="trace-34791"></a>
<a id="trace-34801"></a>
<a id="trace-34803"></a>
<a id="trace-34825"></a>
<a id="trace-34827"></a>
<a id="trace-34839"></a>
<a id="trace-34841"></a>
<a id="trace-34908"></a>
<a id="trace-34910"></a>
<a id="trace-34922"></a>
<a id="trace-34924"></a>
<a id="trace-34940"></a>
<a id="trace-34942"></a>
<a id="trace-34955"></a>
<a id="trace-34957"></a>
<a id="trace-34972"></a>
<a id="trace-34974"></a>
<a id="trace-35000"></a>
<a id="trace-35002"></a>
<a id="trace-35011"></a>
<a id="trace-35013"></a>
<a id="trace-35126"></a>
<a id="trace-35128"></a>
<a id="trace-35215"></a>
<a id="trace-35217"></a>
<a id="trace-35232"></a>
<a id="trace-35234"></a>
<a id="trace-35252"></a>
<a id="trace-35254"></a>
<a id="trace-35261"></a>
<a id="trace-35263"></a>
<a id="trace-35280"></a>
<a id="trace-35282"></a>
<a id="trace-35289"></a>
<a id="trace-35291"></a>
<a id="trace-35304"></a>
<a id="trace-35306"></a>
<a id="trace-35320"></a>
<a id="trace-35322"></a>
<a id="trace-35336"></a>
<a id="trace-35338"></a>
<a id="trace-35352"></a>
<a id="trace-35354"></a>
<a id="trace-35455"></a>
<a id="trace-35457"></a>
<a id="trace-35464"></a>
<a id="trace-35466"></a>
<a id="trace-35483"></a>
<a id="trace-35485"></a>
<a id="trace-35499"></a>
<a id="trace-35501"></a>
<a id="trace-35528"></a>
<a id="trace-35530"></a>
<a id="trace-35540"></a>
<a id="trace-35542"></a>
<a id="trace-35615"></a>
<a id="trace-35617"></a>
<a id="trace-35642"></a>
<a id="trace-35644"></a>
<a id="trace-35666"></a>
<a id="trace-35668"></a>
<a id="trace-35695"></a>
<a id="trace-35697"></a>
<a id="trace-35721"></a>
<a id="trace-35723"></a>
<a id="trace-35735"></a>
<a id="trace-35737"></a>
<a id="trace-35817"></a>
<a id="trace-35819"></a>
<a id="trace-35860"></a>
<a id="trace-35862"></a>
<a id="trace-35883"></a>
<a id="trace-35885"></a>
<a id="trace-35900"></a>
<a id="trace-35902"></a>
<a id="trace-35920"></a>
<a id="trace-35922"></a>
<a id="trace-35933"></a>
<a id="trace-35935"></a>
<a id="trace-36006"></a>
<a id="trace-36008"></a>
<a id="trace-36022"></a>
<a id="trace-36024"></a>
<a id="trace-36049"></a>
<a id="trace-36051"></a>
<a id="trace-36067"></a>
<a id="trace-36069"></a>
<a id="trace-36104"></a>
<a id="trace-36106"></a>
<a id="trace-36215"></a>
<a id="trace-36217"></a>
<a id="trace-36237"></a>
<a id="trace-36239"></a>
<a id="trace-36247"></a>
<a id="trace-36249"></a>
<a id="trace-36269"></a>
<a id="trace-36271"></a>
<a id="trace-36283"></a>
<a id="trace-36285"></a>
<a id="trace-36300"></a>
<a id="trace-36302"></a>
<a id="trace-36314"></a>
<a id="trace-36316"></a>
<a id="trace-36322"></a>
<a id="trace-36324"></a>
<a id="trace-36396"></a>
<a id="trace-36398"></a>
<a id="trace-36415"></a>
<a id="trace-36417"></a>
<a id="trace-36421"></a>
<a id="trace-36423"></a>
<a id="trace-36438"></a>
<a id="trace-36440"></a>
<a id="trace-36452"></a>
<a id="trace-36454"></a>
<a id="trace-36462"></a>
<a id="trace-36464"></a>
<a id="trace-36470"></a>
<a id="trace-36472"></a>
<a id="trace-36486"></a>
<a id="trace-36488"></a>
<a id="trace-36492"></a>
<a id="trace-36494"></a>
<a id="trace-36561"></a>
<a id="trace-36563"></a>
<a id="trace-36570"></a>
<a id="trace-36572"></a>
<a id="trace-36587"></a>
<a id="trace-36589"></a>
<a id="trace-36602"></a>
<a id="trace-36604"></a>
<a id="trace-36614"></a>
<a id="trace-36616"></a>
<a id="trace-36622"></a>
<a id="trace-36624"></a>
<a id="trace-36636"></a>
<a id="trace-36638"></a>
<a id="trace-36648"></a>
<a id="trace-36650"></a>
<a id="trace-36742"></a>
<a id="trace-36744"></a>
<a id="trace-36753"></a>
<a id="trace-36755"></a>
<a id="trace-36777"></a>
<a id="trace-36779"></a>
<a id="trace-36791"></a>
<a id="trace-36793"></a>
<a id="trace-36798"></a>
<a id="trace-36800"></a>
<a id="trace-36814"></a>
<a id="trace-36816"></a>
<a id="trace-36822"></a>
<a id="trace-36824"></a>
<a id="trace-36841"></a>
<a id="trace-36843"></a>
<a id="trace-36852"></a>
<a id="trace-36854"></a>
<a id="trace-36921"></a>
<a id="trace-36923"></a>
<a id="trace-36950"></a>
<a id="trace-36952"></a>
<a id="trace-36958"></a>
<a id="trace-36960"></a>
<a id="trace-36971"></a>
<a id="trace-36973"></a>
<a id="trace-36979"></a>
<a id="trace-36981"></a>
<a id="trace-37023"></a>
<a id="trace-37025"></a>
<a id="trace-37096"></a>
<a id="trace-37098"></a>
<a id="trace-37109"></a>
<a id="trace-37111"></a>
<a id="trace-37125"></a>
<a id="trace-37127"></a>
<a id="trace-37136"></a>
<a id="trace-37138"></a>
<a id="trace-37156"></a>
<a id="trace-37158"></a>
<a id="trace-37165"></a>
<a id="trace-37167"></a>
<a id="trace-37177"></a>
<a id="trace-37179"></a>
<a id="trace-37187"></a>
<a id="trace-37189"></a>
<a id="trace-37207"></a>
<a id="trace-37209"></a>
<a id="trace-37214"></a>
<a id="trace-37216"></a>
<a id="trace-37305"></a>
<a id="trace-37307"></a>
<a id="trace-37320"></a>
<a id="trace-37322"></a>
<a id="trace-37336"></a>
<a id="trace-37338"></a>
<a id="trace-37346"></a>
<a id="trace-37348"></a>
<a id="trace-37365"></a>
<a id="trace-37367"></a>
<a id="trace-37373"></a>
<a id="trace-37375"></a>
<a id="trace-37394"></a>
<a id="trace-37396"></a>
<a id="trace-37402"></a>
<a id="trace-37404"></a>
<a id="trace-37472"></a>
<a id="trace-37474"></a>
<a id="trace-37484"></a>
<a id="trace-37486"></a>
<a id="trace-37497"></a>
<a id="trace-37499"></a>
<a id="trace-37506"></a>
<a id="trace-37508"></a>
<a id="trace-37528"></a>
<a id="trace-37530"></a>
<a id="trace-37543"></a>
<a id="trace-37545"></a>
<a id="trace-37554"></a>
<a id="trace-37556"></a>
<a id="trace-37577"></a>
<a id="trace-37579"></a>
<a id="trace-37587"></a>
<a id="trace-37589"></a>
<a id="trace-37670"></a>
<a id="trace-37672"></a>
<a id="trace-37685"></a>
<a id="trace-37687"></a>
<a id="trace-37693"></a>
<a id="trace-37695"></a>
<a id="trace-37707"></a>
<a id="trace-37709"></a>
<a id="trace-37712"></a>
<a id="trace-37714"></a>
<a id="trace-37728"></a>
<a id="trace-37730"></a>
<a id="trace-37740"></a>
<a id="trace-37742"></a>
<a id="trace-37757"></a>
<a id="trace-37759"></a>
<a id="trace-37769"></a>
<a id="trace-37771"></a>
<a id="trace-37840"></a>
<a id="trace-37842"></a>
<a id="trace-37850"></a>
<a id="trace-37852"></a>
<a id="trace-37867"></a>
<a id="trace-37869"></a>
<a id="trace-37878"></a>
<a id="trace-37880"></a>
<a id="trace-37905"></a>
<a id="trace-37907"></a>
<a id="trace-37924"></a>
<a id="trace-37926"></a>
<a id="trace-37942"></a>
<a id="trace-37944"></a>
<a id="trace-37952"></a>
<a id="trace-37954"></a>
<a id="trace-38018"></a>
<a id="trace-38020"></a>
<a id="trace-38028"></a>
<a id="trace-38030"></a>
<a id="trace-38055"></a>
<a id="trace-38057"></a>
<a id="trace-38074"></a>
<a id="trace-38076"></a>
<a id="trace-38099"></a>
<a id="trace-38101"></a>
<a id="trace-38113"></a>
<a id="trace-38115"></a>
<a id="trace-38128"></a>
<a id="trace-38130"></a>
<a id="trace-38135"></a>
<a id="trace-38137"></a>
<a id="trace-38205"></a>
<a id="trace-38207"></a>
<a id="trace-38230"></a>
<a id="trace-38232"></a>
<a id="trace-38238"></a>
<a id="trace-38240"></a>
<a id="trace-38254"></a>
<a id="trace-38256"></a>
<a id="trace-38261"></a>
<a id="trace-38263"></a>
<a id="trace-38277"></a>
<a id="trace-38279"></a>
<a id="trace-38291"></a>
<a id="trace-38293"></a>
<a id="trace-38320"></a>
<a id="trace-38322"></a>
<a id="trace-38395"></a>
<a id="trace-38397"></a>
<a id="trace-38416"></a>
<a id="trace-38418"></a>
<a id="trace-38425"></a>
<a id="trace-38427"></a>
<a id="trace-38438"></a>
<a id="trace-38440"></a>
<a id="trace-38458"></a>
<a id="trace-38460"></a>
<a id="trace-38467"></a>
<a id="trace-38469"></a>
<a id="trace-38578"></a>
<a id="trace-38580"></a>
<a id="trace-38599"></a>
<a id="trace-38601"></a>
<a id="trace-38620"></a>
<a id="trace-38622"></a>
<a id="trace-38627"></a>
<a id="trace-38629"></a>
<a id="trace-38650"></a>
<a id="trace-38652"></a>
<a id="trace-38666"></a>
<a id="trace-38668"></a>
<a id="trace-38767"></a>
<a id="trace-38769"></a>
<a id="trace-38777"></a>
<a id="trace-38779"></a>
<a id="trace-38798"></a>
<a id="trace-38800"></a>
<a id="trace-38803"></a>
<a id="trace-38805"></a>
<a id="trace-38820"></a>
<a id="trace-38822"></a>
<a id="trace-38836"></a>
<a id="trace-38838"></a>
<a id="trace-38925"></a>
<a id="trace-38927"></a>
<a id="trace-38933"></a>
<a id="trace-38935"></a>
<a id="trace-38950"></a>
<a id="trace-38952"></a>
<a id="trace-38974"></a>
<a id="trace-38976"></a>
<a id="trace-38983"></a>
<a id="trace-38985"></a>
<a id="trace-39006"></a>
<a id="trace-39008"></a>
<a id="trace-39026"></a>
<a id="trace-39028"></a>
<a id="trace-39038"></a>
<a id="trace-39040"></a>
<a id="trace-39119"></a>
<a id="trace-39121"></a>
<a id="trace-39135"></a>
<a id="trace-39137"></a>
<a id="trace-39142"></a>
<a id="trace-39144"></a>
<a id="trace-39156"></a>
<a id="trace-39158"></a>
<a id="trace-39176"></a>
<a id="trace-39178"></a>
<a id="trace-39187"></a>
<a id="trace-39189"></a>
<a id="trace-39209"></a>
<a id="trace-39211"></a>
<a id="trace-39288"></a>
<a id="trace-39290"></a>
<a id="trace-39300"></a>
<a id="trace-39302"></a>
<a id="trace-39315"></a>
<a id="trace-39317"></a>
<a id="trace-39329"></a>
<a id="trace-39331"></a>
<a id="trace-39348"></a>
<a id="trace-39350"></a>
<a id="trace-39363"></a>
<a id="trace-39365"></a>
<a id="trace-39374"></a>
<a id="trace-39376"></a>
<a id="trace-39392"></a>
<a id="trace-39394"></a>
<a id="trace-39401"></a>
<a id="trace-39403"></a>
<a id="trace-39470"></a>
<a id="trace-39472"></a>
<a id="trace-39479"></a>
<a id="trace-39481"></a>
<a id="trace-39498"></a>
<a id="trace-39500"></a>
<a id="trace-39512"></a>
<a id="trace-39514"></a>
<a id="trace-39529"></a>
<a id="trace-39531"></a>
<a id="trace-39538"></a>
<a id="trace-39540"></a>
<a id="trace-39560"></a>
<a id="trace-39562"></a>
<a id="trace-39569"></a>
<a id="trace-39571"></a>
<a id="trace-39583"></a>
<a id="trace-39585"></a>
<a id="trace-39592"></a>
<a id="trace-39594"></a>
<a id="trace-39663"></a>
<a id="trace-39665"></a>
<a id="trace-39671"></a>
<a id="trace-39673"></a>
<a id="trace-39688"></a>
<a id="trace-39690"></a>
<a id="trace-39695"></a>
<a id="trace-39697"></a>
<a id="trace-39713"></a>
<a id="trace-39715"></a>
<a id="trace-39723"></a>
<a id="trace-39725"></a>
<a id="trace-39750"></a>
<a id="trace-39752"></a>
<a id="trace-39775"></a>
<a id="trace-39777"></a>
<a id="trace-39857"></a>
<a id="trace-39859"></a>
<a id="trace-39873"></a>
<a id="trace-39875"></a>
<a id="trace-39892"></a>
<a id="trace-39894"></a>
<a id="trace-39899"></a>
<a id="trace-39901"></a>
<a id="trace-39913"></a>
<a id="trace-39915"></a>
<a id="trace-39944"></a>
<a id="trace-39946"></a>
<a id="trace-39954"></a>
<a id="trace-39956"></a>
<a id="trace-40049"></a>
<a id="trace-40051"></a>
<a id="trace-40076"></a>
<a id="trace-40078"></a>
<a id="trace-40083"></a>
<a id="trace-40085"></a>
<a id="trace-40099"></a>
<a id="trace-40101"></a>
<a id="trace-40107"></a>
<a id="trace-40109"></a>
<a id="trace-40131"></a>
<a id="trace-40133"></a>
<a id="trace-40201"></a>
<a id="trace-40203"></a>
<a id="trace-40213"></a>
<a id="trace-40215"></a>
<a id="trace-40230"></a>
<a id="trace-40232"></a>
<a id="trace-40257"></a>
<a id="trace-40259"></a>
<a id="trace-40266"></a>
<a id="trace-40268"></a>
<a id="trace-40287"></a>
<a id="trace-40289"></a>
<a id="trace-40295"></a>
<a id="trace-40297"></a>
<a id="trace-40315"></a>
<a id="trace-40317"></a>
<a id="trace-40386"></a>
<a id="trace-40388"></a>
<a id="trace-40397"></a>
<a id="trace-40399"></a>
<a id="trace-40411"></a>
<a id="trace-40413"></a>
<a id="trace-40442"></a>
<a id="trace-40444"></a>
<a id="trace-40459"></a>
<a id="trace-40461"></a>
<a id="trace-40472"></a>
<a id="trace-40474"></a>
<a id="trace-40503"></a>
<a id="trace-40505"></a>
<a id="trace-40573"></a>
<a id="trace-40575"></a>
<a id="trace-40602"></a>
<a id="trace-40604"></a>
<a id="trace-40615"></a>
<a id="trace-40617"></a>
<a id="trace-40635"></a>
<a id="trace-40637"></a>
<a id="trace-40646"></a>
<a id="trace-40648"></a>
<a id="trace-40666"></a>
<a id="trace-40668"></a>
<a id="trace-40679"></a>
<a id="trace-40681"></a>
<a id="trace-40760"></a>
<a id="trace-40762"></a>
<a id="trace-40779"></a>
<a id="trace-40781"></a>
<a id="trace-40787"></a>
<a id="trace-40789"></a>
<a id="trace-40801"></a>
<a id="trace-40803"></a>
<a id="trace-40809"></a>
<a id="trace-40811"></a>
<a id="trace-40824"></a>
<a id="trace-40826"></a>
<a id="trace-40849"></a>
<a id="trace-40851"></a>
<a id="trace-40856"></a>
<a id="trace-40858"></a>
<a id="trace-40955"></a>
<a id="trace-40957"></a>
<a id="trace-40967"></a>
<a id="trace-40969"></a>
<a id="trace-40984"></a>
<a id="trace-40986"></a>
<a id="trace-40989"></a>
<a id="trace-40991"></a>
<a id="trace-41010"></a>
<a id="trace-41012"></a>
<a id="trace-41019"></a>
<a id="trace-41021"></a>
<a id="trace-41033"></a>
<a id="trace-41035"></a>
<a id="trace-41110"></a>
<a id="trace-41112"></a>
<a id="trace-41120"></a>
<a id="trace-41122"></a>
<a id="trace-41135"></a>
<a id="trace-41137"></a>
<a id="trace-41168"></a>
<a id="trace-41170"></a>
<a id="trace-41187"></a>
<a id="trace-41189"></a>
<a id="trace-41195"></a>
<a id="trace-41197"></a>
<a id="trace-41214"></a>
<a id="trace-41216"></a>
<a id="trace-41230"></a>
<a id="trace-41232"></a>
<a id="trace-41298"></a>
<a id="trace-41300"></a>
<a id="trace-41307"></a>
<a id="trace-41309"></a>
<a id="trace-41324"></a>
<a id="trace-41326"></a>
<a id="trace-41331"></a>
<a id="trace-41333"></a>
<a id="trace-41349"></a>
<a id="trace-41351"></a>
<a id="trace-41378"></a>
<a id="trace-41380"></a>
<a id="trace-41404"></a>
<a id="trace-41406"></a>
<a id="trace-41477"></a>
<a id="trace-41479"></a>
<a id="trace-41488"></a>
<a id="trace-41490"></a>
<a id="trace-41507"></a>
<a id="trace-41509"></a>
<a id="trace-41515"></a>
<a id="trace-41517"></a>
<a id="trace-41530"></a>
<a id="trace-41532"></a>
<a id="trace-41536"></a>
<a id="trace-41538"></a>
<a id="trace-41552"></a>
<a id="trace-41554"></a>
<a id="trace-41563"></a>
<a id="trace-41565"></a>
<a id="trace-41579"></a>
<a id="trace-41581"></a>
<a id="trace-41590"></a>
<a id="trace-41592"></a>
<a id="trace-41663"></a>
<a id="trace-41665"></a>
<a id="trace-41670"></a>
<a id="trace-41672"></a>
<a id="trace-41690"></a>
<a id="trace-41692"></a>
<a id="trace-41717"></a>
<a id="trace-41719"></a>
<a id="trace-41729"></a>
<a id="trace-41731"></a>
<a id="trace-41746"></a>
<a id="trace-41748"></a>
<a id="trace-41754"></a>
<a id="trace-41756"></a>
<a id="trace-41769"></a>
<a id="trace-41771"></a>
- 5.70s–359.30s (×1098), actor 37, squad 4 (trace 996): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 907. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625068154663625, 'next_transition': 1549}.
<a id="trace-1003"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1003): received platoon directive. Knowledge: actor memory at 5.00s, trace 898. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.78789262865852, 'next_transition': 2741}.
<a id="trace-1218"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1218): received platoon directive. Knowledge: actor memory at 5.00s, trace 890. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299818445804899, 'next_transition': 1545}.
<a id="trace-1545"></a>
<a id="trace-1547"></a>
<a id="trace-1598"></a>
<a id="trace-1600"></a>
<a id="trace-1642"></a>
<a id="trace-1644"></a>
<a id="trace-1690"></a>
<a id="trace-1692"></a>
<a id="trace-1725"></a>
<a id="trace-1727"></a>
<a id="trace-1796"></a>
<a id="trace-1798"></a>
<a id="trace-1820"></a>
<a id="trace-1822"></a>
<a id="trace-1850"></a>
<a id="trace-1852"></a>
<a id="trace-1943"></a>
<a id="trace-1945"></a>
<a id="trace-1974"></a>
<a id="trace-1976"></a>
<a id="trace-1997"></a>
<a id="trace-1999"></a>
<a id="trace-2033"></a>
<a id="trace-2035"></a>
<a id="trace-2064"></a>
<a id="trace-2066"></a>
<a id="trace-2100"></a>
<a id="trace-2102"></a>
<a id="trace-2120"></a>
<a id="trace-2122"></a>
<a id="trace-2150"></a>
<a id="trace-2152"></a>
<a id="trace-2177"></a>
<a id="trace-2179"></a>
<a id="trace-2205"></a>
<a id="trace-2207"></a>
<a id="trace-2292"></a>
<a id="trace-2294"></a>
<a id="trace-2322"></a>
<a id="trace-2324"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1545): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 895. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2403252047315427, 'next_transition': 1598}.
<a id="trace-2330"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2330): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2215. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3998957344725087, 'next_transition': 2659}.
<a id="trace-2659"></a>
<a id="trace-2661"></a>
<a id="trace-2700"></a>
<a id="trace-2702"></a>
<a id="trace-2729"></a>
<a id="trace-2731"></a>
<a id="trace-2830"></a>
<a id="trace-2832"></a>
<a id="trace-2871"></a>
<a id="trace-2873"></a>
<a id="trace-3058"></a>
<a id="trace-3060"></a>
<a id="trace-3094"></a>
<a id="trace-3096"></a>
<a id="trace-3122"></a>
<a id="trace-3124"></a>
<a id="trace-3233"></a>
<a id="trace-3235"></a>
<a id="trace-3263"></a>
<a id="trace-3265"></a>
<a id="trace-3305"></a>
<a id="trace-3307"></a>
<a id="trace-3333"></a>
<a id="trace-3335"></a>
<a id="trace-3375"></a>
<a id="trace-3377"></a>
<a id="trace-3396"></a>
<a id="trace-3398"></a>
<a id="trace-3429"></a>
<a id="trace-3431"></a>
<a id="trace-3450"></a>
<a id="trace-3452"></a>
<a id="trace-3488"></a>
<a id="trace-3490"></a>
<a id="trace-3521"></a>
<a id="trace-3523"></a>
<a id="trace-3620"></a>
<a id="trace-3622"></a>
<a id="trace-3639"></a>
<a id="trace-3641"></a>
<a id="trace-3677"></a>
<a id="trace-3679"></a>
<a id="trace-3990"></a>
<a id="trace-3992"></a>
<a id="trace-4014"></a>
<a id="trace-4016"></a>
<a id="trace-4024"></a>
<a id="trace-4026"></a>
<a id="trace-4065"></a>
<a id="trace-4067"></a>
- 16.25s–28.25s (×50), actor 5, squad 0 (trace 2659): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2220. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843035370885306, 'next_transition': 2700}.
<a id="trace-2741"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2741): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2223. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2887}.
<a id="trace-2742"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2742): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2223. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2887}.
<a id="trace-2887"></a>
- 18.40s–18.40s (×1), actor 8, squad 1 (trace 2887): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 2223. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.218941381311623, 'next_transition': 3696}.
<a id="trace-3696"></a>
- 26.45s–26.45s (×1), actor 8, squad 1 (trace 3696): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 25.00s, trace 3547. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.508655940837215, 'next_transition': 426}.
<a id="trace-4074"></a>
- 28.35s–28.35s (×1), actor 0, squad 0 (trace 4074): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 3539. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24881986707254639, 'next_transition': 4085}.
<a id="trace-4085"></a>
<a id="trace-4087"></a>
<a id="trace-4119"></a>
<a id="trace-4121"></a>
- 28.75s–29.25s (×4), actor 5, squad 0 (trace 4085): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3544. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5888886799597584, 'next_transition': 4119}.
<a id="trace-4127"></a>
- 29.35s–29.35s (×1), actor 0, squad 0 (trace 4127): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 3539. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11117462246125105, 'next_transition': 4545}.
<a id="trace-4134"></a>
- 29.35s–29.35s (×1), actor 0, squad 0 (trace 4134): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3539. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11117462246125105, 'next_transition': 4545}.
<a id="trace-4135"></a>
- 29.35s–29.35s (×1), actor 0, squad 0 (trace 4135): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3539. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11117462246125105, 'next_transition': 4545}.
<a id="trace-4136"></a>
- 29.35s–29.35s (×1), actor 0, squad 0 (trace 4136): Reorganise complete: known contact. Knowledge: actor memory at 25.00s, trace 3539. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11117462246125105, 'next_transition': 4545}.
<a id="trace-4545"></a>
<a id="trace-4547"></a>
<a id="trace-4648"></a>
<a id="trace-4650"></a>
<a id="trace-4670"></a>
<a id="trace-4672"></a>
- 29.75s–30.75s (×6), actor 5, squad 0 (trace 4545): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3544. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13831461962338806, 'next_transition': 4648}.
<a id="trace-4686"></a>
- 30.85s–30.85s (×1), actor 0, squad 0 (trace 4686): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 4557. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7200790165154887, 'next_transition': 5122}.
<a id="trace-5122"></a>
<a id="trace-5124"></a>
<a id="trace-5141"></a>
<a id="trace-5143"></a>
- 31.25s–31.75s (×4), actor 5, squad 0 (trace 5122): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4562. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6976160628804666, 'next_transition': 5141}.
<a id="trace-425"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (events line 425): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.694508705653488, 'next_transition': 5243}.
<a id="trace-426"></a>
- 32.25s–32.25s (×1), actor 5, squad 1 (events line 426): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749874388169738, 'next_transition': 5341}.
<a id="trace-5197"></a>
<a id="trace-5199"></a>
- 32.25s–32.25s (×2), actor 5, squad 0 (trace 5197): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4562. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.694508705653488, 'next_transition': 5243}.
<a id="trace-5204"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 5204): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.533817 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 5204. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.694508705653488, 'next_transition': 5243}.
<a id="trace-5205"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 5205): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.533817 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 5205. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.694508705653488, 'next_transition': 5243}.
<a id="trace-5206"></a>
- 32.25s–32.25s (×1), actor 5, squad 1 (trace 5206): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.533817 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 5206. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749874388169738, 'next_transition': 5341}.
<a id="trace-5207"></a>
- 32.25s–32.25s (×1), actor 5, squad 1 (trace 5207): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=2.533817 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 32.25s, trace 5207. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749874388169738, 'next_transition': 5341}.
<a id="trace-5243"></a>
<a id="trace-5245"></a>
<a id="trace-5272"></a>
<a id="trace-5274"></a>
<a id="trace-5303"></a>
<a id="trace-5305"></a>
<a id="trace-5334"></a>
<a id="trace-5336"></a>
- 32.75s–34.25s (×8), actor 5, squad 0 (trace 5243): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 5207. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4530882763075288, 'next_transition': 5272}.
<a id="trace-5341"></a>
- 34.25s–34.25s (×1), actor 8, squad 1 (trace 5341): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 4565. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.0566790584324623, 'next_transition': 6563}.
<a id="trace-5342"></a>
- 34.25s–34.25s (×1), actor 8, squad 1 (trace 5342): bounding overwatch. Knowledge: actor memory at 30.00s, trace 4565. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.0566790584324623, 'next_transition': 6563}.
<a id="trace-5343"></a>
- 34.25s–34.25s (×1), actor 8, squad 1 (trace 5343): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 4565. Next observer evidence: {'until': 38, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.0566790584324623, 'next_transition': 6563}.
<a id="trace-5701"></a>
- 34.45s–34.45s (×1), actor 0, squad 0 (trace 5701): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 4557. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33806210312161583, 'next_transition': 6193}.
<a id="trace-6193"></a>
<a id="trace-6195"></a>
<a id="trace-6301"></a>
<a id="trace-6303"></a>
<a id="trace-6346"></a>
<a id="trace-6348"></a>
<a id="trace-6402"></a>
<a id="trace-6404"></a>
<a id="trace-6436"></a>
<a id="trace-6438"></a>
<a id="trace-6487"></a>
<a id="trace-6489"></a>
<a id="trace-6526"></a>
<a id="trace-6528"></a>
- 34.75s–37.75s (×14), actor 5, squad 0 (trace 6193): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.25s, trace 5207. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9836389595083359, 'next_transition': 6301}.
<a id="trace-6561"></a>
- 38.05s–38.05s (×1), actor 0, squad 0 (trace 6561): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 6212. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30635646433610725, 'next_transition': 6577}.
<a id="trace-6563"></a>
- 38.05s–38.05s (×1), actor 8, squad 1 (trace 6563): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 6220. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5561786345448931, 'next_transition': 6646}.
<a id="trace-6577"></a>
<a id="trace-6579"></a>
<a id="trace-6603"></a>
<a id="trace-6605"></a>
<a id="trace-6637"></a>
<a id="trace-6639"></a>
<a id="trace-6997"></a>
<a id="trace-6999"></a>
<a id="trace-7436"></a>
<a id="trace-7438"></a>
<a id="trace-7812"></a>
<a id="trace-7814"></a>
<a id="trace-7853"></a>
<a id="trace-7855"></a>
<a id="trace-8232"></a>
<a id="trace-8234"></a>
- 38.25s–41.75s (×16), actor 5, squad 0 (trace 6577): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 6217. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.4529758952163589, 'next_transition': 6603}.
<a id="trace-6646"></a>
<a id="trace-7013"></a>
<a id="trace-7458"></a>
<a id="trace-7876"></a>
<a id="trace-8245"></a>
<a id="trace-9198"></a>
<a id="trace-9609"></a>
<a id="trace-10023"></a>
<a id="trace-10408"></a>
<a id="trace-10990"></a>
- 39.35s–44.85s (×10), actor 8, squad 1 (trace 6646): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 6220. Next observer evidence: {'until': 39.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4724990456405704, 'next_transition': 7013}.
<a id="trace-8611"></a>
- 42.15s–42.15s (×1), actor 0, squad 0 (trace 8611): received platoon directive; retain contact cover stage. Knowledge: actor memory at 40.00s, trace 7354. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1802670287233085, 'next_transition': 8633}.
<a id="trace-8633"></a>
<a id="trace-8635"></a>
- 42.25s–42.25s (×2), actor 5, squad 0 (trace 8633): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7358. Next observer evidence: {'until': 42.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18016908917244315, 'next_transition': 8652}.
<a id="trace-8652"></a>
- 42.40s–42.40s (×1), actor 0, squad 0 (trace 8652): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 7354. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15760224964597055, 'next_transition': 9563}.
<a id="trace-9563"></a>
<a id="trace-9565"></a>
<a id="trace-9994"></a>
<a id="trace-9996"></a>
<a id="trace-10785"></a>
<a id="trace-10787"></a>
<a id="trace-10858"></a>
<a id="trace-10860"></a>
<a id="trace-10964"></a>
<a id="trace-10966"></a>
<a id="trace-11460"></a>
<a id="trace-11462"></a>
<a id="trace-11539"></a>
<a id="trace-11541"></a>
<a id="trace-11628"></a>
<a id="trace-11630"></a>
<a id="trace-12045"></a>
<a id="trace-12047"></a>
<a id="trace-12099"></a>
<a id="trace-12101"></a>
<a id="trace-12145"></a>
<a id="trace-12147"></a>
- 42.75s–47.75s (×22), actor 5, squad 0 (trace 9563): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7358. Next observer evidence: {'until': 43.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23447090968047776, 'next_transition': 9994}.
<a id="trace-11672"></a>
- 46.60s–46.60s (×1), actor 8, squad 1 (trace 11672): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 11363. Next observer evidence: {'until': 49.4, 'shots': 3, 'casualties': 0, 'mean_displacement': 1.034031045766369, 'next_transition': 12726}.
<a id="trace-12163"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 12163): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 11357. Next observer evidence: {'until': 48.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12186}.
<a id="trace-12165"></a>
- 48.05s–48.05s (×1), actor 1, squad 0 (trace 12165): NeedSupport. Knowledge: actor memory at 45.00s, trace 11357. Next observer evidence: {'until': 48.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12186}.
<a id="trace-12186"></a>
<a id="trace-12188"></a>
<a id="trace-12225"></a>
<a id="trace-12227"></a>
- 48.25s–48.75s (×4), actor 5, squad 0 (trace 12186): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 11360. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12225}.
<a id="trace-12245"></a>
- 49.05s–49.05s (×1), actor 1, squad 0 (trace 12245): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 11357. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787506349886216, 'next_transition': 12702}.
<a id="trace-12250"></a>
- 49.05s–49.05s (×1), actor 1, squad 0 (trace 12250): MoveTactically. Knowledge: actor memory at 45.00s, trace 11357. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787506349886216, 'next_transition': 12702}.
<a id="trace-12251"></a>
- 49.05s–49.05s (×1), actor 1, squad 0 (trace 12251): Reorganise complete. Knowledge: actor memory at 45.00s, trace 11357. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787506349886216, 'next_transition': 12702}.
<a id="trace-12702"></a>
<a id="trace-12704"></a>
<a id="trace-15495"></a>
<a id="trace-15497"></a>
- 49.25s–49.75s (×4), actor 5, squad 0 (trace 12702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 11360. Next observer evidence: {'until': 49.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15495}.
<a id="trace-12726"></a>
- 49.55s–49.55s (×1), actor 8, squad 1 (trace 12726): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 11363. Next observer evidence: {'until': 52, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.3227707677422855, 'next_transition': 975}.
<a id="trace-12727"></a>
- 49.55s–49.55s (×1), actor 8, squad 1 (trace 12727): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 11363. Next observer evidence: {'until': 52, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.3227707677422855, 'next_transition': 975}.
<a id="trace-15536"></a>
- 50.05s–50.05s (×1), actor 1, squad 0 (trace 15536): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 15509. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625066956347632, 'next_transition': 16045}.
<a id="trace-15537"></a>
- 50.05s–50.05s (×1), actor 1, squad 0 (trace 15537): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 15509. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625066956347632, 'next_transition': 16045}.
<a id="trace-15971"></a>
- 50.05s–50.05s (×1), actor 1, squad 0 (trace 15971): NeedSupport. Knowledge: actor memory at 50.00s, trace 15509. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625066956347632, 'next_transition': 16045}.
<a id="trace-16045"></a>
<a id="trace-16047"></a>
<a id="trace-16078"></a>
<a id="trace-16080"></a>
<a id="trace-16126"></a>
<a id="trace-16128"></a>
<a id="trace-16161"></a>
<a id="trace-16163"></a>
<a id="trace-16201"></a>
<a id="trace-16203"></a>
<a id="trace-16231"></a>
<a id="trace-16233"></a>
<a id="trace-16244"></a>
<a id="trace-16246"></a>
<a id="trace-16261"></a>
<a id="trace-16263"></a>
- 50.25s–53.75s (×16), actor 5, squad 0 (trace 16045): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 15512. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7822403357338414, 'next_transition': 16078}.
<a id="trace-975"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (events line 975): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16182"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 16182): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.539175 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 16182. Next observer evidence: {'until': 62.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.7845993628992568, 'next_transition': 19728}.
<a id="trace-16183"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 16183): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.539175 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 16183. Next observer evidence: {'until': 62.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.7845993628992568, 'next_transition': 19728}.
<a id="trace-16269"></a>
- 53.90s–53.90s (×1), actor 1, squad 0 (trace 16269): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 15509. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4062621945615472, 'next_transition': 16279}.
<a id="trace-16279"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 16279): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 50.00s, trace 15509. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4142883810233315, 'next_transition': 16286}.
<a id="trace-16286"></a>
<a id="trace-16288"></a>
<a id="trace-16302"></a>
<a id="trace-16304"></a>
<a id="trace-16383"></a>
<a id="trace-16385"></a>
<a id="trace-16397"></a>
<a id="trace-16399"></a>
<a id="trace-16423"></a>
<a id="trace-16425"></a>
<a id="trace-16460"></a>
<a id="trace-16462"></a>
- 54.25s–56.75s (×12), actor 5, squad 0 (trace 16286): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.10s, trace 16183. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299952098731433, 'next_transition': 16302}.
<a id="trace-16469"></a>
- 57.05s–57.05s (×1), actor 5, squad 0 (trace 16469): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 57.05s, trace 16469. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3743580763252338, 'next_transition': 16480}.
<a id="trace-16480"></a>
<a id="trace-16482"></a>
- 57.25s–57.25s (×2), actor 5, squad 0 (trace 16480): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 57.05s, trace 16469. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46275574933875885, 'next_transition': 16492}.
<a id="trace-16492"></a>
- 57.70s–57.70s (×1), actor 1, squad 0 (trace 16492): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 55.00s, trace 16313. Next observer evidence: None.
<a id="trace-19414"></a>
- 57.70s–57.70s (×1), actor 1, squad 0 (trace 19414): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 55.00s, trace 16313. Next observer evidence: None.
<a id="trace-19415"></a>
- 57.70s–57.70s (×1), actor 1, squad 0 (trace 19415): MoveTactically. Knowledge: actor memory at 55.00s, trace 16313. Next observer evidence: None.
<a id="trace-19416"></a>
- 57.70s–57.70s (×1), actor 1, squad 0 (trace 19416): contact cover complete: assessment resumes closure. Knowledge: actor memory at 55.00s, trace 16313. Next observer evidence: None.
<a id="trace-19475"></a>
<a id="trace-19477"></a>
<a id="trace-19498"></a>
<a id="trace-19500"></a>
<a id="trace-19520"></a>
<a id="trace-19522"></a>
<a id="trace-19542"></a>
<a id="trace-19544"></a>
<a id="trace-19561"></a>
<a id="trace-19563"></a>
<a id="trace-19644"></a>
<a id="trace-19646"></a>
<a id="trace-19671"></a>
<a id="trace-19673"></a>
<a id="trace-19690"></a>
<a id="trace-19692"></a>
<a id="trace-19699"></a>
<a id="trace-19701"></a>
<a id="trace-19721"></a>
<a id="trace-19723"></a>
- 57.75s–62.25s (×20), actor 5, squad 0 (trace 19475): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 57.05s, trace 16469. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5100473673851309, 'next_transition': 19498}.
<a id="trace-19728"></a>
- 62.25s–62.25s (×1), actor 9, squad 1 (trace 19728): NeedSupport. Knowledge: actor memory at 60.00s, trace 19578. Next observer evidence: {'until': 63.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.32306656004950823, 'next_transition': 20202}.
<a id="trace-19741"></a>
- 62.65s–62.65s (×1), actor 1, squad 0 (trace 19741): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 19572. Next observer evidence: None.
<a id="trace-19742"></a>
- 62.65s–62.65s (×1), actor 1, squad 0 (trace 19742): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 60.00s, trace 19572. Next observer evidence: None.
<a id="trace-20177"></a>
<a id="trace-20179"></a>
<a id="trace-20194"></a>
<a id="trace-20196"></a>
<a id="trace-20228"></a>
<a id="trace-20230"></a>
<a id="trace-20258"></a>
<a id="trace-20260"></a>
- 62.75s–64.25s (×8), actor 5, squad 0 (trace 20177): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 19575. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8867385879473829, 'next_transition': 20194}.
<a id="trace-20202"></a>
- 63.25s–63.25s (×1), actor 9, squad 1 (trace 20202): support established: element delivered fire on threat area. Knowledge: actor memory at 60.00s, trace 19578. Next observer evidence: {'until': 65.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6264519578990518, 'next_transition': 1201}.
<a id="trace-20203"></a>
- 63.25s–63.25s (×1), actor 9, squad 1 (trace 20203): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 60.00s, trace 19578. Next observer evidence: {'until': 65.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6264519578990518, 'next_transition': 1201}.
<a id="trace-20204"></a>
- 63.25s–63.25s (×1), actor 9, squad 1 (trace 20204): Fixing. Knowledge: actor memory at 60.00s, trace 19578. Next observer evidence: {'until': 65.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6264519578990518, 'next_transition': 1201}.
<a id="trace-20277"></a>
- 64.65s–64.65s (×1), actor 1, squad 0 (trace 20277): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 19572. Next observer evidence: None.
<a id="trace-20278"></a>
- 64.65s–64.65s (×1), actor 1, squad 0 (trace 20278): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 60.00s, trace 19572. Next observer evidence: None.
<a id="trace-22863"></a>
<a id="trace-22865"></a>
- 64.75s–64.75s (×2), actor 5, squad 0 (trace 22863): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 19575. Next observer evidence: {'until': 64.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3574426000612026, 'next_transition': 23161}.
<a id="trace-23161"></a>
- 64.95s–64.95s (×1), actor 1, squad 0 (trace 23161): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 60.00s, trace 19572. Next observer evidence: {'until': 65.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8400083792181352, 'next_transition': 23236}.
<a id="trace-23162"></a>
- 64.95s–64.95s (×1), actor 1, squad 0 (trace 23162): answered caller: no covered flank; Reorganise then supported fire and movement. Knowledge: actor memory at 60.00s, trace 19572. Next observer evidence: {'until': 65.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8400083792181352, 'next_transition': 23236}.
<a id="trace-23236"></a>
<a id="trace-23238"></a>
- 65.25s–65.25s (×2), actor 5, squad 0 (trace 23236): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 23169. Next observer evidence: None.
<a id="trace-23252"></a>
- 65.30s–65.30s (×1), actor 1, squad 0 (trace 23252): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 23166. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8028125755957113, 'next_transition': 23706}.
<a id="trace-23257"></a>
- 65.30s–65.30s (×1), actor 1, squad 0 (trace 23257): MoveTactically. Knowledge: actor memory at 65.00s, trace 23166. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8028125755957113, 'next_transition': 23706}.
<a id="trace-23258"></a>
- 65.30s–65.30s (×1), actor 1, squad 0 (trace 23258): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 65.00s, trace 23166. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8028125755957113, 'next_transition': 23706}.
<a id="trace-1201"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (events line 1201): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 79.4, 'shots': 11, 'casualties': 0, 'mean_displacement': 0.06659722725292544, 'next_transition': 27550}.
<a id="trace-23706"></a>
<a id="trace-23708"></a>
<a id="trace-23758"></a>
<a id="trace-23760"></a>
<a id="trace-23782"></a>
<a id="trace-23784"></a>
- 65.75s–66.75s (×6), actor 5, squad 0 (trace 23706): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 23169. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8480843147224694, 'next_transition': 23758}.
<a id="trace-23715"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 23715): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.479411 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 23715. Next observer evidence: {'until': 79.4, 'shots': 11, 'casualties': 0, 'mean_displacement': 0.06659722725292544, 'next_transition': 27550}.
<a id="trace-23716"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 23716): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.479411 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 23716. Next observer evidence: {'until': 79.4, 'shots': 11, 'casualties': 0, 'mean_displacement': 0.06659722725292544, 'next_transition': 27550}.
<a id="trace-1222"></a>
- 66.95s–66.95s (×1), actor 5, squad 0 (events line 1222): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23798"></a>
- 66.95s–66.95s (×1), actor 5, squad 0 (trace 23798): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.481051 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 23798. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400090383611879, 'next_transition': 23820}.
<a id="trace-23799"></a>
- 66.95s–66.95s (×1), actor 5, squad 0 (trace 23799): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.481051 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 66.95s, trace 23799. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400090383611879, 'next_transition': 23820}.
<a id="trace-23820"></a>
<a id="trace-23822"></a>
<a id="trace-23839"></a>
<a id="trace-23841"></a>
<a id="trace-23871"></a>
<a id="trace-23873"></a>
- 67.25s–68.25s (×6), actor 5, squad 0 (trace 23820): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.95s, trace 23799. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8053281400384131, 'next_transition': 23839}.
<a id="trace-23889"></a>
- 68.65s–68.65s (×1), actor 1, squad 0 (trace 23889): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 23166. Next observer evidence: None.
<a id="trace-23890"></a>
- 68.65s–68.65s (×1), actor 1, squad 0 (trace 23890): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 65.00s, trace 23166. Next observer evidence: None.
<a id="trace-26538"></a>
<a id="trace-26540"></a>
<a id="trace-26559"></a>
<a id="trace-26561"></a>
<a id="trace-26577"></a>
<a id="trace-26579"></a>
<a id="trace-26672"></a>
<a id="trace-26674"></a>
<a id="trace-26688"></a>
<a id="trace-26690"></a>
<a id="trace-26713"></a>
<a id="trace-26715"></a>
<a id="trace-26727"></a>
<a id="trace-26729"></a>
<a id="trace-26767"></a>
<a id="trace-26769"></a>
<a id="trace-26787"></a>
<a id="trace-26789"></a>
<a id="trace-26815"></a>
<a id="trace-26817"></a>
<a id="trace-26837"></a>
<a id="trace-26839"></a>
<a id="trace-26883"></a>
<a id="trace-26885"></a>
<a id="trace-26923"></a>
<a id="trace-26925"></a>
<a id="trace-27009"></a>
<a id="trace-27011"></a>
<a id="trace-27033"></a>
<a id="trace-27035"></a>
<a id="trace-27077"></a>
<a id="trace-27079"></a>
<a id="trace-27095"></a>
<a id="trace-27097"></a>
<a id="trace-27115"></a>
<a id="trace-27117"></a>
<a id="trace-27136"></a>
<a id="trace-27138"></a>
<a id="trace-27153"></a>
<a id="trace-27155"></a>
- 68.75s–78.25s (×40), actor 5, squad 0 (trace 26538): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.95s, trace 23799. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5251624032549326, 'next_transition': 26559}.
<a id="trace-27162"></a>
- 78.25s–78.25s (×1), actor 1, squad 0 (trace 27162): support established: element delivered fire on threat area. Knowledge: actor memory at 75.00s, trace 26940. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11652982619368481, 'next_transition': 27200}.
<a id="trace-27163"></a>
- 78.25s–78.25s (×1), actor 1, squad 0 (trace 27163): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 75.00s, trace 26940. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11652982619368481, 'next_transition': 27200}.
<a id="trace-27164"></a>
- 78.25s–78.25s (×1), actor 1, squad 0 (trace 27164): Fixing. Knowledge: actor memory at 75.00s, trace 26940. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11652982619368481, 'next_transition': 27200}.
<a id="trace-27165"></a>
- 78.25s–78.25s (×1), actor 1, squad 0 (trace 27165): NeedSupport. Knowledge: actor memory at 75.00s, trace 26940. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11652982619368481, 'next_transition': 27200}.
<a id="trace-27200"></a>
<a id="trace-27202"></a>
<a id="trace-27246"></a>
<a id="trace-27248"></a>
<a id="trace-27572"></a>
<a id="trace-27574"></a>
- 78.75s–79.75s (×6), actor 5, squad 0 (trace 27200): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 26943. Next observer evidence: {'until': 79.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.14472367293740554, 'next_transition': 27246}.
<a id="trace-27550"></a>
- 79.50s–79.50s (×1), actor 9, squad 1 (trace 27550): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 75.00s, trace 26946. Next observer evidence: {'until': 79.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709313931401988, 'next_transition': 27582}.
<a id="trace-27551"></a>
- 79.50s–79.50s (×1), actor 9, squad 1 (trace 27551): answered caller: no covered flank; Reorganise then supported fire and movement. Knowledge: actor memory at 75.00s, trace 26946. Next observer evidence: {'until': 79.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709313931401988, 'next_transition': 27582}.
<a id="trace-27582"></a>
- 79.80s–79.80s (×1), actor 9, squad 1 (trace 27582): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 26946. Next observer evidence: {'until': 86.2, 'shots': 1, 'casualties': 2, 'mean_displacement': 2.219434701209867, 'next_transition': 30066}.
<a id="trace-27583"></a>
- 79.80s–79.80s (×1), actor 9, squad 1 (trace 27583): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 75.00s, trace 26946. Next observer evidence: {'until': 86.2, 'shots': 1, 'casualties': 2, 'mean_displacement': 2.219434701209867, 'next_transition': 30066}.
<a id="trace-1481"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (events line 1481): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-29475"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 29475): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.475119 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 29475. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.243477550235529, 'next_transition': 29529}.
<a id="trace-29476"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 29476): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.475119 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 29476. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.243477550235529, 'next_transition': 29529}.
<a id="trace-29529"></a>
<a id="trace-29531"></a>
<a id="trace-29553"></a>
<a id="trace-29555"></a>
<a id="trace-29588"></a>
<a id="trace-29590"></a>
<a id="trace-29636"></a>
<a id="trace-29638"></a>
<a id="trace-29686"></a>
<a id="trace-29688"></a>
<a id="trace-29722"></a>
<a id="trace-29724"></a>
<a id="trace-29747"></a>
<a id="trace-29749"></a>
<a id="trace-29773"></a>
<a id="trace-29775"></a>
<a id="trace-29823"></a>
<a id="trace-29825"></a>
<a id="trace-29865"></a>
<a id="trace-29867"></a>
<a id="trace-29966"></a>
<a id="trace-29968"></a>
<a id="trace-30008"></a>
<a id="trace-30010"></a>
<a id="trace-30057"></a>
<a id="trace-30059"></a>
<a id="trace-30235"></a>
<a id="trace-30237"></a>
<a id="trace-30282"></a>
<a id="trace-30284"></a>
<a id="trace-30329"></a>
<a id="trace-30331"></a>
<a id="trace-30377"></a>
<a id="trace-30379"></a>
- 80.25s–88.25s (×34), actor 5, squad 0 (trace 29529): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 29476. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37468104008925085, 'next_transition': 29553}.
<a id="trace-30066"></a>
- 86.25s–86.25s (×1), actor 9, squad 1 (trace 30066): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 85.00s, trace 29887. Next observer evidence: None.
<a id="trace-30067"></a>
- 86.30s–86.30s (×1), actor 9, squad 1 (trace 30067): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 29887. Next observer evidence: {'until': 89.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30798}.
<a id="trace-30070"></a>
- 86.30s–86.30s (×1), actor 9, squad 1 (trace 30070): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 29887. Next observer evidence: {'until': 89.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30798}.
<a id="trace-30071"></a>
- 86.30s–86.30s (×1), actor 9, squad 1 (trace 30071): Reorganise complete: known contact. Knowledge: actor memory at 85.00s, trace 29887. Next observer evidence: {'until': 89.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30798}.
<a id="trace-30416"></a>
- 88.65s–88.65s (×1), actor 1, squad 0 (trace 30416): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 29882. Next observer evidence: None.
<a id="trace-30417"></a>
- 88.65s–88.65s (×1), actor 1, squad 0 (trace 30417): received platoon directive. Knowledge: actor memory at 85.00s, trace 29882. Next observer evidence: None.
<a id="trace-30734"></a>
<a id="trace-30736"></a>
<a id="trace-30782"></a>
<a id="trace-30784"></a>
<a id="trace-30855"></a>
<a id="trace-30857"></a>
<a id="trace-30934"></a>
<a id="trace-30936"></a>
<a id="trace-30948"></a>
<a id="trace-30950"></a>
<a id="trace-30966"></a>
<a id="trace-30968"></a>
<a id="trace-30981"></a>
<a id="trace-30983"></a>
<a id="trace-30996"></a>
<a id="trace-30998"></a>
- 88.75s–92.25s (×16), actor 5, squad 0 (trace 30734): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 29884. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42346067587770253, 'next_transition': 30782}.
<a id="trace-30798"></a>
- 89.60s–89.60s (×1), actor 9, squad 1 (trace 30798): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 85.00s, trace 29887. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.057582836587883, 'next_transition': 31342}.
<a id="trace-30799"></a>
- 89.60s–89.60s (×1), actor 9, squad 1 (trace 30799): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 29887. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.057582836587883, 'next_transition': 31342}.
<a id="trace-31004"></a>
- 92.35s–92.35s (×1), actor 7, squad 0 (trace 31004): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 30872. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31109}.
<a id="trace-31005"></a>
- 92.35s–92.35s (×1), actor 7, squad 0 (trace 31005): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 30872. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31109}.
<a id="trace-31109"></a>
<a id="trace-31111"></a>
<a id="trace-31131"></a>
<a id="trace-31133"></a>
<a id="trace-31155"></a>
<a id="trace-31157"></a>
<a id="trace-31182"></a>
<a id="trace-31184"></a>
<a id="trace-31194"></a>
<a id="trace-31196"></a>
<a id="trace-31268"></a>
<a id="trace-31270"></a>
- 92.75s–95.25s (×12), actor 5, squad 0 (trace 31109): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 30870. Next observer evidence: {'until': 93.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6160651123495005, 'next_transition': 31131}.
<a id="trace-31285"></a>
- 96.10s–96.10s (×1), actor 7, squad 0 (trace 31285): support established: element delivered fire on threat area. Knowledge: actor memory at 95.00s, trace 31206. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31297}.
<a id="trace-31297"></a>
<a id="trace-31299"></a>
<a id="trace-31312"></a>
<a id="trace-31314"></a>
<a id="trace-31334"></a>
<a id="trace-31336"></a>
<a id="trace-31347"></a>
<a id="trace-31349"></a>
<a id="trace-31369"></a>
<a id="trace-31371"></a>
<a id="trace-31381"></a>
<a id="trace-31383"></a>
<a id="trace-31397"></a>
<a id="trace-31399"></a>
<a id="trace-31411"></a>
<a id="trace-31413"></a>
<a id="trace-31485"></a>
<a id="trace-31487"></a>
<a id="trace-31500"></a>
<a id="trace-31502"></a>
<a id="trace-31520"></a>
<a id="trace-31522"></a>
<a id="trace-31534"></a>
<a id="trace-31536"></a>
<a id="trace-31562"></a>
<a id="trace-31564"></a>
<a id="trace-31576"></a>
<a id="trace-31578"></a>
<a id="trace-31594"></a>
<a id="trace-31596"></a>
<a id="trace-31608"></a>
<a id="trace-31610"></a>
<a id="trace-31628"></a>
<a id="trace-31630"></a>
<a id="trace-31643"></a>
<a id="trace-31645"></a>
<a id="trace-31718"></a>
<a id="trace-31720"></a>
<a id="trace-31731"></a>
<a id="trace-31733"></a>
<a id="trace-31753"></a>
<a id="trace-31755"></a>
<a id="trace-31768"></a>
<a id="trace-31770"></a>
<a id="trace-31785"></a>
<a id="trace-31787"></a>
<a id="trace-31799"></a>
<a id="trace-31801"></a>
<a id="trace-31817"></a>
<a id="trace-31819"></a>
<a id="trace-31830"></a>
<a id="trace-31832"></a>
<a id="trace-31848"></a>
<a id="trace-31850"></a>
<a id="trace-31863"></a>
<a id="trace-31865"></a>
<a id="trace-31944"></a>
<a id="trace-31946"></a>
<a id="trace-31960"></a>
<a id="trace-31962"></a>
<a id="trace-31987"></a>
<a id="trace-31989"></a>
<a id="trace-32002"></a>
<a id="trace-32004"></a>
<a id="trace-32018"></a>
<a id="trace-32020"></a>
<a id="trace-32031"></a>
<a id="trace-32033"></a>
<a id="trace-32051"></a>
<a id="trace-32053"></a>
<a id="trace-32069"></a>
<a id="trace-32071"></a>
<a id="trace-32092"></a>
<a id="trace-32094"></a>
<a id="trace-32106"></a>
<a id="trace-32108"></a>
<a id="trace-32177"></a>
<a id="trace-32179"></a>
<a id="trace-32199"></a>
<a id="trace-32201"></a>
<a id="trace-32222"></a>
<a id="trace-32224"></a>
<a id="trace-32244"></a>
<a id="trace-32246"></a>
<a id="trace-32262"></a>
<a id="trace-32264"></a>
<a id="trace-32279"></a>
<a id="trace-32281"></a>
<a id="trace-32295"></a>
<a id="trace-32297"></a>
<a id="trace-32309"></a>
<a id="trace-32311"></a>
<a id="trace-32325"></a>
<a id="trace-32327"></a>
<a id="trace-32340"></a>
<a id="trace-32342"></a>
<a id="trace-32423"></a>
<a id="trace-32425"></a>
<a id="trace-32442"></a>
<a id="trace-32444"></a>
<a id="trace-32459"></a>
<a id="trace-32461"></a>
<a id="trace-32470"></a>
<a id="trace-32472"></a>
<a id="trace-32487"></a>
<a id="trace-32489"></a>
<a id="trace-32497"></a>
<a id="trace-32499"></a>
<a id="trace-32510"></a>
<a id="trace-32512"></a>
<a id="trace-32524"></a>
<a id="trace-32526"></a>
<a id="trace-32548"></a>
<a id="trace-32550"></a>
<a id="trace-32566"></a>
<a id="trace-32568"></a>
<a id="trace-32644"></a>
<a id="trace-32646"></a>
<a id="trace-32657"></a>
<a id="trace-32659"></a>
<a id="trace-32678"></a>
<a id="trace-32680"></a>
<a id="trace-32695"></a>
<a id="trace-32697"></a>
<a id="trace-32713"></a>
<a id="trace-32715"></a>
<a id="trace-32726"></a>
<a id="trace-32728"></a>
<a id="trace-32746"></a>
<a id="trace-32748"></a>
<a id="trace-32762"></a>
<a id="trace-32764"></a>
<a id="trace-32779"></a>
<a id="trace-32781"></a>
<a id="trace-32791"></a>
<a id="trace-32793"></a>
<a id="trace-32871"></a>
<a id="trace-32873"></a>
<a id="trace-32886"></a>
<a id="trace-32888"></a>
<a id="trace-32908"></a>
<a id="trace-32910"></a>
<a id="trace-32925"></a>
<a id="trace-32927"></a>
<a id="trace-32942"></a>
<a id="trace-32944"></a>
<a id="trace-32961"></a>
<a id="trace-32963"></a>
<a id="trace-32983"></a>
<a id="trace-32985"></a>
<a id="trace-32996"></a>
<a id="trace-32998"></a>
<a id="trace-33019"></a>
<a id="trace-33021"></a>
<a id="trace-33037"></a>
<a id="trace-33039"></a>
<a id="trace-33113"></a>
<a id="trace-33115"></a>
<a id="trace-33127"></a>
<a id="trace-33129"></a>
<a id="trace-33152"></a>
<a id="trace-33154"></a>
<a id="trace-33167"></a>
<a id="trace-33169"></a>
<a id="trace-33190"></a>
<a id="trace-33192"></a>
<a id="trace-33208"></a>
<a id="trace-33210"></a>
<a id="trace-33231"></a>
<a id="trace-33233"></a>
<a id="trace-33246"></a>
<a id="trace-33248"></a>
<a id="trace-33267"></a>
<a id="trace-33269"></a>
<a id="trace-33278"></a>
<a id="trace-33280"></a>
<a id="trace-33361"></a>
<a id="trace-33363"></a>
- 96.25s–140.30s (×178), actor 5, squad 0 (trace 31297): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 31204. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.052500694281123174, 'next_transition': 31312}.
<a id="trace-31342"></a>
- 97.25s–97.25s (×1), actor 9, squad 1 (trace 31342): support established: element delivered fire on threat area. Knowledge: actor memory at 95.00s, trace 31207. Next observer evidence: {'until': 101.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.942446129038057, 'next_transition': 31548}.
<a id="trace-31548"></a>
- 101.90s–101.90s (×1), actor 9, squad 1 (trace 31548): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 31422. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31858}.
<a id="trace-31549"></a>
- 101.90s–101.90s (×1), actor 9, squad 1 (trace 31549): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 31422. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31858}.
<a id="trace-31858"></a>
- 109.65s–109.65s (×1), actor 9, squad 1 (trace 31858): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 105.00s, trace 31658. Next observer evidence: {'until': 114, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1857}.
<a id="trace-1857"></a>
- 114.05s–114.05s (×1), actor 5, squad 1 (events line 1857): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32186}.
<a id="trace-32081"></a>
- 114.05s–114.05s (×1), actor 5, squad 1 (trace 32081): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.146697 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 114.05s, trace 32081. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32186}.
<a id="trace-32082"></a>
- 114.05s–114.05s (×1), actor 5, squad 1 (trace 32082): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.146697 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 114.05s, trace 32082. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32186}.
<a id="trace-32186"></a>
- 115.25s–115.25s (×1), actor 9, squad 1 (trace 32186): Withdraw to received rally. Knowledge: actor memory at 115.00s, trace 32116. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2222}.
<a id="trace-32187"></a>
- 115.25s–115.25s (×1), actor 9, squad 1 (trace 32187): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 32116. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2222}.
<a id="trace-2018"></a>
- 140.45s–140.45s (×1), actor 5, squad 0 (events line 2018): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33381}.
<a id="trace-33372"></a>
- 140.45s–140.45s (×1), actor 5, squad 0 (trace 33372): renew committed intent (75 s lifetime). Knowledge: actor memory at 140.45s, trace 33372. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33381}.
<a id="trace-33381"></a>
<a id="trace-33383"></a>
<a id="trace-33403"></a>
<a id="trace-33405"></a>
<a id="trace-33415"></a>
<a id="trace-33417"></a>
<a id="trace-33436"></a>
<a id="trace-33438"></a>
<a id="trace-33450"></a>
<a id="trace-33452"></a>
<a id="trace-33466"></a>
<a id="trace-33468"></a>
<a id="trace-33482"></a>
<a id="trace-33484"></a>
<a id="trace-33506"></a>
<a id="trace-33508"></a>
<a id="trace-33524"></a>
<a id="trace-33526"></a>
<a id="trace-33601"></a>
<a id="trace-33603"></a>
<a id="trace-33612"></a>
<a id="trace-33614"></a>
<a id="trace-33633"></a>
<a id="trace-33635"></a>
<a id="trace-33669"></a>
<a id="trace-33671"></a>
<a id="trace-33680"></a>
<a id="trace-33682"></a>
<a id="trace-33700"></a>
<a id="trace-33702"></a>
<a id="trace-33719"></a>
<a id="trace-33721"></a>
<a id="trace-33734"></a>
<a id="trace-33736"></a>
<a id="trace-33745"></a>
<a id="trace-33747"></a>
<a id="trace-33819"></a>
<a id="trace-33821"></a>
<a id="trace-33838"></a>
<a id="trace-33840"></a>
<a id="trace-33856"></a>
<a id="trace-33858"></a>
<a id="trace-33877"></a>
<a id="trace-33879"></a>
<a id="trace-33905"></a>
<a id="trace-33907"></a>
<a id="trace-33923"></a>
<a id="trace-33925"></a>
<a id="trace-33947"></a>
<a id="trace-33949"></a>
<a id="trace-33958"></a>
<a id="trace-33960"></a>
<a id="trace-33980"></a>
<a id="trace-33982"></a>
<a id="trace-33992"></a>
<a id="trace-33994"></a>
- 140.80s–154.80s (×56), actor 5, squad 0 (trace 33381): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.45s, trace 33372. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33403}.
<a id="trace-34020"></a>
- 155.15s–155.15s (×1), actor 7, squad 0 (trace 34020): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 155.00s, trace 34006. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15119999999999992, 'next_transition': 34069}.
<a id="trace-34069"></a>
<a id="trace-34071"></a>
<a id="trace-34082"></a>
<a id="trace-34084"></a>
<a id="trace-34098"></a>
<a id="trace-34100"></a>
<a id="trace-34115"></a>
<a id="trace-34117"></a>
<a id="trace-34134"></a>
<a id="trace-34136"></a>
<a id="trace-34142"></a>
<a id="trace-34144"></a>
<a id="trace-34166"></a>
<a id="trace-34168"></a>
<a id="trace-34180"></a>
<a id="trace-34182"></a>
<a id="trace-34202"></a>
<a id="trace-34204"></a>
<a id="trace-34218"></a>
<a id="trace-34220"></a>
<a id="trace-34292"></a>
<a id="trace-34294"></a>
<a id="trace-34309"></a>
<a id="trace-34311"></a>
<a id="trace-34326"></a>
<a id="trace-34328"></a>
- 155.30s–161.30s (×26), actor 5, squad 0 (trace 34069): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 34004. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08986666666666683, 'next_transition': 34082}.
<a id="trace-34336"></a>
- 161.75s–161.75s (×1), actor 7, squad 0 (trace 34336): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 160.00s, trace 34229. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100044253766528, 'next_transition': 34338}.
<a id="trace-34338"></a>
<a id="trace-34340"></a>
<a id="trace-34358"></a>
<a id="trace-34360"></a>
<a id="trace-34366"></a>
<a id="trace-34368"></a>
<a id="trace-34380"></a>
<a id="trace-34382"></a>
<a id="trace-34392"></a>
<a id="trace-34394"></a>
<a id="trace-34412"></a>
<a id="trace-34414"></a>
<a id="trace-34429"></a>
<a id="trace-34431"></a>
<a id="trace-34499"></a>
<a id="trace-34501"></a>
<a id="trace-34513"></a>
<a id="trace-34515"></a>
<a id="trace-34533"></a>
<a id="trace-34535"></a>
<a id="trace-34543"></a>
<a id="trace-34545"></a>
<a id="trace-34555"></a>
<a id="trace-34557"></a>
<a id="trace-34564"></a>
<a id="trace-34566"></a>
<a id="trace-34581"></a>
<a id="trace-34583"></a>
<a id="trace-34595"></a>
<a id="trace-34597"></a>
<a id="trace-34611"></a>
<a id="trace-34613"></a>
<a id="trace-34620"></a>
<a id="trace-34622"></a>
<a id="trace-34695"></a>
<a id="trace-34697"></a>
<a id="trace-34710"></a>
<a id="trace-34712"></a>
<a id="trace-34725"></a>
<a id="trace-34727"></a>
<a id="trace-34734"></a>
<a id="trace-34736"></a>
<a id="trace-34754"></a>
<a id="trace-34756"></a>
<a id="trace-34764"></a>
<a id="trace-34766"></a>
<a id="trace-34785"></a>
<a id="trace-34787"></a>
<a id="trace-34797"></a>
<a id="trace-34799"></a>
- 161.80s–173.80s (×50), actor 5, squad 0 (trace 34338): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 34227. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42000887240628554, 'next_transition': 34358}.
<a id="trace-34808"></a>
- 174.00s–174.00s (×1), actor 7, squad 0 (trace 34808): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 170.00s, trace 34635. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34821}.
<a id="trace-2222"></a>
- 174.05s–174.05s (×1), actor 5, squad 1 (events line 2222): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 204, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2570}.
<a id="trace-34814"></a>
- 174.05s–174.05s (×1), actor 5, squad 1 (trace 34814): renew committed intent (75 s lifetime). Knowledge: actor memory at 174.05s, trace 34814. Next observer evidence: {'until': 204, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2570}.
<a id="trace-34821"></a>
<a id="trace-34823"></a>
<a id="trace-34835"></a>
<a id="trace-34837"></a>
<a id="trace-34904"></a>
<a id="trace-34906"></a>
<a id="trace-34918"></a>
<a id="trace-34920"></a>
<a id="trace-34936"></a>
<a id="trace-34938"></a>
<a id="trace-34951"></a>
<a id="trace-34953"></a>
<a id="trace-34968"></a>
<a id="trace-34970"></a>
- 174.30s–177.30s (×14), actor 5, squad 0 (trace 34821): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 174.05s, trace 34814. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34835}.
<a id="trace-2240"></a>
- 177.65s–177.65s (×1), actor 5, squad 0 (events line 2240): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-34975"></a>
- 177.65s–177.65s (×1), actor 5, squad 0 (trace 34975): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.193643 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.65s, trace 34975. Next observer evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34979}.
<a id="trace-34976"></a>
- 177.65s–177.65s (×1), actor 5, squad 0 (trace 34976): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.193643 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 177.65s, trace 34976. Next observer evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34979}.
<a id="trace-34979"></a>
<a id="trace-34981"></a>
<a id="trace-34996"></a>
<a id="trace-34998"></a>
<a id="trace-35007"></a>
<a id="trace-35009"></a>
- 177.80s–178.80s (×6), actor 5, squad 0 (trace 34979): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.65s, trace 34976. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34996}.
<a id="trace-35018"></a>
- 178.90s–178.90s (×1), actor 7, squad 0 (trace 35018): Withdraw to received rally. Knowledge: actor memory at 175.00s, trace 34844. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35122}.
<a id="trace-35019"></a>
- 178.90s–178.90s (×1), actor 7, squad 0 (trace 35019): rearward bound: one stationary suppressing element. Knowledge: actor memory at 175.00s, trace 34844. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35122}.
<a id="trace-35122"></a>
<a id="trace-35124"></a>
<a id="trace-35140"></a>
<a id="trace-35142"></a>
<a id="trace-35211"></a>
<a id="trace-35213"></a>
<a id="trace-35228"></a>
<a id="trace-35230"></a>
<a id="trace-35248"></a>
<a id="trace-35250"></a>
<a id="trace-35257"></a>
<a id="trace-35259"></a>
<a id="trace-35276"></a>
<a id="trace-35278"></a>
<a id="trace-35285"></a>
<a id="trace-35287"></a>
<a id="trace-35300"></a>
<a id="trace-35302"></a>
<a id="trace-35316"></a>
<a id="trace-35318"></a>
<a id="trace-35332"></a>
<a id="trace-35334"></a>
<a id="trace-35348"></a>
<a id="trace-35350"></a>
<a id="trace-35418"></a>
<a id="trace-35420"></a>
<a id="trace-35429"></a>
<a id="trace-35431"></a>
<a id="trace-35451"></a>
<a id="trace-35453"></a>
<a id="trace-35460"></a>
<a id="trace-35462"></a>
<a id="trace-35473"></a>
<a id="trace-35475"></a>
<a id="trace-35479"></a>
<a id="trace-35481"></a>
<a id="trace-35495"></a>
<a id="trace-35497"></a>
<a id="trace-35512"></a>
<a id="trace-35514"></a>
<a id="trace-35524"></a>
<a id="trace-35526"></a>
<a id="trace-35536"></a>
<a id="trace-35538"></a>
<a id="trace-35611"></a>
<a id="trace-35613"></a>
<a id="trace-35621"></a>
<a id="trace-35623"></a>
<a id="trace-35638"></a>
<a id="trace-35640"></a>
<a id="trace-35647"></a>
<a id="trace-35649"></a>
<a id="trace-35662"></a>
<a id="trace-35664"></a>
<a id="trace-35680"></a>
<a id="trace-35682"></a>
<a id="trace-35691"></a>
<a id="trace-35693"></a>
<a id="trace-35703"></a>
<a id="trace-35705"></a>
<a id="trace-35717"></a>
<a id="trace-35719"></a>
<a id="trace-35731"></a>
<a id="trace-35733"></a>
<a id="trace-35803"></a>
<a id="trace-35805"></a>
<a id="trace-35813"></a>
<a id="trace-35815"></a>
<a id="trace-35831"></a>
<a id="trace-35833"></a>
<a id="trace-35842"></a>
<a id="trace-35844"></a>
<a id="trace-35856"></a>
<a id="trace-35858"></a>
<a id="trace-35867"></a>
<a id="trace-35869"></a>
<a id="trace-35879"></a>
<a id="trace-35881"></a>
<a id="trace-35896"></a>
<a id="trace-35898"></a>
<a id="trace-35916"></a>
<a id="trace-35918"></a>
<a id="trace-35929"></a>
<a id="trace-35931"></a>
<a id="trace-36002"></a>
<a id="trace-36004"></a>
<a id="trace-36018"></a>
<a id="trace-36020"></a>
<a id="trace-36034"></a>
<a id="trace-36036"></a>
<a id="trace-36045"></a>
<a id="trace-36047"></a>
<a id="trace-36063"></a>
<a id="trace-36065"></a>
<a id="trace-36072"></a>
<a id="trace-36074"></a>
<a id="trace-36086"></a>
<a id="trace-36088"></a>
<a id="trace-36100"></a>
<a id="trace-36102"></a>
<a id="trace-36120"></a>
<a id="trace-36122"></a>
<a id="trace-36132"></a>
<a id="trace-36134"></a>
<a id="trace-36202"></a>
<a id="trace-36204"></a>
<a id="trace-36211"></a>
<a id="trace-36213"></a>
<a id="trace-36233"></a>
<a id="trace-36235"></a>
<a id="trace-36243"></a>
<a id="trace-36245"></a>
<a id="trace-36256"></a>
<a id="trace-36258"></a>
<a id="trace-36265"></a>
<a id="trace-36267"></a>
<a id="trace-36279"></a>
<a id="trace-36281"></a>
<a id="trace-36296"></a>
<a id="trace-36298"></a>
<a id="trace-36308"></a>
<a id="trace-36310"></a>
<a id="trace-36390"></a>
<a id="trace-36392"></a>
<a id="trace-36409"></a>
<a id="trace-36411"></a>
<a id="trace-36432"></a>
<a id="trace-36434"></a>
<a id="trace-36456"></a>
<a id="trace-36458"></a>
<a id="trace-36480"></a>
<a id="trace-36482"></a>
<a id="trace-36555"></a>
<a id="trace-36557"></a>
<a id="trace-36581"></a>
<a id="trace-36583"></a>
<a id="trace-36608"></a>
<a id="trace-36610"></a>
<a id="trace-36630"></a>
<a id="trace-36632"></a>
<a id="trace-36662"></a>
<a id="trace-36664"></a>
<a id="trace-36736"></a>
<a id="trace-36738"></a>
<a id="trace-36762"></a>
<a id="trace-36764"></a>
<a id="trace-36785"></a>
<a id="trace-36787"></a>
<a id="trace-36808"></a>
<a id="trace-36810"></a>
<a id="trace-36835"></a>
<a id="trace-36837"></a>
<a id="trace-36915"></a>
<a id="trace-36917"></a>
<a id="trace-36944"></a>
<a id="trace-36946"></a>
<a id="trace-36965"></a>
<a id="trace-36967"></a>
<a id="trace-36989"></a>
<a id="trace-36991"></a>
<a id="trace-37012"></a>
<a id="trace-37014"></a>
<a id="trace-37090"></a>
<a id="trace-37092"></a>
<a id="trace-37119"></a>
<a id="trace-37121"></a>
<a id="trace-37150"></a>
<a id="trace-37152"></a>
<a id="trace-37171"></a>
<a id="trace-37173"></a>
<a id="trace-37201"></a>
<a id="trace-37203"></a>
<a id="trace-37277"></a>
<a id="trace-37279"></a>
<a id="trace-37299"></a>
<a id="trace-37301"></a>
<a id="trace-37330"></a>
<a id="trace-37332"></a>
- 179.30s–237.30s (×178), actor 5, squad 0 (trace 35122): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 177.65s, trace 34976. Next observer evidence: {'until': 179.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35140}.
<a id="trace-2570"></a>
- 234.20s–234.20s (×1), actor 5, squad 1 (events line 2570): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3038}.
<a id="trace-37197"></a>
- 234.20s–234.20s (×1), actor 5, squad 1 (trace 37197): renew committed intent (75 s lifetime). Knowledge: actor memory at 234.20s, trace 37197. Next observer evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3038}.
<a id="trace-2600"></a>
- 237.80s–237.80s (×1), actor 5, squad 0 (events line 2600): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37359}.
<a id="trace-37349"></a>
- 237.80s–237.80s (×1), actor 5, squad 0 (trace 37349): renew committed intent (75 s lifetime). Knowledge: actor memory at 237.80s, trace 37349. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37359}.
<a id="trace-37359"></a>
<a id="trace-37361"></a>
<a id="trace-37388"></a>
<a id="trace-37390"></a>
<a id="trace-37466"></a>
<a id="trace-37468"></a>
<a id="trace-37491"></a>
<a id="trace-37493"></a>
<a id="trace-37514"></a>
<a id="trace-37516"></a>
<a id="trace-37537"></a>
<a id="trace-37539"></a>
<a id="trace-37571"></a>
<a id="trace-37573"></a>
<a id="trace-37651"></a>
<a id="trace-37653"></a>
<a id="trace-37679"></a>
<a id="trace-37681"></a>
<a id="trace-37701"></a>
<a id="trace-37703"></a>
<a id="trace-37722"></a>
<a id="trace-37724"></a>
<a id="trace-37751"></a>
<a id="trace-37753"></a>
<a id="trace-37834"></a>
<a id="trace-37836"></a>
<a id="trace-37861"></a>
<a id="trace-37863"></a>
<a id="trace-37893"></a>
<a id="trace-37895"></a>
<a id="trace-37912"></a>
<a id="trace-37914"></a>
<a id="trace-37936"></a>
<a id="trace-37938"></a>
<a id="trace-38012"></a>
<a id="trace-38014"></a>
<a id="trace-38043"></a>
<a id="trace-38045"></a>
<a id="trace-38068"></a>
<a id="trace-38070"></a>
<a id="trace-38093"></a>
<a id="trace-38095"></a>
<a id="trace-38122"></a>
<a id="trace-38124"></a>
<a id="trace-38199"></a>
<a id="trace-38201"></a>
<a id="trace-38224"></a>
<a id="trace-38226"></a>
<a id="trace-38248"></a>
<a id="trace-38250"></a>
<a id="trace-38271"></a>
<a id="trace-38273"></a>
<a id="trace-38305"></a>
<a id="trace-38307"></a>
<a id="trace-38389"></a>
<a id="trace-38391"></a>
<a id="trace-38410"></a>
<a id="trace-38412"></a>
<a id="trace-38432"></a>
<a id="trace-38434"></a>
<a id="trace-38452"></a>
<a id="trace-38454"></a>
<a id="trace-38481"></a>
<a id="trace-38483"></a>
<a id="trace-38563"></a>
<a id="trace-38565"></a>
<a id="trace-38588"></a>
<a id="trace-38590"></a>
<a id="trace-38614"></a>
<a id="trace-38616"></a>
<a id="trace-38635"></a>
<a id="trace-38637"></a>
<a id="trace-38660"></a>
<a id="trace-38662"></a>
<a id="trace-38734"></a>
<a id="trace-38736"></a>
<a id="trace-38761"></a>
<a id="trace-38763"></a>
<a id="trace-38792"></a>
<a id="trace-38794"></a>
<a id="trace-38814"></a>
<a id="trace-38816"></a>
<a id="trace-38843"></a>
<a id="trace-38845"></a>
<a id="trace-38919"></a>
<a id="trace-38921"></a>
<a id="trace-38944"></a>
<a id="trace-38946"></a>
<a id="trace-38968"></a>
<a id="trace-38970"></a>
<a id="trace-38991"></a>
<a id="trace-38993"></a>
<a id="trace-39020"></a>
<a id="trace-39022"></a>
<a id="trace-39107"></a>
<a id="trace-39109"></a>
<a id="trace-39129"></a>
<a id="trace-39131"></a>
<a id="trace-39150"></a>
<a id="trace-39152"></a>
<a id="trace-39170"></a>
<a id="trace-39172"></a>
<a id="trace-39203"></a>
<a id="trace-39205"></a>
<a id="trace-39282"></a>
<a id="trace-39284"></a>
<a id="trace-39309"></a>
<a id="trace-39311"></a>
<a id="trace-39338"></a>
<a id="trace-39340"></a>
<a id="trace-39357"></a>
<a id="trace-39359"></a>
<a id="trace-39386"></a>
<a id="trace-39388"></a>
<a id="trace-39464"></a>
<a id="trace-39466"></a>
<a id="trace-39492"></a>
<a id="trace-39494"></a>
<a id="trace-39523"></a>
<a id="trace-39525"></a>
- 238.30s–297.30s (×120), actor 5, squad 0 (trace 37359): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 237.80s, trace 37349. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37388}.
<a id="trace-3038"></a>
- 294.45s–294.45s (×1), actor 5, squad 1 (events line 3038): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-39397"></a>
- 294.45s–294.45s (×1), actor 5, squad 1 (trace 39397): renew committed intent (75 s lifetime). Knowledge: actor memory at 294.45s, trace 39397. Next observer evidence: {'until': 324.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3505}.
<a id="trace-3071"></a>
- 298.20s–298.20s (×1), actor 5, squad 0 (events line 3071): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-39544"></a>
- 298.20s–298.20s (×1), actor 5, squad 0 (trace 39544): renew committed intent (75 s lifetime). Knowledge: actor memory at 298.20s, trace 39544. Next observer evidence: None.
<a id="trace-39554"></a>
<a id="trace-39556"></a>
<a id="trace-39577"></a>
<a id="trace-39579"></a>
<a id="trace-39657"></a>
<a id="trace-39659"></a>
<a id="trace-39682"></a>
<a id="trace-39684"></a>
<a id="trace-39707"></a>
<a id="trace-39709"></a>
<a id="trace-39733"></a>
<a id="trace-39735"></a>
<a id="trace-39763"></a>
<a id="trace-39765"></a>
<a id="trace-39845"></a>
<a id="trace-39847"></a>
<a id="trace-39867"></a>
<a id="trace-39869"></a>
<a id="trace-39886"></a>
<a id="trace-39888"></a>
<a id="trace-39907"></a>
<a id="trace-39909"></a>
<a id="trace-39938"></a>
<a id="trace-39940"></a>
<a id="trace-40024"></a>
<a id="trace-40026"></a>
<a id="trace-40043"></a>
<a id="trace-40045"></a>
<a id="trace-40070"></a>
<a id="trace-40072"></a>
<a id="trace-40093"></a>
<a id="trace-40095"></a>
<a id="trace-40119"></a>
<a id="trace-40121"></a>
<a id="trace-40195"></a>
<a id="trace-40197"></a>
<a id="trace-40224"></a>
<a id="trace-40226"></a>
<a id="trace-40251"></a>
<a id="trace-40253"></a>
<a id="trace-40281"></a>
<a id="trace-40283"></a>
<a id="trace-40304"></a>
<a id="trace-40306"></a>
<a id="trace-40380"></a>
<a id="trace-40382"></a>
<a id="trace-40405"></a>
<a id="trace-40407"></a>
<a id="trace-40433"></a>
<a id="trace-40435"></a>
<a id="trace-40453"></a>
<a id="trace-40455"></a>
<a id="trace-40485"></a>
<a id="trace-40487"></a>
<a id="trace-40567"></a>
<a id="trace-40569"></a>
<a id="trace-40588"></a>
<a id="trace-40590"></a>
<a id="trace-40609"></a>
<a id="trace-40611"></a>
<a id="trace-40629"></a>
<a id="trace-40631"></a>
<a id="trace-40660"></a>
<a id="trace-40662"></a>
<a id="trace-40746"></a>
<a id="trace-40748"></a>
<a id="trace-40773"></a>
<a id="trace-40775"></a>
<a id="trace-40795"></a>
<a id="trace-40797"></a>
<a id="trace-40818"></a>
<a id="trace-40820"></a>
<a id="trace-40843"></a>
<a id="trace-40845"></a>
<a id="trace-40921"></a>
<a id="trace-40923"></a>
<a id="trace-40949"></a>
<a id="trace-40951"></a>
<a id="trace-40978"></a>
<a id="trace-40980"></a>
<a id="trace-41004"></a>
<a id="trace-41006"></a>
<a id="trace-41027"></a>
<a id="trace-41029"></a>
<a id="trace-41104"></a>
<a id="trace-41106"></a>
<a id="trace-41129"></a>
<a id="trace-41131"></a>
<a id="trace-41157"></a>
<a id="trace-41159"></a>
<a id="trace-41181"></a>
<a id="trace-41183"></a>
<a id="trace-41208"></a>
<a id="trace-41210"></a>
<a id="trace-41292"></a>
<a id="trace-41294"></a>
<a id="trace-41318"></a>
<a id="trace-41320"></a>
<a id="trace-41339"></a>
<a id="trace-41341"></a>
<a id="trace-41361"></a>
<a id="trace-41363"></a>
<a id="trace-41390"></a>
<a id="trace-41392"></a>
<a id="trace-41471"></a>
<a id="trace-41473"></a>
<a id="trace-41501"></a>
<a id="trace-41503"></a>
<a id="trace-41524"></a>
<a id="trace-41526"></a>
<a id="trace-41546"></a>
<a id="trace-41548"></a>
<a id="trace-41573"></a>
<a id="trace-41575"></a>
<a id="trace-41657"></a>
<a id="trace-41659"></a>
<a id="trace-41684"></a>
<a id="trace-41686"></a>
<a id="trace-41711"></a>
<a id="trace-41713"></a>
- 298.30s–357.30s (×120), actor 5, squad 0 (trace 39554): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 298.20s, trace 39544. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39577}.
<a id="trace-3505"></a>
- 354.45s–354.45s (×1), actor 5, squad 1 (events line 3505): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-41584"></a>
- 354.45s–354.45s (×1), actor 5, squad 1 (trace 41584): renew committed intent (75 s lifetime). Knowledge: actor memory at 354.45s, trace 41584. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-3544"></a>
- 358.20s–358.20s (×1), actor 5, squad 0 (events line 3544): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-41736"></a>
- 358.20s–358.20s (×1), actor 5, squad 0 (trace 41736): renew committed intent (75 s lifetime). Knowledge: actor memory at 358.20s, trace 41736. Next observer evidence: None.
<a id="trace-41740"></a>
<a id="trace-41742"></a>
<a id="trace-41763"></a>
<a id="trace-41765"></a>
- 358.30s–359.30s (×4), actor 5, squad 0 (trace 41740): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 358.20s, trace 41736. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 41763}.

## Net delivery

312 matched order/radio deliveries; 485 explicitly recorded losses; 3 unmatched orders (not classified as lost).
Matched delay: mean 0.386s; maximum 2.850s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4557: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4569: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4570: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4571: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4572: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4573: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4574: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4576: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4577: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4578: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4579: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4580: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 5204: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 5205: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 5206: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.25s leader 5, trace 5207: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 6212: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 6213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 6214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 6215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 6216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 6217: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 6218: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 6219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 6220: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 6221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 6222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 6223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 6224: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 6225: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 6226: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 6227: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 6228: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 6229: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 6230: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 6231: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 6232: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 6233: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 6234: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 6235: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 7354: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7358: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7359: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 7361: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 7363: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 7364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7365: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7366: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7367: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7368: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7369: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7370: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7371: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7372: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7373: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7374: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 7375: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 7376: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 11356: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 11357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 11358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 11359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 11360: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 11361: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 11362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 11363: estimate 14.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 11364: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 11365: estimate 13.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 11366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 11367: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 11368: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 11369: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 11370: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 11371: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 11372: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 11373: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 11374: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 11375: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 11376: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 11377: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 11378: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 15509: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 15510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 15511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 15512: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 15513: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 15514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 15515: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 15516: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 15517: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 15518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 15519: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 15520: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 15521: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 15522: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 15523: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 15524: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 15525: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 15526: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 15527: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 15528: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 15529: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 15530: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 16182: estimate 14.84; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 16183: estimate 14.84; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 16313: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 16314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 16315: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 16316: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 16317: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 16318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 16319: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 16320: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 16321: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 16322: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 16323: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 16324: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 16325: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 16326: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 16327: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 16328: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 16329: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 16330: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 16331: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 16332: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 16333: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 57.05s leader 5, trace 16469: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 19572: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 19573: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 19574: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 19575: estimate 14.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 19576: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 19577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 19578: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 19579: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 19580: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 19581: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 19582: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 19583: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 19584: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 19585: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 19586: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 19587: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 19588: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 19589: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 19590: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 19591: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 19592: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 23166: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 23167: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 23168: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 23169: estimate 14.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 23170: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 23171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 23172: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 23173: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 23174: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 23175: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 23176: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 23177: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 23178: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 23179: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 23180: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 23181: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 23182: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 23183: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 23184: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 23185: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 23186: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 23715: estimate 14.60; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 23716: estimate 14.60; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 23798: estimate 14.55; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.95s leader 5, trace 23799: estimate 14.55; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 26596: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 26597: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 26598: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 26599: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 26600: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 26601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 26602: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 26603: estimate 12.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 26604: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 26605: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 26606: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 26607: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 26608: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 26609: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 26610: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 26611: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 26612: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 26613: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 26614: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 26615: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 26616: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 26940: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 26941: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 26942: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 26943: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 26944: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 26945: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 26946: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 26947: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 26948: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 26949: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 26950: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 26951: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 26952: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 26953: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 26954: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 26955: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 26956: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 26957: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 26958: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 26959: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 26960: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 29447: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 29448: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 29449: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 29450: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 29451: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 29452: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 29453: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 29454: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 29455: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 29456: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 29457: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 29458: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 29459: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 29460: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 29461: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 29462: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 29463: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 29464: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 29465: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 29466: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 29467: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 29475: estimate 14.73; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 29476: estimate 14.73; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 29882: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 29883: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 29884: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 29885: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 29886: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 29887: estimate 14.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 29888: estimate 12.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 29889: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 29890: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 29891: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 29892: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 29893: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 29894: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 29895: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 29896: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 29897: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 29898: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 29899: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 29900: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 29901: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 30869: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 30870: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 30871: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 30872: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 30873: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 30874: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 30875: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 30876: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 30877: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 30878: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 30879: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 30880: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 30881: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 30882: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 30883: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 30884: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 30885: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 31204: estimate 14.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 31205: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 31206: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 31207: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 31208: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 31209: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 31210: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 31211: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 31212: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 31213: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 31214: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 31215: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 31216: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 31217: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 31218: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 31219: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 31419: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 31420: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 31421: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 31422: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 31423: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 31424: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 31425: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 31426: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 31427: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 31428: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 31429: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 31430: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 31431: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 31432: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 31433: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 31434: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 31655: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 31656: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 31657: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 31658: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 31659: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 31660: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 31661: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 31662: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 31663: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 31664: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 31665: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 31666: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 31667: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 31668: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 31669: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 31670: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 31877: estimate 13.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 31878: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 31879: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 31880: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 31881: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 31882: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 31883: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 31884: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 31885: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 31886: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 31887: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 31888: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 31889: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 31890: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 31891: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 31892: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 114.05s leader 5, trace 32081: estimate 13.63; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 114.05s leader 5, trace 32082: estimate 13.63; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 32113: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 32114: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 32115: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 32116: estimate 14.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 32117: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 32118: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 32119: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 32120: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 32121: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 32122: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 32123: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 32124: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 32125: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 32126: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 32127: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 32128: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 32349: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 32350: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 32351: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 32352: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 32353: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 32354: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 32355: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 32356: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 32357: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 32358: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 32359: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 32360: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 32361: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 32362: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 32363: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 32364: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 32577: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 32578: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 32579: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 32580: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 32581: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 32582: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 32583: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 32584: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 32585: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 32586: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 32587: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 32588: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 32589: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 32590: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 32591: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 32592: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 32799: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 32800: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 32801: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 32802: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 32803: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 32804: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 32805: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 32806: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 32807: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 32808: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 32809: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 32810: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 32811: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 32812: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 32813: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 32814: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 33047: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 33048: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 33049: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 33050: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 33051: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 33052: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 33053: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 33054: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 33055: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 33056: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 33057: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 33058: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 33059: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 33060: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 33061: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 33062: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 33293: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 33294: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 33295: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 33296: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 33297: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 33298: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 33299: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 33300: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 33301: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 33302: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 33303: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 33304: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 33305: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 33306: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 33307: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 33308: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.45s leader 5, trace 33372: estimate 12.53; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 33536: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 33537: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 33538: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 33539: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 33540: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 33541: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 33542: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 33543: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 33544: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 33545: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 33546: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 33547: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 33548: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 33549: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 33550: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 33551: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 33757: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 33758: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 33759: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 33760: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 33761: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 33762: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 33763: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 33764: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 33765: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 33766: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 33767: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 33768: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 33769: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 33770: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 33771: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 34004: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 34005: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 34006: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 34007: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 34008: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 34009: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 34010: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 34011: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 34012: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 34013: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 34014: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 34015: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 34016: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 34017: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 34018: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 34227: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 34228: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 34229: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 34230: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 34231: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 34232: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 34233: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 34234: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 34235: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 34236: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 34237: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 34238: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 34239: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 34240: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 34437: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 34438: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 34439: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 34440: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 34441: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 34442: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 34443: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 34444: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 34445: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 34446: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 34447: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 34448: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 34449: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 34450: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 34633: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 34634: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 34635: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 34636: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 34637: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 34638: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 34639: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 34640: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 34641: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 34642: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 34643: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 34644: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 34645: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 34646: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 174.05s leader 5, trace 34814: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 34842: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 34843: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 34844: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 34845: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 34846: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 34847: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 34848: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 34849: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 34850: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 34851: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 34852: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 34853: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 34854: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 34855: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.65s leader 5, trace 34975: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.65s leader 5, trace 34976: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 35145: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 35146: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 35147: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 35148: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 35149: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 35150: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 35151: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 35152: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 35153: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 35154: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 35155: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 35156: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 35157: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 35158: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 35355: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 35356: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 35357: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 35358: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 35359: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 35360: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 35361: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 35362: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 35363: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 35364: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 35365: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 35366: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 35367: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 35368: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 35545: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 35546: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 35547: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 35548: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 35549: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 35550: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 35551: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 35552: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 35553: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 35554: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 35555: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 35556: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 35557: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 35558: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 35738: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 35739: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 35740: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 35741: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 35742: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 35743: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 35744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 35745: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 35746: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 35747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 35748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 35749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 35750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 35751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 35937: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 35938: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 35939: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 35940: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 35941: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 35942: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 35943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 35944: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 35945: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 35946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 35947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 35948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 35949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 35950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 36137: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 36138: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 36139: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 36140: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 36141: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 36142: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 36143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 36144: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 36145: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 36146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 36147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 36148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 36149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 36150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 36327: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 36328: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 36329: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 36330: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 36331: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 36332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 36333: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 36334: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 36335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 36336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 36337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 36338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 36339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 36496: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 36497: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 36498: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 36499: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 36500: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 36501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 36502: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 36503: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 36504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 36505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 36506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 36507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 36508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 36676: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 36677: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 36678: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 36679: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 36680: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 36681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 36682: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 36683: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 36684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 36685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 36686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 36687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 36688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 36855: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 36856: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 36857: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 36858: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 36859: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 36860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 36861: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 36862: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 36863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 36864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 36865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 36866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 36867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 37033: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 37034: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 37035: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 37036: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 37037: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 37038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 37039: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 37040: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 37041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 37042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 37043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 37044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 37045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 234.20s leader 5, trace 37197: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 37220: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 37221: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 37222: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 37223: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 37224: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 37225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 37226: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 37227: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 37228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 37229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 37230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 37231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 37232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 237.80s leader 5, trace 37349: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 37405: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 37406: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 37407: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 37408: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 37409: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 37410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 37411: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 37412: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 37413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 37414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 37415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 37416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 37417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 37594: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 37595: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 37596: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 37597: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 37598: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 37599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 37600: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 37601: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 37602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 37603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 37604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 37605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 37606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 37775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 37776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 37777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 37778: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 37779: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 37780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 37781: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 37782: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 37783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 37784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 37785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 37786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 37787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 37955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 37956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 37957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 37958: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 37959: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 37960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 37961: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 37962: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 37963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 37964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 37965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 37966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 37967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 38140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 38141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 38142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 38143: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 38144: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 38145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 38146: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 38147: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 38148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 38149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 38150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 38151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 38152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 38326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 38327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 38328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 38329: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 38330: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 38331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 38332: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 38333: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 38334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 38335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 38336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 38337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 38338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 38500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 38501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 38502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 38503: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 38504: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 38505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 38506: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 38507: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 38508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 38509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 38510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 38511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 38512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 38677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 38678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 38679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 38680: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 38681: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 38682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 38683: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 38684: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 38685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 38686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 38687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 38688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 38689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 38858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 38859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 38860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 38861: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 38862: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 38863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 38864: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 38865: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 38866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 38867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 38868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 38869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 38870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 39043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 39044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 39045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 39046: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 39047: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 39048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 39049: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 39050: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 39051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 39052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 39053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 39054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 39055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 39222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 39223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 39224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 39225: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 39226: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 39227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 39228: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 39229: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 39230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 39231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 39232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 39233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 39234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 294.45s leader 5, trace 39397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 39405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 39406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 39407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 39408: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 39409: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 39410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 39411: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 39412: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 39413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 39414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 39415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 39416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 39417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 298.20s leader 5, trace 39544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 39595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 39596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 39597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 39598: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 39599: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 39600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 39601: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 39602: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 39603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 39604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 39605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 39606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 39607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 39787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 39788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 39789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 39790: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 39791: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 39792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 39793: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 39794: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 39795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 39796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 39797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 39798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 39799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 39963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 39964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 39965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 39966: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 39967: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 39968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 39969: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 39970: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 39971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 39972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 39973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 39974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 39975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 40134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 40135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 40136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 40137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 40138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 40139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 40140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 40141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 40142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 40143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 40144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 40145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 40146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 40321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 40322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 40323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 40324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 40325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 40326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 40327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 40328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 40329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 40330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 40331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 40332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 40333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 40510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 40511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 40512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 40513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 40514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 40515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 40516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 40517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 40518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 40519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 40520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 40521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 40522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 40684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 40685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 40686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 40687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 40688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 40689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 40690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 40691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 40692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 40693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 40694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 40695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 40696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 40862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 40863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 40864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 40865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 40866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 40867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 40868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 40869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 40870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 40871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 40872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 40873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 40874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 41045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 41046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 41047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 41048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 41049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 41050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 41051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 41052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 41053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 41054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 41055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 41056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 41057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 41235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 41236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 41237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 41238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 41239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 41240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 41241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 41242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 41243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 41244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 41245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 41246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 41247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 41414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 41415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 41416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 41417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 41418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 41419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 41420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 41421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 41422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 41423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 41424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 41425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 41426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 354.45s leader 5, trace 41584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 41596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 41597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 41598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 41599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 41600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 41601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 41602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 41603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 41604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 41605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 41606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 41607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 41608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.20s leader 5, trace 41736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 41780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 41781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 41782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 41783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 41784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 41785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 41786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 41787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 41788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 41789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 41790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 41791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 41792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Soren incapacitated
- 1: Vale killed in action
- 1: Bren incapacitated
- 1: Tern incapacitated
- 1: Dane incapacitated
- 1: Ellis incapacitated
- 1: Rook killed in action
- 1: Ash killed in action
- 1: Voss incapacitated
- 1: Orin incapacitated
- 1: Moss incapacitated

## Outcome attribution

- 114.05s, evidence 1857: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32186}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 114.05s, evidence 32081: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.146697 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32186}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 114.05s, evidence 32082: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.146697 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32186}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 174.05s, evidence 2222: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 204, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2570}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.65s, evidence 2240: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.65s, evidence 34975: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.193643 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34979}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 177.65s, evidence 34976: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.193643 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34979}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 234.20s, evidence 2570: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3038}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 237.80s, evidence 2600: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37359}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 294.45s, evidence 3038: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 298.20s, evidence 3071: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 354.45s, evidence 3505: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 358.20s, evidence 3544: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
