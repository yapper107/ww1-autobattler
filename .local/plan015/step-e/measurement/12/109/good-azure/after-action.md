# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/12/109/good-azure/battle-109-1789673902253697831`

## Battle summary

**Ember** · 360 s · 142 shots.

### Turning points

- 36.9s, squad 4: contact (events line 383). First recorded contact.
- 41.6s, squad 0: withdrawal ([trace 3084](#trace-3084)). 82.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 59.2s, squad 0: help call ([trace 3914](#trace-3914)). No completion observed before termination.
- 87.8s, squad 0: withdrawal ([trace 5054](#trace-5054)). 139.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 202.0s, squad 0: withdrawal ([trace 10714](#trace-10714)). 240.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 221.5s, squad 0: help call ([trace 11731](#trace-11731)). No completion observed before termination.
- 247.3s, squad 0: withdrawal ([trace 12670](#trace-12670)). 293.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 353.0s, squad 0: withdrawal ([trace 18056](#trace-18056)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 17 shots, 2/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 125 shots, 0/4 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 11](#trace-11)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 266](#trace-266)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 29.8s, squad 0 chose renewed the existing objective ([trace 1545](#trace-1545)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 265](#trace-265)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008625766202, 'next_transition': 279}.
- 29.8s: renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 1544](#trace-1544)). Following evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1619}.

### Communication

207 matched deliveries (mean 0.19s, max 1.60s); 240 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 36.90s, squad 4, contact, evidence events line 383: First recorded contact; .
- 41.60s, squad 0, withdrawal, evidence 3084: BreakContact: believed ratio at least two without superiority; 82.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 59.20s, squad 0, help call, evidence 3914: NeedSupport; No completion observed before termination.
- 87.75s, squad 0, withdrawal, evidence 5054: Withdraw to received rally; 139.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 202.00s, squad 0, withdrawal, evidence 10714: BreakContact: believed ratio at least two without superiority; 240.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 221.50s, squad 0, help call, evidence 11731: NeedSupport; No completion observed before termination.
- 247.30s, squad 0, withdrawal, evidence 12670: Withdraw to received rally; 293.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 353.00s, squad 0, withdrawal, evidence 18056: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-11"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 11): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018656571913093, 'next_transition': 211}.
<a id="trace-12"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 12): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018656571913093, 'next_transition': 211}.
<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4018656571913093, 'next_transition': 211}.
<a id="trace-211"></a>
<a id="trace-232"></a>
<a id="trace-240"></a>
<a id="trace-253"></a>
<a id="trace-258"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600000992380147, 'next_transition': 232}.
<a id="trace-44"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 44): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008625766202, 'next_transition': 279}.
<a id="trace-265"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 265): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 265. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008625766202, 'next_transition': 279}.
<a id="trace-266"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 266): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300008625766202, 'next_transition': 279}.
<a id="trace-279"></a>
<a id="trace-290"></a>
<a id="trace-364"></a>
- 4.20s–5.20s (×3), actor 5, squad 0 (trace 279): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 266. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299966549222812, 'next_transition': 290}.
<a id="trace-367"></a>
- 5.45s–5.45s (×1), actor 0, squad 0 (trace 367): received platoon directive. Knowledge: actor memory at 5.00s, trace 294. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629984931416188, 'next_transition': 477}.
<a id="trace-477"></a>
<a id="trace-503"></a>
<a id="trace-513"></a>
<a id="trace-531"></a>
<a id="trace-548"></a>
<a id="trace-567"></a>
<a id="trace-597"></a>
<a id="trace-609"></a>
<a id="trace-621"></a>
<a id="trace-703"></a>
<a id="trace-716"></a>
<a id="trace-728"></a>
<a id="trace-742"></a>
<a id="trace-758"></a>
<a id="trace-775"></a>
<a id="trace-784"></a>
<a id="trace-797"></a>
<a id="trace-818"></a>
- 5.70s–14.20s (×18), actor 5, squad 0 (trace 477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 296. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.889259074811279, 'next_transition': 503}.
<a id="trace-479"></a>
<a id="trace-505"></a>
<a id="trace-515"></a>
<a id="trace-533"></a>
<a id="trace-569"></a>
<a id="trace-599"></a>
<a id="trace-611"></a>
<a id="trace-623"></a>
<a id="trace-705"></a>
<a id="trace-718"></a>
<a id="trace-730"></a>
<a id="trace-744"></a>
<a id="trace-777"></a>
<a id="trace-786"></a>
<a id="trace-799"></a>
<a id="trace-914"></a>
<a id="trace-996"></a>
<a id="trace-1011"></a>
<a id="trace-1034"></a>
<a id="trace-1050"></a>
<a id="trace-1064"></a>
<a id="trace-1099"></a>
<a id="trace-1113"></a>
<a id="trace-1136"></a>
<a id="trace-1221"></a>
<a id="trace-1238"></a>
<a id="trace-1252"></a>
<a id="trace-1268"></a>
<a id="trace-1289"></a>
<a id="trace-1299"></a>
<a id="trace-1312"></a>
<a id="trace-1323"></a>
<a id="trace-1359"></a>
<a id="trace-1433"></a>
<a id="trace-1442"></a>
<a id="trace-1465"></a>
<a id="trace-1473"></a>
<a id="trace-1485"></a>
<a id="trace-1497"></a>
<a id="trace-1510"></a>
<a id="trace-1535"></a>
<a id="trace-1543"></a>
<a id="trace-1621"></a>
<a id="trace-1628"></a>
<a id="trace-1639"></a>
<a id="trace-1793"></a>
<a id="trace-1811"></a>
<a id="trace-1826"></a>
<a id="trace-1840"></a>
<a id="trace-1852"></a>
<a id="trace-1875"></a>
<a id="trace-1886"></a>
<a id="trace-1965"></a>
<a id="trace-1976"></a>
<a id="trace-2014"></a>
<a id="trace-2024"></a>
<a id="trace-2034"></a>
<a id="trace-2826"></a>
<a id="trace-2837"></a>
<a id="trace-2865"></a>
<a id="trace-2893"></a>
<a id="trace-2983"></a>
<a id="trace-3035"></a>
<a id="trace-3063"></a>
<a id="trace-3246"></a>
<a id="trace-3293"></a>
<a id="trace-3307"></a>
<a id="trace-3311"></a>
<a id="trace-3323"></a>
<a id="trace-3342"></a>
<a id="trace-3420"></a>
<a id="trace-3425"></a>
<a id="trace-3439"></a>
<a id="trace-3447"></a>
<a id="trace-3462"></a>
<a id="trace-3468"></a>
<a id="trace-3483"></a>
<a id="trace-3592"></a>
<a id="trace-3607"></a>
<a id="trace-3615"></a>
<a id="trace-3620"></a>
<a id="trace-3632"></a>
<a id="trace-3654"></a>
<a id="trace-3661"></a>
<a id="trace-3680"></a>
<a id="trace-3814"></a>
<a id="trace-3821"></a>
<a id="trace-3835"></a>
<a id="trace-3863"></a>
<a id="trace-3873"></a>
<a id="trace-3895"></a>
<a id="trace-3911"></a>
<a id="trace-3924"></a>
<a id="trace-3934"></a>
<a id="trace-4009"></a>
<a id="trace-4033"></a>
<a id="trace-4041"></a>
<a id="trace-4057"></a>
<a id="trace-4069"></a>
<a id="trace-4078"></a>
<a id="trace-4086"></a>
<a id="trace-4180"></a>
<a id="trace-4186"></a>
<a id="trace-4199"></a>
<a id="trace-4216"></a>
<a id="trace-4230"></a>
<a id="trace-4248"></a>
<a id="trace-4261"></a>
<a id="trace-4267"></a>
<a id="trace-4369"></a>
<a id="trace-4379"></a>
<a id="trace-4392"></a>
<a id="trace-4399"></a>
<a id="trace-4411"></a>
<a id="trace-4495"></a>
<a id="trace-4507"></a>
<a id="trace-4526"></a>
<a id="trace-4603"></a>
<a id="trace-4610"></a>
<a id="trace-4628"></a>
<a id="trace-4658"></a>
<a id="trace-4667"></a>
<a id="trace-4690"></a>
<a id="trace-4698"></a>
<a id="trace-4775"></a>
<a id="trace-4784"></a>
<a id="trace-4803"></a>
<a id="trace-4812"></a>
<a id="trace-4879"></a>
<a id="trace-4898"></a>
<a id="trace-4907"></a>
<a id="trace-5010"></a>
<a id="trace-5036"></a>
<a id="trace-5049"></a>
<a id="trace-5053"></a>
<a id="trace-5139"></a>
<a id="trace-5151"></a>
<a id="trace-5163"></a>
<a id="trace-5169"></a>
<a id="trace-5246"></a>
<a id="trace-5267"></a>
<a id="trace-5291"></a>
<a id="trace-5301"></a>
<a id="trace-5309"></a>
<a id="trace-5316"></a>
<a id="trace-5409"></a>
<a id="trace-5419"></a>
<a id="trace-5430"></a>
<a id="trace-5436"></a>
<a id="trace-5448"></a>
<a id="trace-5471"></a>
<a id="trace-5555"></a>
<a id="trace-5563"></a>
<a id="trace-5574"></a>
<a id="trace-5583"></a>
<a id="trace-5595"></a>
<a id="trace-5607"></a>
<a id="trace-5616"></a>
<a id="trace-5679"></a>
<a id="trace-5692"></a>
<a id="trace-5702"></a>
<a id="trace-5794"></a>
<a id="trace-5812"></a>
<a id="trace-5825"></a>
<a id="trace-5844"></a>
<a id="trace-5855"></a>
<a id="trace-5865"></a>
<a id="trace-5877"></a>
<a id="trace-5883"></a>
<a id="trace-5960"></a>
<a id="trace-5970"></a>
<a id="trace-5984"></a>
<a id="trace-5990"></a>
<a id="trace-6006"></a>
<a id="trace-6014"></a>
<a id="trace-6028"></a>
<a id="trace-6038"></a>
<a id="trace-6051"></a>
<a id="trace-6135"></a>
<a id="trace-6142"></a>
<a id="trace-6155"></a>
<a id="trace-6161"></a>
<a id="trace-6176"></a>
<a id="trace-6206"></a>
<a id="trace-6275"></a>
<a id="trace-6285"></a>
<a id="trace-6365"></a>
<a id="trace-6399"></a>
<a id="trace-6436"></a>
<a id="trace-6442"></a>
<a id="trace-6456"></a>
<a id="trace-6571"></a>
<a id="trace-6583"></a>
<a id="trace-6589"></a>
<a id="trace-6659"></a>
<a id="trace-6667"></a>
<a id="trace-6691"></a>
<a id="trace-6769"></a>
<a id="trace-6780"></a>
<a id="trace-6797"></a>
<a id="trace-6807"></a>
<a id="trace-6819"></a>
<a id="trace-6832"></a>
<a id="trace-6841"></a>
<a id="trace-6848"></a>
<a id="trace-6866"></a>
<a id="trace-6875"></a>
<a id="trace-6952"></a>
<a id="trace-6959"></a>
<a id="trace-6971"></a>
<a id="trace-6980"></a>
<a id="trace-6990"></a>
<a id="trace-7013"></a>
<a id="trace-7025"></a>
<a id="trace-7035"></a>
<a id="trace-7048"></a>
<a id="trace-7129"></a>
<a id="trace-7138"></a>
<a id="trace-7169"></a>
<a id="trace-7188"></a>
<a id="trace-7200"></a>
<a id="trace-7208"></a>
<a id="trace-7219"></a>
<a id="trace-7336"></a>
<a id="trace-7352"></a>
<a id="trace-7451"></a>
<a id="trace-7460"></a>
<a id="trace-7477"></a>
<a id="trace-7484"></a>
<a id="trace-7501"></a>
<a id="trace-7513"></a>
<a id="trace-7524"></a>
<a id="trace-7535"></a>
<a id="trace-7613"></a>
<a id="trace-7624"></a>
<a id="trace-7644"></a>
<a id="trace-7671"></a>
<a id="trace-7693"></a>
<a id="trace-7713"></a>
<a id="trace-7795"></a>
<a id="trace-7870"></a>
<a id="trace-7884"></a>
<a id="trace-7893"></a>
<a id="trace-7900"></a>
<a id="trace-7918"></a>
<a id="trace-7928"></a>
<a id="trace-8027"></a>
<a id="trace-8142"></a>
<a id="trace-8164"></a>
<a id="trace-8206"></a>
<a id="trace-8219"></a>
<a id="trace-8233"></a>
<a id="trace-8244"></a>
<a id="trace-8323"></a>
<a id="trace-8345"></a>
<a id="trace-8365"></a>
<a id="trace-8377"></a>
<a id="trace-8390"></a>
<a id="trace-8420"></a>
<a id="trace-8427"></a>
<a id="trace-8507"></a>
<a id="trace-8527"></a>
<a id="trace-8536"></a>
<a id="trace-8660"></a>
<a id="trace-8669"></a>
<a id="trace-8682"></a>
<a id="trace-8696"></a>
<a id="trace-8707"></a>
<a id="trace-8783"></a>
<a id="trace-8793"></a>
<a id="trace-8812"></a>
<a id="trace-8823"></a>
<a id="trace-8837"></a>
<a id="trace-8862"></a>
<a id="trace-8871"></a>
<a id="trace-8885"></a>
<a id="trace-8970"></a>
<a id="trace-8984"></a>
<a id="trace-8996"></a>
<a id="trace-9003"></a>
<a id="trace-9021"></a>
<a id="trace-9030"></a>
<a id="trace-9046"></a>
<a id="trace-9055"></a>
<a id="trace-9072"></a>
<a id="trace-9079"></a>
<a id="trace-9177"></a>
<a id="trace-9185"></a>
<a id="trace-9203"></a>
<a id="trace-9216"></a>
<a id="trace-9234"></a>
<a id="trace-9373"></a>
<a id="trace-9448"></a>
<a id="trace-9466"></a>
<a id="trace-9490"></a>
<a id="trace-9515"></a>
<a id="trace-9540"></a>
<a id="trace-9548"></a>
<a id="trace-9635"></a>
<a id="trace-9674"></a>
<a id="trace-9901"></a>
<a id="trace-10504"></a>
<a id="trace-10534"></a>
<a id="trace-10557"></a>
<a id="trace-10641"></a>
<a id="trace-10668"></a>
<a id="trace-10713"></a>
<a id="trace-10879"></a>
<a id="trace-10902"></a>
<a id="trace-11045"></a>
<a id="trace-11061"></a>
<a id="trace-11081"></a>
<a id="trace-11109"></a>
<a id="trace-11120"></a>
<a id="trace-11135"></a>
<a id="trace-11144"></a>
<a id="trace-11150"></a>
<a id="trace-11233"></a>
<a id="trace-11247"></a>
<a id="trace-11253"></a>
<a id="trace-11281"></a>
<a id="trace-11312"></a>
<a id="trace-11342"></a>
<a id="trace-11371"></a>
<a id="trace-11409"></a>
<a id="trace-11491"></a>
<a id="trace-11566"></a>
<a id="trace-11574"></a>
<a id="trace-11587"></a>
<a id="trace-11595"></a>
<a id="trace-11606"></a>
<a id="trace-11615"></a>
<a id="trace-11628"></a>
<a id="trace-11633"></a>
<a id="trace-11715"></a>
<a id="trace-11723"></a>
<a id="trace-11739"></a>
<a id="trace-11752"></a>
<a id="trace-11755"></a>
<a id="trace-11764"></a>
<a id="trace-11769"></a>
<a id="trace-11781"></a>
<a id="trace-11788"></a>
<a id="trace-11858"></a>
<a id="trace-11876"></a>
<a id="trace-11881"></a>
<a id="trace-11888"></a>
<a id="trace-11891"></a>
<a id="trace-11928"></a>
<a id="trace-12008"></a>
<a id="trace-12014"></a>
<a id="trace-12028"></a>
<a id="trace-12033"></a>
<a id="trace-12122"></a>
<a id="trace-12133"></a>
<a id="trace-12142"></a>
<a id="trace-12155"></a>
<a id="trace-12172"></a>
<a id="trace-12184"></a>
<a id="trace-12278"></a>
<a id="trace-12289"></a>
<a id="trace-12302"></a>
<a id="trace-12307"></a>
<a id="trace-12327"></a>
<a id="trace-12334"></a>
<a id="trace-12347"></a>
<a id="trace-12358"></a>
<a id="trace-12437"></a>
<a id="trace-12449"></a>
<a id="trace-12463"></a>
<a id="trace-12472"></a>
<a id="trace-12498"></a>
<a id="trace-12518"></a>
<a id="trace-12524"></a>
<a id="trace-12542"></a>
<a id="trace-12549"></a>
<a id="trace-12638"></a>
<a id="trace-12653"></a>
<a id="trace-12662"></a>
<a id="trace-12669"></a>
<a id="trace-12749"></a>
<a id="trace-12765"></a>
<a id="trace-12775"></a>
<a id="trace-12788"></a>
<a id="trace-12798"></a>
<a id="trace-12878"></a>
<a id="trace-12886"></a>
<a id="trace-12895"></a>
<a id="trace-12906"></a>
<a id="trace-12933"></a>
<a id="trace-12949"></a>
<a id="trace-12965"></a>
<a id="trace-12972"></a>
<a id="trace-13048"></a>
<a id="trace-13053"></a>
<a id="trace-13073"></a>
<a id="trace-13085"></a>
<a id="trace-13107"></a>
<a id="trace-13125"></a>
<a id="trace-13136"></a>
<a id="trace-13142"></a>
<a id="trace-13275"></a>
<a id="trace-13297"></a>
<a id="trace-13305"></a>
<a id="trace-13319"></a>
<a id="trace-13331"></a>
<a id="trace-13345"></a>
<a id="trace-13359"></a>
<a id="trace-13381"></a>
<a id="trace-13456"></a>
<a id="trace-13480"></a>
<a id="trace-13489"></a>
<a id="trace-13502"></a>
<a id="trace-13520"></a>
<a id="trace-13528"></a>
<a id="trace-13633"></a>
<a id="trace-13652"></a>
<a id="trace-13667"></a>
<a id="trace-13677"></a>
<a id="trace-13697"></a>
<a id="trace-13713"></a>
<a id="trace-13866"></a>
<a id="trace-13881"></a>
<a id="trace-13896"></a>
<a id="trace-13901"></a>
<a id="trace-13921"></a>
<a id="trace-13938"></a>
<a id="trace-14033"></a>
<a id="trace-14040"></a>
<a id="trace-14050"></a>
<a id="trace-14073"></a>
<a id="trace-14087"></a>
<a id="trace-14103"></a>
<a id="trace-14171"></a>
<a id="trace-14178"></a>
<a id="trace-14271"></a>
<a id="trace-14286"></a>
<a id="trace-14298"></a>
<a id="trace-14312"></a>
<a id="trace-14333"></a>
<a id="trace-14345"></a>
<a id="trace-14355"></a>
<a id="trace-14439"></a>
<a id="trace-14448"></a>
<a id="trace-14463"></a>
<a id="trace-14472"></a>
<a id="trace-14494"></a>
<a id="trace-14504"></a>
<a id="trace-14519"></a>
<a id="trace-14531"></a>
<a id="trace-14548"></a>
<a id="trace-14624"></a>
<a id="trace-14632"></a>
<a id="trace-14652"></a>
<a id="trace-14666"></a>
<a id="trace-14681"></a>
<a id="trace-14795"></a>
<a id="trace-14808"></a>
<a id="trace-14823"></a>
<a id="trace-14837"></a>
<a id="trace-14846"></a>
<a id="trace-14925"></a>
<a id="trace-14941"></a>
<a id="trace-14954"></a>
<a id="trace-14961"></a>
<a id="trace-14976"></a>
<a id="trace-14987"></a>
<a id="trace-15010"></a>
<a id="trace-15034"></a>
<a id="trace-15125"></a>
<a id="trace-15137"></a>
<a id="trace-15159"></a>
<a id="trace-15166"></a>
<a id="trace-15184"></a>
<a id="trace-15210"></a>
<a id="trace-15272"></a>
<a id="trace-15364"></a>
<a id="trace-15392"></a>
<a id="trace-15404"></a>
<a id="trace-15418"></a>
<a id="trace-15425"></a>
<a id="trace-15447"></a>
<a id="trace-15523"></a>
<a id="trace-15529"></a>
<a id="trace-15541"></a>
<a id="trace-15561"></a>
<a id="trace-15573"></a>
<a id="trace-15588"></a>
<a id="trace-15604"></a>
<a id="trace-15732"></a>
<a id="trace-15806"></a>
<a id="trace-15817"></a>
<a id="trace-15836"></a>
<a id="trace-15867"></a>
<a id="trace-15879"></a>
<a id="trace-15892"></a>
<a id="trace-15920"></a>
<a id="trace-16001"></a>
<a id="trace-16030"></a>
<a id="trace-16043"></a>
<a id="trace-16062"></a>
<a id="trace-16069"></a>
<a id="trace-16080"></a>
<a id="trace-16178"></a>
<a id="trace-16270"></a>
<a id="trace-16288"></a>
<a id="trace-16294"></a>
<a id="trace-16315"></a>
<a id="trace-16329"></a>
<a id="trace-16345"></a>
<a id="trace-16366"></a>
<a id="trace-16375"></a>
<a id="trace-16474"></a>
<a id="trace-16486"></a>
<a id="trace-16503"></a>
<a id="trace-16510"></a>
<a id="trace-16526"></a>
<a id="trace-16539"></a>
<a id="trace-16552"></a>
<a id="trace-16634"></a>
<a id="trace-16641"></a>
<a id="trace-16652"></a>
<a id="trace-16909"></a>
<a id="trace-16922"></a>
<a id="trace-16934"></a>
<a id="trace-16952"></a>
<a id="trace-17127"></a>
<a id="trace-17214"></a>
<a id="trace-17226"></a>
<a id="trace-17242"></a>
<a id="trace-17257"></a>
<a id="trace-17656"></a>
<a id="trace-17684"></a>
<a id="trace-17906"></a>
<a id="trace-17986"></a>
<a id="trace-18007"></a>
<a id="trace-18019"></a>
<a id="trace-18027"></a>
<a id="trace-18039"></a>
<a id="trace-18048"></a>
<a id="trace-18216"></a>
<a id="trace-18223"></a>
<a id="trace-18238"></a>
<a id="trace-18244"></a>
<a id="trace-18327"></a>
<a id="trace-18354"></a>
<a id="trace-18391"></a>
<a id="trace-18461"></a>
<a id="trace-18486"></a>
<a id="trace-18503"></a>
<a id="trace-18508"></a>
<a id="trace-18516"></a>
- 5.70s–359.30s (×552), actor 37, squad 4 (trace 479): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 300. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512296585661652, 'next_transition': 505}.
<a id="trace-826"></a>
- 14.55s–14.55s (×1), actor 0, squad 0 (trace 826): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 626. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4373164729897716, 'next_transition': 912}.
<a id="trace-912"></a>
<a id="trace-994"></a>
<a id="trace-1009"></a>
<a id="trace-1032"></a>
<a id="trace-1048"></a>
<a id="trace-1062"></a>
<a id="trace-1077"></a>
<a id="trace-1097"></a>
<a id="trace-1111"></a>
<a id="trace-1123"></a>
<a id="trace-1134"></a>
<a id="trace-1219"></a>
<a id="trace-1236"></a>
<a id="trace-1250"></a>
<a id="trace-1266"></a>
<a id="trace-1287"></a>
<a id="trace-1297"></a>
<a id="trace-1310"></a>
<a id="trace-1321"></a>
<a id="trace-1339"></a>
<a id="trace-1357"></a>
<a id="trace-1431"></a>
- 14.70s–25.25s (×22), actor 5, squad 0 (trace 912): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 628. Next observer evidence: {'until': 15.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9843638008796445, 'next_transition': 994}.
<a id="trace-1435"></a>
- 25.35s–25.35s (×1), actor 0, squad 0 (trace 1435): matching received arrivals: deployment leg complete. Knowledge: actor memory at 25.00s, trace 1361. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300040853438943, 'next_transition': 1440}.
<a id="trace-1440"></a>
<a id="trace-1463"></a>
<a id="trace-1471"></a>
<a id="trace-1483"></a>
<a id="trace-1495"></a>
<a id="trace-1508"></a>
<a id="trace-1516"></a>
<a id="trace-1533"></a>
<a id="trace-1541"></a>
- 25.75s–29.75s (×9), actor 5, squad 0 (trace 1440): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1363. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449813268062497, 'next_transition': 1463}.
<a id="trace-307"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 307): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1544"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 1544): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 1544. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1619}.
<a id="trace-1545"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 1545): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 1545. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1619}.
<a id="trace-1619"></a>
<a id="trace-1626"></a>
<a id="trace-1637"></a>
- 30.25s–31.25s (×3), actor 5, squad 0 (trace 1619): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1550. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1626}.
<a id="trace-1640"></a>
- 31.30s–31.30s (×1), actor 0, squad 0 (trace 1640): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 1548. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1791}.
<a id="trace-1643"></a>
- 31.30s–31.30s (×1), actor 0, squad 0 (trace 1643): MoveTactically. Knowledge: actor memory at 30.00s, trace 1548. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1791}.
<a id="trace-1644"></a>
- 31.30s–31.30s (×1), actor 0, squad 0 (trace 1644): traveling overwatch. Knowledge: actor memory at 30.00s, trace 1548. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1791}.
<a id="trace-1645"></a>
- 31.30s–31.30s (×1), actor 0, squad 0 (trace 1645): Reorganise complete. Knowledge: actor memory at 30.00s, trace 1548. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1791}.
<a id="trace-1791"></a>
<a id="trace-1809"></a>
<a id="trace-1824"></a>
<a id="trace-1838"></a>
<a id="trace-1850"></a>
<a id="trace-1873"></a>
<a id="trace-1884"></a>
<a id="trace-1963"></a>
<a id="trace-1974"></a>
<a id="trace-1994"></a>
<a id="trace-2012"></a>
<a id="trace-2022"></a>
<a id="trace-2032"></a>
- 31.75s–37.75s (×13), actor 5, squad 0 (trace 1791): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 1550. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625129297265215, 'next_transition': 1809}.
<a id="trace-2037"></a>
- 37.90s–37.90s (×1), actor 0, squad 0 (trace 2037): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 1893. Next observer evidence: None.
<a id="trace-2038"></a>
- 37.90s–37.90s (×1), actor 0, squad 0 (trace 2038): bounding overwatch. Knowledge: actor memory at 35.00s, trace 1893. Next observer evidence: None.
<a id="trace-2039"></a>
<a id="trace-2232"></a>
<a id="trace-2429"></a>
<a id="trace-2622"></a>
- 37.90s–38.10s (×4), actor 0, squad 0 (trace 2039): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 1893. Next observer evidence: None.
<a id="trace-2824"></a>
<a id="trace-2835"></a>
<a id="trace-2863"></a>
<a id="trace-2891"></a>
<a id="trace-2981"></a>
<a id="trace-3033"></a>
- 38.25s–40.75s (×6), actor 5, squad 0 (trace 2824): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 1895. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.866554461912114, 'next_transition': 2835}.
<a id="trace-3057"></a>
- 41.05s–41.05s (×1), actor 5, squad 0 (trace 3057): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 41.05s, trace 3057. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149941968840644, 'next_transition': 3061}.
<a id="trace-3061"></a>
- 41.25s–41.25s (×1), actor 5, squad 0 (trace 3061): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.05s, trace 3057. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5489518045996169, 'next_transition': 3084}.
<a id="trace-3084"></a>
- 41.60s–41.60s (×1), actor 0, squad 0 (trace 3084): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 2896. Next observer evidence: None.
<a id="trace-3085"></a>
- 41.60s–41.60s (×1), actor 0, squad 0 (trace 3085): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 2896. Next observer evidence: None.
<a id="trace-3244"></a>
- 41.75s–41.75s (×1), actor 5, squad 0 (trace 3244): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 41.05s, trace 3057. Next observer evidence: {'until': 42, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629990426731249, 'next_transition': 451}.
<a id="trace-451"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 451): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3256"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 3256): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.405626 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 3256. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150163560811292, 'next_transition': 3273}.
<a id="trace-3257"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 3257): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.405626 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 3257. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150163560811292, 'next_transition': 3273}.
<a id="trace-3273"></a>
<a id="trace-3291"></a>
<a id="trace-3305"></a>
<a id="trace-3309"></a>
<a id="trace-3321"></a>
<a id="trace-3340"></a>
<a id="trace-3418"></a>
<a id="trace-3423"></a>
<a id="trace-3437"></a>
<a id="trace-3445"></a>
<a id="trace-3460"></a>
<a id="trace-3466"></a>
<a id="trace-3481"></a>
<a id="trace-3494"></a>
<a id="trace-3504"></a>
<a id="trace-3512"></a>
<a id="trace-3590"></a>
<a id="trace-3605"></a>
<a id="trace-3613"></a>
<a id="trace-3618"></a>
<a id="trace-3630"></a>
<a id="trace-3640"></a>
<a id="trace-3652"></a>
<a id="trace-3659"></a>
<a id="trace-3670"></a>
<a id="trace-3678"></a>
- 42.25s–54.75s (×26), actor 5, squad 0 (trace 3273): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 3257. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299885965509158, 'next_transition': 3291}.
<a id="trace-3685"></a>
- 54.95s–54.95s (×1), actor 0, squad 0 (trace 3685): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 3515. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4559314411597526, 'next_transition': 3812}.
<a id="trace-3686"></a>
- 54.95s–54.95s (×1), actor 0, squad 0 (trace 3686): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 3515. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4559314411597526, 'next_transition': 3812}.
<a id="trace-3812"></a>
<a id="trace-3819"></a>
<a id="trace-3833"></a>
<a id="trace-3852"></a>
<a id="trace-3861"></a>
<a id="trace-3871"></a>
<a id="trace-3893"></a>
<a id="trace-3909"></a>
- 55.25s–58.75s (×8), actor 5, squad 0 (trace 3812): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3744. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.508241240017163, 'next_transition': 3819}.
<a id="trace-3914"></a>
- 59.20s–59.20s (×1), actor 0, squad 0 (trace 3914): NeedSupport. Knowledge: actor memory at 55.00s, trace 3742. Next observer evidence: None.
<a id="trace-3922"></a>
<a id="trace-3932"></a>
<a id="trace-4007"></a>
<a id="trace-4020"></a>
<a id="trace-4031"></a>
<a id="trace-4039"></a>
<a id="trace-4055"></a>
<a id="trace-4067"></a>
<a id="trace-4076"></a>
<a id="trace-4084"></a>
<a id="trace-4096"></a>
<a id="trace-4102"></a>
<a id="trace-4178"></a>
<a id="trace-4184"></a>
<a id="trace-4197"></a>
<a id="trace-4214"></a>
<a id="trace-4221"></a>
<a id="trace-4228"></a>
<a id="trace-4240"></a>
<a id="trace-4246"></a>
<a id="trace-4259"></a>
<a id="trace-4265"></a>
<a id="trace-4344"></a>
<a id="trace-4359"></a>
<a id="trace-4367"></a>
<a id="trace-4377"></a>
<a id="trace-4390"></a>
<a id="trace-4397"></a>
<a id="trace-4409"></a>
- 59.25s–73.25s (×29), actor 5, squad 0 (trace 3922): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3744. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2267998429921193, 'next_transition': 3932}.
<a id="trace-4416"></a>
- 73.55s–73.55s (×1), actor 0, squad 0 (trace 4416): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 4271. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748454289231, 'next_transition': 4493}.
<a id="trace-4438"></a>
- 73.55s–73.55s (×1), actor 0, squad 0 (trace 4438): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 4271. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748454289231, 'next_transition': 4493}.
<a id="trace-4493"></a>
<a id="trace-4505"></a>
<a id="trace-4524"></a>
<a id="trace-4601"></a>
<a id="trace-4608"></a>
<a id="trace-4626"></a>
<a id="trace-4637"></a>
<a id="trace-4645"></a>
<a id="trace-4656"></a>
<a id="trace-4665"></a>
<a id="trace-4673"></a>
<a id="trace-4688"></a>
<a id="trace-4696"></a>
<a id="trace-4773"></a>
<a id="trace-4782"></a>
<a id="trace-4792"></a>
<a id="trace-4801"></a>
<a id="trace-4810"></a>
- 73.75s–82.25s (×18), actor 5, squad 0 (trace 4493): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4273. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7257630983080097, 'next_transition': 4505}.
<a id="trace-4815"></a>
- 82.40s–82.40s (×1), actor 0, squad 0 (trace 4815): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 80.00s, trace 4699. Next observer evidence: None.
<a id="trace-4819"></a>
- 82.45s–82.45s (×1), actor 0, squad 0 (trace 4819): MoveTactically. Knowledge: actor memory at 80.00s, trace 4699. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.410209828386161, 'next_transition': 4877}.
<a id="trace-4820"></a>
- 82.45s–82.45s (×1), actor 0, squad 0 (trace 4820): traveling overwatch. Knowledge: actor memory at 80.00s, trace 4699. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.410209828386161, 'next_transition': 4877}.
<a id="trace-4821"></a>
- 82.45s–82.45s (×1), actor 0, squad 0 (trace 4821): received platoon directive. Knowledge: actor memory at 80.00s, trace 4699. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.410209828386161, 'next_transition': 4877}.
<a id="trace-4877"></a>
<a id="trace-4896"></a>
<a id="trace-4921"></a>
<a id="trace-5007"></a>
- 82.75s–85.25s (×4), actor 5, squad 0 (trace 4877): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4701. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7854493588964088, 'next_transition': 4896}.
<a id="trace-602"></a>
- 86.05s–86.05s (×1), actor 5, squad 0 (events line 602): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5026"></a>
- 86.05s–86.05s (×1), actor 5, squad 0 (trace 5026): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.443211 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 86.05s, trace 5026. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41996244262703547, 'next_transition': 5033}.
<a id="trace-5027"></a>
- 86.05s–86.05s (×1), actor 5, squad 0 (trace 5027): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.443211 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 86.05s, trace 5027. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41996244262703547, 'next_transition': 5033}.
<a id="trace-5033"></a>
<a id="trace-5046"></a>
- 86.25s–87.25s (×2), actor 5, squad 0 (trace 5033): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 86.05s, trace 5027. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.207527572007859, 'next_transition': 5046}.
<a id="trace-5054"></a>
- 87.75s–87.75s (×1), actor 0, squad 0 (trace 5054): Withdraw to received rally. Knowledge: actor memory at 85.00s, trace 4938. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299939558792974, 'next_transition': 5136}.
<a id="trace-5055"></a>
- 87.75s–87.75s (×1), actor 0, squad 0 (trace 5055): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 4938. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299939558792974, 'next_transition': 5136}.
<a id="trace-5136"></a>
<a id="trace-5160"></a>
<a id="trace-5243"></a>
<a id="trace-5264"></a>
<a id="trace-5277"></a>
<a id="trace-5288"></a>
<a id="trace-5306"></a>
<a id="trace-5388"></a>
<a id="trace-5406"></a>
<a id="trace-5427"></a>
<a id="trace-5445"></a>
<a id="trace-5468"></a>
<a id="trace-5552"></a>
<a id="trace-5571"></a>
<a id="trace-5592"></a>
<a id="trace-5613"></a>
- 88.25s–103.25s (×16), actor 5, squad 0 (trace 5136): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 86.05s, trace 5027. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750135592007022, 'next_transition': 5160}.
<a id="trace-5619"></a>
- 103.55s–103.55s (×1), actor 0, squad 0 (trace 5619): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 5481. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5689}.
<a id="trace-5620"></a>
- 103.55s–103.55s (×1), actor 0, squad 0 (trace 5620): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 5481. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5689}.
<a id="trace-5689"></a>
<a id="trace-5781"></a>
<a id="trace-5809"></a>
<a id="trace-5834"></a>
<a id="trace-5852"></a>
<a id="trace-5874"></a>
<a id="trace-5957"></a>
<a id="trace-5981"></a>
<a id="trace-6003"></a>
<a id="trace-6025"></a>
<a id="trace-6048"></a>
<a id="trace-6132"></a>
<a id="trace-6152"></a>
<a id="trace-6173"></a>
<a id="trace-6196"></a>
- 104.25s–118.25s (×15), actor 5, squad 0 (trace 5689): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5483. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.167579252891751, 'next_transition': 5781}.
<a id="trace-6215"></a>
- 119.15s–119.15s (×1), actor 0, squad 0 (trace 6215): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 115.00s, trace 6065. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6272}.
<a id="trace-6216"></a>
- 119.15s–119.15s (×1), actor 0, squad 0 (trace 6216): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 115.00s, trace 6065. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6272}.
<a id="trace-6272"></a>
<a id="trace-6362"></a>
<a id="trace-6386"></a>
<a id="trace-6413"></a>
<a id="trace-6433"></a>
<a id="trace-6453"></a>
<a id="trace-6535"></a>
<a id="trace-6556"></a>
<a id="trace-6580"></a>
- 119.25s–127.25s (×9), actor 5, squad 0 (trace 6272): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6067. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6362}.
<a id="trace-6600"></a>
- 128.15s–128.15s (×1), actor 0, squad 0 (trace 6600): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 125.00s, trace 6467. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6656}.
<a id="trace-6601"></a>
- 128.15s–128.15s (×1), actor 0, squad 0 (trace 6601): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 125.00s, trace 6467. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6656}.
<a id="trace-6656"></a>
<a id="trace-6680"></a>
<a id="trace-6766"></a>
<a id="trace-6794"></a>
<a id="trace-6816"></a>
<a id="trace-6838"></a>
<a id="trace-6863"></a>
<a id="trace-6949"></a>
<a id="trace-6968"></a>
<a id="trace-6987"></a>
<a id="trace-7010"></a>
<a id="trace-7032"></a>
- 128.30s–139.30s (×12), actor 5, squad 0 (trace 6656): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 6469. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7140103317828083, 'next_transition': 6680}.
<a id="trace-7036"></a>
- 139.40s–139.40s (×1), actor 0, squad 0 (trace 7036): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 6878. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048107288877907, 'next_transition': 7126}.
<a id="trace-7126"></a>
<a id="trace-7151"></a>
- 140.30s–141.30s (×2), actor 5, squad 0 (trace 7126): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 7054. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1676118195343437, 'next_transition': 7151}.
<a id="trace-1052"></a>
- 142.15s–142.15s (×1), actor 5, squad 0 (events line 1052): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7173"></a>
- 142.15s–142.15s (×1), actor 5, squad 0 (trace 7173): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.558392 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 142.15s, trace 7173. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750409165760798, 'next_transition': 7185}.
<a id="trace-7174"></a>
- 142.15s–142.15s (×1), actor 5, squad 0 (trace 7174): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.558392 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 142.15s, trace 7174. Next observer evidence: {'until': 142.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750409165760798, 'next_transition': 7185}.
<a id="trace-7185"></a>
<a id="trace-7205"></a>
- 142.30s–143.30s (×2), actor 5, squad 0 (trace 7185): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 142.15s, trace 7174. Next observer evidence: {'until': 143.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7205}.
<a id="trace-7220"></a>
- 143.85s–143.85s (×1), actor 0, squad 0 (trace 7220): MoveTactically. Knowledge: actor memory at 140.00s, trace 7052. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7333}.
<a id="trace-7221"></a>
- 143.85s–143.85s (×1), actor 0, squad 0 (trace 7221): traveling. Knowledge: actor memory at 140.00s, trace 7052. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7333}.
<a id="trace-7222"></a>
- 143.85s–143.85s (×1), actor 0, squad 0 (trace 7222): received platoon directive. Knowledge: actor memory at 140.00s, trace 7052. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7333}.
<a id="trace-7333"></a>
<a id="trace-7422"></a>
<a id="trace-7448"></a>
<a id="trace-7474"></a>
<a id="trace-7498"></a>
<a id="trace-7521"></a>
<a id="trace-7610"></a>
<a id="trace-7635"></a>
<a id="trace-7657"></a>
<a id="trace-7682"></a>
<a id="trace-7710"></a>
<a id="trace-7792"></a>
- 144.30s–155.30s (×12), actor 5, squad 0 (trace 7333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 142.15s, trace 7174. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4157977980808541, 'next_transition': 7422}.
<a id="trace-7805"></a>
- 155.75s–155.75s (×1), actor 0, squad 0 (trace 7805): traveling overwatch. Knowledge: actor memory at 155.00s, trace 7724. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300175279748615, 'next_transition': 7867}.
<a id="trace-7806"></a>
- 155.75s–155.75s (×1), actor 0, squad 0 (trace 7806): matching received arrivals: traveling stage complete. Knowledge: actor memory at 155.00s, trace 7724. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300175279748615, 'next_transition': 7867}.
<a id="trace-7867"></a>
<a id="trace-7890"></a>
<a id="trace-7915"></a>
- 156.30s–158.30s (×3), actor 5, squad 0 (trace 7867): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 7726. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1606149897718432, 'next_transition': 7890}.
<a id="trace-1210"></a>
- 158.95s–158.95s (×1), actor 5, squad 0 (events line 1210): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3023991218388175, 'next_transition': 7942}.
<a id="trace-7931"></a>
- 158.95s–158.95s (×1), actor 5, squad 0 (trace 7931): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 158.95s, trace 7931. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3023991218388175, 'next_transition': 7942}.
<a id="trace-7932"></a>
- 158.95s–158.95s (×1), actor 5, squad 0 (trace 7932): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 158.95s, trace 7932. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3023991218388175, 'next_transition': 7942}.
<a id="trace-7942"></a>
<a id="trace-8024"></a>
- 159.30s–160.30s (×2), actor 5, squad 0 (trace 7942): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 158.95s, trace 7932. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560153386157075, 'next_transition': 8024}.
<a id="trace-8031"></a>
- 160.65s–160.65s (×1), actor 0, squad 0 (trace 8031): traveling. Knowledge: actor memory at 160.00s, trace 7951. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9786003362228138, 'next_transition': 8149}.
<a id="trace-8032"></a>
- 160.65s–160.65s (×1), actor 0, squad 0 (trace 8032): received platoon directive. Knowledge: actor memory at 160.00s, trace 7951. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9786003362228138, 'next_transition': 8149}.
<a id="trace-8149"></a>
<a id="trace-8181"></a>
<a id="trace-8203"></a>
<a id="trace-8230"></a>
<a id="trace-8320"></a>
<a id="trace-8342"></a>
<a id="trace-8362"></a>
<a id="trace-8387"></a>
<a id="trace-8417"></a>
<a id="trace-8504"></a>
<a id="trace-8524"></a>
<a id="trace-8546"></a>
- 161.30s–172.30s (×12), actor 5, squad 0 (trace 8149): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 7953. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.647639768654713, 'next_transition': 8181}.
<a id="trace-8553"></a>
- 172.55s–172.55s (×1), actor 0, squad 0 (trace 8553): matching received arrivals: traveling stage complete. Knowledge: actor memory at 170.00s, trace 8432. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249842770132368, 'next_transition': 8666}.
<a id="trace-8666"></a>
<a id="trace-8693"></a>
<a id="trace-8780"></a>
<a id="trace-8809"></a>
<a id="trace-8834"></a>
<a id="trace-8859"></a>
<a id="trace-8882"></a>
<a id="trace-8967"></a>
<a id="trace-8993"></a>
<a id="trace-9018"></a>
<a id="trace-9043"></a>
<a id="trace-9069"></a>
- 173.30s–184.30s (×12), actor 5, squad 0 (trace 8666): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 8434. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9026077446943557, 'next_transition': 8693}.
<a id="trace-9095"></a>
- 185.15s–185.15s (×1), actor 0, squad 0 (trace 9095): matching received arrivals: deployment leg complete. Knowledge: actor memory at 185.00s, trace 9086. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000152380399617, 'next_transition': 9155}.
<a id="trace-9155"></a>
<a id="trace-9174"></a>
<a id="trace-9193"></a>
- 185.30s–187.30s (×3), actor 5, squad 0 (trace 9155): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 9088. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0500077465322704, 'next_transition': 9174}.
<a id="trace-1476"></a>
- 187.75s–187.75s (×1), actor 5, squad 0 (events line 1476): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9213}.
<a id="trace-9198"></a>
- 187.75s–187.75s (×1), actor 5, squad 0 (trace 9198): two Done objectives within 18 m: resolved next leg must be at least 40 m ahead. Knowledge: actor memory at 187.75s, trace 9198. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9213}.
<a id="trace-9199"></a>
- 187.75s–187.75s (×1), actor 5, squad 0 (trace 9199): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 187.75s, trace 9199. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9213}.
<a id="trace-9200"></a>
- 187.75s–187.75s (×1), actor 5, squad 0 (trace 9200): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 187.75s, trace 9200. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9213}.
<a id="trace-9213"></a>
<a id="trace-9231"></a>
- 188.30s–189.30s (×2), actor 5, squad 0 (trace 9213): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 187.75s, trace 9200. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9231}.
<a id="trace-9235"></a>
- 189.45s–189.45s (×1), actor 0, squad 0 (trace 9235): Reorganise: completed/failed drill. Knowledge: actor memory at 185.00s, trace 9086. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9445}.
<a id="trace-9238"></a>
- 189.45s–189.45s (×1), actor 0, squad 0 (trace 9238): MoveTactically. Knowledge: actor memory at 185.00s, trace 9086. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9445}.
<a id="trace-9239"></a>
- 189.45s–189.45s (×1), actor 0, squad 0 (trace 9239): traveling overwatch. Knowledge: actor memory at 185.00s, trace 9086. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9445}.
<a id="trace-9240"></a>
- 189.45s–189.45s (×1), actor 0, squad 0 (trace 9240): Reorganise complete. Knowledge: actor memory at 185.00s, trace 9086. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9445}.
<a id="trace-9445"></a>
<a id="trace-9463"></a>
<a id="trace-9487"></a>
<a id="trace-9512"></a>
<a id="trace-9537"></a>
<a id="trace-9622"></a>
<a id="trace-9647"></a>
<a id="trace-9671"></a>
- 190.30s–197.30s (×8), actor 5, squad 0 (trace 9445): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 9377. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0332106009759725, 'next_transition': 9463}.
<a id="trace-9700"></a>
- 198.20s–198.20s (×1), actor 0, squad 0 (trace 9700): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 9553. Next observer evidence: None.
<a id="trace-9701"></a>
- 198.20s–198.20s (×1), actor 0, squad 0 (trace 9701): bounding overwatch. Knowledge: actor memory at 195.00s, trace 9553. Next observer evidence: None.
<a id="trace-9702"></a>
- 198.20s–198.20s (×1), actor 0, squad 0 (trace 9702): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 9553. Next observer evidence: None.
<a id="trace-9898"></a>
- 198.30s–198.30s (×1), actor 5, squad 0 (trace 9898): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 9555. Next observer evidence: {'until': 198.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3175163829588324, 'next_transition': 10098}.
<a id="trace-9902"></a>
<a id="trace-10098"></a>
<a id="trace-10292"></a>
- 198.30s–198.50s (×3), actor 0, squad 0 (trace 9902): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 9553. Next observer evidence: {'until': 198.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3175163829588324, 'next_transition': 10098}.
<a id="trace-10531"></a>
- 199.30s–199.30s (×1), actor 5, squad 0 (trace 10531): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 9555. Next observer evidence: {'until': 199.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200010775250731, 'next_transition': 1613}.
<a id="trace-1613"></a>
- 199.75s–199.75s (×1), actor 5, squad 0 (events line 1613): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5590883732967046, 'next_transition': 10638}.
<a id="trace-10551"></a>
- 199.75s–199.75s (×1), actor 5, squad 0 (trace 10551): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.341532 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 199.75s, trace 10551. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5590883732967046, 'next_transition': 10638}.
<a id="trace-10552"></a>
- 199.75s–199.75s (×1), actor 5, squad 0 (trace 10552): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.341532 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 199.75s, trace 10552. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5590883732967046, 'next_transition': 10638}.
<a id="trace-10638"></a>
- 200.30s–200.30s (×1), actor 5, squad 0 (trace 10638): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 10569. Next observer evidence: {'until': 200.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.42000440078382245, 'next_transition': 10653}.
<a id="trace-10653"></a>
- 200.60s–200.60s (×1), actor 5, squad 0 (trace 10653): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 200.60s, trace 10653. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300213318787091, 'next_transition': 10687}.
<a id="trace-10687"></a>
- 201.30s–201.30s (×1), actor 5, squad 0 (trace 10687): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.60s, trace 10653. Next observer evidence: {'until': 201.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199736526259708, 'next_transition': 10711}.
<a id="trace-10711"></a>
- 201.65s–201.65s (×1), actor 0, squad 0 (trace 10711): received platoon directive; retain contact cover stage. Knowledge: actor memory at 200.00s, trace 10567. Next observer evidence: {'until': 202, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.42000440078382306, 'next_transition': 10714}.
<a id="trace-10714"></a>
- 202.00s–202.00s (×1), actor 0, squad 0 (trace 10714): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 200.00s, trace 10567. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001693119576992, 'next_transition': 10876}.
<a id="trace-10715"></a>
- 202.00s–202.00s (×1), actor 0, squad 0 (trace 10715): rearward bound: one stationary suppressing element. Knowledge: actor memory at 200.00s, trace 10567. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001693119576992, 'next_transition': 10876}.
<a id="trace-10876"></a>
<a id="trace-10892"></a>
<a id="trace-10915"></a>
<a id="trace-11014"></a>
<a id="trace-11058"></a>
<a id="trace-11101"></a>
<a id="trace-11117"></a>
<a id="trace-11141"></a>
<a id="trace-11230"></a>
<a id="trace-11244"></a>
<a id="trace-11278"></a>
<a id="trace-11339"></a>
<a id="trace-11406"></a>
- 202.30s–214.30s (×13), actor 5, squad 0 (trace 10876): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.60s, trace 10653. Next observer evidence: {'until': 203.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1204379868820549, 'next_transition': 10892}.
<a id="trace-11422"></a>
- 214.55s–214.55s (×1), actor 0, squad 0 (trace 11422): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 210.00s, trace 11152. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3573733333333333, 'next_transition': 11563}.
<a id="trace-11423"></a>
- 214.55s–214.55s (×1), actor 0, squad 0 (trace 11423): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 210.00s, trace 11152. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3573733333333333, 'next_transition': 11563}.
<a id="trace-11563"></a>
<a id="trace-11584"></a>
<a id="trace-11603"></a>
<a id="trace-11625"></a>
<a id="trace-11639"></a>
<a id="trace-11712"></a>
<a id="trace-11728"></a>
- 215.30s–221.30s (×7), actor 5, squad 0 (trace 11563): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 11499. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3255623710511468, 'next_transition': 11584}.
<a id="trace-11731"></a>
- 221.50s–221.50s (×1), actor 0, squad 0 (trace 11731): NeedSupport. Knowledge: actor memory at 220.00s, trace 11644. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6048011746847058, 'next_transition': 11749}.
<a id="trace-11749"></a>
<a id="trace-11761"></a>
<a id="trace-11778"></a>
<a id="trace-11855"></a>
<a id="trace-11873"></a>
<a id="trace-11885"></a>
<a id="trace-11899"></a>
<a id="trace-11921"></a>
<a id="trace-12005"></a>
<a id="trace-12025"></a>
- 222.30s–231.30s (×10), actor 5, squad 0 (trace 11749): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 11646. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.756000210795091, 'next_transition': 11761}.
<a id="trace-12036"></a>
- 231.95s–231.95s (×1), actor 0, squad 0 (trace 12036): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 230.00s, trace 11933. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199876320930315, 'next_transition': 12119}.
<a id="trace-12058"></a>
- 231.95s–231.95s (×1), actor 0, squad 0 (trace 12058): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 230.00s, trace 11933. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199876320930315, 'next_transition': 12119}.
<a id="trace-12119"></a>
<a id="trace-12139"></a>
<a id="trace-12169"></a>
<a id="trace-12258"></a>
<a id="trace-12275"></a>
<a id="trace-12299"></a>
<a id="trace-12324"></a>
<a id="trace-12344"></a>
- 232.30s–239.30s (×8), actor 5, squad 0 (trace 12119): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 11935. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.046605868722531, 'next_transition': 12139}.
<a id="trace-12429"></a>
- 240.20s–240.20s (×1), actor 0, squad 0 (trace 12429): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 240.00s, trace 12361. Next observer evidence: None.
<a id="trace-12434"></a>
<a id="trace-12460"></a>
<a id="trace-12484"></a>
<a id="trace-12515"></a>
<a id="trace-12539"></a>
<a id="trace-12620"></a>
- 240.30s–245.30s (×6), actor 5, squad 0 (trace 12434): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 12363. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749881475726877, 'next_transition': 12460}.
<a id="trace-1903"></a>
- 245.60s–245.60s (×1), actor 5, squad 0 (events line 1903): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12632"></a>
- 245.60s–245.60s (×1), actor 5, squad 0 (trace 12632): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.446081 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 245.60s, trace 12632. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12650}.
<a id="trace-12633"></a>
- 245.60s–245.60s (×1), actor 5, squad 0 (trace 12633): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.446081 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 245.60s, trace 12633. Next observer evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12650}.
<a id="trace-12650"></a>
<a id="trace-12666"></a>
- 246.30s–247.30s (×2), actor 5, squad 0 (trace 12650): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.60s, trace 12633. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12666}.
<a id="trace-12670"></a>
- 247.30s–247.30s (×1), actor 0, squad 0 (trace 12670): Withdraw to received rally. Knowledge: actor memory at 245.00s, trace 12554. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12762}.
<a id="trace-12671"></a>
- 247.30s–247.30s (×1), actor 0, squad 0 (trace 12671): rearward bound: one stationary suppressing element. Knowledge: actor memory at 245.00s, trace 12554. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12762}.
<a id="trace-12762"></a>
<a id="trace-12785"></a>
<a id="trace-12875"></a>
<a id="trace-12892"></a>
<a id="trace-12916"></a>
<a id="trace-12941"></a>
<a id="trace-12962"></a>
<a id="trace-13045"></a>
<a id="trace-13065"></a>
<a id="trace-13082"></a>
<a id="trace-13104"></a>
<a id="trace-13133"></a>
- 248.30s–259.30s (×12), actor 5, squad 0 (trace 12762): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.60s, trace 12633. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724916424892866, 'next_transition': 12785}.
<a id="trace-13158"></a>
- 260.15s–260.15s (×1), actor 0, squad 0 (trace 13158): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 260.00s, trace 13147. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13272}.
<a id="trace-13159"></a>
- 260.15s–260.15s (×1), actor 0, squad 0 (trace 13159): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 260.00s, trace 13147. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13272}.
<a id="trace-13272"></a>
<a id="trace-13294"></a>
<a id="trace-13316"></a>
<a id="trace-13342"></a>
<a id="trace-13366"></a>
<a id="trace-13453"></a>
<a id="trace-13477"></a>
<a id="trace-13499"></a>
<a id="trace-13517"></a>
<a id="trace-13535"></a>
<a id="trace-13618"></a>
<a id="trace-13641"></a>
<a id="trace-13664"></a>
<a id="trace-13688"></a>
<a id="trace-13710"></a>
<a id="trace-13787"></a>
- 260.30s–275.30s (×16), actor 5, squad 0 (trace 13272): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 13149. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6615118912576223, 'next_transition': 13294}.
<a id="trace-13802"></a>
- 275.75s–275.75s (×1), actor 0, squad 0 (trace 13802): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 275.00s, trace 13723. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13863}.
<a id="trace-13803"></a>
- 275.75s–275.75s (×1), actor 0, squad 0 (trace 13803): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 275.00s, trace 13723. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13863}.
<a id="trace-13863"></a>
<a id="trace-13893"></a>
<a id="trace-13918"></a>
<a id="trace-13950"></a>
<a id="trace-14030"></a>
<a id="trace-14047"></a>
<a id="trace-14070"></a>
<a id="trace-14091"></a>
- 276.30s–283.30s (×8), actor 5, squad 0 (trace 13863): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 13725. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725175364176683, 'next_transition': 13893}.
<a id="trace-14110"></a>
- 284.15s–284.15s (×1), actor 0, squad 0 (trace 14110): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 280.00s, trace 13959. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14168}.
<a id="trace-14111"></a>
- 284.15s–284.15s (×1), actor 0, squad 0 (trace 14111): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 280.00s, trace 13959. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14168}.
<a id="trace-14168"></a>
<a id="trace-14258"></a>
<a id="trace-14283"></a>
<a id="trace-14309"></a>
<a id="trace-14330"></a>
<a id="trace-14352"></a>
<a id="trace-14436"></a>
<a id="trace-14460"></a>
<a id="trace-14484"></a>
<a id="trace-14501"></a>
- 284.30s–293.30s (×10), actor 5, squad 0 (trace 14168): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 13961. Next observer evidence: {'until': 285.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.661479052416797, 'next_transition': 14258}.
<a id="trace-14513"></a>
- 293.55s–293.55s (×1), actor 0, squad 0 (trace 14513): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 290.00s, trace 14367. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.444819779338822, 'next_transition': 14528}.
<a id="trace-14528"></a>
<a id="trace-14621"></a>
- 294.30s–295.30s (×2), actor 5, squad 0 (trace 14528): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 14369. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7003081065153113, 'next_transition': 14621}.
<a id="trace-2370"></a>
- 295.95s–295.95s (×1), actor 5, squad 0 (events line 2370): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14643"></a>
- 295.95s–295.95s (×1), actor 5, squad 0 (trace 14643): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548233 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 295.95s, trace 14643. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14649}.
<a id="trace-14644"></a>
- 295.95s–295.95s (×1), actor 5, squad 0 (trace 14644): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548233 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 295.95s, trace 14644. Next observer evidence: {'until': 296.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14649}.
<a id="trace-14649"></a>
<a id="trace-14678"></a>
- 296.30s–297.30s (×2), actor 5, squad 0 (trace 14649): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.95s, trace 14644. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20998906056163127, 'next_transition': 14678}.
<a id="trace-14686"></a>
- 297.65s–297.65s (×1), actor 0, squad 0 (trace 14686): MoveTactically. Knowledge: actor memory at 295.00s, trace 14549. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14805}.
<a id="trace-14687"></a>
- 297.65s–297.65s (×1), actor 0, squad 0 (trace 14687): traveling. Knowledge: actor memory at 295.00s, trace 14549. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14805}.
<a id="trace-14688"></a>
- 297.65s–297.65s (×1), actor 0, squad 0 (trace 14688): received platoon directive. Knowledge: actor memory at 295.00s, trace 14549. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14805}.
<a id="trace-14805"></a>
<a id="trace-14834"></a>
<a id="trace-14922"></a>
<a id="trace-14951"></a>
<a id="trace-14973"></a>
<a id="trace-14999"></a>
<a id="trace-15024"></a>
<a id="trace-15109"></a>
<a id="trace-15134"></a>
<a id="trace-15156"></a>
<a id="trace-15181"></a>
<a id="trace-15207"></a>
- 298.30s–309.30s (×12), actor 5, squad 0 (trace 14805): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.95s, trace 14644. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.672011641748302, 'next_transition': 14834}.
<a id="trace-15214"></a>
- 309.35s–309.35s (×1), actor 0, squad 0 (trace 15214): traveling overwatch. Knowledge: actor memory at 305.00s, trace 15042. Next observer evidence: {'until': 310.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.087819234249829, 'next_transition': 15347}.
<a id="trace-15215"></a>
- 309.35s–309.35s (×1), actor 0, squad 0 (trace 15215): matching received arrivals: traveling stage complete. Knowledge: actor memory at 305.00s, trace 15042. Next observer evidence: {'until': 310.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.087819234249829, 'next_transition': 15347}.
<a id="trace-15347"></a>
<a id="trace-15361"></a>
<a id="trace-15389"></a>
<a id="trace-15415"></a>
<a id="trace-15435"></a>
<a id="trace-15520"></a>
<a id="trace-15538"></a>
- 310.30s–316.30s (×7), actor 5, squad 0 (trace 15347): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 15276. Next observer evidence: {'until': 311.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8059663218066893, 'next_transition': 15361}.
<a id="trace-2568"></a>
- 317.20s–317.20s (×1), actor 5, squad 0 (events line 2568): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15553"></a>
- 317.20s–317.20s (×1), actor 5, squad 0 (trace 15553): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 317.20s, trace 15553. Next observer evidence: None.
<a id="trace-15554"></a>
- 317.20s–317.20s (×1), actor 5, squad 0 (trace 15554): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 317.20s, trace 15554. Next observer evidence: None.
<a id="trace-15558"></a>
<a id="trace-15585"></a>
- 317.30s–318.30s (×2), actor 5, squad 0 (trace 15558): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 317.20s, trace 15554. Next observer evidence: {'until': 318.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5434809580224218, 'next_transition': 15585}.
<a id="trace-15605"></a>
- 318.90s–318.90s (×1), actor 0, squad 0 (trace 15605): traveling. Knowledge: actor memory at 315.00s, trace 15450. Next observer evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3024101188783207, 'next_transition': 15717}.
<a id="trace-15606"></a>
- 318.90s–318.90s (×1), actor 0, squad 0 (trace 15606): received platoon directive. Knowledge: actor memory at 315.00s, trace 15450. Next observer evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3024101188783207, 'next_transition': 15717}.
<a id="trace-15717"></a>
<a id="trace-15803"></a>
<a id="trace-15833"></a>
<a id="trace-15857"></a>
<a id="trace-15876"></a>
<a id="trace-15904"></a>
<a id="trace-15998"></a>
<a id="trace-16019"></a>
<a id="trace-16040"></a>
<a id="trace-16059"></a>
<a id="trace-16077"></a>
- 319.30s–329.30s (×11), actor 5, squad 0 (trace 15717): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 317.20s, trace 15554. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7528328315251814, 'next_transition': 15803}.
<a id="trace-16091"></a>
- 329.75s–329.75s (×1), actor 0, squad 0 (trace 16091): matching received arrivals: traveling stage complete. Knowledge: actor memory at 325.00s, trace 15925. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600330648218125, 'next_transition': 16250}.
<a id="trace-16250"></a>
<a id="trace-16285"></a>
<a id="trace-16312"></a>
<a id="trace-16342"></a>
<a id="trace-16363"></a>
<a id="trace-16445"></a>
<a id="trace-16471"></a>
<a id="trace-16500"></a>
<a id="trace-16523"></a>
<a id="trace-16549"></a>
<a id="trace-16631"></a>
<a id="trace-16649"></a>
- 330.30s–341.30s (×12), actor 5, squad 0 (trace 16250): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 16183. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4284693136798228, 'next_transition': 16285}.
<a id="trace-16662"></a>
- 341.75s–341.75s (×1), actor 0, squad 0 (trace 16662): traveling overwatch. Knowledge: actor memory at 340.00s, trace 16557. Next observer evidence: {'until': 342.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9595526812867408, 'next_transition': 16728}.
<a id="trace-16663"></a>
- 341.75s–341.75s (×1), actor 0, squad 0 (trace 16663): matching received arrivals: traveling stage complete. Knowledge: actor memory at 340.00s, trace 16557. Next observer evidence: {'until': 342.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9595526812867408, 'next_transition': 16728}.
<a id="trace-16728"></a>
- 342.30s–342.30s (×1), actor 5, squad 0 (trace 16728): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 16559. Next observer evidence: {'until': 342.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11441641296403014, 'next_transition': 16733}.
<a id="trace-16733"></a>
- 342.45s–342.45s (×1), actor 0, squad 0 (trace 16733): ReactToContact: cover and return fire. Knowledge: actor memory at 340.00s, trace 16557. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.477023397108453, 'next_transition': 16919}.
<a id="trace-16734"></a>
- 342.45s–342.45s (×1), actor 0, squad 0 (trace 16734): bounding overwatch. Knowledge: actor memory at 340.00s, trace 16557. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.477023397108453, 'next_transition': 16919}.
<a id="trace-16735"></a>
- 342.45s–342.45s (×1), actor 0, squad 0 (trace 16735): new contact inside 100 m. Knowledge: actor memory at 340.00s, trace 16557. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.477023397108453, 'next_transition': 16919}.
<a id="trace-16919"></a>
<a id="trace-16949"></a>
- 343.30s–344.30s (×2), actor 5, squad 0 (trace 16919): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 16559. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.015834334034222, 'next_transition': 16949}.
<a id="trace-16953"></a>
- 344.30s–344.30s (×1), actor 0, squad 0 (trace 16953): new contact inside 100 m. Knowledge: actor memory at 340.00s, trace 16557. Next observer evidence: {'until': 344.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6009180714004928, 'next_transition': 2837}.
<a id="trace-2837"></a>
- 344.70s–344.70s (×1), actor 5, squad 0 (events line 2837): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17119"></a>
- 344.70s–344.70s (×1), actor 5, squad 0 (trace 17119): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.341345 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 344.70s, trace 17119. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5230607284368334, 'next_transition': 17211}.
<a id="trace-17120"></a>
- 344.70s–344.70s (×1), actor 5, squad 0 (trace 17120): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.341345 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 344.70s, trace 17120. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5230607284368334, 'next_transition': 17211}.
<a id="trace-17211"></a>
<a id="trace-17239"></a>
- 345.30s–346.30s (×2), actor 5, squad 0 (trace 17211): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 17138. Next observer evidence: {'until': 346.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5108003791537814, 'next_transition': 17239}.
<a id="trace-17248"></a>
- 346.40s–346.40s (×1), actor 0, squad 0 (trace 17248): received platoon directive; retain contact cover stage. Knowledge: actor memory at 345.00s, trace 17136. Next observer evidence: {'until': 347.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4742329982997195, 'next_transition': 17269}.
<a id="trace-17269"></a>
- 347.30s–347.30s (×1), actor 5, squad 0 (trace 17269): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 17138. Next observer evidence: {'until': 347.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.42001263696049723, 'next_transition': 17275}.
<a id="trace-17275"></a>
<a id="trace-17464"></a>
- 347.45s–347.50s (×2), actor 0, squad 0 (trace 17275): new contact inside 100 m. Knowledge: actor memory at 345.00s, trace 17136. Next observer evidence: None.
<a id="trace-17670"></a>
<a id="trace-17700"></a>
- 348.30s–349.30s (×2), actor 5, squad 0 (trace 17670): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 17138. Next observer evidence: {'until': 349.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9191531842565015, 'next_transition': 17700}.
<a id="trace-17704"></a>
- 349.50s–349.50s (×1), actor 0, squad 0 (trace 17704): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 345.00s, trace 17136. Next observer evidence: {'until': 349.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200192454614786, 'next_transition': 17897}.
<a id="trace-17897"></a>
- 349.60s–349.60s (×1), actor 5, squad 0 (trace 17897): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 349.60s, trace 17897. Next observer evidence: {'until': 350.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8925078923690551, 'next_transition': 17983}.
<a id="trace-17983"></a>
<a id="trace-18016"></a>
<a id="trace-18036"></a>
- 350.30s–352.30s (×3), actor 5, squad 0 (trace 17983): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 17916. Next observer evidence: {'until': 351.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.049993939987803, 'next_transition': 18016}.
<a id="trace-18056"></a>
- 353.00s–353.00s (×1), actor 0, squad 0 (trace 18056): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 350.00s, trace 17914. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18213}.
<a id="trace-18057"></a>
- 353.00s–353.00s (×1), actor 0, squad 0 (trace 18057): rearward bound: one stationary suppressing element. Knowledge: actor memory at 350.00s, trace 17914. Next observer evidence: {'until': 353.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18213}.
<a id="trace-18213"></a>
<a id="trace-18235"></a>
<a id="trace-18324"></a>
<a id="trace-18388"></a>
<a id="trace-18458"></a>
- 353.30s–357.30s (×5), actor 5, squad 0 (trace 18213): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 350.00s, trace 17916. Next observer evidence: {'until': 354.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12303333333333318, 'next_transition': 18235}.

