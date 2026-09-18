# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/16/107/good-ember/battle-107-1789673991189313070`

## Battle summary

**Ember** · 123.7 s · 265 shots.

### Turning points

- 26.4s, squad 4: contact (events line 289). First recorded contact.
- 46.8s, squad 0: help call ([trace 8441](#trace-8441)). No completion observed before termination.
- 55.1s, squad 0: withdrawal ([trace 10457](#trace-10457)). 71.7s, squad 0: broke contact.
- 55.1s, squad 0: help call ([trace 10907](#trace-10907)). No completion observed before termination.
- 71.7s, squad 0: withdrawal ([trace 11601](#trace-11601)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 32 shots, 8/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 233 shots, 0/8 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 973](#trace-973)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 27.1s, squad 0 chose took cover and returned fire ([trace 2272](#trace-2272)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 972](#trace-972)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 987}.
- 42.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=4.312689 retreat threshold=0.220000 initiative=requires intent ([trace 5124](#trace-5124)). Following evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18323659736541936, 'next_transition': 524}.

### Communication

108 matched deliveries (mean 0.55s, max 5.40s); 59 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 26.45s, squad 4, contact, evidence events line 289: First recorded contact; .
- 46.80s, squad 0, help call, evidence 8441: NeedSupport; No completion observed before termination.
- 55.10s, squad 0, withdrawal, evidence 10457: BreakContact: believed ratio at least two without superiority; 71.7s, squad 0: broke contact.
- 55.10s, squad 0, help call, evidence 10907: NeedSupport; No completion observed before termination.
- 71.70s, squad 0, withdrawal, evidence 11601: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.947643064591402, 'next_transition': 655}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.947643064591402, 'next_transition': 655}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.947643064591402, 'next_transition': 655}.
<a id="trace-444"></a>
<a id="trace-464"></a>
<a id="trace-485"></a>
<a id="trace-507"></a>
<a id="trace-521"></a>
<a id="trace-540"></a>
<a id="trace-562"></a>
<a id="trace-657"></a>
<a id="trace-680"></a>
<a id="trace-704"></a>
<a id="trace-720"></a>
<a id="trace-745"></a>
<a id="trace-772"></a>
<a id="trace-794"></a>
<a id="trace-812"></a>
<a id="trace-822"></a>
<a id="trace-907"></a>
<a id="trace-917"></a>
<a id="trace-931"></a>
<a id="trace-947"></a>
<a id="trace-971"></a>
<a id="trace-989"></a>
<a id="trace-1475"></a>
<a id="trace-1496"></a>
<a id="trace-1527"></a>
<a id="trace-1543"></a>
<a id="trace-1622"></a>
<a id="trace-1651"></a>
<a id="trace-1672"></a>
<a id="trace-1688"></a>
<a id="trace-1698"></a>
<a id="trace-1712"></a>
<a id="trace-1733"></a>
<a id="trace-1748"></a>
<a id="trace-1767"></a>
<a id="trace-1781"></a>
<a id="trace-1862"></a>
<a id="trace-1882"></a>
<a id="trace-1903"></a>
<a id="trace-1912"></a>
<a id="trace-1937"></a>
<a id="trace-1946"></a>
<a id="trace-1960"></a>
<a id="trace-2085"></a>
<a id="trace-2104"></a>
<a id="trace-2124"></a>
<a id="trace-2202"></a>
<a id="trace-2214"></a>
<a id="trace-2246"></a>
<a id="trace-2256"></a>
<a id="trace-3035"></a>
<a id="trace-3050"></a>
<a id="trace-3857"></a>
<a id="trace-3890"></a>
<a id="trace-3906"></a>
<a id="trace-3922"></a>
<a id="trace-4012"></a>
<a id="trace-4019"></a>
<a id="trace-4028"></a>
<a id="trace-4034"></a>
<a id="trace-4046"></a>
<a id="trace-4065"></a>
<a id="trace-4074"></a>
<a id="trace-4087"></a>
<a id="trace-4101"></a>
<a id="trace-4108"></a>
<a id="trace-4178"></a>
<a id="trace-4181"></a>
<a id="trace-4194"></a>
<a id="trace-4207"></a>
<a id="trace-4218"></a>
<a id="trace-4227"></a>
<a id="trace-4245"></a>
<a id="trace-4849"></a>
<a id="trace-4859"></a>
<a id="trace-4878"></a>
<a id="trace-4963"></a>
<a id="trace-4991"></a>
<a id="trace-5026"></a>
<a id="trace-5054"></a>
<a id="trace-5087"></a>
<a id="trace-5120"></a>
<a id="trace-5170"></a>
<a id="trace-5217"></a>
<a id="trace-5266"></a>
<a id="trace-5312"></a>
<a id="trace-8137"></a>
<a id="trace-8176"></a>
<a id="trace-8235"></a>
<a id="trace-8437"></a>
<a id="trace-8945"></a>
<a id="trace-8973"></a>
<a id="trace-9030"></a>
<a id="trace-9570"></a>
<a id="trace-9584"></a>
<a id="trace-9610"></a>
<a id="trace-9713"></a>
<a id="trace-9729"></a>
<a id="trace-9745"></a>
<a id="trace-10346"></a>
<a id="trace-10369"></a>
<a id="trace-10392"></a>
<a id="trace-10397"></a>
<a id="trace-10411"></a>
<a id="trace-10422"></a>
<a id="trace-10441"></a>
<a id="trace-10972"></a>
<a id="trace-10986"></a>
<a id="trace-11001"></a>
<a id="trace-11026"></a>
<a id="trace-11051"></a>
<a id="trace-11060"></a>
<a id="trace-11077"></a>
<a id="trace-11086"></a>
<a id="trace-11093"></a>
<a id="trace-11097"></a>
<a id="trace-11172"></a>
<a id="trace-11188"></a>
<a id="trace-11200"></a>
<a id="trace-11211"></a>
<a id="trace-11227"></a>
<a id="trace-11237"></a>
<a id="trace-11245"></a>
<a id="trace-11255"></a>
<a id="trace-11267"></a>
<a id="trace-11278"></a>
<a id="trace-11350"></a>
<a id="trace-11363"></a>
<a id="trace-11380"></a>
<a id="trace-11406"></a>
<a id="trace-11426"></a>
<a id="trace-11441"></a>
<a id="trace-11464"></a>
<a id="trace-11479"></a>
<a id="trace-11494"></a>
<a id="trace-11502"></a>
<a id="trace-11576"></a>
<a id="trace-11586"></a>
<a id="trace-11592"></a>
<a id="trace-11699"></a>
<a id="trace-11714"></a>
<a id="trace-11723"></a>
<a id="trace-11736"></a>
<a id="trace-11745"></a>
<a id="trace-11755"></a>
<a id="trace-11772"></a>
<a id="trace-11840"></a>
<a id="trace-11846"></a>
<a id="trace-11860"></a>
<a id="trace-11867"></a>
<a id="trace-11875"></a>
<a id="trace-11885"></a>
<a id="trace-11892"></a>
<a id="trace-11899"></a>
<a id="trace-11908"></a>
<a id="trace-11915"></a>
<a id="trace-11984"></a>
<a id="trace-11992"></a>
<a id="trace-12003"></a>
<a id="trace-12010"></a>
<a id="trace-12018"></a>
<a id="trace-12028"></a>
<a id="trace-12039"></a>
<a id="trace-12049"></a>
<a id="trace-12060"></a>
<a id="trace-12071"></a>
<a id="trace-12142"></a>
<a id="trace-12149"></a>
<a id="trace-12164"></a>
<a id="trace-12175"></a>
<a id="trace-12189"></a>
<a id="trace-12202"></a>
<a id="trace-12221"></a>
<a id="trace-12230"></a>
<a id="trace-12241"></a>
<a id="trace-12258"></a>
<a id="trace-12329"></a>
<a id="trace-12340"></a>
<a id="trace-12353"></a>
<a id="trace-12364"></a>
<a id="trace-12378"></a>
<a id="trace-12383"></a>
<a id="trace-12395"></a>
<a id="trace-12405"></a>
<a id="trace-12413"></a>
<a id="trace-12425"></a>
<a id="trace-12489"></a>
<a id="trace-12495"></a>
<a id="trace-12502"></a>
<a id="trace-12509"></a>
<a id="trace-12515"></a>
<a id="trace-12520"></a>
<a id="trace-12527"></a>
<a id="trace-12533"></a>
<a id="trace-12541"></a>
<a id="trace-12549"></a>
<a id="trace-12613"></a>
<a id="trace-12619"></a>
<a id="trace-12623"></a>
<a id="trace-12627"></a>
<a id="trace-12631"></a>
<a id="trace-12633"></a>
<a id="trace-12639"></a>
<a id="trace-12644"></a>
<a id="trace-12649"></a>
<a id="trace-12655"></a>
<a id="trace-12716"></a>
<a id="trace-12721"></a>
<a id="trace-12725"></a>
<a id="trace-12730"></a>
<a id="trace-12735"></a>
<a id="trace-12738"></a>
<a id="trace-12744"></a>
<a id="trace-12749"></a>
<a id="trace-12754"></a>
<a id="trace-12758"></a>
<a id="trace-12819"></a>
<a id="trace-12824"></a>
<a id="trace-12830"></a>
<a id="trace-12834"></a>
<a id="trace-12839"></a>
<a id="trace-12842"></a>
<a id="trace-12849"></a>
<a id="trace-12854"></a>
<a id="trace-12858"></a>
<a id="trace-12863"></a>
<a id="trace-12926"></a>
<a id="trace-12930"></a>
<a id="trace-12938"></a>
<a id="trace-12945"></a>
<a id="trace-12951"></a>
<a id="trace-12957"></a>
<a id="trace-12962"></a>
<a id="trace-12965"></a>
<a id="trace-12968"></a>
<a id="trace-12972"></a>
<a id="trace-13033"></a>
<a id="trace-13038"></a>
<a id="trace-13043"></a>
<a id="trace-13051"></a>
<a id="trace-13058"></a>
<a id="trace-13062"></a>
<a id="trace-13069"></a>
- 1.60s–123.25s (×243), actor 37, squad 4 (trace 444): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46069156099591013, 'next_transition': 464}.
<a id="trace-655"></a>
<a id="trace-718"></a>
<a id="trace-743"></a>
<a id="trace-770"></a>
<a id="trace-792"></a>
<a id="trace-820"></a>
<a id="trace-905"></a>
<a id="trace-915"></a>
<a id="trace-929"></a>
<a id="trace-945"></a>
<a id="trace-969"></a>
- 5.70s–12.20s (×11), actor 5, squad 0 (trace 655): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 574. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.648747092458154, 'next_transition': 718}.
<a id="trace-145"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 145): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 987}.
<a id="trace-972"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 972): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 972. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 987}.
<a id="trace-973"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 973): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 973. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 987}.
<a id="trace-987"></a>
- 12.70s–12.70s (×1), actor 5, squad 0 (trace 987): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 973. Next observer evidence: None.
<a id="trace-992"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 992): traveling overwatch. Knowledge: actor memory at 10.00s, trace 827. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725097581267499, 'next_transition': 1473}.
<a id="trace-993"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 993): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 827. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725097581267499, 'next_transition': 1473}.
<a id="trace-1473"></a>
<a id="trace-1494"></a>
<a id="trace-1620"></a>
<a id="trace-1670"></a>
<a id="trace-1710"></a>
<a id="trace-1746"></a>
<a id="trace-1765"></a>
<a id="trace-1779"></a>
<a id="trace-1860"></a>
<a id="trace-1880"></a>
<a id="trace-1910"></a>
<a id="trace-1935"></a>
<a id="trace-1944"></a>
<a id="trace-1958"></a>
- 13.20s–23.25s (×14), actor 5, squad 0 (trace 1473): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 973. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499814012347793, 'next_transition': 1494}.
<a id="trace-1961"></a>
- 23.25s–23.25s (×1), actor 0, squad 0 (trace 1961): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1787. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2083}.
<a id="trace-2083"></a>
<a id="trace-2102"></a>
<a id="trace-2200"></a>
<a id="trace-2212"></a>
<a id="trace-2244"></a>
<a id="trace-2254"></a>
- 23.75s–26.75s (×6), actor 5, squad 0 (trace 2083): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1792. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13781237764166904, 'next_transition': 2102}.
<a id="trace-2272"></a>
- 27.10s–27.10s (×1), actor 0, squad 0 (trace 2272): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 2127. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23167533999860002, 'next_transition': 3033}.
<a id="trace-2273"></a>
- 27.10s–27.10s (×1), actor 0, squad 0 (trace 2273): bounding overwatch. Knowledge: actor memory at 25.00s, trace 2127. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23167533999860002, 'next_transition': 3033}.
<a id="trace-2274"></a>
- 27.10s–27.10s (×1), actor 0, squad 0 (trace 2274): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2127. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23167533999860002, 'next_transition': 3033}.
<a id="trace-3033"></a>
<a id="trace-3048"></a>
- 27.25s–27.75s (×2), actor 5, squad 0 (trace 3033): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2132. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4506994882860216, 'next_transition': 3048}.
<a id="trace-3072"></a>
- 28.10s–28.10s (×1), actor 0, squad 0 (trace 3072): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 2127. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21946158480474273, 'next_transition': 3855}.
<a id="trace-3855"></a>
<a id="trace-3888"></a>
<a id="trace-4010"></a>
- 28.25s–30.25s (×3), actor 5, squad 0 (trace 3855): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2132. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.4297404553722435, 'next_transition': 3888}.
<a id="trace-4050"></a>
- 32.50s–32.50s (×1), actor 1, squad 0 (trace 4050): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 3932. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10093818194181571, 'next_transition': 4063}.
<a id="trace-4063"></a>
<a id="trace-4085"></a>
<a id="trace-4225"></a>
- 32.75s–37.75s (×3), actor 5, squad 0 (trace 4063): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 3936. Next observer evidence: {'until': 33.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1083343755108364, 'next_transition': 4085}.
<a id="trace-4251"></a>
- 38.60s–38.60s (×1), actor 1, squad 0 (trace 4251): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 4110. Next observer evidence: None.
<a id="trace-4847"></a>
<a id="trace-4857"></a>
<a id="trace-4876"></a>
<a id="trace-4961"></a>
<a id="trace-4989"></a>
<a id="trace-5024"></a>
- 38.75s–41.25s (×6), actor 5, squad 0 (trace 4847): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4114. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37201486241812926, 'next_transition': 4857}.
<a id="trace-5080"></a>
- 42.20s–42.20s (×1), actor 1, squad 0 (trace 5080): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4885. Next observer evidence: None.
<a id="trace-5085"></a>
<a id="trace-5118"></a>
- 42.25s–42.75s (×2), actor 5, squad 0 (trace 5085): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4889. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23398338651256606, 'next_transition': 5118}.
<a id="trace-5124"></a>
- 42.80s–42.80s (×1), actor 5, squad 0 (trace 5124): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=4.312689 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 42.80s, trace 5124. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18323659736541936, 'next_transition': 524}.
<a id="trace-5125"></a>
- 42.80s–42.80s (×1), actor 5, squad 0 (trace 5125): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=4.312689 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 42.80s, trace 5125. Next observer evidence: {'until': 42.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18323659736541936, 'next_transition': 524}.
<a id="trace-524"></a>
- 42.80s–42.80s (×1), actor 5, squad 0 (events line 524): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25203376656067056, 'next_transition': 5168}.
<a id="trace-5168"></a>
<a id="trace-5310"></a>
- 43.25s–44.75s (×2), actor 5, squad 0 (trace 5168): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.80s, trace 5125. Next observer evidence: {'until': 44.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7515279396098343, 'next_transition': 5310}.
<a id="trace-5343"></a>
- 45.05s–45.05s (×1), actor 1, squad 0 (trace 5343): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3085366167151061, 'next_transition': 8135}.
<a id="trace-7367"></a>
- 45.05s–45.05s (×1), actor 1, squad 0 (trace 7367): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3085366167151061, 'next_transition': 8135}.
<a id="trace-7368"></a>
- 45.05s–45.05s (×1), actor 1, squad 0 (trace 7368): MoveTactically. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3085366167151061, 'next_transition': 8135}.
<a id="trace-7369"></a>
- 45.05s–45.05s (×1), actor 1, squad 0 (trace 7369): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3085366167151061, 'next_transition': 8135}.
<a id="trace-8135"></a>
<a id="trace-8174"></a>
<a id="trace-8233"></a>
- 45.25s–46.25s (×3), actor 5, squad 0 (trace 8135): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5330. Next observer evidence: {'until': 45.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3458988266700476, 'next_transition': 8174}.
<a id="trace-8239"></a>
- 46.30s–46.30s (×1), actor 1, squad 0 (trace 8239): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.5825191234592124, 'next_transition': 8435}.
<a id="trace-8435"></a>
- 46.75s–46.75s (×1), actor 5, squad 0 (trace 8435): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5330. Next observer evidence: None.
<a id="trace-8439"></a>
- 46.80s–46.80s (×1), actor 1, squad 0 (trace 8439): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: {'until': 47.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9686808825160527, 'next_transition': 8452}.
<a id="trace-8441"></a>
- 46.80s–46.80s (×1), actor 1, squad 0 (trace 8441): NeedSupport. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: {'until': 47.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9686808825160527, 'next_transition': 8452}.
<a id="trace-8452"></a>
- 47.20s–47.20s (×1), actor 1, squad 0 (trace 8452): Reorganise: completed/failed drill. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: None.
<a id="trace-8457"></a>
- 47.20s–47.20s (×1), actor 1, squad 0 (trace 8457): MoveTactically. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: None.
<a id="trace-8458"></a>
- 47.20s–47.20s (×1), actor 1, squad 0 (trace 8458): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: None.
<a id="trace-8943"></a>
- 47.25s–47.25s (×1), actor 5, squad 0 (trace 8943): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5330. Next observer evidence: {'until': 48.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.177314691693236, 'next_transition': 9057}.
<a id="trace-9057"></a>
- 48.70s–48.70s (×1), actor 1, squad 0 (trace 9057): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: None.
<a id="trace-9058"></a>
- 48.70s–48.70s (×1), actor 1, squad 0 (trace 9058): received platoon directive. Knowledge: actor memory at 45.00s, trace 5326. Next observer evidence: None.
<a id="trace-9568"></a>
<a id="trace-9582"></a>
<a id="trace-9608"></a>
<a id="trace-9711"></a>
<a id="trace-9727"></a>
<a id="trace-9743"></a>
- 48.75s–51.25s (×6), actor 5, squad 0 (trace 9568): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 5330. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3412748001485466, 'next_transition': 9582}.
<a id="trace-9746"></a>
- 51.25s–51.25s (×1), actor 1, squad 0 (trace 9746): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 9638. Next observer evidence: {'until': 51.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.4304018171736162, 'next_transition': 10344}.
<a id="trace-10344"></a>
<a id="trace-10367"></a>
<a id="trace-10390"></a>
<a id="trace-10395"></a>
<a id="trace-10420"></a>
<a id="trace-10439"></a>
- 51.75s–54.75s (×6), actor 5, squad 0 (trace 10344): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 9641. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.5186531008687203, 'next_transition': 10367}.
<a id="trace-10457"></a>
- 55.10s–55.10s (×1), actor 3, squad 0 (trace 10457): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 10444. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12103223305387778, 'next_transition': 10970}.
<a id="trace-10458"></a>
- 55.10s–55.10s (×1), actor 3, squad 0 (trace 10458): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 10444. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12103223305387778, 'next_transition': 10970}.
<a id="trace-10907"></a>
- 55.10s–55.10s (×1), actor 3, squad 0 (trace 10907): NeedSupport. Knowledge: actor memory at 55.00s, trace 10444. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12103223305387778, 'next_transition': 10970}.
<a id="trace-10970"></a>
<a id="trace-10984"></a>
<a id="trace-10999"></a>
- 55.25s–56.25s (×3), actor 5, squad 0 (trace 10970): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 10446. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5956364640393428, 'next_transition': 10984}.
<a id="trace-11013"></a>
- 56.35s–56.35s (×1), actor 3, squad 0 (trace 11013): Fixing. Knowledge: actor memory at 55.00s, trace 10444. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5205268397001537, 'next_transition': 11049}.
<a id="trace-11049"></a>
<a id="trace-11058"></a>
<a id="trace-11075"></a>
<a id="trace-11084"></a>
<a id="trace-11198"></a>
<a id="trace-11209"></a>
<a id="trace-11225"></a>
<a id="trace-11235"></a>
<a id="trace-11243"></a>
<a id="trace-11253"></a>
<a id="trace-11265"></a>
<a id="trace-11276"></a>
<a id="trace-11348"></a>
<a id="trace-11361"></a>
<a id="trace-11378"></a>
<a id="trace-11404"></a>
<a id="trace-11424"></a>
<a id="trace-11439"></a>
<a id="trace-11462"></a>
<a id="trace-11477"></a>
<a id="trace-11492"></a>
<a id="trace-11500"></a>
<a id="trace-11574"></a>
<a id="trace-11584"></a>
<a id="trace-11590"></a>
- 57.25s–71.25s (×25), actor 5, squad 0 (trace 11049): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 10446. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3949946592190189, 'next_transition': 11058}.
<a id="trace-11600"></a>
- 71.65s–71.65s (×1), actor 3, squad 0 (trace 11600): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 70.00s, trace 11505. Next observer evidence: None.
<a id="trace-11601"></a>
- 71.70s–71.70s (×1), actor 3, squad 0 (trace 11601): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 11505. Next observer evidence: None.
<a id="trace-11602"></a>
- 71.70s–71.70s (×1), actor 3, squad 0 (trace 11602): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 11505. Next observer evidence: None.
<a id="trace-11697"></a>
<a id="trace-11712"></a>
<a id="trace-11734"></a>
<a id="trace-11770"></a>
<a id="trace-11838"></a>
<a id="trace-11858"></a>
<a id="trace-11865"></a>
<a id="trace-11873"></a>
<a id="trace-11883"></a>
<a id="trace-11890"></a>
<a id="trace-11897"></a>
<a id="trace-11906"></a>
<a id="trace-11913"></a>
<a id="trace-11982"></a>
<a id="trace-11990"></a>
<a id="trace-12008"></a>
<a id="trace-12016"></a>
<a id="trace-12026"></a>
<a id="trace-12058"></a>
<a id="trace-12069"></a>
<a id="trace-12140"></a>
<a id="trace-12147"></a>
<a id="trace-12162"></a>
<a id="trace-12187"></a>
<a id="trace-12200"></a>
<a id="trace-12219"></a>
<a id="trace-12228"></a>
<a id="trace-12239"></a>
<a id="trace-12256"></a>
<a id="trace-12327"></a>
<a id="trace-12338"></a>
<a id="trace-12351"></a>
<a id="trace-12362"></a>
<a id="trace-12376"></a>
<a id="trace-12381"></a>
<a id="trace-12393"></a>
<a id="trace-12423"></a>
<a id="trace-12493"></a>
<a id="trace-12500"></a>
<a id="trace-12507"></a>
<a id="trace-12513"></a>
<a id="trace-12525"></a>
<a id="trace-12539"></a>
<a id="trace-12547"></a>
<a id="trace-12611"></a>
- 71.75s–100.25s (×45), actor 5, squad 0 (trace 11697): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 11507. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299996478394078, 'next_transition': 11712}.

