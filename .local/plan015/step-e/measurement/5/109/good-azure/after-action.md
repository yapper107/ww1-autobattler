# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/5/109/good-azure/battle-109-1789673734999500525`

## Battle summary

**Ember** · 142.7 s · 669 shots.

### Turning points

- 25.5s, squad 4: contact (events line 291). First recorded contact.
- 65.2s, squad 0: help call ([trace 11334](#trace-11334)). No completion observed before termination.
- 83.5s, squad 0: help call ([trace 15240](#trace-15240)). No completion observed before termination.
- 112.2s, squad 0: withdrawal ([trace 16401](#trace-16401)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 48 shots, 8/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 621 shots, 0/8 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 539](#trace-539)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 26.0s, squad 0 chose took cover and returned fire ([trace 2339](#trace-2339)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 538](#trace-538)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149871829554761, 'next_transition': 551}.
- 29.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553126 retreat threshold=0.500000 initiative=delegated ([trace 3316](#trace-3316)). Following evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32571003087451544, 'next_transition': 3393}.

### Communication

143 matched deliveries (mean 0.34s, max 2.05s); 88 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.50s, squad 4, contact, evidence events line 291: First recorded contact; .
- 65.25s, squad 0, help call, evidence 11334: NeedSupport; No completion observed before termination.
- 83.45s, squad 0, help call, evidence 15240: NeedSupport; No completion observed before termination.
- 112.20s, squad 0, withdrawal, evidence 16401: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8365363572983315, 'next_transition': 451}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8365363572983315, 'next_transition': 451}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8365363572983315, 'next_transition': 451}.
<a id="trace-451"></a>
<a id="trace-472"></a>
<a id="trace-498"></a>
<a id="trace-515"></a>
<a id="trace-531"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2300040648473087, 'next_transition': 472}.
<a id="trace-79"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 79): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149871829554761, 'next_transition': 551}.
<a id="trace-538"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 538): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 538. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149871829554761, 'next_transition': 551}.
<a id="trace-539"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 539): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 539. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149871829554761, 'next_transition': 551}.
<a id="trace-551"></a>
<a id="trace-574"></a>
<a id="trace-651"></a>
<a id="trace-670"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 551): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 539. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9150131406057898, 'next_transition': 574}.
<a id="trace-672"></a>
<a id="trace-1010"></a>
<a id="trace-1040"></a>
<a id="trace-1072"></a>
<a id="trace-1122"></a>
<a id="trace-1166"></a>
<a id="trace-1181"></a>
<a id="trace-1200"></a>
<a id="trace-1284"></a>
<a id="trace-1304"></a>
<a id="trace-1319"></a>
<a id="trace-1344"></a>
<a id="trace-1386"></a>
<a id="trace-1404"></a>
<a id="trace-1417"></a>
<a id="trace-1453"></a>
<a id="trace-1530"></a>
<a id="trace-1550"></a>
<a id="trace-1682"></a>
<a id="trace-1861"></a>
<a id="trace-1890"></a>
<a id="trace-1936"></a>
<a id="trace-1969"></a>
<a id="trace-2008"></a>
<a id="trace-2089"></a>
<a id="trace-2110"></a>
<a id="trace-2124"></a>
<a id="trace-2140"></a>
<a id="trace-2164"></a>
<a id="trace-2178"></a>
<a id="trace-2200"></a>
<a id="trace-2209"></a>
<a id="trace-2242"></a>
<a id="trace-2317"></a>
<a id="trace-2328"></a>
<a id="trace-2725"></a>
<a id="trace-2751"></a>
<a id="trace-3168"></a>
<a id="trace-3193"></a>
<a id="trace-3231"></a>
<a id="trace-3288"></a>
<a id="trace-3315"></a>
<a id="trace-3395"></a>
<a id="trace-3404"></a>
<a id="trace-3417"></a>
<a id="trace-3425"></a>
<a id="trace-3441"></a>
<a id="trace-3457"></a>
<a id="trace-3475"></a>
<a id="trace-3491"></a>
<a id="trace-3504"></a>
<a id="trace-3515"></a>
<a id="trace-3587"></a>
<a id="trace-3593"></a>
<a id="trace-6271"></a>
<a id="trace-6290"></a>
<a id="trace-6306"></a>
<a id="trace-6323"></a>
<a id="trace-6338"></a>
<a id="trace-6354"></a>
<a id="trace-6362"></a>
<a id="trace-6442"></a>
<a id="trace-6457"></a>
<a id="trace-6466"></a>
<a id="trace-6766"></a>
<a id="trace-6829"></a>
<a id="trace-6865"></a>
<a id="trace-6892"></a>
<a id="trace-6927"></a>
<a id="trace-6958"></a>
<a id="trace-7037"></a>
<a id="trace-7072"></a>
<a id="trace-7110"></a>
<a id="trace-7138"></a>
<a id="trace-7157"></a>
<a id="trace-7184"></a>
<a id="trace-7209"></a>
<a id="trace-7327"></a>
<a id="trace-7347"></a>
<a id="trace-7358"></a>
<a id="trace-7380"></a>
<a id="trace-10362"></a>
<a id="trace-10426"></a>
<a id="trace-10459"></a>
<a id="trace-10501"></a>
<a id="trace-10588"></a>
<a id="trace-10600"></a>
<a id="trace-10626"></a>
<a id="trace-10690"></a>
<a id="trace-10849"></a>
<a id="trace-10881"></a>
<a id="trace-10927"></a>
<a id="trace-10962"></a>
<a id="trace-10993"></a>
<a id="trace-11101"></a>
<a id="trace-11160"></a>
<a id="trace-11177"></a>
<a id="trace-11192"></a>
<a id="trace-11211"></a>
<a id="trace-11222"></a>
<a id="trace-11232"></a>
<a id="trace-11331"></a>
<a id="trace-11347"></a>
<a id="trace-11814"></a>
<a id="trace-11831"></a>
<a id="trace-11855"></a>
<a id="trace-12245"></a>
<a id="trace-12265"></a>
<a id="trace-12285"></a>
<a id="trace-12391"></a>
<a id="trace-12400"></a>
<a id="trace-12418"></a>
<a id="trace-12429"></a>
<a id="trace-12449"></a>
<a id="trace-12465"></a>
<a id="trace-12483"></a>
<a id="trace-12498"></a>
<a id="trace-14941"></a>
<a id="trace-14951"></a>
<a id="trace-14963"></a>
<a id="trace-14997"></a>
<a id="trace-15010"></a>
<a id="trace-15033"></a>
<a id="trace-15044"></a>
<a id="trace-15115"></a>
<a id="trace-15127"></a>
<a id="trace-15171"></a>
<a id="trace-15184"></a>
<a id="trace-15200"></a>
<a id="trace-15230"></a>
<a id="trace-15252"></a>
<a id="trace-15358"></a>
<a id="trace-15376"></a>
<a id="trace-15394"></a>
<a id="trace-15398"></a>
<a id="trace-15412"></a>
<a id="trace-15423"></a>
<a id="trace-15435"></a>
<a id="trace-15447"></a>
<a id="trace-15512"></a>
<a id="trace-15526"></a>
<a id="trace-15560"></a>
<a id="trace-15581"></a>
<a id="trace-15591"></a>
<a id="trace-15599"></a>
<a id="trace-15691"></a>
<a id="trace-15696"></a>
<a id="trace-15710"></a>
<a id="trace-15716"></a>
<a id="trace-15725"></a>
<a id="trace-15755"></a>
<a id="trace-15838"></a>
<a id="trace-15848"></a>
<a id="trace-15859"></a>
<a id="trace-15870"></a>
<a id="trace-15879"></a>
<a id="trace-15887"></a>
<a id="trace-15902"></a>
<a id="trace-15909"></a>
<a id="trace-15926"></a>
<a id="trace-15935"></a>
<a id="trace-16020"></a>
<a id="trace-16040"></a>
<a id="trace-16053"></a>
<a id="trace-16082"></a>
<a id="trace-16092"></a>
<a id="trace-16103"></a>
<a id="trace-16252"></a>
<a id="trace-16261"></a>
<a id="trace-16328"></a>
<a id="trace-16357"></a>
<a id="trace-16372"></a>
<a id="trace-16380"></a>
<a id="trace-16534"></a>
<a id="trace-16552"></a>
<a id="trace-16566"></a>
<a id="trace-16591"></a>
<a id="trace-16624"></a>
<a id="trace-16737"></a>
<a id="trace-16755"></a>
<a id="trace-16780"></a>
<a id="trace-16784"></a>
<a id="trace-16796"></a>
<a id="trace-16818"></a>
<a id="trace-16826"></a>
<a id="trace-16834"></a>
<a id="trace-16959"></a>
<a id="trace-16983"></a>
<a id="trace-17003"></a>
<a id="trace-17013"></a>
<a id="trace-17021"></a>
<a id="trace-17113"></a>
<a id="trace-17122"></a>
<a id="trace-17128"></a>
<a id="trace-17138"></a>
<a id="trace-17145"></a>
<a id="trace-17160"></a>
<a id="trace-17224"></a>
<a id="trace-17229"></a>
<a id="trace-17238"></a>
<a id="trace-17244"></a>
<a id="trace-17253"></a>
<a id="trace-17256"></a>
<a id="trace-17263"></a>
<a id="trace-17272"></a>
<a id="trace-17279"></a>
<a id="trace-17283"></a>
<a id="trace-17350"></a>
<a id="trace-17356"></a>
<a id="trace-17367"></a>
<a id="trace-17373"></a>
<a id="trace-17380"></a>
<a id="trace-17395"></a>
<a id="trace-17402"></a>
<a id="trace-17407"></a>
<a id="trace-17411"></a>
<a id="trace-17472"></a>
<a id="trace-17477"></a>
<a id="trace-17484"></a>
<a id="trace-17487"></a>
- 5.70s–142.30s (×220), actor 37, squad 4 (trace 672): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 594. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.039375, 'next_transition': 1010}.
<a id="trace-682"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 682): received platoon directive. Knowledge: actor memory at 5.00s, trace 581. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5362626780566356, 'next_transition': 1008}.
<a id="trace-1008"></a>
<a id="trace-1038"></a>
<a id="trace-1070"></a>
<a id="trace-1096"></a>
<a id="trace-1120"></a>
<a id="trace-1164"></a>
<a id="trace-1179"></a>
<a id="trace-1198"></a>
<a id="trace-1282"></a>
<a id="trace-1302"></a>
<a id="trace-1317"></a>
<a id="trace-1342"></a>
<a id="trace-1364"></a>
<a id="trace-1384"></a>
<a id="trace-1402"></a>
<a id="trace-1415"></a>
<a id="trace-1437"></a>
<a id="trace-1451"></a>
<a id="trace-1528"></a>
<a id="trace-1548"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 1008): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 586. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9364528979727438, 'next_transition': 1038}.
<a id="trace-1552"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 1552): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1455. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09392271072402703, 'next_transition': 1680}.
<a id="trace-1553"></a>
- 16.00s–16.00s (×1), actor 0, squad 0 (trace 1553): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1455. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09392271072402703, 'next_transition': 1680}.
<a id="trace-1680"></a>
- 16.25s–16.25s (×1), actor 5, squad 0 (trace 1680): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1460. Next observer evidence: None.
<a id="trace-1686"></a>
- 16.35s–16.35s (×1), actor 0, squad 0 (trace 1686): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 1455. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749680939635305, 'next_transition': 1859}.
<a id="trace-1859"></a>
<a id="trace-1888"></a>
<a id="trace-1910"></a>
<a id="trace-1934"></a>
<a id="trace-1967"></a>
<a id="trace-1993"></a>
<a id="trace-2006"></a>
<a id="trace-2087"></a>
<a id="trace-2108"></a>
<a id="trace-2122"></a>
<a id="trace-2138"></a>
<a id="trace-2162"></a>
<a id="trace-2176"></a>
<a id="trace-2198"></a>
<a id="trace-2207"></a>
<a id="trace-2227"></a>
<a id="trace-2240"></a>
<a id="trace-2315"></a>
<a id="trace-2326"></a>
- 16.75s–25.75s (×19), actor 5, squad 0 (trace 1859): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1460. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.73781676353583, 'next_transition': 1888}.
<a id="trace-2339"></a>
- 26.00s–26.00s (×1), actor 0, squad 0 (trace 2339): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2245. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18165043743830595, 'next_transition': 2723}.
<a id="trace-2340"></a>
- 26.00s–26.00s (×1), actor 0, squad 0 (trace 2340): bounding overwatch. Knowledge: actor memory at 25.00s, trace 2245. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18165043743830595, 'next_transition': 2723}.
<a id="trace-2341"></a>
- 26.00s–26.00s (×1), actor 0, squad 0 (trace 2341): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2245. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18165043743830595, 'next_transition': 2723}.
<a id="trace-2723"></a>
<a id="trace-2749"></a>
- 26.25s–26.75s (×2), actor 5, squad 0 (trace 2723): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2250. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1934134290653895, 'next_transition': 2749}.
<a id="trace-2754"></a>
- 27.00s–27.00s (×1), actor 0, squad 0 (trace 2754): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2245. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15000982858617573, 'next_transition': 3166}.
<a id="trace-3166"></a>
<a id="trace-3191"></a>
<a id="trace-3229"></a>
<a id="trace-3264"></a>
<a id="trace-3286"></a>
<a id="trace-3313"></a>
- 27.25s–29.75s (×6), actor 5, squad 0 (trace 3166): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2250. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39873889356865255, 'next_transition': 3191}.
<a id="trace-385"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 385): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3316"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 3316): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553126 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 3316. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32571003087451544, 'next_transition': 3393}.
<a id="trace-3317"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 3317): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553126 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 3317. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32571003087451544, 'next_transition': 3393}.
<a id="trace-3393"></a>
<a id="trace-3402"></a>
<a id="trace-3415"></a>
<a id="trace-3423"></a>
<a id="trace-3439"></a>
- 30.25s–32.25s (×5), actor 5, squad 0 (trace 3393): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3326. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3257094401644043, 'next_transition': 3402}.
<a id="trace-3442"></a>
- 32.35s–32.35s (×1), actor 1, squad 0 (trace 3442): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 3322. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32571145378200433, 'next_transition': 3455}.
<a id="trace-3455"></a>
<a id="trace-3473"></a>
<a id="trace-3489"></a>
<a id="trace-3502"></a>
<a id="trace-3513"></a>
<a id="trace-3585"></a>
<a id="trace-3591"></a>
- 32.75s–35.75s (×7), actor 5, squad 0 (trace 3455): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3326. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5264623048010831, 'next_transition': 3473}.
<a id="trace-3595"></a>
- 35.80s–35.80s (×1), actor 1, squad 0 (trace 3595): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 3518. Next observer evidence: {'until': 36, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6239}.
<a id="trace-6076"></a>
- 35.80s–35.80s (×1), actor 1, squad 0 (trace 6076): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 3518. Next observer evidence: {'until': 36, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6239}.
<a id="trace-6077"></a>
- 35.80s–35.80s (×1), actor 1, squad 0 (trace 6077): MoveTactically. Knowledge: actor memory at 35.00s, trace 3518. Next observer evidence: {'until': 36, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6239}.
<a id="trace-6078"></a>
- 35.80s–35.80s (×1), actor 1, squad 0 (trace 6078): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 3518. Next observer evidence: {'until': 36, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6239}.
<a id="trace-6239"></a>
- 36.05s–36.05s (×1), actor 5, squad 0 (trace 6239): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 36.05s, trace 6239. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.041804764131395736, 'next_transition': 6250}.
<a id="trace-6250"></a>
<a id="trace-6269"></a>
<a id="trace-6288"></a>
<a id="trace-6304"></a>
<a id="trace-6321"></a>
<a id="trace-6336"></a>
<a id="trace-6352"></a>
<a id="trace-6360"></a>
<a id="trace-6440"></a>
<a id="trace-6455"></a>
<a id="trace-6464"></a>
- 36.25s–41.25s (×11), actor 5, squad 0 (trace 6250): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 36.05s, trace 6239. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17687527530517744, 'next_transition': 6269}.
<a id="trace-6470"></a>
- 41.50s–41.50s (×1), actor 1, squad 0 (trace 6470): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 6367. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.502459728144842, 'next_transition': 6764}.
<a id="trace-6471"></a>
- 41.50s–41.50s (×1), actor 1, squad 0 (trace 6471): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 6367. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.502459728144842, 'next_transition': 6764}.
<a id="trace-6764"></a>
<a id="trace-6792"></a>
<a id="trace-6827"></a>
<a id="trace-6863"></a>
<a id="trace-6890"></a>
<a id="trace-6925"></a>
<a id="trace-6956"></a>
<a id="trace-7035"></a>
- 41.75s–45.25s (×8), actor 5, squad 0 (trace 6764): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6371. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2954222552180068, 'next_transition': 6792}.
<a id="trace-7041"></a>
- 45.30s–45.30s (×1), actor 1, squad 0 (trace 7041): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 6963. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6302380284869449, 'next_transition': 7070}.
<a id="trace-7070"></a>
<a id="trace-7108"></a>
<a id="trace-7136"></a>
<a id="trace-7155"></a>
<a id="trace-7182"></a>
<a id="trace-7207"></a>
<a id="trace-7226"></a>
<a id="trace-7239"></a>
<a id="trace-7251"></a>
<a id="trace-7325"></a>
<a id="trace-7345"></a>
<a id="trace-7356"></a>
<a id="trace-7378"></a>
- 45.75s–51.75s (×13), actor 5, squad 0 (trace 7070): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 6967. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7653280689132052, 'next_transition': 7108}.
<a id="trace-7395"></a>
- 52.05s–52.05s (×1), actor 1, squad 0 (trace 7395): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 7253. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022676560234477998, 'next_transition': 10360}.
<a id="trace-9961"></a>
- 52.05s–52.05s (×1), actor 1, squad 0 (trace 9961): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 50.00s, trace 7253. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022676560234477998, 'next_transition': 10360}.
<a id="trace-9962"></a>
- 52.05s–52.05s (×1), actor 1, squad 0 (trace 9962): MoveTactically. Knowledge: actor memory at 50.00s, trace 7253. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022676560234477998, 'next_transition': 10360}.
<a id="trace-9963"></a>
- 52.05s–52.05s (×1), actor 1, squad 0 (trace 9963): contact cover complete: assessment resumes closure. Knowledge: actor memory at 50.00s, trace 7253. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.022676560234477998, 'next_transition': 10360}.
<a id="trace-10360"></a>
<a id="trace-10391"></a>
<a id="trace-10424"></a>
<a id="trace-10457"></a>
<a id="trace-10488"></a>
<a id="trace-10499"></a>
<a id="trace-10586"></a>
<a id="trace-10598"></a>
<a id="trace-10624"></a>
<a id="trace-10661"></a>
<a id="trace-10688"></a>
- 52.25s–57.25s (×11), actor 5, squad 0 (trace 10360): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7257. Next observer evidence: {'until': 52.6, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0002185714285715282, 'next_transition': 10391}.
<a id="trace-10693"></a>
- 57.30s–57.30s (×1), actor 1, squad 0 (trace 10693): superiority established (8 s hysteresis). Knowledge: actor memory at 55.00s, trace 10509. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7778741770669289, 'next_transition': 10847}.
<a id="trace-10847"></a>
<a id="trace-10879"></a>
<a id="trace-10925"></a>
<a id="trace-10960"></a>
<a id="trace-10991"></a>
<a id="trace-11099"></a>
<a id="trace-11138"></a>
<a id="trace-11158"></a>
<a id="trace-11175"></a>
<a id="trace-11190"></a>
<a id="trace-11209"></a>
<a id="trace-11220"></a>
<a id="trace-11230"></a>
<a id="trace-11245"></a>
<a id="trace-11253"></a>
<a id="trace-11329"></a>
- 57.75s–65.25s (×16), actor 5, squad 0 (trace 10847): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 10513. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6249044174754361, 'next_transition': 10879}.
<a id="trace-11332"></a>
- 65.25s–65.25s (×1), actor 1, squad 0 (trace 11332): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 65.00s, trace 11262. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6176058431443886, 'next_transition': 11345}.
<a id="trace-11334"></a>
- 65.25s–65.25s (×1), actor 1, squad 0 (trace 11334): NeedSupport. Knowledge: actor memory at 65.00s, trace 11262. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6176058431443886, 'next_transition': 11345}.
<a id="trace-11345"></a>
- 65.75s–65.75s (×1), actor 5, squad 0 (trace 11345): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 11265. Next observer evidence: {'until': 65.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3109222551220063, 'next_transition': 11351}.
<a id="trace-11351"></a>
- 65.80s–65.80s (×1), actor 1, squad 0 (trace 11351): Reorganise: completed/failed drill. Knowledge: actor memory at 65.00s, trace 11262. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6706866464016209, 'next_transition': 11812}.
<a id="trace-11356"></a>
- 65.80s–65.80s (×1), actor 1, squad 0 (trace 11356): MoveTactically. Knowledge: actor memory at 65.00s, trace 11262. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6706866464016209, 'next_transition': 11812}.
<a id="trace-11357"></a>
- 65.80s–65.80s (×1), actor 1, squad 0 (trace 11357): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 65.00s, trace 11262. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6706866464016209, 'next_transition': 11812}.
<a id="trace-11812"></a>
<a id="trace-11829"></a>
<a id="trace-11846"></a>
<a id="trace-11853"></a>
<a id="trace-11867"></a>
- 66.25s–68.25s (×5), actor 5, squad 0 (trace 11812): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 11265. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.755891577472698, 'next_transition': 11829}.
<a id="trace-11874"></a>
- 68.45s–68.45s (×1), actor 1, squad 0 (trace 11874): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 11262. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6164672982743088, 'next_transition': 12243}.
<a id="trace-11875"></a>
- 68.45s–68.45s (×1), actor 1, squad 0 (trace 11875): superiority lost (8 s hysteresis). Knowledge: actor memory at 65.00s, trace 11262. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6164672982743088, 'next_transition': 12243}.
<a id="trace-12243"></a>
<a id="trace-12263"></a>
<a id="trace-12283"></a>
<a id="trace-12353"></a>
<a id="trace-12371"></a>
<a id="trace-12389"></a>
<a id="trace-12398"></a>
- 68.75s–71.75s (×7), actor 5, squad 0 (trace 12243): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 11265. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.859379702084952, 'next_transition': 12263}.
<a id="trace-12405"></a>
- 72.05s–72.05s (×1), actor 5, squad 0 (trace 12405): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 72.05s, trace 12405. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36941354360811873, 'next_transition': 12411}.
<a id="trace-12411"></a>
- 72.20s–72.20s (×1), actor 1, squad 0 (trace 12411): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 70.00s, trace 12288. Next observer evidence: None.
<a id="trace-12416"></a>
<a id="trace-12427"></a>
<a id="trace-12447"></a>
<a id="trace-12463"></a>
<a id="trace-12481"></a>
<a id="trace-12496"></a>
- 72.25s–74.75s (×6), actor 5, squad 0 (trace 12416): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 72.05s, trace 12405. Next observer evidence: {'until': 72.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7192939396964959, 'next_transition': 12427}.
<a id="trace-12516"></a>
- 75.00s–75.00s (×1), actor 1, squad 0 (trace 12516): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 12502. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10513326079377902, 'next_transition': 14939}.
<a id="trace-14748"></a>
- 75.00s–75.00s (×1), actor 1, squad 0 (trace 14748): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 75.00s, trace 12502. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10513326079377902, 'next_transition': 14939}.
<a id="trace-14749"></a>
- 75.00s–75.00s (×1), actor 1, squad 0 (trace 14749): MoveTactically. Knowledge: actor memory at 75.00s, trace 12502. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10513326079377902, 'next_transition': 14939}.
<a id="trace-14750"></a>
- 75.00s–75.00s (×1), actor 1, squad 0 (trace 14750): contact cover complete: assessment resumes closure. Knowledge: actor memory at 75.00s, trace 12502. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10513326079377902, 'next_transition': 14939}.
<a id="trace-14882"></a>
- 75.00s–75.00s (×1), actor 1, squad 0 (trace 14882): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 75.00s, trace 12502. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10513326079377902, 'next_transition': 14939}.
<a id="trace-14939"></a>
<a id="trace-14949"></a>
<a id="trace-14961"></a>
<a id="trace-14972"></a>
<a id="trace-14986"></a>
<a id="trace-14995"></a>
<a id="trace-15008"></a>
<a id="trace-15018"></a>
- 75.25s–78.75s (×8), actor 5, squad 0 (trace 14939): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 12505. Next observer evidence: {'until': 75.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.14305704870435462, 'next_transition': 14949}.
<a id="trace-15023"></a>
- 78.95s–78.95s (×1), actor 1, squad 0 (trace 15023): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 12502. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14672517725538953, 'next_transition': 15031}.
<a id="trace-15024"></a>
- 78.95s–78.95s (×1), actor 1, squad 0 (trace 15024): ; retain held slots. Knowledge: actor memory at 75.00s, trace 12502. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14672517725538953, 'next_transition': 15031}.
<a id="trace-15031"></a>
<a id="trace-15042"></a>
<a id="trace-15113"></a>
<a id="trace-15125"></a>
<a id="trace-15155"></a>
<a id="trace-15169"></a>
<a id="trace-15182"></a>
<a id="trace-15198"></a>
<a id="trace-15228"></a>
- 79.25s–83.25s (×9), actor 5, squad 0 (trace 15031): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 12505. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3317931252683934, 'next_transition': 15042}.
<a id="trace-15240"></a>
- 83.45s–83.45s (×1), actor 1, squad 0 (trace 15240): NeedSupport. Knowledge: actor memory at 80.00s, trace 15045. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1645992023618678, 'next_transition': 15250}.
<a id="trace-15250"></a>
<a id="trace-15268"></a>
<a id="trace-15282"></a>
<a id="trace-15356"></a>
<a id="trace-15367"></a>
<a id="trace-15374"></a>
<a id="trace-15383"></a>
<a id="trace-15392"></a>
<a id="trace-15396"></a>
<a id="trace-15410"></a>
<a id="trace-15421"></a>
<a id="trace-15433"></a>
<a id="trace-15445"></a>
<a id="trace-15510"></a>
<a id="trace-15516"></a>
- 83.75s–90.75s (×15), actor 5, squad 0 (trace 15250): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 15048. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4814992921588413, 'next_transition': 15268}.
<a id="trace-1398"></a>
- 90.95s–90.95s (×1), actor 5, squad 0 (events line 1398): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15519"></a>
- 90.95s–90.95s (×1), actor 5, squad 0 (trace 15519): renew committed intent (75 s lifetime). Knowledge: actor memory at 90.95s, trace 15519. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15204173374439003, 'next_transition': 15524}.
<a id="trace-15524"></a>
<a id="trace-15529"></a>
<a id="trace-15539"></a>
<a id="trace-15543"></a>
<a id="trace-15558"></a>
<a id="trace-15579"></a>
<a id="trace-15589"></a>
<a id="trace-15597"></a>
<a id="trace-15671"></a>
<a id="trace-15689"></a>
<a id="trace-15694"></a>
<a id="trace-15708"></a>
<a id="trace-15714"></a>
<a id="trace-15723"></a>
<a id="trace-15741"></a>
<a id="trace-15753"></a>
<a id="trace-15765"></a>
<a id="trace-15836"></a>
<a id="trace-15846"></a>
<a id="trace-15857"></a>
<a id="trace-15868"></a>
<a id="trace-15877"></a>
<a id="trace-15885"></a>
<a id="trace-15900"></a>
<a id="trace-15907"></a>
<a id="trace-15924"></a>
<a id="trace-15933"></a>
<a id="trace-16007"></a>
<a id="trace-16018"></a>
<a id="trace-16038"></a>
<a id="trace-16051"></a>
<a id="trace-16061"></a>
<a id="trace-16080"></a>
<a id="trace-16090"></a>
<a id="trace-16101"></a>
- 91.25s–108.75s (×35), actor 5, squad 0 (trace 15524): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.95s, trace 15519. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14349496593957575, 'next_transition': 15529}.
<a id="trace-16104"></a>
- 108.75s–108.75s (×1), actor 3, squad 0 (trace 16104): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 105.00s, trace 15943. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3500020288297156, 'next_transition': 16106}.
<a id="trace-16106"></a>
- 108.80s–108.80s (×1), actor 3, squad 0 (trace 16106): Reorganise: completed/failed drill. Knowledge: actor memory at 105.00s, trace 15943. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.717299656320103, 'next_transition': 16250}.
<a id="trace-16108"></a>
- 108.80s–108.80s (×1), actor 3, squad 0 (trace 16108): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 15943. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.717299656320103, 'next_transition': 16250}.
<a id="trace-16109"></a>
- 108.80s–108.80s (×1), actor 3, squad 0 (trace 16109): Reorganise complete: known contact. Knowledge: actor memory at 105.00s, trace 15943. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.717299656320103, 'next_transition': 16250}.
<a id="trace-16250"></a>
<a id="trace-16259"></a>
<a id="trace-16326"></a>
<a id="trace-16355"></a>
<a id="trace-16370"></a>
<a id="trace-16378"></a>
- 109.25s–111.75s (×6), actor 5, squad 0 (trace 16250): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 15945. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9436931150149556, 'next_transition': 16259}.
<a id="trace-16401"></a>
- 112.20s–112.20s (×1), actor 3, squad 0 (trace 16401): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 110.00s, trace 16263. Next observer evidence: None.
<a id="trace-16402"></a>
- 112.20s–112.20s (×1), actor 3, squad 0 (trace 16402): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 16263. Next observer evidence: None.
<a id="trace-16532"></a>
<a id="trace-16550"></a>
<a id="trace-16564"></a>
<a id="trace-16589"></a>
<a id="trace-16622"></a>
<a id="trace-16653"></a>
<a id="trace-16734"></a>
<a id="trace-16777"></a>
<a id="trace-16793"></a>
<a id="trace-16806"></a>
<a id="trace-16823"></a>
- 112.25s–119.25s (×11), actor 5, squad 0 (trace 16532): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 16264. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16550}.
<a id="trace-16837"></a>
- 119.85s–119.85s (×1), actor 3, squad 0 (trace 16837): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 115.00s, trace 16665. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2866150000000003, 'next_transition': 16956}.
<a id="trace-16838"></a>
- 119.85s–119.85s (×1), actor 3, squad 0 (trace 16838): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 115.00s, trace 16665. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2866150000000003, 'next_transition': 16956}.
<a id="trace-16956"></a>
<a id="trace-16973"></a>
<a id="trace-16985"></a>
<a id="trace-17000"></a>
<a id="trace-17018"></a>
<a id="trace-17087"></a>
<a id="trace-17104"></a>
<a id="trace-17119"></a>
<a id="trace-17135"></a>
<a id="trace-17154"></a>
<a id="trace-17221"></a>
<a id="trace-17235"></a>
<a id="trace-17250"></a>
<a id="trace-17260"></a>
<a id="trace-17276"></a>
<a id="trace-17347"></a>
<a id="trace-17364"></a>
<a id="trace-17377"></a>
- 120.25s–137.30s (×18), actor 5, squad 0 (trace 16956): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 16893. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16973}.

