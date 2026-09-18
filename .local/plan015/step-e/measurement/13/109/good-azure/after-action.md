# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/13/109/good-azure/battle-109-1789673928498194875`

## Battle summary

**Ember** · 360 s · 907 shots.

### Turning points

- 25.6s, squad 4: contact (events line 297). First recorded contact.
- 49.0s, squad 1: help call ([trace 16551](#trace-16551)). 50.7s, squad 0: answered a neighbour with support by fire.
- 50.7s, squad 0: help answer ([trace 16886](#trace-16886)). 76.7s, squad 0: prepared a base of fire.
- 61.7s, squad 0: help call ([trace 20855](#trace-20855)). 63.7s, squad 1: answered a neighbour with support by fire.
- 63.7s, squad 1: help answer ([trace 20943](#trace-20943)). 72.2s, squad 1: took cover and returned fire.
- 76.8s, squad 1: withdrawal ([trace 26684](#trace-26684)). 110.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 87.2s, squad 0: withdrawal ([trace 28044](#trace-28044)). 92.2s, squad 0: took cover and returned fire.
- 95.7s, squad 0: withdrawal ([trace 29416](#trace-29416)). 137.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 118.8s, squad 1: withdrawal ([trace 31204](#trace-31204)). No completion observed before termination.
- 145.4s, squad 0: withdrawal ([trace 32525](#trace-32525)). 193.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 52 shots, 5/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 9 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 634 shots, 2/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 212 shots, 0/4 lost.

### Decisions and attribution

At 76.8s, squad 1 chose broke contact ([trace 26684](#trace-26684)), followed by 1 shots and 1 own casualties; estimate 15.4 against 0 distinct squad-reported contacts; At 63.7s, squad 1 chose answered a neighbour with support by fire ([trace 20943](#trace-20943)), followed by 0 shots and 1 own casualties; estimate 15.2 against 0 distinct squad-reported contacts; At 65.8s, squad 1 chose HelpSquad: received need unanswered for one report round trip ([trace 23953](#trace-23953)), followed by 0 shots and 1 own casualties; estimate 15.3 against 9 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 828](#trace-828)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150204570561018, 'next_transition': 847}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 830](#trace-830)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0260459405976565, 'next_transition': 1003}.

### Communication

257 matched deliveries (mean 0.46s, max 1.90s); 500 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.65s, squad 4, contact, evidence events line 297: First recorded contact; .
- 48.95s, squad 1, help call, evidence 16551: NeedSupport; 50.7s, squad 0: answered a neighbour with support by fire.
- 50.65s, squad 0, help answer, evidence 16886: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 76.7s, squad 0: prepared a base of fire.
- 61.70s, squad 0, help call, evidence 20855: NeedSupport; 63.7s, squad 1: answered a neighbour with support by fire.
- 63.65s, squad 1, help answer, evidence 20943: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 72.2s, squad 1: took cover and returned fire.
- 76.85s, squad 1, withdrawal, evidence 26684: BreakContact: believed ratio at least two without superiority; 110.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 87.25s, squad 0, withdrawal, evidence 28044: BreakContact: believed ratio at least two without superiority; 92.2s, squad 0: took cover and returned fire.
- 95.70s, squad 0, withdrawal, evidence 29416: BreakContact: believed ratio at least two without superiority; 137.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 118.85s, squad 1, withdrawal, evidence 31204: Withdraw to received rally; No completion observed before termination.
- 145.35s, squad 0, withdrawal, evidence 32525: Withdraw to received rally; 193.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 200.75s, squad 0, withdrawal, evidence 34987: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.836544548178436, 'next_transition': 702}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.836544548178436, 'next_transition': 702}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.836544548178436, 'next_transition': 702}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544314408416074, 'next_transition': 103}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544314408416074, 'next_transition': 103}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.544314408416074, 'next_transition': 103}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-728"></a>
<a id="trace-730"></a>
<a id="trace-769"></a>
<a id="trace-771"></a>
<a id="trace-792"></a>
<a id="trace-794"></a>
<a id="trace-818"></a>
<a id="trace-820"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2300099358708738, 'next_transition': 728}.
<a id="trace-102"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 102): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150204570561018, 'next_transition': 847}.
<a id="trace-103"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 103): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0260459405976565, 'next_transition': 1003}.
<a id="trace-828"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 828): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 828. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150204570561018, 'next_transition': 847}.
<a id="trace-829"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 829): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 829. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150204570561018, 'next_transition': 847}.
<a id="trace-830"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 830): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 830. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0260459405976565, 'next_transition': 1003}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.0260459405976565, 'next_transition': 1003}.
<a id="trace-847"></a>
<a id="trace-849"></a>
<a id="trace-880"></a>
<a id="trace-882"></a>
<a id="trace-961"></a>
<a id="trace-963"></a>
<a id="trace-992"></a>
<a id="trace-994"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 847): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.914991868720205, 'next_transition': 880}.
<a id="trace-996"></a>
<a id="trace-1549"></a>
<a id="trace-1602"></a>
<a id="trace-1604"></a>
<a id="trace-1646"></a>
<a id="trace-1648"></a>
<a id="trace-1729"></a>
<a id="trace-1731"></a>
<a id="trace-1792"></a>
<a id="trace-1794"></a>
<a id="trace-1816"></a>
<a id="trace-1818"></a>
<a id="trace-1846"></a>
<a id="trace-1848"></a>
<a id="trace-1939"></a>
<a id="trace-1941"></a>
<a id="trace-1970"></a>
<a id="trace-1972"></a>
<a id="trace-1995"></a>
<a id="trace-1997"></a>
<a id="trace-2031"></a>
<a id="trace-2033"></a>
<a id="trace-2093"></a>
<a id="trace-2095"></a>
<a id="trace-2115"></a>
<a id="trace-2117"></a>
<a id="trace-2140"></a>
<a id="trace-2142"></a>
<a id="trace-2193"></a>
<a id="trace-2195"></a>
<a id="trace-2279"></a>
<a id="trace-2281"></a>
<a id="trace-2310"></a>
<a id="trace-2312"></a>
<a id="trace-2617"></a>
<a id="trace-2619"></a>
<a id="trace-2660"></a>
<a id="trace-2662"></a>
<a id="trace-2689"></a>
<a id="trace-2691"></a>
<a id="trace-2935"></a>
<a id="trace-2937"></a>
<a id="trace-2970"></a>
<a id="trace-2972"></a>
<a id="trace-3029"></a>
<a id="trace-3031"></a>
<a id="trace-3130"></a>
<a id="trace-3132"></a>
<a id="trace-3160"></a>
<a id="trace-3162"></a>
<a id="trace-3190"></a>
<a id="trace-3192"></a>
<a id="trace-3217"></a>
<a id="trace-3219"></a>
<a id="trace-3253"></a>
<a id="trace-3255"></a>
<a id="trace-3276"></a>
<a id="trace-3278"></a>
<a id="trace-3306"></a>
<a id="trace-3308"></a>
<a id="trace-3330"></a>
<a id="trace-3332"></a>
<a id="trace-3394"></a>
<a id="trace-3396"></a>
<a id="trace-3485"></a>
<a id="trace-3487"></a>
<a id="trace-3508"></a>
<a id="trace-3510"></a>
<a id="trace-3547"></a>
<a id="trace-3549"></a>
<a id="trace-3570"></a>
<a id="trace-3572"></a>
<a id="trace-3590"></a>
<a id="trace-3592"></a>
<a id="trace-3907"></a>
<a id="trace-3909"></a>
<a id="trace-3939"></a>
<a id="trace-3941"></a>
<a id="trace-3997"></a>
<a id="trace-3999"></a>
<a id="trace-4027"></a>
<a id="trace-4029"></a>
<a id="trace-4127"></a>
<a id="trace-4129"></a>
<a id="trace-4154"></a>
<a id="trace-4156"></a>
<a id="trace-4180"></a>
<a id="trace-4182"></a>
<a id="trace-4195"></a>
<a id="trace-4197"></a>
<a id="trace-4220"></a>
<a id="trace-4222"></a>
<a id="trace-4232"></a>
<a id="trace-4234"></a>
<a id="trace-4254"></a>
<a id="trace-4256"></a>
<a id="trace-4879"></a>
<a id="trace-4881"></a>
<a id="trace-5209"></a>
<a id="trace-5211"></a>
<a id="trace-5238"></a>
<a id="trace-5240"></a>
<a id="trace-5332"></a>
<a id="trace-5334"></a>
<a id="trace-5357"></a>
<a id="trace-5359"></a>
<a id="trace-5437"></a>
<a id="trace-5439"></a>
<a id="trace-5471"></a>
<a id="trace-5473"></a>
<a id="trace-5493"></a>
<a id="trace-5495"></a>
<a id="trace-5529"></a>
<a id="trace-5531"></a>
<a id="trace-6961"></a>
<a id="trace-6963"></a>
<a id="trace-6992"></a>
<a id="trace-6994"></a>
<a id="trace-10120"></a>
<a id="trace-10122"></a>
<a id="trace-11000"></a>
<a id="trace-11002"></a>
<a id="trace-11804"></a>
<a id="trace-11806"></a>
<a id="trace-11889"></a>
<a id="trace-11891"></a>
<a id="trace-12727"></a>
<a id="trace-12729"></a>
<a id="trace-13618"></a>
<a id="trace-13620"></a>
<a id="trace-14428"></a>
<a id="trace-14430"></a>
<a id="trace-14477"></a>
<a id="trace-14479"></a>
<a id="trace-14527"></a>
<a id="trace-14529"></a>
<a id="trace-14586"></a>
<a id="trace-14588"></a>
<a id="trace-14684"></a>
<a id="trace-14686"></a>
<a id="trace-14726"></a>
<a id="trace-14728"></a>
<a id="trace-14766"></a>
<a id="trace-14768"></a>
<a id="trace-16316"></a>
<a id="trace-16318"></a>
<a id="trace-16350"></a>
<a id="trace-16352"></a>
<a id="trace-16421"></a>
<a id="trace-16423"></a>
<a id="trace-16471"></a>
<a id="trace-16473"></a>
<a id="trace-16840"></a>
<a id="trace-16842"></a>
<a id="trace-19645"></a>
<a id="trace-19647"></a>
<a id="trace-19708"></a>
<a id="trace-19710"></a>
<a id="trace-19763"></a>
<a id="trace-19765"></a>
<a id="trace-19832"></a>
<a id="trace-19834"></a>
<a id="trace-19936"></a>
<a id="trace-19938"></a>
<a id="trace-20121"></a>
<a id="trace-20123"></a>
<a id="trace-20452"></a>
<a id="trace-20454"></a>
<a id="trace-20535"></a>
<a id="trace-20537"></a>
<a id="trace-20548"></a>
<a id="trace-20550"></a>
<a id="trace-20572"></a>
<a id="trace-20574"></a>
<a id="trace-20614"></a>
<a id="trace-20616"></a>
<a id="trace-20634"></a>
<a id="trace-20636"></a>
<a id="trace-20655"></a>
<a id="trace-20657"></a>
<a id="trace-20682"></a>
<a id="trace-20684"></a>
<a id="trace-20709"></a>
<a id="trace-20711"></a>
<a id="trace-20726"></a>
<a id="trace-20728"></a>
<a id="trace-20811"></a>
<a id="trace-20813"></a>
<a id="trace-20848"></a>
<a id="trace-20850"></a>
<a id="trace-20866"></a>
<a id="trace-20868"></a>
<a id="trace-20893"></a>
<a id="trace-20895"></a>
<a id="trace-20912"></a>
<a id="trace-20914"></a>
<a id="trace-20933"></a>
<a id="trace-20935"></a>
<a id="trace-23752"></a>
<a id="trace-23754"></a>
<a id="trace-23912"></a>
<a id="trace-23914"></a>
<a id="trace-23947"></a>
<a id="trace-23949"></a>
<a id="trace-23992"></a>
<a id="trace-23994"></a>
<a id="trace-24011"></a>
<a id="trace-24013"></a>
<a id="trace-24044"></a>
<a id="trace-24046"></a>
<a id="trace-24087"></a>
<a id="trace-24089"></a>
<a id="trace-24115"></a>
<a id="trace-24117"></a>
<a id="trace-24139"></a>
<a id="trace-24141"></a>
<a id="trace-24275"></a>
<a id="trace-24277"></a>
<a id="trace-24289"></a>
<a id="trace-24291"></a>
<a id="trace-24541"></a>
<a id="trace-24543"></a>
<a id="trace-24563"></a>
<a id="trace-24565"></a>
<a id="trace-24592"></a>
<a id="trace-24594"></a>
<a id="trace-24613"></a>
<a id="trace-24615"></a>
<a id="trace-24642"></a>
<a id="trace-24644"></a>
<a id="trace-24662"></a>
<a id="trace-24664"></a>
<a id="trace-24738"></a>
<a id="trace-24740"></a>
<a id="trace-24753"></a>
<a id="trace-24755"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-26889"></a>
<a id="trace-26891"></a>
<a id="trace-26921"></a>
<a id="trace-26923"></a>
<a id="trace-26983"></a>
<a id="trace-26985"></a>
<a id="trace-27011"></a>
<a id="trace-27013"></a>
<a id="trace-27106"></a>
<a id="trace-27118"></a>
<a id="trace-27153"></a>
<a id="trace-27174"></a>
<a id="trace-27199"></a>
<a id="trace-27201"></a>
<a id="trace-27216"></a>
<a id="trace-27218"></a>
<a id="trace-27839"></a>
<a id="trace-27841"></a>
<a id="trace-27947"></a>
<a id="trace-27949"></a>
<a id="trace-27985"></a>
<a id="trace-27987"></a>
<a id="trace-28041"></a>
<a id="trace-28043"></a>
<a id="trace-28444"></a>
<a id="trace-28446"></a>
<a id="trace-28471"></a>
<a id="trace-28473"></a>
<a id="trace-28516"></a>
<a id="trace-28518"></a>
<a id="trace-28552"></a>
<a id="trace-28554"></a>
<a id="trace-28569"></a>
<a id="trace-28571"></a>
<a id="trace-28669"></a>
<a id="trace-28671"></a>
<a id="trace-28715"></a>
<a id="trace-28717"></a>
<a id="trace-29244"></a>
<a id="trace-29246"></a>
<a id="trace-29266"></a>
<a id="trace-29268"></a>
<a id="trace-29299"></a>
<a id="trace-29301"></a>
<a id="trace-29317"></a>
<a id="trace-29319"></a>
<a id="trace-29831"></a>
<a id="trace-29833"></a>
<a id="trace-29845"></a>
<a id="trace-29847"></a>
<a id="trace-29877"></a>
<a id="trace-29879"></a>
<a id="trace-29893"></a>
<a id="trace-29895"></a>
<a id="trace-29913"></a>
<a id="trace-29915"></a>
<a id="trace-29961"></a>
<a id="trace-29963"></a>
<a id="trace-30045"></a>
<a id="trace-30047"></a>
<a id="trace-30053"></a>
<a id="trace-30055"></a>
<a id="trace-30069"></a>
<a id="trace-30071"></a>
<a id="trace-30078"></a>
<a id="trace-30080"></a>
<a id="trace-30095"></a>
<a id="trace-30097"></a>
<a id="trace-30108"></a>
<a id="trace-30110"></a>
<a id="trace-30125"></a>
<a id="trace-30127"></a>
<a id="trace-30137"></a>
<a id="trace-30139"></a>
<a id="trace-30155"></a>
<a id="trace-30157"></a>
<a id="trace-30163"></a>
<a id="trace-30165"></a>
<a id="trace-30245"></a>
<a id="trace-30247"></a>
<a id="trace-30259"></a>
<a id="trace-30261"></a>
<a id="trace-30274"></a>
<a id="trace-30276"></a>
<a id="trace-30297"></a>
<a id="trace-30299"></a>
<a id="trace-30314"></a>
<a id="trace-30316"></a>
<a id="trace-30323"></a>
<a id="trace-30325"></a>
<a id="trace-30342"></a>
<a id="trace-30344"></a>
<a id="trace-30355"></a>
<a id="trace-30357"></a>
<a id="trace-30427"></a>
<a id="trace-30429"></a>
<a id="trace-30700"></a>
<a id="trace-30702"></a>
<a id="trace-30721"></a>
<a id="trace-30723"></a>
<a id="trace-30729"></a>
<a id="trace-30731"></a>
<a id="trace-30904"></a>
<a id="trace-30906"></a>
<a id="trace-30917"></a>
<a id="trace-30919"></a>
<a id="trace-30944"></a>
<a id="trace-30946"></a>
<a id="trace-30959"></a>
<a id="trace-30961"></a>
<a id="trace-30974"></a>
<a id="trace-30976"></a>
<a id="trace-31084"></a>
<a id="trace-31086"></a>
<a id="trace-31097"></a>
<a id="trace-31099"></a>
<a id="trace-31115"></a>
<a id="trace-31117"></a>
<a id="trace-31127"></a>
<a id="trace-31129"></a>
<a id="trace-31149"></a>
<a id="trace-31151"></a>
<a id="trace-31194"></a>
<a id="trace-31196"></a>
<a id="trace-31272"></a>
<a id="trace-31274"></a>
<a id="trace-31284"></a>
<a id="trace-31286"></a>
<a id="trace-31359"></a>
<a id="trace-31361"></a>
<a id="trace-31400"></a>
<a id="trace-31402"></a>
<a id="trace-31439"></a>
<a id="trace-31441"></a>
<a id="trace-31448"></a>
<a id="trace-31450"></a>
<a id="trace-31466"></a>
<a id="trace-31468"></a>
<a id="trace-31576"></a>
<a id="trace-31578"></a>
<a id="trace-31595"></a>
<a id="trace-31597"></a>
<a id="trace-31607"></a>
<a id="trace-31609"></a>
<a id="trace-31626"></a>
<a id="trace-31628"></a>
<a id="trace-31637"></a>
<a id="trace-31639"></a>
<a id="trace-31664"></a>
<a id="trace-31666"></a>
<a id="trace-31742"></a>
<a id="trace-31744"></a>
<a id="trace-31760"></a>
<a id="trace-31762"></a>
<a id="trace-31771"></a>
<a id="trace-31773"></a>
<a id="trace-31780"></a>
<a id="trace-31782"></a>
<a id="trace-31795"></a>
<a id="trace-31797"></a>
<a id="trace-31803"></a>
<a id="trace-31805"></a>
<a id="trace-31991"></a>
<a id="trace-31993"></a>
<a id="trace-32003"></a>
<a id="trace-32005"></a>
<a id="trace-32023"></a>
<a id="trace-32025"></a>
<a id="trace-32037"></a>
<a id="trace-32039"></a>
<a id="trace-32106"></a>
<a id="trace-32108"></a>
<a id="trace-32123"></a>
<a id="trace-32125"></a>
<a id="trace-32148"></a>
<a id="trace-32150"></a>
<a id="trace-32157"></a>
<a id="trace-32159"></a>
<a id="trace-32176"></a>
<a id="trace-32178"></a>
<a id="trace-32200"></a>
<a id="trace-32202"></a>
<a id="trace-32223"></a>
<a id="trace-32225"></a>
<a id="trace-32245"></a>
<a id="trace-32247"></a>
<a id="trace-32250"></a>
<a id="trace-32252"></a>
<a id="trace-32331"></a>
<a id="trace-32333"></a>
<a id="trace-32349"></a>
<a id="trace-32351"></a>
<a id="trace-32370"></a>
<a id="trace-32372"></a>
<a id="trace-32383"></a>
<a id="trace-32385"></a>
<a id="trace-32397"></a>
<a id="trace-32399"></a>
<a id="trace-32417"></a>
<a id="trace-32419"></a>
<a id="trace-32429"></a>
<a id="trace-32431"></a>
<a id="trace-32448"></a>
<a id="trace-32450"></a>
<a id="trace-32453"></a>
<a id="trace-32455"></a>
<a id="trace-32602"></a>
<a id="trace-32604"></a>
<a id="trace-32617"></a>
<a id="trace-32619"></a>
<a id="trace-32634"></a>
<a id="trace-32636"></a>
<a id="trace-32648"></a>
<a id="trace-32650"></a>
<a id="trace-32671"></a>
<a id="trace-32673"></a>
<a id="trace-32682"></a>
<a id="trace-32684"></a>
<a id="trace-32698"></a>
<a id="trace-32700"></a>
<a id="trace-32707"></a>
<a id="trace-32709"></a>
<a id="trace-32776"></a>
<a id="trace-32778"></a>
<a id="trace-32788"></a>
<a id="trace-32790"></a>
<a id="trace-32815"></a>
<a id="trace-32817"></a>
<a id="trace-32840"></a>
<a id="trace-32842"></a>
<a id="trace-32869"></a>
<a id="trace-32871"></a>
<a id="trace-32882"></a>
<a id="trace-32884"></a>
<a id="trace-32963"></a>
<a id="trace-32965"></a>
<a id="trace-32985"></a>
<a id="trace-32987"></a>
<a id="trace-32995"></a>
<a id="trace-32997"></a>
<a id="trace-33008"></a>
<a id="trace-33010"></a>
<a id="trace-33021"></a>
<a id="trace-33023"></a>
<a id="trace-33142"></a>
<a id="trace-33144"></a>
<a id="trace-33149"></a>
<a id="trace-33151"></a>
<a id="trace-33256"></a>
<a id="trace-33258"></a>
<a id="trace-33274"></a>
<a id="trace-33276"></a>
<a id="trace-33308"></a>
<a id="trace-33310"></a>
<a id="trace-33353"></a>
<a id="trace-33355"></a>
<a id="trace-33364"></a>
<a id="trace-33366"></a>
<a id="trace-33380"></a>
<a id="trace-33382"></a>
<a id="trace-33390"></a>
<a id="trace-33392"></a>
<a id="trace-33462"></a>
<a id="trace-33464"></a>
<a id="trace-33490"></a>
<a id="trace-33492"></a>
<a id="trace-33512"></a>
<a id="trace-33514"></a>
<a id="trace-33530"></a>
<a id="trace-33532"></a>
<a id="trace-33546"></a>
<a id="trace-33548"></a>
<a id="trace-33574"></a>
<a id="trace-33576"></a>
<a id="trace-33586"></a>
<a id="trace-33588"></a>
<a id="trace-33657"></a>
<a id="trace-33659"></a>
<a id="trace-33682"></a>
<a id="trace-33684"></a>
<a id="trace-33692"></a>
<a id="trace-33694"></a>
<a id="trace-33710"></a>
<a id="trace-33712"></a>
<a id="trace-33720"></a>
<a id="trace-33722"></a>
<a id="trace-33729"></a>
<a id="trace-33731"></a>
<a id="trace-33798"></a>
<a id="trace-33800"></a>
<a id="trace-33810"></a>
<a id="trace-33812"></a>
<a id="trace-33884"></a>
<a id="trace-33886"></a>
<a id="trace-33901"></a>
<a id="trace-33903"></a>
<a id="trace-33917"></a>
<a id="trace-33919"></a>
<a id="trace-33933"></a>
<a id="trace-33935"></a>
<a id="trace-33947"></a>
<a id="trace-33949"></a>
<a id="trace-33966"></a>
<a id="trace-33968"></a>
<a id="trace-33973"></a>
<a id="trace-33975"></a>
<a id="trace-33987"></a>
<a id="trace-33989"></a>
<a id="trace-34064"></a>
<a id="trace-34066"></a>
<a id="trace-34076"></a>
<a id="trace-34078"></a>
<a id="trace-34087"></a>
<a id="trace-34089"></a>
<a id="trace-34095"></a>
<a id="trace-34097"></a>
<a id="trace-34109"></a>
<a id="trace-34111"></a>
<a id="trace-34121"></a>
<a id="trace-34123"></a>
<a id="trace-34134"></a>
<a id="trace-34136"></a>
<a id="trace-34249"></a>
<a id="trace-34251"></a>
<a id="trace-34268"></a>
<a id="trace-34270"></a>
<a id="trace-34278"></a>
<a id="trace-34280"></a>
<a id="trace-34392"></a>
<a id="trace-34394"></a>
<a id="trace-34405"></a>
<a id="trace-34407"></a>
<a id="trace-34429"></a>
<a id="trace-34431"></a>
<a id="trace-34443"></a>
<a id="trace-34445"></a>
<a id="trace-34469"></a>
<a id="trace-34471"></a>
<a id="trace-34480"></a>
<a id="trace-34482"></a>
<a id="trace-34553"></a>
<a id="trace-34555"></a>
<a id="trace-34581"></a>
<a id="trace-34583"></a>
<a id="trace-34624"></a>
<a id="trace-34626"></a>
<a id="trace-34647"></a>
<a id="trace-34649"></a>
<a id="trace-34675"></a>
<a id="trace-34677"></a>
<a id="trace-34692"></a>
<a id="trace-34694"></a>
<a id="trace-34782"></a>
<a id="trace-34784"></a>
<a id="trace-34840"></a>
<a id="trace-34842"></a>
<a id="trace-34872"></a>
<a id="trace-34874"></a>
<a id="trace-34890"></a>
<a id="trace-34892"></a>
<a id="trace-34903"></a>
<a id="trace-34905"></a>
<a id="trace-34908"></a>
<a id="trace-34910"></a>
<a id="trace-34977"></a>
<a id="trace-34979"></a>
<a id="trace-34994"></a>
<a id="trace-34996"></a>
<a id="trace-35019"></a>
<a id="trace-35021"></a>
<a id="trace-35039"></a>
<a id="trace-35041"></a>
<a id="trace-35085"></a>
<a id="trace-35087"></a>
<a id="trace-35193"></a>
<a id="trace-35195"></a>
<a id="trace-35205"></a>
<a id="trace-35207"></a>
<a id="trace-35214"></a>
<a id="trace-35216"></a>
<a id="trace-35238"></a>
<a id="trace-35240"></a>
<a id="trace-35249"></a>
<a id="trace-35251"></a>
<a id="trace-35255"></a>
<a id="trace-35257"></a>
<a id="trace-35268"></a>
<a id="trace-35270"></a>
<a id="trace-35273"></a>
<a id="trace-35275"></a>
<a id="trace-35349"></a>
<a id="trace-35351"></a>
<a id="trace-35374"></a>
<a id="trace-35376"></a>
<a id="trace-35380"></a>
<a id="trace-35382"></a>
<a id="trace-35406"></a>
<a id="trace-35408"></a>
<a id="trace-35417"></a>
<a id="trace-35419"></a>
<a id="trace-35428"></a>
<a id="trace-35430"></a>
<a id="trace-35436"></a>
<a id="trace-35438"></a>
<a id="trace-35448"></a>
<a id="trace-35450"></a>
<a id="trace-35453"></a>
<a id="trace-35455"></a>
<a id="trace-35522"></a>
<a id="trace-35524"></a>
<a id="trace-35530"></a>
<a id="trace-35532"></a>
<a id="trace-35544"></a>
<a id="trace-35546"></a>
<a id="trace-35550"></a>
<a id="trace-35552"></a>
<a id="trace-35571"></a>
<a id="trace-35573"></a>
<a id="trace-35580"></a>
<a id="trace-35582"></a>
<a id="trace-35597"></a>
<a id="trace-35599"></a>
<a id="trace-35617"></a>
<a id="trace-35619"></a>
<a id="trace-35700"></a>
<a id="trace-35702"></a>
<a id="trace-35708"></a>
<a id="trace-35710"></a>
<a id="trace-35725"></a>
<a id="trace-35727"></a>
<a id="trace-35741"></a>
<a id="trace-35743"></a>
<a id="trace-35750"></a>
<a id="trace-35752"></a>
<a id="trace-35762"></a>
<a id="trace-35764"></a>
<a id="trace-35776"></a>
<a id="trace-35778"></a>
<a id="trace-35788"></a>
<a id="trace-35790"></a>
<a id="trace-35801"></a>
<a id="trace-35803"></a>
<a id="trace-35881"></a>
<a id="trace-35883"></a>
<a id="trace-35901"></a>
<a id="trace-35903"></a>
<a id="trace-35907"></a>
<a id="trace-35909"></a>
<a id="trace-35922"></a>
<a id="trace-35924"></a>
<a id="trace-35930"></a>
<a id="trace-35932"></a>
<a id="trace-35962"></a>
<a id="trace-35964"></a>
<a id="trace-36036"></a>
<a id="trace-36038"></a>
<a id="trace-36046"></a>
<a id="trace-36048"></a>
<a id="trace-36064"></a>
<a id="trace-36066"></a>
<a id="trace-36084"></a>
<a id="trace-36086"></a>
<a id="trace-36098"></a>
<a id="trace-36100"></a>
<a id="trace-36106"></a>
<a id="trace-36108"></a>
<a id="trace-36118"></a>
<a id="trace-36120"></a>
<a id="trace-36125"></a>
<a id="trace-36127"></a>
<a id="trace-36139"></a>
<a id="trace-36141"></a>
<a id="trace-36144"></a>
<a id="trace-36146"></a>
<a id="trace-36231"></a>
<a id="trace-36233"></a>
<a id="trace-36245"></a>
<a id="trace-36247"></a>
<a id="trace-36259"></a>
<a id="trace-36261"></a>
<a id="trace-36275"></a>
<a id="trace-36277"></a>
<a id="trace-36298"></a>
<a id="trace-36300"></a>
<a id="trace-36305"></a>
<a id="trace-36307"></a>
<a id="trace-36318"></a>
<a id="trace-36320"></a>
<a id="trace-36325"></a>
<a id="trace-36327"></a>
<a id="trace-36395"></a>
<a id="trace-36397"></a>
<a id="trace-36403"></a>
<a id="trace-36405"></a>
<a id="trace-36416"></a>
<a id="trace-36418"></a>
<a id="trace-36422"></a>
<a id="trace-36424"></a>
<a id="trace-36444"></a>
<a id="trace-36446"></a>
<a id="trace-36461"></a>
<a id="trace-36463"></a>
<a id="trace-36469"></a>
<a id="trace-36471"></a>
<a id="trace-36487"></a>
<a id="trace-36489"></a>
<a id="trace-36493"></a>
<a id="trace-36495"></a>
<a id="trace-36580"></a>
<a id="trace-36582"></a>
<a id="trace-36594"></a>
<a id="trace-36596"></a>
<a id="trace-36600"></a>
<a id="trace-36602"></a>
<a id="trace-36615"></a>
<a id="trace-36617"></a>
<a id="trace-36623"></a>
<a id="trace-36625"></a>
<a id="trace-36634"></a>
<a id="trace-36636"></a>
<a id="trace-36642"></a>
<a id="trace-36644"></a>
<a id="trace-36653"></a>
<a id="trace-36655"></a>
<a id="trace-36661"></a>
<a id="trace-36663"></a>
<a id="trace-36734"></a>
<a id="trace-36736"></a>
<a id="trace-36742"></a>
<a id="trace-36744"></a>
<a id="trace-36761"></a>
<a id="trace-36763"></a>
<a id="trace-36779"></a>
<a id="trace-36781"></a>
<a id="trace-36801"></a>
<a id="trace-36803"></a>
<a id="trace-36817"></a>
<a id="trace-36819"></a>
<a id="trace-36829"></a>
<a id="trace-36831"></a>
<a id="trace-36837"></a>
<a id="trace-36839"></a>
<a id="trace-36905"></a>
<a id="trace-36907"></a>
<a id="trace-36917"></a>
<a id="trace-36919"></a>
<a id="trace-36939"></a>
<a id="trace-36941"></a>
<a id="trace-36954"></a>
<a id="trace-36956"></a>
<a id="trace-36993"></a>
<a id="trace-36995"></a>
<a id="trace-36999"></a>
<a id="trace-37001"></a>
<a id="trace-37012"></a>
<a id="trace-37014"></a>
<a id="trace-37017"></a>
<a id="trace-37019"></a>
<a id="trace-37085"></a>
<a id="trace-37087"></a>
<a id="trace-37106"></a>
<a id="trace-37108"></a>
<a id="trace-37114"></a>
<a id="trace-37116"></a>
<a id="trace-37128"></a>
<a id="trace-37130"></a>
<a id="trace-37136"></a>
<a id="trace-37138"></a>
<a id="trace-37154"></a>
<a id="trace-37156"></a>
<a id="trace-37160"></a>
<a id="trace-37162"></a>
<a id="trace-37195"></a>
<a id="trace-37197"></a>
<a id="trace-37264"></a>
<a id="trace-37266"></a>
<a id="trace-37283"></a>
<a id="trace-37285"></a>
<a id="trace-37291"></a>
<a id="trace-37293"></a>
<a id="trace-37305"></a>
<a id="trace-37307"></a>
<a id="trace-37324"></a>
<a id="trace-37326"></a>
<a id="trace-37330"></a>
<a id="trace-37332"></a>
<a id="trace-37433"></a>
<a id="trace-37435"></a>
<a id="trace-37464"></a>
<a id="trace-37466"></a>
<a id="trace-37478"></a>
<a id="trace-37480"></a>
<a id="trace-37488"></a>
<a id="trace-37490"></a>
<a id="trace-37505"></a>
<a id="trace-37507"></a>
<a id="trace-37517"></a>
<a id="trace-37519"></a>
<a id="trace-37613"></a>
<a id="trace-37615"></a>
<a id="trace-37620"></a>
<a id="trace-37622"></a>
<a id="trace-37640"></a>
<a id="trace-37642"></a>
<a id="trace-37648"></a>
<a id="trace-37650"></a>
<a id="trace-37671"></a>
<a id="trace-37673"></a>
<a id="trace-37679"></a>
<a id="trace-37681"></a>
<a id="trace-37762"></a>
<a id="trace-37764"></a>
<a id="trace-37770"></a>
<a id="trace-37772"></a>
<a id="trace-37783"></a>
<a id="trace-37785"></a>
<a id="trace-37804"></a>
<a id="trace-37806"></a>
<a id="trace-37812"></a>
<a id="trace-37814"></a>
<a id="trace-37834"></a>
<a id="trace-37836"></a>
<a id="trace-37852"></a>
<a id="trace-37854"></a>
<a id="trace-37871"></a>
<a id="trace-37873"></a>
<a id="trace-37947"></a>
<a id="trace-37949"></a>
<a id="trace-37959"></a>
<a id="trace-37961"></a>
<a id="trace-37966"></a>
<a id="trace-37968"></a>
<a id="trace-37981"></a>
<a id="trace-37983"></a>
<a id="trace-38002"></a>
<a id="trace-38004"></a>
<a id="trace-38008"></a>
<a id="trace-38010"></a>
<a id="trace-38021"></a>
<a id="trace-38023"></a>
<a id="trace-38098"></a>
<a id="trace-38100"></a>
<a id="trace-38114"></a>
<a id="trace-38116"></a>
<a id="trace-38138"></a>
<a id="trace-38140"></a>
<a id="trace-38146"></a>
<a id="trace-38148"></a>
<a id="trace-38167"></a>
<a id="trace-38169"></a>
<a id="trace-38179"></a>
<a id="trace-38181"></a>
<a id="trace-38185"></a>
<a id="trace-38187"></a>
<a id="trace-38199"></a>
<a id="trace-38201"></a>
<a id="trace-38204"></a>
<a id="trace-38206"></a>
<a id="trace-38273"></a>
<a id="trace-38275"></a>
<a id="trace-38281"></a>
<a id="trace-38283"></a>
<a id="trace-38299"></a>
<a id="trace-38301"></a>
<a id="trace-38307"></a>
<a id="trace-38309"></a>
<a id="trace-38328"></a>
<a id="trace-38330"></a>
<a id="trace-38351"></a>
<a id="trace-38353"></a>
<a id="trace-38362"></a>
<a id="trace-38364"></a>
<a id="trace-38368"></a>
<a id="trace-38370"></a>
<a id="trace-38381"></a>
<a id="trace-38383"></a>
<a id="trace-38386"></a>
<a id="trace-38388"></a>
<a id="trace-38455"></a>
<a id="trace-38457"></a>
<a id="trace-38463"></a>
<a id="trace-38465"></a>
<a id="trace-38477"></a>
<a id="trace-38479"></a>
<a id="trace-38484"></a>
<a id="trace-38486"></a>
<a id="trace-38499"></a>
<a id="trace-38501"></a>
<a id="trace-38516"></a>
<a id="trace-38518"></a>
<a id="trace-38541"></a>
<a id="trace-38543"></a>
<a id="trace-38568"></a>
<a id="trace-38570"></a>
<a id="trace-38642"></a>
<a id="trace-38644"></a>
<a id="trace-38656"></a>
<a id="trace-38658"></a>
<a id="trace-38676"></a>
<a id="trace-38678"></a>
<a id="trace-38684"></a>
<a id="trace-38686"></a>
<a id="trace-38695"></a>
<a id="trace-38697"></a>
<a id="trace-38720"></a>
<a id="trace-38722"></a>
<a id="trace-38727"></a>
<a id="trace-38729"></a>
<a id="trace-38829"></a>
<a id="trace-38831"></a>
<a id="trace-38850"></a>
<a id="trace-38852"></a>
<a id="trace-38858"></a>
<a id="trace-38860"></a>
<a id="trace-38870"></a>
<a id="trace-38872"></a>
<a id="trace-38877"></a>
<a id="trace-38879"></a>
<a id="trace-38894"></a>
<a id="trace-38896"></a>
<a id="trace-38962"></a>
<a id="trace-38964"></a>
<a id="trace-38971"></a>
<a id="trace-38973"></a>
<a id="trace-38989"></a>
<a id="trace-38991"></a>
<a id="trace-39015"></a>
<a id="trace-39017"></a>
<a id="trace-39035"></a>
<a id="trace-39037"></a>
<a id="trace-39049"></a>
<a id="trace-39051"></a>
<a id="trace-39057"></a>
<a id="trace-39059"></a>
<a id="trace-39077"></a>
<a id="trace-39079"></a>
<a id="trace-39145"></a>
<a id="trace-39147"></a>
<a id="trace-39154"></a>
<a id="trace-39156"></a>
<a id="trace-39166"></a>
<a id="trace-39168"></a>
<a id="trace-39198"></a>
<a id="trace-39200"></a>
<a id="trace-39210"></a>
<a id="trace-39212"></a>
<a id="trace-39223"></a>
<a id="trace-39225"></a>
<a id="trace-39253"></a>
<a id="trace-39255"></a>
<a id="trace-39322"></a>
<a id="trace-39324"></a>
<a id="trace-39345"></a>
<a id="trace-39347"></a>
<a id="trace-39359"></a>
<a id="trace-39361"></a>
<a id="trace-39378"></a>
<a id="trace-39380"></a>
<a id="trace-39385"></a>
<a id="trace-39387"></a>
<a id="trace-39404"></a>
<a id="trace-39406"></a>
<a id="trace-39410"></a>
<a id="trace-39412"></a>
<a id="trace-39503"></a>
<a id="trace-39505"></a>
<a id="trace-39516"></a>
<a id="trace-39518"></a>
<a id="trace-39522"></a>
<a id="trace-39524"></a>
<a id="trace-39536"></a>
<a id="trace-39538"></a>
<a id="trace-39546"></a>
<a id="trace-39548"></a>
<a id="trace-39557"></a>
<a id="trace-39559"></a>
<a id="trace-39576"></a>
<a id="trace-39578"></a>
<a id="trace-39584"></a>
<a id="trace-39586"></a>
<a id="trace-39678"></a>
<a id="trace-39680"></a>
<a id="trace-39690"></a>
<a id="trace-39692"></a>
<a id="trace-39717"></a>
<a id="trace-39719"></a>
<a id="trace-39725"></a>
<a id="trace-39727"></a>
<a id="trace-39736"></a>
<a id="trace-39738"></a>
<a id="trace-39744"></a>
<a id="trace-39746"></a>
<a id="trace-39755"></a>
<a id="trace-39757"></a>
<a id="trace-39829"></a>
<a id="trace-39831"></a>
<a id="trace-39837"></a>
<a id="trace-39839"></a>
<a id="trace-39850"></a>
<a id="trace-39852"></a>
<a id="trace-39882"></a>
<a id="trace-39884"></a>
<a id="trace-39900"></a>
<a id="trace-39902"></a>
<a id="trace-39906"></a>
<a id="trace-39908"></a>
<a id="trace-39930"></a>
<a id="trace-39932"></a>
<a id="trace-39938"></a>
<a id="trace-39940"></a>
<a id="trace-40006"></a>
<a id="trace-40008"></a>
<a id="trace-40016"></a>
<a id="trace-40018"></a>
<a id="trace-40028"></a>
<a id="trace-40030"></a>
<a id="trace-40034"></a>
<a id="trace-40036"></a>
<a id="trace-40055"></a>
<a id="trace-40057"></a>
<a id="trace-40072"></a>
<a id="trace-40074"></a>
<a id="trace-40095"></a>
<a id="trace-40097"></a>
<a id="trace-40169"></a>
<a id="trace-40171"></a>
<a id="trace-40193"></a>
<a id="trace-40195"></a>
<a id="trace-40205"></a>
<a id="trace-40207"></a>
<a id="trace-40215"></a>
<a id="trace-40217"></a>
<a id="trace-40229"></a>
<a id="trace-40231"></a>
<a id="trace-40237"></a>
<a id="trace-40239"></a>
<a id="trace-40249"></a>
<a id="trace-40251"></a>
<a id="trace-40255"></a>
<a id="trace-40257"></a>
<a id="trace-40269"></a>
<a id="trace-40271"></a>
<a id="trace-40274"></a>
<a id="trace-40276"></a>
<a id="trace-40343"></a>
<a id="trace-40345"></a>
<a id="trace-40357"></a>
<a id="trace-40359"></a>
<a id="trace-40369"></a>
<a id="trace-40371"></a>
<a id="trace-40408"></a>
<a id="trace-40410"></a>
<a id="trace-40418"></a>
<a id="trace-40420"></a>
<a id="trace-40429"></a>
<a id="trace-40431"></a>
<a id="trace-40437"></a>
<a id="trace-40439"></a>
<a id="trace-40450"></a>
<a id="trace-40452"></a>
- 5.70s–359.30s (×1098), actor 37, squad 4 (trace 996): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 905. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625192520379565, 'next_transition': 1549}.
<a id="trace-1003"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1003): received platoon directive. Knowledge: actor memory at 5.00s, trace 896. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.885886723893403, 'next_transition': 2697}.
<a id="trace-1218"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1218): received platoon directive. Knowledge: actor memory at 5.00s, trace 888. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5403412166826482, 'next_transition': 1545}.
<a id="trace-1545"></a>
<a id="trace-1547"></a>
<a id="trace-1598"></a>
<a id="trace-1600"></a>
<a id="trace-1642"></a>
<a id="trace-1644"></a>
<a id="trace-1689"></a>
<a id="trace-1691"></a>
<a id="trace-1725"></a>
<a id="trace-1727"></a>
<a id="trace-1788"></a>
<a id="trace-1790"></a>
<a id="trace-1812"></a>
<a id="trace-1814"></a>
<a id="trace-1842"></a>
<a id="trace-1844"></a>
<a id="trace-1935"></a>
<a id="trace-1937"></a>
<a id="trace-1966"></a>
<a id="trace-1968"></a>
<a id="trace-1991"></a>
<a id="trace-1993"></a>
<a id="trace-2027"></a>
<a id="trace-2029"></a>
<a id="trace-2056"></a>
<a id="trace-2058"></a>
<a id="trace-2089"></a>
<a id="trace-2091"></a>
<a id="trace-2111"></a>
<a id="trace-2113"></a>
<a id="trace-2136"></a>
<a id="trace-2138"></a>
<a id="trace-2163"></a>
<a id="trace-2165"></a>
<a id="trace-2189"></a>
<a id="trace-2191"></a>
<a id="trace-2275"></a>
<a id="trace-2277"></a>
<a id="trace-2306"></a>
<a id="trace-2308"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1545): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 893. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149853906040892, 'next_transition': 1598}.
<a id="trace-2316"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 2316): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2198. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06374861027897015, 'next_transition': 2613}.
<a id="trace-2613"></a>
<a id="trace-2615"></a>
<a id="trace-2656"></a>
<a id="trace-2658"></a>
<a id="trace-2685"></a>
<a id="trace-2687"></a>
<a id="trace-2897"></a>
<a id="trace-2899"></a>
<a id="trace-2931"></a>
<a id="trace-2933"></a>
<a id="trace-2966"></a>
<a id="trace-2968"></a>
<a id="trace-2998"></a>
<a id="trace-3000"></a>
<a id="trace-3025"></a>
<a id="trace-3027"></a>
<a id="trace-3126"></a>
<a id="trace-3128"></a>
<a id="trace-3156"></a>
<a id="trace-3158"></a>
<a id="trace-3186"></a>
<a id="trace-3188"></a>
<a id="trace-3213"></a>
<a id="trace-3215"></a>
<a id="trace-3249"></a>
<a id="trace-3251"></a>
<a id="trace-3272"></a>
<a id="trace-3274"></a>
<a id="trace-3302"></a>
<a id="trace-3304"></a>
<a id="trace-3326"></a>
<a id="trace-3328"></a>
<a id="trace-3362"></a>
<a id="trace-3364"></a>
<a id="trace-3390"></a>
<a id="trace-3392"></a>
<a id="trace-3481"></a>
<a id="trace-3483"></a>
<a id="trace-3504"></a>
<a id="trace-3506"></a>
<a id="trace-3543"></a>
<a id="trace-3545"></a>
<a id="trace-3566"></a>
<a id="trace-3568"></a>
<a id="trace-3586"></a>
<a id="trace-3588"></a>
<a id="trace-3903"></a>
<a id="trace-3905"></a>
<a id="trace-3935"></a>
<a id="trace-3937"></a>
<a id="trace-3964"></a>
<a id="trace-3966"></a>
- 16.25s–28.75s (×52), actor 5, squad 0 (trace 2613): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2203. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749974325954527, 'next_transition': 2656}.
<a id="trace-2697"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2697): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2206. Next observer evidence: {'until': 27.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.624726031997946, 'next_transition': 3595}.
<a id="trace-2698"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2698): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2206. Next observer evidence: {'until': 27.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.624726031997946, 'next_transition': 3595}.
<a id="trace-3595"></a>
- 27.55s–27.55s (×1), actor 8, squad 1 (trace 3595): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3415. Next observer evidence: {'until': 30.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.800281372494698, 'next_transition': 4158}.
<a id="trace-3596"></a>
- 27.55s–27.55s (×1), actor 8, squad 1 (trace 3596): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3415. Next observer evidence: {'until': 30.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.800281372494698, 'next_transition': 4158}.
<a id="trace-3597"></a>
- 27.55s–27.55s (×1), actor 8, squad 1 (trace 3597): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3415. Next observer evidence: {'until': 30.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.800281372494698, 'next_transition': 4158}.
<a id="trace-3987"></a>
- 29.20s–29.20s (×1), actor 0, squad 0 (trace 3987): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 3407. Next observer evidence: None.
<a id="trace-3993"></a>
<a id="trace-3995"></a>
<a id="trace-4023"></a>
<a id="trace-4025"></a>
<a id="trace-4123"></a>
<a id="trace-4125"></a>
<a id="trace-4150"></a>
<a id="trace-4152"></a>
- 29.25s–30.75s (×8), actor 5, squad 0 (trace 3993): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3412. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4023}.
<a id="trace-4158"></a>
- 30.90s–30.90s (×1), actor 8, squad 1 (trace 4158): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4041. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1574986471767297, 'next_transition': 381}.
<a id="trace-380"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (events line 380): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-381"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (events line 381): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4162"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 4162): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.643285 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4162. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4176}.
<a id="trace-4163"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 4163): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.643285 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4163. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4176}.
<a id="trace-4164"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 4164): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.643285 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4164. Next observer evidence: {'until': 33.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.299523194216344, 'next_transition': 4868}.
<a id="trace-4165"></a>
- 31.05s–31.05s (×1), actor 5, squad 1 (trace 4165): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.643285 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 4165. Next observer evidence: {'until': 33.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.299523194216344, 'next_transition': 4868}.
<a id="trace-4176"></a>
<a id="trace-4178"></a>
<a id="trace-4191"></a>
<a id="trace-4193"></a>
<a id="trace-4216"></a>
<a id="trace-4218"></a>
<a id="trace-4228"></a>
<a id="trace-4230"></a>
<a id="trace-4250"></a>
<a id="trace-4252"></a>
- 31.25s–33.25s (×10), actor 5, squad 0 (trace 4176): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 4165. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4191}.
<a id="trace-4257"></a>
- 33.25s–33.25s (×1), actor 0, squad 0 (trace 4257): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 4033. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4875}.
<a id="trace-4264"></a>
- 33.25s–33.25s (×1), actor 0, squad 0 (trace 4264): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 4033. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4875}.
<a id="trace-4265"></a>
- 33.25s–33.25s (×1), actor 0, squad 0 (trace 4265): bounding overwatch. Knowledge: actor memory at 30.00s, trace 4033. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4875}.
<a id="trace-4266"></a>
- 33.25s–33.25s (×1), actor 0, squad 0 (trace 4266): Reorganise complete: known contact. Knowledge: actor memory at 30.00s, trace 4033. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4875}.
<a id="trace-4868"></a>
- 33.55s–33.55s (×1), actor 8, squad 1 (trace 4868): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 4041. Next observer evidence: {'until': 33.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4885}.
<a id="trace-4875"></a>
<a id="trace-4877"></a>
<a id="trace-5205"></a>
<a id="trace-5207"></a>
<a id="trace-5234"></a>
<a id="trace-5236"></a>
<a id="trace-5328"></a>
<a id="trace-5330"></a>
<a id="trace-5353"></a>
<a id="trace-5355"></a>
<a id="trace-5401"></a>
<a id="trace-5403"></a>
<a id="trace-5433"></a>
<a id="trace-5435"></a>
<a id="trace-5467"></a>
<a id="trace-5469"></a>
- 33.75s–37.25s (×16), actor 5, squad 0 (trace 4875): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 4165. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1378122677605753, 'next_transition': 5205}.
<a id="trace-4885"></a>
- 33.90s–33.90s (×1), actor 8, squad 1 (trace 4885): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 4041. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4854799999999999, 'next_transition': 5483}.
<a id="trace-5474"></a>
- 37.25s–37.25s (×1), actor 0, squad 0 (trace 5474): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 5252. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.871193911427827, 'next_transition': 5489}.
<a id="trace-5483"></a>
- 37.65s–37.65s (×1), actor 8, squad 1 (trace 5483): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 5260. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2645200000000001, 'next_transition': 7023}.
<a id="trace-5489"></a>
<a id="trace-5491"></a>
<a id="trace-5525"></a>
<a id="trace-5527"></a>
- 37.75s–38.25s (×4), actor 5, squad 0 (trace 5489): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5257. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7043256650762375, 'next_transition': 5525}.
<a id="trace-5537"></a>
<a id="trace-6250"></a>
- 38.45s–38.70s (×2), actor 0, squad 0 (trace 5537): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 5252. Next observer evidence: {'until': 38.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23625362160927726, 'next_transition': 6250}.
<a id="trace-6957"></a>
<a id="trace-6959"></a>
<a id="trace-6988"></a>
<a id="trace-6990"></a>
<a id="trace-10116"></a>
<a id="trace-10118"></a>
- 38.75s–39.75s (×6), actor 5, squad 0 (trace 6957): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5257. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.551254362977301, 'next_transition': 6988}.
<a id="trace-7023"></a>
- 39.65s–39.65s (×1), actor 8, squad 1 (trace 7023): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 5260. Next observer evidence: {'until': 48.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.646784736894618, 'next_transition': 16551}.
<a id="trace-9980"></a>
- 39.65s–39.65s (×1), actor 8, squad 1 (trace 9980): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 5260. Next observer evidence: {'until': 48.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.646784736894618, 'next_transition': 16551}.
<a id="trace-9981"></a>
- 39.65s–39.65s (×1), actor 8, squad 1 (trace 9981): MoveTactically. Knowledge: actor memory at 35.00s, trace 5260. Next observer evidence: {'until': 48.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.646784736894618, 'next_transition': 16551}.
<a id="trace-9982"></a>
- 39.65s–39.65s (×1), actor 8, squad 1 (trace 9982): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 5260. Next observer evidence: {'until': 48.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.646784736894618, 'next_transition': 16551}.
<a id="trace-10144"></a>
- 39.95s–39.95s (×1), actor 0, squad 0 (trace 10144): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 5252. Next observer evidence: {'until': 40.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3150002253214593, 'next_transition': 10996}.
<a id="trace-10996"></a>
<a id="trace-10998"></a>
- 40.25s–40.25s (×2), actor 5, squad 0 (trace 10996): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10919. Next observer evidence: {'until': 40.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750041058723646, 'next_transition': 11010}.
<a id="trace-11010"></a>
- 40.45s–40.45s (×1), actor 0, squad 0 (trace 11010): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 10914. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14951560980891482, 'next_transition': 11800}.
<a id="trace-11800"></a>
<a id="trace-11802"></a>
<a id="trace-11885"></a>
<a id="trace-11887"></a>
- 40.75s–41.25s (×4), actor 5, squad 0 (trace 11800): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10919. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6889052307518356, 'next_transition': 11885}.
<a id="trace-11924"></a>
- 41.40s–41.40s (×1), actor 0, squad 0 (trace 11924): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 10914. Next observer evidence: {'until': 41.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.19687840311538352, 'next_transition': 12723}.
<a id="trace-12723"></a>
<a id="trace-12725"></a>
- 41.75s–41.75s (×2), actor 5, squad 0 (trace 12723): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10919. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331238509101334, 'next_transition': 12747}.
<a id="trace-12747"></a>
- 42.00s–42.00s (×1), actor 0, squad 0 (trace 12747): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 10914. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787509126931237, 'next_transition': 13542}.
<a id="trace-13542"></a>
<a id="trace-13544"></a>
<a id="trace-13613"></a>
<a id="trace-13615"></a>
- 42.25s–42.75s (×4), actor 5, squad 0 (trace 13542): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10919. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.056703322160783706, 'next_transition': 13613}.
<a id="trace-13655"></a>
- 43.10s–43.10s (×1), actor 0, squad 0 (trace 13655): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 10914. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04560601265576012, 'next_transition': 14423}.
<a id="trace-14423"></a>
<a id="trace-14425"></a>
<a id="trace-14472"></a>
<a id="trace-14474"></a>
<a id="trace-14521"></a>
<a id="trace-14523"></a>
<a id="trace-14580"></a>
<a id="trace-14582"></a>
<a id="trace-14678"></a>
<a id="trace-14680"></a>
<a id="trace-14720"></a>
<a id="trace-14722"></a>
<a id="trace-14760"></a>
<a id="trace-14762"></a>
- 43.25s–46.25s (×14), actor 5, squad 0 (trace 14423): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 10919. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31304209777197245, 'next_transition': 14472}.
<a id="trace-14769"></a>
- 46.25s–46.25s (×1), actor 0, squad 0 (trace 14769): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 14601. Next observer evidence: {'until': 46.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37494442579342674, 'next_transition': 15534}.
<a id="trace-15534"></a>
- 46.50s–46.50s (×1), actor 0, squad 0 (trace 15534): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 14601. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33995188647301755, 'next_transition': 16310}.
<a id="trace-16310"></a>
<a id="trace-16312"></a>
<a id="trace-16344"></a>
<a id="trace-16346"></a>
<a id="trace-16415"></a>
<a id="trace-16417"></a>
<a id="trace-16465"></a>
<a id="trace-16467"></a>
<a id="trace-16508"></a>
<a id="trace-16510"></a>
<a id="trace-16638"></a>
<a id="trace-16640"></a>
<a id="trace-16703"></a>
<a id="trace-16705"></a>
- 46.75s–49.75s (×14), actor 5, squad 0 (trace 16310): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 14606. Next observer evidence: {'until': 47.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9384137749751739, 'next_transition': 16344}.
<a id="trace-16551"></a>
- 48.95s–48.95s (×1), actor 8, squad 1 (trace 16551): NeedSupport. Knowledge: actor memory at 45.00s, trace 14609. Next observer evidence: {'until': 53.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.728532382182267, 'next_transition': 19960}.
<a id="trace-16813"></a>
- 50.15s–50.15s (×1), actor 0, squad 0 (trace 16813): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 50.00s, trace 16734. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2581564761474976, 'next_transition': 16834}.
<a id="trace-16834"></a>
<a id="trace-16836"></a>
- 50.25s–50.25s (×2), actor 5, squad 0 (trace 16834): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 16739. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6001374061978856, 'next_transition': 16886}.
<a id="trace-16886"></a>
- 50.65s–50.65s (×1), actor 0, squad 0 (trace 16886): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 16734. Next observer evidence: None.
<a id="trace-16887"></a>
- 50.65s–50.65s (×1), actor 0, squad 0 (trace 16887): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 50.00s, trace 16734. Next observer evidence: None.
<a id="trace-19639"></a>
<a id="trace-19641"></a>
<a id="trace-19704"></a>
<a id="trace-19706"></a>
<a id="trace-19759"></a>
<a id="trace-19761"></a>
<a id="trace-19828"></a>
<a id="trace-19830"></a>
<a id="trace-19874"></a>
<a id="trace-19876"></a>
<a id="trace-19932"></a>
<a id="trace-19934"></a>
- 50.75s–53.25s (×12), actor 5, squad 0 (trace 19639): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 16739. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.89238649780161, 'next_transition': 19704}.
<a id="trace-970"></a>
- 53.35s–53.35s (×1), actor 5, squad 0 (events line 970): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19943"></a>
- 53.35s–53.35s (×1), actor 5, squad 0 (trace 19943): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.601255 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 19943. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5155062066457662, 'next_transition': 20117}.
<a id="trace-19944"></a>
- 53.35s–53.35s (×1), actor 5, squad 0 (trace 19944): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.601255 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 19944. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5155062066457662, 'next_transition': 20117}.
<a id="trace-19960"></a>
- 53.70s–53.70s (×1), actor 8, squad 1 (trace 19960): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 50.00s, trace 16742. Next observer evidence: {'until': 53.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1575087819972277, 'next_transition': 20126}.
<a id="trace-20117"></a>
<a id="trace-20119"></a>
<a id="trace-20427"></a>
<a id="trace-20429"></a>
<a id="trace-20448"></a>
<a id="trace-20450"></a>
<a id="trace-20531"></a>
<a id="trace-20533"></a>
<a id="trace-20544"></a>
<a id="trace-20546"></a>
<a id="trace-20568"></a>
<a id="trace-20570"></a>
<a id="trace-20589"></a>
<a id="trace-20591"></a>
<a id="trace-20609"></a>
<a id="trace-20611"></a>
<a id="trace-20629"></a>
<a id="trace-20631"></a>
<a id="trace-20650"></a>
<a id="trace-20652"></a>
<a id="trace-20676"></a>
<a id="trace-20678"></a>
<a id="trace-20703"></a>
<a id="trace-20705"></a>
<a id="trace-20720"></a>
<a id="trace-20722"></a>
<a id="trace-20805"></a>
<a id="trace-20807"></a>
<a id="trace-20824"></a>
<a id="trace-20826"></a>
<a id="trace-20842"></a>
<a id="trace-20844"></a>
- 53.75s–61.25s (×32), actor 5, squad 0 (trace 20117): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.35s, trace 19944. Next observer evidence: {'until': 54.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8943816293566097, 'next_transition': 20427}.
<a id="trace-20126"></a>
- 53.95s–53.95s (×1), actor 8, squad 1 (trace 20126): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 50.00s, trace 16742. Next observer evidence: {'until': 63.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 1.7283228427727273, 'next_transition': 20943}.
<a id="trace-20400"></a>
- 53.95s–53.95s (×1), actor 8, squad 1 (trace 20400): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 50.00s, trace 16742. Next observer evidence: {'until': 63.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 1.7283228427727273, 'next_transition': 20943}.
<a id="trace-20855"></a>
- 61.70s–61.70s (×1), actor 0, squad 0 (trace 20855): NeedSupport. Knowledge: actor memory at 60.00s, trace 20730. Next observer evidence: None.
<a id="trace-20860"></a>
<a id="trace-20862"></a>
<a id="trace-20887"></a>
<a id="trace-20889"></a>
<a id="trace-20906"></a>
<a id="trace-20908"></a>
<a id="trace-20927"></a>
<a id="trace-20929"></a>
<a id="trace-23746"></a>
<a id="trace-23748"></a>
<a id="trace-23768"></a>
<a id="trace-23770"></a>
<a id="trace-23801"></a>
<a id="trace-23803"></a>
<a id="trace-23906"></a>
<a id="trace-23908"></a>
- 61.75s–65.25s (×16), actor 5, squad 0 (trace 20860): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 20735. Next observer evidence: {'until': 62.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.31567299356389317, 'next_transition': 20887}.
<a id="trace-20943"></a>
- 63.65s–63.65s (×1), actor 8, squad 1 (trace 20943): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 20738. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.4615143416486047, 'next_transition': 1381}.
<a id="trace-20944"></a>
- 63.65s–63.65s (×1), actor 8, squad 1 (trace 20944): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 60.00s, trace 20738. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.4615143416486047, 'next_transition': 1381}.
<a id="trace-1380"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (events line 1380): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 66.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3512529900911317, 'next_transition': 23987}.
<a id="trace-1381"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (events line 1381): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 71, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.7513240255959275, 'next_transition': 24260}.
<a id="trace-23942"></a>
<a id="trace-23944"></a>
- 65.75s–65.75s (×2), actor 5, squad 0 (trace 23942): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 23831. Next observer evidence: {'until': 66.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3512529900911317, 'next_transition': 23987}.
<a id="trace-23950"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 23950): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.596229 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 23950. Next observer evidence: {'until': 66.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3512529900911317, 'next_transition': 23987}.
<a id="trace-23951"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 23951): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.596229 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 23951. Next observer evidence: {'until': 66.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.3512529900911317, 'next_transition': 23987}.
<a id="trace-23952"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 23952): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.596229 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 23952. Next observer evidence: {'until': 71, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.7513240255959275, 'next_transition': 24260}.
<a id="trace-23953"></a>
- 65.75s–65.75s (×1), actor 5, squad 1 (trace 23953): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.596229 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 65.75s, trace 23953. Next observer evidence: {'until': 71, 'shots': 0, 'casualties': 1, 'mean_displacement': 6.7513240255959275, 'next_transition': 24260}.
<a id="trace-23987"></a>
<a id="trace-23989"></a>
<a id="trace-24006"></a>
<a id="trace-24008"></a>
<a id="trace-24026"></a>
<a id="trace-24028"></a>
<a id="trace-24039"></a>
<a id="trace-24041"></a>
<a id="trace-24062"></a>
<a id="trace-24064"></a>
<a id="trace-24080"></a>
<a id="trace-24082"></a>
<a id="trace-24108"></a>
<a id="trace-24110"></a>
<a id="trace-24132"></a>
<a id="trace-24134"></a>
<a id="trace-24223"></a>
<a id="trace-24225"></a>
<a id="trace-24241"></a>
<a id="trace-24243"></a>
<a id="trace-24270"></a>
<a id="trace-24272"></a>
<a id="trace-24284"></a>
<a id="trace-24286"></a>
- 66.25s–71.75s (×24), actor 5, squad 0 (trace 23987): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.75s, trace 23953. Next observer evidence: {'until': 66.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2594150657587467, 'next_transition': 24006}.
<a id="trace-24260"></a>
- 71.15s–71.15s (×1), actor 9, squad 1 (trace 24260): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 70.00s, trace 24153. Next observer evidence: {'until': 72, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24298}.
<a id="trace-24298"></a>
- 72.15s–72.15s (×1), actor 9, squad 1 (trace 24298): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 24153. Next observer evidence: {'until': 74, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.376053766811738, 'next_transition': 1544}.
<a id="trace-24301"></a>
- 72.15s–72.15s (×1), actor 9, squad 1 (trace 24301): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 24153. Next observer evidence: {'until': 74, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.376053766811738, 'next_transition': 1544}.
<a id="trace-24302"></a>
- 72.15s–72.15s (×1), actor 9, squad 1 (trace 24302): Reorganise complete: known contact. Knowledge: actor memory at 70.00s, trace 24153. Next observer evidence: {'until': 74, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.376053766811738, 'next_transition': 1544}.
<a id="trace-24530"></a>
- 72.20s–72.20s (×1), actor 5, squad 0 (trace 24530): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 72.20s, trace 24530. Next observer evidence: None.
<a id="trace-24536"></a>
<a id="trace-24538"></a>
<a id="trace-24558"></a>
<a id="trace-24560"></a>
<a id="trace-24587"></a>
<a id="trace-24589"></a>
<a id="trace-24607"></a>
<a id="trace-24609"></a>
- 72.25s–73.75s (×8), actor 5, squad 0 (trace 24536): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 72.20s, trace 24530. Next observer evidence: {'until': 72.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24558}.
<a id="trace-1543"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (events line 1543): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1544"></a>
- 74.15s–74.15s (×1), actor 5, squad 1 (events line 1544): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24622"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (trace 24622): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.420858 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 24622. Next observer evidence: {'until': 74.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24637}.
<a id="trace-24623"></a>
- 74.15s–74.15s (×1), actor 5, squad 0 (trace 24623): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.420858 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 24623. Next observer evidence: {'until': 74.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24637}.
<a id="trace-24624"></a>
- 74.15s–74.15s (×1), actor 5, squad 1 (trace 24624): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.420858 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 24624. Next observer evidence: {'until': 75.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.674152911879807, 'next_transition': 24757}.
<a id="trace-24625"></a>
- 74.15s–74.15s (×1), actor 5, squad 1 (trace 24625): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.420858 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.15s, trace 24625. Next observer evidence: {'until': 75.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.674152911879807, 'next_transition': 24757}.
<a id="trace-24637"></a>
<a id="trace-24639"></a>
<a id="trace-24657"></a>
<a id="trace-24659"></a>
<a id="trace-24732"></a>
<a id="trace-24734"></a>
<a id="trace-24747"></a>
<a id="trace-24749"></a>
<a id="trace-24772"></a>
<a id="trace-24774"></a>
- 74.25s–76.25s (×10), actor 5, squad 0 (trace 24637): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 74.15s, trace 24625. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24657}.
<a id="trace-24757"></a>
- 75.85s–75.85s (×1), actor 9, squad 1 (trace 24757): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 75.00s, trace 24675. Next observer evidence: {'until': 76.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4587388883346453, 'next_transition': 26684}.
<a id="trace-24785"></a>
- 76.65s–76.65s (×1), actor 0, squad 0 (trace 24785): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 24668. Next observer evidence: None.
<a id="trace-24786"></a>
- 76.65s–76.65s (×1), actor 0, squad 0 (trace 24786): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 75.00s, trace 24668. Next observer evidence: None.
<a id="trace-26668"></a>
<a id="trace-26670"></a>
<a id="trace-26856"></a>
<a id="trace-26858"></a>
<a id="trace-26883"></a>
<a id="trace-26885"></a>
<a id="trace-26915"></a>
<a id="trace-26917"></a>
- 76.75s–78.25s (×8), actor 5, squad 0 (trace 26668): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 24672. Next observer evidence: {'until': 77.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.037890921560905656, 'next_transition': 26856}.
<a id="trace-26684"></a>
- 76.85s–76.85s (×1), actor 9, squad 1 (trace 26684): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 75.00s, trace 24675. Next observer evidence: {'until': 86.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 14.674291000952401, 'next_transition': 28012}.
<a id="trace-26685"></a>
- 76.85s–76.85s (×1), actor 9, squad 1 (trace 26685): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 24675. Next observer evidence: {'until': 86.8, 'shots': 1, 'casualties': 1, 'mean_displacement': 14.674291000952401, 'next_transition': 28012}.
<a id="trace-26929"></a>
- 78.30s–78.30s (×1), actor 0, squad 0 (trace 26929): Fixing. Knowledge: actor memory at 75.00s, trace 24668. Next observer evidence: {'until': 78.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.13591661561413296, 'next_transition': 26952}.
<a id="trace-26952"></a>
<a id="trace-26954"></a>
- 78.75s–78.75s (×2), actor 5, squad 0 (trace 26952): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 24672. Next observer evidence: {'until': 79.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1214624302458355, 'next_transition': 26969}.
<a id="trace-26969"></a>
- 79.20s–79.20s (×1), actor 0, squad 0 (trace 26969): support established: element delivered fire on threat area. Knowledge: actor memory at 75.00s, trace 24668. Next observer evidence: None.
<a id="trace-26970"></a>
- 79.20s–79.20s (×1), actor 0, squad 0 (trace 26970): established base of fire; hold and report no covered assault route. Knowledge: actor memory at 75.00s, trace 24668. Next observer evidence: None.
<a id="trace-26977"></a>
<a id="trace-26979"></a>
<a id="trace-27005"></a>
<a id="trace-27007"></a>
- 79.25s–79.75s (×4), actor 5, squad 0 (trace 26977): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 24672. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17157152064348713, 'next_transition': 27005}.
<a id="trace-1620"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (events line 1620): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27047"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 27047): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.420480 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 27047. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07326065178590423, 'next_transition': 27100}.
<a id="trace-27048"></a>
- 80.15s–80.15s (×1), actor 5, squad 0 (trace 27048): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.420480 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 80.15s, trace 27048. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07326065178590423, 'next_transition': 27100}.
<a id="trace-27100"></a>
<a id="trace-27102"></a>
<a id="trace-27112"></a>
<a id="trace-27114"></a>
<a id="trace-27134"></a>
<a id="trace-27136"></a>
<a id="trace-27147"></a>
<a id="trace-27149"></a>
<a id="trace-27168"></a>
<a id="trace-27170"></a>
<a id="trace-27193"></a>
<a id="trace-27195"></a>
<a id="trace-27210"></a>
<a id="trace-27212"></a>
- 80.25s–83.25s (×14), actor 5, squad 0 (trace 27100): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 27048. Next observer evidence: {'until': 80.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1976292885675517, 'next_transition': 27112}.
<a id="trace-27222"></a>
- 83.60s–83.60s (×1), actor 0, squad 0 (trace 27222): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 27021. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.029470886706465114, 'next_transition': 27833}.
<a id="trace-27223"></a>
- 83.60s–83.60s (×1), actor 0, squad 0 (trace 27223): received platoon directive. Knowledge: actor memory at 80.00s, trace 27021. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.029470886706465114, 'next_transition': 27833}.
<a id="trace-27833"></a>
<a id="trace-27835"></a>
- 83.75s–83.75s (×2), actor 5, squad 0 (trace 27833): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.15s, trace 27048. Next observer evidence: {'until': 86.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.7557262711521198, 'next_transition': 28011}.
<a id="trace-28011"></a>
- 86.85s–86.85s (×1), actor 6, squad 0 (trace 28011): renew committed intent (75 s lifetime). Knowledge: actor memory at 86.85s, trace 28011. Next observer evidence: None.
<a id="trace-28012"></a>
- 86.85s–86.85s (×1), actor 6, squad 1 (trace 28012): renew committed intent (75 s lifetime). Knowledge: actor memory at 86.85s, trace 28012. Next observer evidence: None.
<a id="trace-1676"></a>
- 86.85s–86.85s (×1), actor 6, squad 0 (events line 1676): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000058405342045, 'next_transition': 28035}.
<a id="trace-1677"></a>
- 86.85s–86.85s (×1), actor 6, squad 1 (events line 1677): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.362550811919186, 'next_transition': 28488}.
<a id="trace-28035"></a>
<a id="trace-28037"></a>
- 87.25s–87.25s (×2), actor 6, squad 0 (trace 28035): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 86.85s, trace 28012. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17014593761120309, 'next_transition': 28465}.
<a id="trace-28044"></a>
- 87.25s–87.25s (×1), actor 0, squad 0 (trace 28044): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 85.00s, trace 27878. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17014593761120309, 'next_transition': 28465}.
<a id="trace-28045"></a>
- 87.25s–87.25s (×1), actor 0, squad 0 (trace 28045): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 27878. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17014593761120309, 'next_transition': 28465}.
<a id="trace-28465"></a>
<a id="trace-28467"></a>
<a id="trace-28547"></a>
<a id="trace-28663"></a>
<a id="trace-28665"></a>
- 88.25s–90.25s (×5), actor 6, squad 0 (trace 28465): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 86.85s, trace 28012. Next observer evidence: {'until': 89.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2838530673715791, 'next_transition': 28547}.
<a id="trace-28488"></a>
- 88.70s–88.70s (×1), actor 9, squad 1 (trace 28488): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 27884. Next observer evidence: {'until': 110.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30442}.
<a id="trace-28510"></a>
- 88.70s–88.70s (×1), actor 9, squad 1 (trace 28510): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 27884. Next observer evidence: {'until': 110.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30442}.
<a id="trace-28702"></a>
- 91.15s–91.15s (×1), actor 0, squad 0 (trace 28702): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 28589. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37799888502417295, 'next_transition': 28709}.
<a id="trace-28709"></a>
<a id="trace-28711"></a>
- 91.25s–91.25s (×2), actor 6, squad 0 (trace 28709): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 90.00s, trace 28593. Next observer evidence: {'until': 92, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5376344999466507, 'next_transition': 28741}.
<a id="trace-28741"></a>
- 92.15s–92.15s (×1), actor 0, squad 0 (trace 28741): Reorganise: completed/failed drill. Knowledge: actor memory at 90.00s, trace 28589. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4302040819319721, 'next_transition': 29203}.
<a id="trace-28746"></a>
- 92.15s–92.15s (×1), actor 0, squad 0 (trace 28746): ReactToContact: cover and return fire. Knowledge: actor memory at 90.00s, trace 28589. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4302040819319721, 'next_transition': 29203}.
<a id="trace-28747"></a>
- 92.15s–92.15s (×1), actor 0, squad 0 (trace 28747): Reorganise complete: known contact. Knowledge: actor memory at 90.00s, trace 28589. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4302040819319721, 'next_transition': 29203}.
<a id="trace-29203"></a>
<a id="trace-29205"></a>
<a id="trace-29238"></a>
<a id="trace-29240"></a>
<a id="trace-29293"></a>
<a id="trace-29295"></a>
<a id="trace-29393"></a>
<a id="trace-29395"></a>
- 92.25s–95.25s (×8), actor 6, squad 0 (trace 29203): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 90.00s, trace 28593. Next observer evidence: {'until': 93.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.380122685723364, 'next_transition': 29238}.
<a id="trace-29416"></a>
- 95.70s–95.70s (×1), actor 0, squad 0 (trace 29416): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 95.00s, trace 29326. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0710068776608124, 'next_transition': 29825}.
<a id="trace-29417"></a>
- 95.70s–95.70s (×1), actor 0, squad 0 (trace 29417): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 29326. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0710068776608124, 'next_transition': 29825}.
<a id="trace-29825"></a>
<a id="trace-29827"></a>
<a id="trace-29871"></a>
<a id="trace-29873"></a>
<a id="trace-29907"></a>
<a id="trace-29909"></a>
<a id="trace-29955"></a>
<a id="trace-29957"></a>
<a id="trace-30039"></a>
<a id="trace-30041"></a>
<a id="trace-30063"></a>
<a id="trace-30065"></a>
<a id="trace-30089"></a>
<a id="trace-30091"></a>
<a id="trace-30119"></a>
<a id="trace-30121"></a>
<a id="trace-30149"></a>
<a id="trace-30151"></a>
<a id="trace-30231"></a>
<a id="trace-30233"></a>
<a id="trace-30253"></a>
<a id="trace-30255"></a>
<a id="trace-30283"></a>
<a id="trace-30285"></a>
<a id="trace-30308"></a>
<a id="trace-30310"></a>
<a id="trace-30336"></a>
<a id="trace-30338"></a>
<a id="trace-30421"></a>
<a id="trace-30423"></a>
<a id="trace-30715"></a>
<a id="trace-30717"></a>
- 96.25s–111.25s (×32), actor 6, squad 0 (trace 29825): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 95.00s, trace 29330. Next observer evidence: {'until': 97.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4490046127638778, 'next_transition': 29871}.
<a id="trace-30442"></a>
- 110.60s–110.60s (×1), actor 9, squad 1 (trace 30442): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 30367. Next observer evidence: None.
<a id="trace-30697"></a>
- 110.65s–110.65s (×1), actor 9, squad 1 (trace 30697): received Fixing; no covered own-side route: retain supported fire and movement. Knowledge: actor memory at 110.00s, trace 30367. Next observer evidence: {'until': 117.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1966}.
<a id="trace-30732"></a>
- 111.75s–111.75s (×1), actor 0, squad 0 (trace 30732): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 30362. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27138248469980963, 'next_transition': 30898}.
<a id="trace-30733"></a>
- 111.75s–111.75s (×1), actor 0, squad 0 (trace 30733): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 30362. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27138248469980963, 'next_transition': 30898}.
<a id="trace-30898"></a>
<a id="trace-30900"></a>
<a id="trace-30938"></a>
<a id="trace-30940"></a>
<a id="trace-30968"></a>
<a id="trace-30970"></a>
<a id="trace-31078"></a>
<a id="trace-31080"></a>
<a id="trace-31109"></a>
<a id="trace-31111"></a>
<a id="trace-31142"></a>
<a id="trace-31144"></a>
<a id="trace-31173"></a>
<a id="trace-31175"></a>
<a id="trace-31266"></a>
<a id="trace-31268"></a>
<a id="trace-31353"></a>
<a id="trace-31355"></a>
<a id="trace-31381"></a>
<a id="trace-31383"></a>
<a id="trace-31407"></a>
<a id="trace-31409"></a>
<a id="trace-31433"></a>
<a id="trace-31435"></a>
<a id="trace-31460"></a>
<a id="trace-31462"></a>
<a id="trace-31541"></a>
<a id="trace-31543"></a>
<a id="trace-31566"></a>
<a id="trace-31589"></a>
<a id="trace-31591"></a>
<a id="trace-31620"></a>
<a id="trace-31622"></a>
<a id="trace-31651"></a>
<a id="trace-31653"></a>
<a id="trace-31736"></a>
<a id="trace-31738"></a>
<a id="trace-31765"></a>
<a id="trace-31767"></a>
<a id="trace-31789"></a>
<a id="trace-31791"></a>
- 112.25s–132.30s (×41), actor 6, squad 0 (trace 30898): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 110.00s, trace 30366. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49578388252740824, 'next_transition': 30938}.
<a id="trace-1966"></a>
- 117.20s–117.20s (×1), actor 6, squad 1 (events line 1966): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 118.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31204}.
<a id="trace-31137"></a>
- 117.20s–117.20s (×1), actor 6, squad 1 (trace 31137): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.306341 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 117.20s, trace 31137. Next observer evidence: {'until': 118.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31204}.
<a id="trace-31138"></a>
- 117.20s–117.20s (×1), actor 6, squad 1 (trace 31138): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.306341 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 117.20s, trace 31138. Next observer evidence: {'until': 118.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31204}.
<a id="trace-31204"></a>
- 118.85s–118.85s (×1), actor 9, squad 1 (trace 31204): Withdraw to received rally. Knowledge: actor memory at 115.00s, trace 31018. Next observer evidence: {'until': 130, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 31689}.
<a id="trace-31205"></a>
- 118.85s–118.85s (×1), actor 9, squad 1 (trace 31205): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 31018. Next observer evidence: {'until': 130, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.999999999999996, 'next_transition': 31689}.
<a id="trace-31689"></a>
- 130.10s–130.10s (×1), actor 9, squad 1 (trace 31689): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 31676. Next observer evidence: {'until': 160, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2179}.
<a id="trace-31690"></a>
- 130.10s–130.10s (×1), actor 9, squad 1 (trace 31690): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 31676. Next observer evidence: {'until': 160, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2179}.
<a id="trace-31807"></a>
- 133.25s–133.25s (×1), actor 0, squad 0 (trace 31807): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 31671. Next observer evidence: None.
<a id="trace-31929"></a>
- 133.25s–133.25s (×1), actor 0, squad 0 (trace 31929): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 31671. Next observer evidence: None.
<a id="trace-31985"></a>
<a id="trace-31987"></a>
<a id="trace-32017"></a>
<a id="trace-32019"></a>
<a id="trace-32100"></a>
<a id="trace-32102"></a>
<a id="trace-32142"></a>
<a id="trace-32144"></a>
<a id="trace-32170"></a>
<a id="trace-32172"></a>
- 133.30s–137.30s (×10), actor 6, squad 0 (trace 31985): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 130.00s, trace 31675. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32017}.
<a id="trace-32182"></a>
- 137.65s–137.65s (×1), actor 0, squad 0 (trace 32182): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 32043. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6688059715583741, 'next_transition': 32195}.
<a id="trace-32195"></a>
<a id="trace-32239"></a>
<a id="trace-32241"></a>
<a id="trace-32325"></a>
<a id="trace-32327"></a>
<a id="trace-32355"></a>
<a id="trace-32357"></a>
<a id="trace-32377"></a>
<a id="trace-32379"></a>
- 138.30s–142.30s (×9), actor 6, squad 0 (trace 32195): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 135.00s, trace 32046. Next observer evidence: {'until': 139.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299880023659182, 'next_transition': 32239}.
<a id="trace-2073"></a>
- 142.55s–142.55s (×1), actor 6, squad 0 (events line 2073): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25407613489697156, 'next_transition': 32411}.
<a id="trace-32389"></a>
- 142.55s–142.55s (×1), actor 6, squad 0 (trace 32389): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.256567 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 142.55s, trace 32389. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25407613489697156, 'next_transition': 32411}.
<a id="trace-32390"></a>
- 142.55s–142.55s (×1), actor 6, squad 0 (trace 32390): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.256567 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 142.55s, trace 32390. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25407613489697156, 'next_transition': 32411}.
<a id="trace-32411"></a>
<a id="trace-32413"></a>
<a id="trace-32442"></a>
<a id="trace-32444"></a>
<a id="trace-32518"></a>
<a id="trace-32520"></a>
- 143.30s–145.30s (×6), actor 6, squad 0 (trace 32411): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 142.55s, trace 32390. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 32442}.
<a id="trace-32525"></a>
- 145.35s–145.35s (×1), actor 0, squad 0 (trace 32525): Withdraw to received rally. Knowledge: actor memory at 145.00s, trace 32461. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23750000000000004, 'next_transition': 32596}.
<a id="trace-32526"></a>
- 145.35s–145.35s (×1), actor 0, squad 0 (trace 32526): rearward bound: one stationary suppressing element. Knowledge: actor memory at 145.00s, trace 32461. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23750000000000004, 'next_transition': 32596}.
<a id="trace-32596"></a>
<a id="trace-32598"></a>
<a id="trace-32628"></a>
<a id="trace-32630"></a>
<a id="trace-32665"></a>
<a id="trace-32667"></a>
<a id="trace-32692"></a>
<a id="trace-32694"></a>
<a id="trace-32770"></a>
<a id="trace-32772"></a>
<a id="trace-32801"></a>
<a id="trace-32803"></a>
<a id="trace-32828"></a>
<a id="trace-32830"></a>
<a id="trace-32850"></a>
<a id="trace-32852"></a>
<a id="trace-32878"></a>
<a id="trace-32957"></a>
<a id="trace-32959"></a>
<a id="trace-32979"></a>
<a id="trace-32981"></a>
<a id="trace-33002"></a>
<a id="trace-33004"></a>
- 146.30s–157.30s (×23), actor 6, squad 0 (trace 32596): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 145.00s, trace 32464. Next observer evidence: {'until': 147.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.314992600111495, 'next_transition': 32628}.
<a id="trace-33029"></a>
- 158.20s–158.20s (×1), actor 0, squad 0 (trace 33029): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 32899. Next observer evidence: None.
<a id="trace-33030"></a>
- 158.20s–158.20s (×1), actor 0, squad 0 (trace 33030): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 32899. Next observer evidence: None.
<a id="trace-33136"></a>
<a id="trace-33138"></a>
<a id="trace-33169"></a>
<a id="trace-33171"></a>
<a id="trace-33250"></a>
<a id="trace-33252"></a>
<a id="trace-33290"></a>
<a id="trace-33292"></a>
<a id="trace-33319"></a>
<a id="trace-33321"></a>
<a id="trace-33347"></a>
<a id="trace-33349"></a>
<a id="trace-33374"></a>
<a id="trace-33376"></a>
<a id="trace-33456"></a>
<a id="trace-33458"></a>
<a id="trace-33484"></a>
<a id="trace-33486"></a>
<a id="trace-33506"></a>
<a id="trace-33508"></a>
<a id="trace-33540"></a>
<a id="trace-33542"></a>
<a id="trace-33568"></a>
<a id="trace-33570"></a>
- 158.30s–169.30s (×24), actor 6, squad 0 (trace 33136): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 155.00s, trace 32902. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17409999548040037, 'next_transition': 33169}.
<a id="trace-33714"></a>
<a id="trace-33716"></a>
- 173.30s–173.30s (×2), actor 0, squad 0 (trace 33714): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 170.00s, trace 33594. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33733}.
<a id="trace-33733"></a>
- 173.85s–173.85s (×1), actor 0, squad 0 (trace 33733): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 170.00s, trace 33594. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33792}.
<a id="trace-33734"></a>
- 173.85s–173.85s (×1), actor 0, squad 0 (trace 33734): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 170.00s, trace 33594. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33792}.
<a id="trace-33792"></a>
<a id="trace-33794"></a>
- 174.30s–174.30s (×2), actor 0, squad 0 (trace 33792): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 170.00s, trace 33594. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2178}.
<a id="trace-2178"></a>
- 175.30s–175.30s (×1), actor 0, squad 0 (events line 2178): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450160004524348, 'next_transition': 33911}.
<a id="trace-2179"></a>
- 175.30s–175.30s (×1), actor 0, squad 1 (events line 2179): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2541}.
<a id="trace-33878"></a>
<a id="trace-33880"></a>
- 175.30s–175.30s (×2), actor 0, squad 0 (trace 33878): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 175.00s, trace 33815. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450160004524348, 'next_transition': 33911}.
<a id="trace-33887"></a>
- 175.30s–175.30s (×1), actor 0, squad 0 (trace 33887): renew committed intent (75 s lifetime). Knowledge: actor memory at 175.30s, trace 33887. Next observer evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450160004524348, 'next_transition': 33911}.
<a id="trace-33888"></a>
- 175.30s–175.30s (×1), actor 0, squad 1 (trace 33888): renew committed intent (75 s lifetime). Knowledge: actor memory at 175.30s, trace 33888. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2541}.
<a id="trace-33911"></a>
<a id="trace-33913"></a>
<a id="trace-33941"></a>
<a id="trace-33943"></a>
<a id="trace-33960"></a>
<a id="trace-33962"></a>
<a id="trace-33981"></a>
<a id="trace-33983"></a>
<a id="trace-34058"></a>
<a id="trace-34060"></a>
<a id="trace-34081"></a>
<a id="trace-34083"></a>
<a id="trace-34103"></a>
<a id="trace-34105"></a>
<a id="trace-34128"></a>
<a id="trace-34130"></a>
- 176.30s–183.30s (×16), actor 0, squad 0 (trace 33911): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 175.30s, trace 33888. Next observer evidence: {'until': 177.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0499919624030971, 'next_transition': 33941}.
<a id="trace-34138"></a>
- 183.35s–183.35s (×1), actor 0, squad 0 (trace 34138): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 33999. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03780587843767936, 'next_transition': 34262}.
<a id="trace-34139"></a>
- 183.35s–183.35s (×1), actor 0, squad 0 (trace 34139): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 33999. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03780587843767936, 'next_transition': 34262}.
<a id="trace-34262"></a>
<a id="trace-34264"></a>
<a id="trace-34348"></a>
<a id="trace-34350"></a>
<a id="trace-34386"></a>
<a id="trace-34388"></a>
<a id="trace-34415"></a>
<a id="trace-34437"></a>
<a id="trace-34439"></a>
<a id="trace-34463"></a>
<a id="trace-34465"></a>
<a id="trace-34547"></a>
<a id="trace-34549"></a>
<a id="trace-34575"></a>
<a id="trace-34577"></a>
<a id="trace-34618"></a>
<a id="trace-34620"></a>
<a id="trace-34643"></a>
- 184.30s–193.30s (×18), actor 0, squad 0 (trace 34262): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 180.00s, trace 33999. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7778653825968445, 'next_transition': 34348}.
<a id="trace-34654"></a>
- 193.75s–193.75s (×1), actor 0, squad 0 (trace 34654): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 190.00s, trace 34486. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.864663873566751, 'next_transition': 34669}.
<a id="trace-34669"></a>
<a id="trace-34671"></a>
<a id="trace-34764"></a>
<a id="trace-34766"></a>
<a id="trace-34799"></a>
<a id="trace-34801"></a>
<a id="trace-34834"></a>
<a id="trace-34836"></a>
- 194.30s–197.30s (×8), actor 0, squad 0 (trace 34669): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 190.00s, trace 34486. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5943221961929819, 'next_transition': 34764}.
<a id="trace-2291"></a>
- 197.80s–197.80s (×1), actor 0, squad 0 (events line 2291): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34866}.
<a id="trace-34853"></a>
- 197.80s–197.80s (×1), actor 0, squad 0 (trace 34853): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.360942 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 197.80s, trace 34853. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34866}.
<a id="trace-34854"></a>
- 197.80s–197.80s (×1), actor 0, squad 0 (trace 34854): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.360942 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 197.80s, trace 34854. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34866}.
<a id="trace-34866"></a>
<a id="trace-34868"></a>
<a id="trace-34897"></a>
<a id="trace-34899"></a>
<a id="trace-34971"></a>
<a id="trace-34973"></a>
- 198.30s–200.30s (×6), actor 0, squad 0 (trace 34866): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 197.80s, trace 34854. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34897}.
<a id="trace-34987"></a>
- 200.75s–200.75s (×1), actor 0, squad 0 (trace 34987): Withdraw to received rally. Knowledge: actor memory at 200.00s, trace 34914. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35001}.
<a id="trace-34988"></a>
- 200.75s–200.75s (×1), actor 0, squad 0 (trace 34988): rearward bound: one stationary suppressing element. Knowledge: actor memory at 200.00s, trace 34914. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35001}.
<a id="trace-35001"></a>
<a id="trace-35003"></a>
<a id="trace-35033"></a>
<a id="trace-35035"></a>
<a id="trace-35057"></a>
<a id="trace-35059"></a>
<a id="trace-35093"></a>
<a id="trace-35095"></a>
<a id="trace-35181"></a>
<a id="trace-35183"></a>
<a id="trace-35199"></a>
<a id="trace-35201"></a>
<a id="trace-35222"></a>
<a id="trace-35224"></a>
<a id="trace-35243"></a>
<a id="trace-35245"></a>
<a id="trace-35262"></a>
<a id="trace-35264"></a>
<a id="trace-35343"></a>
<a id="trace-35345"></a>
<a id="trace-35368"></a>
<a id="trace-35370"></a>
<a id="trace-35400"></a>
<a id="trace-35402"></a>
<a id="trace-35422"></a>
<a id="trace-35424"></a>
<a id="trace-35442"></a>
<a id="trace-35444"></a>
<a id="trace-35516"></a>
<a id="trace-35518"></a>
<a id="trace-35538"></a>
<a id="trace-35540"></a>
<a id="trace-35565"></a>
<a id="trace-35567"></a>
<a id="trace-35591"></a>
<a id="trace-35593"></a>
<a id="trace-35623"></a>
<a id="trace-35625"></a>
<a id="trace-35694"></a>
<a id="trace-35696"></a>
<a id="trace-35715"></a>
<a id="trace-35717"></a>
<a id="trace-35735"></a>
<a id="trace-35737"></a>
<a id="trace-35756"></a>
<a id="trace-35758"></a>
<a id="trace-35782"></a>
<a id="trace-35784"></a>
<a id="trace-35875"></a>
<a id="trace-35877"></a>
<a id="trace-35895"></a>
<a id="trace-35897"></a>
<a id="trace-35916"></a>
<a id="trace-35918"></a>
<a id="trace-35937"></a>
<a id="trace-35939"></a>
<a id="trace-35953"></a>
<a id="trace-35955"></a>
<a id="trace-36030"></a>
<a id="trace-36032"></a>
<a id="trace-36058"></a>
<a id="trace-36060"></a>
<a id="trace-36092"></a>
<a id="trace-36094"></a>
<a id="trace-36112"></a>
<a id="trace-36114"></a>
<a id="trace-36133"></a>
<a id="trace-36135"></a>
<a id="trace-36207"></a>
<a id="trace-36209"></a>
<a id="trace-36225"></a>
<a id="trace-36227"></a>
<a id="trace-36253"></a>
<a id="trace-36255"></a>
<a id="trace-36292"></a>
<a id="trace-36294"></a>
<a id="trace-36312"></a>
<a id="trace-36314"></a>
<a id="trace-36389"></a>
<a id="trace-36391"></a>
<a id="trace-36410"></a>
<a id="trace-36412"></a>
<a id="trace-36430"></a>
<a id="trace-36432"></a>
<a id="trace-36455"></a>
<a id="trace-36457"></a>
<a id="trace-36481"></a>
<a id="trace-36483"></a>
<a id="trace-36568"></a>
<a id="trace-36570"></a>
<a id="trace-36588"></a>
<a id="trace-36590"></a>
<a id="trace-36609"></a>
<a id="trace-36611"></a>
<a id="trace-36628"></a>
<a id="trace-36630"></a>
<a id="trace-36648"></a>
<a id="trace-36730"></a>
<a id="trace-36755"></a>
<a id="trace-36757"></a>
<a id="trace-36789"></a>
<a id="trace-36791"></a>
<a id="trace-36807"></a>
<a id="trace-36809"></a>
<a id="trace-36823"></a>
<a id="trace-36825"></a>
<a id="trace-36899"></a>
<a id="trace-36901"></a>
<a id="trace-36923"></a>
<a id="trace-36925"></a>
<a id="trace-36948"></a>
<a id="trace-36950"></a>
- 201.30s–257.30s (×112), actor 0, squad 0 (trace 35001): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 200.00s, trace 34914. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35033}.
<a id="trace-2541"></a>
- 235.50s–235.50s (×1), actor 0, squad 1 (events line 2541): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 265.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38318}.
<a id="trace-36218"></a>
<a id="trace-38318"></a>
- 235.50s–297.15s (×2), actor 0, squad 1 (trace 36218): renew committed intent (75 s lifetime). Knowledge: actor memory at 235.50s, trace 36218. Next observer evidence: {'until': 265.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38318}.
<a id="trace-2682"></a>
- 257.95s–257.95s (×1), actor 0, squad 0 (events line 2682): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-36970"></a>
- 257.95s–257.95s (×1), actor 0, squad 0 (trace 36970): renew committed intent (75 s lifetime). Knowledge: actor memory at 257.95s, trace 36970. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36987}.
<a id="trace-36987"></a>
<a id="trace-36989"></a>
<a id="trace-37006"></a>
<a id="trace-37008"></a>
<a id="trace-37079"></a>
<a id="trace-37081"></a>
<a id="trace-37100"></a>
<a id="trace-37102"></a>
<a id="trace-37122"></a>
<a id="trace-37124"></a>
<a id="trace-37148"></a>
<a id="trace-37150"></a>
<a id="trace-37174"></a>
<a id="trace-37176"></a>
<a id="trace-37258"></a>
<a id="trace-37260"></a>
<a id="trace-37277"></a>
<a id="trace-37279"></a>
<a id="trace-37299"></a>
<a id="trace-37301"></a>
<a id="trace-37318"></a>
<a id="trace-37320"></a>
<a id="trace-37337"></a>
<a id="trace-37339"></a>
<a id="trace-37414"></a>
<a id="trace-37416"></a>
<a id="trace-37452"></a>
<a id="trace-37454"></a>
<a id="trace-37472"></a>
<a id="trace-37474"></a>
<a id="trace-37493"></a>
<a id="trace-37495"></a>
<a id="trace-37511"></a>
<a id="trace-37513"></a>
<a id="trace-37583"></a>
<a id="trace-37585"></a>
<a id="trace-37607"></a>
<a id="trace-37609"></a>
<a id="trace-37636"></a>
<a id="trace-37665"></a>
<a id="trace-37667"></a>
<a id="trace-37685"></a>
<a id="trace-37687"></a>
<a id="trace-37756"></a>
<a id="trace-37758"></a>
<a id="trace-37777"></a>
<a id="trace-37779"></a>
<a id="trace-37798"></a>
<a id="trace-37800"></a>
<a id="trace-37824"></a>
<a id="trace-37826"></a>
<a id="trace-37846"></a>
<a id="trace-37848"></a>
<a id="trace-37933"></a>
<a id="trace-37935"></a>
<a id="trace-37953"></a>
<a id="trace-37955"></a>
<a id="trace-37975"></a>
<a id="trace-37977"></a>
<a id="trace-37996"></a>
<a id="trace-37998"></a>
<a id="trace-38015"></a>
<a id="trace-38017"></a>
<a id="trace-38092"></a>
<a id="trace-38094"></a>
<a id="trace-38132"></a>
<a id="trace-38134"></a>
<a id="trace-38154"></a>
<a id="trace-38156"></a>
<a id="trace-38173"></a>
<a id="trace-38175"></a>
<a id="trace-38193"></a>
<a id="trace-38195"></a>
<a id="trace-38267"></a>
<a id="trace-38269"></a>
<a id="trace-38293"></a>
<a id="trace-38295"></a>
<a id="trace-38323"></a>
<a id="trace-38356"></a>
<a id="trace-38358"></a>
<a id="trace-38375"></a>
<a id="trace-38377"></a>
<a id="trace-38450"></a>
<a id="trace-38471"></a>
<a id="trace-38473"></a>
<a id="trace-38493"></a>
<a id="trace-38495"></a>
<a id="trace-38521"></a>
<a id="trace-38523"></a>
<a id="trace-38559"></a>
<a id="trace-38561"></a>
<a id="trace-38631"></a>
<a id="trace-38633"></a>
<a id="trace-38650"></a>
<a id="trace-38652"></a>
<a id="trace-38670"></a>
<a id="trace-38672"></a>
<a id="trace-38689"></a>
<a id="trace-38691"></a>
<a id="trace-38714"></a>
<a id="trace-38716"></a>
<a id="trace-38795"></a>
<a id="trace-38797"></a>
<a id="trace-38823"></a>
<a id="trace-38825"></a>
<a id="trace-38844"></a>
<a id="trace-38846"></a>
<a id="trace-38864"></a>
<a id="trace-38866"></a>
<a id="trace-38883"></a>
<a id="trace-38885"></a>
<a id="trace-38956"></a>
<a id="trace-38958"></a>
<a id="trace-38983"></a>
<a id="trace-38985"></a>
<a id="trace-39009"></a>
<a id="trace-39011"></a>
<a id="trace-39043"></a>
<a id="trace-39045"></a>
<a id="trace-39064"></a>
<a id="trace-39066"></a>
- 258.30s–319.30s (×121), actor 0, squad 0 (trace 36987): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 257.95s, trace 36970. Next observer evidence: {'until': 259.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37006}.
<a id="trace-2928"></a>
<a id="trace-3330"></a>
- 297.15s–358.75s (×2), actor 0, squad 1 (events line 2928): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 327, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3330}.
<a id="trace-3081"></a>
- 319.55s–319.55s (×1), actor 0, squad 0 (events line 3081): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-39074"></a>
- 319.55s–319.55s (×1), actor 0, squad 0 (trace 39074): renew committed intent (75 s lifetime). Knowledge: actor memory at 319.55s, trace 39074. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39139}.
<a id="trace-39139"></a>
<a id="trace-39141"></a>
<a id="trace-39160"></a>
<a id="trace-39162"></a>
<a id="trace-39180"></a>
<a id="trace-39182"></a>
<a id="trace-39204"></a>
<a id="trace-39206"></a>
<a id="trace-39243"></a>
<a id="trace-39245"></a>
<a id="trace-39316"></a>
<a id="trace-39318"></a>
<a id="trace-39333"></a>
<a id="trace-39335"></a>
<a id="trace-39353"></a>
<a id="trace-39355"></a>
<a id="trace-39372"></a>
<a id="trace-39374"></a>
<a id="trace-39398"></a>
<a id="trace-39400"></a>
<a id="trace-39480"></a>
<a id="trace-39482"></a>
<a id="trace-39510"></a>
<a id="trace-39512"></a>
<a id="trace-39530"></a>
<a id="trace-39532"></a>
<a id="trace-39551"></a>
<a id="trace-39553"></a>
<a id="trace-39570"></a>
<a id="trace-39572"></a>
<a id="trace-39647"></a>
<a id="trace-39649"></a>
<a id="trace-39672"></a>
<a id="trace-39674"></a>
<a id="trace-39711"></a>
<a id="trace-39713"></a>
<a id="trace-39730"></a>
<a id="trace-39732"></a>
<a id="trace-39751"></a>
<a id="trace-39823"></a>
<a id="trace-39825"></a>
<a id="trace-39844"></a>
<a id="trace-39846"></a>
<a id="trace-39870"></a>
<a id="trace-39872"></a>
<a id="trace-39894"></a>
<a id="trace-39896"></a>
<a id="trace-39924"></a>
<a id="trace-39926"></a>
<a id="trace-40000"></a>
<a id="trace-40002"></a>
<a id="trace-40022"></a>
<a id="trace-40024"></a>
<a id="trace-40043"></a>
<a id="trace-40045"></a>
<a id="trace-40062"></a>
<a id="trace-40064"></a>
<a id="trace-40085"></a>
<a id="trace-40087"></a>
<a id="trace-40163"></a>
<a id="trace-40165"></a>
<a id="trace-40199"></a>
<a id="trace-40201"></a>
<a id="trace-40223"></a>
<a id="trace-40225"></a>
<a id="trace-40243"></a>
<a id="trace-40245"></a>
<a id="trace-40263"></a>
<a id="trace-40265"></a>
<a id="trace-40337"></a>
<a id="trace-40339"></a>
<a id="trace-40363"></a>
<a id="trace-40365"></a>
<a id="trace-40402"></a>
<a id="trace-40404"></a>
<a id="trace-40423"></a>
<a id="trace-40425"></a>
<a id="trace-40444"></a>
<a id="trace-40446"></a>
- 320.30s–359.30s (×79), actor 0, squad 0 (trace 39139): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=0. Knowledge: actor memory at 320.00s, trace 39083. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 39160}.
<a id="trace-40433"></a>
- 358.75s–358.75s (×1), actor 0, squad 1 (trace 40433): renew committed intent (75 s lifetime). Knowledge: actor memory at 358.75s, trace 40433. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

