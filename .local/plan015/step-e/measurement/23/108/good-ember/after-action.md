# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/23/108/good-ember/battle-108-1789674182767574007`

## Battle summary

**Draw** · 360 s · 419 shots.

### Turning points

- 20.3s, squad 4: contact (events line 196). First recorded contact.
- 43.9s, squad 0: help call ([trace 4451](#trace-4451)). No completion observed before termination.
- 140.4s, squad 0: withdrawal ([trace 9404](#trace-9404)). 175.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 189.2s, squad 0: withdrawal ([trace 11468](#trace-11468)). 201.3s, squad 0: took cover and returned fire.
- 201.2s, squad 0: help call ([trace 12011](#trace-12011)). No completion observed before termination.
- 204.7s, squad 0: withdrawal ([trace 12122](#trace-12122)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 67 shots, 4/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 352 shots, 4/6 lost.

### Decisions and attribution

At 140.4s, squad 0 chose broke contact ([trace 9404](#trace-9404)), followed by 4 shots and 0 own casualties; estimate 7.5 against 0 distinct squad-reported contacts; At 137.1s, squad 0 chose took cover and returned fire ([trace 9071](#trace-9071)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 138.1s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 9273](#trace-9273)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 935](#trace-935)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0512330147344355, 'next_transition': 960}.
- 41.4s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.220532 retreat threshold=0.220000 initiative=requires intent ([trace 4419](#trace-4419)). Following evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4423}.

### Communication

143 matched deliveries (mean 0.32s, max 5.55s); 154 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 20.30s, squad 4, contact, evidence events line 196: First recorded contact; .
- 43.90s, squad 0, help call, evidence 4451: NeedSupport; No completion observed before termination.
- 140.45s, squad 0, withdrawal, evidence 9404: BreakContact: believed ratio at least two without superiority; 175.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 189.20s, squad 0, withdrawal, evidence 11468: BreakContact: believed ratio at least two without superiority; 201.3s, squad 0: took cover and returned fire.
- 201.25s, squad 0, help call, evidence 12011: NeedSupport; No completion observed before termination.
- 204.65s, squad 0, withdrawal, evidence 12122: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.92469719003222, 'next_transition': 619}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.92469719003222, 'next_transition': 619}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.92469719003222, 'next_transition': 619}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
<a id="trace-409"></a>
<a id="trace-428"></a>
<a id="trace-502"></a>
<a id="trace-514"></a>
<a id="trace-536"></a>
<a id="trace-554"></a>
<a id="trace-565"></a>
<a id="trace-580"></a>
<a id="trace-600"></a>
<a id="trace-621"></a>
<a id="trace-633"></a>
<a id="trace-642"></a>
<a id="trace-724"></a>
<a id="trace-733"></a>
<a id="trace-837"></a>
<a id="trace-859"></a>
<a id="trace-881"></a>
<a id="trace-898"></a>
<a id="trace-917"></a>
<a id="trace-934"></a>
<a id="trace-962"></a>
<a id="trace-978"></a>
<a id="trace-1056"></a>
<a id="trace-1067"></a>
<a id="trace-1086"></a>
<a id="trace-1101"></a>
<a id="trace-1112"></a>
<a id="trace-1124"></a>
<a id="trace-1140"></a>
<a id="trace-1149"></a>
<a id="trace-1163"></a>
<a id="trace-1172"></a>
<a id="trace-1363"></a>
<a id="trace-1386"></a>
<a id="trace-1414"></a>
<a id="trace-1428"></a>
<a id="trace-1560"></a>
<a id="trace-1592"></a>
<a id="trace-1618"></a>
<a id="trace-1629"></a>
<a id="trace-1650"></a>
<a id="trace-1680"></a>
<a id="trace-1759"></a>
<a id="trace-1771"></a>
<a id="trace-3663"></a>
<a id="trace-3784"></a>
<a id="trace-3807"></a>
<a id="trace-3832"></a>
<a id="trace-3960"></a>
<a id="trace-3975"></a>
<a id="trace-4010"></a>
<a id="trace-4042"></a>
<a id="trace-4124"></a>
<a id="trace-4137"></a>
<a id="trace-4154"></a>
<a id="trace-4172"></a>
<a id="trace-4178"></a>
<a id="trace-4181"></a>
<a id="trace-4187"></a>
<a id="trace-4194"></a>
<a id="trace-4204"></a>
<a id="trace-4210"></a>
<a id="trace-4280"></a>
<a id="trace-4285"></a>
<a id="trace-4293"></a>
<a id="trace-4298"></a>
<a id="trace-4305"></a>
<a id="trace-4308"></a>
<a id="trace-4315"></a>
<a id="trace-4321"></a>
<a id="trace-4329"></a>
<a id="trace-4335"></a>
<a id="trace-4406"></a>
<a id="trace-4412"></a>
<a id="trace-4418"></a>
<a id="trace-4425"></a>
<a id="trace-4432"></a>
<a id="trace-4436"></a>
<a id="trace-4443"></a>
<a id="trace-4449"></a>
<a id="trace-4462"></a>
<a id="trace-4467"></a>
<a id="trace-4537"></a>
<a id="trace-4543"></a>
<a id="trace-4549"></a>
<a id="trace-4556"></a>
<a id="trace-4562"></a>
<a id="trace-4567"></a>
<a id="trace-4577"></a>
<a id="trace-4591"></a>
<a id="trace-4599"></a>
<a id="trace-4606"></a>
<a id="trace-4693"></a>
<a id="trace-4699"></a>
<a id="trace-4796"></a>
<a id="trace-4812"></a>
<a id="trace-4827"></a>
<a id="trace-4847"></a>
<a id="trace-4854"></a>
<a id="trace-4859"></a>
<a id="trace-4869"></a>
<a id="trace-4872"></a>
<a id="trace-4941"></a>
<a id="trace-4948"></a>
<a id="trace-5014"></a>
<a id="trace-5030"></a>
<a id="trace-5041"></a>
<a id="trace-5049"></a>
<a id="trace-5063"></a>
<a id="trace-5071"></a>
<a id="trace-5083"></a>
<a id="trace-5089"></a>
<a id="trace-5168"></a>
<a id="trace-5180"></a>
<a id="trace-5189"></a>
<a id="trace-5198"></a>
<a id="trace-5215"></a>
<a id="trace-5225"></a>
<a id="trace-5236"></a>
<a id="trace-5313"></a>
<a id="trace-5328"></a>
<a id="trace-5349"></a>
<a id="trace-5424"></a>
<a id="trace-5439"></a>
<a id="trace-5443"></a>
<a id="trace-5452"></a>
<a id="trace-5457"></a>
<a id="trace-5465"></a>
<a id="trace-5470"></a>
<a id="trace-5482"></a>
<a id="trace-5489"></a>
<a id="trace-5563"></a>
<a id="trace-5567"></a>
<a id="trace-5573"></a>
<a id="trace-5576"></a>
<a id="trace-5584"></a>
<a id="trace-5587"></a>
<a id="trace-5595"></a>
<a id="trace-5598"></a>
<a id="trace-5602"></a>
<a id="trace-5609"></a>
<a id="trace-5675"></a>
<a id="trace-5679"></a>
<a id="trace-5684"></a>
<a id="trace-5689"></a>
<a id="trace-5697"></a>
<a id="trace-5703"></a>
<a id="trace-5713"></a>
<a id="trace-5719"></a>
<a id="trace-5727"></a>
<a id="trace-5734"></a>
<a id="trace-5803"></a>
<a id="trace-5809"></a>
<a id="trace-5817"></a>
<a id="trace-5824"></a>
<a id="trace-5833"></a>
<a id="trace-5839"></a>
<a id="trace-5849"></a>
<a id="trace-5855"></a>
<a id="trace-5865"></a>
<a id="trace-5872"></a>
<a id="trace-5942"></a>
<a id="trace-5946"></a>
<a id="trace-5953"></a>
<a id="trace-5961"></a>
<a id="trace-5969"></a>
<a id="trace-5985"></a>
<a id="trace-5996"></a>
<a id="trace-6000"></a>
<a id="trace-6009"></a>
<a id="trace-6018"></a>
<a id="trace-6089"></a>
<a id="trace-6094"></a>
<a id="trace-6103"></a>
<a id="trace-6109"></a>
<a id="trace-6117"></a>
<a id="trace-6125"></a>
<a id="trace-6136"></a>
<a id="trace-6144"></a>
<a id="trace-6156"></a>
<a id="trace-6168"></a>
<a id="trace-6237"></a>
<a id="trace-6242"></a>
<a id="trace-6252"></a>
<a id="trace-6258"></a>
<a id="trace-6267"></a>
<a id="trace-6272"></a>
<a id="trace-6281"></a>
<a id="trace-6288"></a>
<a id="trace-6296"></a>
<a id="trace-6307"></a>
<a id="trace-6376"></a>
<a id="trace-6382"></a>
<a id="trace-6398"></a>
<a id="trace-6405"></a>
<a id="trace-6415"></a>
<a id="trace-6420"></a>
<a id="trace-6429"></a>
<a id="trace-6434"></a>
<a id="trace-6442"></a>
<a id="trace-6450"></a>
<a id="trace-6518"></a>
<a id="trace-6524"></a>
<a id="trace-6534"></a>
<a id="trace-6540"></a>
<a id="trace-6551"></a>
<a id="trace-6562"></a>
<a id="trace-6575"></a>
<a id="trace-6580"></a>
<a id="trace-6589"></a>
<a id="trace-6596"></a>
<a id="trace-6664"></a>
<a id="trace-6673"></a>
<a id="trace-6681"></a>
<a id="trace-6689"></a>
<a id="trace-6696"></a>
<a id="trace-6703"></a>
<a id="trace-6713"></a>
<a id="trace-6720"></a>
<a id="trace-6735"></a>
<a id="trace-6742"></a>
<a id="trace-6814"></a>
<a id="trace-6821"></a>
<a id="trace-6829"></a>
<a id="trace-6845"></a>
<a id="trace-6856"></a>
<a id="trace-6868"></a>
<a id="trace-6880"></a>
<a id="trace-6887"></a>
<a id="trace-6896"></a>
<a id="trace-6902"></a>
<a id="trace-6978"></a>
<a id="trace-8528"></a>
<a id="trace-8546"></a>
<a id="trace-8553"></a>
<a id="trace-8573"></a>
<a id="trace-8581"></a>
<a id="trace-8592"></a>
<a id="trace-8599"></a>
<a id="trace-8611"></a>
<a id="trace-8618"></a>
<a id="trace-8691"></a>
<a id="trace-8697"></a>
<a id="trace-8713"></a>
<a id="trace-8720"></a>
<a id="trace-8737"></a>
<a id="trace-8745"></a>
<a id="trace-8756"></a>
<a id="trace-8771"></a>
<a id="trace-8779"></a>
<a id="trace-8789"></a>
<a id="trace-8863"></a>
<a id="trace-8868"></a>
<a id="trace-8877"></a>
<a id="trace-8883"></a>
<a id="trace-8903"></a>
<a id="trace-8914"></a>
<a id="trace-8925"></a>
<a id="trace-8931"></a>
<a id="trace-8948"></a>
<a id="trace-8955"></a>
<a id="trace-9027"></a>
<a id="trace-9034"></a>
<a id="trace-9054"></a>
<a id="trace-9067"></a>
<a id="trace-9249"></a>
<a id="trace-9262"></a>
<a id="trace-9290"></a>
<a id="trace-9297"></a>
<a id="trace-9317"></a>
<a id="trace-9327"></a>
- 1.60s–139.80s (×276), actor 37, squad 4 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4830056986028501, 'next_transition': 351}.
<a id="trace-619"></a>
<a id="trace-631"></a>
<a id="trace-640"></a>
<a id="trace-722"></a>
<a id="trace-731"></a>
- 8.70s–10.70s (×5), actor 5, squad 0 (trace 619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999878857527198, 'next_transition': 631}.
<a id="trace-737"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 737): traveling overwatch. Knowledge: actor memory at 10.00s, trace 644. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4000150516238515, 'next_transition': 835}.
<a id="trace-738"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 738): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 644. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4000150516238515, 'next_transition': 835}.
<a id="trace-835"></a>
<a id="trace-915"></a>
- 11.20s–13.20s (×2), actor 5, squad 0 (trace 835): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 647. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.735383805542703, 'next_transition': 915}.
<a id="trace-142"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0512330147344355, 'next_transition': 960}.
<a id="trace-935"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 935): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 935. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0512330147344355, 'next_transition': 960}.
<a id="trace-936"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 936): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 936. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0512330147344355, 'next_transition': 960}.
<a id="trace-960"></a>
<a id="trace-976"></a>
<a id="trace-1054"></a>
<a id="trace-1065"></a>
<a id="trace-1084"></a>
<a id="trace-1099"></a>
<a id="trace-1110"></a>
<a id="trace-1122"></a>
<a id="trace-1147"></a>
<a id="trace-1161"></a>
<a id="trace-1170"></a>
- 14.20s–19.75s (×11), actor 5, squad 0 (trace 960): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 936. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36749844397724135, 'next_transition': 976}.
<a id="trace-1173"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 1173): received platoon directive. Knowledge: actor memory at 15.00s, trace 980. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26374999999999993, 'next_transition': 1361}.
<a id="trace-1361"></a>
<a id="trace-1384"></a>
<a id="trace-1426"></a>
- 20.25s–21.75s (×3), actor 5, squad 0 (trace 1361): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1289. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13125154442477577, 'next_transition': 1384}.
<a id="trace-1435"></a>
- 21.90s–21.90s (×1), actor 0, squad 0 (trace 1435): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 1286. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19462921090142424, 'next_transition': 1616}.
<a id="trace-1436"></a>
- 21.90s–21.90s (×1), actor 0, squad 0 (trace 1436): bounding overwatch. Knowledge: actor memory at 20.00s, trace 1286. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19462921090142424, 'next_transition': 1616}.
<a id="trace-1437"></a>
- 21.90s–21.90s (×1), actor 0, squad 0 (trace 1437): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1286. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19462921090142424, 'next_transition': 1616}.
<a id="trace-1616"></a>
<a id="trace-1648"></a>
<a id="trace-1678"></a>
<a id="trace-1757"></a>
<a id="trace-1769"></a>
- 23.25s–25.75s (×5), actor 5, squad 0 (trace 1616): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1289. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48520987964259116, 'next_transition': 1648}.
<a id="trace-1772"></a>
- 25.75s–25.75s (×1), actor 0, squad 0 (trace 1772): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 1687. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1775}.
<a id="trace-1775"></a>
- 26.00s–26.00s (×1), actor 0, squad 0 (trace 1775): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 1687. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3664}.
<a id="trace-3542"></a>
- 26.00s–26.00s (×1), actor 0, squad 0 (trace 3542): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 1687. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3664}.
<a id="trace-3543"></a>
- 26.00s–26.00s (×1), actor 0, squad 0 (trace 3543): MoveTactically. Knowledge: actor memory at 25.00s, trace 1687. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3664}.
<a id="trace-3544"></a>
- 26.00s–26.00s (×1), actor 0, squad 0 (trace 3544): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 1687. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3664}.
<a id="trace-3664"></a>
- 26.25s–26.25s (×1), actor 0, squad 0 (trace 3664): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1687. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0950064320193615, 'next_transition': 3805}.
<a id="trace-3665"></a>
- 26.25s–26.25s (×1), actor 0, squad 0 (trace 3665): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1687. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0950064320193615, 'next_transition': 3805}.
<a id="trace-3805"></a>
- 27.25s–27.25s (×1), actor 5, squad 0 (trace 3805): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1690. Next observer evidence: {'until': 28, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0737630678888083, 'next_transition': 3841}.
<a id="trace-3841"></a>
- 28.05s–28.05s (×1), actor 0, squad 0 (trace 3841): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 1687. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3958}.
<a id="trace-3958"></a>
<a id="trace-4040"></a>
<a id="trace-4122"></a>
<a id="trace-4135"></a>
- 28.25s–30.75s (×4), actor 5, squad 0 (trace 3958): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1690. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4040}.
<a id="trace-4164"></a>
- 31.65s–31.65s (×1), actor 0, squad 0 (trace 4164): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4050. Next observer evidence: None.
<a id="trace-4170"></a>
<a id="trace-4176"></a>
<a id="trace-4185"></a>
<a id="trace-4192"></a>
<a id="trace-4202"></a>
<a id="trace-4208"></a>
<a id="trace-4278"></a>
<a id="trace-4283"></a>
<a id="trace-4296"></a>
<a id="trace-4303"></a>
<a id="trace-4313"></a>
<a id="trace-4319"></a>
<a id="trace-4333"></a>
<a id="trace-4404"></a>
<a id="trace-4410"></a>
<a id="trace-4416"></a>
- 31.75s–41.25s (×16), actor 5, squad 0 (trace 4170): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 4053. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4176}.
<a id="trace-328"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (events line 328): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4419"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 4419): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.220532 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 4419. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4423}.
<a id="trace-4420"></a>
- 41.35s–41.35s (×1), actor 5, squad 0 (trace 4420): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.220532 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 41.35s, trace 4420. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4423}.
<a id="trace-4423"></a>
<a id="trace-4430"></a>
<a id="trace-4434"></a>
<a id="trace-4441"></a>
<a id="trace-4447"></a>
- 41.75s–43.75s (×5), actor 5, squad 0 (trace 4423): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.35s, trace 4420. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4430}.
<a id="trace-4451"></a>
- 43.90s–43.90s (×1), actor 0, squad 0 (trace 4451): NeedSupport. Knowledge: actor memory at 40.00s, trace 4337. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4541}.
<a id="trace-4541"></a>
<a id="trace-4547"></a>
<a id="trace-4554"></a>
<a id="trace-4560"></a>
<a id="trace-4565"></a>
<a id="trace-4589"></a>
<a id="trace-4597"></a>
- 45.75s–49.25s (×7), actor 5, squad 0 (trace 4541): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4472. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4547}.
<a id="trace-4601"></a>
- 49.65s–49.65s (×1), actor 1, squad 0 (trace 4601): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 45.00s, trace 4470. Next observer evidence: None.
<a id="trace-4604"></a>
- 49.75s–49.75s (×1), actor 5, squad 0 (trace 4604): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4472. Next observer evidence: {'until': 50, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040070624519052, 'next_transition': 4675}.
<a id="trace-4675"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 4675): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 4608. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199925028265885, 'next_transition': 4691}.
<a id="trace-4679"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 4679): MoveTactically. Knowledge: actor memory at 50.00s, trace 4608. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199925028265885, 'next_transition': 4691}.
<a id="trace-4680"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 4680): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 50.00s, trace 4608. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199925028265885, 'next_transition': 4691}.
<a id="trace-4691"></a>
<a id="trace-4697"></a>
- 50.25s–50.75s (×2), actor 5, squad 0 (trace 4691): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 4610. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040070624519066, 'next_transition': 4697}.
<a id="trace-4706"></a>
- 51.15s–51.15s (×1), actor 1, squad 0 (trace 4706): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 50.00s, trace 4608. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200481582699996, 'next_transition': 4794}.
<a id="trace-4794"></a>
<a id="trace-4825"></a>
<a id="trace-4845"></a>
<a id="trace-4946"></a>
- 51.25s–55.75s (×4), actor 5, squad 0 (trace 4794): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 4610. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6614900376168563, 'next_transition': 4825}.
<a id="trace-4954"></a>
- 56.15s–56.15s (×1), actor 1, squad 0 (trace 4954): traveling overwatch. Knowledge: actor memory at 55.00s, trace 4875. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598724538619005, 'next_transition': 5012}.
<a id="trace-4955"></a>
- 56.15s–56.15s (×1), actor 1, squad 0 (trace 4955): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 55.00s, trace 4875. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12598724538619005, 'next_transition': 5012}.
<a id="trace-5012"></a>
<a id="trace-5028"></a>
<a id="trace-5039"></a>
<a id="trace-5047"></a>
<a id="trace-5061"></a>
<a id="trace-5069"></a>
<a id="trace-5081"></a>
<a id="trace-5087"></a>
<a id="trace-5166"></a>
<a id="trace-5178"></a>
<a id="trace-5187"></a>
<a id="trace-5196"></a>
<a id="trace-5213"></a>
<a id="trace-5223"></a>
<a id="trace-5234"></a>
- 56.25s–63.25s (×15), actor 5, squad 0 (trace 5012): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 4877. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25201448212354755, 'next_transition': 5028}.
<a id="trace-5237"></a>
- 63.25s–63.25s (×1), actor 1, squad 0 (trace 5237): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 5093. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20791475023191613, 'next_transition': 5311}.
<a id="trace-5238"></a>
- 63.25s–63.25s (×1), actor 1, squad 0 (trace 5238): bounding overwatch. Knowledge: actor memory at 60.00s, trace 5093. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20791475023191613, 'next_transition': 5311}.
<a id="trace-5239"></a>
- 63.25s–63.25s (×1), actor 1, squad 0 (trace 5239): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 5093. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20791475023191613, 'next_transition': 5311}.
<a id="trace-5311"></a>
<a id="trace-5326"></a>
<a id="trace-5347"></a>
<a id="trace-5422"></a>
<a id="trace-5427"></a>
<a id="trace-5450"></a>
<a id="trace-5455"></a>
- 63.75s–67.75s (×7), actor 5, squad 0 (trace 5311): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 5095. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2660947628195637, 'next_transition': 5326}.
<a id="trace-5475"></a>
- 68.80s–68.80s (×1), actor 4, squad 0 (trace 5475): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 65.00s, trace 5357. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300304952936789, 'next_transition': 5480}.
<a id="trace-5480"></a>
<a id="trace-5487"></a>
<a id="trace-5561"></a>
<a id="trace-5565"></a>
<a id="trace-5687"></a>
<a id="trace-5695"></a>
<a id="trace-5701"></a>
<a id="trace-5717"></a>
- 69.25s–78.75s (×8), actor 5, squad 0 (trace 5480): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 5358. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299824779309344, 'next_transition': 5487}.
<a id="trace-5729"></a>
- 79.35s–79.35s (×1), actor 4, squad 0 (trace 5729): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 75.00s, trace 5610. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5801}.
<a id="trace-5801"></a>
<a id="trace-5815"></a>
<a id="trace-5831"></a>
<a id="trace-5837"></a>
<a id="trace-5847"></a>
<a id="trace-5853"></a>
<a id="trace-5863"></a>
<a id="trace-5870"></a>
<a id="trace-5940"></a>
<a id="trace-5959"></a>
<a id="trace-5983"></a>
<a id="trace-5994"></a>
<a id="trace-6007"></a>
- 80.25s–89.25s (×13), actor 5, squad 0 (trace 5801): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5737. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5815}.
<a id="trace-6010"></a>
- 89.35s–89.35s (×1), actor 4, squad 0 (trace 6010): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 5873. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6016}.
<a id="trace-6011"></a>
- 89.35s–89.35s (×1), actor 4, squad 0 (trace 6011): ; retain contact cover stage. Knowledge: actor memory at 85.00s, trace 5873. Next observer evidence: {'until': 89.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6016}.
<a id="trace-6016"></a>
<a id="trace-6087"></a>
<a id="trace-6092"></a>
<a id="trace-6101"></a>
<a id="trace-6107"></a>
<a id="trace-6115"></a>
<a id="trace-6123"></a>
<a id="trace-6134"></a>
<a id="trace-6142"></a>
<a id="trace-6166"></a>
<a id="trace-6240"></a>
<a id="trace-6250"></a>
<a id="trace-6256"></a>
<a id="trace-6265"></a>
<a id="trace-6270"></a>
<a id="trace-6279"></a>
<a id="trace-6286"></a>
<a id="trace-6294"></a>
<a id="trace-6396"></a>
<a id="trace-6403"></a>
<a id="trace-6413"></a>
<a id="trace-6418"></a>
<a id="trace-6432"></a>
<a id="trace-6440"></a>
<a id="trace-6532"></a>
<a id="trace-6549"></a>
<a id="trace-6560"></a>
<a id="trace-6573"></a>
<a id="trace-6587"></a>
<a id="trace-6594"></a>
- 89.75s–109.75s (×30), actor 5, squad 0 (trace 6016): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 5874. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6087}.
<a id="trace-609"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (events line 609): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6671}.
<a id="trace-6667"></a>
- 110.45s–110.45s (×1), actor 5, squad 0 (trace 6667): renew committed intent (75 s lifetime). Knowledge: actor memory at 110.45s, trace 6667. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6671}.
<a id="trace-6671"></a>
<a id="trace-6679"></a>
<a id="trace-6687"></a>
<a id="trace-6701"></a>
<a id="trace-6711"></a>
<a id="trace-6718"></a>
<a id="trace-6733"></a>
<a id="trace-6812"></a>
<a id="trace-6819"></a>
<a id="trace-6827"></a>
- 110.75s–116.25s (×10), actor 5, squad 0 (trace 6671): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.45s, trace 6667. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6679}.
<a id="trace-6831"></a>
- 116.35s–116.35s (×1), actor 4, squad 0 (trace 6831): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 6744. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6854}.
<a id="trace-6832"></a>
- 116.35s–116.35s (×1), actor 4, squad 0 (trace 6832): new contact inside 100 m. Knowledge: actor memory at 115.00s, trace 6744. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6854}.
<a id="trace-6854"></a>
- 117.25s–117.25s (×1), actor 5, squad 0 (trace 6854): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6745. Next observer evidence: None.
<a id="trace-6857"></a>
- 117.35s–117.35s (×1), actor 4, squad 0 (trace 6857): received platoon directive; retain contact cover stage. Knowledge: actor memory at 115.00s, trace 6744. Next observer evidence: {'until': 117.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6866}.
<a id="trace-6866"></a>
<a id="trace-6878"></a>
<a id="trace-6900"></a>
<a id="trace-6976"></a>
- 117.75s–120.25s (×4), actor 5, squad 0 (trace 6866): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6745. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6878}.
<a id="trace-6984"></a>
- 120.65s–120.65s (×1), actor 4, squad 0 (trace 6984): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 120.00s, trace 6904. Next observer evidence: None.
<a id="trace-6986"></a>
- 120.65s–120.65s (×1), actor 4, squad 0 (trace 6986): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 120.00s, trace 6904. Next observer evidence: None.
<a id="trace-8515"></a>
- 120.65s–120.65s (×1), actor 4, squad 0 (trace 8515): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 120.00s, trace 6904. Next observer evidence: None.
<a id="trace-8516"></a>
- 120.65s–120.65s (×1), actor 4, squad 0 (trace 8516): MoveTactically. Knowledge: actor memory at 120.00s, trace 6904. Next observer evidence: None.
<a id="trace-8517"></a>
- 120.65s–120.65s (×1), actor 4, squad 0 (trace 8517): contact cover complete: assessment resumes closure. Knowledge: actor memory at 120.00s, trace 6904. Next observer evidence: None.
<a id="trace-8526"></a>
<a id="trace-8544"></a>
<a id="trace-8551"></a>
<a id="trace-8571"></a>
<a id="trace-8590"></a>
<a id="trace-8597"></a>
<a id="trace-8609"></a>
<a id="trace-8616"></a>
<a id="trace-8695"></a>
<a id="trace-8711"></a>
<a id="trace-8718"></a>
<a id="trace-8735"></a>
<a id="trace-8743"></a>
<a id="trace-8769"></a>
<a id="trace-8777"></a>
<a id="trace-8787"></a>
<a id="trace-8861"></a>
<a id="trace-8875"></a>
<a id="trace-8881"></a>
<a id="trace-8901"></a>
<a id="trace-8923"></a>
<a id="trace-8929"></a>
<a id="trace-8953"></a>
<a id="trace-9032"></a>
<a id="trace-9052"></a>
<a id="trace-9065"></a>
- 120.75s–136.80s (×26), actor 5, squad 0 (trace 8526): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 6905. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749906745755723, 'next_transition': 8544}.
<a id="trace-9071"></a>
- 137.10s–137.10s (×1), actor 4, squad 0 (trace 9071): ReactToContact: cover and return fire. Knowledge: actor memory at 135.00s, trace 8957. Next observer evidence: {'until': 137.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.330409830762656, 'next_transition': 9260}.
<a id="trace-9072"></a>
- 137.10s–137.10s (×1), actor 4, squad 0 (trace 9072): new contact inside 100 m. Knowledge: actor memory at 135.00s, trace 8957. Next observer evidence: {'until': 137.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.330409830762656, 'next_transition': 9260}.
<a id="trace-9260"></a>
- 137.80s–137.80s (×1), actor 5, squad 0 (trace 9260): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 8958. Next observer evidence: {'until': 138, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38591459739454753, 'next_transition': 827}.
<a id="trace-827"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (events line 827): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9272"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (trace 9272): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 138.10s, trace 9272. Next observer evidence: {'until': 138.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3834321814573336, 'next_transition': 9288}.
<a id="trace-9273"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (trace 9273): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 138.10s, trace 9273. Next observer evidence: {'until': 138.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3834321814573336, 'next_transition': 9288}.
<a id="trace-9288"></a>
<a id="trace-9295"></a>
<a id="trace-9315"></a>
<a id="trace-9325"></a>
<a id="trace-9401"></a>
- 138.30s–140.30s (×5), actor 5, squad 0 (trace 9288): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 138.10s, trace 9273. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1648476137577992, 'next_transition': 9295}.
<a id="trace-9404"></a>
- 140.45s–140.45s (×1), actor 4, squad 0 (trace 9404): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 140.00s, trace 9331. Next observer evidence: {'until': 140.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.15750359368915953, 'next_transition': 9582}.
<a id="trace-9405"></a>
- 140.45s–140.45s (×1), actor 4, squad 0 (trace 9405): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 9331. Next observer evidence: {'until': 140.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.15750359368915953, 'next_transition': 9582}.
<a id="trace-9582"></a>
<a id="trace-9591"></a>
<a id="trace-9606"></a>
- 140.80s–141.80s (×3), actor 5, squad 0 (trace 9582): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 9332. Next observer evidence: {'until': 141.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.589611059534165, 'next_transition': 9591}.
<a id="trace-9607"></a>
- 142.15s–142.15s (×1), actor 4, squad 0 (trace 9607): Fixing. Knowledge: actor memory at 140.00s, trace 9331. Next observer evidence: {'until': 142.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9614}.
<a id="trace-9614"></a>
- 142.30s–142.30s (×1), actor 5, squad 0 (trace 9614): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 9332. Next observer evidence: {'until': 142.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9619}.
<a id="trace-9619"></a>
- 142.65s–142.65s (×1), actor 4, squad 0 (trace 9619): support established: element delivered fire on threat area. Knowledge: actor memory at 140.00s, trace 9331. Next observer evidence: {'until': 143.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9626}.
<a id="trace-9626"></a>
<a id="trace-9638"></a>
<a id="trace-9661"></a>
<a id="trace-9731"></a>
<a id="trace-9739"></a>
<a id="trace-9748"></a>
<a id="trace-9754"></a>
- 143.30s–147.30s (×7), actor 5, squad 0 (trace 9626): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 9332. Next observer evidence: {'until': 143.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9638}.
<a id="trace-9648"></a>
<a id="trace-9729"></a>
<a id="trace-9737"></a>
<a id="trace-9752"></a>
<a id="trace-9864"></a>
<a id="trace-9881"></a>
<a id="trace-9956"></a>
<a id="trace-9976"></a>
<a id="trace-9993"></a>
<a id="trace-10011"></a>
<a id="trace-10031"></a>
<a id="trace-10107"></a>
<a id="trace-10128"></a>
<a id="trace-10149"></a>
<a id="trace-10166"></a>
<a id="trace-10185"></a>
<a id="trace-10264"></a>
<a id="trace-10284"></a>
<a id="trace-10298"></a>
<a id="trace-10311"></a>
<a id="trace-10390"></a>
<a id="trace-10481"></a>
<a id="trace-10508"></a>
<a id="trace-10517"></a>
<a id="trace-10536"></a>
<a id="trace-10554"></a>
<a id="trace-10633"></a>
<a id="trace-10651"></a>
<a id="trace-10670"></a>
<a id="trace-10686"></a>
<a id="trace-10702"></a>
<a id="trace-10903"></a>
<a id="trace-10936"></a>
<a id="trace-10968"></a>
<a id="trace-11007"></a>
<a id="trace-11025"></a>
<a id="trace-11096"></a>
<a id="trace-11108"></a>
<a id="trace-11128"></a>
<a id="trace-11152"></a>
<a id="trace-11174"></a>
<a id="trace-11257"></a>
<a id="trace-11407"></a>
<a id="trace-11427"></a>
<a id="trace-11453"></a>
<a id="trace-11587"></a>
<a id="trace-11665"></a>
<a id="trace-11681"></a>
<a id="trace-11697"></a>
<a id="trace-11713"></a>
<a id="trace-11731"></a>
<a id="trace-11799"></a>
<a id="trace-11810"></a>
<a id="trace-11829"></a>
<a id="trace-11878"></a>
<a id="trace-11920"></a>
<a id="trace-11998"></a>
<a id="trace-12016"></a>
<a id="trace-12091"></a>
<a id="trace-12107"></a>
<a id="trace-12120"></a>
<a id="trace-12251"></a>
<a id="trace-12266"></a>
<a id="trace-12281"></a>
<a id="trace-12297"></a>
<a id="trace-12312"></a>
<a id="trace-12383"></a>
<a id="trace-12396"></a>
<a id="trace-12411"></a>
<a id="trace-12429"></a>
<a id="trace-12442"></a>
<a id="trace-12508"></a>
<a id="trace-12528"></a>
<a id="trace-12549"></a>
<a id="trace-12559"></a>
<a id="trace-12639"></a>
<a id="trace-12657"></a>
<a id="trace-12673"></a>
<a id="trace-12684"></a>
<a id="trace-12696"></a>
<a id="trace-12773"></a>
<a id="trace-12794"></a>
<a id="trace-12804"></a>
<a id="trace-12811"></a>
<a id="trace-12817"></a>
<a id="trace-12880"></a>
<a id="trace-12891"></a>
<a id="trace-12901"></a>
<a id="trace-12908"></a>
<a id="trace-12910"></a>
<a id="trace-12972"></a>
<a id="trace-12984"></a>
<a id="trace-12988"></a>
<a id="trace-12991"></a>
<a id="trace-13052"></a>
<a id="trace-13060"></a>
<a id="trace-13067"></a>
<a id="trace-13070"></a>
<a id="trace-13131"></a>
<a id="trace-13140"></a>
<a id="trace-13146"></a>
<a id="trace-13152"></a>
<a id="trace-13154"></a>
<a id="trace-13215"></a>
<a id="trace-13222"></a>
<a id="trace-13227"></a>
<a id="trace-13231"></a>
<a id="trace-13234"></a>
<a id="trace-13297"></a>
<a id="trace-13304"></a>
<a id="trace-13310"></a>
<a id="trace-13314"></a>
<a id="trace-13316"></a>
<a id="trace-13378"></a>
<a id="trace-13389"></a>
<a id="trace-13394"></a>
<a id="trace-13397"></a>
<a id="trace-13399"></a>
<a id="trace-13460"></a>
<a id="trace-13468"></a>
<a id="trace-13475"></a>
<a id="trace-13480"></a>
<a id="trace-13482"></a>
<a id="trace-13542"></a>
<a id="trace-13550"></a>
<a id="trace-13555"></a>
<a id="trace-13559"></a>
<a id="trace-13564"></a>
<a id="trace-13624"></a>
<a id="trace-13632"></a>
<a id="trace-13638"></a>
<a id="trace-13641"></a>
<a id="trace-13644"></a>
<a id="trace-13706"></a>
<a id="trace-13717"></a>
<a id="trace-13721"></a>
<a id="trace-13725"></a>
<a id="trace-13729"></a>
<a id="trace-13790"></a>
<a id="trace-13799"></a>
<a id="trace-13804"></a>
- 144.30s–287.30s (×141), actor 38, squad 4 (trace 9648): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 140.00s, trace 9339. Next observer evidence: {'until': 145.2, 'shots': 8, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9729}.
<a id="trace-9756"></a>
- 147.75s–147.75s (×1), actor 4, squad 0 (trace 9756): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 145.00s, trace 9664. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9866}.
<a id="trace-9757"></a>
- 147.75s–147.75s (×1), actor 4, squad 0 (trace 9757): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 145.00s, trace 9664. Next observer evidence: {'until': 148.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9866}.
<a id="trace-9866"></a>
<a id="trace-9873"></a>
<a id="trace-9890"></a>
<a id="trace-9958"></a>
<a id="trace-9971"></a>
<a id="trace-9978"></a>
<a id="trace-10004"></a>
<a id="trace-10013"></a>
<a id="trace-10019"></a>
<a id="trace-10033"></a>
<a id="trace-10036"></a>
- 148.30s–154.80s (×11), actor 5, squad 0 (trace 9866): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 9665. Next observer evidence: {'until': 148.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9873}.
<a id="trace-10039"></a>
- 154.85s–154.85s (×1), actor 4, squad 0 (trace 10039): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 150.00s, trace 9892. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7967953427615311, 'next_transition': 10109}.
<a id="trace-10109"></a>
<a id="trace-10117"></a>
<a id="trace-10130"></a>
<a id="trace-10141"></a>
<a id="trace-10151"></a>
<a id="trace-10168"></a>
<a id="trace-10175"></a>
<a id="trace-10187"></a>
<a id="trace-10192"></a>
<a id="trace-10266"></a>
<a id="trace-10279"></a>
<a id="trace-10286"></a>
<a id="trace-10300"></a>
<a id="trace-10305"></a>
<a id="trace-10313"></a>
- 155.30s–163.30s (×15), actor 5, squad 0 (trace 10109): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 10042. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9646704150966772, 'next_transition': 10117}.
<a id="trace-10320"></a>
- 163.85s–163.85s (×1), actor 4, squad 0 (trace 10320): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 160.00s, trace 10194. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5054949596690291, 'next_transition': 10392}.
<a id="trace-10378"></a>
- 163.85s–163.85s (×1), actor 4, squad 0 (trace 10378): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 160.00s, trace 10194. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5054949596690291, 'next_transition': 10392}.
<a id="trace-10392"></a>
<a id="trace-10483"></a>
<a id="trace-10493"></a>
<a id="trace-10519"></a>
<a id="trace-10525"></a>
<a id="trace-10538"></a>
<a id="trace-10549"></a>
<a id="trace-10558"></a>
<a id="trace-10635"></a>
<a id="trace-10643"></a>
<a id="trace-10662"></a>
<a id="trace-10672"></a>
<a id="trace-10681"></a>
<a id="trace-10688"></a>
<a id="trace-10704"></a>
<a id="trace-10710"></a>
- 164.30s–174.80s (×16), actor 5, squad 0 (trace 10392): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 10195. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4963935981759098, 'next_transition': 10483}.
<a id="trace-10719"></a>
- 175.00s–175.00s (×1), actor 4, squad 0 (trace 10719): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 175.00s, trace 10711. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12749374386612067, 'next_transition': 10782}.
<a id="trace-10782"></a>
- 175.25s–175.25s (×1), actor 4, squad 0 (trace 10782): MoveTactically. Knowledge: actor memory at 175.00s, trace 10711. Next observer evidence: None.
<a id="trace-10783"></a>
- 175.25s–175.25s (×1), actor 4, squad 0 (trace 10783): received platoon directive. Knowledge: actor memory at 175.00s, trace 10711. Next observer evidence: None.
<a id="trace-10905"></a>
<a id="trace-10919"></a>
- 175.30s–175.80s (×2), actor 5, squad 0 (trace 10905): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 10712. Next observer evidence: {'until': 175.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31874601315153755, 'next_transition': 10919}.
<a id="trace-10932"></a>
- 176.25s–176.25s (×1), actor 4, squad 0 (trace 10932): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 175.00s, trace 10711. Next observer evidence: None.
<a id="trace-10938"></a>
<a id="trace-10960"></a>
<a id="trace-10989"></a>
<a id="trace-11009"></a>
<a id="trace-11027"></a>
<a id="trace-11032"></a>
<a id="trace-11098"></a>
<a id="trace-11102"></a>
<a id="trace-11110"></a>
<a id="trace-11118"></a>
<a id="trace-11130"></a>
<a id="trace-11138"></a>
<a id="trace-11154"></a>
<a id="trace-11165"></a>
<a id="trace-11176"></a>
<a id="trace-11187"></a>
<a id="trace-11259"></a>
- 176.30s–185.30s (×17), actor 5, squad 0 (trace 10938): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 10712. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5342558404147801, 'next_transition': 10960}.
<a id="trace-11265"></a>
- 185.55s–185.55s (×1), actor 4, squad 0 (trace 11265): ReactToContact: cover and return fire. Knowledge: actor memory at 185.00s, trace 11192. Next observer evidence: {'until': 185.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23677499999999974, 'next_transition': 11388}.
<a id="trace-11266"></a>
- 185.55s–185.55s (×1), actor 4, squad 0 (trace 11266): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 185.00s, trace 11192. Next observer evidence: {'until': 185.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.23677499999999974, 'next_transition': 11388}.
<a id="trace-11388"></a>
<a id="trace-11409"></a>
<a id="trace-11421"></a>
<a id="trace-11429"></a>
<a id="trace-11455"></a>
<a id="trace-11465"></a>
- 185.80s–188.80s (×6), actor 5, squad 0 (trace 11388): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 11193. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06125000000000025, 'next_transition': 11409}.
<a id="trace-11468"></a>
- 189.20s–189.20s (×1), actor 4, squad 0 (trace 11468): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 185.00s, trace 11192. Next observer evidence: None.
<a id="trace-11469"></a>
- 189.20s–189.20s (×1), actor 4, squad 0 (trace 11469): rearward bound: one stationary suppressing element. Knowledge: actor memory at 185.00s, trace 11192. Next observer evidence: None.
<a id="trace-11589"></a>
<a id="trace-11597"></a>
<a id="trace-11667"></a>
<a id="trace-11671"></a>
<a id="trace-11683"></a>
<a id="trace-11687"></a>
<a id="trace-11699"></a>
<a id="trace-11708"></a>
<a id="trace-11715"></a>
- 189.30s–193.30s (×9), actor 5, squad 0 (trace 11589): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 11193. Next observer evidence: {'until': 189.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13310000000000066, 'next_transition': 11597}.
<a id="trace-1146"></a>
- 193.35s–193.35s (×1), actor 5, squad 0 (events line 1146): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11716"></a>
- 193.35s–193.35s (×1), actor 5, squad 0 (trace 11716): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.564648 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 193.35s, trace 11716. Next observer evidence: {'until': 193.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11720}.
<a id="trace-11717"></a>
- 193.35s–193.35s (×1), actor 5, squad 0 (trace 11717): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.564648 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 193.35s, trace 11717. Next observer evidence: {'until': 193.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11720}.
<a id="trace-11720"></a>
<a id="trace-11733"></a>
<a id="trace-11735"></a>
<a id="trace-11801"></a>
<a id="trace-11807"></a>
<a id="trace-11812"></a>
<a id="trace-11818"></a>
<a id="trace-11880"></a>
<a id="trace-11904"></a>
<a id="trace-11922"></a>
<a id="trace-11935"></a>
<a id="trace-12004"></a>
- 193.80s–200.80s (×12), actor 5, squad 0 (trace 11720): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 193.35s, trace 11717. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11733}.
<a id="trace-12010"></a>
- 201.25s–201.25s (×1), actor 4, squad 0 (trace 12010): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 200.00s, trace 11936. Next observer evidence: None.
<a id="trace-12011"></a>
- 201.25s–201.25s (×1), actor 4, squad 0 (trace 12011): NeedSupport. Knowledge: actor memory at 200.00s, trace 11936. Next observer evidence: None.
<a id="trace-12018"></a>
- 201.30s–201.30s (×1), actor 5, squad 0 (trace 12018): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 11937. Next observer evidence: {'until': 201.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12083}.
<a id="trace-12021"></a>
- 201.30s–201.30s (×1), actor 4, squad 0 (trace 12021): Reorganise: completed/failed drill. Knowledge: actor memory at 200.00s, trace 11936. Next observer evidence: {'until': 201.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12083}.
<a id="trace-12023"></a>
- 201.30s–201.30s (×1), actor 4, squad 0 (trace 12023): ReactToContact: cover and return fire. Knowledge: actor memory at 200.00s, trace 11936. Next observer evidence: {'until': 201.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12083}.
<a id="trace-12024"></a>
- 201.30s–201.30s (×1), actor 4, squad 0 (trace 12024): Reorganise complete: known contact. Knowledge: actor memory at 200.00s, trace 11936. Next observer evidence: {'until': 201.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12083}.
<a id="trace-12083"></a>
<a id="trace-12093"></a>
<a id="trace-12099"></a>
<a id="trace-12109"></a>
<a id="trace-12113"></a>
- 201.80s–203.80s (×5), actor 5, squad 0 (trace 12083): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 11937. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12093}.
<a id="trace-12122"></a>
- 204.65s–204.65s (×1), actor 4, squad 0 (trace 12122): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 200.00s, trace 11936. Next observer evidence: {'until': 204.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498654971168244, 'next_transition': 12184}.
<a id="trace-12123"></a>
- 204.65s–204.65s (×1), actor 4, squad 0 (trace 12123): rearward bound: one stationary suppressing element. Knowledge: actor memory at 200.00s, trace 11936. Next observer evidence: {'until': 204.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31498654971168244, 'next_transition': 12184}.
<a id="trace-12184"></a>
<a id="trace-12253"></a>
<a id="trace-12257"></a>
<a id="trace-12268"></a>
<a id="trace-12276"></a>
<a id="trace-12283"></a>
<a id="trace-12289"></a>
<a id="trace-12299"></a>
<a id="trace-12314"></a>
<a id="trace-12385"></a>
<a id="trace-12391"></a>
<a id="trace-12398"></a>
<a id="trace-12402"></a>
<a id="trace-12413"></a>
<a id="trace-12424"></a>
<a id="trace-12433"></a>
<a id="trace-12444"></a>
<a id="trace-12446"></a>
<a id="trace-12510"></a>
<a id="trace-12540"></a>
<a id="trace-12551"></a>
<a id="trace-12556"></a>
<a id="trace-12561"></a>
<a id="trace-12571"></a>
<a id="trace-12573"></a>
<a id="trace-12641"></a>
<a id="trace-12652"></a>
<a id="trace-12663"></a>
<a id="trace-12679"></a>
<a id="trace-12686"></a>
<a id="trace-12688"></a>
<a id="trace-12698"></a>
<a id="trace-12710"></a>
<a id="trace-12775"></a>
<a id="trace-12780"></a>
<a id="trace-12796"></a>
<a id="trace-12806"></a>
<a id="trace-12809"></a>
<a id="trace-12813"></a>
<a id="trace-12815"></a>
<a id="trace-12820"></a>
<a id="trace-12886"></a>
<a id="trace-12893"></a>
<a id="trace-12897"></a>
<a id="trace-12903"></a>
<a id="trace-12906"></a>
- 204.80s–232.80s (×46), actor 5, squad 0 (trace 12184): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 11937. Next observer evidence: {'until': 205.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8778227061487803, 'next_transition': 12253}.
<a id="trace-13876"></a>
<a id="trace-13880"></a>
<a id="trace-13885"></a>
<a id="trace-13890"></a>
<a id="trace-13950"></a>
<a id="trace-13957"></a>
<a id="trace-13961"></a>
<a id="trace-13966"></a>
<a id="trace-13969"></a>
<a id="trace-14029"></a>
<a id="trace-14040"></a>
<a id="trace-14046"></a>
<a id="trace-14050"></a>
<a id="trace-14052"></a>
<a id="trace-14111"></a>
<a id="trace-14119"></a>
<a id="trace-14127"></a>
<a id="trace-14131"></a>
<a id="trace-14133"></a>
<a id="trace-14192"></a>
<a id="trace-14199"></a>
<a id="trace-14205"></a>
<a id="trace-14210"></a>
<a id="trace-14214"></a>
<a id="trace-14273"></a>
<a id="trace-14280"></a>
<a id="trace-14285"></a>
<a id="trace-14291"></a>
<a id="trace-14294"></a>
<a id="trace-14354"></a>
<a id="trace-14363"></a>
<a id="trace-14367"></a>
<a id="trace-14372"></a>
<a id="trace-14374"></a>
<a id="trace-14433"></a>
<a id="trace-14441"></a>
<a id="trace-14448"></a>
<a id="trace-14453"></a>
<a id="trace-14455"></a>
<a id="trace-14514"></a>
<a id="trace-14521"></a>
<a id="trace-14526"></a>
<a id="trace-14532"></a>
<a id="trace-14538"></a>
<a id="trace-14597"></a>
<a id="trace-14604"></a>
<a id="trace-14608"></a>
<a id="trace-14612"></a>
<a id="trace-14616"></a>
<a id="trace-14678"></a>
<a id="trace-14685"></a>
<a id="trace-14689"></a>
<a id="trace-14693"></a>
<a id="trace-14696"></a>
<a id="trace-14756"></a>
<a id="trace-14764"></a>
<a id="trace-14770"></a>
<a id="trace-14774"></a>
<a id="trace-14777"></a>
<a id="trace-14838"></a>
<a id="trace-14845"></a>
<a id="trace-14850"></a>
<a id="trace-14855"></a>
<a id="trace-14859"></a>
<a id="trace-14919"></a>
<a id="trace-14926"></a>
<a id="trace-14930"></a>
<a id="trace-14934"></a>
<a id="trace-14937"></a>
- 291.30s–359.30s (×69), actor 33, squad 4 (trace 13876): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=33. Knowledge: actor memory at 290.00s, trace 13814. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13880}.

