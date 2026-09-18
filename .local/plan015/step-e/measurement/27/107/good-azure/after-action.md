# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/27/107/good-azure/battle-107-1789674263832951269`

## Battle summary

**Ember** · 269.7 s · 340 shots.

### Turning points

- 17.7s, squad 4: contact (events line 185). First recorded contact.
- 45.0s, squad 0: help call ([trace 3355](#trace-3355)). No completion observed before termination.
- 112.1s, squad 0: withdrawal ([trace 7242](#trace-7242)). 148.8s, squad 0: took cover and returned fire.
- 125.2s, squad 0: help call ([trace 8101](#trace-8101)). No completion observed before termination.
- 152.1s, squad 0: withdrawal ([trace 9237](#trace-9237)). No completion observed before termination.

### Squads

- **0** — FightHere; chose Withdraw to received rally, broke contact and 2 further drill types; no completed objective recorded; 65 shots, 6/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 275 shots, 4/6 lost.

### Decisions and attribution

At 110.0s, squad 0 chose RetreatThere: leader risk threshold crossed without support after 45 s observation ([trace 7137](#trace-7137)), followed by 1 shots and 0 own casualties; estimate 7.2 against 5 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 401](#trace-401)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 400](#trace-400)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400091002897382, 'next_transition': 414}.
- 21.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.346174 retreat threshold=0.500000 initiative=delegated ([trace 1530](#trace-1530)). Following evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149943384462279, 'next_transition': 1537}.

### Communication

128 matched deliveries (mean 0.27s, max 1.65s); 99 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.70s, squad 4, contact, evidence events line 185: First recorded contact; .
- 44.95s, squad 0, help call, evidence 3355: NeedSupport; No completion observed before termination.
- 112.10s, squad 0, withdrawal, evidence 7242: Withdraw to received rally; 148.8s, squad 0: took cover and returned fire.
- 125.25s, squad 0, help call, evidence 8101: NeedSupport; No completion observed before termination.
- 152.10s, squad 0, withdrawal, evidence 9237: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737752810448873, 'next_transition': 334}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737752810448873, 'next_transition': 334}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0737752810448873, 'next_transition': 334}.
<a id="trace-334"></a>
<a id="trace-353"></a>
<a id="trace-369"></a>
<a id="trace-384"></a>
<a id="trace-395"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 334): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599894221637642, 'next_transition': 353}.
<a id="trace-60"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 60): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400091002897382, 'next_transition': 414}.
<a id="trace-400"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 400): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 400. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400091002897382, 'next_transition': 414}.
<a id="trace-401"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 401): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400091002897382, 'next_transition': 414}.
<a id="trace-414"></a>
<a id="trace-433"></a>
<a id="trace-507"></a>
<a id="trace-519"></a>
<a id="trace-540"></a>
<a id="trace-557"></a>
<a id="trace-571"></a>
<a id="trace-589"></a>
<a id="trace-612"></a>
<a id="trace-637"></a>
<a id="trace-651"></a>
<a id="trace-657"></a>
<a id="trace-739"></a>
<a id="trace-746"></a>
<a id="trace-758"></a>
- 4.20s–11.20s (×15), actor 5, squad 0 (trace 414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400103977663465, 'next_transition': 433}.
<a id="trace-559"></a>
<a id="trace-614"></a>
<a id="trace-639"></a>
<a id="trace-659"></a>
<a id="trace-741"></a>
<a id="trace-748"></a>
<a id="trace-760"></a>
<a id="trace-903"></a>
<a id="trace-983"></a>
<a id="trace-1002"></a>
<a id="trace-1095"></a>
<a id="trace-1135"></a>
<a id="trace-1148"></a>
<a id="trace-1361"></a>
<a id="trace-1379"></a>
<a id="trace-1410"></a>
<a id="trace-1492"></a>
<a id="trace-1520"></a>
<a id="trace-1552"></a>
<a id="trace-1779"></a>
<a id="trace-1794"></a>
<a id="trace-2036"></a>
<a id="trace-2051"></a>
<a id="trace-2086"></a>
<a id="trace-2119"></a>
<a id="trace-2208"></a>
<a id="trace-2242"></a>
<a id="trace-2307"></a>
<a id="trace-2315"></a>
<a id="trace-2330"></a>
<a id="trace-2345"></a>
<a id="trace-2358"></a>
<a id="trace-2370"></a>
<a id="trace-2630"></a>
<a id="trace-2647"></a>
<a id="trace-2672"></a>
<a id="trace-2878"></a>
<a id="trace-2896"></a>
<a id="trace-2933"></a>
<a id="trace-2951"></a>
<a id="trace-2968"></a>
<a id="trace-2991"></a>
<a id="trace-3091"></a>
<a id="trace-3100"></a>
<a id="trace-3107"></a>
<a id="trace-3115"></a>
<a id="trace-3131"></a>
<a id="trace-3139"></a>
<a id="trace-3146"></a>
<a id="trace-3230"></a>
<a id="trace-3251"></a>
<a id="trace-3264"></a>
<a id="trace-3275"></a>
<a id="trace-3289"></a>
<a id="trace-3305"></a>
<a id="trace-3315"></a>
<a id="trace-3332"></a>
<a id="trace-3436"></a>
<a id="trace-3448"></a>
<a id="trace-3466"></a>
<a id="trace-3478"></a>
<a id="trace-3485"></a>
<a id="trace-3494"></a>
<a id="trace-3506"></a>
<a id="trace-3514"></a>
<a id="trace-3599"></a>
<a id="trace-3606"></a>
<a id="trace-3613"></a>
<a id="trace-3621"></a>
<a id="trace-3636"></a>
<a id="trace-3649"></a>
<a id="trace-3657"></a>
<a id="trace-3664"></a>
<a id="trace-3684"></a>
<a id="trace-3758"></a>
<a id="trace-3766"></a>
<a id="trace-3798"></a>
<a id="trace-3809"></a>
<a id="trace-3821"></a>
<a id="trace-3851"></a>
<a id="trace-3865"></a>
<a id="trace-3871"></a>
<a id="trace-3955"></a>
<a id="trace-3968"></a>
<a id="trace-3975"></a>
<a id="trace-4003"></a>
<a id="trace-4013"></a>
<a id="trace-4021"></a>
<a id="trace-4114"></a>
<a id="trace-4122"></a>
<a id="trace-4132"></a>
<a id="trace-4145"></a>
<a id="trace-4154"></a>
<a id="trace-4158"></a>
<a id="trace-4227"></a>
<a id="trace-4231"></a>
<a id="trace-4238"></a>
<a id="trace-4243"></a>
<a id="trace-4251"></a>
<a id="trace-4260"></a>
<a id="trace-4276"></a>
<a id="trace-4289"></a>
<a id="trace-4294"></a>
<a id="trace-4364"></a>
<a id="trace-4373"></a>
<a id="trace-4389"></a>
<a id="trace-4398"></a>
<a id="trace-4418"></a>
<a id="trace-4423"></a>
<a id="trace-4439"></a>
<a id="trace-4532"></a>
<a id="trace-4541"></a>
<a id="trace-4555"></a>
<a id="trace-4561"></a>
<a id="trace-4566"></a>
<a id="trace-4582"></a>
<a id="trace-4652"></a>
<a id="trace-4656"></a>
<a id="trace-4663"></a>
<a id="trace-4677"></a>
<a id="trace-4684"></a>
<a id="trace-4818"></a>
<a id="trace-4841"></a>
<a id="trace-4929"></a>
<a id="trace-4944"></a>
<a id="trace-4950"></a>
<a id="trace-5073"></a>
<a id="trace-5086"></a>
<a id="trace-5104"></a>
<a id="trace-5113"></a>
<a id="trace-5129"></a>
<a id="trace-5139"></a>
<a id="trace-5220"></a>
<a id="trace-5236"></a>
<a id="trace-5247"></a>
<a id="trace-5260"></a>
<a id="trace-5271"></a>
<a id="trace-5288"></a>
<a id="trace-5297"></a>
<a id="trace-5307"></a>
<a id="trace-5316"></a>
<a id="trace-5402"></a>
<a id="trace-6013"></a>
<a id="trace-6309"></a>
<a id="trace-6328"></a>
<a id="trace-6347"></a>
<a id="trace-6748"></a>
<a id="trace-6759"></a>
<a id="trace-6771"></a>
<a id="trace-6780"></a>
<a id="trace-6791"></a>
<a id="trace-6804"></a>
<a id="trace-6812"></a>
<a id="trace-6828"></a>
<a id="trace-6833"></a>
<a id="trace-7238"></a>
<a id="trace-7541"></a>
<a id="trace-7550"></a>
<a id="trace-7573"></a>
<a id="trace-7582"></a>
<a id="trace-7589"></a>
<a id="trace-7673"></a>
<a id="trace-7698"></a>
<a id="trace-7711"></a>
<a id="trace-7719"></a>
<a id="trace-7731"></a>
<a id="trace-7737"></a>
<a id="trace-7749"></a>
<a id="trace-7754"></a>
<a id="trace-7828"></a>
<a id="trace-7835"></a>
<a id="trace-7851"></a>
<a id="trace-7859"></a>
<a id="trace-7865"></a>
<a id="trace-7880"></a>
<a id="trace-7888"></a>
<a id="trace-7904"></a>
<a id="trace-8020"></a>
<a id="trace-8100"></a>
<a id="trace-8112"></a>
<a id="trace-8126"></a>
<a id="trace-8139"></a>
<a id="trace-8192"></a>
<a id="trace-8199"></a>
<a id="trace-8269"></a>
<a id="trace-8279"></a>
<a id="trace-8290"></a>
<a id="trace-8297"></a>
<a id="trace-8312"></a>
<a id="trace-8324"></a>
<a id="trace-8339"></a>
<a id="trace-8351"></a>
<a id="trace-8364"></a>
<a id="trace-8443"></a>
<a id="trace-8478"></a>
<a id="trace-8484"></a>
<a id="trace-8710"></a>
<a id="trace-8717"></a>
<a id="trace-8800"></a>
<a id="trace-8821"></a>
<a id="trace-8827"></a>
<a id="trace-8842"></a>
<a id="trace-8849"></a>
<a id="trace-8868"></a>
<a id="trace-8877"></a>
<a id="trace-8948"></a>
<a id="trace-8957"></a>
<a id="trace-8962"></a>
- 6.70s–146.30s (×208), actor 37, squad 4 (trace 559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 446. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09450152262342333, 'next_transition': 614}.
<a id="trace-766"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 766): traveling overwatch. Knowledge: actor memory at 10.00s, trace 661. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2183413225579066, 'next_transition': 888}.
<a id="trace-767"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 767): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 661. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2183413225579066, 'next_transition': 888}.
<a id="trace-888"></a>
<a id="trace-901"></a>
<a id="trace-921"></a>
<a id="trace-939"></a>
<a id="trace-954"></a>
<a id="trace-981"></a>
<a id="trace-1000"></a>
<a id="trace-1080"></a>
<a id="trace-1093"></a>
<a id="trace-1109"></a>
<a id="trace-1124"></a>
<a id="trace-1133"></a>
<a id="trace-1146"></a>
- 11.70s–17.75s (×13), actor 5, squad 0 (trace 888): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 664. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06684908338514707, 'next_transition': 901}.
<a id="trace-1153"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1153): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1005. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150034314016122, 'next_transition': 1359}.
<a id="trace-1154"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1154): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1005. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150034314016122, 'next_transition': 1359}.
<a id="trace-1155"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1155): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1005. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150034314016122, 'next_transition': 1359}.
<a id="trace-1359"></a>
<a id="trace-1377"></a>
<a id="trace-1392"></a>
<a id="trace-1408"></a>
<a id="trace-1490"></a>
<a id="trace-1518"></a>
- 18.25s–20.75s (×6), actor 5, squad 0 (trace 1359): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1008. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2853762765779954, 'next_transition': 1377}.
<a id="trace-213"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 213): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1530"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 1530): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.346174 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 1530. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149943384462279, 'next_transition': 1537}.
<a id="trace-1531"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 1531): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.346174 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 1531. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149943384462279, 'next_transition': 1537}.
<a id="trace-1537"></a>
<a id="trace-1550"></a>
- 21.25s–21.75s (×2), actor 5, squad 0 (trace 1537): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 1531. Next observer evidence: {'until': 21.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5502316793356661, 'next_transition': 1550}.
<a id="trace-1560"></a>
- 22.00s–22.00s (×1), actor 0, squad 0 (trace 1560): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1411. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500233330740782, 'next_transition': 1777}.
<a id="trace-1777"></a>
<a id="trace-1792"></a>
- 22.25s–22.75s (×2), actor 5, squad 0 (trace 1777): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 1531. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100046666148162, 'next_transition': 1792}.
<a id="trace-1802"></a>
- 22.95s–22.95s (×1), actor 0, squad 0 (trace 1802): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1411. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3825679144803125, 'next_transition': 2034}.
<a id="trace-2034"></a>
<a id="trace-2049"></a>
<a id="trace-2084"></a>
<a id="trace-2117"></a>
<a id="trace-2206"></a>
<a id="trace-2240"></a>
<a id="trace-2269"></a>
- 23.25s–26.25s (×7), actor 5, squad 0 (trace 2034): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 1531. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2848896042918684, 'next_transition': 2049}.
<a id="trace-2276"></a>
- 26.65s–26.65s (×1), actor 0, squad 0 (trace 2276): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 2126. Next observer evidence: None.
<a id="trace-2278"></a>
- 26.65s–26.65s (×1), actor 0, squad 0 (trace 2278): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 2126. Next observer evidence: None.
<a id="trace-2284"></a>
<a id="trace-2305"></a>
<a id="trace-2313"></a>
<a id="trace-2328"></a>
<a id="trace-2343"></a>
<a id="trace-2356"></a>
<a id="trace-2368"></a>
- 26.75s–29.75s (×7), actor 5, squad 0 (trace 2284): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2129. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12702872598353496, 'next_transition': 2305}.
<a id="trace-2371"></a>
- 29.95s–29.95s (×1), actor 0, squad 0 (trace 2371): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 2126. Next observer evidence: {'until': 30.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.18436588166529688, 'next_transition': 2628}.
<a id="trace-2628"></a>
<a id="trace-2645"></a>
- 30.25s–30.75s (×2), actor 5, squad 0 (trace 2628): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2556. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12170425931786905, 'next_transition': 2645}.
<a id="trace-401"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (events line 401): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2653"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2653): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.625794 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2653. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.042039346781054754, 'next_transition': 2670}.
<a id="trace-2654"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2654): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.625794 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2654. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.042039346781054754, 'next_transition': 2670}.
<a id="trace-2670"></a>
- 31.25s–31.25s (×1), actor 5, squad 0 (trace 2670): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2654. Next observer evidence: {'until': 31.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0905297265481834, 'next_transition': 2674}.
<a id="trace-2674"></a>
- 31.40s–31.40s (×1), actor 0, squad 0 (trace 2674): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2553. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09194521617668748, 'next_transition': 2876}.
<a id="trace-2876"></a>
<a id="trace-2894"></a>
<a id="trace-2931"></a>
<a id="trace-2949"></a>
<a id="trace-2966"></a>
<a id="trace-2989"></a>
- 31.75s–34.25s (×6), actor 5, squad 0 (trace 2876): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2654. Next observer evidence: {'until': 32.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.09084142618382383, 'next_transition': 2894}.
<a id="trace-2997"></a>
- 34.50s–34.50s (×1), actor 0, squad 0 (trace 2997): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 2553. Next observer evidence: {'until': 34.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3006}.
<a id="trace-3006"></a>
- 34.75s–34.75s (×1), actor 5, squad 0 (trace 3006): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2654. Next observer evidence: {'until': 35, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3023}.
<a id="trace-3023"></a>
- 35.10s–35.10s (×1), actor 0, squad 0 (trace 3023): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3010. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3084}.
<a id="trace-3025"></a>
- 35.10s–35.10s (×1), actor 0, squad 0 (trace 3025): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 35.00s, trace 3010. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3084}.
<a id="trace-3084"></a>
<a id="trace-3089"></a>
<a id="trace-3098"></a>
<a id="trace-3105"></a>
<a id="trace-3113"></a>
<a id="trace-3122"></a>
<a id="trace-3129"></a>
- 35.25s–38.25s (×7), actor 5, squad 0 (trace 3084): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3013. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3089}.
<a id="trace-503"></a>
- 38.35s–38.35s (×1), actor 5, squad 0 (events line 503): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3133"></a>
- 38.35s–38.35s (×1), actor 5, squad 0 (trace 3133): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.540421 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 3133. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1491663131839387, 'next_transition': 3137}.
<a id="trace-3134"></a>
- 38.35s–38.35s (×1), actor 5, squad 0 (trace 3134): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.540421 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 38.35s, trace 3134. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1491663131839387, 'next_transition': 3137}.
<a id="trace-3137"></a>
<a id="trace-3144"></a>
<a id="trace-3152"></a>
<a id="trace-3228"></a>
- 38.75s–40.25s (×4), actor 5, squad 0 (trace 3137): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.35s, trace 3134. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2343831958863282, 'next_transition': 3144}.
<a id="trace-3232"></a>
- 40.35s–40.35s (×1), actor 0, squad 0 (trace 3232): received platoon directive; retain held slots. Knowledge: actor memory at 40.00s, trace 3155. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3242}.
<a id="trace-3242"></a>
<a id="trace-3249"></a>
<a id="trace-3262"></a>
<a id="trace-3273"></a>
<a id="trace-3287"></a>
<a id="trace-3303"></a>
<a id="trace-3313"></a>
<a id="trace-3330"></a>
- 40.75s–44.25s (×8), actor 5, squad 0 (trace 3242): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3158. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5775194551797465, 'next_transition': 3249}.
<a id="trace-660"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (events line 660): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3339"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 3339): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.547455 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 3339. Next observer evidence: None.
<a id="trace-3340"></a>
- 44.60s–44.60s (×1), actor 5, squad 0 (trace 3340): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.547455 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 44.60s, trace 3340. Next observer evidence: None.
<a id="trace-3350"></a>
- 44.75s–44.75s (×1), actor 5, squad 0 (trace 3350): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 44.60s, trace 3340. Next observer evidence: {'until': 44.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15749379176476933, 'next_transition': 3355}.
<a id="trace-3355"></a>
- 44.95s–44.95s (×1), actor 0, squad 0 (trace 3355): NeedSupport. Knowledge: actor memory at 40.00s, trace 3155. Next observer evidence: {'until': 45.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15752581446297073, 'next_transition': 3434}.
<a id="trace-3434"></a>
<a id="trace-3446"></a>
- 45.25s–45.75s (×2), actor 5, squad 0 (trace 3434): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3359. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3446}.
<a id="trace-3455"></a>
- 46.10s–46.10s (×1), actor 0, squad 0 (trace 3455): received platoon directive; retain held slots. Knowledge: actor memory at 45.00s, trace 3356. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3464}.
<a id="trace-3464"></a>
<a id="trace-3476"></a>
<a id="trace-3483"></a>
<a id="trace-3492"></a>
<a id="trace-3499"></a>
<a id="trace-3504"></a>
<a id="trace-3512"></a>
- 46.25s–49.25s (×7), actor 5, squad 0 (trace 3464): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3359. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3476}.
<a id="trace-787"></a>
- 49.60s–49.60s (×1), actor 5, squad 0 (events line 787): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3517"></a>
- 49.60s–49.60s (×1), actor 5, squad 0 (trace 3517): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.542705 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 3517. Next observer evidence: None.
<a id="trace-3518"></a>
- 49.60s–49.60s (×1), actor 5, squad 0 (trace 3518): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.542705 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 3518. Next observer evidence: None.
<a id="trace-3522"></a>
<a id="trace-3597"></a>
<a id="trace-3604"></a>
<a id="trace-3611"></a>
<a id="trace-3619"></a>
- 49.75s–51.75s (×5), actor 5, squad 0 (trace 3522): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 49.60s, trace 3518. Next observer evidence: {'until': 50.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2035553018223795, 'next_transition': 3597}.
<a id="trace-3622"></a>
- 51.75s–51.75s (×1), actor 0, squad 0 (trace 3622): received platoon directive; retain held slots. Knowledge: actor memory at 50.00s, trace 3525. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11541474885555099, 'next_transition': 3634}.
<a id="trace-3634"></a>
<a id="trace-3647"></a>
<a id="trace-3655"></a>
<a id="trace-3662"></a>
<a id="trace-3674"></a>
<a id="trace-3682"></a>
<a id="trace-3756"></a>
<a id="trace-3764"></a>
- 52.25s–55.75s (×8), actor 5, squad 0 (trace 3634): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3528. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.099233333333333, 'next_transition': 3647}.
<a id="trace-935"></a>
- 55.85s–55.85s (×1), actor 5, squad 0 (events line 935): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3769"></a>
- 55.85s–55.85s (×1), actor 5, squad 0 (trace 3769): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.545440 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.85s, trace 3769. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001136028134804, 'next_transition': 3783}.
<a id="trace-3770"></a>
- 55.85s–55.85s (×1), actor 5, squad 0 (trace 3770): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.545440 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.85s, trace 3770. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001136028134804, 'next_transition': 3783}.
<a id="trace-3783"></a>
<a id="trace-3796"></a>
<a id="trace-3807"></a>
- 56.25s–57.25s (×3), actor 5, squad 0 (trace 3783): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.85s, trace 3770. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099953401863955, 'next_transition': 3796}.
<a id="trace-3811"></a>
- 57.35s–57.35s (×1), actor 0, squad 0 (trace 3811): received platoon directive; retain held slots. Knowledge: actor memory at 55.00s, trace 3686. Next observer evidence: {'until': 57.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.031449999999999534, 'next_transition': 3819}.
<a id="trace-3819"></a>
<a id="trace-3838"></a>
<a id="trace-3849"></a>
<a id="trace-3863"></a>
<a id="trace-3869"></a>
<a id="trace-3942"></a>
<a id="trace-3953"></a>
<a id="trace-3966"></a>
<a id="trace-3973"></a>
- 57.75s–61.75s (×9), actor 5, squad 0 (trace 3819): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.85s, trace 3770. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0007666666666660641, 'next_transition': 3838}.
<a id="trace-1049"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (events line 1049): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3976"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 3976): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.543439 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 3976. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25203238522062976, 'next_transition': 3984}.
<a id="trace-3977"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 3977): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.543439 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 3977. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25203238522062976, 'next_transition': 3984}.
<a id="trace-3984"></a>
<a id="trace-4000"></a>
<a id="trace-4010"></a>
<a id="trace-4018"></a>
<a id="trace-4030"></a>
<a id="trace-4033"></a>
- 62.25s–64.75s (×6), actor 5, squad 0 (trace 3984): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 3977. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1889929945791642, 'next_transition': 4000}.
<a id="trace-4044"></a>
- 65.05s–65.05s (×1), actor 5, squad 0 (trace 4044): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 65.05s, trace 4044. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4101}.
<a id="trace-4101"></a>
<a id="trace-4104"></a>
<a id="trace-4109"></a>
<a id="trace-4112"></a>
<a id="trace-4120"></a>
<a id="trace-4130"></a>
<a id="trace-4138"></a>
<a id="trace-4143"></a>
<a id="trace-4152"></a>
<a id="trace-4156"></a>
<a id="trace-4225"></a>
<a id="trace-4229"></a>
<a id="trace-4236"></a>
<a id="trace-4241"></a>
<a id="trace-4249"></a>
<a id="trace-4258"></a>
<a id="trace-4268"></a>
<a id="trace-4274"></a>
<a id="trace-4287"></a>
<a id="trace-4292"></a>
<a id="trace-4362"></a>
<a id="trace-4371"></a>
<a id="trace-4381"></a>
<a id="trace-4387"></a>
<a id="trace-4396"></a>
<a id="trace-4407"></a>
<a id="trace-4416"></a>
<a id="trace-4421"></a>
<a id="trace-4431"></a>
<a id="trace-4437"></a>
<a id="trace-4508"></a>
<a id="trace-4515"></a>
<a id="trace-4523"></a>
<a id="trace-4530"></a>
<a id="trace-4539"></a>
<a id="trace-4553"></a>
<a id="trace-4559"></a>
<a id="trace-4564"></a>
<a id="trace-4575"></a>
<a id="trace-4580"></a>
<a id="trace-4650"></a>
<a id="trace-4654"></a>
<a id="trace-4661"></a>
- 65.25s–86.25s (×43), actor 5, squad 0 (trace 4101): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.05s, trace 4044. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4104}.
<a id="trace-4672"></a>
- 86.70s–86.70s (×1), actor 4, squad 0 (trace 4672): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 85.00s, trace 4587. Next observer evidence: None.
<a id="trace-4675"></a>
<a id="trace-4682"></a>
- 86.75s–87.25s (×2), actor 5, squad 0 (trace 4675): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4588. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450261033759186, 'next_transition': 4682}.
<a id="trace-4689"></a>
- 87.70s–87.70s (×1), actor 4, squad 0 (trace 4689): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 4587. Next observer evidence: None.
<a id="trace-4692"></a>
- 87.70s–87.70s (×1), actor 4, squad 0 (trace 4692): MoveTactically. Knowledge: actor memory at 85.00s, trace 4587. Next observer evidence: None.
<a id="trace-4693"></a>
- 87.70s–87.70s (×1), actor 4, squad 0 (trace 4693): Reorganise complete. Knowledge: actor memory at 85.00s, trace 4587. Next observer evidence: None.
<a id="trace-4700"></a>
<a id="trace-4718"></a>
- 87.75s–88.25s (×2), actor 5, squad 0 (trace 4700): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4588. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8722474792167647, 'next_transition': 4718}.
<a id="trace-4722"></a>
- 88.70s–88.70s (×1), actor 4, squad 0 (trace 4722): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 4587. Next observer evidence: None.
<a id="trace-4816"></a>
<a id="trace-4839"></a>
<a id="trace-4846"></a>
<a id="trace-4927"></a>
<a id="trace-4931"></a>
<a id="trace-4942"></a>
<a id="trace-4948"></a>
- 88.75s–91.75s (×7), actor 5, squad 0 (trace 4816): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 4588. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11814450391892982, 'next_transition': 4839}.
<a id="trace-4953"></a>
- 92.00s–92.00s (×1), actor 4, squad 0 (trace 4953): traveling overwatch. Knowledge: actor memory at 90.00s, trace 4856. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150018019453971, 'next_transition': 5071}.
<a id="trace-4954"></a>
- 92.00s–92.00s (×1), actor 4, squad 0 (trace 4954): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 90.00s, trace 4856. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150018019453971, 'next_transition': 5071}.
<a id="trace-5071"></a>
<a id="trace-5084"></a>
<a id="trace-5102"></a>
<a id="trace-5111"></a>
<a id="trace-5127"></a>
<a id="trace-5137"></a>
<a id="trace-5218"></a>
<a id="trace-5234"></a>
<a id="trace-5245"></a>
<a id="trace-5258"></a>
<a id="trace-5269"></a>
<a id="trace-5286"></a>
<a id="trace-5295"></a>
<a id="trace-5305"></a>
<a id="trace-5314"></a>
<a id="trace-5390"></a>
<a id="trace-5400"></a>
<a id="trace-5413"></a>
- 92.25s–101.25s (×18), actor 5, squad 0 (trace 5071): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 4857. Next observer evidence: {'until': 92.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299810887706212, 'next_transition': 5084}.
<a id="trace-5418"></a>
- 101.35s–101.35s (×1), actor 4, squad 0 (trace 5418): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 5318. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599790665341564, 'next_transition': 5706}.
<a id="trace-5419"></a>
- 101.35s–101.35s (×1), actor 4, squad 0 (trace 5419): bounding overwatch. Knowledge: actor memory at 100.00s, trace 5318. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599790665341564, 'next_transition': 5706}.
<a id="trace-5420"></a>
- 101.35s–101.35s (×1), actor 4, squad 0 (trace 5420): new contact inside 100 m. Knowledge: actor memory at 100.00s, trace 5318. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599790665341564, 'next_transition': 5706}.
<a id="trace-5706"></a>
- 101.75s–101.75s (×1), actor 5, squad 0 (trace 5706): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5319. Next observer evidence: {'until': 101.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4619744977471486, 'next_transition': 5714}.
<a id="trace-5714"></a>
- 101.90s–101.90s (×1), actor 4, squad 0 (trace 5714): new contact inside 100 m. Knowledge: actor memory at 100.00s, trace 5318. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0326410352847297, 'next_transition': 5997}.
<a id="trace-5997"></a>
<a id="trace-6011"></a>
- 102.25s–102.75s (×2), actor 5, squad 0 (trace 5997): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5319. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0903448094320485, 'next_transition': 6011}.
<a id="trace-6017"></a>
- 102.90s–102.90s (×1), actor 4, squad 0 (trace 6017): new contact inside 100 m. Knowledge: actor memory at 100.00s, trace 5318. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8754745686896946, 'next_transition': 6307}.
<a id="trace-6307"></a>
<a id="trace-6326"></a>
<a id="trace-6345"></a>
<a id="trace-6371"></a>
- 103.25s–104.75s (×4), actor 5, squad 0 (trace 6307): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5319. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7034508377474448, 'next_transition': 6326}.
<a id="trace-6373"></a>
- 104.75s–104.75s (×1), actor 4, squad 0 (trace 6373): new contact inside 100 m. Knowledge: actor memory at 100.00s, trace 5318. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4722019542803806, 'next_transition': 6731}.
<a id="trace-6731"></a>
<a id="trace-6746"></a>
<a id="trace-6757"></a>
<a id="trace-6769"></a>
<a id="trace-6778"></a>
<a id="trace-6789"></a>
<a id="trace-6802"></a>
<a id="trace-6810"></a>
- 105.25s–108.75s (×8), actor 5, squad 0 (trace 6731): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 6662. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0574203861518041, 'next_transition': 6746}.
<a id="trace-6817"></a>
- 108.85s–108.85s (×1), actor 4, squad 0 (trace 6817): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 105.00s, trace 6661. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5408892633799032, 'next_transition': 6826}.
<a id="trace-6826"></a>
<a id="trace-6831"></a>
- 109.25s–109.75s (×2), actor 5, squad 0 (trace 6826): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 6662. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499366685101765, 'next_transition': 6831}.
<a id="trace-6835"></a>
- 109.85s–109.85s (×1), actor 4, squad 0 (trace 6835): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 105.00s, trace 6661. Next observer evidence: {'until': 110, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16996906124353944, 'next_transition': 1702}.
<a id="trace-1702"></a>
- 110.05s–110.05s (×1), actor 5, squad 0 (events line 1702): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2011262007062231, 'next_transition': 7201}.
<a id="trace-7136"></a>
- 110.05s–110.05s (×1), actor 5, squad 0 (trace 7136): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.279656 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 110.05s, trace 7136. Next observer evidence: {'until': 110.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2011262007062231, 'next_transition': 7201}.
<a id="trace-7137"></a>
- 110.05s–110.05s (×1), actor 5, squad 0 (trace 7137): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.279656 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 110.05s, trace 7137. Next observer evidence: {'until': 110.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2011262007062231, 'next_transition': 7201}.
<a id="trace-7201"></a>
<a id="trace-7215"></a>
<a id="trace-7222"></a>
<a id="trace-7236"></a>
- 110.25s–111.75s (×4), actor 5, squad 0 (trace 7201): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.05s, trace 7137. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42563950827761615, 'next_transition': 7215}.
<a id="trace-7242"></a>
- 112.10s–112.10s (×1), actor 4, squad 0 (trace 7242): Withdraw to received rally. Knowledge: actor memory at 110.00s, trace 7125. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2741574596843259, 'next_transition': 7539}.
<a id="trace-7243"></a>
- 112.10s–112.10s (×1), actor 4, squad 0 (trace 7243): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 7125. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2741574596843259, 'next_transition': 7539}.
<a id="trace-7539"></a>
<a id="trace-7548"></a>
<a id="trace-7571"></a>
<a id="trace-7580"></a>
<a id="trace-7587"></a>
<a id="trace-7599"></a>
<a id="trace-7671"></a>
<a id="trace-7675"></a>
<a id="trace-7689"></a>
<a id="trace-7696"></a>
<a id="trace-7709"></a>
<a id="trace-7717"></a>
<a id="trace-7729"></a>
<a id="trace-7735"></a>
<a id="trace-7747"></a>
<a id="trace-7752"></a>
<a id="trace-7826"></a>
<a id="trace-7833"></a>
<a id="trace-7843"></a>
<a id="trace-7849"></a>
<a id="trace-7857"></a>
<a id="trace-7863"></a>
<a id="trace-7878"></a>
<a id="trace-7886"></a>
<a id="trace-7902"></a>
- 112.25s–124.25s (×25), actor 5, squad 0 (trace 7539): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.05s, trace 7137. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5546972729950215, 'next_transition': 7548}.
<a id="trace-7909"></a>
- 124.50s–124.50s (×1), actor 4, squad 0 (trace 7909): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 7757. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13349478568936707, 'next_transition': 8018}.
<a id="trace-7910"></a>
- 124.50s–124.50s (×1), actor 4, squad 0 (trace 7910): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 7757. Next observer evidence: {'until': 124.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13349478568936707, 'next_transition': 8018}.
<a id="trace-8018"></a>
<a id="trace-8098"></a>
- 124.75s–125.25s (×2), actor 5, squad 0 (trace 8018): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 7758. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3101519555270118, 'next_transition': 8098}.
<a id="trace-8101"></a>
- 125.25s–125.25s (×1), actor 4, squad 0 (trace 8101): NeedSupport. Knowledge: actor memory at 125.00s, trace 8023. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.662787906669741, 'next_transition': 8110}.
<a id="trace-8110"></a>
<a id="trace-8124"></a>
<a id="trace-8137"></a>
<a id="trace-8151"></a>
<a id="trace-8158"></a>
<a id="trace-8173"></a>
<a id="trace-8181"></a>
<a id="trace-8190"></a>
<a id="trace-8197"></a>
<a id="trace-8267"></a>
<a id="trace-8277"></a>
<a id="trace-8288"></a>
<a id="trace-8295"></a>
<a id="trace-8310"></a>
<a id="trace-8322"></a>
<a id="trace-8337"></a>
<a id="trace-8349"></a>
<a id="trace-8362"></a>
<a id="trace-8370"></a>
<a id="trace-8441"></a>
<a id="trace-8446"></a>
<a id="trace-8456"></a>
<a id="trace-8462"></a>
<a id="trace-8476"></a>
<a id="trace-8482"></a>
- 125.75s–137.80s (×25), actor 5, squad 0 (trace 8110): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 8024. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.535872007341369, 'next_transition': 8124}.
<a id="trace-8487"></a>
- 138.00s–138.00s (×1), actor 4, squad 0 (trace 8487): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 8372. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04144683341342254, 'next_transition': 8683}.
<a id="trace-8675"></a>
- 138.00s–138.00s (×1), actor 4, squad 0 (trace 8675): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 8372. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04144683341342254, 'next_transition': 8683}.
<a id="trace-8683"></a>
<a id="trace-8694"></a>
<a id="trace-8708"></a>
<a id="trace-8715"></a>
<a id="trace-8787"></a>
<a id="trace-8798"></a>
<a id="trace-8815"></a>
<a id="trace-8819"></a>
<a id="trace-8825"></a>
<a id="trace-8840"></a>
<a id="trace-8847"></a>
<a id="trace-8852"></a>
<a id="trace-8866"></a>
<a id="trace-8875"></a>
<a id="trace-8946"></a>
<a id="trace-8955"></a>
<a id="trace-8960"></a>
<a id="trace-8966"></a>
<a id="trace-8969"></a>
<a id="trace-8973"></a>
<a id="trace-8982"></a>
- 138.30s–148.30s (×21), actor 5, squad 0 (trace 8683): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 8373. Next observer evidence: {'until': 138.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.129813175852839, 'next_transition': 8694}.
<a id="trace-8983"></a>
- 148.70s–148.70s (×1), actor 7, squad 0 (trace 8983): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 145.00s, trace 8885. Next observer evidence: None.
<a id="trace-8986"></a>
- 148.75s–148.75s (×1), actor 7, squad 0 (trace 8986): Reorganise: completed/failed drill. Knowledge: actor memory at 145.00s, trace 8885. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999999999999966, 'next_transition': 9132}.
<a id="trace-8988"></a>
- 148.75s–148.75s (×1), actor 7, squad 0 (trace 8988): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 8885. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999999999999966, 'next_transition': 9132}.
<a id="trace-8989"></a>
- 148.75s–148.75s (×1), actor 7, squad 0 (trace 8989): Reorganise complete: known contact. Knowledge: actor memory at 145.00s, trace 8885. Next observer evidence: {'until': 148.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999999999999966, 'next_transition': 9132}.
<a id="trace-9132"></a>
<a id="trace-9145"></a>
<a id="trace-9220"></a>
<a id="trace-9231"></a>
- 148.80s–151.30s (×4), actor 5, squad 0 (trace 9132): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 8883. Next observer evidence: {'until': 149.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.08591029565773818, 'next_transition': 9145}.
<a id="trace-9222"></a>
<a id="trace-9233"></a>
<a id="trace-9374"></a>
<a id="trace-9387"></a>
<a id="trace-9392"></a>
<a id="trace-9453"></a>
- 150.30s–155.30s (×6), actor 38, squad 4 (trace 9222): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 150.00s, trace 9152. Next observer evidence: {'until': 151.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9233}.
<a id="trace-9237"></a>
- 152.10s–152.10s (×1), actor 7, squad 0 (trace 9237): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 150.00s, trace 9150. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3690201208856867, 'next_transition': 9372}.
<a id="trace-9238"></a>
- 152.10s–152.10s (×1), actor 7, squad 0 (trace 9238): rearward bound: one stationary suppressing element. Knowledge: actor memory at 150.00s, trace 9150. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3690201208856867, 'next_transition': 9372}.
<a id="trace-9372"></a>
- 152.30s–152.30s (×1), actor 5, squad 0 (trace 9372): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 9149. Next observer evidence: {'until': 182.2, 'shots': 3, 'casualties': 1, 'mean_displacement': 1.5716983942170097, 'next_transition': None}.
<a id="trace-9466"></a>
<a id="trace-9524"></a>
<a id="trace-9529"></a>
<a id="trace-9533"></a>
<a id="trace-9540"></a>
<a id="trace-9544"></a>
<a id="trace-9604"></a>
<a id="trace-9609"></a>
<a id="trace-9614"></a>
<a id="trace-9619"></a>
<a id="trace-9624"></a>
<a id="trace-9685"></a>
<a id="trace-9693"></a>
<a id="trace-9698"></a>
<a id="trace-9702"></a>
<a id="trace-9762"></a>
<a id="trace-9767"></a>
<a id="trace-9770"></a>
<a id="trace-9777"></a>
<a id="trace-9842"></a>
<a id="trace-9849"></a>
<a id="trace-9853"></a>
<a id="trace-9858"></a>
<a id="trace-9863"></a>
<a id="trace-9921"></a>
<a id="trace-9926"></a>
<a id="trace-9931"></a>
<a id="trace-9938"></a>
<a id="trace-9946"></a>
<a id="trace-10007"></a>
<a id="trace-10011"></a>
<a id="trace-10015"></a>
<a id="trace-10022"></a>
<a id="trace-10029"></a>
<a id="trace-10087"></a>
<a id="trace-10092"></a>
<a id="trace-10095"></a>
<a id="trace-10102"></a>
<a id="trace-10107"></a>
<a id="trace-10165"></a>
<a id="trace-10171"></a>
<a id="trace-10178"></a>
<a id="trace-10187"></a>
<a id="trace-10192"></a>
<a id="trace-10253"></a>
<a id="trace-10258"></a>
<a id="trace-10261"></a>
<a id="trace-10267"></a>
<a id="trace-10271"></a>
<a id="trace-10331"></a>
<a id="trace-10336"></a>
<a id="trace-10339"></a>
<a id="trace-10346"></a>
<a id="trace-10354"></a>
<a id="trace-10412"></a>
<a id="trace-10417"></a>
<a id="trace-10422"></a>
<a id="trace-10428"></a>
<a id="trace-10433"></a>
<a id="trace-10493"></a>
<a id="trace-10500"></a>
<a id="trace-10505"></a>
<a id="trace-10510"></a>
<a id="trace-10571"></a>
<a id="trace-10578"></a>
<a id="trace-10582"></a>
<a id="trace-10588"></a>
<a id="trace-10594"></a>
<a id="trace-10653"></a>
<a id="trace-10657"></a>
<a id="trace-10660"></a>
<a id="trace-10666"></a>
<a id="trace-10672"></a>
<a id="trace-10732"></a>
<a id="trace-10736"></a>
<a id="trace-10742"></a>
<a id="trace-10749"></a>
<a id="trace-10753"></a>
<a id="trace-10813"></a>
<a id="trace-10819"></a>
<a id="trace-10824"></a>
<a id="trace-10830"></a>
<a id="trace-10836"></a>
<a id="trace-10895"></a>
<a id="trace-10900"></a>
<a id="trace-10904"></a>
<a id="trace-10909"></a>
<a id="trace-10915"></a>
<a id="trace-10973"></a>
<a id="trace-10981"></a>
<a id="trace-10985"></a>
<a id="trace-10990"></a>
<a id="trace-10996"></a>
<a id="trace-11055"></a>
<a id="trace-11061"></a>
<a id="trace-11064"></a>
<a id="trace-11069"></a>
<a id="trace-11075"></a>
<a id="trace-11134"></a>
<a id="trace-11138"></a>
<a id="trace-11143"></a>
<a id="trace-11149"></a>
<a id="trace-11156"></a>
<a id="trace-11214"></a>
<a id="trace-11220"></a>
<a id="trace-11224"></a>
<a id="trace-11231"></a>
- 159.30s–268.30s (×107), actor 36, squad 4 (trace 9466): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=36. Knowledge: actor memory at 155.00s, trace 9396. Next observer evidence: {'until': 160.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9524}.