## Net delivery

143 matched order/radio deliveries; 88 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.335s; maximum 2.050s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 3316: estimate 9.35; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 3317: estimate 9.35; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3326: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3327: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3329: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3330: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3331: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3332: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3333: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3334: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3335: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3336: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3522: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3523: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3525: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3526: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3527: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3528: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3529: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3530: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3531: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3532: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 36.05s leader 5, trace 6239: estimate 9.21; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6367: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6368: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6371: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6372: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6373: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6374: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6375: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6376: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6377: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6378: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6379: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6380: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6381: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6963: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6964: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6967: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6968: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6969: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6970: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6971: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6972: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6973: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6974: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6975: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6976: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6977: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7253: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7254: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7257: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7258: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7259: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7260: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7261: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7262: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7263: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7264: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7265: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7266: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7267: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 10509: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 10510: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 10511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10513: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10514: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10515: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10516: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10517: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10518: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10519: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10520: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10521: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10522: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10523: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 11009: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 11010: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 11011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11013: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11014: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11015: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11016: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11017: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11018: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11019: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11020: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11021: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11022: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11023: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 11262: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 11263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11265: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11266: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11267: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11268: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11269: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11270: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11271: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11272: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11273: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11274: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11275: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 12288: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 12289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12291: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12292: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12293: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12294: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 12295: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12296: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12297: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12298: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12299: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 12300: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.05s leader 5, trace 12405: estimate 9.76; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 12502: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 12503: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 12504: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 12505: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 12506: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 12507: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 12508: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 12509: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 12510: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 12511: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 12512: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 12513: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 12514: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 15045: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 15046: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 15047: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 15048: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 15049: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 15050: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 15051: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 15052: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 15053: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 15054: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 15055: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 15056: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 15057: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 15285: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 15286: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 15287: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 15288: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 15289: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 15290: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 15291: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 15292: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 15293: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 15294: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 15295: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 15296: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 15297: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 15448: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 15449: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 15450: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 15451: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 15452: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 15453: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 15454: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 15455: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 15456: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 15457: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 15458: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 15459: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.95s leader 5, trace 15519: estimate 9.66; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 15602: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 15603: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 15604: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 15605: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 15606: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 15607: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 15608: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 15609: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 15610: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 15611: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 15612: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 15613: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 15769: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15770: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 15771: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 15772: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 15773: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15774: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15775: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15776: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15777: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15778: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15779: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 15780: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 15943: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15944: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15945: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15946: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15947: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15948: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15949: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15950: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15951: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15952: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15953: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15954: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 16263: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 16264: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 16265: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16266: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16267: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16268: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16269: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16270: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16271: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16272: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 16273: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 16665: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16666: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16667: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16668: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16669: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16670: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16671: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16672: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16673: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16674: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 16892: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16893: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16894: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16895: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16896: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16897: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16898: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16899: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16900: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16901: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 17028: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 17029: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17030: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17031: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17032: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17033: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17034: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17035: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17036: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17037: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 17162: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 17163: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 17164: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 17165: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 17166: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 17167: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 17168: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 17169: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 17170: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 17171: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 17285: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 17286: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 17287: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17288: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 17289: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17290: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 17291: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17292: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17293: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 17294: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 17413: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17414: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17415: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17416: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17417: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17418: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17419: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17420: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17421: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Soren incapacitated
- 1: Reed killed in action
- 1: Rook incapacitated
- 1: Tern killed in action
- 1: Moss incapacitated
- 1: Ash killed in action
- 1: Iven killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