257 matched order/radio deliveries; 500 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.463s; maximum 1.900s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4039: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4041: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4045: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4046: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4047: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4048: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4049: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4050: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4051: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4052: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4053: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4054: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4055: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4056: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4162: estimate 14.05; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4163: estimate 14.05; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4164: estimate 14.05; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 4165: estimate 14.05; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5252: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5257: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5258: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 5260: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 5262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 5263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5264: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5265: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5266: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5267: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5268: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5269: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5270: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5271: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5272: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5273: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 5274: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 5275: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 10914: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 10915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 10916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 10917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 10918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 10919: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 10920: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 10921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 10922: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 10923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 10924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 10925: estimate 15.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 10926: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 10927: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 10928: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 10929: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 10930: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 10931: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 10932: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 10933: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 10934: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 10935: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 10936: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 10937: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 14601: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 14602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 14603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 14604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 14605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 14606: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 14607: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 14608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 14609: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 14610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 14611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 14612: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 14613: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 14614: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 14615: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 14616: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 14617: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 14618: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 14619: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 14620: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 14621: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 14622: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 14623: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 16734: estimate 15.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 16735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 16736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 16737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 16738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 16739: estimate 15.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 16740: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 16741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 16742: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 16743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 16744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 16745: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 16746: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 16747: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 16748: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 16749: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 16750: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 16751: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 16752: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 16753: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 16754: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 16755: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 16756: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 19943: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 19944: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 20459: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 20460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 20461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 20462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 20463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 20464: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 20465: estimate 15.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 20466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 20467: estimate 15.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 20468: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 20469: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 20470: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 20471: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 20472: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 20473: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 20474: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 20475: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 20476: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 20477: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 20478: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 20479: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 20480: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 20481: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 20730: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 20731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 20732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 20733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 20734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 20735: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 20736: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 20737: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 20738: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 20739: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 20740: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 20741: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 20742: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 20743: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 20744: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 20745: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 20746: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 20747: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 20748: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 20749: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 20750: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 20751: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 20752: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 23826: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 23827: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 23828: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 23829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 23830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 23831: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 23832: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 23833: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 23834: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 23835: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 23836: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 23837: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 23838: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 23839: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 23840: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 23841: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 23842: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 23843: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 23844: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 23845: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 23846: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 23847: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 23848: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 23950: estimate 15.27; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 23951: estimate 15.27; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 23952: estimate 15.27; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.75s leader 5, trace 23953: estimate 15.27; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 24146: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 24147: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 24148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 24149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 24150: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 24151: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 24152: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 24153: estimate 15.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 24154: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 24155: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 24156: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 24157: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 24158: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 24159: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 24160: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 24161: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 24162: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 24163: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 24164: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 24165: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 24166: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.20s leader 5, trace 24530: estimate 15.23; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 24622: estimate 15.13; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 24623: estimate 15.13; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 24624: estimate 15.13; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.15s leader 5, trace 24625: estimate 15.13; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 24668: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 24669: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 24670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 24671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 24672: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 24673: estimate 15.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 24674: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 24675: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 24676: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 24677: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 24678: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 24679: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 24680: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 24681: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 24682: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 24683: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 24684: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 24685: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 24686: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 27021: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 27022: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 27023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 27024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 27025: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 27026: estimate 15.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 27027: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 27028: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 27029: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 27030: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 27031: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 27032: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 27033: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 27034: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 27035: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 27036: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 27037: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 27038: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 27039: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 27047: estimate 15.15; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.15s leader 5, trace 27048: estimate 15.15; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 27878: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 27879: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 27880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 27881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 27882: estimate 15.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 27883: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 27884: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 27885: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 27886: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 27887: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 27888: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 27889: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 27890: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 27891: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 27892: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 27893: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 27894: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 86.85s leader 6, trace 28011: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 86.85s leader 6, trace 28012: estimate 15.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 28589: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 28590: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 28591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 28592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 28593: estimate 15.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 28594: estimate 15.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 28595: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 28596: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 28597: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 28598: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 28599: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 28600: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 28601: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 28602: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 28603: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 28604: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 29326: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 29327: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 29328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 29329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 29330: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 29331: estimate 15.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 29332: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 29333: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 29334: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 29335: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 29336: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 29337: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 29338: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 29339: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 29340: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 29341: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 29974: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 29975: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 29976: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 29977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 29978: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 29979: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 29980: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 29981: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 29982: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 29983: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 29984: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 29985: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 29986: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 29987: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 29988: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 29989: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 30171: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 30172: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 30173: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 30174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 30175: estimate 14.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 30176: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 30177: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 30178: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 30179: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 30180: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 30181: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 30182: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 30183: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 30184: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 30185: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 30186: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 30362: estimate 14.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 30363: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 30364: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 30365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 30366: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 30367: estimate 14.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 30368: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 30369: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 30370: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 30371: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 30372: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 30373: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 30374: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 30375: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 30376: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 30377: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 31013: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 31014: estimate 13.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 31015: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 31016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 31017: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 31018: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 31019: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 31020: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 31021: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 31022: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 31023: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 31024: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 31025: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 31026: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 31027: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 31028: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 117.20s leader 6, trace 31137: estimate 14.82; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 117.20s leader 6, trace 31138: estimate 14.82; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 31290: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 31291: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 31292: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 31293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 31294: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 31295: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 31296: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 31297: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 31298: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 31299: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 31300: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 31301: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 31302: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 31303: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 31304: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 31305: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 31482: estimate 14.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 31483: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 31484: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 31485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 31486: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 31487: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 31488: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 31489: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 31490: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 31491: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 31492: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 31493: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 31494: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 31495: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 31496: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 31497: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 31671: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 31672: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 31673: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 31674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 31675: estimate 14.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 31676: estimate 14.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 31677: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 31678: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 31679: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 31680: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 31681: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 31682: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 31683: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 31684: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 31685: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 31686: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 32043: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 32044: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 32045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 32046: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 32047: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 32048: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 32049: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 32050: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 32051: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 32052: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 32053: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 32054: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 32055: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 32056: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 32057: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 32257: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 32258: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 32259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 32260: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 32261: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 32262: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 32263: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 32264: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 32265: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 32266: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 32267: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 32268: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 32269: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 32270: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 32271: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 142.55s leader 6, trace 32389: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 142.55s leader 6, trace 32390: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 32461: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 32462: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 32463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 32464: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 32465: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 32466: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 32467: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 32468: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 32469: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 32470: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 32471: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 32472: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 32473: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 32474: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 32475: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 32712: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 32713: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 32714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 32715: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 32716: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 32717: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 32718: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 32719: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 32720: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 32721: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 32722: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 32723: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 32724: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 32725: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 32726: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 32899: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 32900: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 32901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 32902: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 32903: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 32904: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 32905: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 32906: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 32907: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 32908: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 32909: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 32910: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 32911: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 32912: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 32913: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 33190: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 33191: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 33192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 33193: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 33194: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 33195: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 33196: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 33197: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 33198: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 33199: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 33200: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 33201: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 33202: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 33203: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 33204: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 33395: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 33396: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 33397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 33398: estimate 13.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 33399: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 33400: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 33401: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 33402: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 33403: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 33404: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 33405: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 33406: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 33407: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 33408: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 33409: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 33594: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 33595: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 33596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 33597: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 33598: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 33599: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 33600: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 33601: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 33602: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 33603: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 33604: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 33605: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 33606: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 33607: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 33815: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 33816: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 33817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 33818: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 33819: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 33820: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 33821: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 33822: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 33823: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 33824: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 33825: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 33826: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 33827: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 33828: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.30s leader 0, trace 33887: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.30s leader 0, trace 33888: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 33999: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 34000: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 34001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 34002: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 34003: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 34004: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 34005: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 34006: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 34007: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 34008: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 34009: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 34010: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 34011: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 34012: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 34289: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 34290: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 34291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 34292: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 34293: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 34294: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 34295: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 34296: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 34297: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 34298: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 34299: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 34300: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 34301: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 34302: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 34486: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 34487: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 34488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 34489: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 34490: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 34491: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 34492: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 34493: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 34494: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 34495: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 34496: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 34497: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 34498: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 34499: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 34702: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 34703: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 34704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 34705: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 34706: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 34707: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 34708: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 34709: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 34710: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 34711: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 34712: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 34713: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 34714: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 34715: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.80s leader 0, trace 34853: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.80s leader 0, trace 34854: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 34914: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 34915: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 34916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 34917: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 34918: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 34919: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 34920: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 34921: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 34922: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 34923: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 34924: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 34925: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 34926: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 34927: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 35111: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 35112: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 35113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 35114: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 35115: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 35116: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 35117: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 35118: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 35119: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 35120: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 35121: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 35122: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 35123: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 35124: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 35279: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 35280: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 35281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 35282: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 35283: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 35284: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 35285: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 35286: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 35287: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 35288: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 35289: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 35290: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 35291: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 35292: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 35460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 35461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 35462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 35463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 35464: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 35465: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 35466: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 35467: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 35468: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 35469: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 35470: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 35471: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 35472: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 35473: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 35637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 35638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 35639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 35640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 35641: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 35642: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 35643: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 35644: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 35645: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 35646: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 35647: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 35648: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 35649: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 35650: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 35806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 35807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 35808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 35809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 35810: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 35811: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 35812: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 35813: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 35814: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 35815: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 35816: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 35817: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 35818: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 35819: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 0, trace 35968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 35969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 35970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 35971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 35972: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 35973: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 35974: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 35975: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 35976: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 35977: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 35978: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 35979: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 35980: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 35981: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 0, trace 36149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 36150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 36151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 36152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 36153: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 36154: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 36155: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 36156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 36157: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 36158: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 36159: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 36160: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 36161: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 36162: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.50s leader 0, trace 36218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 0, trace 36331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 36332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 36333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 36334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 36335: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 36336: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 36337: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 36338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 36339: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 36340: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 36341: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 36342: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 36343: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 36344: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 0, trace 36512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 36513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 36514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 36515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 36516: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 36517: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 36518: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 36519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 36520: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 36521: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 36522: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 36523: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 36524: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 36525: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 0, trace 36672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 36673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 36674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 36675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 36676: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 36677: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 36678: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 36679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 36680: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 36681: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 36682: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 36683: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 36684: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 36685: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 0, trace 36842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 36843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 36844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 36845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 36846: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 36847: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 36848: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 36849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 36850: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 36851: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 36852: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 36853: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 36854: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 36855: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 257.95s leader 0, trace 36970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 0, trace 37023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 37024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 37025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 37026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 37027: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 37028: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 37029: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 37030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 37031: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 37032: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 37033: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 37034: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 37035: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 37036: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 0, trace 37200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 37201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 37202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 37203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 37204: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 37205: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 37206: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 37207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 37208: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 37209: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 37210: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 37211: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 37212: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 37213: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 0, trace 37356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 37357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 37358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 37359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 37360: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 37361: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 37362: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 37363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 37364: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 37365: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 37366: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 37367: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 37368: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 37369: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 0, trace 37527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 37528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 37529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 37530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 37531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 37532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 37533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 37534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 37535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 37536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 37537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 37538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 37539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 37540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 0, trace 37699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 37700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 37701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 37702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 37703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 37704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 37705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 37706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 37707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 37708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 37709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 37710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 37711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 37712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 0, trace 37876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 37877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 37878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 37879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 37880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 37881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 37882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 37883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 37884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 37885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 37886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 37887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 37888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 37889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 0, trace 38036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 38037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 38038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 38039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 38040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 38041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 38042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 38043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 38044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 38045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 38046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 38047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 38048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 38049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 0, trace 38209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 38210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 38211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 38212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 38213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 38214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 38215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 38216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 38217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 38218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 38219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 38220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 38221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 38222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 297.15s leader 0, trace 38318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 0, trace 38392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 38393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 38394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 38395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 38396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 38397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 38398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 38399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 38400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 38401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 38402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 38403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 38404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 38405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 0, trace 38575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 38576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 38577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 38578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 38579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 38580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 38581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 38582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 38583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 38584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 38585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 38586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 38587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 38588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 0, trace 38732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 38733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 38734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 38735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 38736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 38737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 38738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 38739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 38740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 38741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 38742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 38743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 38744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 38745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 0, trace 38899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 38900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 38901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 38902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 38903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 38904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 38905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 38906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 38907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 38908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 38909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 38910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 38911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 38912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 319.55s leader 0, trace 39074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 0, trace 39083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 39084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 39085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 39086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 39087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 39088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 39089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 39090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 39091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 39092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 39093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 39094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 39095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 39096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 0, trace 39258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 39259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 39260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 39261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 39262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 39263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 39264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 39265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 39266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 39267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 39268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 39269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 39270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 39271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 0, trace 39416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 39417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 39418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 39419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 39420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 39421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 39422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 39423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 39424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 39425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 39426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 39427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 39428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 39429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 0, trace 39591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 39592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 39593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 39594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 39595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 39596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 39597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 39598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 39599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 39600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 39601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 39602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 39603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 39604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 0, trace 39766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 39767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 39768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 39769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 39770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 39771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 39772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 39773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 39774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 39775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 39776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 39777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 39778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 39779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 0, trace 39943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 39944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 39945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 39946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 39947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 39948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 39949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 39950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 39951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 39952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 39953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 39954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 39955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 39956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 0, trace 40107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 40108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 40109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 40110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 40111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 40112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 40113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 40114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 40115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 40116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 40117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 40118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 40119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 40120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 0, trace 40279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 40280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 40281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 40282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 40283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 40284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 40285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 40286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 40287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 40288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 40289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 40290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 40291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 40292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.75s leader 0, trace 40433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 0, trace 40459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 40460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 40461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 40462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 40463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 40464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 40465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 40466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 40467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 40468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 40469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 40470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 40471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 40472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bram killed in action
- 1: Bren incapacitated
- 1: Soren incapacitated
- 1: Ellis killed in action
- 1: Voss killed in action
- 1: Dane killed in action
- 1: Iven incapacitated
- 1: Reed incapacitated
- 1: Ash killed in action
- 1: Moss killed in action

## Outcome attribution

- 117.20s, evidence 1966: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 118.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31204}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 117.20s, evidence 31137: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.306341 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 118.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31204}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 117.20s, evidence 31138: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.306341 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 118.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31204}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 142.55s, evidence 2073: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25407613489697156, 'next_transition': 32411}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 142.55s, evidence 32389: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.256567 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25407613489697156, 'next_transition': 32411}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 142.55s, evidence 32390: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.256567 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25407613489697156, 'next_transition': 32411}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 175.30s, evidence 2178: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 176.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450160004524348, 'next_transition': 33911}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 175.30s, evidence 2179: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2541}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 197.80s, evidence 2291: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34866}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 197.80s, evidence 34853: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.360942 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34866}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 197.80s, evidence 34854: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.360942 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34866}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 235.50s, evidence 2541: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 265.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 38318}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 257.95s, evidence 2682: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 297.15s, evidence 2928: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 327, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3330}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 319.55s, evidence 3081: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 358.75s, evidence 3330: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