## Net delivery

128 matched order/radio deliveries; 99 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.268s; maximum 1.650s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1411: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1415: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1420: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 1530: estimate 2.97; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 1531: estimate 2.97; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2126: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2129: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2130: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2135: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2136: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2137: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2553: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2554: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2556: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2557: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2559: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2561: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2562: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2563: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2564: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2653: estimate 6.39; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2654: estimate 6.39; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3010: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3011: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3013: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3014: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3016: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3017: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3018: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3019: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3020: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3021: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 3133: estimate 7.40; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.35s leader 5, trace 3134: estimate 7.40; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3155: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3156: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3158: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3159: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3161: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3162: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3163: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3164: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3165: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3166: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 3339: estimate 7.31; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 44.60s leader 5, trace 3340: estimate 7.31; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3356: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3357: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3359: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3360: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3362: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3363: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3364: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3365: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3366: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3367: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 3517: estimate 7.37; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 3518: estimate 7.37; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3525: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3526: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3528: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3529: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3531: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3532: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3533: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3534: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3535: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3536: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3686: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3687: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3689: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3690: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3692: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3693: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3694: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3695: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3696: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3697: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.85s leader 5, trace 3769: estimate 7.33; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.85s leader 5, trace 3770: estimate 7.33; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3873: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3875: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3876: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3878: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3879: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3880: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3881: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3882: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 3976: estimate 7.36; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 3977: estimate 7.36; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4034: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4036: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4037: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4039: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4040: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4041: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4042: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4043: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.05s leader 5, trace 4044: estimate 7.36; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4159: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4161: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4162: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4164: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4165: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4166: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4167: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4168: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4296: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4298: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4299: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4301: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4302: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4303: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4304: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4305: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4442: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4444: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4445: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4447: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4448: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4449: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4450: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4451: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 4587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4588: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 4589: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 4590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4591: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 4592: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4593: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4594: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 4595: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 4856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 4857: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 4858: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 4859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 4860: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 4861: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 4862: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 4863: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 4864: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5144: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5145: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5147: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5148: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5149: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5150: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5151: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5319: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5320: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5322: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5323: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5324: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5325: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5326: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6661: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6662: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6663: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 6664: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6665: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 6666: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6667: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6668: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6669: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 7125: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 7126: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 7127: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 7128: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 7129: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 7130: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 7131: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 7132: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 7133: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.05s leader 5, trace 7136: estimate 7.15; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.05s leader 5, trace 7137: estimate 7.15; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 7602: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 7603: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 7604: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 7605: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 7606: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 7607: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 7608: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 7609: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 7610: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 7757: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7758: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 7759: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 7760: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7761: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 7762: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7763: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7764: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7765: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 8023: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 8024: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 8025: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 8026: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 8027: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 8028: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 8029: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 8030: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 8202: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 8203: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 8204: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 8205: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 8206: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 8207: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 8208: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 8209: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 8372: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 8373: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 8374: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 8375: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 8376: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 8377: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 8378: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 8379: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 8719: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 8720: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 8721: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 8722: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 8723: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 8724: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 8725: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 8726: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 8882: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8883: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 8884: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 8885: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 8886: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8887: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8888: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 8889: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 9149: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 9150: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 9151: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 9152: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 9153: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 9395: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 9396: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 9397: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 9398: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 9467: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 9468: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 9469: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 9546: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 9547: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 9548: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 9628: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 9629: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 9630: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 9705: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 9706: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 9707: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 9784: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 9785: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9786: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9864: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 9865: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9866: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9948: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 9949: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 9950: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 10030: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 10031: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 10032: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10108: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 10109: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 10110: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10194: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 10195: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10196: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 10273: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 10274: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 10275: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10355: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 10356: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 10357: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 10435: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 10436: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 10437: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 10513: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 10514: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 10515: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 10596: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 10597: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 10598: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 10675: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 10676: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 10677: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 10756: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 10757: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 10758: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 10837: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 10838: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 10839: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 10916: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 10917: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 10918: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 10998: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 10999: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 11000: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 11077: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 11078: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 11079: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 11157: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 11158: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 11159: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Voss killed in action
- 1: Vale incapacitated
- 1: Rook killed in action
- 1: Kest incapacitated
- 1: Tern killed in action
- 1: Lark killed in action
- 1: Moss incapacitated
- 1: Reed killed in action
- 1: Holt incapacitated
- 1: Iven killed in action

## Outcome attribution

- 110.05s, evidence 1702: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 110.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2011262007062231, 'next_transition': 7201}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 110.05s, evidence 7136: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.279656 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 110.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2011262007062231, 'next_transition': 7201}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 110.05s, evidence 7137: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.279656 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 110.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2011262007062231, 'next_transition': 7201}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
