# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/23/107/good-azure/battle-107-1789674168530606392`

## Battle summary

**Draw** · 360 s · 414 shots.

### Turning points

- 20.3s, squad 4: contact (events line 190). First recorded contact.
- 25.0s, squad 0: help call ([trace 1482](#trace-1482)). No completion observed before termination.
- 69.2s, squad 0: withdrawal ([trace 4536](#trace-4536)). 113.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 84.8s, squad 0: help call ([trace 5376](#trace-5376)). No completion observed before termination.
- 119.9s, squad 0: withdrawal ([trace 7040](#trace-7040)). 159.5s, squad 0: advanced tactically.
- 159.2s, squad 0: help call ([trace 9068](#trace-9068)). No completion observed before termination.
- 165.2s, squad 0: withdrawal ([trace 9384](#trace-9384)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 25 shots, 2/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 389 shots, 2/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 399](#trace-399)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 62.0s, squad 0 chose took cover and returned fire ([trace 3260](#trace-3260)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 398](#trace-398)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
- 65.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.468099 retreat threshold=0.500000 initiative=delegated ([trace 4446](#trace-4446)). Following evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2709537982503458, 'next_transition': 4462}.

### Communication

175 matched deliveries (mean 0.25s, max 1.70s); 240 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 20.30s, squad 4, contact, evidence events line 190: First recorded contact; .
- 24.95s, squad 0, help call, evidence 1482: NeedSupport; No completion observed before termination.
- 69.15s, squad 0, withdrawal, evidence 4536: BreakContact: believed ratio at least two without superiority; 113.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 84.75s, squad 0, help call, evidence 5376: NeedSupport; No completion observed before termination.
- 119.90s, squad 0, withdrawal, evidence 7040: Withdraw to received rally; 159.5s, squad 0: advanced tactically.
- 159.15s, squad 0, help call, evidence 9068: NeedSupport; No completion observed before termination.
- 165.15s, squad 0, withdrawal, evidence 9384: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287288310560543, 'next_transition': 333}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287288310560543, 'next_transition': 333}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287288310560543, 'next_transition': 333}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200132801496435, 'next_transition': 351}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
<a id="trace-398"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 398): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 398. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
<a id="trace-399"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 399): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
<a id="trace-412"></a>
<a id="trace-431"></a>
<a id="trace-505"></a>
<a id="trace-517"></a>
<a id="trace-539"></a>
<a id="trace-557"></a>
<a id="trace-570"></a>
<a id="trace-586"></a>
<a id="trace-607"></a>
<a id="trace-628"></a>
<a id="trace-640"></a>
<a id="trace-648"></a>
<a id="trace-730"></a>
<a id="trace-739"></a>
- 4.20s–10.70s (×14), actor 5, squad 0 (trace 412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000145545374151, 'next_transition': 431}.
<a id="trace-559"></a>
<a id="trace-609"></a>
<a id="trace-630"></a>
<a id="trace-650"></a>
<a id="trace-732"></a>
<a id="trace-741"></a>
<a id="trace-845"></a>
<a id="trace-890"></a>
<a id="trace-967"></a>
<a id="trace-983"></a>
<a id="trace-1071"></a>
<a id="trace-1114"></a>
<a id="trace-1126"></a>
<a id="trace-1143"></a>
<a id="trace-1152"></a>
<a id="trace-1174"></a>
<a id="trace-1254"></a>
<a id="trace-1376"></a>
<a id="trace-1413"></a>
<a id="trace-1428"></a>
<a id="trace-1439"></a>
<a id="trace-1448"></a>
<a id="trace-1456"></a>
<a id="trace-1467"></a>
<a id="trace-1479"></a>
<a id="trace-1557"></a>
<a id="trace-1564"></a>
<a id="trace-1745"></a>
<a id="trace-1759"></a>
<a id="trace-1774"></a>
<a id="trace-1794"></a>
<a id="trace-1807"></a>
<a id="trace-1815"></a>
<a id="trace-1892"></a>
<a id="trace-1900"></a>
<a id="trace-1910"></a>
<a id="trace-1920"></a>
<a id="trace-1933"></a>
<a id="trace-1948"></a>
<a id="trace-1957"></a>
<a id="trace-1965"></a>
<a id="trace-1980"></a>
<a id="trace-2073"></a>
<a id="trace-2088"></a>
<a id="trace-2106"></a>
<a id="trace-2117"></a>
<a id="trace-2139"></a>
<a id="trace-2145"></a>
<a id="trace-2159"></a>
<a id="trace-2242"></a>
<a id="trace-2267"></a>
<a id="trace-2484"></a>
<a id="trace-2500"></a>
<a id="trace-2522"></a>
<a id="trace-2531"></a>
<a id="trace-2540"></a>
<a id="trace-2560"></a>
<a id="trace-2648"></a>
<a id="trace-2658"></a>
<a id="trace-2673"></a>
<a id="trace-2683"></a>
<a id="trace-2694"></a>
<a id="trace-2755"></a>
<a id="trace-2784"></a>
<a id="trace-2794"></a>
<a id="trace-2879"></a>
<a id="trace-2889"></a>
<a id="trace-2901"></a>
<a id="trace-2908"></a>
<a id="trace-2922"></a>
<a id="trace-2935"></a>
<a id="trace-2943"></a>
<a id="trace-2952"></a>
<a id="trace-2976"></a>
<a id="trace-3047"></a>
<a id="trace-3057"></a>
<a id="trace-3084"></a>
<a id="trace-3095"></a>
<a id="trace-3104"></a>
<a id="trace-3125"></a>
<a id="trace-3136"></a>
<a id="trace-3144"></a>
<a id="trace-3234"></a>
<a id="trace-3244"></a>
<a id="trace-3252"></a>
<a id="trace-3950"></a>
<a id="trace-3970"></a>
<a id="trace-3995"></a>
<a id="trace-4008"></a>
<a id="trace-4103"></a>
<a id="trace-4445"></a>
<a id="trace-4464"></a>
<a id="trace-4480"></a>
<a id="trace-4493"></a>
<a id="trace-4506"></a>
<a id="trace-4531"></a>
<a id="trace-4800"></a>
<a id="trace-4808"></a>
<a id="trace-4885"></a>
<a id="trace-4899"></a>
<a id="trace-4914"></a>
<a id="trace-4927"></a>
<a id="trace-4940"></a>
<a id="trace-4949"></a>
<a id="trace-4981"></a>
<a id="trace-4989"></a>
<a id="trace-4996"></a>
<a id="trace-5077"></a>
<a id="trace-5082"></a>
<a id="trace-5103"></a>
<a id="trace-5123"></a>
<a id="trace-5142"></a>
<a id="trace-5172"></a>
<a id="trace-5189"></a>
<a id="trace-5300"></a>
<a id="trace-5311"></a>
<a id="trace-5319"></a>
<a id="trace-5334"></a>
<a id="trace-5349"></a>
<a id="trace-5375"></a>
<a id="trace-5462"></a>
<a id="trace-5467"></a>
<a id="trace-5476"></a>
<a id="trace-5489"></a>
<a id="trace-5734"></a>
<a id="trace-5754"></a>
<a id="trace-5761"></a>
<a id="trace-5777"></a>
<a id="trace-5783"></a>
<a id="trace-5794"></a>
<a id="trace-5804"></a>
<a id="trace-5812"></a>
<a id="trace-5822"></a>
<a id="trace-5901"></a>
<a id="trace-5916"></a>
<a id="trace-5924"></a>
<a id="trace-5944"></a>
<a id="trace-5950"></a>
<a id="trace-5958"></a>
<a id="trace-5968"></a>
<a id="trace-5981"></a>
<a id="trace-5990"></a>
<a id="trace-6073"></a>
<a id="trace-6112"></a>
<a id="trace-6124"></a>
<a id="trace-6131"></a>
<a id="trace-6144"></a>
<a id="trace-6240"></a>
<a id="trace-6248"></a>
<a id="trace-6261"></a>
<a id="trace-6271"></a>
<a id="trace-6277"></a>
<a id="trace-6289"></a>
<a id="trace-6296"></a>
<a id="trace-6483"></a>
<a id="trace-6496"></a>
<a id="trace-6611"></a>
<a id="trace-6634"></a>
<a id="trace-6641"></a>
<a id="trace-6652"></a>
<a id="trace-6672"></a>
<a id="trace-6807"></a>
<a id="trace-6917"></a>
<a id="trace-6962"></a>
<a id="trace-6986"></a>
<a id="trace-6995"></a>
<a id="trace-7004"></a>
<a id="trace-7015"></a>
<a id="trace-7026"></a>
<a id="trace-7038"></a>
<a id="trace-7295"></a>
<a id="trace-7312"></a>
<a id="trace-7348"></a>
<a id="trace-7363"></a>
<a id="trace-7377"></a>
<a id="trace-7394"></a>
<a id="trace-7400"></a>
<a id="trace-7410"></a>
<a id="trace-7417"></a>
<a id="trace-7487"></a>
<a id="trace-7496"></a>
<a id="trace-7510"></a>
<a id="trace-7519"></a>
<a id="trace-7529"></a>
<a id="trace-7548"></a>
<a id="trace-7577"></a>
<a id="trace-7587"></a>
<a id="trace-7659"></a>
<a id="trace-7671"></a>
<a id="trace-7683"></a>
<a id="trace-7688"></a>
<a id="trace-7701"></a>
<a id="trace-7713"></a>
<a id="trace-7725"></a>
<a id="trace-7734"></a>
<a id="trace-7767"></a>
<a id="trace-7883"></a>
<a id="trace-8148"></a>
<a id="trace-8164"></a>
<a id="trace-8216"></a>
<a id="trace-8222"></a>
<a id="trace-8302"></a>
<a id="trace-8321"></a>
<a id="trace-8332"></a>
<a id="trace-8341"></a>
<a id="trace-8352"></a>
<a id="trace-8371"></a>
<a id="trace-8379"></a>
<a id="trace-8455"></a>
<a id="trace-8459"></a>
<a id="trace-8470"></a>
<a id="trace-8480"></a>
<a id="trace-8493"></a>
<a id="trace-8510"></a>
<a id="trace-8517"></a>
<a id="trace-8688"></a>
<a id="trace-8698"></a>
<a id="trace-8781"></a>
<a id="trace-8806"></a>
<a id="trace-8822"></a>
<a id="trace-8839"></a>
<a id="trace-8851"></a>
<a id="trace-8877"></a>
<a id="trace-8902"></a>
<a id="trace-8978"></a>
<a id="trace-8987"></a>
<a id="trace-9002"></a>
<a id="trace-9016"></a>
<a id="trace-9029"></a>
<a id="trace-9037"></a>
<a id="trace-9048"></a>
<a id="trace-9058"></a>
<a id="trace-9080"></a>
<a id="trace-9170"></a>
<a id="trace-9241"></a>
<a id="trace-9253"></a>
<a id="trace-9261"></a>
<a id="trace-9271"></a>
<a id="trace-9283"></a>
<a id="trace-9300"></a>
<a id="trace-9304"></a>
<a id="trace-9368"></a>
<a id="trace-9374"></a>
<a id="trace-9497"></a>
<a id="trace-9521"></a>
<a id="trace-9529"></a>
<a id="trace-9551"></a>
<a id="trace-9566"></a>
<a id="trace-9576"></a>
<a id="trace-9591"></a>
<a id="trace-9597"></a>
<a id="trace-9667"></a>
<a id="trace-9680"></a>
<a id="trace-9691"></a>
<a id="trace-9701"></a>
<a id="trace-9717"></a>
<a id="trace-9729"></a>
<a id="trace-9745"></a>
<a id="trace-9754"></a>
<a id="trace-9766"></a>
<a id="trace-9783"></a>
<a id="trace-9861"></a>
<a id="trace-9879"></a>
<a id="trace-9890"></a>
<a id="trace-9906"></a>
<a id="trace-9916"></a>
<a id="trace-9936"></a>
<a id="trace-9961"></a>
<a id="trace-10036"></a>
<a id="trace-10047"></a>
<a id="trace-10115"></a>
<a id="trace-10134"></a>
<a id="trace-10151"></a>
<a id="trace-10160"></a>
<a id="trace-10172"></a>
<a id="trace-10189"></a>
<a id="trace-10199"></a>
<a id="trace-10273"></a>
<a id="trace-10285"></a>
<a id="trace-10297"></a>
<a id="trace-10308"></a>
<a id="trace-10322"></a>
<a id="trace-10329"></a>
<a id="trace-10342"></a>
<a id="trace-10365"></a>
<a id="trace-10374"></a>
<a id="trace-10446"></a>
<a id="trace-10455"></a>
<a id="trace-10467"></a>
<a id="trace-10475"></a>
<a id="trace-10493"></a>
<a id="trace-10508"></a>
<a id="trace-10521"></a>
<a id="trace-10526"></a>
<a id="trace-10536"></a>
<a id="trace-10552"></a>
<a id="trace-10623"></a>
<a id="trace-10633"></a>
<a id="trace-10648"></a>
<a id="trace-10675"></a>
<a id="trace-10683"></a>
<a id="trace-10726"></a>
<a id="trace-10733"></a>
<a id="trace-10808"></a>
<a id="trace-10815"></a>
<a id="trace-10823"></a>
<a id="trace-10830"></a>
<a id="trace-10839"></a>
<a id="trace-10844"></a>
<a id="trace-10855"></a>
<a id="trace-10863"></a>
<a id="trace-10874"></a>
<a id="trace-10951"></a>
<a id="trace-10955"></a>
<a id="trace-10965"></a>
<a id="trace-10972"></a>
<a id="trace-10997"></a>
<a id="trace-11003"></a>
<a id="trace-11013"></a>
<a id="trace-11020"></a>
<a id="trace-11090"></a>
<a id="trace-11096"></a>
<a id="trace-11106"></a>
<a id="trace-11110"></a>
<a id="trace-11120"></a>
<a id="trace-11139"></a>
<a id="trace-11148"></a>
<a id="trace-11157"></a>
<a id="trace-11162"></a>
<a id="trace-11232"></a>
<a id="trace-11246"></a>
<a id="trace-11252"></a>
<a id="trace-11262"></a>
<a id="trace-11277"></a>
<a id="trace-11287"></a>
<a id="trace-11298"></a>
<a id="trace-11306"></a>
<a id="trace-11375"></a>
<a id="trace-11387"></a>
<a id="trace-11402"></a>
<a id="trace-11409"></a>
<a id="trace-11427"></a>
<a id="trace-11444"></a>
<a id="trace-11514"></a>
<a id="trace-11523"></a>
<a id="trace-11543"></a>
<a id="trace-11550"></a>
<a id="trace-11561"></a>
<a id="trace-11568"></a>
<a id="trace-11578"></a>
<a id="trace-11583"></a>
<a id="trace-11659"></a>
<a id="trace-11667"></a>
<a id="trace-11675"></a>
<a id="trace-11686"></a>
<a id="trace-11691"></a>
<a id="trace-11702"></a>
<a id="trace-11719"></a>
<a id="trace-11726"></a>
<a id="trace-11796"></a>
<a id="trace-11800"></a>
<a id="trace-11808"></a>
<a id="trace-11815"></a>
<a id="trace-11825"></a>
<a id="trace-11833"></a>
<a id="trace-11844"></a>
<a id="trace-11850"></a>
<a id="trace-11862"></a>
<a id="trace-11938"></a>
<a id="trace-11944"></a>
<a id="trace-11953"></a>
<a id="trace-11957"></a>
<a id="trace-11982"></a>
<a id="trace-11991"></a>
<a id="trace-12001"></a>
<a id="trace-12006"></a>
<a id="trace-12077"></a>
<a id="trace-12085"></a>
<a id="trace-12094"></a>
<a id="trace-12100"></a>
<a id="trace-12110"></a>
<a id="trace-12115"></a>
<a id="trace-12125"></a>
<a id="trace-12134"></a>
<a id="trace-12150"></a>
<a id="trace-12219"></a>
<a id="trace-12224"></a>
<a id="trace-12239"></a>
<a id="trace-12251"></a>
<a id="trace-12258"></a>
<a id="trace-12274"></a>
<a id="trace-12283"></a>
<a id="trace-12359"></a>
<a id="trace-12366"></a>
<a id="trace-12374"></a>
<a id="trace-12378"></a>
<a id="trace-12389"></a>
<a id="trace-12416"></a>
<a id="trace-12430"></a>
<a id="trace-12499"></a>
<a id="trace-12506"></a>
<a id="trace-12520"></a>
<a id="trace-12533"></a>
<a id="trace-12544"></a>
<a id="trace-12553"></a>
<a id="trace-12570"></a>
<a id="trace-12642"></a>
<a id="trace-12659"></a>
<a id="trace-12668"></a>
<a id="trace-12690"></a>
<a id="trace-12700"></a>
<a id="trace-12707"></a>
<a id="trace-12778"></a>
<a id="trace-12784"></a>
<a id="trace-12797"></a>
<a id="trace-12808"></a>
<a id="trace-12825"></a>
<a id="trace-12842"></a>
<a id="trace-12916"></a>
<a id="trace-12922"></a>
<a id="trace-12936"></a>
<a id="trace-12947"></a>
<a id="trace-12952"></a>
<a id="trace-12973"></a>
<a id="trace-12989"></a>
<a id="trace-13061"></a>
<a id="trace-13070"></a>
<a id="trace-13076"></a>
<a id="trace-13086"></a>
<a id="trace-13103"></a>
<a id="trace-13120"></a>
<a id="trace-13129"></a>
<a id="trace-13200"></a>
<a id="trace-13214"></a>
<a id="trace-13227"></a>
<a id="trace-13234"></a>
<a id="trace-13245"></a>
<a id="trace-13253"></a>
<a id="trace-13263"></a>
<a id="trace-13268"></a>
<a id="trace-13338"></a>
<a id="trace-13345"></a>
<a id="trace-13354"></a>
<a id="trace-13363"></a>
<a id="trace-13372"></a>
<a id="trace-13377"></a>
<a id="trace-13388"></a>
<a id="trace-13396"></a>
<a id="trace-13405"></a>
<a id="trace-13412"></a>
<a id="trace-13482"></a>
<a id="trace-13493"></a>
<a id="trace-13501"></a>
<a id="trace-13510"></a>
<a id="trace-13519"></a>
<a id="trace-13531"></a>
<a id="trace-13537"></a>
<a id="trace-13547"></a>
<a id="trace-13623"></a>
<a id="trace-13650"></a>
<a id="trace-13659"></a>
<a id="trace-13670"></a>
<a id="trace-13688"></a>
<a id="trace-13692"></a>
<a id="trace-13764"></a>
<a id="trace-13778"></a>
<a id="trace-13784"></a>
<a id="trace-13794"></a>
<a id="trace-13800"></a>
<a id="trace-13826"></a>
<a id="trace-13833"></a>
<a id="trace-13906"></a>
<a id="trace-13916"></a>
<a id="trace-13924"></a>
<a id="trace-13941"></a>
<a id="trace-13952"></a>
<a id="trace-13958"></a>
<a id="trace-13967"></a>
<a id="trace-13974"></a>
<a id="trace-14043"></a>
<a id="trace-14050"></a>
<a id="trace-14058"></a>
<a id="trace-14063"></a>
<a id="trace-14073"></a>
<a id="trace-14096"></a>
<a id="trace-14116"></a>
<a id="trace-14185"></a>
<a id="trace-14192"></a>
<a id="trace-14200"></a>
<a id="trace-14207"></a>
<a id="trace-14220"></a>
<a id="trace-14233"></a>
<a id="trace-14241"></a>
<a id="trace-14259"></a>
<a id="trace-14332"></a>
<a id="trace-14354"></a>
<a id="trace-14362"></a>
<a id="trace-14373"></a>
<a id="trace-14379"></a>
<a id="trace-14395"></a>
<a id="trace-14465"></a>
<a id="trace-14472"></a>
<a id="trace-14486"></a>
<a id="trace-14495"></a>
<a id="trace-14503"></a>
<a id="trace-14514"></a>
<a id="trace-14523"></a>
<a id="trace-14532"></a>
<a id="trace-14607"></a>
<a id="trace-14622"></a>
<a id="trace-14628"></a>
<a id="trace-14654"></a>
<a id="trace-14663"></a>
<a id="trace-14672"></a>
<a id="trace-14748"></a>
<a id="trace-14752"></a>
<a id="trace-14761"></a>
<a id="trace-14767"></a>
<a id="trace-14777"></a>
<a id="trace-14795"></a>
<a id="trace-14803"></a>
<a id="trace-14813"></a>
<a id="trace-14823"></a>
<a id="trace-14892"></a>
<a id="trace-14906"></a>
<a id="trace-14910"></a>
<a id="trace-14926"></a>
<a id="trace-14937"></a>
<a id="trace-14954"></a>
<a id="trace-14960"></a>
<a id="trace-15029"></a>
<a id="trace-15039"></a>
<a id="trace-15049"></a>
<a id="trace-15056"></a>
<a id="trace-15065"></a>
<a id="trace-15070"></a>
<a id="trace-15081"></a>
<a id="trace-15098"></a>
<a id="trace-15173"></a>
<a id="trace-15178"></a>
<a id="trace-15187"></a>
<a id="trace-15221"></a>
<a id="trace-15227"></a>
<a id="trace-15237"></a>
<a id="trace-15243"></a>
- 6.70s–359.80s (×545), actor 37, squad 4 (trace 559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 444. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09450152262342333, 'next_transition': 609}.
<a id="trace-745"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 745): traveling overwatch. Knowledge: actor memory at 10.00s, trace 652. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4000150516238515, 'next_transition': 843}.
<a id="trace-746"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 746): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 652. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4000150516238515, 'next_transition': 843}.
<a id="trace-843"></a>
<a id="trace-866"></a>
<a id="trace-888"></a>
<a id="trace-906"></a>
<a id="trace-924"></a>
<a id="trace-941"></a>
<a id="trace-965"></a>
<a id="trace-981"></a>
<a id="trace-1059"></a>
<a id="trace-1069"></a>
<a id="trace-1088"></a>
<a id="trace-1102"></a>
<a id="trace-1112"></a>
<a id="trace-1124"></a>
<a id="trace-1141"></a>
<a id="trace-1150"></a>
<a id="trace-1164"></a>
<a id="trace-1172"></a>
<a id="trace-1252"></a>
- 11.20s–20.25s (×19), actor 5, squad 0 (trace 843): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 655. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.357607892181436, 'next_transition': 866}.
<a id="trace-1259"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 1259): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1177. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1374}.
<a id="trace-1374"></a>
<a id="trace-1396"></a>
<a id="trace-1411"></a>
<a id="trace-1426"></a>
<a id="trace-1437"></a>
<a id="trace-1446"></a>
<a id="trace-1454"></a>
<a id="trace-1465"></a>
<a id="trace-1477"></a>
- 20.75s–24.75s (×9), actor 5, squad 0 (trace 1374): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1180. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6506150499194974, 'next_transition': 1396}.
<a id="trace-1480"></a>
- 24.95s–24.95s (×1), actor 1, squad 0 (trace 1480): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 20.00s, trace 1178. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079945745611098, 'next_transition': 1555}.
<a id="trace-1482"></a>
- 24.95s–24.95s (×1), actor 1, squad 0 (trace 1482): NeedSupport. Knowledge: actor memory at 20.00s, trace 1178. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079945745611098, 'next_transition': 1555}.
<a id="trace-1555"></a>
<a id="trace-1562"></a>
- 25.25s–25.75s (×2), actor 5, squad 0 (trace 1555): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1485. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079752536263778, 'next_transition': 1562}.
<a id="trace-1565"></a>
- 25.95s–25.95s (×1), actor 1, squad 0 (trace 1565): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 1483. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7080342897698267, 'next_transition': 1619}.
<a id="trace-1569"></a>
- 25.95s–25.95s (×1), actor 1, squad 0 (trace 1569): MoveTactically. Knowledge: actor memory at 25.00s, trace 1483. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7080342897698267, 'next_transition': 1619}.
<a id="trace-1570"></a>
- 25.95s–25.95s (×1), actor 1, squad 0 (trace 1570): Reorganise complete. Knowledge: actor memory at 25.00s, trace 1483. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7080342897698267, 'next_transition': 1619}.
<a id="trace-1619"></a>
- 26.20s–26.20s (×1), actor 1, squad 0 (trace 1619): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 1483. Next observer evidence: None.
<a id="trace-1707"></a>
<a id="trace-1721"></a>
<a id="trace-1743"></a>
<a id="trace-1757"></a>
<a id="trace-1772"></a>
<a id="trace-1792"></a>
<a id="trace-1805"></a>
<a id="trace-1813"></a>
<a id="trace-1890"></a>
<a id="trace-1898"></a>
<a id="trace-1908"></a>
<a id="trace-1918"></a>
<a id="trace-1931"></a>
<a id="trace-1946"></a>
<a id="trace-1955"></a>
<a id="trace-1963"></a>
<a id="trace-1978"></a>
<a id="trace-1986"></a>
<a id="trace-2059"></a>
<a id="trace-2071"></a>
<a id="trace-2086"></a>
<a id="trace-2104"></a>
<a id="trace-2115"></a>
<a id="trace-2122"></a>
<a id="trace-2137"></a>
<a id="trace-2143"></a>
<a id="trace-2157"></a>
<a id="trace-2164"></a>
<a id="trace-2240"></a>
<a id="trace-2256"></a>
<a id="trace-2265"></a>
- 26.25s–41.25s (×31), actor 5, squad 0 (trace 1707): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1485. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079953295162207, 'next_transition': 1721}.
<a id="trace-2273"></a>
- 41.55s–41.55s (×1), actor 1, squad 0 (trace 2273): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 40.00s, trace 2167. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37801776233615136, 'next_transition': 2482}.
<a id="trace-2482"></a>
<a id="trace-2498"></a>
<a id="trace-2520"></a>
<a id="trace-2529"></a>
<a id="trace-2538"></a>
<a id="trace-2558"></a>
<a id="trace-2571"></a>
<a id="trace-2646"></a>
<a id="trace-2656"></a>
<a id="trace-2671"></a>
<a id="trace-2681"></a>
<a id="trace-2692"></a>
- 41.75s–47.25s (×12), actor 5, squad 0 (trace 2482): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2169. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1130758696643928, 'next_transition': 2498}.
<a id="trace-2699"></a>
- 47.60s–47.60s (×1), actor 1, squad 0 (trace 2699): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 2574. Next observer evidence: None.
<a id="trace-2753"></a>
<a id="trace-2765"></a>
<a id="trace-2782"></a>
<a id="trace-2792"></a>
<a id="trace-2798"></a>
<a id="trace-2877"></a>
<a id="trace-2887"></a>
<a id="trace-2899"></a>
<a id="trace-2906"></a>
<a id="trace-2920"></a>
<a id="trace-2933"></a>
<a id="trace-2941"></a>
<a id="trace-2950"></a>
<a id="trace-2967"></a>
<a id="trace-2974"></a>
<a id="trace-3045"></a>
<a id="trace-3055"></a>
<a id="trace-3070"></a>
<a id="trace-3082"></a>
<a id="trace-3093"></a>
<a id="trace-3102"></a>
<a id="trace-3117"></a>
<a id="trace-3123"></a>
<a id="trace-3134"></a>
<a id="trace-3142"></a>
<a id="trace-3217"></a>
<a id="trace-3232"></a>
<a id="trace-3242"></a>
<a id="trace-3250"></a>
- 47.75s–61.75s (×29), actor 5, squad 0 (trace 2753): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 2576. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2765}.
<a id="trace-3260"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 3260): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 3146. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600015698402908, 'next_transition': 3600}.
<a id="trace-3261"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 3261): bounding overwatch. Knowledge: actor memory at 60.00s, trace 3146. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600015698402908, 'next_transition': 3600}.
<a id="trace-3262"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 3262): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 3146. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600015698402908, 'next_transition': 3600}.
<a id="trace-3600"></a>
- 62.25s–62.25s (×1), actor 5, squad 0 (trace 3600): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3148. Next observer evidence: None.
<a id="trace-3602"></a>
- 62.30s–62.30s (×1), actor 1, squad 0 (trace 3602): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 3146. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16534134511367687, 'next_transition': 3948}.
<a id="trace-3948"></a>
<a id="trace-3968"></a>
<a id="trace-3993"></a>
<a id="trace-4006"></a>
- 62.75s–64.25s (×4), actor 5, squad 0 (trace 3948): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3148. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19220362085637177, 'next_transition': 3968}.
<a id="trace-499"></a>
- 64.55s–64.55s (×1), actor 5, squad 0 (events line 499): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4011"></a>
- 64.55s–64.55s (×1), actor 5, squad 0 (trace 4011): renew committed intent (75 s lifetime). Knowledge: actor memory at 64.55s, trace 4011. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3589562129743695, 'next_transition': 4020}.
<a id="trace-4020"></a>
- 64.75s–64.75s (×1), actor 5, squad 0 (trace 4020): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 64.55s, trace 4011. Next observer evidence: {'until': 65, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8689189265885272, 'next_transition': 4039}.
<a id="trace-4039"></a>
- 65.05s–65.05s (×1), actor 5, squad 0 (trace 4039): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 65.05s, trace 4039. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49828444842307124, 'next_transition': 4101}.
<a id="trace-4101"></a>
- 65.25s–65.25s (×1), actor 5, squad 0 (trace 4101): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.05s, trace 4039. Next observer evidence: {'until': 65.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4851646826873064, 'next_transition': 4108}.
<a id="trace-4108"></a>
- 65.50s–65.50s (×1), actor 1, squad 0 (trace 4108): new contact inside 100 m. Knowledge: actor memory at 65.00s, trace 4028. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48327611812444127, 'next_transition': 521}.
<a id="trace-521"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (events line 521): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2709537982503458, 'next_transition': 4462}.
<a id="trace-4443"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 4443): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.05s, trace 4039. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2709537982503458, 'next_transition': 4462}.
<a id="trace-4446"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 4446): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.468099 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 4446. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2709537982503458, 'next_transition': 4462}.
<a id="trace-4447"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 4447): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.468099 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 4447. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2709537982503458, 'next_transition': 4462}.
<a id="trace-4462"></a>
<a id="trace-4478"></a>
<a id="trace-4491"></a>
<a id="trace-4504"></a>
<a id="trace-4521"></a>
<a id="trace-4529"></a>
- 66.25s–68.75s (×6), actor 5, squad 0 (trace 4462): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.75s, trace 4447. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8026233635524491, 'next_transition': 4478}.
<a id="trace-4536"></a>
- 69.15s–69.15s (×1), actor 1, squad 0 (trace 4536): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 4028. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18616069739025493, 'next_transition': 4798}.
<a id="trace-4537"></a>
- 69.15s–69.15s (×1), actor 1, squad 0 (trace 4537): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 4028. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18616069739025493, 'next_transition': 4798}.
<a id="trace-4798"></a>
<a id="trace-4806"></a>
<a id="trace-4883"></a>
<a id="trace-4897"></a>
<a id="trace-4912"></a>
<a id="trace-4925"></a>
<a id="trace-4938"></a>
<a id="trace-4947"></a>
<a id="trace-4966"></a>
<a id="trace-4979"></a>
<a id="trace-4987"></a>
<a id="trace-4994"></a>
<a id="trace-5075"></a>
<a id="trace-5080"></a>
<a id="trace-5096"></a>
<a id="trace-5101"></a>
<a id="trace-5121"></a>
<a id="trace-5127"></a>
<a id="trace-5140"></a>
<a id="trace-5170"></a>
<a id="trace-5182"></a>
<a id="trace-5187"></a>
<a id="trace-5271"></a>
<a id="trace-5280"></a>
<a id="trace-5291"></a>
<a id="trace-5298"></a>
<a id="trace-5309"></a>
<a id="trace-5317"></a>
<a id="trace-5332"></a>
<a id="trace-5347"></a>
<a id="trace-5366"></a>
<a id="trace-5373"></a>
- 69.25s–84.75s (×32), actor 5, squad 0 (trace 4798): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.75s, trace 4447. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3571946299189993, 'next_transition': 4806}.
<a id="trace-5376"></a>
- 84.75s–84.75s (×1), actor 1, squad 0 (trace 5376): NeedSupport. Knowledge: actor memory at 80.00s, trace 5194. Next observer evidence: {'until': 85.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.28471758381774664, 'next_transition': 5460}.
<a id="trace-5460"></a>
<a id="trace-5465"></a>
<a id="trace-5474"></a>
<a id="trace-5487"></a>
<a id="trace-5499"></a>
<a id="trace-5504"></a>
<a id="trace-5514"></a>
- 85.25s–88.25s (×7), actor 5, squad 0 (trace 5460): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5394. Next observer evidence: {'until': 85.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2835144699245271, 'next_transition': 5465}.
<a id="trace-5515"></a>
- 88.25s–88.25s (×1), actor 1, squad 0 (trace 5515): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 5392. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10560903039039796, 'next_transition': 5630}.
<a id="trace-5522"></a>
- 88.25s–88.25s (×1), actor 1, squad 0 (trace 5522): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 5392. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10560903039039796, 'next_transition': 5630}.
<a id="trace-5630"></a>
<a id="trace-5647"></a>
<a id="trace-5656"></a>
<a id="trace-5732"></a>
<a id="trace-5741"></a>
<a id="trace-5752"></a>
<a id="trace-5759"></a>
<a id="trace-5775"></a>
<a id="trace-5781"></a>
<a id="trace-5792"></a>
<a id="trace-5802"></a>
<a id="trace-5810"></a>
<a id="trace-5820"></a>
<a id="trace-5899"></a>
<a id="trace-5914"></a>
<a id="trace-5922"></a>
<a id="trace-5942"></a>
<a id="trace-5948"></a>
<a id="trace-5956"></a>
<a id="trace-5966"></a>
<a id="trace-5979"></a>
<a id="trace-5988"></a>
<a id="trace-6061"></a>
<a id="trace-6071"></a>
<a id="trace-6081"></a>
<a id="trace-6090"></a>
<a id="trace-6102"></a>
<a id="trace-6110"></a>
<a id="trace-6122"></a>
<a id="trace-6129"></a>
<a id="trace-6142"></a>
<a id="trace-6155"></a>
<a id="trace-6229"></a>
<a id="trace-6238"></a>
<a id="trace-6246"></a>
<a id="trace-6259"></a>
<a id="trace-6269"></a>
<a id="trace-6275"></a>
<a id="trace-6287"></a>
<a id="trace-6294"></a>
- 88.75s–108.75s (×40), actor 5, squad 0 (trace 5630): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5394. Next observer evidence: {'until': 89.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16759836234283443, 'next_transition': 5647}.
<a id="trace-6302"></a>
- 109.05s–109.05s (×1), actor 1, squad 0 (trace 6302): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 6164. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19942369507772167, 'next_transition': 6481}.
<a id="trace-6420"></a>
- 109.05s–109.05s (×1), actor 1, squad 0 (trace 6420): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 6164. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19942369507772167, 'next_transition': 6481}.
<a id="trace-6481"></a>
<a id="trace-6494"></a>
<a id="trace-6572"></a>
<a id="trace-6588"></a>
<a id="trace-6602"></a>
<a id="trace-6609"></a>
<a id="trace-6632"></a>
<a id="trace-6639"></a>
<a id="trace-6650"></a>
- 109.25s–113.25s (×9), actor 5, squad 0 (trace 6481): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 6166. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3494795350240324, 'next_transition': 6494}.
<a id="trace-6664"></a>
- 113.70s–113.70s (×1), actor 1, squad 0 (trace 6664): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 6503. Next observer evidence: None.
<a id="trace-6670"></a>
- 113.75s–113.75s (×1), actor 5, squad 0 (trace 6670): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 6505. Next observer evidence: {'until': 113.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0907218614447479, 'next_transition': 6674}.
<a id="trace-6674"></a>
- 113.95s–113.95s (×1), actor 1, squad 0 (trace 6674): MoveTactically. Knowledge: actor memory at 110.00s, trace 6503. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18144357105171888, 'next_transition': 6805}.
<a id="trace-6675"></a>
- 113.95s–113.95s (×1), actor 1, squad 0 (trace 6675): received platoon directive. Knowledge: actor memory at 110.00s, trace 6503. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18144357105171888, 'next_transition': 6805}.
<a id="trace-6805"></a>
<a id="trace-6825"></a>
<a id="trace-6915"></a>
<a id="trace-6928"></a>
<a id="trace-6941"></a>
<a id="trace-6960"></a>
- 114.25s–116.75s (×6), actor 5, squad 0 (trace 6805): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 6505. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.201503571051719, 'next_transition': 6825}.
<a id="trace-867"></a>
- 117.25s–117.25s (×1), actor 5, squad 0 (events line 867): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32831047226166604, 'next_transition': 6993}.
<a id="trace-6984"></a>
- 117.25s–117.25s (×1), actor 5, squad 0 (trace 6984): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6835. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32831047226166604, 'next_transition': 6993}.
<a id="trace-6987"></a>
- 117.25s–117.25s (×1), actor 5, squad 0 (trace 6987): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358846 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 117.25s, trace 6987. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32831047226166604, 'next_transition': 6993}.
<a id="trace-6988"></a>
- 117.25s–117.25s (×1), actor 5, squad 0 (trace 6988): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358846 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 117.25s, trace 6988. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32831047226166604, 'next_transition': 6993}.
<a id="trace-6993"></a>
<a id="trace-7002"></a>
<a id="trace-7013"></a>
<a id="trace-7024"></a>
<a id="trace-7036"></a>
- 117.75s–119.75s (×5), actor 5, squad 0 (trace 6993): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 117.25s, trace 6988. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4924845680225351, 'next_transition': 7002}.
<a id="trace-7040"></a>
- 119.90s–119.90s (×1), actor 1, squad 0 (trace 7040): Withdraw to received rally. Knowledge: actor memory at 115.00s, trace 6833. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3283264085889468, 'next_transition': 7293}.
<a id="trace-7041"></a>
- 119.90s–119.90s (×1), actor 1, squad 0 (trace 7041): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 6833. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3283264085889468, 'next_transition': 7293}.
<a id="trace-7293"></a>
<a id="trace-7310"></a>
<a id="trace-7341"></a>
<a id="trace-7346"></a>
<a id="trace-7361"></a>
<a id="trace-7375"></a>
<a id="trace-7392"></a>
<a id="trace-7398"></a>
<a id="trace-7408"></a>
<a id="trace-7415"></a>
<a id="trace-7485"></a>
<a id="trace-7494"></a>
<a id="trace-7508"></a>
<a id="trace-7517"></a>
<a id="trace-7527"></a>
<a id="trace-7533"></a>
<a id="trace-7546"></a>
<a id="trace-7556"></a>
<a id="trace-7575"></a>
<a id="trace-7585"></a>
<a id="trace-7657"></a>
<a id="trace-7669"></a>
<a id="trace-7681"></a>
<a id="trace-7686"></a>
<a id="trace-7699"></a>
<a id="trace-7711"></a>
<a id="trace-7723"></a>
<a id="trace-7732"></a>
<a id="trace-7765"></a>
<a id="trace-7796"></a>
<a id="trace-7881"></a>
- 120.25s–135.30s (×31), actor 5, squad 0 (trace 7293): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 7225. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32831268972645217, 'next_transition': 7310}.
<a id="trace-7905"></a>
- 135.60s–135.60s (×1), actor 1, squad 0 (trace 7905): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 7806. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00013446189051186114, 'next_transition': 8024}.
<a id="trace-7906"></a>
- 135.60s–135.60s (×1), actor 1, squad 0 (trace 7906): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 7806. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00013446189051186114, 'next_transition': 8024}.
<a id="trace-8024"></a>
<a id="trace-8064"></a>
<a id="trace-8106"></a>
<a id="trace-8146"></a>
<a id="trace-8162"></a>
<a id="trace-8186"></a>
<a id="trace-8207"></a>
<a id="trace-8214"></a>
<a id="trace-8220"></a>
<a id="trace-8293"></a>
<a id="trace-8300"></a>
<a id="trace-8311"></a>
<a id="trace-8319"></a>
<a id="trace-8330"></a>
<a id="trace-8339"></a>
<a id="trace-8350"></a>
<a id="trace-8357"></a>
<a id="trace-8369"></a>
<a id="trace-8377"></a>
<a id="trace-8453"></a>
<a id="trace-8457"></a>
<a id="trace-8468"></a>
<a id="trace-8478"></a>
<a id="trace-8491"></a>
<a id="trace-8496"></a>
<a id="trace-8508"></a>
<a id="trace-8515"></a>
- 135.80s–148.80s (×27), actor 5, squad 0 (trace 8024): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 7808. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0016533989234301396, 'next_transition': 8064}.
<a id="trace-8520"></a>
- 148.85s–148.85s (×1), actor 1, squad 0 (trace 8520): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 8383. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5535851409941991, 'next_transition': 8686}.
<a id="trace-8622"></a>
- 148.85s–148.85s (×1), actor 1, squad 0 (trace 8622): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 8383. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5535851409941991, 'next_transition': 8686}.
<a id="trace-8686"></a>
<a id="trace-8696"></a>
<a id="trace-8779"></a>
<a id="trace-8791"></a>
<a id="trace-8804"></a>
<a id="trace-8820"></a>
<a id="trace-8837"></a>
<a id="trace-8849"></a>
<a id="trace-8865"></a>
<a id="trace-8875"></a>
<a id="trace-8887"></a>
<a id="trace-8900"></a>
<a id="trace-8976"></a>
<a id="trace-8985"></a>
<a id="trace-9000"></a>
<a id="trace-9014"></a>
<a id="trace-9027"></a>
<a id="trace-9035"></a>
<a id="trace-9046"></a>
<a id="trace-9056"></a>
- 149.30s–158.80s (×20), actor 5, squad 0 (trace 8686): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 8385. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5063751025283965, 'next_transition': 8696}.
<a id="trace-9067"></a>
- 159.15s–159.15s (×1), actor 1, squad 0 (trace 9067): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 155.00s, trace 8908. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9078}.
<a id="trace-9068"></a>
- 159.15s–159.15s (×1), actor 1, squad 0 (trace 9068): NeedSupport. Knowledge: actor memory at 155.00s, trace 8908. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9078}.
<a id="trace-9078"></a>
- 159.30s–159.30s (×1), actor 5, squad 0 (trace 9078): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 8910. Next observer evidence: {'until': 159.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9082}.
<a id="trace-9082"></a>
- 159.50s–159.50s (×1), actor 1, squad 0 (trace 9082): Reorganise: completed/failed drill. Knowledge: actor memory at 155.00s, trace 8908. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9095}.
<a id="trace-9085"></a>
- 159.50s–159.50s (×1), actor 1, squad 0 (trace 9085): MoveTactically. Knowledge: actor memory at 155.00s, trace 8908. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9095}.
<a id="trace-9086"></a>
- 159.50s–159.50s (×1), actor 1, squad 0 (trace 9086): traveling overwatch. Knowledge: actor memory at 155.00s, trace 8908. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9095}.
<a id="trace-9087"></a>
- 159.50s–159.50s (×1), actor 1, squad 0 (trace 9087): Reorganise complete. Knowledge: actor memory at 155.00s, trace 8908. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9095}.
<a id="trace-9095"></a>
<a id="trace-9168"></a>
- 159.80s–160.30s (×2), actor 5, squad 0 (trace 9095): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 8910. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9168}.
<a id="trace-9174"></a>
- 160.50s–160.50s (×1), actor 1, squad 0 (trace 9174): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 9097. Next observer evidence: {'until': 160.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874343798057129, 'next_transition': 9239}.
<a id="trace-9239"></a>
<a id="trace-9251"></a>
<a id="trace-9259"></a>
<a id="trace-9269"></a>
<a id="trace-9281"></a>
- 160.80s–162.80s (×5), actor 5, squad 0 (trace 9239): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 9099. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5134421475699954, 'next_transition': 9251}.
<a id="trace-1212"></a>
- 162.85s–162.85s (×1), actor 5, squad 0 (events line 1212): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9284"></a>
- 162.85s–162.85s (×1), actor 5, squad 0 (trace 9284): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.240208 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 162.85s, trace 9284. Next observer evidence: {'until': 163, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708760420558165, 'next_transition': 9291}.
<a id="trace-9285"></a>
- 162.85s–162.85s (×1), actor 5, squad 0 (trace 9285): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.240208 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 162.85s, trace 9285. Next observer evidence: {'until': 163, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708760420558165, 'next_transition': 9291}.
<a id="trace-9291"></a>
- 163.15s–163.15s (×1), actor 1, squad 0 (trace 9291): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 160.00s, trace 9097. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709257604165448, 'next_transition': 9298}.
<a id="trace-9298"></a>
<a id="trace-9302"></a>
- 163.30s–163.80s (×2), actor 5, squad 0 (trace 9298): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 162.85s, trace 9285. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8126778444785535, 'next_transition': 9302}.
<a id="trace-9308"></a>
- 164.15s–164.15s (×1), actor 1, squad 0 (trace 9308): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 160.00s, trace 9097. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27087577706594523, 'next_transition': 9366}.
<a id="trace-9366"></a>
<a id="trace-9372"></a>
- 164.30s–164.80s (×2), actor 5, squad 0 (trace 9366): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 162.85s, trace 9285. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8127278278140166, 'next_transition': 9372}.
<a id="trace-9384"></a>
- 165.15s–165.15s (×1), actor 1, squad 0 (trace 9384): Withdraw to received rally. Knowledge: actor memory at 165.00s, trace 9376. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709257604165448, 'next_transition': 9495}.
<a id="trace-9385"></a>
- 165.15s–165.15s (×1), actor 1, squad 0 (trace 9385): rearward bound: one stationary suppressing element. Knowledge: actor memory at 165.00s, trace 9376. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2709257604165448, 'next_transition': 9495}.
<a id="trace-9495"></a>
<a id="trace-9508"></a>
<a id="trace-9519"></a>
<a id="trace-9527"></a>
<a id="trace-9540"></a>
<a id="trace-9549"></a>
<a id="trace-9564"></a>
<a id="trace-9574"></a>
<a id="trace-9589"></a>
<a id="trace-9595"></a>
<a id="trace-9665"></a>
<a id="trace-9678"></a>
<a id="trace-9689"></a>
<a id="trace-9699"></a>
<a id="trace-9715"></a>
<a id="trace-9727"></a>
<a id="trace-9743"></a>
<a id="trace-9752"></a>
<a id="trace-9764"></a>
<a id="trace-9781"></a>
<a id="trace-9854"></a>
<a id="trace-9859"></a>
<a id="trace-9877"></a>
<a id="trace-9888"></a>
<a id="trace-9904"></a>
<a id="trace-9914"></a>
<a id="trace-9926"></a>
<a id="trace-9934"></a>
<a id="trace-9948"></a>
<a id="trace-9959"></a>
<a id="trace-10034"></a>
<a id="trace-10045"></a>
- 165.30s–180.80s (×32), actor 5, squad 0 (trace 9495): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 9378. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0394753151021254, 'next_transition': 9508}.
<a id="trace-10052"></a>
- 181.05s–181.05s (×1), actor 1, squad 0 (trace 10052): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 9963. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27091030141127576, 'next_transition': 10113}.
<a id="trace-10053"></a>
- 181.05s–181.05s (×1), actor 1, squad 0 (trace 10053): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 9963. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27091030141127576, 'next_transition': 10113}.
<a id="trace-10113"></a>
<a id="trace-10118"></a>
<a id="trace-10132"></a>
<a id="trace-10149"></a>
<a id="trace-10158"></a>
<a id="trace-10170"></a>
<a id="trace-10187"></a>
<a id="trace-10197"></a>
<a id="trace-10271"></a>
<a id="trace-10283"></a>
<a id="trace-10295"></a>
<a id="trace-10306"></a>
<a id="trace-10320"></a>
<a id="trace-10327"></a>
<a id="trace-10340"></a>
<a id="trace-10351"></a>
<a id="trace-10363"></a>
<a id="trace-10372"></a>
<a id="trace-10444"></a>
<a id="trace-10453"></a>
<a id="trace-10465"></a>
<a id="trace-10473"></a>
<a id="trace-10491"></a>
<a id="trace-10506"></a>
<a id="trace-10519"></a>
<a id="trace-10524"></a>
<a id="trace-10534"></a>
<a id="trace-10550"></a>
<a id="trace-10621"></a>
<a id="trace-10631"></a>
<a id="trace-10646"></a>
<a id="trace-10653"></a>
- 181.30s–196.80s (×32), actor 5, squad 0 (trace 10113): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 9965. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7733045039246513, 'next_transition': 10118}.
<a id="trace-10665"></a>
- 197.25s–197.25s (×1), actor 1, squad 0 (trace 10665): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 195.00s, trace 10553. Next observer evidence: None.
<a id="trace-10666"></a>
- 197.25s–197.25s (×1), actor 1, squad 0 (trace 10666): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 195.00s, trace 10553. Next observer evidence: None.
<a id="trace-10673"></a>
<a id="trace-10681"></a>
<a id="trace-10698"></a>
<a id="trace-10713"></a>
<a id="trace-10724"></a>
<a id="trace-10731"></a>
<a id="trace-10806"></a>
<a id="trace-10813"></a>
<a id="trace-10821"></a>
<a id="trace-10828"></a>
<a id="trace-10837"></a>
<a id="trace-10842"></a>
<a id="trace-10853"></a>
<a id="trace-10861"></a>
<a id="trace-10872"></a>
<a id="trace-10879"></a>
<a id="trace-10949"></a>
<a id="trace-10953"></a>
<a id="trace-10963"></a>
<a id="trace-10970"></a>
<a id="trace-10979"></a>
<a id="trace-10986"></a>
<a id="trace-10995"></a>
<a id="trace-11001"></a>
<a id="trace-11011"></a>
<a id="trace-11018"></a>
<a id="trace-11088"></a>
<a id="trace-11094"></a>
<a id="trace-11104"></a>
<a id="trace-11108"></a>
<a id="trace-11118"></a>
<a id="trace-11128"></a>
<a id="trace-11137"></a>
<a id="trace-11146"></a>
<a id="trace-11155"></a>
<a id="trace-11160"></a>
<a id="trace-11230"></a>
<a id="trace-11236"></a>
<a id="trace-11244"></a>
<a id="trace-11250"></a>
<a id="trace-11260"></a>
<a id="trace-11266"></a>
<a id="trace-11275"></a>
<a id="trace-11285"></a>
<a id="trace-11296"></a>
<a id="trace-11304"></a>
<a id="trace-11373"></a>
<a id="trace-11377"></a>
<a id="trace-11385"></a>
<a id="trace-11391"></a>
<a id="trace-11400"></a>
<a id="trace-11407"></a>
- 197.30s–222.80s (×52), actor 5, squad 0 (trace 10673): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 10555. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8126811242127463, 'next_transition': 10681}.
<a id="trace-1523"></a>
- 222.85s–222.85s (×1), actor 5, squad 0 (events line 1523): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11410"></a>
- 222.85s–222.85s (×1), actor 5, squad 0 (trace 11410): renew committed intent (75 s lifetime). Knowledge: actor memory at 222.85s, trace 11410. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11420}.
<a id="trace-11420"></a>
<a id="trace-11425"></a>
<a id="trace-11435"></a>
<a id="trace-11442"></a>
<a id="trace-11512"></a>
<a id="trace-11521"></a>
<a id="trace-11529"></a>
<a id="trace-11532"></a>
<a id="trace-11541"></a>
<a id="trace-11548"></a>
<a id="trace-11559"></a>
<a id="trace-11576"></a>
<a id="trace-11581"></a>
<a id="trace-11650"></a>
<a id="trace-11657"></a>
<a id="trace-11665"></a>
<a id="trace-11673"></a>
<a id="trace-11684"></a>
<a id="trace-11689"></a>
<a id="trace-11700"></a>
<a id="trace-11708"></a>
<a id="trace-11717"></a>
<a id="trace-11724"></a>
<a id="trace-11794"></a>
<a id="trace-11798"></a>
<a id="trace-11806"></a>
<a id="trace-11813"></a>
<a id="trace-11823"></a>
<a id="trace-11831"></a>
<a id="trace-11842"></a>
<a id="trace-11848"></a>
<a id="trace-11860"></a>
<a id="trace-11867"></a>
<a id="trace-11936"></a>
<a id="trace-11942"></a>
<a id="trace-11951"></a>
<a id="trace-11955"></a>
<a id="trace-11964"></a>
<a id="trace-11971"></a>
<a id="trace-11980"></a>
<a id="trace-11989"></a>
<a id="trace-11999"></a>
<a id="trace-12004"></a>
<a id="trace-12075"></a>
<a id="trace-12083"></a>
<a id="trace-12092"></a>
<a id="trace-12098"></a>
<a id="trace-12108"></a>
<a id="trace-12113"></a>
<a id="trace-12123"></a>
<a id="trace-12132"></a>
<a id="trace-12141"></a>
<a id="trace-12148"></a>
<a id="trace-12217"></a>
<a id="trace-12222"></a>
<a id="trace-12231"></a>
<a id="trace-12237"></a>
<a id="trace-12249"></a>
<a id="trace-12256"></a>
<a id="trace-12267"></a>
<a id="trace-12272"></a>
<a id="trace-12281"></a>
<a id="trace-12289"></a>
<a id="trace-12357"></a>
<a id="trace-12364"></a>
<a id="trace-12372"></a>
<a id="trace-12376"></a>
<a id="trace-12387"></a>
<a id="trace-12394"></a>
<a id="trace-12405"></a>
<a id="trace-12414"></a>
<a id="trace-12424"></a>
<a id="trace-12428"></a>
<a id="trace-12497"></a>
<a id="trace-12504"></a>
<a id="trace-12512"></a>
<a id="trace-12518"></a>
<a id="trace-12527"></a>
<a id="trace-12531"></a>
<a id="trace-12542"></a>
<a id="trace-12551"></a>
<a id="trace-12561"></a>
<a id="trace-12568"></a>
<a id="trace-12640"></a>
<a id="trace-12644"></a>
<a id="trace-12651"></a>
<a id="trace-12657"></a>
<a id="trace-12666"></a>
<a id="trace-12674"></a>
<a id="trace-12683"></a>
<a id="trace-12688"></a>
<a id="trace-12698"></a>
<a id="trace-12705"></a>
<a id="trace-12776"></a>
<a id="trace-12782"></a>
<a id="trace-12792"></a>
<a id="trace-12795"></a>
<a id="trace-12806"></a>
<a id="trace-12814"></a>
<a id="trace-12823"></a>
<a id="trace-12832"></a>
<a id="trace-12840"></a>
<a id="trace-12845"></a>
<a id="trace-12914"></a>
<a id="trace-12920"></a>
<a id="trace-12929"></a>
<a id="trace-12934"></a>
<a id="trace-12945"></a>
<a id="trace-12950"></a>
<a id="trace-12961"></a>
<a id="trace-12971"></a>
<a id="trace-12980"></a>
<a id="trace-12987"></a>
<a id="trace-13056"></a>
<a id="trace-13059"></a>
<a id="trace-13068"></a>
<a id="trace-13074"></a>
<a id="trace-13084"></a>
<a id="trace-13091"></a>
<a id="trace-13101"></a>
- 223.30s–283.30s (×120), actor 5, squad 0 (trace 11420): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 222.85s, trace 11410. Next observer evidence: {'until': 223.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11425}.
<a id="trace-1755"></a>
- 283.70s–283.70s (×1), actor 5, squad 0 (events line 1755): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13107"></a>
- 283.70s–283.70s (×1), actor 5, squad 0 (trace 13107): renew committed intent (75 s lifetime). Knowledge: actor memory at 283.70s, trace 13107. Next observer evidence: {'until': 283.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13110}.
<a id="trace-13110"></a>
<a id="trace-13118"></a>
<a id="trace-13127"></a>
<a id="trace-13198"></a>
<a id="trace-13205"></a>
<a id="trace-13212"></a>
<a id="trace-13216"></a>
<a id="trace-13225"></a>
<a id="trace-13232"></a>
<a id="trace-13243"></a>
<a id="trace-13251"></a>
<a id="trace-13261"></a>
<a id="trace-13266"></a>
<a id="trace-13336"></a>
<a id="trace-13343"></a>
<a id="trace-13352"></a>
<a id="trace-13361"></a>
<a id="trace-13370"></a>
<a id="trace-13375"></a>
<a id="trace-13386"></a>
<a id="trace-13394"></a>
<a id="trace-13410"></a>
<a id="trace-13480"></a>
<a id="trace-13484"></a>
<a id="trace-13491"></a>
<a id="trace-13499"></a>
<a id="trace-13508"></a>
<a id="trace-13517"></a>
<a id="trace-13529"></a>
<a id="trace-13535"></a>
<a id="trace-13545"></a>
<a id="trace-13552"></a>
<a id="trace-13621"></a>
<a id="trace-13627"></a>
<a id="trace-13636"></a>
<a id="trace-13640"></a>
<a id="trace-13648"></a>
<a id="trace-13657"></a>
<a id="trace-13668"></a>
<a id="trace-13677"></a>
<a id="trace-13686"></a>
<a id="trace-13690"></a>
<a id="trace-13762"></a>
<a id="trace-13768"></a>
<a id="trace-13776"></a>
<a id="trace-13782"></a>
<a id="trace-13792"></a>
<a id="trace-13798"></a>
<a id="trace-13808"></a>
<a id="trace-13816"></a>
<a id="trace-13824"></a>
<a id="trace-13831"></a>
<a id="trace-13901"></a>
<a id="trace-13904"></a>
<a id="trace-13914"></a>
<a id="trace-13922"></a>
<a id="trace-13932"></a>
<a id="trace-13939"></a>
<a id="trace-13950"></a>
<a id="trace-13956"></a>
<a id="trace-13965"></a>
<a id="trace-13972"></a>
<a id="trace-14041"></a>
<a id="trace-14048"></a>
<a id="trace-14056"></a>
<a id="trace-14061"></a>
<a id="trace-14071"></a>
<a id="trace-14080"></a>
<a id="trace-14094"></a>
<a id="trace-14102"></a>
<a id="trace-14111"></a>
<a id="trace-14114"></a>
<a id="trace-14183"></a>
<a id="trace-14190"></a>
<a id="trace-14198"></a>
<a id="trace-14205"></a>
<a id="trace-14214"></a>
<a id="trace-14218"></a>
<a id="trace-14231"></a>
<a id="trace-14239"></a>
<a id="trace-14250"></a>
<a id="trace-14257"></a>
<a id="trace-14327"></a>
<a id="trace-14330"></a>
<a id="trace-14338"></a>
<a id="trace-14344"></a>
<a id="trace-14352"></a>
<a id="trace-14360"></a>
<a id="trace-14371"></a>
<a id="trace-14377"></a>
<a id="trace-14387"></a>
<a id="trace-14393"></a>
<a id="trace-14463"></a>
<a id="trace-14470"></a>
<a id="trace-14481"></a>
<a id="trace-14484"></a>
<a id="trace-14493"></a>
<a id="trace-14501"></a>
<a id="trace-14512"></a>
<a id="trace-14521"></a>
<a id="trace-14530"></a>
<a id="trace-14536"></a>
<a id="trace-14605"></a>
<a id="trace-14611"></a>
<a id="trace-14620"></a>
<a id="trace-14626"></a>
<a id="trace-14637"></a>
<a id="trace-14641"></a>
<a id="trace-14652"></a>
<a id="trace-14661"></a>
<a id="trace-14670"></a>
<a id="trace-14678"></a>
<a id="trace-14746"></a>
<a id="trace-14750"></a>
<a id="trace-14759"></a>
<a id="trace-14765"></a>
<a id="trace-14775"></a>
<a id="trace-14782"></a>
<a id="trace-14793"></a>
- 283.80s–343.30s (×119), actor 5, squad 0 (trace 13110): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 283.70s, trace 13107. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13118}.
<a id="trace-1992"></a>
- 343.70s–343.70s (×1), actor 5, squad 0 (events line 1992): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14798"></a>
- 343.70s–343.70s (×1), actor 5, squad 0 (trace 14798): renew committed intent (75 s lifetime). Knowledge: actor memory at 343.70s, trace 14798. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14801}.
<a id="trace-14801"></a>
<a id="trace-14811"></a>
<a id="trace-14821"></a>
<a id="trace-14890"></a>
<a id="trace-14897"></a>
<a id="trace-14904"></a>
<a id="trace-14908"></a>
<a id="trace-14918"></a>
<a id="trace-14924"></a>
<a id="trace-14935"></a>
<a id="trace-14943"></a>
<a id="trace-14952"></a>
<a id="trace-14958"></a>
<a id="trace-15027"></a>
<a id="trace-15037"></a>
<a id="trace-15047"></a>
<a id="trace-15054"></a>
<a id="trace-15063"></a>
<a id="trace-15068"></a>
<a id="trace-15079"></a>
<a id="trace-15087"></a>
<a id="trace-15096"></a>
<a id="trace-15102"></a>
<a id="trace-15171"></a>
<a id="trace-15176"></a>
<a id="trace-15185"></a>
<a id="trace-15192"></a>
<a id="trace-15201"></a>
<a id="trace-15210"></a>
<a id="trace-15219"></a>
<a id="trace-15225"></a>
<a id="trace-15235"></a>
<a id="trace-15241"></a>
- 343.80s–359.80s (×33), actor 5, squad 0 (trace 14801): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 343.70s, trace 14798. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14811}.

