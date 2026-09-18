# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/22/109/good-ember/battle-109-1789674167251471813`

## Battle summary

**Ember** · 360 s · 801 shots.

### Turning points

- 27.7s, squad 4: contact (events line 249). First recorded contact.
- 89.7s, squad 0: help call ([trace 11659](#trace-11659)). No completion observed before termination.
- 159.8s, squad 0: withdrawal ([trace 25532](#trace-25532)). 164.1s, squad 0: took cover and returned fire.
- 168.6s, squad 0: withdrawal ([trace 26600](#trace-26600)). 193.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 209.6s, squad 1: withdrawal ([trace 28350](#trace-28350)). 229.7s, squad 1: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 37 shots, 6/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 0 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 678 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 86 shots, 0/2 lost.

### Decisions and attribution

At 141.3s, squad 0 chose advanced tactically ([trace 23574](#trace-23574)), followed by 1 shots and 0 own casualties; estimate 9.7 against 0 distinct squad-reported contacts; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 11.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1612](#trace-1612)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1611](#trace-1611)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46690470625668684, 'next_transition': 1644}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1613](#trace-1613)). Following evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.428000652931622, 'next_transition': 2524}.

### Communication

198 matched deliveries (mean 0.37s, max 5.45s); 337 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 27.70s, squad 4, contact, evidence events line 249: First recorded contact; .
- 89.70s, squad 0, help call, evidence 11659: NeedSupport; No completion observed before termination.
- 159.80s, squad 0, withdrawal, evidence 25532: BreakContact: believed ratio at least two without superiority; 164.1s, squad 0: took cover and returned fire.
- 168.60s, squad 0, withdrawal, evidence 26600: BreakContact: believed ratio at least two without superiority; 193.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 209.60s, squad 1, withdrawal, evidence 28350: BreakContact: believed ratio at least two without superiority; 229.7s, squad 1: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.788971194308116, 'next_transition': 815}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.788971194308116, 'next_transition': 815}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.788971194308116, 'next_transition': 815}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004694246443457, 'next_transition': 1149}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004694246443457, 'next_transition': 1149}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004694246443457, 'next_transition': 1149}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-643"></a>
<a id="trace-645"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-685"></a>
<a id="trace-687"></a>
<a id="trace-707"></a>
<a id="trace-709"></a>
<a id="trace-735"></a>
<a id="trace-737"></a>
<a id="trace-819"></a>
<a id="trace-821"></a>
<a id="trace-847"></a>
<a id="trace-849"></a>
<a id="trace-878"></a>
<a id="trace-880"></a>
<a id="trace-913"></a>
<a id="trace-915"></a>
<a id="trace-936"></a>
<a id="trace-938"></a>
<a id="trace-962"></a>
<a id="trace-964"></a>
<a id="trace-990"></a>
<a id="trace-992"></a>
<a id="trace-1016"></a>
<a id="trace-1018"></a>
<a id="trace-1039"></a>
<a id="trace-1041"></a>
<a id="trace-1056"></a>
<a id="trace-1058"></a>
<a id="trace-1144"></a>
<a id="trace-1146"></a>
<a id="trace-1271"></a>
<a id="trace-1273"></a>
<a id="trace-1606"></a>
<a id="trace-1608"></a>
<a id="trace-1648"></a>
<a id="trace-1650"></a>
<a id="trace-1689"></a>
<a id="trace-1691"></a>
<a id="trace-1719"></a>
<a id="trace-1721"></a>
<a id="trace-1751"></a>
<a id="trace-1753"></a>
<a id="trace-1781"></a>
<a id="trace-1783"></a>
<a id="trace-1816"></a>
<a id="trace-1818"></a>
<a id="trace-1843"></a>
<a id="trace-1845"></a>
<a id="trace-1929"></a>
<a id="trace-1931"></a>
<a id="trace-1958"></a>
<a id="trace-1960"></a>
<a id="trace-1993"></a>
<a id="trace-1995"></a>
<a id="trace-2027"></a>
<a id="trace-2029"></a>
<a id="trace-2349"></a>
<a id="trace-2351"></a>
<a id="trace-2380"></a>
<a id="trace-2382"></a>
<a id="trace-2423"></a>
<a id="trace-2425"></a>
<a id="trace-2452"></a>
<a id="trace-2454"></a>
<a id="trace-2484"></a>
<a id="trace-2486"></a>
<a id="trace-2519"></a>
<a id="trace-2521"></a>
<a id="trace-2698"></a>
<a id="trace-2700"></a>
<a id="trace-2731"></a>
<a id="trace-2733"></a>
<a id="trace-2758"></a>
<a id="trace-2760"></a>
<a id="trace-2788"></a>
<a id="trace-2790"></a>
<a id="trace-2825"></a>
<a id="trace-2827"></a>
<a id="trace-2847"></a>
<a id="trace-2849"></a>
<a id="trace-2875"></a>
<a id="trace-2877"></a>
<a id="trace-2904"></a>
<a id="trace-2906"></a>
<a id="trace-2932"></a>
<a id="trace-2934"></a>
<a id="trace-2959"></a>
<a id="trace-2961"></a>
<a id="trace-3038"></a>
<a id="trace-3040"></a>
<a id="trace-3057"></a>
<a id="trace-3059"></a>
<a id="trace-3083"></a>
<a id="trace-3085"></a>
<a id="trace-3100"></a>
<a id="trace-3102"></a>
<a id="trace-3116"></a>
<a id="trace-3118"></a>
<a id="trace-3191"></a>
<a id="trace-3193"></a>
<a id="trace-3225"></a>
<a id="trace-3227"></a>
<a id="trace-3247"></a>
<a id="trace-3249"></a>
<a id="trace-3277"></a>
<a id="trace-3279"></a>
<a id="trace-3297"></a>
<a id="trace-3299"></a>
<a id="trace-3387"></a>
<a id="trace-3389"></a>
<a id="trace-3400"></a>
<a id="trace-3402"></a>
<a id="trace-3422"></a>
<a id="trace-3424"></a>
<a id="trace-3432"></a>
<a id="trace-3434"></a>
<a id="trace-3448"></a>
<a id="trace-3450"></a>
<a id="trace-3458"></a>
<a id="trace-3460"></a>
<a id="trace-3472"></a>
<a id="trace-3474"></a>
<a id="trace-3488"></a>
<a id="trace-3490"></a>
<a id="trace-3505"></a>
<a id="trace-3507"></a>
<a id="trace-3519"></a>
<a id="trace-3521"></a>
<a id="trace-3594"></a>
<a id="trace-3596"></a>
<a id="trace-3604"></a>
<a id="trace-3606"></a>
<a id="trace-3623"></a>
<a id="trace-3625"></a>
<a id="trace-3634"></a>
<a id="trace-3636"></a>
<a id="trace-3654"></a>
<a id="trace-3656"></a>
<a id="trace-3664"></a>
<a id="trace-3666"></a>
<a id="trace-3684"></a>
<a id="trace-3686"></a>
<a id="trace-3700"></a>
<a id="trace-3702"></a>
<a id="trace-3718"></a>
<a id="trace-3720"></a>
<a id="trace-3732"></a>
<a id="trace-3734"></a>
<a id="trace-3807"></a>
<a id="trace-3809"></a>
<a id="trace-3815"></a>
<a id="trace-3817"></a>
<a id="trace-3829"></a>
<a id="trace-3831"></a>
<a id="trace-3840"></a>
<a id="trace-3842"></a>
<a id="trace-3854"></a>
<a id="trace-3856"></a>
<a id="trace-3865"></a>
<a id="trace-3867"></a>
<a id="trace-3882"></a>
<a id="trace-3884"></a>
<a id="trace-3898"></a>
<a id="trace-3900"></a>
<a id="trace-3915"></a>
<a id="trace-3917"></a>
<a id="trace-3930"></a>
<a id="trace-3932"></a>
<a id="trace-4008"></a>
<a id="trace-4010"></a>
<a id="trace-4019"></a>
<a id="trace-4021"></a>
<a id="trace-4040"></a>
<a id="trace-4042"></a>
<a id="trace-4051"></a>
<a id="trace-4053"></a>
<a id="trace-4067"></a>
<a id="trace-4069"></a>
<a id="trace-4079"></a>
<a id="trace-4081"></a>
<a id="trace-4097"></a>
<a id="trace-4099"></a>
<a id="trace-4114"></a>
<a id="trace-4116"></a>
<a id="trace-4131"></a>
<a id="trace-4133"></a>
<a id="trace-4143"></a>
<a id="trace-4145"></a>
<a id="trace-4222"></a>
<a id="trace-4224"></a>
<a id="trace-4232"></a>
<a id="trace-4234"></a>
<a id="trace-4248"></a>
<a id="trace-4250"></a>
<a id="trace-4261"></a>
<a id="trace-4263"></a>
<a id="trace-4283"></a>
<a id="trace-4285"></a>
<a id="trace-4299"></a>
<a id="trace-4301"></a>
<a id="trace-4318"></a>
<a id="trace-4320"></a>
<a id="trace-4338"></a>
<a id="trace-4340"></a>
<a id="trace-4356"></a>
<a id="trace-4358"></a>
<a id="trace-4368"></a>
<a id="trace-4370"></a>
<a id="trace-4450"></a>
<a id="trace-4452"></a>
<a id="trace-4462"></a>
<a id="trace-4464"></a>
<a id="trace-4480"></a>
<a id="trace-4482"></a>
<a id="trace-4490"></a>
<a id="trace-4492"></a>
<a id="trace-4507"></a>
<a id="trace-4509"></a>
<a id="trace-4520"></a>
<a id="trace-4522"></a>
<a id="trace-4540"></a>
<a id="trace-4542"></a>
<a id="trace-4555"></a>
<a id="trace-4557"></a>
<a id="trace-4963"></a>
<a id="trace-4965"></a>
<a id="trace-4987"></a>
<a id="trace-4989"></a>
<a id="trace-5086"></a>
<a id="trace-5088"></a>
<a id="trace-5111"></a>
<a id="trace-5113"></a>
<a id="trace-5139"></a>
<a id="trace-5141"></a>
<a id="trace-5166"></a>
<a id="trace-5168"></a>
<a id="trace-5200"></a>
<a id="trace-5202"></a>
<a id="trace-5219"></a>
<a id="trace-5221"></a>
<a id="trace-5237"></a>
<a id="trace-5239"></a>
<a id="trace-5261"></a>
<a id="trace-5263"></a>
<a id="trace-5288"></a>
<a id="trace-5290"></a>
<a id="trace-5307"></a>
<a id="trace-5309"></a>
<a id="trace-5399"></a>
<a id="trace-5401"></a>
<a id="trace-5423"></a>
<a id="trace-5425"></a>
<a id="trace-5459"></a>
<a id="trace-5461"></a>
<a id="trace-5484"></a>
<a id="trace-5486"></a>
<a id="trace-5529"></a>
<a id="trace-5531"></a>
<a id="trace-6063"></a>
<a id="trace-6065"></a>
<a id="trace-6082"></a>
<a id="trace-6084"></a>
<a id="trace-6118"></a>
<a id="trace-6120"></a>
<a id="trace-6152"></a>
<a id="trace-6154"></a>
<a id="trace-6239"></a>
<a id="trace-6241"></a>
<a id="trace-6287"></a>
<a id="trace-6289"></a>
<a id="trace-6322"></a>
<a id="trace-6324"></a>
<a id="trace-6342"></a>
<a id="trace-6344"></a>
<a id="trace-6367"></a>
<a id="trace-6369"></a>
<a id="trace-6383"></a>
<a id="trace-6385"></a>
<a id="trace-6410"></a>
<a id="trace-6412"></a>
<a id="trace-6430"></a>
<a id="trace-6432"></a>
<a id="trace-6452"></a>
<a id="trace-6454"></a>
<a id="trace-7063"></a>
<a id="trace-7065"></a>
<a id="trace-7166"></a>
<a id="trace-7168"></a>
<a id="trace-7185"></a>
<a id="trace-7187"></a>
<a id="trace-7240"></a>
<a id="trace-7242"></a>
<a id="trace-7269"></a>
<a id="trace-7271"></a>
<a id="trace-7307"></a>
<a id="trace-7309"></a>
<a id="trace-7335"></a>
<a id="trace-7337"></a>
<a id="trace-7373"></a>
<a id="trace-7375"></a>
<a id="trace-7393"></a>
<a id="trace-7395"></a>
<a id="trace-7417"></a>
<a id="trace-7419"></a>
<a id="trace-7435"></a>
<a id="trace-7437"></a>
<a id="trace-7523"></a>
<a id="trace-7525"></a>
<a id="trace-7546"></a>
<a id="trace-7548"></a>
<a id="trace-7570"></a>
<a id="trace-7572"></a>
<a id="trace-7580"></a>
<a id="trace-7582"></a>
<a id="trace-7598"></a>
<a id="trace-7600"></a>
<a id="trace-7611"></a>
<a id="trace-7613"></a>
<a id="trace-7630"></a>
<a id="trace-7632"></a>
<a id="trace-7643"></a>
<a id="trace-7645"></a>
<a id="trace-10656"></a>
<a id="trace-10658"></a>
<a id="trace-10675"></a>
<a id="trace-10677"></a>
<a id="trace-10772"></a>
<a id="trace-10774"></a>
<a id="trace-10802"></a>
<a id="trace-10804"></a>
<a id="trace-10824"></a>
<a id="trace-10826"></a>
<a id="trace-10854"></a>
<a id="trace-10856"></a>
<a id="trace-11514"></a>
<a id="trace-11516"></a>
<a id="trace-11545"></a>
<a id="trace-11547"></a>
<a id="trace-11587"></a>
<a id="trace-11589"></a>
<a id="trace-11609"></a>
<a id="trace-11611"></a>
<a id="trace-11632"></a>
<a id="trace-11634"></a>
<a id="trace-11668"></a>
<a id="trace-11670"></a>
<a id="trace-11777"></a>
<a id="trace-11779"></a>
<a id="trace-11802"></a>
<a id="trace-11804"></a>
<a id="trace-11831"></a>
<a id="trace-11833"></a>
<a id="trace-11849"></a>
<a id="trace-11851"></a>
<a id="trace-11881"></a>
<a id="trace-11883"></a>
<a id="trace-11900"></a>
<a id="trace-11902"></a>
<a id="trace-11934"></a>
<a id="trace-11936"></a>
<a id="trace-11954"></a>
<a id="trace-11956"></a>
<a id="trace-11979"></a>
<a id="trace-11981"></a>
<a id="trace-11996"></a>
<a id="trace-11998"></a>
<a id="trace-12084"></a>
<a id="trace-12086"></a>
<a id="trace-15940"></a>
<a id="trace-15942"></a>
<a id="trace-15977"></a>
<a id="trace-15979"></a>
<a id="trace-15999"></a>
<a id="trace-16001"></a>
<a id="trace-16056"></a>
<a id="trace-16058"></a>
<a id="trace-16083"></a>
<a id="trace-16085"></a>
<a id="trace-16121"></a>
<a id="trace-16123"></a>
<a id="trace-16174"></a>
<a id="trace-16176"></a>
<a id="trace-16207"></a>
<a id="trace-16209"></a>
<a id="trace-16231"></a>
<a id="trace-16233"></a>
<a id="trace-16317"></a>
<a id="trace-16319"></a>
<a id="trace-16334"></a>
<a id="trace-16336"></a>
<a id="trace-16361"></a>
<a id="trace-16363"></a>
<a id="trace-16372"></a>
<a id="trace-16374"></a>
<a id="trace-17041"></a>
<a id="trace-17043"></a>
<a id="trace-17057"></a>
<a id="trace-17059"></a>
<a id="trace-17097"></a>
<a id="trace-17099"></a>
<a id="trace-17696"></a>
<a id="trace-17698"></a>
<a id="trace-17734"></a>
<a id="trace-17736"></a>
<a id="trace-17776"></a>
<a id="trace-17778"></a>
<a id="trace-17868"></a>
<a id="trace-17870"></a>
<a id="trace-17897"></a>
<a id="trace-17899"></a>
<a id="trace-17939"></a>
<a id="trace-17941"></a>
<a id="trace-17957"></a>
<a id="trace-17959"></a>
<a id="trace-17993"></a>
<a id="trace-17995"></a>
<a id="trace-18015"></a>
<a id="trace-18017"></a>
<a id="trace-18045"></a>
<a id="trace-18047"></a>
<a id="trace-18068"></a>
<a id="trace-18070"></a>
<a id="trace-18100"></a>
<a id="trace-18102"></a>
<a id="trace-18117"></a>
<a id="trace-18119"></a>
<a id="trace-18205"></a>
<a id="trace-18207"></a>
<a id="trace-18221"></a>
<a id="trace-18223"></a>
<a id="trace-21080"></a>
<a id="trace-21082"></a>
<a id="trace-21096"></a>
<a id="trace-21098"></a>
<a id="trace-21121"></a>
<a id="trace-21123"></a>
<a id="trace-21156"></a>
<a id="trace-21158"></a>
<a id="trace-21205"></a>
<a id="trace-21207"></a>
<a id="trace-21232"></a>
<a id="trace-21234"></a>
<a id="trace-21263"></a>
<a id="trace-21265"></a>
<a id="trace-21312"></a>
<a id="trace-21314"></a>
<a id="trace-21402"></a>
<a id="trace-21404"></a>
<a id="trace-21436"></a>
<a id="trace-21438"></a>
<a id="trace-21473"></a>
<a id="trace-21475"></a>
<a id="trace-21503"></a>
<a id="trace-21505"></a>
<a id="trace-21554"></a>
<a id="trace-21556"></a>
<a id="trace-21591"></a>
<a id="trace-21593"></a>
<a id="trace-21616"></a>
<a id="trace-21618"></a>
<a id="trace-21635"></a>
<a id="trace-21637"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21678"></a>
<a id="trace-21680"></a>
<a id="trace-21761"></a>
<a id="trace-21763"></a>
<a id="trace-21777"></a>
<a id="trace-21779"></a>
<a id="trace-21815"></a>
<a id="trace-21817"></a>
<a id="trace-21841"></a>
<a id="trace-21843"></a>
<a id="trace-21859"></a>
<a id="trace-21861"></a>
<a id="trace-21875"></a>
<a id="trace-21877"></a>
<a id="trace-21890"></a>
<a id="trace-21892"></a>
<a id="trace-21912"></a>
<a id="trace-21914"></a>
<a id="trace-21929"></a>
<a id="trace-21931"></a>
<a id="trace-22011"></a>
<a id="trace-22013"></a>
<a id="trace-22396"></a>
<a id="trace-22398"></a>
<a id="trace-22420"></a>
<a id="trace-22422"></a>
<a id="trace-22439"></a>
<a id="trace-22441"></a>
<a id="trace-22463"></a>
<a id="trace-22465"></a>
<a id="trace-22480"></a>
<a id="trace-22482"></a>
<a id="trace-22508"></a>
<a id="trace-22510"></a>
<a id="trace-22544"></a>
<a id="trace-22546"></a>
<a id="trace-22576"></a>
<a id="trace-22578"></a>
<a id="trace-22592"></a>
<a id="trace-22594"></a>
<a id="trace-22687"></a>
<a id="trace-22689"></a>
<a id="trace-22703"></a>
<a id="trace-22705"></a>
<a id="trace-22719"></a>
<a id="trace-22721"></a>
<a id="trace-22736"></a>
<a id="trace-22738"></a>
<a id="trace-22759"></a>
<a id="trace-22761"></a>
<a id="trace-22777"></a>
<a id="trace-22779"></a>
<a id="trace-22801"></a>
<a id="trace-22803"></a>
<a id="trace-22953"></a>
<a id="trace-22955"></a>
<a id="trace-22989"></a>
<a id="trace-22991"></a>
<a id="trace-23028"></a>
<a id="trace-23030"></a>
<a id="trace-23133"></a>
<a id="trace-23135"></a>
<a id="trace-23180"></a>
<a id="trace-23182"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
<a id="trace-23256"></a>
<a id="trace-23258"></a>
<a id="trace-23296"></a>
<a id="trace-23298"></a>
<a id="trace-23327"></a>
<a id="trace-23329"></a>
<a id="trace-23351"></a>
<a id="trace-23353"></a>
<a id="trace-23365"></a>
<a id="trace-23367"></a>
<a id="trace-23383"></a>
<a id="trace-23385"></a>
<a id="trace-23400"></a>
<a id="trace-23402"></a>
<a id="trace-23500"></a>
<a id="trace-23502"></a>
<a id="trace-23539"></a>
<a id="trace-23541"></a>
<a id="trace-23564"></a>
<a id="trace-23566"></a>
<a id="trace-24069"></a>
<a id="trace-24071"></a>
<a id="trace-24101"></a>
<a id="trace-24103"></a>
<a id="trace-24117"></a>
<a id="trace-24119"></a>
<a id="trace-24144"></a>
<a id="trace-24146"></a>
<a id="trace-24159"></a>
<a id="trace-24161"></a>
<a id="trace-24206"></a>
<a id="trace-24208"></a>
<a id="trace-24244"></a>
<a id="trace-24246"></a>
<a id="trace-24337"></a>
<a id="trace-24339"></a>
<a id="trace-24359"></a>
<a id="trace-24361"></a>
<a id="trace-24394"></a>
<a id="trace-24396"></a>
<a id="trace-24414"></a>
<a id="trace-24416"></a>
<a id="trace-24435"></a>
<a id="trace-24437"></a>
<a id="trace-24456"></a>
<a id="trace-24458"></a>
<a id="trace-24496"></a>
<a id="trace-24498"></a>
<a id="trace-24515"></a>
<a id="trace-24517"></a>
<a id="trace-24542"></a>
<a id="trace-24544"></a>
<a id="trace-24567"></a>
<a id="trace-24569"></a>
<a id="trace-24647"></a>
<a id="trace-24649"></a>
<a id="trace-24663"></a>
<a id="trace-24665"></a>
<a id="trace-24679"></a>
<a id="trace-24681"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-24803"></a>
<a id="trace-24805"></a>
<a id="trace-24817"></a>
<a id="trace-24819"></a>
<a id="trace-24843"></a>
<a id="trace-24845"></a>
<a id="trace-24863"></a>
<a id="trace-24865"></a>
<a id="trace-24881"></a>
<a id="trace-24883"></a>
<a id="trace-24901"></a>
<a id="trace-24903"></a>
<a id="trace-24977"></a>
<a id="trace-24979"></a>
<a id="trace-24987"></a>
<a id="trace-24989"></a>
<a id="trace-25350"></a>
<a id="trace-25352"></a>
<a id="trace-25364"></a>
<a id="trace-25366"></a>
<a id="trace-25385"></a>
<a id="trace-25387"></a>
<a id="trace-25396"></a>
<a id="trace-25398"></a>
<a id="trace-25441"></a>
<a id="trace-25443"></a>
<a id="trace-25470"></a>
<a id="trace-25472"></a>
<a id="trace-25508"></a>
<a id="trace-25510"></a>
<a id="trace-25527"></a>
<a id="trace-25529"></a>
<a id="trace-25907"></a>
<a id="trace-25909"></a>
<a id="trace-25934"></a>
<a id="trace-25936"></a>
<a id="trace-25959"></a>
<a id="trace-25961"></a>
<a id="trace-25982"></a>
<a id="trace-25984"></a>
<a id="trace-26003"></a>
<a id="trace-26005"></a>
<a id="trace-26032"></a>
<a id="trace-26034"></a>
<a id="trace-26074"></a>
<a id="trace-26076"></a>
<a id="trace-26111"></a>
<a id="trace-26113"></a>
<a id="trace-26382"></a>
<a id="trace-26384"></a>
<a id="trace-26405"></a>
<a id="trace-26407"></a>
<a id="trace-26493"></a>
<a id="trace-26495"></a>
<a id="trace-26515"></a>
<a id="trace-26517"></a>
<a id="trace-26529"></a>
<a id="trace-26531"></a>
<a id="trace-26540"></a>
<a id="trace-26542"></a>
<a id="trace-26560"></a>
<a id="trace-26562"></a>
<a id="trace-26573"></a>
<a id="trace-26575"></a>
<a id="trace-26592"></a>
<a id="trace-26594"></a>
<a id="trace-26778"></a>
<a id="trace-26780"></a>
<a id="trace-26793"></a>
<a id="trace-26795"></a>
<a id="trace-26811"></a>
<a id="trace-26813"></a>
<a id="trace-26880"></a>
<a id="trace-26882"></a>
<a id="trace-26893"></a>
<a id="trace-26895"></a>
<a id="trace-26907"></a>
<a id="trace-26909"></a>
<a id="trace-26916"></a>
<a id="trace-26918"></a>
<a id="trace-26931"></a>
<a id="trace-26933"></a>
<a id="trace-26942"></a>
<a id="trace-26944"></a>
<a id="trace-26963"></a>
<a id="trace-26965"></a>
<a id="trace-26975"></a>
<a id="trace-26977"></a>
<a id="trace-26987"></a>
<a id="trace-26989"></a>
<a id="trace-27003"></a>
<a id="trace-27005"></a>
<a id="trace-27073"></a>
<a id="trace-27075"></a>
<a id="trace-27083"></a>
<a id="trace-27085"></a>
<a id="trace-27097"></a>
<a id="trace-27099"></a>
<a id="trace-27107"></a>
<a id="trace-27109"></a>
<a id="trace-27124"></a>
<a id="trace-27126"></a>
<a id="trace-27139"></a>
<a id="trace-27141"></a>
<a id="trace-27156"></a>
<a id="trace-27158"></a>
<a id="trace-27173"></a>
<a id="trace-27175"></a>
<a id="trace-27188"></a>
<a id="trace-27190"></a>
<a id="trace-27199"></a>
<a id="trace-27201"></a>
<a id="trace-27275"></a>
<a id="trace-27277"></a>
<a id="trace-27283"></a>
<a id="trace-27285"></a>
<a id="trace-27305"></a>
<a id="trace-27307"></a>
<a id="trace-27312"></a>
<a id="trace-27314"></a>
<a id="trace-27326"></a>
<a id="trace-27328"></a>
<a id="trace-27344"></a>
<a id="trace-27346"></a>
<a id="trace-27364"></a>
<a id="trace-27366"></a>
<a id="trace-27375"></a>
<a id="trace-27377"></a>
<a id="trace-27390"></a>
<a id="trace-27392"></a>
<a id="trace-27400"></a>
<a id="trace-27402"></a>
<a id="trace-27476"></a>
<a id="trace-27478"></a>
<a id="trace-27494"></a>
<a id="trace-27496"></a>
<a id="trace-27500"></a>
<a id="trace-27502"></a>
<a id="trace-27515"></a>
<a id="trace-27517"></a>
<a id="trace-27526"></a>
<a id="trace-27528"></a>
<a id="trace-27541"></a>
<a id="trace-27543"></a>
<a id="trace-27550"></a>
<a id="trace-27552"></a>
<a id="trace-27563"></a>
<a id="trace-27565"></a>
<a id="trace-27573"></a>
<a id="trace-27575"></a>
<a id="trace-27643"></a>
<a id="trace-27645"></a>
<a id="trace-27650"></a>
<a id="trace-27652"></a>
<a id="trace-27665"></a>
<a id="trace-27667"></a>
<a id="trace-27672"></a>
<a id="trace-27674"></a>
<a id="trace-27687"></a>
<a id="trace-27689"></a>
<a id="trace-27699"></a>
<a id="trace-27701"></a>
<a id="trace-27723"></a>
<a id="trace-27725"></a>
<a id="trace-27738"></a>
<a id="trace-27740"></a>
<a id="trace-27753"></a>
<a id="trace-27755"></a>
<a id="trace-27762"></a>
<a id="trace-27764"></a>
<a id="trace-27842"></a>
<a id="trace-27844"></a>
<a id="trace-27850"></a>
<a id="trace-27852"></a>
<a id="trace-27870"></a>
<a id="trace-27872"></a>
<a id="trace-27880"></a>
<a id="trace-27882"></a>
<a id="trace-27897"></a>
<a id="trace-27899"></a>
<a id="trace-27908"></a>
<a id="trace-27910"></a>
<a id="trace-27928"></a>
<a id="trace-27930"></a>
<a id="trace-27941"></a>
<a id="trace-27943"></a>
<a id="trace-27959"></a>
<a id="trace-27961"></a>
<a id="trace-27968"></a>
<a id="trace-27970"></a>
<a id="trace-28040"></a>
<a id="trace-28042"></a>
<a id="trace-28049"></a>
<a id="trace-28051"></a>
<a id="trace-28066"></a>
<a id="trace-28068"></a>
<a id="trace-28072"></a>
<a id="trace-28074"></a>
<a id="trace-28087"></a>
<a id="trace-28089"></a>
<a id="trace-28096"></a>
<a id="trace-28098"></a>
<a id="trace-28116"></a>
<a id="trace-28118"></a>
<a id="trace-28128"></a>
<a id="trace-28130"></a>
<a id="trace-28144"></a>
<a id="trace-28146"></a>
<a id="trace-28172"></a>
<a id="trace-28174"></a>
<a id="trace-28248"></a>
<a id="trace-28250"></a>
<a id="trace-28254"></a>
<a id="trace-28256"></a>
<a id="trace-28270"></a>
<a id="trace-28272"></a>
<a id="trace-28278"></a>
<a id="trace-28280"></a>
<a id="trace-28293"></a>
<a id="trace-28295"></a>
<a id="trace-28299"></a>
<a id="trace-28301"></a>
<a id="trace-28317"></a>
<a id="trace-28319"></a>
<a id="trace-28326"></a>
<a id="trace-28328"></a>
<a id="trace-28343"></a>
<a id="trace-28345"></a>
<a id="trace-28412"></a>
<a id="trace-28414"></a>
<a id="trace-28488"></a>
<a id="trace-28490"></a>
<a id="trace-28499"></a>
<a id="trace-28501"></a>
<a id="trace-28530"></a>
<a id="trace-28532"></a>
<a id="trace-28538"></a>
<a id="trace-28540"></a>
<a id="trace-28555"></a>
<a id="trace-28557"></a>
<a id="trace-28563"></a>
<a id="trace-28565"></a>
<a id="trace-28581"></a>
<a id="trace-28583"></a>
<a id="trace-28590"></a>
<a id="trace-28592"></a>
<a id="trace-28608"></a>
<a id="trace-28610"></a>
<a id="trace-28617"></a>
<a id="trace-28619"></a>
<a id="trace-28691"></a>
<a id="trace-28693"></a>
<a id="trace-28700"></a>
<a id="trace-28702"></a>
<a id="trace-28720"></a>
<a id="trace-28722"></a>
<a id="trace-28730"></a>
<a id="trace-28732"></a>
<a id="trace-28749"></a>
<a id="trace-28751"></a>
<a id="trace-28757"></a>
<a id="trace-28759"></a>
<a id="trace-28788"></a>
<a id="trace-28790"></a>
<a id="trace-28801"></a>
<a id="trace-28803"></a>
<a id="trace-28818"></a>
<a id="trace-28820"></a>
<a id="trace-28828"></a>
<a id="trace-28830"></a>
<a id="trace-28900"></a>
<a id="trace-28902"></a>
<a id="trace-28911"></a>
<a id="trace-28913"></a>
<a id="trace-28931"></a>
<a id="trace-28933"></a>
<a id="trace-28939"></a>
<a id="trace-28941"></a>
<a id="trace-28955"></a>
<a id="trace-28957"></a>
<a id="trace-28965"></a>
<a id="trace-28967"></a>
<a id="trace-28986"></a>
<a id="trace-28988"></a>
<a id="trace-28996"></a>
<a id="trace-28998"></a>
<a id="trace-29013"></a>
<a id="trace-29015"></a>
<a id="trace-29032"></a>
<a id="trace-29034"></a>
<a id="trace-29109"></a>
<a id="trace-29111"></a>
<a id="trace-29117"></a>
<a id="trace-29119"></a>
<a id="trace-29133"></a>
<a id="trace-29135"></a>
<a id="trace-29139"></a>
<a id="trace-29141"></a>
<a id="trace-29151"></a>
<a id="trace-29153"></a>
<a id="trace-29160"></a>
<a id="trace-29162"></a>
<a id="trace-29173"></a>
<a id="trace-29175"></a>
<a id="trace-29185"></a>
<a id="trace-29187"></a>
<a id="trace-29203"></a>
<a id="trace-29205"></a>
<a id="trace-29217"></a>
<a id="trace-29219"></a>
<a id="trace-29293"></a>
<a id="trace-29295"></a>
<a id="trace-29306"></a>
<a id="trace-29308"></a>
<a id="trace-29331"></a>
<a id="trace-29333"></a>
<a id="trace-29339"></a>
<a id="trace-29341"></a>
<a id="trace-29358"></a>
<a id="trace-29360"></a>
<a id="trace-29368"></a>
<a id="trace-29370"></a>
<a id="trace-29384"></a>
<a id="trace-29386"></a>
<a id="trace-29395"></a>
<a id="trace-29397"></a>
<a id="trace-29410"></a>
<a id="trace-29412"></a>
<a id="trace-29420"></a>
<a id="trace-29422"></a>
<a id="trace-29493"></a>
<a id="trace-29495"></a>
<a id="trace-29499"></a>
<a id="trace-29501"></a>
<a id="trace-29519"></a>
<a id="trace-29521"></a>
<a id="trace-29528"></a>
<a id="trace-29530"></a>
<a id="trace-29544"></a>
<a id="trace-29546"></a>
<a id="trace-29559"></a>
<a id="trace-29561"></a>
<a id="trace-29579"></a>
<a id="trace-29581"></a>
<a id="trace-29590"></a>
<a id="trace-29592"></a>
<a id="trace-29612"></a>
<a id="trace-29614"></a>
<a id="trace-29622"></a>
<a id="trace-29624"></a>
<a id="trace-29694"></a>
<a id="trace-29696"></a>
<a id="trace-29705"></a>
<a id="trace-29707"></a>
<a id="trace-29721"></a>
<a id="trace-29723"></a>
<a id="trace-29727"></a>
<a id="trace-29729"></a>
<a id="trace-29743"></a>
<a id="trace-29745"></a>
<a id="trace-29756"></a>
<a id="trace-29758"></a>
<a id="trace-29772"></a>
<a id="trace-29774"></a>
<a id="trace-29784"></a>
<a id="trace-29786"></a>
<a id="trace-29807"></a>
<a id="trace-29809"></a>
<a id="trace-29815"></a>
<a id="trace-29817"></a>
<a id="trace-29888"></a>
<a id="trace-29890"></a>
<a id="trace-29899"></a>
<a id="trace-29901"></a>
<a id="trace-29916"></a>
<a id="trace-29918"></a>
<a id="trace-29926"></a>
<a id="trace-29928"></a>
<a id="trace-29940"></a>
<a id="trace-29942"></a>
<a id="trace-29947"></a>
<a id="trace-29949"></a>
<a id="trace-29962"></a>
<a id="trace-29964"></a>
<a id="trace-29974"></a>
<a id="trace-29976"></a>
<a id="trace-29993"></a>
<a id="trace-29995"></a>
<a id="trace-30001"></a>
<a id="trace-30003"></a>
<a id="trace-30076"></a>
<a id="trace-30078"></a>
<a id="trace-30083"></a>
<a id="trace-30085"></a>
<a id="trace-30105"></a>
<a id="trace-30107"></a>
<a id="trace-30117"></a>
<a id="trace-30119"></a>
<a id="trace-30129"></a>
<a id="trace-30131"></a>
<a id="trace-30137"></a>
<a id="trace-30139"></a>
<a id="trace-30159"></a>
<a id="trace-30161"></a>
<a id="trace-30170"></a>
<a id="trace-30172"></a>
<a id="trace-30185"></a>
<a id="trace-30187"></a>
<a id="trace-30195"></a>
<a id="trace-30197"></a>
<a id="trace-30266"></a>
<a id="trace-30268"></a>
<a id="trace-30275"></a>
<a id="trace-30277"></a>
<a id="trace-30293"></a>
<a id="trace-30295"></a>
<a id="trace-30300"></a>
<a id="trace-30302"></a>
<a id="trace-30317"></a>
<a id="trace-30319"></a>
<a id="trace-30332"></a>
<a id="trace-30334"></a>
<a id="trace-30348"></a>
<a id="trace-30350"></a>
<a id="trace-30361"></a>
<a id="trace-30363"></a>
<a id="trace-30376"></a>
<a id="trace-30378"></a>
<a id="trace-30386"></a>
<a id="trace-30388"></a>
<a id="trace-30463"></a>
<a id="trace-30465"></a>
<a id="trace-30473"></a>
<a id="trace-30475"></a>
<a id="trace-30488"></a>
<a id="trace-30490"></a>
<a id="trace-30495"></a>
<a id="trace-30497"></a>
<a id="trace-30511"></a>
<a id="trace-30513"></a>
<a id="trace-30520"></a>
<a id="trace-30522"></a>
<a id="trace-30537"></a>
<a id="trace-30539"></a>
<a id="trace-30551"></a>
<a id="trace-30553"></a>
<a id="trace-30581"></a>
<a id="trace-30583"></a>
<a id="trace-30655"></a>
<a id="trace-30657"></a>
<a id="trace-30662"></a>
<a id="trace-30664"></a>
<a id="trace-30677"></a>
<a id="trace-30679"></a>
<a id="trace-30687"></a>
<a id="trace-30689"></a>
<a id="trace-30706"></a>
<a id="trace-30708"></a>
<a id="trace-30714"></a>
<a id="trace-30716"></a>
<a id="trace-30731"></a>
<a id="trace-30733"></a>
<a id="trace-30740"></a>
<a id="trace-30742"></a>
<a id="trace-30758"></a>
<a id="trace-30760"></a>
<a id="trace-30769"></a>
<a id="trace-30771"></a>
<a id="trace-30842"></a>
<a id="trace-30844"></a>
<a id="trace-30858"></a>
<a id="trace-30860"></a>
<a id="trace-30874"></a>
<a id="trace-30876"></a>
<a id="trace-30880"></a>
<a id="trace-30882"></a>
<a id="trace-30894"></a>
<a id="trace-30896"></a>
<a id="trace-30904"></a>
<a id="trace-30906"></a>
<a id="trace-30922"></a>
<a id="trace-30924"></a>
<a id="trace-30933"></a>
<a id="trace-30935"></a>
<a id="trace-30954"></a>
<a id="trace-30956"></a>
<a id="trace-30964"></a>
<a id="trace-30966"></a>
<a id="trace-31036"></a>
<a id="trace-31038"></a>
<a id="trace-31050"></a>
<a id="trace-31052"></a>
<a id="trace-31064"></a>
<a id="trace-31066"></a>
<a id="trace-31075"></a>
<a id="trace-31077"></a>
<a id="trace-31096"></a>
<a id="trace-31098"></a>
<a id="trace-31102"></a>
<a id="trace-31104"></a>
<a id="trace-31119"></a>
<a id="trace-31121"></a>
<a id="trace-31130"></a>
<a id="trace-31132"></a>
<a id="trace-31145"></a>
<a id="trace-31147"></a>
<a id="trace-31155"></a>
<a id="trace-31157"></a>
<a id="trace-31227"></a>
<a id="trace-31229"></a>
<a id="trace-31237"></a>
<a id="trace-31239"></a>
<a id="trace-31257"></a>
<a id="trace-31259"></a>
<a id="trace-31266"></a>
<a id="trace-31268"></a>
<a id="trace-31282"></a>
<a id="trace-31284"></a>
<a id="trace-31290"></a>
<a id="trace-31292"></a>
<a id="trace-31310"></a>
<a id="trace-31312"></a>
<a id="trace-31319"></a>
<a id="trace-31321"></a>
<a id="trace-31341"></a>
<a id="trace-31343"></a>
<a id="trace-31353"></a>
<a id="trace-31355"></a>
<a id="trace-31424"></a>
<a id="trace-31426"></a>
<a id="trace-31431"></a>
<a id="trace-31433"></a>
<a id="trace-31448"></a>
<a id="trace-31450"></a>
<a id="trace-31454"></a>
<a id="trace-31456"></a>
<a id="trace-31468"></a>
<a id="trace-31470"></a>
<a id="trace-31484"></a>
<a id="trace-31486"></a>
<a id="trace-31502"></a>
<a id="trace-31504"></a>
<a id="trace-31517"></a>
<a id="trace-31519"></a>
<a id="trace-31534"></a>
<a id="trace-31536"></a>
<a id="trace-31543"></a>
<a id="trace-31545"></a>
<a id="trace-31618"></a>
<a id="trace-31620"></a>
<a id="trace-31634"></a>
<a id="trace-31636"></a>
<a id="trace-31651"></a>
<a id="trace-31653"></a>
<a id="trace-31657"></a>
<a id="trace-31659"></a>
<a id="trace-31671"></a>
<a id="trace-31673"></a>
<a id="trace-31677"></a>
<a id="trace-31679"></a>
<a id="trace-31694"></a>
<a id="trace-31696"></a>
<a id="trace-31708"></a>
<a id="trace-31710"></a>
<a id="trace-31721"></a>
<a id="trace-31723"></a>
<a id="trace-31732"></a>
<a id="trace-31734"></a>
<a id="trace-31811"></a>
<a id="trace-31813"></a>
<a id="trace-31823"></a>
<a id="trace-31825"></a>
<a id="trace-31838"></a>
<a id="trace-31840"></a>
<a id="trace-31849"></a>
<a id="trace-31851"></a>
<a id="trace-31870"></a>
<a id="trace-31872"></a>
<a id="trace-31878"></a>
<a id="trace-31880"></a>
<a id="trace-31893"></a>
<a id="trace-31895"></a>
<a id="trace-31902"></a>
<a id="trace-31904"></a>
<a id="trace-31915"></a>
<a id="trace-31917"></a>
<a id="trace-31925"></a>
<a id="trace-31927"></a>
<a id="trace-31996"></a>
<a id="trace-31998"></a>
<a id="trace-32007"></a>
<a id="trace-32009"></a>
<a id="trace-32024"></a>
<a id="trace-32026"></a>
<a id="trace-32033"></a>
<a id="trace-32035"></a>
<a id="trace-32058"></a>
<a id="trace-32060"></a>
<a id="trace-32067"></a>
<a id="trace-32069"></a>
<a id="trace-32085"></a>
<a id="trace-32087"></a>
<a id="trace-32101"></a>
<a id="trace-32103"></a>
<a id="trace-32118"></a>
<a id="trace-32120"></a>
<a id="trace-32126"></a>
<a id="trace-32128"></a>
<a id="trace-32198"></a>
<a id="trace-32200"></a>
<a id="trace-32207"></a>
<a id="trace-32209"></a>
<a id="trace-32219"></a>
<a id="trace-32221"></a>
<a id="trace-32227"></a>
<a id="trace-32229"></a>
<a id="trace-32244"></a>
<a id="trace-32246"></a>
<a id="trace-32250"></a>
<a id="trace-32252"></a>
<a id="trace-32267"></a>
<a id="trace-32269"></a>
<a id="trace-32285"></a>
<a id="trace-32287"></a>
<a id="trace-32305"></a>
<a id="trace-32307"></a>
<a id="trace-32318"></a>
<a id="trace-32320"></a>
<a id="trace-32397"></a>
<a id="trace-32399"></a>
<a id="trace-32404"></a>
<a id="trace-32406"></a>
<a id="trace-32419"></a>
<a id="trace-32421"></a>
<a id="trace-32427"></a>
<a id="trace-32429"></a>
<a id="trace-32439"></a>
<a id="trace-32441"></a>
<a id="trace-32447"></a>
<a id="trace-32449"></a>
<a id="trace-32463"></a>
<a id="trace-32465"></a>
<a id="trace-32473"></a>
<a id="trace-32475"></a>
<a id="trace-32486"></a>
<a id="trace-32488"></a>
<a id="trace-32499"></a>
<a id="trace-32501"></a>
<a id="trace-32576"></a>
<a id="trace-32578"></a>
<a id="trace-32583"></a>
<a id="trace-32585"></a>
<a id="trace-32606"></a>
<a id="trace-32608"></a>
<a id="trace-32614"></a>
<a id="trace-32616"></a>
<a id="trace-32636"></a>
<a id="trace-32638"></a>
<a id="trace-32646"></a>
<a id="trace-32648"></a>
<a id="trace-32661"></a>
<a id="trace-32663"></a>
<a id="trace-32672"></a>
<a id="trace-32674"></a>
<a id="trace-32687"></a>
<a id="trace-32689"></a>
<a id="trace-32695"></a>
<a id="trace-32697"></a>
<a id="trace-32767"></a>
<a id="trace-32769"></a>
<a id="trace-32776"></a>
<a id="trace-32778"></a>
<a id="trace-32791"></a>
<a id="trace-32793"></a>
<a id="trace-32801"></a>
<a id="trace-32803"></a>
<a id="trace-32816"></a>
<a id="trace-32818"></a>
<a id="trace-32825"></a>
<a id="trace-32827"></a>
<a id="trace-32850"></a>
<a id="trace-32852"></a>
<a id="trace-32868"></a>
<a id="trace-32870"></a>
<a id="trace-32882"></a>
<a id="trace-32884"></a>
<a id="trace-32892"></a>
<a id="trace-32894"></a>
<a id="trace-32964"></a>
<a id="trace-32966"></a>
<a id="trace-32971"></a>
<a id="trace-32973"></a>
<a id="trace-32985"></a>
<a id="trace-32987"></a>
<a id="trace-32994"></a>
<a id="trace-32996"></a>
<a id="trace-33007"></a>
<a id="trace-33009"></a>
<a id="trace-33014"></a>
<a id="trace-33016"></a>
<a id="trace-33034"></a>
<a id="trace-33036"></a>
<a id="trace-33046"></a>
<a id="trace-33048"></a>
<a id="trace-33061"></a>
<a id="trace-33063"></a>
<a id="trace-33076"></a>
<a id="trace-33078"></a>
<a id="trace-33157"></a>
<a id="trace-33159"></a>
<a id="trace-33170"></a>
<a id="trace-33172"></a>
<a id="trace-33184"></a>
<a id="trace-33186"></a>
<a id="trace-33190"></a>
<a id="trace-33192"></a>
<a id="trace-33204"></a>
<a id="trace-33206"></a>
<a id="trace-33212"></a>
<a id="trace-33214"></a>
<a id="trace-33229"></a>
<a id="trace-33231"></a>
<a id="trace-33238"></a>
<a id="trace-33240"></a>
<a id="trace-33255"></a>
<a id="trace-33257"></a>
<a id="trace-33263"></a>
<a id="trace-33265"></a>
<a id="trace-33340"></a>
<a id="trace-33342"></a>
<a id="trace-33352"></a>
<a id="trace-33354"></a>
<a id="trace-33366"></a>
<a id="trace-33368"></a>
<a id="trace-33381"></a>
<a id="trace-33383"></a>
<a id="trace-33403"></a>
<a id="trace-33405"></a>
<a id="trace-33411"></a>
<a id="trace-33413"></a>
<a id="trace-33427"></a>
<a id="trace-33429"></a>
<a id="trace-33438"></a>
<a id="trace-33440"></a>
<a id="trace-33453"></a>
<a id="trace-33455"></a>
<a id="trace-33461"></a>
<a id="trace-33463"></a>
<a id="trace-33533"></a>
<a id="trace-33535"></a>
<a id="trace-33540"></a>
<a id="trace-33542"></a>
<a id="trace-33554"></a>
<a id="trace-33556"></a>
<a id="trace-33567"></a>
<a id="trace-33569"></a>
<a id="trace-33580"></a>
<a id="trace-33582"></a>
<a id="trace-33593"></a>
<a id="trace-33595"></a>
<a id="trace-33616"></a>
<a id="trace-33618"></a>
<a id="trace-33627"></a>
<a id="trace-33629"></a>
<a id="trace-33651"></a>
<a id="trace-33653"></a>
<a id="trace-33661"></a>
<a id="trace-33663"></a>
<a id="trace-33733"></a>
<a id="trace-33735"></a>
<a id="trace-33740"></a>
<a id="trace-33742"></a>
<a id="trace-33754"></a>
<a id="trace-33756"></a>
<a id="trace-33761"></a>
<a id="trace-33763"></a>
<a id="trace-33775"></a>
<a id="trace-33777"></a>
<a id="trace-33784"></a>
<a id="trace-33786"></a>
<a id="trace-33803"></a>
<a id="trace-33805"></a>
<a id="trace-33871"></a>
<a id="trace-33873"></a>
<a id="trace-33896"></a>
<a id="trace-33898"></a>
<a id="trace-33904"></a>
<a id="trace-33906"></a>
<a id="trace-33987"></a>
<a id="trace-33989"></a>
<a id="trace-34000"></a>
<a id="trace-34002"></a>
<a id="trace-34020"></a>
<a id="trace-34022"></a>
<a id="trace-34028"></a>
<a id="trace-34030"></a>
<a id="trace-34043"></a>
<a id="trace-34045"></a>
<a id="trace-34049"></a>
<a id="trace-34051"></a>
<a id="trace-34068"></a>
<a id="trace-34070"></a>
<a id="trace-34079"></a>
<a id="trace-34081"></a>
<a id="trace-34096"></a>
<a id="trace-34098"></a>
<a id="trace-34108"></a>
<a id="trace-34110"></a>
<a id="trace-34237"></a>
<a id="trace-34239"></a>
<a id="trace-34248"></a>
<a id="trace-34250"></a>
<a id="trace-34264"></a>
<a id="trace-34266"></a>
<a id="trace-34288"></a>
<a id="trace-34290"></a>
<a id="trace-34303"></a>
<a id="trace-34305"></a>
<a id="trace-34311"></a>
<a id="trace-34313"></a>
<a id="trace-34333"></a>
<a id="trace-34335"></a>
<a id="trace-34346"></a>
<a id="trace-34348"></a>
<a id="trace-34362"></a>
<a id="trace-34364"></a>
<a id="trace-34375"></a>
<a id="trace-34377"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079399801950799, 'next_transition': 608}.
<a id="trace-815"></a>
<a id="trace-817"></a>
<a id="trace-843"></a>
<a id="trace-845"></a>
<a id="trace-874"></a>
<a id="trace-876"></a>
<a id="trace-909"></a>
<a id="trace-911"></a>
<a id="trace-932"></a>
<a id="trace-934"></a>
<a id="trace-958"></a>
<a id="trace-960"></a>
<a id="trace-986"></a>
<a id="trace-988"></a>
<a id="trace-1012"></a>
<a id="trace-1014"></a>
<a id="trace-1140"></a>
<a id="trace-1142"></a>
<a id="trace-1267"></a>
<a id="trace-1269"></a>
- 5.20s–10.70s (×20), actor 5, squad 0 (trace 815): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0725047001516905, 'next_transition': 843}.
<a id="trace-1149"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1149): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.573429857941338, 'next_transition': 131}.
<a id="trace-1280"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1280): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1061. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37874701224292195, 'next_transition': 1602}.
<a id="trace-1602"></a>
<a id="trace-1604"></a>
- 11.20s–11.20s (×2), actor 5, squad 0 (trace 1602): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1066. Next observer evidence: None.
<a id="trace-130"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 130): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46690470625668684, 'next_transition': 1644}.
<a id="trace-131"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 131): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.428000652931622, 'next_transition': 2524}.
<a id="trace-1611"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1611): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1611. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46690470625668684, 'next_transition': 1644}.
<a id="trace-1612"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1612): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1612. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46690470625668684, 'next_transition': 1644}.
<a id="trace-1613"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1613): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1613. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.428000652931622, 'next_transition': 2524}.
<a id="trace-1614"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1614): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1614. Next observer evidence: {'until': 19.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 22.428000652931622, 'next_transition': 2524}.
<a id="trace-1644"></a>
<a id="trace-1646"></a>
<a id="trace-1685"></a>
<a id="trace-1687"></a>
<a id="trace-1715"></a>
<a id="trace-1717"></a>
<a id="trace-1747"></a>
<a id="trace-1749"></a>
<a id="trace-1812"></a>
<a id="trace-1814"></a>
<a id="trace-1925"></a>
<a id="trace-1927"></a>
<a id="trace-1954"></a>
<a id="trace-1956"></a>
<a id="trace-1989"></a>
<a id="trace-1991"></a>
- 11.70s–16.25s (×16), actor 5, squad 0 (trace 1644): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1614. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4716773564022994, 'next_transition': 1685}.
<a id="trace-2030"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2030): received platoon directive. Knowledge: actor memory at 15.00s, trace 1851. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8449742158328848, 'next_transition': 2345}.
<a id="trace-2345"></a>
<a id="trace-2347"></a>
<a id="trace-2448"></a>
<a id="trace-2450"></a>
<a id="trace-2480"></a>
<a id="trace-2482"></a>
<a id="trace-2694"></a>
<a id="trace-2696"></a>
<a id="trace-2727"></a>
<a id="trace-2729"></a>
<a id="trace-2754"></a>
<a id="trace-2756"></a>
<a id="trace-2784"></a>
<a id="trace-2786"></a>
<a id="trace-2821"></a>
<a id="trace-2823"></a>
<a id="trace-2900"></a>
<a id="trace-2902"></a>
<a id="trace-2928"></a>
<a id="trace-2930"></a>
<a id="trace-2955"></a>
<a id="trace-2957"></a>
<a id="trace-3053"></a>
<a id="trace-3055"></a>
<a id="trace-3079"></a>
<a id="trace-3081"></a>
<a id="trace-3112"></a>
<a id="trace-3114"></a>
<a id="trace-3187"></a>
<a id="trace-3189"></a>
- 17.25s–27.75s (×30), actor 5, squad 0 (trace 2345): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1856. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3756580766903888, 'next_transition': 2448}.
<a id="trace-2524"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2524): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1859. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.731082453338448, 'next_transition': 3126}.
<a id="trace-2525"></a>
- 19.80s–19.80s (×1), actor 8, squad 1 (trace 2525): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1859. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.731082453338448, 'next_transition': 3126}.
<a id="trace-3126"></a>
- 27.60s–27.60s (×1), actor 8, squad 1 (trace 3126): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 2973. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 1.5395877197808505, 'next_transition': 730}.
<a id="trace-3208"></a>
- 28.20s–28.20s (×1), actor 0, squad 0 (trace 3208): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 2965. Next observer evidence: None.
<a id="trace-3221"></a>
<a id="trace-3223"></a>
<a id="trace-3243"></a>
<a id="trace-3245"></a>
<a id="trace-3273"></a>
<a id="trace-3275"></a>
<a id="trace-3293"></a>
<a id="trace-3295"></a>
<a id="trace-3383"></a>
<a id="trace-3385"></a>
<a id="trace-3396"></a>
<a id="trace-3398"></a>
<a id="trace-3418"></a>
<a id="trace-3420"></a>
<a id="trace-3428"></a>
<a id="trace-3430"></a>
<a id="trace-3454"></a>
<a id="trace-3456"></a>
<a id="trace-3484"></a>
<a id="trace-3486"></a>
<a id="trace-3501"></a>
<a id="trace-3503"></a>
<a id="trace-3600"></a>
<a id="trace-3602"></a>
<a id="trace-3619"></a>
<a id="trace-3621"></a>
<a id="trace-3650"></a>
<a id="trace-3652"></a>
<a id="trace-3680"></a>
<a id="trace-3682"></a>
<a id="trace-3696"></a>
<a id="trace-3698"></a>
<a id="trace-3714"></a>
<a id="trace-3716"></a>
<a id="trace-3728"></a>
<a id="trace-3730"></a>
<a id="trace-3813"></a>
<a id="trace-3838"></a>
<a id="trace-3852"></a>
<a id="trace-3861"></a>
<a id="trace-3863"></a>
<a id="trace-3878"></a>
<a id="trace-3880"></a>
<a id="trace-3894"></a>
<a id="trace-3896"></a>
<a id="trace-3911"></a>
<a id="trace-3913"></a>
<a id="trace-3926"></a>
<a id="trace-3928"></a>
<a id="trace-4036"></a>
<a id="trace-4038"></a>
<a id="trace-4047"></a>
<a id="trace-4049"></a>
<a id="trace-4075"></a>
<a id="trace-4077"></a>
<a id="trace-4093"></a>
<a id="trace-4095"></a>
<a id="trace-4110"></a>
<a id="trace-4112"></a>
<a id="trace-4218"></a>
<a id="trace-4220"></a>
<a id="trace-4257"></a>
<a id="trace-4259"></a>
- 28.25s–51.75s (×63), actor 5, squad 0 (trace 3221): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2970. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05618320235232679, 'next_transition': 3243}.
<a id="trace-378"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (events line 378): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4290"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 4290): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 4290. Next observer evidence: None.
<a id="trace-4291"></a>
- 52.65s–52.65s (×1), actor 5, squad 0 (trace 4291): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 52.65s, trace 4291. Next observer evidence: None.
<a id="trace-4295"></a>
<a id="trace-4297"></a>
<a id="trace-4314"></a>
<a id="trace-4316"></a>
<a id="trace-4446"></a>
<a id="trace-4448"></a>
<a id="trace-4458"></a>
<a id="trace-4460"></a>
<a id="trace-4476"></a>
<a id="trace-4478"></a>
<a id="trace-4503"></a>
<a id="trace-4505"></a>
<a id="trace-4536"></a>
<a id="trace-4538"></a>
<a id="trace-4551"></a>
<a id="trace-4553"></a>
- 52.75s–58.75s (×16), actor 5, squad 0 (trace 4295): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.65s, trace 4291. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4314}.
<a id="trace-4558"></a>
- 58.75s–58.75s (×1), actor 0, squad 0 (trace 4558): Reorganise: completed/failed drill. Knowledge: actor memory at 55.00s, trace 4372. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4959}.
<a id="trace-4565"></a>
- 58.75s–58.75s (×1), actor 0, squad 0 (trace 4565): MoveTactically. Knowledge: actor memory at 55.00s, trace 4372. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4959}.
<a id="trace-4566"></a>
- 58.75s–58.75s (×1), actor 0, squad 0 (trace 4566): traveling overwatch. Knowledge: actor memory at 55.00s, trace 4372. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4959}.
<a id="trace-4567"></a>
- 58.75s–58.75s (×1), actor 0, squad 0 (trace 4567): Reorganise complete. Knowledge: actor memory at 55.00s, trace 4372. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4959}.
<a id="trace-4959"></a>
<a id="trace-4961"></a>
<a id="trace-4983"></a>
<a id="trace-4985"></a>
<a id="trace-5107"></a>
<a id="trace-5109"></a>
<a id="trace-5135"></a>
<a id="trace-5137"></a>
<a id="trace-5196"></a>
<a id="trace-5198"></a>
<a id="trace-5257"></a>
<a id="trace-5259"></a>
<a id="trace-5284"></a>
<a id="trace-5286"></a>
<a id="trace-5303"></a>
<a id="trace-5305"></a>
<a id="trace-5419"></a>
<a id="trace-5421"></a>
<a id="trace-5455"></a>
<a id="trace-5457"></a>
<a id="trace-5503"></a>
<a id="trace-5505"></a>
<a id="trace-5525"></a>
<a id="trace-5527"></a>
- 59.25s–67.75s (×24), actor 5, squad 0 (trace 4959): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 4377. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843934846677198, 'next_transition': 4983}.
<a id="trace-5542"></a>
- 68.10s–68.10s (×1), actor 0, squad 0 (trace 5542): ReactToContact: cover and return fire. Knowledge: actor memory at 65.00s, trace 5324. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03547161583774594, 'next_transition': 6059}.
<a id="trace-5543"></a>
- 68.10s–68.10s (×1), actor 0, squad 0 (trace 5543): bounding overwatch. Knowledge: actor memory at 65.00s, trace 5324. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03547161583774594, 'next_transition': 6059}.
<a id="trace-5544"></a>
- 68.10s–68.10s (×1), actor 0, squad 0 (trace 5544): new contact inside 100 m. Knowledge: actor memory at 65.00s, trace 5324. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03547161583774594, 'next_transition': 6059}.
<a id="trace-6059"></a>
<a id="trace-6061"></a>
<a id="trace-6114"></a>
<a id="trace-6116"></a>
<a id="trace-6148"></a>
<a id="trace-6150"></a>
<a id="trace-6235"></a>
<a id="trace-6237"></a>
<a id="trace-6283"></a>
<a id="trace-6285"></a>
<a id="trace-6318"></a>
<a id="trace-6320"></a>
- 68.25s–71.25s (×12), actor 5, squad 0 (trace 6059): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 5329. Next observer evidence: {'until': 69.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9155592575553197, 'next_transition': 6114}.
<a id="trace-6332"></a>
- 71.60s–71.60s (×1), actor 0, squad 0 (trace 6332): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 70.00s, trace 6156. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08183515139342784, 'next_transition': 6338}.
<a id="trace-6338"></a>
<a id="trace-6340"></a>
<a id="trace-6363"></a>
<a id="trace-6365"></a>
<a id="trace-6426"></a>
<a id="trace-6428"></a>
<a id="trace-6448"></a>
<a id="trace-6450"></a>
- 71.75s–74.25s (×8), actor 5, squad 0 (trace 6338): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 6161. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3436519591057836, 'next_transition': 6363}.
<a id="trace-6491"></a>
- 74.65s–74.65s (×1), actor 0, squad 0 (trace 6491): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 70.00s, trace 6156. Next observer evidence: None.
<a id="trace-7059"></a>
<a id="trace-7061"></a>
<a id="trace-7162"></a>
<a id="trace-7164"></a>
<a id="trace-7181"></a>
<a id="trace-7183"></a>
<a id="trace-7236"></a>
<a id="trace-7238"></a>
<a id="trace-7265"></a>
<a id="trace-7267"></a>
<a id="trace-7303"></a>
<a id="trace-7305"></a>
<a id="trace-7331"></a>
<a id="trace-7333"></a>
- 74.75s–77.75s (×14), actor 5, squad 0 (trace 7059): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 6161. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2727873644298815, 'next_transition': 7162}.
<a id="trace-7360"></a>
- 78.20s–78.20s (×1), actor 0, squad 0 (trace 7360): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 75.00s, trace 7083. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38235211925194995, 'next_transition': 7389}.
<a id="trace-7389"></a>
<a id="trace-7391"></a>
<a id="trace-7413"></a>
<a id="trace-7415"></a>
<a id="trace-7431"></a>
<a id="trace-7433"></a>
<a id="trace-7519"></a>
<a id="trace-7521"></a>
- 78.75s–80.25s (×8), actor 5, squad 0 (trace 7389): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 7088. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3321508837241658, 'next_transition': 7413}.
<a id="trace-729"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (events line 729): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-730"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 730): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7528"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 7528): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.720965 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 7528. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03937568199806196, 'next_transition': 7542}.
<a id="trace-7529"></a>
- 80.30s–80.30s (×1), actor 5, squad 0 (trace 7529): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.720965 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 7529. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03937568199806196, 'next_transition': 7542}.
<a id="trace-7530"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 7530): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.720965 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 7530. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10777}.
<a id="trace-7531"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 7531): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.720965 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 80.30s, trace 7531. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10777}.
<a id="trace-7542"></a>
<a id="trace-7544"></a>
<a id="trace-7566"></a>
<a id="trace-7568"></a>
<a id="trace-7576"></a>
<a id="trace-7578"></a>
<a id="trace-7594"></a>
<a id="trace-7596"></a>
<a id="trace-7607"></a>
<a id="trace-7609"></a>
<a id="trace-7626"></a>
<a id="trace-7628"></a>
<a id="trace-7639"></a>
<a id="trace-7641"></a>
- 80.75s–83.75s (×14), actor 5, squad 0 (trace 7542): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 7531. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.33468624468335656, 'next_transition': 7566}.
<a id="trace-7650"></a>
- 84.00s–84.00s (×1), actor 0, squad 0 (trace 7650): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 7443. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1567228844728193, 'next_transition': 10652}.
<a id="trace-10336"></a>
- 84.00s–84.00s (×1), actor 0, squad 0 (trace 10336): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 80.00s, trace 7443. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1567228844728193, 'next_transition': 10652}.
<a id="trace-10337"></a>
- 84.00s–84.00s (×1), actor 0, squad 0 (trace 10337): MoveTactically. Knowledge: actor memory at 80.00s, trace 7443. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1567228844728193, 'next_transition': 10652}.
<a id="trace-10338"></a>
- 84.00s–84.00s (×1), actor 0, squad 0 (trace 10338): contact cover complete: assessment resumes closure. Knowledge: actor memory at 80.00s, trace 7443. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1567228844728193, 'next_transition': 10652}.
<a id="trace-10652"></a>
<a id="trace-10654"></a>
<a id="trace-10768"></a>
<a id="trace-10770"></a>
<a id="trace-10820"></a>
<a id="trace-10822"></a>
<a id="trace-10850"></a>
<a id="trace-10852"></a>
- 84.25s–86.75s (×8), actor 5, squad 0 (trace 10652): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 7531. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5753669661355632, 'next_transition': 10768}.
<a id="trace-10777"></a>
- 85.25s–85.25s (×1), actor 9, squad 1 (trace 10777): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 10693. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11598}.
<a id="trace-10778"></a>
- 85.25s–85.25s (×1), actor 9, squad 1 (trace 10778): bounding overwatch. Knowledge: actor memory at 85.00s, trace 10693. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11598}.
<a id="trace-10779"></a>
- 85.25s–85.25s (×1), actor 9, squad 1 (trace 10779): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 10693. Next observer evidence: {'until': 88.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11598}.
<a id="trace-10864"></a>
- 86.85s–86.85s (×1), actor 0, squad 0 (trace 10864): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 10685. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6065066259723576, 'next_transition': 11510}.
<a id="trace-10865"></a>
- 86.85s–86.85s (×1), actor 0, squad 0 (trace 10865): received platoon directive. Knowledge: actor memory at 85.00s, trace 10685. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6065066259723576, 'next_transition': 11510}.
<a id="trace-11510"></a>
<a id="trace-11512"></a>
<a id="trace-11541"></a>
<a id="trace-11543"></a>
<a id="trace-11583"></a>
<a id="trace-11585"></a>
<a id="trace-11628"></a>
<a id="trace-11630"></a>
- 87.25s–89.25s (×8), actor 5, squad 0 (trace 11510): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 10690. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6000067535109932, 'next_transition': 11541}.
<a id="trace-11598"></a>
- 88.55s–88.55s (×1), actor 9, squad 1 (trace 11598): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 10693. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1466}.
<a id="trace-11600"></a>
- 88.55s–88.55s (×1), actor 9, squad 1 (trace 11600): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 85.00s, trace 10693. Next observer evidence: {'until': 107.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1466}.
<a id="trace-11659"></a>
- 89.70s–89.70s (×1), actor 0, squad 0 (trace 11659): NeedSupport. Knowledge: actor memory at 85.00s, trace 10685. Next observer evidence: None.
<a id="trace-11664"></a>
<a id="trace-11666"></a>
- 89.75s–89.75s (×2), actor 5, squad 0 (trace 11664): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 10690. Next observer evidence: {'until': 90.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6800207494956192, 'next_transition': 11788}.
<a id="trace-11788"></a>
- 90.45s–90.45s (×1), actor 0, squad 0 (trace 11788): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 11681. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2794041413690011, 'next_transition': 11798}.
<a id="trace-11798"></a>
<a id="trace-11800"></a>
<a id="trace-11845"></a>
<a id="trace-11847"></a>
<a id="trace-11877"></a>
<a id="trace-11879"></a>
<a id="trace-11975"></a>
<a id="trace-11977"></a>
<a id="trace-11992"></a>
<a id="trace-11994"></a>
<a id="trace-12080"></a>
<a id="trace-12082"></a>
- 90.75s–95.25s (×12), actor 5, squad 0 (trace 11798): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 11686. Next observer evidence: {'until': 91.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.9383879084658927, 'next_transition': 11845}.
<a id="trace-12101"></a>
- 95.65s–95.65s (×1), actor 0, squad 0 (trace 12101): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 95.00s, trace 12003. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04033869063938497, 'next_transition': 15973}.
<a id="trace-15627"></a>
- 95.65s–95.65s (×1), actor 0, squad 0 (trace 15627): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 95.00s, trace 12003. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04033869063938497, 'next_transition': 15973}.
<a id="trace-15628"></a>
- 95.65s–95.65s (×1), actor 0, squad 0 (trace 15628): MoveTactically. Knowledge: actor memory at 95.00s, trace 12003. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04033869063938497, 'next_transition': 15973}.
<a id="trace-15629"></a>
- 95.65s–95.65s (×1), actor 0, squad 0 (trace 15629): contact cover complete: assessment resumes closure. Knowledge: actor memory at 95.00s, trace 12003. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04033869063938497, 'next_transition': 15973}.
<a id="trace-15973"></a>
<a id="trace-15975"></a>
<a id="trace-15995"></a>
<a id="trace-15997"></a>
<a id="trace-16052"></a>
<a id="trace-16054"></a>
<a id="trace-16079"></a>
<a id="trace-16081"></a>
<a id="trace-16117"></a>
<a id="trace-16119"></a>
<a id="trace-16170"></a>
<a id="trace-16172"></a>
<a id="trace-16203"></a>
<a id="trace-16205"></a>
<a id="trace-16227"></a>
<a id="trace-16229"></a>
<a id="trace-16313"></a>
<a id="trace-16315"></a>
<a id="trace-16330"></a>
<a id="trace-16332"></a>
- 96.25s–100.75s (×20), actor 5, squad 0 (trace 15973): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 12008. Next observer evidence: {'until': 96.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0074185777149329245, 'next_transition': 15995}.
<a id="trace-16386"></a>
- 102.10s–102.10s (×1), actor 0, squad 0 (trace 16386): ReactToContact: cover and return fire. Knowledge: actor memory at 100.00s, trace 16238. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4302525085199794, 'next_transition': 17037}.
<a id="trace-16387"></a>
- 102.10s–102.10s (×1), actor 0, squad 0 (trace 16387): new contact inside 100 m. Knowledge: actor memory at 100.00s, trace 16238. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4302525085199794, 'next_transition': 17037}.
<a id="trace-17037"></a>
<a id="trace-17039"></a>
<a id="trace-17053"></a>
<a id="trace-17055"></a>
<a id="trace-17093"></a>
<a id="trace-17095"></a>
- 102.25s–103.25s (×6), actor 5, squad 0 (trace 17037): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 16243. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8064485620340427, 'next_transition': 17053}.
<a id="trace-17113"></a>
- 103.50s–103.50s (×1), actor 0, squad 0 (trace 17113): new contact inside 100 m. Knowledge: actor memory at 100.00s, trace 16238. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2748578396684659, 'next_transition': 17692}.
<a id="trace-17692"></a>
<a id="trace-17694"></a>
<a id="trace-17730"></a>
<a id="trace-17732"></a>
<a id="trace-17772"></a>
<a id="trace-17774"></a>
<a id="trace-17864"></a>
<a id="trace-17866"></a>
<a id="trace-17893"></a>
<a id="trace-17895"></a>
<a id="trace-17953"></a>
<a id="trace-17955"></a>
- 103.75s–106.75s (×12), actor 5, squad 0 (trace 17692): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 16243. Next observer evidence: {'until': 104.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6853527274271312, 'next_transition': 17730}.
<a id="trace-18002"></a>
- 107.45s–107.45s (×1), actor 0, squad 0 (trace 18002): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 105.00s, trace 17789. Next observer evidence: {'until': 107.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08540817158486284, 'next_transition': 18011}.
<a id="trace-18011"></a>
<a id="trace-18013"></a>
<a id="trace-18041"></a>
<a id="trace-18043"></a>
<a id="trace-18064"></a>
<a id="trace-18066"></a>
<a id="trace-18096"></a>
<a id="trace-18098"></a>
<a id="trace-18113"></a>
<a id="trace-18115"></a>
<a id="trace-18201"></a>
<a id="trace-18203"></a>
<a id="trace-18217"></a>
<a id="trace-18219"></a>
- 107.75s–110.75s (×14), actor 5, squad 0 (trace 18011): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 17794. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10797142857142868, 'next_transition': 18041}.
<a id="trace-1466"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (events line 1466): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21178}.
<a id="trace-18023"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 18023): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.835435 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 18023. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21178}.
<a id="trace-18024"></a>
- 107.95s–107.95s (×1), actor 5, squad 1 (trace 18024): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.835435 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 107.95s, trace 18024. Next observer evidence: {'until': 112.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21178}.
<a id="trace-18226"></a>
- 110.75s–110.75s (×1), actor 0, squad 0 (trace 18226): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 110.00s, trace 18127. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2367063551588207, 'next_transition': 21152}.
<a id="trace-20910"></a>
- 110.75s–110.75s (×1), actor 0, squad 0 (trace 20910): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 110.00s, trace 18127. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2367063551588207, 'next_transition': 21152}.
<a id="trace-20911"></a>
- 110.75s–110.75s (×1), actor 0, squad 0 (trace 20911): MoveTactically. Knowledge: actor memory at 110.00s, trace 18127. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2367063551588207, 'next_transition': 21152}.
<a id="trace-20912"></a>
- 110.75s–110.75s (×1), actor 0, squad 0 (trace 20912): contact cover complete: assessment resumes closure. Knowledge: actor memory at 110.00s, trace 18127. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2367063551588207, 'next_transition': 21152}.
<a id="trace-21152"></a>
<a id="trace-21154"></a>
<a id="trace-21201"></a>
<a id="trace-21203"></a>
<a id="trace-21228"></a>
<a id="trace-21230"></a>
<a id="trace-21259"></a>
<a id="trace-21261"></a>
<a id="trace-21398"></a>
<a id="trace-21400"></a>
<a id="trace-21469"></a>
<a id="trace-21471"></a>
<a id="trace-21499"></a>
<a id="trace-21501"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
<a id="trace-21587"></a>
<a id="trace-21589"></a>
<a id="trace-21612"></a>
<a id="trace-21614"></a>
<a id="trace-21631"></a>
<a id="trace-21633"></a>
<a id="trace-21659"></a>
<a id="trace-21661"></a>
<a id="trace-21773"></a>
<a id="trace-21775"></a>
<a id="trace-21800"></a>
<a id="trace-21802"></a>
<a id="trace-21811"></a>
<a id="trace-21813"></a>
<a id="trace-21855"></a>
<a id="trace-21857"></a>
<a id="trace-21871"></a>
<a id="trace-21873"></a>
<a id="trace-21886"></a>
<a id="trace-21888"></a>
<a id="trace-21925"></a>
<a id="trace-21927"></a>
<a id="trace-22007"></a>
<a id="trace-22009"></a>
- 112.75s–125.25s (×40), actor 5, squad 0 (trace 21152): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 18132. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8538600219207375, 'next_transition': 21201}.
<a id="trace-21178"></a>
- 112.90s–112.90s (×1), actor 9, squad 1 (trace 21178): MoveTactically. Knowledge: actor memory at 110.00s, trace 18134. Next observer evidence: None.
<a id="trace-21179"></a>
- 112.90s–112.90s (×1), actor 9, squad 1 (trace 21179): received platoon directive. Knowledge: actor memory at 110.00s, trace 18134. Next observer evidence: None.
<a id="trace-21186"></a>
- 112.95s–112.95s (×1), actor 9, squad 1 (trace 21186): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 18134. Next observer evidence: {'until': 142.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2421}.
<a id="trace-22020"></a>
- 125.45s–125.45s (×1), actor 0, squad 0 (trace 22020): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 125.00s, trace 21939. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17339843381584014, 'next_transition': 22392}.
<a id="trace-22392"></a>
<a id="trace-22394"></a>
<a id="trace-22416"></a>
<a id="trace-22418"></a>
<a id="trace-22435"></a>
<a id="trace-22437"></a>
<a id="trace-22459"></a>
<a id="trace-22461"></a>
<a id="trace-22476"></a>
<a id="trace-22478"></a>
<a id="trace-22504"></a>
<a id="trace-22506"></a>
<a id="trace-22540"></a>
<a id="trace-22542"></a>
<a id="trace-22572"></a>
<a id="trace-22574"></a>
<a id="trace-22588"></a>
<a id="trace-22590"></a>
<a id="trace-22683"></a>
<a id="trace-22685"></a>
<a id="trace-22699"></a>
<a id="trace-22701"></a>
<a id="trace-22715"></a>
<a id="trace-22717"></a>
<a id="trace-22732"></a>
<a id="trace-22734"></a>
<a id="trace-22755"></a>
<a id="trace-22757"></a>
<a id="trace-22773"></a>
<a id="trace-22775"></a>
- 125.75s–132.80s (×30), actor 5, squad 0 (trace 22392): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 21944. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7173289472143188, 'next_transition': 22416}.
<a id="trace-22809"></a>
- 133.40s–133.40s (×1), actor 0, squad 0 (trace 22809): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 22599. Next observer evidence: {'until': 133.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12597507762720836, 'next_transition': 22949}.
<a id="trace-22932"></a>
- 133.40s–133.40s (×1), actor 0, squad 0 (trace 22932): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 130.00s, trace 22599. Next observer evidence: {'until': 133.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12597507762720836, 'next_transition': 22949}.
<a id="trace-22949"></a>
<a id="trace-22951"></a>
<a id="trace-23024"></a>
<a id="trace-23026"></a>
<a id="trace-23222"></a>
<a id="trace-23224"></a>
<a id="trace-23292"></a>
<a id="trace-23294"></a>
<a id="trace-23323"></a>
<a id="trace-23325"></a>
<a id="trace-23347"></a>
<a id="trace-23349"></a>
<a id="trace-23396"></a>
<a id="trace-23398"></a>
<a id="trace-23496"></a>
<a id="trace-23498"></a>
<a id="trace-23535"></a>
<a id="trace-23537"></a>
- 133.80s–140.80s (×18), actor 5, squad 0 (trace 22949): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 22604. Next observer evidence: {'until': 134.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.02095016986836015, 'next_transition': 23024}.
<a id="trace-23546"></a>
- 140.85s–140.85s (×1), actor 1, squad 0 (trace 23546): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 140.00s, trace 23411. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1815981072551992, 'next_transition': 23560}.
<a id="trace-23560"></a>
<a id="trace-23562"></a>
- 141.30s–141.30s (×2), actor 5, squad 0 (trace 23560): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 23415. Next observer evidence: {'until': 141.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24065}.
<a id="trace-23569"></a>
- 141.30s–141.30s (×1), actor 1, squad 0 (trace 23569): Reorganise: completed/failed drill. Knowledge: actor memory at 140.00s, trace 23411. Next observer evidence: {'until': 141.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24065}.
<a id="trace-23574"></a>
- 141.30s–141.30s (×1), actor 1, squad 0 (trace 23574): MoveTactically. Knowledge: actor memory at 140.00s, trace 23411. Next observer evidence: {'until': 141.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24065}.
<a id="trace-23575"></a>
- 141.30s–141.30s (×1), actor 1, squad 0 (trace 23575): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 140.00s, trace 23411. Next observer evidence: {'until': 141.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24065}.
<a id="trace-24065"></a>
<a id="trace-24067"></a>
<a id="trace-24099"></a>
<a id="trace-24142"></a>
<a id="trace-24157"></a>
<a id="trace-24204"></a>
- 141.80s–144.30s (×6), actor 5, squad 0 (trace 24065): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 23415. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24099}.
<a id="trace-24328"></a>
- 145.25s–145.25s (×1), actor 5, squad 0 (trace 24328): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 145.25s, trace 24328. Next observer evidence: None.
<a id="trace-24335"></a>
<a id="trace-24357"></a>
<a id="trace-24392"></a>
<a id="trace-24431"></a>
<a id="trace-24433"></a>
<a id="trace-24452"></a>
<a id="trace-24454"></a>
<a id="trace-24538"></a>
<a id="trace-24540"></a>
<a id="trace-24563"></a>
<a id="trace-24565"></a>
<a id="trace-24643"></a>
<a id="trace-24645"></a>
<a id="trace-24659"></a>
<a id="trace-24661"></a>
<a id="trace-24675"></a>
<a id="trace-24677"></a>
- 145.30s–151.30s (×17), actor 5, squad 0 (trace 24335): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.25s, trace 24328. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2152109961281288, 'next_transition': 24357}.
<a id="trace-24685"></a>
- 151.45s–151.45s (×1), actor 1, squad 0 (trace 24685): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 24573. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2739356148491373, 'next_transition': 24774}.
<a id="trace-24774"></a>
<a id="trace-24776"></a>
<a id="trace-24799"></a>
<a id="trace-24801"></a>
<a id="trace-24813"></a>
<a id="trace-24815"></a>
<a id="trace-24839"></a>
<a id="trace-24841"></a>
<a id="trace-24859"></a>
<a id="trace-24861"></a>
<a id="trace-24897"></a>
<a id="trace-24899"></a>
<a id="trace-24973"></a>
- 151.80s–155.30s (×13), actor 5, squad 0 (trace 24774): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 24576. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37357263913387523, 'next_transition': 24799}.
<a id="trace-24997"></a>
- 156.15s–156.15s (×1), actor 1, squad 0 (trace 24997): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 155.00s, trace 24908. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2814909288252939, 'next_transition': 25346}.
<a id="trace-24998"></a>
- 156.15s–156.15s (×1), actor 1, squad 0 (trace 24998): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 24908. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2814909288252939, 'next_transition': 25346}.
<a id="trace-24999"></a>
- 156.15s–156.15s (×1), actor 1, squad 0 (trace 24999): . Knowledge: actor memory at 155.00s, trace 24908. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2814909288252939, 'next_transition': 25346}.
<a id="trace-25346"></a>
<a id="trace-25379"></a>
<a id="trace-25381"></a>
<a id="trace-25435"></a>
<a id="trace-25437"></a>
<a id="trace-25502"></a>
<a id="trace-25504"></a>
- 156.30s–159.30s (×7), actor 5, squad 0 (trace 25346): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 24911. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1290706243367805, 'next_transition': 25379}.
<a id="trace-25532"></a>
- 159.80s–159.80s (×1), actor 1, squad 0 (trace 25532): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 155.00s, trace 24908. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5087976261470464, 'next_transition': 25902}.
<a id="trace-25533"></a>
- 159.80s–159.80s (×1), actor 1, squad 0 (trace 25533): rearward bound: one stationary suppressing element. Knowledge: actor memory at 155.00s, trace 24908. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5087976261470464, 'next_transition': 25902}.
<a id="trace-25902"></a>
- 160.30s–160.30s (×1), actor 5, squad 0 (trace 25902): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 25834. Next observer evidence: None.
<a id="trace-25913"></a>
- 160.35s–160.35s (×1), actor 5, squad 0 (trace 25913): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 160.35s, trace 25913. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.307704386868145, 'next_transition': 25953}.
<a id="trace-25953"></a>
<a id="trace-25955"></a>
- 161.30s–161.30s (×2), actor 5, squad 0 (trace 25953): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.35s, trace 25913. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.6309433466083476, 'next_transition': 2339}.
<a id="trace-2339"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (events line 2339): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 163.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5268768118092848, 'next_transition': 26109}.
<a id="trace-26064"></a>
- 163.25s–163.25s (×1), actor 5, squad 0 (trace 26064): renew committed intent (75 s lifetime). Knowledge: actor memory at 163.25s, trace 26064. Next observer evidence: {'until': 163.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5268768118092848, 'next_transition': 26109}.
<a id="trace-26109"></a>
- 163.75s–163.75s (×1), actor 1, squad 0 (trace 26109): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 160.00s, trace 25831. Next observer evidence: {'until': 164, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.5305408064784902, 'next_transition': 26118}.
<a id="trace-26118"></a>
- 164.05s–164.05s (×1), actor 1, squad 0 (trace 26118): Reorganise: completed/failed drill. Knowledge: actor memory at 160.00s, trace 25831. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35611260369935055, 'next_transition': 26376}.
<a id="trace-26121"></a>
- 164.05s–164.05s (×1), actor 1, squad 0 (trace 26121): ReactToContact: cover and return fire. Knowledge: actor memory at 160.00s, trace 25831. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35611260369935055, 'next_transition': 26376}.
<a id="trace-26122"></a>
- 164.05s–164.05s (×1), actor 1, squad 0 (trace 26122): Reorganise complete: known contact. Knowledge: actor memory at 160.00s, trace 25831. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35611260369935055, 'next_transition': 26376}.
<a id="trace-26376"></a>
<a id="trace-26378"></a>
<a id="trace-26487"></a>
<a id="trace-26489"></a>
<a id="trace-26523"></a>
<a id="trace-26525"></a>
<a id="trace-26554"></a>
<a id="trace-26556"></a>
<a id="trace-26586"></a>
<a id="trace-26588"></a>
- 164.30s–168.30s (×10), actor 5, squad 0 (trace 26376): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 163.25s, trace 26064. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.584844819807258, 'next_transition': 26487}.
<a id="trace-26600"></a>
- 168.60s–168.60s (×1), actor 1, squad 0 (trace 26600): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 165.00s, trace 26414. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299719373732269, 'next_transition': 26787}.
<a id="trace-26601"></a>
- 168.60s–168.60s (×1), actor 1, squad 0 (trace 26601): rearward bound: one stationary suppressing element. Knowledge: actor memory at 165.00s, trace 26414. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299719373732269, 'next_transition': 26787}.
<a id="trace-26787"></a>
<a id="trace-26789"></a>
<a id="trace-26903"></a>
<a id="trace-26925"></a>
<a id="trace-26927"></a>
<a id="trace-26959"></a>
<a id="trace-26982"></a>
<a id="trace-27067"></a>
<a id="trace-27069"></a>
<a id="trace-27092"></a>
<a id="trace-27120"></a>
<a id="trace-27150"></a>
<a id="trace-27152"></a>
<a id="trace-27182"></a>
<a id="trace-27184"></a>
- 169.30s–179.30s (×15), actor 5, squad 0 (trace 26787): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 26416. Next observer evidence: {'until': 171.2, 'shots': 2, 'casualties': 1, 'mean_displacement': 2.6837389976568695, 'next_transition': 26903}.
<a id="trace-2421"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (events line 2421): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 182.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27336}.
<a id="trace-27112"></a>
- 177.05s–177.05s (×1), actor 5, squad 1 (trace 27112): renew committed intent (75 s lifetime). Knowledge: actor memory at 177.05s, trace 27112. Next observer evidence: {'until': 182.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27336}.
<a id="trace-27265"></a>
- 180.25s–180.25s (×1), actor 1, squad 0 (trace 27265): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 27204. Next observer evidence: None.
<a id="trace-27266"></a>
- 180.25s–180.25s (×1), actor 1, squad 0 (trace 27266): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 27204. Next observer evidence: None.
<a id="trace-27270"></a>
<a id="trace-27301"></a>
<a id="trace-27321"></a>
<a id="trace-27358"></a>
<a id="trace-27360"></a>
<a id="trace-27384"></a>
<a id="trace-27386"></a>
<a id="trace-27464"></a>
<a id="trace-27466"></a>
<a id="trace-27488"></a>
<a id="trace-27490"></a>
<a id="trace-27509"></a>
<a id="trace-27511"></a>
<a id="trace-27536"></a>
<a id="trace-27557"></a>
<a id="trace-27559"></a>
<a id="trace-27637"></a>
<a id="trace-27639"></a>
<a id="trace-27660"></a>
<a id="trace-27682"></a>
- 180.30s–192.30s (×20), actor 5, squad 0 (trace 27270): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 27205. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0007500000000000284, 'next_transition': 27301}.
<a id="trace-27336"></a>
- 182.65s–182.65s (×1), actor 9, squad 1 (trace 27336): ReactToContact: cover and return fire. Knowledge: actor memory at 180.00s, trace 27206. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27481}.
<a id="trace-27337"></a>
- 182.65s–182.65s (×1), actor 9, squad 1 (trace 27337): new contact inside 100 m. Knowledge: actor memory at 180.00s, trace 27206. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27481}.
<a id="trace-27481"></a>
- 185.95s–185.95s (×1), actor 9, squad 1 (trace 27481): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 185.00s, trace 27407. Next observer evidence: {'until': 204.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2924}.
<a id="trace-27483"></a>
- 185.95s–185.95s (×1), actor 9, squad 1 (trace 27483): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 185.00s, trace 27407. Next observer evidence: {'until': 204.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2924}.
<a id="trace-27706"></a>
- 193.00s–193.00s (×1), actor 1, squad 0 (trace 27706): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 190.00s, trace 27578. Next observer evidence: None.
<a id="trace-27710"></a>
- 193.05s–193.05s (×1), actor 1, squad 0 (trace 27710): MoveTactically. Knowledge: actor memory at 190.00s, trace 27578. Next observer evidence: None.
<a id="trace-27711"></a>
- 193.05s–193.05s (×1), actor 1, squad 0 (trace 27711): received platoon directive. Knowledge: actor memory at 190.00s, trace 27578. Next observer evidence: None.
<a id="trace-27715"></a>
- 193.10s–193.10s (×1), actor 1, squad 0 (trace 27715): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 190.00s, trace 27578. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499489678405973, 'next_transition': 27719}.
<a id="trace-27719"></a>
<a id="trace-27747"></a>
<a id="trace-27749"></a>
<a id="trace-27836"></a>
<a id="trace-27838"></a>
<a id="trace-27866"></a>
<a id="trace-27891"></a>
<a id="trace-27893"></a>
<a id="trace-27922"></a>
<a id="trace-27924"></a>
<a id="trace-27953"></a>
<a id="trace-27955"></a>
<a id="trace-28034"></a>
<a id="trace-28036"></a>
<a id="trace-28060"></a>
<a id="trace-28062"></a>
<a id="trace-28110"></a>
<a id="trace-28112"></a>
<a id="trace-28138"></a>
<a id="trace-28140"></a>
<a id="trace-28242"></a>
<a id="trace-28244"></a>
<a id="trace-28264"></a>
<a id="trace-28266"></a>
<a id="trace-28287"></a>
<a id="trace-28289"></a>
<a id="trace-28312"></a>
<a id="trace-28339"></a>
<a id="trace-28482"></a>
<a id="trace-28484"></a>
<a id="trace-28526"></a>
<a id="trace-28551"></a>
<a id="trace-28575"></a>
<a id="trace-28577"></a>
<a id="trace-28602"></a>
<a id="trace-28604"></a>
<a id="trace-28685"></a>
<a id="trace-28687"></a>
<a id="trace-28714"></a>
<a id="trace-28716"></a>
<a id="trace-28744"></a>
<a id="trace-28782"></a>
<a id="trace-28784"></a>
<a id="trace-28813"></a>
<a id="trace-28894"></a>
<a id="trace-28896"></a>
<a id="trace-28925"></a>
<a id="trace-28927"></a>
<a id="trace-28949"></a>
<a id="trace-28951"></a>
<a id="trace-28980"></a>
<a id="trace-28982"></a>
<a id="trace-29103"></a>
<a id="trace-29105"></a>
<a id="trace-29127"></a>
<a id="trace-29129"></a>
<a id="trace-29169"></a>
<a id="trace-29197"></a>
<a id="trace-29199"></a>
<a id="trace-29287"></a>
<a id="trace-29289"></a>
<a id="trace-29325"></a>
<a id="trace-29327"></a>
- 193.30s–231.30s (×63), actor 5, squad 0 (trace 27719): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 27579. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749968420603258, 'next_transition': 27747}.
<a id="trace-2924"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (events line 2924): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-28162"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (trace 28162): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.481183 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 204.65s, trace 28162. Next observer evidence: {'until': 209.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28350}.
<a id="trace-28163"></a>
- 204.65s–204.65s (×1), actor 5, squad 1 (trace 28163): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.481183 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 204.65s, trace 28163. Next observer evidence: {'until': 209.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28350}.
<a id="trace-28350"></a>
- 209.60s–209.60s (×1), actor 9, squad 1 (trace 28350): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 205.00s, trace 28181. Next observer evidence: {'until': 220.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000044598448866, 'next_transition': 28906}.
<a id="trace-28351"></a>
- 209.60s–209.60s (×1), actor 9, squad 1 (trace 28351): rearward bound: one stationary suppressing element. Knowledge: actor memory at 205.00s, trace 28181. Next observer evidence: {'until': 220.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.000044598448866, 'next_transition': 28906}.
<a id="trace-28906"></a>
- 220.70s–220.70s (×1), actor 9, squad 1 (trace 28906): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 220.00s, trace 28835. Next observer evidence: {'until': 229.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29212}.
<a id="trace-28907"></a>
- 220.70s–220.70s (×1), actor 9, squad 1 (trace 28907): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 220.00s, trace 28835. Next observer evidence: {'until': 229.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29212}.
<a id="trace-29212"></a>
- 229.65s–229.65s (×1), actor 9, squad 1 (trace 29212): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 225.00s, trace 29037. Next observer evidence: {'until': 259.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3709}.
<a id="trace-3308"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (events line 3308): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29378}.
<a id="trace-29353"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 29353): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 29223. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29378}.
<a id="trace-29361"></a>
- 232.30s–232.30s (×1), actor 5, squad 0 (trace 29361): renew committed intent (75 s lifetime). Knowledge: actor memory at 232.30s, trace 29361. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29378}.
<a id="trace-29378"></a>
<a id="trace-29380"></a>
<a id="trace-29404"></a>
<a id="trace-29406"></a>
<a id="trace-29487"></a>
<a id="trace-29489"></a>
<a id="trace-29513"></a>
<a id="trace-29515"></a>
<a id="trace-29539"></a>
- 233.30s–237.30s (×9), actor 5, squad 0 (trace 29378): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 232.30s, trace 29361. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29404}.
<a id="trace-29569"></a>
- 238.25s–238.25s (×1), actor 1, squad 0 (trace 29569): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 235.00s, trace 29425. Next observer evidence: None.
<a id="trace-29570"></a>
- 238.25s–238.25s (×1), actor 1, squad 0 (trace 29570): MoveTactically. Knowledge: actor memory at 235.00s, trace 29425. Next observer evidence: None.
<a id="trace-29571"></a>
- 238.25s–238.25s (×1), actor 1, squad 0 (trace 29571): . Knowledge: actor memory at 235.00s, trace 29425. Next observer evidence: None.
<a id="trace-29575"></a>
<a id="trace-29606"></a>
<a id="trace-29608"></a>
<a id="trace-29688"></a>
<a id="trace-29690"></a>
<a id="trace-29715"></a>
<a id="trace-29717"></a>
<a id="trace-29738"></a>
<a id="trace-29768"></a>
<a id="trace-29802"></a>
<a id="trace-29883"></a>
<a id="trace-29910"></a>
<a id="trace-29912"></a>
<a id="trace-29934"></a>
<a id="trace-29936"></a>
<a id="trace-29957"></a>
<a id="trace-29989"></a>
<a id="trace-30071"></a>
<a id="trace-30099"></a>
<a id="trace-30101"></a>
<a id="trace-30123"></a>
<a id="trace-30125"></a>
<a id="trace-30153"></a>
<a id="trace-30155"></a>
<a id="trace-30181"></a>
<a id="trace-30287"></a>
<a id="trace-30289"></a>
<a id="trace-30311"></a>
<a id="trace-30313"></a>
<a id="trace-30342"></a>
<a id="trace-30344"></a>
<a id="trace-30370"></a>
<a id="trace-30372"></a>
<a id="trace-30459"></a>
<a id="trace-30482"></a>
<a id="trace-30484"></a>
<a id="trace-30505"></a>
<a id="trace-30507"></a>
<a id="trace-30531"></a>
<a id="trace-30533"></a>
<a id="trace-30565"></a>
<a id="trace-30567"></a>
<a id="trace-30649"></a>
<a id="trace-30651"></a>
<a id="trace-30671"></a>
<a id="trace-30673"></a>
<a id="trace-30700"></a>
<a id="trace-30702"></a>
<a id="trace-30725"></a>
<a id="trace-30727"></a>
<a id="trace-30836"></a>
<a id="trace-30838"></a>
<a id="trace-30870"></a>
<a id="trace-30888"></a>
<a id="trace-30890"></a>
- 238.30s–272.30s (×55), actor 5, squad 0 (trace 29575): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 29426. Next observer evidence: {'until': 239.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29606}.
<a id="trace-30911"></a>
- 273.05s–273.05s (×1), actor 1, squad 0 (trace 30911): traveling overwatch. Knowledge: actor memory at 270.00s, trace 30772. Next observer evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30916}.
<a id="trace-30912"></a>
- 273.05s–273.05s (×1), actor 1, squad 0 (trace 30912): current contact unknown for 10 s. Knowledge: actor memory at 270.00s, trace 30772. Next observer evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30916}.
<a id="trace-30916"></a>
<a id="trace-30918"></a>
<a id="trace-30949"></a>
<a id="trace-31031"></a>
<a id="trace-31058"></a>
<a id="trace-31060"></a>
<a id="trace-31090"></a>
<a id="trace-31092"></a>
<a id="trace-31114"></a>
<a id="trace-31139"></a>
<a id="trace-31141"></a>
<a id="trace-31221"></a>
<a id="trace-31223"></a>
<a id="trace-31253"></a>
<a id="trace-31277"></a>
<a id="trace-31304"></a>
<a id="trace-31306"></a>
<a id="trace-31335"></a>
<a id="trace-31337"></a>
<a id="trace-31420"></a>
<a id="trace-31442"></a>
<a id="trace-31444"></a>
<a id="trace-31464"></a>
- 273.30s–287.30s (×23), actor 5, squad 0 (trace 30916): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 30773. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 30949}.
<a id="trace-3709"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (events line 3709): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30929"></a>
- 273.70s–273.70s (×1), actor 5, squad 1 (trace 30929): renew committed intent (75 s lifetime). Knowledge: actor memory at 273.70s, trace 30929. Next observer evidence: {'until': 287.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3847}.
<a id="trace-3846"></a>
- 287.50s–287.50s (×1), actor 5, squad 0 (events line 3846): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31498}.
<a id="trace-3847"></a>
- 287.50s–287.50s (×1), actor 5, squad 1 (events line 3847): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 317.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33812}.
<a id="trace-31473"></a>
- 287.50s–287.50s (×1), actor 5, squad 0 (trace 31473): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 287.50s, trace 31473. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31498}.
<a id="trace-31474"></a>
- 287.50s–287.50s (×1), actor 5, squad 0 (trace 31474): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 287.50s, trace 31474. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31498}.
<a id="trace-31475"></a>
- 287.50s–287.50s (×1), actor 5, squad 1 (trace 31475): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 287.50s, trace 31475. Next observer evidence: {'until': 317.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33812}.
<a id="trace-31476"></a>
- 287.50s–287.50s (×1), actor 5, squad 1 (trace 31476): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 287.50s, trace 31476. Next observer evidence: {'until': 317.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33812}.
<a id="trace-31498"></a>
<a id="trace-31529"></a>
<a id="trace-31612"></a>
<a id="trace-31614"></a>
<a id="trace-31645"></a>
<a id="trace-31647"></a>
<a id="trace-31665"></a>
<a id="trace-31667"></a>
- 288.30s–292.30s (×8), actor 5, squad 0 (trace 31498): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 287.50s, trace 31476. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31529}.
<a id="trace-31683"></a>
- 292.85s–292.85s (×1), actor 1, squad 0 (trace 31683): received platoon directive. Knowledge: actor memory at 290.00s, trace 31551. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31688}.
<a id="trace-31688"></a>
<a id="trace-31690"></a>
<a id="trace-31715"></a>
<a id="trace-31717"></a>
<a id="trace-31806"></a>
<a id="trace-31833"></a>
<a id="trace-31864"></a>
<a id="trace-31866"></a>
<a id="trace-31889"></a>
<a id="trace-31990"></a>
<a id="trace-31992"></a>
<a id="trace-32018"></a>
<a id="trace-32020"></a>
<a id="trace-32053"></a>
<a id="trace-32080"></a>
<a id="trace-32112"></a>
<a id="trace-32114"></a>
<a id="trace-32192"></a>
<a id="trace-32194"></a>
<a id="trace-32213"></a>
<a id="trace-32215"></a>
<a id="trace-32239"></a>
<a id="trace-32261"></a>
<a id="trace-32263"></a>
<a id="trace-32299"></a>
<a id="trace-32301"></a>
<a id="trace-32391"></a>
<a id="trace-32393"></a>
<a id="trace-32415"></a>
<a id="trace-32435"></a>
<a id="trace-32457"></a>
<a id="trace-32459"></a>
<a id="trace-32570"></a>
<a id="trace-32572"></a>
<a id="trace-32601"></a>
<a id="trace-32630"></a>
<a id="trace-32632"></a>
<a id="trace-32656"></a>
<a id="trace-32681"></a>
<a id="trace-32683"></a>
<a id="trace-32762"></a>
<a id="trace-32785"></a>
<a id="trace-32787"></a>
<a id="trace-32845"></a>
<a id="trace-32878"></a>
<a id="trace-32958"></a>
<a id="trace-32960"></a>
<a id="trace-32979"></a>
<a id="trace-32981"></a>
<a id="trace-33002"></a>
<a id="trace-33030"></a>
<a id="trace-33057"></a>
<a id="trace-33151"></a>
<a id="trace-33153"></a>
<a id="trace-33178"></a>
<a id="trace-33180"></a>
<a id="trace-33198"></a>
<a id="trace-33200"></a>
<a id="trace-33224"></a>
<a id="trace-33250"></a>
<a id="trace-33334"></a>
<a id="trace-33336"></a>
<a id="trace-33361"></a>
<a id="trace-33397"></a>
<a id="trace-33399"></a>
<a id="trace-33421"></a>
<a id="trace-33423"></a>
<a id="trace-33449"></a>
<a id="trace-33528"></a>
<a id="trace-33550"></a>
<a id="trace-33574"></a>
<a id="trace-33576"></a>
<a id="trace-33610"></a>
<a id="trace-33612"></a>
<a id="trace-33645"></a>
<a id="trace-33647"></a>
<a id="trace-33727"></a>
<a id="trace-33729"></a>
<a id="trace-33748"></a>
<a id="trace-33750"></a>
<a id="trace-33769"></a>
<a id="trace-33771"></a>
<a id="trace-33797"></a>
<a id="trace-33799"></a>
<a id="trace-33891"></a>
<a id="trace-33983"></a>
<a id="trace-34014"></a>
<a id="trace-34016"></a>
<a id="trace-34039"></a>
<a id="trace-34062"></a>
<a id="trace-34064"></a>
<a id="trace-34090"></a>
<a id="trace-34092"></a>
<a id="trace-34233"></a>
<a id="trace-34259"></a>
- 293.30s–356.30s (×95), actor 5, squad 0 (trace 31688): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 31552. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31715}.
<a id="trace-33812"></a>
- 348.70s–348.70s (×1), actor 9, squad 1 (trace 33812): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 345.00s, trace 33666. Next observer evidence: {'until': 355, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 34130}.
<a id="trace-33813"></a>
- 348.70s–348.70s (×1), actor 9, squad 1 (trace 33813): MoveTactically. Knowledge: actor memory at 345.00s, trace 33666. Next observer evidence: {'until': 355, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 34130}.
<a id="trace-33814"></a>
- 348.70s–348.70s (×1), actor 9, squad 1 (trace 33814): traveling. Knowledge: actor memory at 345.00s, trace 33666. Next observer evidence: {'until': 355, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 34130}.
<a id="trace-33815"></a>
- 348.70s–348.70s (×1), actor 9, squad 1 (trace 33815): . Knowledge: actor memory at 345.00s, trace 33666. Next observer evidence: {'until': 355, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.0, 'next_transition': 34130}.
<a id="trace-34130"></a>
- 355.10s–355.10s (×1), actor 9, squad 1 (trace 34130): matching received arrivals: traveling stage complete. Knowledge: actor memory at 355.00s, trace 34118. Next observer evidence: {'until': 356.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.150100000000002, 'next_transition': 4550}.
<a id="trace-4549"></a>
- 356.50s–356.50s (×1), actor 5, squad 0 (events line 4549): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34298}.
<a id="trace-4550"></a>
- 356.50s–356.50s (×1), actor 5, squad 1 (events line 4550): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 359.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.849899999999998, 'next_transition': 34379}.
<a id="trace-34277"></a>
- 356.50s–356.50s (×1), actor 5, squad 0 (trace 34277): renew committed intent (75 s lifetime). Knowledge: actor memory at 356.50s, trace 34277. Next observer evidence: {'until': 357.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34298}.
<a id="trace-34278"></a>
- 356.50s–356.50s (×1), actor 5, squad 1 (trace 34278): renew committed intent (75 s lifetime). Knowledge: actor memory at 356.50s, trace 34278. Next observer evidence: {'until': 359.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.849899999999998, 'next_transition': 34379}.
<a id="trace-34298"></a>
<a id="trace-34327"></a>
<a id="trace-34329"></a>
<a id="trace-34356"></a>
<a id="trace-34358"></a>
- 357.30s–359.30s (×5), actor 5, squad 0 (trace 34298): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 356.50s, trace 34278. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34327}.
<a id="trace-34379"></a>
- 359.90s–359.90s (×1), actor 9, squad 1 (trace 34379): matching received arrivals: deployment leg complete. Knowledge: actor memory at 355.00s, trace 34118. Next observer evidence: None.
<a id="trace-34380"></a>
- 359.95s–359.95s (×1), actor 9, squad 1 (trace 34380): Reorganise: completed/failed drill. Knowledge: actor memory at 355.00s, trace 34118. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-34382"></a>
- 359.95s–359.95s (×1), actor 9, squad 1 (trace 34382): MoveTactically. Knowledge: actor memory at 355.00s, trace 34118. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-34383"></a>
- 359.95s–359.95s (×1), actor 9, squad 1 (trace 34383): Reorganise complete. Knowledge: actor memory at 355.00s, trace 34118. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