## Net delivery

207 matched order/radio deliveries; 240 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.192s; maximum 1.600s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 1544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 1545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 1548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 1893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 1894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 1895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 1896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 1897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 1898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 1899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 1900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 2896: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2899: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2900: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2901: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2902: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2903: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 41.05s leader 5, trace 3057: estimate 4.94; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 3256: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 3257: estimate 4.93; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3347: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3349: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3350: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3351: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3352: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3353: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3354: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3515: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3517: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3518: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3519: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3520: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3521: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3522: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3742: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3744: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3745: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3746: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3747: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3748: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3749: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 3936: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3938: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3939: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3940: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3941: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3942: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3943: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 4111: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4113: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4114: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4115: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4116: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4117: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4118: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4271: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4273: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4274: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4275: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4276: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4277: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4278: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4527: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4529: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4530: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4531: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4532: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4533: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4534: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 4699: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4701: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4702: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4703: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4704: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4705: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4706: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 4938: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 4939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 4940: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 4941: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 4942: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 4943: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 4944: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 86.05s leader 5, trace 5026: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 86.05s leader 5, trace 5027: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 5170: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5172: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5173: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5174: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5175: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5176: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 5320: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5322: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5323: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5324: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5325: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5326: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 5481: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5483: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5484: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5485: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5486: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5487: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 5707: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5709: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5710: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5711: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5712: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5713: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 5889: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 5890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5891: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5892: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5893: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5894: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5895: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 6065: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6067: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6068: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6069: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6070: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6071: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 6287: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6289: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6290: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6291: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6292: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6293: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 6467: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6469: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6470: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6471: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6472: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6473: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 6692: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6694: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6695: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6696: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6697: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6698: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 6878: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 6879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6880: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6881: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6882: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6883: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6884: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 7052: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7054: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7055: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7056: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7057: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7058: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 142.15s leader 5, trace 7173: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 142.15s leader 5, trace 7174: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 7354: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7356: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7357: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7358: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7359: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7360: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 7537: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7539: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7540: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7541: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7542: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7543: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 7724: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7726: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7727: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7728: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7729: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7730: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 158.95s leader 5, trace 7931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 158.95s leader 5, trace 7932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 7951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 7952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7954: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7955: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7956: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7957: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 8248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8251: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8252: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8253: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8254: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 8432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8435: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8436: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8437: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8438: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 8713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 8716: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 8717: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8718: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8719: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 8897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8900: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8901: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8902: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8903: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 9086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9089: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9090: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9091: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9092: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 187.75s leader 5, trace 9198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 187.75s leader 5, trace 9199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 187.75s leader 5, trace 9200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 9375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 9553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 199.75s leader 5, trace 10551: estimate 1.49; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 199.75s leader 5, trace 10552: estimate 1.49; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 10567: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 10568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 10569: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 10570: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10571: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10572: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.60s leader 5, trace 10653: estimate 4.96; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 10934: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 10936: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10937: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10938: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10939: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10940: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 11152: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 11153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 11154: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 11155: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 11156: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 11157: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 11158: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 11497: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 11498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 11499: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 11500: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 11501: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 11502: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 11503: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 11644: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 11645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 11646: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 11647: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11648: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11649: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11650: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 11789: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 11790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 11791: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 11792: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11793: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11794: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11795: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 0, trace 11933: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 11934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 11935: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 11936: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11937: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11938: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11939: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 0, trace 12188: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 12189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 12190: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 12191: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12192: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12193: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12194: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 0, trace 12361: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 12362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 12363: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12364: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12365: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12366: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12367: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 0, trace 12554: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 12556: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12557: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12558: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12559: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12560: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.60s leader 5, trace 12632: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.60s leader 5, trace 12633: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 0, trace 12800: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 12801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 12802: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 12803: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 12804: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12805: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12806: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 0, trace 12976: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 12977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 12978: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 12979: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 12980: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 12981: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 12982: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 0, trace 13147: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 13148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 13149: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 13150: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 13151: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 13152: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 13153: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 0, trace 13384: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 13385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 13386: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 13387: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 13388: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 13389: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 13390: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 0, trace 13547: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 13548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 13549: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13550: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13551: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13552: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13553: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 0, trace 13723: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 13724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 13725: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 13726: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13727: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13728: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13729: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 0, trace 13959: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 13960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 13961: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 13962: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 13963: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 13964: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 13965: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 0, trace 14184: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 14185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 14186: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 14187: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 14188: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 14189: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 14190: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 0, trace 14367: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 14368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 14369: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 14370: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 14371: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 14372: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 14373: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 0, trace 14549: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 14550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 14551: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 14552: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 14553: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 14554: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 14555: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.95s leader 5, trace 14643: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.95s leader 5, trace 14644: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 0, trace 14850: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 14851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 14852: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 14853: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 14854: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 14855: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 14856: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 0, trace 15042: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 15043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 15044: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 15045: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 15046: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 15047: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 15048: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 0, trace 15274: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 15275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 15276: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 15277: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 15278: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 15279: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 15280: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 0, trace 15450: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 15451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 15452: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 15453: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 15454: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 15455: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 15456: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 317.20s leader 5, trace 15553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 317.20s leader 5, trace 15554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 0, trace 15737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 15738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 15739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 15740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 15741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 15742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 15743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 0, trace 15925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 15926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 15927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 15928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 15929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 15930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 15931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 0, trace 16181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 16182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 16183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 16184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 16185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 16186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 16187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 0, trace 16378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 16379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 16380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 16381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 16382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 16383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 16384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 0, trace 16557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 16558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 16559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 16560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 16561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 16562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 16563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 344.70s leader 5, trace 17119: estimate 1.49; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 344.70s leader 5, trace 17120: estimate 1.49; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 0, trace 17136: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 17137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 17138: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 17139: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 17140: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 17141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 17142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 349.60s leader 5, trace 17897: estimate 4.95; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 0, trace 17914: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 17915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 17916: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 17917: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 17918: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 17919: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 17920: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 0, trace 18249: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 18250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 18251: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 18252: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 18253: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 18254: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 18255: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 18521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 18522: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 18523: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 18524: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 18525: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 18526: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Moss incapacitated
- 1: Vale incapacitated

## Outcome attribution

- 86.05s, evidence 602: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 86.05s, evidence 5026: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.443211 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41996244262703547, 'next_transition': 5033}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 86.05s, evidence 5027: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.443211 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41996244262703547, 'next_transition': 5033}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 245.60s, evidence 1903: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 245.60s, evidence 12632: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.446081 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12650}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 245.60s, evidence 12633: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.446081 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 246.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12650}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