## Net delivery

175 matched order/radio deliveries; 240 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.245s; maximum 1.700s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1488: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1489: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1491: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1492: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1493: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 1819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 1822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1823: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1824: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 1825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1826: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1827: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 1828: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 1993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 1994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 1995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 1996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 1997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 1998: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 1999: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2001: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2002: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2003: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2172: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2173: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2175: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2176: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2177: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 2575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 2578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2579: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2580: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 2581: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2582: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2583: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 2584: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 2807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 2808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 2809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 2810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 2811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 2812: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 2813: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 2814: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 2815: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 2816: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 2817: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 2978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 2979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 2980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 2981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 2982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 2983: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 2984: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 2985: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 2986: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 2987: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 2988: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3151: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3152: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3153: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3154: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3155: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3156: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 64.55s leader 5, trace 4011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4028: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4031: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4032: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4033: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4034: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4035: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4036: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4037: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4038: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.05s leader 5, trace 4039: estimate 6.42; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 4446: estimate 6.41; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 4447: estimate 6.41; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4815: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4817: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4818: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4819: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4820: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4821: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4822: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4823: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4824: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4825: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 5005: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 5006: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 5007: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 5008: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 5009: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 5010: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 5011: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 5012: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 5013: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 5014: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 5015: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5194: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5195: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5196: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5197: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 5198: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5199: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5200: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5201: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5202: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5203: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5204: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5392: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5393: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5394: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5395: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5396: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5397: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5398: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5399: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5400: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5401: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5659: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5660: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5661: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5662: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5663: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5664: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5665: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5666: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5667: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5668: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5825: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5826: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5827: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5828: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5829: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5830: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5831: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5832: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5833: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5992: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5993: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5994: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5995: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5996: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5997: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5998: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5999: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6000: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6164: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6165: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6166: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6167: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 6168: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6169: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6170: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6171: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6172: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6503: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6504: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6505: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6506: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 6507: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6508: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6509: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6510: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6511: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6833: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6834: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6835: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6836: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6837: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6838: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6839: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6840: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6841: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 117.25s leader 5, trace 6987: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 117.25s leader 5, trace 6988: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7223: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 7224: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7225: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 7226: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 7227: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7228: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7229: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7230: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7231: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 7421: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 7422: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7423: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 7424: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 7425: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 7426: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7427: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7428: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 7429: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7590: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 7591: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7592: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7593: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 7594: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7595: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7596: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7597: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7598: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7806: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 7807: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7808: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7809: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 7810: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7811: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7812: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7813: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7814: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 8224: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 8225: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 8226: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 8227: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 8228: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 8229: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 8230: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 8231: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 8232: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 8383: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 8384: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8385: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 8386: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 8387: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 8388: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8389: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8390: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 8391: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8704: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 8705: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8706: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 8707: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 8708: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 8709: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8710: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8711: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 8712: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8908: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 8909: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8910: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8911: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 8912: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8913: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8914: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8915: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8916: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 9097: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 9098: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 9099: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 9100: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 9101: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 9102: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 9103: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 9104: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 162.85s leader 5, trace 9284: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 162.85s leader 5, trace 9285: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 9376: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 9377: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 9378: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 9379: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 9380: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 9381: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 9382: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 9383: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 9599: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 9600: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9601: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 9602: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 9603: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9604: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9605: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 9606: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9786: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 9787: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9788: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 9789: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9790: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9791: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9792: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 9793: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9963: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 9964: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9965: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 9966: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9967: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9968: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9969: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9970: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 10206: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 10207: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 10208: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 10209: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 10210: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 10211: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 10212: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 10213: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 10375: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 10376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 10377: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 10378: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 10379: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 10380: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 10381: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 10382: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 10553: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 10554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 10555: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 10556: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 10557: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 10558: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 10559: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 10560: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 10739: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 10740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10741: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 10742: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10743: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10744: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10745: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 10746: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10881: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 10882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10883: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 10884: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10885: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10886: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10887: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10888: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 11021: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 11022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 11023: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 11024: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 11025: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 11026: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 11027: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 11028: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 11166: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 11167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11168: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 11169: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11170: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11171: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11172: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 11173: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 11307: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 11308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11309: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 11310: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11311: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11312: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11313: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 11314: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 222.85s leader 5, trace 11410: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 11445: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 11446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11447: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 11448: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11449: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11450: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11451: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 11452: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 11586: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 11587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 11588: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 11589: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11590: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11591: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11592: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 11593: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 11727: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 11728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 11729: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 11730: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 11731: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 11732: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 11733: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 11734: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 11869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 11870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 11871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 11872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 11873: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 11874: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 11875: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 11876: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 12012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 12013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 12014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12015: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12016: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12017: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 12018: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 12151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 12152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 12153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 12154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 12155: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12156: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12157: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 12158: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 12291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 12292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 12293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 12294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 12295: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 12296: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 12297: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 12298: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 12433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 12434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 12435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 12436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 12437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 12440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 12571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 12572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 12573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 12574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 12575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 12576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 12577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 12578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 12708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 12709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 12710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 12711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 12712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 12713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 12714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 12715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 12850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 12851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 12852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 12853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 12854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 12855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 12856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 12857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 12990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 12991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 12992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 12993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 12994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 12995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 12996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 12997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 283.70s leader 5, trace 13107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 13130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 13131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 13132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 13133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 13134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 13135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 13136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 13137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 13271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 13272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 13273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 13274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 13275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 13276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 13277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 13278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 13413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 13414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 13415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 13416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 13417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 13418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 13419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 13420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 13554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 13555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 13556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 13557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 13558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 13559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 13560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 13561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 13698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 13699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 13700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 13701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 13702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 13703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 13704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 13705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 13835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 13836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 13837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 13838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 13839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 13840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 13841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 13842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 13975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 13976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 13977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 13978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 13979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 13980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 13981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 13982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 14119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 14120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 14121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 14122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 14123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 14124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 14125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 14126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 14260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 14261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 14262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 14263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 14264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 14265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 14266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 14267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 14396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 14397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 14398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 14399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 14400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 14401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 14402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 14403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 14541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 14542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 14543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 14544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 14545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 14546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 14547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 14548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 14680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 14681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 14682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 14683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 14684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 14685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 14686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 14687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 343.70s leader 5, trace 14798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 14824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 14825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 14826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 14827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 14828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 14829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 14830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 14831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 14963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 14964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 14965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 14966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 14967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 14968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 14969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 14970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 15104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 15105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 15106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 15107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 15108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 15109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 15110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 15111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 15244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 15245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 15246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 15247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 15248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 15249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 15250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 15251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Voss incapacitated
- 1: Bram killed in action
- 1: Reed killed in action

## Outcome attribution

- 117.25s, evidence 867: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32831047226166604, 'next_transition': 6993}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 117.25s, evidence 6987: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358846 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32831047226166604, 'next_transition': 6993}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 117.25s, evidence 6988: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.358846 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32831047226166604, 'next_transition': 6993}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 162.85s, evidence 1212: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 162.85s, evidence 9284: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.240208 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 163, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708760420558165, 'next_transition': 9291}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 162.85s, evidence 9285: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.240208 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 163, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2708760420558165, 'next_transition': 9291}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 222.85s, evidence 1523: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 283.70s, evidence 1755: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 343.70s, evidence 1992: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