## Net delivery

143 matched order/radio deliveries; 154 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.320s; maximum 5.550s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1687: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1693: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1694: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1696: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1697: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1698: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4050: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4054: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4056: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4057: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4058: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4059: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4060: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4061: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4211: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4214: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4215: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4217: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4218: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4219: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4220: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4221: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4222: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4337: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4340: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4341: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4343: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4344: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4345: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4346: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4347: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4348: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 4419: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.35s leader 5, trace 4420: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4469: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4472: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4473: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4475: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4476: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4477: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4478: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4479: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4480: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 4608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 4609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 4610: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 4611: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 4612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 4613: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 4614: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 4615: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 4616: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 4617: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 4618: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4877: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4878: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4880: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4881: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4882: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4883: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4884: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4885: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 5093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 5094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 5095: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 5096: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 5097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 5098: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 5099: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 5100: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 5101: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 5102: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 5103: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 5356: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 5357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 5358: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 5359: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 5360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 5361: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 5362: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 5363: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 5364: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 5365: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 5366: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 5496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 5497: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 5498: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 5499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 5500: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 5501: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5502: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5503: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5504: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5505: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 5610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 5611: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 5612: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 5613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 5614: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 5615: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 5616: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 5617: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 5618: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 5619: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5737: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5738: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 5739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5740: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5741: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5742: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5743: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5744: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5745: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5874: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5875: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5877: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5878: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5879: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5880: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5881: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5882: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 6020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 6021: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 6022: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 6023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 6024: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 6025: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 6026: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 6027: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 6028: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 6029: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 6171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 6172: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 6173: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 6174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 6175: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 6176: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 6177: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 6178: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 6179: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 6180: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 6308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6309: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 6310: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 6311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 6312: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 6313: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 6314: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6315: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6316: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6317: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6452: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6453: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 6454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6455: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6456: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 6457: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6458: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6459: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6460: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6599: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6600: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 6601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6602: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6603: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6604: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6605: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6606: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6607: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.45s leader 5, trace 6667: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6745: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6746: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6748: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6749: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6750: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6751: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6752: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6753: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6904: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6905: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6906: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 6907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6908: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6909: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6910: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6911: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6912: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6913: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 8625: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 8626: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 8627: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 8628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 8629: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 8630: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 8631: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 8632: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 8633: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 8634: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 8794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 8795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 8796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 8797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 8798: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 8799: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 8800: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 8801: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 8802: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 8803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 8957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 8958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 8959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 8960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 8961: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 8962: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 8963: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 8964: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 8965: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 8966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.10s leader 5, trace 9272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.10s leader 5, trace 9273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 9331: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 9332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 9333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 9334: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 9335: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 9336: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 9337: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 9338: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 9339: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 9340: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 9664: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 9665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 9666: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 9667: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 9668: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 9669: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 9670: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 9671: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 9892: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 9893: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 9894: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 9895: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 9896: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 9897: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 9898: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 9899: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 10041: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 10042: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 10043: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 10044: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 10045: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 10046: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 10047: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 10048: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 10194: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 10195: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 10196: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 10197: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 10198: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 10199: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 10200: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 10201: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 10410: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 10411: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 10412: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 10413: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 10414: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 10415: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 10416: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 10417: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 10562: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 10563: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 10564: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 10565: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 10566: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 10567: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 10568: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 10569: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 10711: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 10712: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 10713: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 10714: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 10715: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 10716: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 10717: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 10718: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 11033: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 11034: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 11035: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 11036: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 11037: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 11038: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 11039: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 11040: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 11192: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 11193: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 11194: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 11195: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 11196: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 11197: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 11198: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 11199: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 11599: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 11600: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 11601: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 11602: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 11603: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 11604: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 11605: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 193.35s leader 5, trace 11716: estimate 7.36; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 193.35s leader 5, trace 11717: estimate 7.36; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 11736: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 11737: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 11738: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 11739: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 11740: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 11741: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 11742: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 11936: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 11937: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 11938: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 11939: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 11940: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 11941: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 11942: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 12186: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 12187: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 12188: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 12189: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 12190: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 12191: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 12316: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 12317: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 12318: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 12319: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 12320: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 12321: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 12447: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 12448: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 12449: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 12450: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 12451: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 12452: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 12574: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 12575: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 12576: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 12577: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 12578: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 12579: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 12711: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 12712: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 12713: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 12714: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 12715: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 12716: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 12821: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 12822: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 12823: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 12824: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 12825: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 12911: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 12912: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12913: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12914: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 12915: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12993: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 12994: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12995: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12996: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 12997: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 13072: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 13073: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 13074: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 13075: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 13076: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 13156: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 13157: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 13158: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 13159: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 13160: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 13238: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 13239: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 13240: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 13241: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 13242: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 13319: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 13320: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 13321: estimate 2.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 13322: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 13323: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 13401: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 13402: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13403: estimate 2.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13404: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 13405: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 13483: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 13484: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13485: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13486: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 13487: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 13565: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 13566: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13567: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13568: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 13569: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 13645: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 13646: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 13647: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 13648: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 13649: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 13731: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 13732: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 13733: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 13734: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 13735: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 13812: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 13813: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 13814: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 13815: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 13891: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 13892: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 13893: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 13894: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 13970: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 13971: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 13972: estimate 1.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 13973: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 14053: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 14054: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 14055: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 14056: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 14134: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 14135: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 14136: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 14137: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 14215: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 14216: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 14217: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 14218: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 14296: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 14297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 14298: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 14299: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 14375: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 14376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 14377: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 14378: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 14456: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 14457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 14458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 14459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 14539: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 14540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 14541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 14542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 14618: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 14619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 14620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 14621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 14697: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 14698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 14699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 14700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 14778: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 14779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 14780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 14781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 14860: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 14861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 14863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 14939: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 14940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 14942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Rook killed in action
- 1: Lark killed in action
- 1: Voss killed in action
- 1: Bram killed in action
- 1: Reed killed in action
- 1: Tern incapacitated
- 1: Holt incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