## Net delivery

108 matched order/radio deliveries; 59 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.551s; maximum 5.400s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3933: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3939: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3940: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3941: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3943: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3944: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3945: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3946: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4110: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4111: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4117: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4118: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4119: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4121: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4122: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4123: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4124: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4885: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4886: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4887: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4890: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4892: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4893: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4894: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4896: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4897: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4898: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4899: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.80s leader 5, trace 5124: estimate 2.90; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.80s leader 5, trace 5125: estimate 2.90; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5326: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5327: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5328: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5330: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5331: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5333: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5334: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5335: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5337: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5338: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5339: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5340: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 9638: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 9639: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 9641: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 9642: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 9643: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 9644: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 9645: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 9646: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 9647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 9648: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 9649: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 9650: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 9651: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 10444: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10445: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10446: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10447: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10448: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10449: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10450: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10451: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10452: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10453: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10454: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10455: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10456: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 11099: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11100: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11101: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11102: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11103: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11104: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11105: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11106: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11107: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11108: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11109: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11110: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11111: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 11284: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11285: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11286: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11287: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11288: estimate 10.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11289: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11290: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11291: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11292: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11293: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11294: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11295: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11296: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 11505: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11506: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11507: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11508: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11509: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11510: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 11511: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11512: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11513: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11514: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11515: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11516: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 11776: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11777: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11778: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11779: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11780: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 11781: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11782: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11783: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11784: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11785: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11786: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 11916: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 11917: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 11918: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 11919: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 11920: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 11921: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 11922: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 11923: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 11924: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 11925: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 11926: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 12073: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 12074: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 12075: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 12076: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 12077: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 12078: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 12079: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 12080: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 12081: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 12082: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 12083: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 12262: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 12263: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 12264: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 12265: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 12266: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 12267: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 12268: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 12269: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 12270: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 12271: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 12272: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 12427: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 12428: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12429: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12430: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12431: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12432: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12433: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12434: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12435: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12436: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12550: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12551: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12552: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12553: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12554: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12555: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12556: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12557: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12558: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12559: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 12656: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 12657: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12658: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 12659: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 12660: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 12661: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 12662: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12663: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12664: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12665: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12759: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 12760: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12761: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12762: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 12763: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12764: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 12765: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12766: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12767: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12768: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 12865: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 12866: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 12867: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 12868: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 12869: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 12870: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 12871: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 12872: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 12873: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 12974: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 12975: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 12976: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 12977: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 12978: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 12979: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 12980: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 12981: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 12982: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Soren incapacitated
- 1: Rook incapacitated
- 1: Reed incapacitated
- 1: Tern incapacitated
- 1: Ash incapacitated
- 1: Iven killed in action
- 1: Moss incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