198 matched order/radio deliveries; 337 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.371s; maximum 5.450s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 2973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 2974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 2983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 2984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 3312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 3313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3314: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3315: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 3316: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 3317: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3318: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3319: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3320: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3321: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 3322: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 3323: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 3526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 3527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 3532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3533: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3534: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 3535: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 3536: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3537: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3538: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3539: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3540: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 3541: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 3542: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 3739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 3740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 3745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 3748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 3749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3751: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3752: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3753: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 3754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 3755: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 3938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 3939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 3944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 3947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 3948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3952: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 3953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 3954: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 4148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 4150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 4151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 4152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 4155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 4156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 4159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 4160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 4165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 4166: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 4290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.65s leader 5, trace 4291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 4372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 4374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 4375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 4380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 4383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 4384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 4389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 4390: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 5000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 5002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 5003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 5006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 5008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 5011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 5012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 5017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 5018: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 5324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 5326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 5327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 5331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 5332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 5335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 5336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 5341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 5342: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 6156: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 6157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 6158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 6159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 6160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 6161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 6162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 6163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 6164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 6165: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 6166: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 6167: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 6168: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 6169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 6170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 6171: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 6172: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 6173: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 6174: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 7083: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 7084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 7085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 7086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 7087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 7088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 7089: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 7090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 7091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 7092: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 7093: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 7094: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 7095: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 7096: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 7097: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 7098: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 7099: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 7100: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 7101: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 7443: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 7444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 7445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 7446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 7447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 7448: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 7449: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 7450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 7451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 7452: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 7453: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 7454: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 7455: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 7456: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 7457: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 7458: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 7459: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 7460: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 7461: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 7528: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 7529: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 7530: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 7531: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 10685: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 10686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 10687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 10688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 10689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 10690: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 10691: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 10692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 10693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 10694: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 10695: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 10696: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 10697: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 10698: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 10699: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 10700: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 10701: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 10702: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 10703: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 11681: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11682: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 11683: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 11684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11686: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11687: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 11688: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 11689: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11690: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11691: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11692: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11693: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11694: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11695: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11696: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11697: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 11698: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 11699: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 12003: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 12004: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 12005: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 12006: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 12007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 12008: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 12009: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 12010: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 12011: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12012: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12013: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12014: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12015: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12016: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12017: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12018: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12019: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 12020: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 12021: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 16238: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 16239: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 16240: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 16241: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 16242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 16243: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 16244: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 16245: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 16246: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 16247: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 16248: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 16249: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 16250: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 16251: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 16252: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 16253: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 16254: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 16255: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 16256: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 17789: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 17790: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 17791: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 17792: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 17793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 17794: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 17795: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 17796: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 17797: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 17798: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 17799: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 17800: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 17801: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 17802: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 17803: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 17804: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 17805: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 17806: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 18023: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.95s leader 5, trace 18024: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 18127: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 18128: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 18129: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 18130: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 18131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 18132: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 18133: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 18134: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 18135: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 18136: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 18137: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 18138: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 18139: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 18140: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 18141: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 18142: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 18143: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 18144: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 21319: estimate 12.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 21320: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 21321: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 21322: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 21323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 21324: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 21325: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 21326: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 21327: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 21328: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 21329: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 21330: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 21331: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 21332: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 21333: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 21334: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 21335: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 21336: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 21684: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 21685: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 21686: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 21687: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 21688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 21689: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 21690: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 21691: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 21692: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 21693: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 21694: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 21695: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 21696: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 21697: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 21698: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 21699: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 21700: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 21701: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 21939: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 21940: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 21941: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 21942: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 21943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 21944: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 21945: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 21946: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 21947: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 21948: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 21949: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 21950: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 21951: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 21952: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 21953: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 21954: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 21955: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 21956: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 22599: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 22600: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 22601: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 22602: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 22603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 22604: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 22605: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 22606: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 22607: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 22608: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 22609: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 22610: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 22611: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 22612: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 22613: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 22614: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 22615: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 22616: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 23041: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 23042: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 23043: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 23044: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 23045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 23046: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 23047: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 23048: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 23049: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 23050: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 23051: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 23052: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 23053: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 23054: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 23055: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 23056: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 23057: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 23058: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 23411: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 23412: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 23413: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 23414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 23415: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 23416: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 23417: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 23418: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 23419: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 23420: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 23421: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 23422: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 23423: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 23424: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 23425: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 23426: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 23427: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 24259: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 24260: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 24261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 24262: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 24263: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 24264: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 24265: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 24266: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 24267: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 24268: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 24269: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 24270: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 24271: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 24272: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 24273: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 24274: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.25s leader 5, trace 24328: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 24573: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 24574: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 24575: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 24576: estimate 12.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 24577: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 24578: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 24579: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 24580: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 24581: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 24582: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 24583: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 24584: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 24585: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 24586: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 24587: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 24588: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 24908: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 24909: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 24910: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 24911: estimate 12.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 24912: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 24913: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 24914: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 24915: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 24916: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 24917: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 24918: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 24919: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 24920: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 24921: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 24922: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 25831: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 25832: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 25833: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 25834: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 25835: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 25836: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 25837: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 25838: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 25839: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 25840: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 25841: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 25842: estimate 8.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 25843: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 25844: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 25845: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.35s leader 5, trace 25913: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 26064: estimate 12.65; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 26414: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 26415: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 26416: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 26417: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 26418: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 26419: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 26420: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 26421: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 26422: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 26423: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 26424: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 26425: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 26426: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 26427: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 26816: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 26817: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 26818: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 26819: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 26820: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 26821: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 26822: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 26823: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 26824: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 26825: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 26826: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 26827: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 26828: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 27008: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 27009: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 27010: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 27011: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 27012: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 27013: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 27014: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 27015: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 27016: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 27017: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 27018: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 27019: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 27020: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 177.05s leader 5, trace 27112: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 27204: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 27205: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 27206: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 27207: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 27208: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 27209: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 27210: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 27211: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 27212: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 27213: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 27214: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 27215: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 27216: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 27405: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 27406: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 27407: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 27408: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 27409: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 27410: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 27411: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 27412: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 27413: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 27414: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 27415: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 27416: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 27417: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 27578: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 27579: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 27580: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 27581: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 27582: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 27583: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 27584: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 27585: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 27586: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 27587: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 27588: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 27589: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 27590: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 27767: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 27768: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 27769: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 27770: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 27771: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 27772: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 27773: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 27774: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 27775: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 27776: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 27777: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 27778: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 27779: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 27973: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 27974: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 27975: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 27976: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 27977: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 27978: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 27979: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 27980: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 27981: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 27982: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 27983: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 27984: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 27985: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 28162: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 28163: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 28179: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 28180: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 28181: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 28182: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 28183: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 28184: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 28185: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 28186: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 28187: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 28188: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 28189: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 28190: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 28191: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 28421: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 28422: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 28423: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 28424: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 28425: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 28426: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 28427: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 28428: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 28429: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 28430: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 28431: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 28432: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 28433: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 28624: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 28625: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 28626: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 28627: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 28628: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 28629: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 28630: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 28631: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 28632: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 28633: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 28634: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 28635: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 28636: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 28833: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 28834: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 28835: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 28836: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 28837: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 28838: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 28839: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 28840: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 28841: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 28842: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 28843: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 28844: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 28845: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 29035: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 29036: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 29037: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 29038: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 29039: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 29040: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 29041: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 29042: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 29043: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 29044: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 29045: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 29046: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 29047: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 29222: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 29223: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 29224: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 29225: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 29226: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 29227: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 29228: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 29229: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 29230: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 29231: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 29232: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 29233: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 29234: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 232.30s leader 5, trace 29361: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 29425: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 29426: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 29427: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 29428: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 29429: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 29430: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 29431: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 29432: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 29433: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 29434: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 29435: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 29436: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 29437: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 29625: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 29626: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 29627: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 29628: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 29629: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 29630: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 29631: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 29632: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 29633: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 29634: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 29635: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 29636: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 29637: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 29822: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 29823: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 29824: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 29825: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 29826: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 29827: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 29828: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 29829: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 29830: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 29831: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 29832: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 29833: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 29834: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 30007: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 30008: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 30009: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 30010: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 30011: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 30012: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 30013: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 30014: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 30015: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 30016: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 30017: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 30018: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 30019: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 30198: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 30199: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 30200: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 30201: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 30202: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 30203: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 30204: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 30205: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 30206: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 30207: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 30208: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 30209: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 30210: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 30395: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 30396: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 30397: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 30398: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 30399: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 30400: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 30401: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 30402: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 30403: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 30404: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 30405: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 30406: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 30407: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 30586: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 30587: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 30588: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 30589: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 30590: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 30591: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 30592: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 30593: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 30594: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 30595: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 30596: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 30597: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 30598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 30772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 30773: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 30774: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 30775: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 30776: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 30777: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 30778: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 30779: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 30780: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 30781: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 30782: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 30783: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 30784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 30929: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 30970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 30971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 30972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 30973: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 30974: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 30975: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 30976: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 30977: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 30978: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 30979: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 30980: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 30981: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 30982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 31160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 31161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 31162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 31163: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 31164: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 31165: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 31166: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 31167: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 31168: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 31169: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 31170: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 31171: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 31172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 31356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 31357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 31358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 31359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 31360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 31361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 31362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 31363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 31364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 31365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 31366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 31367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 31368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 287.50s leader 5, trace 31473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 287.50s leader 5, trace 31474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 287.50s leader 5, trace 31475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 287.50s leader 5, trace 31476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 31551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 31552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 31553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 31554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 31555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 31556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 31557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 31558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 31559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 31560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 31561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 31562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 31563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 31737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 31738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 31739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 31740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 31741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 31742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 31743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 31744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 31745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 31746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 31747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 31748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 31749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 31928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 31929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 31930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 31931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 31932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 31933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 31934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 31935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 31936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 31937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 31938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 31939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 31940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 32131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 32132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 32133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 32134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 32135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 32136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 32137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 32138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 32139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 32140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 32141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 32142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 32143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 32323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 32324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 32325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 32326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 32327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 32328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 32329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 32330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 32331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 32332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 32333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 32334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 32335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 32502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 32503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 32504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 32505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 32506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 32507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 32508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 32509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 32510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 32511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 32512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 32513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 32514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 32700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 32701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 32702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 32703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 32704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 32705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 32706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 32707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 32708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 32709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 32710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 32711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 32712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 32897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 32898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 32899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 32900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 32901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 32902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 32903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 32904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 32905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 32906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 32907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 32908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 32909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 33079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 33080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 33081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 33082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 33083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 33084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 33085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 33086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 33087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 33088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 33089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 33090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 33091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 33270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 33271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 33272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 33273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 33274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 33275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 33276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 33277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 33278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 33279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 33280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 33281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 33282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 33467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 33468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 33469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 33470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 33471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 33472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 33473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 33474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 33475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 33476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 33477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 33478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 33479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 33664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 33665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 33666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 33667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 33668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 33669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 33670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 33671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 33672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 33673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 33674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 33675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 33676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 33916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 33917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 33918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 33919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 33920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 33921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 33922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 33923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 33924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 33925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 33926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 33927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 33928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 34116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 34117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 34118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 34119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 34120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 34121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 34122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 34123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 34124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 34125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 34126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 34127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 34128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.50s leader 5, trace 34277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 356.50s leader 5, trace 34278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 34437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 34438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 34439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 34440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 34441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 34442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 34443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 34444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 34445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 34446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 34447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 34448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 34449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Reed incapacitated
- 1: Vale killed in action
- 1: Ash killed in action
- 1: Moss incapacitated
- 1: Soren incapacitated
- 1: Tern incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
