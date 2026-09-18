# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/27/109/good-azure/battle-109-1789674277209886280`

## Battle summary

**Ember** · 360 s · 110 shots.

### Turning points

- 19.9s, squad 0: contact (events line 196). First recorded contact.
- 45.8s, squad 0: help call ([trace 3846](#trace-3846)). No completion observed before termination.
- 81.6s, squad 0: withdrawal ([trace 4993](#trace-4993)). 102.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 106.4s, squad 0: withdrawal ([trace 5755](#trace-5755)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 16 shots, 2/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 94 shots, 0/6 lost.

### Decisions and attribution

At 31.1s, squad 0 chose FightHere: nearest known group ([trace 2988](#trace-2988)), followed by 1 shots and 0 own casualties; estimate 5.8 against 4 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 401](#trace-401)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 400](#trace-400)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400091002897382, 'next_transition': 414}.
- 23.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.347531 retreat threshold=0.500000 initiative=delegated ([trace 2362](#trace-2362)). Following evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000037779032563, 'next_transition': 2375}.

### Communication

81 matched deliveries (mean 0.33s, max 1.90s); 244 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 19.90s, squad 0, contact, evidence events line 196: First recorded contact; .
- 45.75s, squad 0, help call, evidence 3846: NeedSupport; No completion observed before termination.
- 81.55s, squad 0, withdrawal, evidence 4993: BreakContact: believed ratio at least two without superiority; 102.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 106.40s, squad 0, withdrawal, evidence 5755: Withdraw to received rally; No completion observed before termination.

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
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400103977663465, 'next_transition': 433}.
<a id="trace-521"></a>
<a id="trace-587"></a>
<a id="trace-610"></a>
<a id="trace-634"></a>
<a id="trace-678"></a>
<a id="trace-714"></a>
<a id="trace-731"></a>
<a id="trace-744"></a>
<a id="trace-828"></a>
<a id="trace-843"></a>
<a id="trace-856"></a>
<a id="trace-873"></a>
<a id="trace-905"></a>
<a id="trace-924"></a>
<a id="trace-937"></a>
<a id="trace-975"></a>
<a id="trace-1058"></a>
<a id="trace-1115"></a>
<a id="trace-1132"></a>
<a id="trace-1144"></a>
<a id="trace-1155"></a>
<a id="trace-1188"></a>
<a id="trace-1196"></a>
<a id="trace-1213"></a>
<a id="trace-1293"></a>
<a id="trace-1522"></a>
<a id="trace-1541"></a>
<a id="trace-1567"></a>
<a id="trace-1815"></a>
<a id="trace-2071"></a>
<a id="trace-2346"></a>
<a id="trace-2377"></a>
<a id="trace-2449"></a>
<a id="trace-2540"></a>
<a id="trace-2563"></a>
<a id="trace-2585"></a>
<a id="trace-2602"></a>
<a id="trace-2618"></a>
<a id="trace-2626"></a>
<a id="trace-2645"></a>
<a id="trace-2675"></a>
<a id="trace-2687"></a>
<a id="trace-2768"></a>
<a id="trace-2784"></a>
<a id="trace-2996"></a>
<a id="trace-3014"></a>
<a id="trace-3218"></a>
<a id="trace-3241"></a>
<a id="trace-3262"></a>
<a id="trace-3281"></a>
<a id="trace-3289"></a>
<a id="trace-3310"></a>
<a id="trace-3407"></a>
<a id="trace-3436"></a>
<a id="trace-3470"></a>
<a id="trace-3483"></a>
<a id="trace-3497"></a>
<a id="trace-3509"></a>
<a id="trace-3530"></a>
<a id="trace-3544"></a>
<a id="trace-3560"></a>
<a id="trace-3638"></a>
<a id="trace-3651"></a>
<a id="trace-3667"></a>
<a id="trace-3684"></a>
<a id="trace-3706"></a>
<a id="trace-3719"></a>
<a id="trace-3732"></a>
<a id="trace-3748"></a>
<a id="trace-3761"></a>
<a id="trace-3834"></a>
<a id="trace-3845"></a>
<a id="trace-3865"></a>
<a id="trace-3879"></a>
<a id="trace-3893"></a>
<a id="trace-3904"></a>
<a id="trace-3916"></a>
<a id="trace-4016"></a>
<a id="trace-4028"></a>
<a id="trace-4037"></a>
<a id="trace-4044"></a>
<a id="trace-4059"></a>
<a id="trace-4078"></a>
<a id="trace-4087"></a>
<a id="trace-4102"></a>
<a id="trace-4174"></a>
<a id="trace-4184"></a>
<a id="trace-4201"></a>
<a id="trace-4222"></a>
<a id="trace-4227"></a>
<a id="trace-4238"></a>
<a id="trace-4245"></a>
<a id="trace-4266"></a>
<a id="trace-4277"></a>
<a id="trace-4354"></a>
<a id="trace-4375"></a>
<a id="trace-4384"></a>
<a id="trace-4397"></a>
<a id="trace-4406"></a>
<a id="trace-4417"></a>
<a id="trace-4427"></a>
<a id="trace-4520"></a>
<a id="trace-4524"></a>
<a id="trace-4531"></a>
<a id="trace-4537"></a>
<a id="trace-4551"></a>
<a id="trace-4568"></a>
<a id="trace-4579"></a>
<a id="trace-4588"></a>
<a id="trace-4673"></a>
<a id="trace-4679"></a>
<a id="trace-4690"></a>
<a id="trace-4695"></a>
<a id="trace-4703"></a>
<a id="trace-4715"></a>
<a id="trace-4722"></a>
<a id="trace-4728"></a>
<a id="trace-4796"></a>
<a id="trace-4800"></a>
<a id="trace-4809"></a>
<a id="trace-4840"></a>
<a id="trace-4862"></a>
<a id="trace-4887"></a>
<a id="trace-4894"></a>
<a id="trace-4970"></a>
<a id="trace-4978"></a>
<a id="trace-5002"></a>
<a id="trace-5017"></a>
<a id="trace-5026"></a>
<a id="trace-5038"></a>
<a id="trace-5045"></a>
<a id="trace-5138"></a>
<a id="trace-5154"></a>
<a id="trace-5169"></a>
<a id="trace-5176"></a>
<a id="trace-5185"></a>
<a id="trace-5193"></a>
<a id="trace-5202"></a>
<a id="trace-5207"></a>
<a id="trace-5280"></a>
<a id="trace-5296"></a>
<a id="trace-5323"></a>
<a id="trace-5332"></a>
<a id="trace-5341"></a>
<a id="trace-5346"></a>
<a id="trace-5440"></a>
<a id="trace-5447"></a>
<a id="trace-5458"></a>
<a id="trace-5466"></a>
<a id="trace-5474"></a>
<a id="trace-5488"></a>
<a id="trace-5565"></a>
<a id="trace-5571"></a>
<a id="trace-5580"></a>
<a id="trace-5588"></a>
<a id="trace-5604"></a>
<a id="trace-5621"></a>
<a id="trace-5634"></a>
<a id="trace-5647"></a>
<a id="trace-5657"></a>
<a id="trace-5667"></a>
<a id="trace-5746"></a>
<a id="trace-5754"></a>
<a id="trace-5765"></a>
<a id="trace-5787"></a>
<a id="trace-5806"></a>
<a id="trace-5820"></a>
<a id="trace-5835"></a>
<a id="trace-5843"></a>
<a id="trace-5919"></a>
<a id="trace-5927"></a>
<a id="trace-5936"></a>
<a id="trace-5944"></a>
<a id="trace-5953"></a>
<a id="trace-5959"></a>
<a id="trace-5967"></a>
<a id="trace-5975"></a>
<a id="trace-5986"></a>
<a id="trace-6063"></a>
<a id="trace-6071"></a>
<a id="trace-6081"></a>
<a id="trace-6090"></a>
<a id="trace-6101"></a>
<a id="trace-6126"></a>
<a id="trace-6136"></a>
<a id="trace-6141"></a>
<a id="trace-6212"></a>
<a id="trace-6232"></a>
<a id="trace-6260"></a>
<a id="trace-6270"></a>
<a id="trace-6281"></a>
<a id="trace-6378"></a>
<a id="trace-6388"></a>
<a id="trace-6395"></a>
<a id="trace-6404"></a>
<a id="trace-6417"></a>
<a id="trace-6432"></a>
<a id="trace-6503"></a>
<a id="trace-6508"></a>
<a id="trace-6518"></a>
<a id="trace-6526"></a>
<a id="trace-6537"></a>
<a id="trace-6546"></a>
<a id="trace-6555"></a>
<a id="trace-6565"></a>
<a id="trace-6573"></a>
<a id="trace-6581"></a>
<a id="trace-6652"></a>
<a id="trace-6659"></a>
<a id="trace-6669"></a>
<a id="trace-6675"></a>
<a id="trace-6686"></a>
<a id="trace-6702"></a>
<a id="trace-6713"></a>
<a id="trace-6723"></a>
<a id="trace-6728"></a>
<a id="trace-6801"></a>
<a id="trace-6808"></a>
<a id="trace-6824"></a>
<a id="trace-6834"></a>
<a id="trace-6840"></a>
<a id="trace-6849"></a>
<a id="trace-6861"></a>
<a id="trace-6871"></a>
<a id="trace-6876"></a>
<a id="trace-6962"></a>
<a id="trace-6970"></a>
<a id="trace-6980"></a>
<a id="trace-6989"></a>
<a id="trace-6999"></a>
<a id="trace-7009"></a>
<a id="trace-7017"></a>
<a id="trace-7022"></a>
<a id="trace-7097"></a>
<a id="trace-7102"></a>
<a id="trace-7116"></a>
<a id="trace-7133"></a>
<a id="trace-7154"></a>
<a id="trace-7165"></a>
<a id="trace-7243"></a>
<a id="trace-7256"></a>
<a id="trace-7265"></a>
<a id="trace-7275"></a>
<a id="trace-7281"></a>
<a id="trace-7289"></a>
<a id="trace-7300"></a>
<a id="trace-7386"></a>
<a id="trace-7392"></a>
<a id="trace-7411"></a>
<a id="trace-7438"></a>
<a id="trace-7448"></a>
<a id="trace-7456"></a>
<a id="trace-7462"></a>
<a id="trace-7533"></a>
<a id="trace-7547"></a>
<a id="trace-7564"></a>
<a id="trace-7573"></a>
<a id="trace-7586"></a>
<a id="trace-7606"></a>
<a id="trace-7612"></a>
<a id="trace-7684"></a>
<a id="trace-7697"></a>
<a id="trace-7704"></a>
<a id="trace-7718"></a>
<a id="trace-7728"></a>
<a id="trace-7737"></a>
<a id="trace-7748"></a>
<a id="trace-7758"></a>
<a id="trace-7829"></a>
<a id="trace-7836"></a>
<a id="trace-7847"></a>
<a id="trace-7855"></a>
<a id="trace-7865"></a>
<a id="trace-7880"></a>
<a id="trace-7889"></a>
<a id="trace-7897"></a>
<a id="trace-7974"></a>
<a id="trace-7980"></a>
<a id="trace-7992"></a>
<a id="trace-7998"></a>
<a id="trace-8009"></a>
<a id="trace-8018"></a>
<a id="trace-8028"></a>
<a id="trace-8039"></a>
<a id="trace-8050"></a>
<a id="trace-8056"></a>
<a id="trace-8139"></a>
<a id="trace-8145"></a>
<a id="trace-8161"></a>
<a id="trace-8171"></a>
<a id="trace-8191"></a>
<a id="trace-8199"></a>
<a id="trace-8272"></a>
<a id="trace-8289"></a>
<a id="trace-8304"></a>
<a id="trace-8318"></a>
<a id="trace-8335"></a>
<a id="trace-8344"></a>
<a id="trace-8420"></a>
<a id="trace-8447"></a>
<a id="trace-8467"></a>
<a id="trace-8476"></a>
<a id="trace-8484"></a>
<a id="trace-8490"></a>
<a id="trace-8560"></a>
<a id="trace-8567"></a>
<a id="trace-8582"></a>
<a id="trace-8592"></a>
<a id="trace-8618"></a>
<a id="trace-8713"></a>
<a id="trace-8722"></a>
<a id="trace-8729"></a>
<a id="trace-8746"></a>
<a id="trace-8754"></a>
<a id="trace-8763"></a>
<a id="trace-8773"></a>
<a id="trace-8778"></a>
<a id="trace-8852"></a>
<a id="trace-8871"></a>
<a id="trace-8877"></a>
<a id="trace-8888"></a>
<a id="trace-8897"></a>
<a id="trace-8904"></a>
<a id="trace-8915"></a>
<a id="trace-8925"></a>
<a id="trace-8930"></a>
<a id="trace-9000"></a>
<a id="trace-9005"></a>
<a id="trace-9016"></a>
<a id="trace-9022"></a>
<a id="trace-9032"></a>
<a id="trace-9040"></a>
<a id="trace-9053"></a>
<a id="trace-9065"></a>
<a id="trace-9151"></a>
<a id="trace-9156"></a>
<a id="trace-9171"></a>
<a id="trace-9181"></a>
<a id="trace-9187"></a>
<a id="trace-9196"></a>
<a id="trace-9206"></a>
<a id="trace-9214"></a>
<a id="trace-9223"></a>
<a id="trace-9296"></a>
<a id="trace-9317"></a>
<a id="trace-9323"></a>
<a id="trace-9334"></a>
<a id="trace-9342"></a>
<a id="trace-9370"></a>
<a id="trace-9440"></a>
<a id="trace-9448"></a>
<a id="trace-9455"></a>
<a id="trace-9465"></a>
<a id="trace-9479"></a>
<a id="trace-9487"></a>
<a id="trace-9496"></a>
<a id="trace-9508"></a>
<a id="trace-9520"></a>
<a id="trace-9525"></a>
<a id="trace-9605"></a>
<a id="trace-9612"></a>
<a id="trace-9621"></a>
<a id="trace-9629"></a>
<a id="trace-9640"></a>
<a id="trace-9650"></a>
<a id="trace-9661"></a>
<a id="trace-9668"></a>
<a id="trace-9742"></a>
<a id="trace-9751"></a>
<a id="trace-9760"></a>
<a id="trace-9766"></a>
<a id="trace-9781"></a>
<a id="trace-9788"></a>
<a id="trace-9799"></a>
<a id="trace-9807"></a>
<a id="trace-9813"></a>
<a id="trace-9892"></a>
<a id="trace-9902"></a>
<a id="trace-9912"></a>
<a id="trace-9924"></a>
<a id="trace-9931"></a>
<a id="trace-9942"></a>
<a id="trace-9952"></a>
<a id="trace-9959"></a>
<a id="trace-9965"></a>
<a id="trace-10036"></a>
<a id="trace-10041"></a>
<a id="trace-10050"></a>
<a id="trace-10058"></a>
<a id="trace-10076"></a>
<a id="trace-10095"></a>
<a id="trace-10107"></a>
<a id="trace-10115"></a>
<a id="trace-10186"></a>
<a id="trace-10193"></a>
<a id="trace-10206"></a>
<a id="trace-10216"></a>
<a id="trace-10231"></a>
<a id="trace-10242"></a>
<a id="trace-10251"></a>
<a id="trace-10258"></a>
<a id="trace-10329"></a>
<a id="trace-10347"></a>
<a id="trace-10355"></a>
<a id="trace-10367"></a>
<a id="trace-10374"></a>
<a id="trace-10382"></a>
<a id="trace-10391"></a>
<a id="trace-10405"></a>
<a id="trace-10475"></a>
<a id="trace-10492"></a>
<a id="trace-10501"></a>
<a id="trace-10511"></a>
<a id="trace-10529"></a>
<a id="trace-10538"></a>
<a id="trace-10629"></a>
<a id="trace-10643"></a>
<a id="trace-10654"></a>
<a id="trace-10664"></a>
<a id="trace-10683"></a>
<a id="trace-10692"></a>
<a id="trace-10783"></a>
<a id="trace-10792"></a>
<a id="trace-10802"></a>
<a id="trace-10809"></a>
<a id="trace-10817"></a>
<a id="trace-10829"></a>
<a id="trace-10916"></a>
<a id="trace-10921"></a>
<a id="trace-10930"></a>
<a id="trace-10947"></a>
<a id="trace-10955"></a>
<a id="trace-10973"></a>
<a id="trace-10983"></a>
<a id="trace-10991"></a>
<a id="trace-11070"></a>
<a id="trace-11081"></a>
<a id="trace-11087"></a>
<a id="trace-11098"></a>
<a id="trace-11113"></a>
<a id="trace-11122"></a>
<a id="trace-11130"></a>
<a id="trace-11209"></a>
<a id="trace-11217"></a>
<a id="trace-11226"></a>
<a id="trace-11234"></a>
<a id="trace-11253"></a>
<a id="trace-11262"></a>
<a id="trace-11273"></a>
<a id="trace-11282"></a>
<a id="trace-11287"></a>
<a id="trace-11358"></a>
<a id="trace-11363"></a>
<a id="trace-11371"></a>
<a id="trace-11380"></a>
<a id="trace-11390"></a>
<a id="trace-11400"></a>
<a id="trace-11410"></a>
<a id="trace-11420"></a>
<a id="trace-11430"></a>
<a id="trace-11438"></a>
<a id="trace-11511"></a>
<a id="trace-11517"></a>
<a id="trace-11525"></a>
<a id="trace-11531"></a>
<a id="trace-11540"></a>
<a id="trace-11548"></a>
<a id="trace-11564"></a>
<a id="trace-11581"></a>
<a id="trace-11660"></a>
<a id="trace-11671"></a>
<a id="trace-11691"></a>
<a id="trace-11697"></a>
<a id="trace-11705"></a>
<a id="trace-11721"></a>
<a id="trace-11728"></a>
<a id="trace-11811"></a>
<a id="trace-11832"></a>
<a id="trace-11841"></a>
<a id="trace-11855"></a>
<a id="trace-11865"></a>
<a id="trace-11878"></a>
<a id="trace-11947"></a>
<a id="trace-11953"></a>
<a id="trace-11961"></a>
<a id="trace-11976"></a>
<a id="trace-11982"></a>
<a id="trace-11993"></a>
<a id="trace-12006"></a>
<a id="trace-12022"></a>
<a id="trace-12100"></a>
<a id="trace-12106"></a>
<a id="trace-12113"></a>
<a id="trace-12133"></a>
<a id="trace-12141"></a>
<a id="trace-12150"></a>
<a id="trace-12164"></a>
<a id="trace-12238"></a>
<a id="trace-12267"></a>
<a id="trace-12277"></a>
<a id="trace-12292"></a>
<a id="trace-12301"></a>
<a id="trace-12309"></a>
<a id="trace-12314"></a>
<a id="trace-12389"></a>
<a id="trace-12397"></a>
<a id="trace-12406"></a>
<a id="trace-12415"></a>
<a id="trace-12426"></a>
<a id="trace-12439"></a>
<a id="trace-12461"></a>
<a id="trace-12467"></a>
<a id="trace-12549"></a>
<a id="trace-12555"></a>
<a id="trace-12564"></a>
<a id="trace-12570"></a>
<a id="trace-12579"></a>
<a id="trace-12591"></a>
<a id="trace-12599"></a>
<a id="trace-12683"></a>
<a id="trace-12688"></a>
<a id="trace-12699"></a>
<a id="trace-12722"></a>
<a id="trace-12730"></a>
<a id="trace-12739"></a>
<a id="trace-12747"></a>
<a id="trace-12754"></a>
<a id="trace-12823"></a>
<a id="trace-12830"></a>
<a id="trace-12844"></a>
<a id="trace-12850"></a>
<a id="trace-12872"></a>
<a id="trace-12893"></a>
<a id="trace-12906"></a>
<a id="trace-12976"></a>
<a id="trace-12982"></a>
<a id="trace-12990"></a>
<a id="trace-12997"></a>
<a id="trace-13007"></a>
<a id="trace-13014"></a>
<a id="trace-13025"></a>
<a id="trace-13034"></a>
<a id="trace-13049"></a>
<a id="trace-13056"></a>
<a id="trace-13128"></a>
<a id="trace-13133"></a>
<a id="trace-13143"></a>
<a id="trace-13158"></a>
<a id="trace-13165"></a>
<a id="trace-13174"></a>
<a id="trace-13183"></a>
<a id="trace-13193"></a>
- 5.70s–359.30s (×552), actor 37, squad 4 (trace 521): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 446. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362515923490047, 'next_transition': 587}.
<a id="trace-530"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 530): traveling overwatch. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630017748852889, 'next_transition': 585}.
<a id="trace-531"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 531): received platoon directive. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630017748852889, 'next_transition': 585}.
<a id="trace-585"></a>
<a id="trace-608"></a>
<a id="trace-632"></a>
<a id="trace-652"></a>
<a id="trace-676"></a>
<a id="trace-712"></a>
<a id="trace-729"></a>
<a id="trace-742"></a>
<a id="trace-826"></a>
<a id="trace-841"></a>
<a id="trace-854"></a>
<a id="trace-871"></a>
<a id="trace-889"></a>
<a id="trace-903"></a>
<a id="trace-922"></a>
<a id="trace-935"></a>
<a id="trace-966"></a>
<a id="trace-973"></a>
<a id="trace-1056"></a>
- 6.20s–15.20s (×19), actor 5, squad 0 (trace 585): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 440. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1569103212523906, 'next_transition': 608}.
<a id="trace-1066"></a>
- 15.40s–15.40s (×1), actor 0, squad 0 (trace 1066): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 15.00s, trace 980. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1113}.
<a id="trace-1113"></a>
<a id="trace-1130"></a>
<a id="trace-1142"></a>
<a id="trace-1153"></a>
<a id="trace-1167"></a>
<a id="trace-1186"></a>
<a id="trace-1194"></a>
<a id="trace-1204"></a>
<a id="trace-1211"></a>
<a id="trace-1291"></a>
- 15.70s–20.25s (×10), actor 5, squad 0 (trace 1113): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 983. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500023692684908, 'next_transition': 1130}.
<a id="trace-1294"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 1294): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 1215. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100013525088719, 'next_transition': 1520}.
<a id="trace-1295"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 1295): bounding overwatch. Knowledge: actor memory at 20.00s, trace 1215. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100013525088719, 'next_transition': 1520}.
<a id="trace-1296"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 1296): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1215. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2100013525088719, 'next_transition': 1520}.
<a id="trace-1520"></a>
<a id="trace-1539"></a>
<a id="trace-1565"></a>
- 20.75s–21.75s (×3), actor 5, squad 0 (trace 1520): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1218. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6826592529582604, 'next_transition': 1539}.
<a id="trace-1576"></a>
- 22.00s–22.00s (×1), actor 0, squad 0 (trace 1576): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1215. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999850641121545, 'next_transition': 1813}.
<a id="trace-1813"></a>
- 22.25s–22.25s (×1), actor 5, squad 0 (trace 1813): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1218. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420000501638699, 'next_transition': 2069}.
<a id="trace-1816"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 1816): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1215. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.420000501638699, 'next_transition': 2069}.
<a id="trace-2069"></a>
- 22.75s–22.75s (×1), actor 5, squad 0 (trace 2069): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1218. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37820879294587023, 'next_transition': 2091}.
<a id="trace-2091"></a>
- 23.00s–23.00s (×1), actor 0, squad 0 (trace 2091): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1215. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000279178374073, 'next_transition': 2344}.
<a id="trace-2344"></a>
- 23.25s–23.25s (×1), actor 5, squad 0 (trace 2344): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1218. Next observer evidence: {'until': 23.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16365367797217567, 'next_transition': 274}.
<a id="trace-274"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (events line 274): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2362"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 2362): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.347531 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 2362. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000037779032563, 'next_transition': 2375}.
<a id="trace-2363"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 2363): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.347531 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 2363. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000037779032563, 'next_transition': 2375}.
<a id="trace-2375"></a>
<a id="trace-2408"></a>
<a id="trace-2447"></a>
<a id="trace-2538"></a>
<a id="trace-2561"></a>
<a id="trace-2583"></a>
- 23.75s–26.25s (×6), actor 5, squad 0 (trace 2375): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 23.55s, trace 2363. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300011289045029, 'next_transition': 2408}.
<a id="trace-2595"></a>
- 26.60s–26.60s (×1), actor 0, squad 0 (trace 2595): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 2461. Next observer evidence: None.
<a id="trace-2600"></a>
- 26.75s–26.75s (×1), actor 5, squad 0 (trace 2600): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2464. Next observer evidence: {'until': 26.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19198786969130124, 'next_transition': 2606}.
<a id="trace-2606"></a>
- 26.95s–26.95s (×1), actor 0, squad 0 (trace 2606): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 2461. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38822640286758897, 'next_transition': 2616}.
<a id="trace-2616"></a>
<a id="trace-2624"></a>
<a id="trace-2643"></a>
- 27.25s–28.25s (×3), actor 5, squad 0 (trace 2616): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2464. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3809798774512134, 'next_transition': 2624}.
<a id="trace-2648"></a>
- 28.55s–28.55s (×1), actor 0, squad 0 (trace 2648): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 2461. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09974366841503723, 'next_transition': 2656}.
<a id="trace-2656"></a>
<a id="trace-2673"></a>
<a id="trace-2685"></a>
<a id="trace-2766"></a>
<a id="trace-2782"></a>
- 28.75s–30.75s (×5), actor 5, squad 0 (trace 2656): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2464. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9377505469397773, 'next_transition': 2673}.
<a id="trace-2785"></a>
- 30.75s–30.75s (×1), actor 0, squad 0 (trace 2785): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 2689. Next observer evidence: {'until': 31, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15875000000000009, 'next_transition': 380}.
<a id="trace-380"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (events line 380): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2987"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2987): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.685222 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2987. Next observer evidence: {'until': 31.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2994}.
<a id="trace-2988"></a>
- 31.05s–31.05s (×1), actor 5, squad 0 (trace 2988): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.685222 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 31.05s, trace 2988. Next observer evidence: {'until': 31.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2994}.
<a id="trace-2994"></a>
<a id="trace-3012"></a>
- 31.25s–31.75s (×2), actor 5, squad 0 (trace 2994): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2988. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3012}.
<a id="trace-3030"></a>
- 32.10s–32.10s (×1), actor 0, squad 0 (trace 3030): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2689. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.093133333333333, 'next_transition': 3216}.
<a id="trace-3216"></a>
- 32.25s–32.25s (×1), actor 5, squad 0 (trace 3216): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2988. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16801666666666648, 'next_transition': 3231}.
<a id="trace-3231"></a>
- 32.70s–32.70s (×1), actor 0, squad 0 (trace 3231): received platoon directive; retain contact cover stage. Knowledge: actor memory at 30.00s, trace 2689. Next observer evidence: None.
<a id="trace-3239"></a>
<a id="trace-3260"></a>
<a id="trace-3279"></a>
<a id="trace-3287"></a>
<a id="trace-3308"></a>
<a id="trace-3405"></a>
<a id="trace-3434"></a>
- 32.75s–35.75s (×7), actor 5, squad 0 (trace 3239): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 31.05s, trace 2988. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5081619839556306, 'next_transition': 3260}.
<a id="trace-3437"></a>
- 35.75s–35.75s (×1), actor 0, squad 0 (trace 3437): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3319. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25736171823059273, 'next_transition': 3456}.
<a id="trace-3456"></a>
<a id="trace-3468"></a>
<a id="trace-3481"></a>
<a id="trace-3495"></a>
<a id="trace-3507"></a>
<a id="trace-3528"></a>
<a id="trace-3542"></a>
- 36.25s–39.25s (×7), actor 5, squad 0 (trace 3456): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3322. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14346239942948688, 'next_transition': 3468}.
<a id="trace-458"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (events line 458): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3554"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 3554): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548433 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 3554. Next observer evidence: None.
<a id="trace-3555"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 3555): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548433 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 3555. Next observer evidence: None.
<a id="trace-3558"></a>
<a id="trace-3636"></a>
<a id="trace-3649"></a>
<a id="trace-3665"></a>
- 39.75s–41.25s (×4), actor 5, squad 0 (trace 3558): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.60s, trace 3555. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25522466735205884, 'next_transition': 3636}.
<a id="trace-3673"></a>
- 41.45s–41.45s (×1), actor 0, squad 0 (trace 3673): received platoon directive; retain contact cover stage. Knowledge: actor memory at 40.00s, trace 3564. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.141307528376625, 'next_transition': 3677}.
<a id="trace-3677"></a>
- 41.70s–41.70s (×1), actor 0, squad 0 (trace 3677): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 40.00s, trace 3564. Next observer evidence: None.
<a id="trace-3682"></a>
<a id="trace-3698"></a>
<a id="trace-3704"></a>
<a id="trace-3717"></a>
<a id="trace-3730"></a>
<a id="trace-3746"></a>
<a id="trace-3759"></a>
<a id="trace-3832"></a>
<a id="trace-3843"></a>
- 41.75s–45.75s (×9), actor 5, squad 0 (trace 3682): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3567. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26021106303703506, 'next_transition': 3698}.
<a id="trace-3846"></a>
- 45.75s–45.75s (×1), actor 0, squad 0 (trace 3846): NeedSupport. Knowledge: actor memory at 45.00s, trace 3762. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06875489778513573, 'next_transition': 576}.
<a id="trace-576"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (events line 576): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3851"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (trace 3851): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553755 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 3851. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10944210327586205, 'next_transition': 3863}.
<a id="trace-3852"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (trace 3852): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553755 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 3852. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10944210327586205, 'next_transition': 3863}.
<a id="trace-3863"></a>
<a id="trace-3877"></a>
<a id="trace-3891"></a>
<a id="trace-3902"></a>
- 46.25s–47.75s (×4), actor 5, squad 0 (trace 3863): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.85s, trace 3852. Next observer evidence: {'until': 46.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.130957993699846, 'next_transition': 3877}.
<a id="trace-3907"></a>
- 47.85s–47.85s (×1), actor 0, squad 0 (trace 3907): received platoon directive; retain held slots. Knowledge: actor memory at 45.00s, trace 3762. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04354360920706715, 'next_transition': 3914}.
<a id="trace-3914"></a>
<a id="trace-3927"></a>
<a id="trace-3936"></a>
<a id="trace-3943"></a>
<a id="trace-4014"></a>
<a id="trace-4026"></a>
<a id="trace-4035"></a>
<a id="trace-4042"></a>
- 48.25s–51.75s (×8), actor 5, squad 0 (trace 3914): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.85s, trace 3852. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11811739080724352, 'next_transition': 3927}.
<a id="trace-736"></a>
- 52.10s–52.10s (×1), actor 5, squad 0 (events line 736): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4050"></a>
- 52.10s–52.10s (×1), actor 5, squad 0 (trace 4050): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.554998 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 4050. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07559056591635985, 'next_transition': 4057}.
<a id="trace-4051"></a>
- 52.10s–52.10s (×1), actor 5, squad 0 (trace 4051): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.554998 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 4051. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07559056591635985, 'next_transition': 4057}.
<a id="trace-4057"></a>
<a id="trace-4064"></a>
<a id="trace-4076"></a>
<a id="trace-4085"></a>
<a id="trace-4092"></a>
<a id="trace-4100"></a>
<a id="trace-4172"></a>
<a id="trace-4182"></a>
<a id="trace-4199"></a>
<a id="trace-4210"></a>
<a id="trace-4219"></a>
<a id="trace-4224"></a>
<a id="trace-4236"></a>
<a id="trace-4243"></a>
<a id="trace-4264"></a>
<a id="trace-4275"></a>
- 52.25s–59.75s (×16), actor 5, squad 0 (trace 4057): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.10s, trace 4051. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1511967847707087, 'next_transition': 4064}.
<a id="trace-4292"></a>
- 60.05s–60.05s (×1), actor 5, squad 0 (trace 4292): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 60.05s, trace 4292. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07730000000000103, 'next_transition': 4352}.
<a id="trace-4352"></a>
<a id="trace-4359"></a>
<a id="trace-4373"></a>
<a id="trace-4382"></a>
<a id="trace-4395"></a>
<a id="trace-4404"></a>
<a id="trace-4415"></a>
<a id="trace-4425"></a>
<a id="trace-4439"></a>
<a id="trace-4448"></a>
<a id="trace-4518"></a>
<a id="trace-4522"></a>
<a id="trace-4529"></a>
<a id="trace-4535"></a>
<a id="trace-4543"></a>
<a id="trace-4549"></a>
<a id="trace-4557"></a>
<a id="trace-4566"></a>
<a id="trace-4577"></a>
<a id="trace-4586"></a>
<a id="trace-4657"></a>
<a id="trace-4663"></a>
<a id="trace-4671"></a>
<a id="trace-4677"></a>
<a id="trace-4688"></a>
<a id="trace-4693"></a>
<a id="trace-4701"></a>
<a id="trace-4713"></a>
<a id="trace-4720"></a>
<a id="trace-4726"></a>
<a id="trace-4794"></a>
<a id="trace-4798"></a>
<a id="trace-4807"></a>
<a id="trace-4813"></a>
<a id="trace-4825"></a>
- 60.25s–77.25s (×35), actor 5, squad 0 (trace 4352): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.05s, trace 4292. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0313200000000009, 'next_transition': 4359}.
<a id="trace-4834"></a>
- 77.50s–77.50s (×1), actor 4, squad 0 (trace 4834): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 75.00s, trace 4730. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499138480282446, 'next_transition': 4837}.
<a id="trace-4837"></a>
- 77.75s–77.75s (×1), actor 5, squad 0 (trace 4837): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4731. Next observer evidence: {'until': 77.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501240054956253, 'next_transition': 4845}.
<a id="trace-4845"></a>
- 77.90s–77.90s (×1), actor 4, squad 0 (trace 4845): Reorganise: completed/failed drill. Knowledge: actor memory at 75.00s, trace 4730. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299805334294094, 'next_transition': 4860}.
<a id="trace-4848"></a>
- 77.90s–77.90s (×1), actor 4, squad 0 (trace 4848): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 4730. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299805334294094, 'next_transition': 4860}.
<a id="trace-4849"></a>
- 77.90s–77.90s (×1), actor 4, squad 0 (trace 4849): Reorganise complete: known contact. Knowledge: actor memory at 75.00s, trace 4730. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299805334294094, 'next_transition': 4860}.
<a id="trace-4860"></a>
<a id="trace-4874"></a>
<a id="trace-4885"></a>
<a id="trace-4892"></a>
<a id="trace-4968"></a>
<a id="trace-4976"></a>
<a id="trace-4986"></a>
- 78.25s–81.25s (×7), actor 5, squad 0 (trace 4860): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4731. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300037817346799, 'next_transition': 4874}.
<a id="trace-4990"></a>
- 81.55s–81.55s (×1), actor 4, squad 0 (trace 4990): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 80.00s, trace 4896. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5000}.
<a id="trace-4993"></a>
- 81.55s–81.55s (×1), actor 4, squad 0 (trace 4993): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 80.00s, trace 4896. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5000}.
<a id="trace-4994"></a>
- 81.55s–81.55s (×1), actor 4, squad 0 (trace 4994): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 4896. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5000}.
<a id="trace-5000"></a>
<a id="trace-5015"></a>
<a id="trace-5024"></a>
<a id="trace-5036"></a>
<a id="trace-5043"></a>
<a id="trace-5057"></a>
<a id="trace-5063"></a>
<a id="trace-5136"></a>
<a id="trace-5141"></a>
<a id="trace-5152"></a>
<a id="trace-5159"></a>
<a id="trace-5167"></a>
<a id="trace-5174"></a>
<a id="trace-5183"></a>
<a id="trace-5191"></a>
<a id="trace-5200"></a>
<a id="trace-5205"></a>
<a id="trace-5278"></a>
<a id="trace-5286"></a>
<a id="trace-5294"></a>
<a id="trace-5300"></a>
<a id="trace-5309"></a>
<a id="trace-5315"></a>
<a id="trace-5321"></a>
<a id="trace-5330"></a>
<a id="trace-5339"></a>
<a id="trace-5344"></a>
<a id="trace-5419"></a>
<a id="trace-5438"></a>
<a id="trace-5445"></a>
<a id="trace-5456"></a>
<a id="trace-5464"></a>
<a id="trace-5472"></a>
<a id="trace-5480"></a>
<a id="trace-5486"></a>
<a id="trace-5492"></a>
<a id="trace-5563"></a>
<a id="trace-5569"></a>
<a id="trace-5578"></a>
<a id="trace-5586"></a>
- 81.75s–101.75s (×40), actor 5, squad 0 (trace 5000): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4897. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5015}.
<a id="trace-5594"></a>
- 102.10s–102.10s (×1), actor 4, squad 0 (trace 5594): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 5497. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5602}.
<a id="trace-5602"></a>
<a id="trace-5619"></a>
<a id="trace-5632"></a>
<a id="trace-5645"></a>
<a id="trace-5655"></a>
<a id="trace-5665"></a>
- 102.25s–104.75s (×6), actor 5, squad 0 (trace 5602): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 5498. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5619}.
<a id="trace-1330"></a>
- 105.05s–105.05s (×1), actor 5, squad 0 (events line 1330): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5739}.
<a id="trace-5681"></a>
- 105.05s–105.05s (×1), actor 5, squad 0 (trace 5681): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.302443 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 105.05s, trace 5681. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5739}.
<a id="trace-5682"></a>
- 105.05s–105.05s (×1), actor 5, squad 0 (trace 5682): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.302443 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 105.05s, trace 5682. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5739}.
<a id="trace-5739"></a>
<a id="trace-5744"></a>
<a id="trace-5752"></a>
- 105.25s–106.25s (×3), actor 5, squad 0 (trace 5739): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.05s, trace 5682. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5744}.
<a id="trace-5755"></a>
- 106.40s–106.40s (×1), actor 4, squad 0 (trace 5755): Withdraw to received rally. Knowledge: actor memory at 105.00s, trace 5670. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5763}.
<a id="trace-5756"></a>
- 106.40s–106.40s (×1), actor 4, squad 0 (trace 5756): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 5670. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5763}.
<a id="trace-5763"></a>
<a id="trace-5777"></a>
<a id="trace-5785"></a>
<a id="trace-5804"></a>
<a id="trace-5818"></a>
<a id="trace-5833"></a>
<a id="trace-5841"></a>
<a id="trace-5917"></a>
<a id="trace-5925"></a>
<a id="trace-5934"></a>
<a id="trace-5942"></a>
<a id="trace-5951"></a>
<a id="trace-5957"></a>
<a id="trace-5965"></a>
<a id="trace-5973"></a>
<a id="trace-5984"></a>
<a id="trace-5991"></a>
<a id="trace-6061"></a>
<a id="trace-6069"></a>
<a id="trace-6079"></a>
<a id="trace-6088"></a>
<a id="trace-6099"></a>
<a id="trace-6107"></a>
<a id="trace-6116"></a>
<a id="trace-6124"></a>
<a id="trace-6134"></a>
<a id="trace-6139"></a>
<a id="trace-6210"></a>
<a id="trace-6216"></a>
<a id="trace-6224"></a>
<a id="trace-6230"></a>
<a id="trace-6241"></a>
<a id="trace-6252"></a>
<a id="trace-6258"></a>
<a id="trace-6268"></a>
<a id="trace-6279"></a>
<a id="trace-6285"></a>
<a id="trace-6356"></a>
<a id="trace-6362"></a>
<a id="trace-6371"></a>
<a id="trace-6376"></a>
<a id="trace-6386"></a>
<a id="trace-6393"></a>
<a id="trace-6402"></a>
<a id="trace-6415"></a>
<a id="trace-6424"></a>
<a id="trace-6430"></a>
<a id="trace-6501"></a>
<a id="trace-6506"></a>
<a id="trace-6516"></a>
<a id="trace-6524"></a>
<a id="trace-6535"></a>
<a id="trace-6544"></a>
<a id="trace-6553"></a>
<a id="trace-6563"></a>
<a id="trace-6571"></a>
<a id="trace-6579"></a>
<a id="trace-6650"></a>
<a id="trace-6657"></a>
<a id="trace-6667"></a>
<a id="trace-6673"></a>
<a id="trace-6684"></a>
<a id="trace-6690"></a>
<a id="trace-6700"></a>
<a id="trace-6711"></a>
<a id="trace-6721"></a>
<a id="trace-6726"></a>
<a id="trace-6799"></a>
<a id="trace-6806"></a>
<a id="trace-6814"></a>
<a id="trace-6822"></a>
<a id="trace-6832"></a>
<a id="trace-6838"></a>
<a id="trace-6847"></a>
<a id="trace-6859"></a>
<a id="trace-6869"></a>
<a id="trace-6874"></a>
<a id="trace-6944"></a>
<a id="trace-6950"></a>
<a id="trace-6960"></a>
<a id="trace-6978"></a>
<a id="trace-6987"></a>
<a id="trace-6997"></a>
<a id="trace-7007"></a>
<a id="trace-7015"></a>
<a id="trace-7020"></a>
<a id="trace-7095"></a>
<a id="trace-7100"></a>
<a id="trace-7109"></a>
<a id="trace-7114"></a>
<a id="trace-7123"></a>
<a id="trace-7131"></a>
<a id="trace-7141"></a>
<a id="trace-7152"></a>
<a id="trace-7163"></a>
<a id="trace-7168"></a>
<a id="trace-7241"></a>
<a id="trace-7246"></a>
<a id="trace-7254"></a>
<a id="trace-7263"></a>
<a id="trace-7273"></a>
<a id="trace-7279"></a>
<a id="trace-7287"></a>
<a id="trace-7298"></a>
<a id="trace-7305"></a>
<a id="trace-7310"></a>
<a id="trace-7384"></a>
<a id="trace-7390"></a>
<a id="trace-7400"></a>
<a id="trace-7409"></a>
<a id="trace-7421"></a>
<a id="trace-7426"></a>
<a id="trace-7436"></a>
<a id="trace-7446"></a>
<a id="trace-7454"></a>
<a id="trace-7460"></a>
- 106.75s–164.80s (×116), actor 5, squad 0 (trace 5763): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.05s, trace 5682. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5777}.
<a id="trace-1644"></a>
- 165.05s–165.05s (×1), actor 5, squad 0 (events line 1644): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7531}.
<a id="trace-7474"></a>
- 165.05s–165.05s (×1), actor 5, squad 0 (trace 7474): renew committed intent (75 s lifetime). Knowledge: actor memory at 165.05s, trace 7474. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7531}.
<a id="trace-7531"></a>
<a id="trace-7538"></a>
<a id="trace-7545"></a>
<a id="trace-7552"></a>
<a id="trace-7562"></a>
<a id="trace-7571"></a>
<a id="trace-7584"></a>
<a id="trace-7596"></a>
<a id="trace-7604"></a>
<a id="trace-7610"></a>
<a id="trace-7682"></a>
<a id="trace-7689"></a>
<a id="trace-7695"></a>
<a id="trace-7702"></a>
<a id="trace-7711"></a>
<a id="trace-7716"></a>
<a id="trace-7726"></a>
<a id="trace-7735"></a>
<a id="trace-7746"></a>
<a id="trace-7756"></a>
<a id="trace-7827"></a>
<a id="trace-7834"></a>
<a id="trace-7845"></a>
<a id="trace-7853"></a>
<a id="trace-7863"></a>
<a id="trace-7870"></a>
<a id="trace-7878"></a>
<a id="trace-7887"></a>
<a id="trace-7895"></a>
<a id="trace-7901"></a>
<a id="trace-7972"></a>
<a id="trace-7978"></a>
<a id="trace-7990"></a>
<a id="trace-7996"></a>
<a id="trace-8007"></a>
<a id="trace-8016"></a>
<a id="trace-8026"></a>
<a id="trace-8037"></a>
<a id="trace-8048"></a>
<a id="trace-8054"></a>
<a id="trace-8124"></a>
<a id="trace-8128"></a>
<a id="trace-8137"></a>
<a id="trace-8143"></a>
<a id="trace-8153"></a>
<a id="trace-8159"></a>
<a id="trace-8169"></a>
<a id="trace-8181"></a>
<a id="trace-8189"></a>
<a id="trace-8197"></a>
<a id="trace-8270"></a>
<a id="trace-8277"></a>
<a id="trace-8287"></a>
<a id="trace-8293"></a>
<a id="trace-8302"></a>
<a id="trace-8308"></a>
<a id="trace-8316"></a>
<a id="trace-8325"></a>
<a id="trace-8333"></a>
<a id="trace-8342"></a>
<a id="trace-8411"></a>
<a id="trace-8418"></a>
<a id="trace-8429"></a>
<a id="trace-8434"></a>
<a id="trace-8445"></a>
<a id="trace-8455"></a>
<a id="trace-8465"></a>
<a id="trace-8474"></a>
<a id="trace-8482"></a>
<a id="trace-8488"></a>
<a id="trace-8558"></a>
<a id="trace-8565"></a>
<a id="trace-8574"></a>
<a id="trace-8580"></a>
<a id="trace-8590"></a>
<a id="trace-8596"></a>
<a id="trace-8606"></a>
<a id="trace-8616"></a>
<a id="trace-8630"></a>
<a id="trace-8637"></a>
<a id="trace-8707"></a>
<a id="trace-8711"></a>
<a id="trace-8720"></a>
<a id="trace-8727"></a>
<a id="trace-8736"></a>
<a id="trace-8744"></a>
<a id="trace-8752"></a>
<a id="trace-8761"></a>
<a id="trace-8771"></a>
<a id="trace-8776"></a>
<a id="trace-8850"></a>
<a id="trace-8859"></a>
<a id="trace-8869"></a>
<a id="trace-8875"></a>
<a id="trace-8886"></a>
<a id="trace-8895"></a>
<a id="trace-8902"></a>
<a id="trace-8913"></a>
<a id="trace-8923"></a>
<a id="trace-8928"></a>
<a id="trace-8998"></a>
<a id="trace-9003"></a>
<a id="trace-9014"></a>
<a id="trace-9020"></a>
<a id="trace-9030"></a>
<a id="trace-9038"></a>
<a id="trace-9051"></a>
<a id="trace-9063"></a>
<a id="trace-9073"></a>
<a id="trace-9079"></a>
<a id="trace-9149"></a>
<a id="trace-9154"></a>
<a id="trace-9164"></a>
<a id="trace-9169"></a>
<a id="trace-9179"></a>
<a id="trace-9185"></a>
<a id="trace-9194"></a>
<a id="trace-9204"></a>
<a id="trace-9212"></a>
<a id="trace-9221"></a>
<a id="trace-9294"></a>
<a id="trace-9303"></a>
- 165.30s–225.80s (×122), actor 5, squad 0 (trace 7531): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.05s, trace 7474. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7538}.
<a id="trace-1956"></a>
- 226.20s–226.20s (×1), actor 5, squad 0 (events line 1956): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9307"></a>
- 226.20s–226.20s (×1), actor 5, squad 0 (trace 9307): renew committed intent (75 s lifetime). Knowledge: actor memory at 226.20s, trace 9307. Next observer evidence: None.
<a id="trace-9315"></a>
<a id="trace-9321"></a>
<a id="trace-9332"></a>
<a id="trace-9340"></a>
<a id="trace-9349"></a>
<a id="trace-9357"></a>
<a id="trace-9364"></a>
<a id="trace-9368"></a>
<a id="trace-9438"></a>
<a id="trace-9446"></a>
<a id="trace-9453"></a>
<a id="trace-9463"></a>
<a id="trace-9477"></a>
<a id="trace-9485"></a>
<a id="trace-9494"></a>
<a id="trace-9506"></a>
<a id="trace-9518"></a>
<a id="trace-9523"></a>
<a id="trace-9593"></a>
<a id="trace-9603"></a>
<a id="trace-9610"></a>
<a id="trace-9619"></a>
<a id="trace-9627"></a>
<a id="trace-9638"></a>
<a id="trace-9648"></a>
<a id="trace-9659"></a>
<a id="trace-9666"></a>
<a id="trace-9740"></a>
<a id="trace-9749"></a>
<a id="trace-9758"></a>
<a id="trace-9764"></a>
<a id="trace-9773"></a>
<a id="trace-9779"></a>
<a id="trace-9786"></a>
<a id="trace-9797"></a>
<a id="trace-9805"></a>
<a id="trace-9811"></a>
<a id="trace-9885"></a>
<a id="trace-9890"></a>
<a id="trace-9900"></a>
<a id="trace-9910"></a>
<a id="trace-9922"></a>
<a id="trace-9929"></a>
<a id="trace-9940"></a>
<a id="trace-9950"></a>
<a id="trace-9957"></a>
<a id="trace-9963"></a>
<a id="trace-10034"></a>
<a id="trace-10039"></a>
<a id="trace-10048"></a>
<a id="trace-10056"></a>
<a id="trace-10069"></a>
<a id="trace-10074"></a>
<a id="trace-10085"></a>
<a id="trace-10093"></a>
<a id="trace-10105"></a>
<a id="trace-10113"></a>
<a id="trace-10184"></a>
<a id="trace-10191"></a>
<a id="trace-10199"></a>
<a id="trace-10204"></a>
<a id="trace-10214"></a>
<a id="trace-10220"></a>
<a id="trace-10229"></a>
<a id="trace-10240"></a>
<a id="trace-10249"></a>
<a id="trace-10256"></a>
<a id="trace-10327"></a>
<a id="trace-10337"></a>
<a id="trace-10345"></a>
<a id="trace-10353"></a>
<a id="trace-10365"></a>
<a id="trace-10372"></a>
<a id="trace-10380"></a>
<a id="trace-10389"></a>
<a id="trace-10398"></a>
<a id="trace-10403"></a>
<a id="trace-10473"></a>
<a id="trace-10480"></a>
<a id="trace-10490"></a>
<a id="trace-10499"></a>
<a id="trace-10509"></a>
<a id="trace-10518"></a>
<a id="trace-10527"></a>
<a id="trace-10536"></a>
<a id="trace-10546"></a>
<a id="trace-10552"></a>
<a id="trace-10623"></a>
<a id="trace-10627"></a>
<a id="trace-10636"></a>
<a id="trace-10641"></a>
<a id="trace-10652"></a>
<a id="trace-10662"></a>
<a id="trace-10670"></a>
<a id="trace-10681"></a>
<a id="trace-10690"></a>
<a id="trace-10695"></a>
<a id="trace-10766"></a>
<a id="trace-10772"></a>
<a id="trace-10781"></a>
<a id="trace-10790"></a>
<a id="trace-10800"></a>
<a id="trace-10807"></a>
<a id="trace-10815"></a>
<a id="trace-10827"></a>
<a id="trace-10836"></a>
<a id="trace-10843"></a>
<a id="trace-10914"></a>
<a id="trace-10919"></a>
<a id="trace-10928"></a>
<a id="trace-10934"></a>
<a id="trace-10945"></a>
<a id="trace-10953"></a>
<a id="trace-10963"></a>
<a id="trace-10971"></a>
<a id="trace-10981"></a>
<a id="trace-10989"></a>
<a id="trace-11059"></a>
<a id="trace-11068"></a>
- 226.30s–285.80s (×119), actor 5, squad 0 (trace 9315): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 226.20s, trace 9307. Next observer evidence: {'until': 226.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9321}.
<a id="trace-2263"></a>
- 286.20s–286.20s (×1), actor 5, squad 0 (events line 2263): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11072"></a>
- 286.20s–286.20s (×1), actor 5, squad 0 (trace 11072): renew committed intent (75 s lifetime). Knowledge: actor memory at 286.20s, trace 11072. Next observer evidence: None.
<a id="trace-11079"></a>
<a id="trace-11085"></a>
<a id="trace-11096"></a>
<a id="trace-11102"></a>
<a id="trace-11111"></a>
<a id="trace-11120"></a>
<a id="trace-11128"></a>
<a id="trace-11135"></a>
<a id="trace-11207"></a>
<a id="trace-11215"></a>
<a id="trace-11224"></a>
<a id="trace-11232"></a>
<a id="trace-11245"></a>
<a id="trace-11251"></a>
<a id="trace-11260"></a>
<a id="trace-11271"></a>
<a id="trace-11280"></a>
<a id="trace-11285"></a>
<a id="trace-11356"></a>
<a id="trace-11361"></a>
<a id="trace-11369"></a>
<a id="trace-11378"></a>
<a id="trace-11388"></a>
<a id="trace-11398"></a>
<a id="trace-11408"></a>
<a id="trace-11418"></a>
<a id="trace-11428"></a>
<a id="trace-11436"></a>
<a id="trace-11509"></a>
<a id="trace-11515"></a>
<a id="trace-11523"></a>
<a id="trace-11529"></a>
<a id="trace-11538"></a>
<a id="trace-11546"></a>
<a id="trace-11553"></a>
<a id="trace-11562"></a>
<a id="trace-11574"></a>
<a id="trace-11579"></a>
<a id="trace-11651"></a>
<a id="trace-11658"></a>
<a id="trace-11669"></a>
<a id="trace-11680"></a>
<a id="trace-11689"></a>
<a id="trace-11695"></a>
<a id="trace-11703"></a>
<a id="trace-11713"></a>
<a id="trace-11719"></a>
<a id="trace-11726"></a>
<a id="trace-11796"></a>
<a id="trace-11800"></a>
<a id="trace-11809"></a>
<a id="trace-11818"></a>
<a id="trace-11830"></a>
<a id="trace-11839"></a>
<a id="trace-11853"></a>
<a id="trace-11863"></a>
<a id="trace-11871"></a>
<a id="trace-11876"></a>
<a id="trace-11945"></a>
<a id="trace-11951"></a>
<a id="trace-11959"></a>
<a id="trace-11965"></a>
<a id="trace-11974"></a>
<a id="trace-11980"></a>
<a id="trace-11991"></a>
<a id="trace-12004"></a>
<a id="trace-12014"></a>
<a id="trace-12020"></a>
<a id="trace-12098"></a>
<a id="trace-12104"></a>
<a id="trace-12111"></a>
<a id="trace-12118"></a>
<a id="trace-12126"></a>
<a id="trace-12131"></a>
<a id="trace-12139"></a>
<a id="trace-12148"></a>
<a id="trace-12158"></a>
<a id="trace-12162"></a>
<a id="trace-12236"></a>
<a id="trace-12241"></a>
<a id="trace-12251"></a>
<a id="trace-12265"></a>
<a id="trace-12275"></a>
<a id="trace-12283"></a>
<a id="trace-12290"></a>
<a id="trace-12299"></a>
<a id="trace-12307"></a>
<a id="trace-12312"></a>
<a id="trace-12383"></a>
<a id="trace-12387"></a>
<a id="trace-12395"></a>
<a id="trace-12404"></a>
<a id="trace-12413"></a>
<a id="trace-12424"></a>
<a id="trace-12437"></a>
<a id="trace-12449"></a>
<a id="trace-12459"></a>
<a id="trace-12465"></a>
<a id="trace-12535"></a>
<a id="trace-12539"></a>
<a id="trace-12547"></a>
<a id="trace-12553"></a>
<a id="trace-12562"></a>
<a id="trace-12568"></a>
<a id="trace-12577"></a>
<a id="trace-12589"></a>
<a id="trace-12597"></a>
<a id="trace-12608"></a>
<a id="trace-12681"></a>
<a id="trace-12686"></a>
<a id="trace-12697"></a>
<a id="trace-12705"></a>
<a id="trace-12715"></a>
<a id="trace-12720"></a>
<a id="trace-12728"></a>
<a id="trace-12737"></a>
<a id="trace-12745"></a>
<a id="trace-12752"></a>
<a id="trace-12821"></a>
<a id="trace-12828"></a>
- 286.30s–345.80s (×120), actor 5, squad 0 (trace 11079): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 286.20s, trace 11072. Next observer evidence: {'until': 286.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11085}.
<a id="trace-2566"></a>
- 346.20s–346.20s (×1), actor 5, squad 0 (events line 2566): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12834"></a>
- 346.20s–346.20s (×1), actor 5, squad 0 (trace 12834): renew committed intent (75 s lifetime). Knowledge: actor memory at 346.20s, trace 12834. Next observer evidence: None.
<a id="trace-12842"></a>
<a id="trace-12848"></a>
<a id="trace-12860"></a>
<a id="trace-12870"></a>
<a id="trace-12880"></a>
<a id="trace-12891"></a>
<a id="trace-12900"></a>
<a id="trace-12904"></a>
<a id="trace-12974"></a>
<a id="trace-12980"></a>
<a id="trace-12988"></a>
<a id="trace-12995"></a>
<a id="trace-13005"></a>
<a id="trace-13012"></a>
<a id="trace-13023"></a>
<a id="trace-13032"></a>
<a id="trace-13047"></a>
<a id="trace-13054"></a>
<a id="trace-13126"></a>
<a id="trace-13131"></a>
<a id="trace-13141"></a>
<a id="trace-13149"></a>
<a id="trace-13156"></a>
<a id="trace-13163"></a>
<a id="trace-13172"></a>
<a id="trace-13181"></a>
<a id="trace-13191"></a>
<a id="trace-13198"></a>
- 346.30s–359.80s (×28), actor 5, squad 0 (trace 12842): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 346.20s, trace 12834. Next observer evidence: {'until': 346.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12848}.

## Net delivery

81 matched order/radio deliveries; 244 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.327s; maximum 1.900s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
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
- 20.00s leader 0, trace 1215: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 2362: estimate 2.97; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 2363: estimate 2.97; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2461: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2464: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2465: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2470: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2471: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2472: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2689: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2690: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2692: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2693: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2695: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2698: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2699: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2700: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2987: estimate 5.84; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 31.05s leader 5, trace 2988: estimate 5.84; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3319: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3320: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3322: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3323: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3325: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3326: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3328: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3329: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3330: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 3554: estimate 7.29; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 3555: estimate 7.29; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3564: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3565: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3567: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3568: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3570: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3571: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3573: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3574: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3575: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3762: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3763: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3765: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3766: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3768: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3769: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3771: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3772: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3773: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 3851: estimate 7.22; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 3852: estimate 7.22; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3946: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3947: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3949: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3950: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3952: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3953: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3954: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3955: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3956: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3957: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 4050: estimate 7.21; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 4051: estimate 7.21; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4105: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4107: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4108: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4110: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4111: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4112: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4113: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4114: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4115: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4280: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4282: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4283: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4285: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4286: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4287: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4288: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4289: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4290: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.05s leader 5, trace 4292: estimate 7.40; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4450: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4452: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4453: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4455: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4456: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4457: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4458: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4459: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4460: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4589: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4591: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4592: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4594: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4595: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4596: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4597: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4598: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4599: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4731: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4732: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4734: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4735: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4736: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4737: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4738: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4739: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4896: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4897: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4898: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4900: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4901: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4902: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4903: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4904: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4905: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5069: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5070: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5071: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5073: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5074: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5075: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5076: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5077: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5078: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5211: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5212: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5213: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5215: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5216: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5217: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5218: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5219: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5220: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5353: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5354: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5355: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5357: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5358: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5359: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5360: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5361: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5362: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5497: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5498: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5499: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5501: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5502: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5503: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5504: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5505: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5506: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5670: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5671: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5672: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 5673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5674: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5675: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5676: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5677: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5678: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5679: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.05s leader 5, trace 5681: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.05s leader 5, trace 5682: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 5851: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5852: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5853: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 5854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5855: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5856: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 5857: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5858: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5859: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 5860: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 5993: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 5994: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 5995: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 5996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 5997: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 5998: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 5999: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6000: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6001: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6002: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6143: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6144: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6145: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 6146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6147: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6148: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6149: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6150: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6151: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6152: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 6290: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6291: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6292: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 6293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6294: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6295: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6296: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6297: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6298: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6299: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 6435: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6436: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6437: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 6438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6439: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6440: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6441: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6442: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6443: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6444: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 6582: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6583: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6584: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 6585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6586: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6587: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 6588: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6589: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6590: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6591: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 6732: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6733: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6734: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 6735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6736: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6737: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 6738: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6739: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6740: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 6741: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 6877: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 6878: estimate 5.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 6879: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 6880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 6881: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 6882: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 6883: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6884: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6885: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 6886: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 7025: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7026: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7027: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 7028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7029: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7030: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 7031: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7032: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7033: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7034: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 7174: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7175: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7176: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 7177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7178: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7179: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 7180: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7181: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7182: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 7183: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 7316: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7317: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7318: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 7319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7320: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7321: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 7322: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7323: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7324: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7325: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 7463: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 7464: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 7465: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 7466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 7467: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 7468: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 7469: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 7470: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 7471: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 7472: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.05s leader 5, trace 7474: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 7616: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7617: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 7618: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 7619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 7620: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7621: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 7622: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7623: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7624: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 7625: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 7759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 7762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 7765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 7768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 7904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 7905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 7906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 7907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 7908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 7909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 7910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 7911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 7912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 7913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 8058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 8061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 8062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 8064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 8067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 8202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 8203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 8204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 8205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 8206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 8208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 8211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 8345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 8346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 8347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 8348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 8349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 8350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 8351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 8352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 8353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 8354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 8492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 8494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 8495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 8496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 8497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 8498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 8499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 8500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 8501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 8639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 8642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 8645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 8648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 8780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 8783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 8784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 8785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 8786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 8787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 8788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 8789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 8932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 8933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 8934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 8935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 8936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 8937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 8938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 8939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 8940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 8941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 9082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 9085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 9086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 9088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 9091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 9224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 9225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 9226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 9227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 9228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 9229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 9230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 9231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 9232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 9233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 226.20s leader 5, trace 9307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 9372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 9373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 9374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 9375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 9376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 9377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 9378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 9379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 9380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 9381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 9526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 9527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 9528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 9529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 9530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 9531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 9532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 9533: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 9534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 9535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 9670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 9673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 9676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 9679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 9818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 9821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 9824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 9827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 9968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 9969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 9970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 9971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 9972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 9973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 9974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 9975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 9976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 9977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 10116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 10117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 10118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 10119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 10120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 10121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 10122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 10123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 10124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 10125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 10261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 10262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 10263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 10264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 10265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 10266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 10267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 10268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 10269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 10270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 10406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 10407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 10408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 10409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 10410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 10411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 10412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 10413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 10414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 10415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 10555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 10558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 10559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 10561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 10564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 10698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 10701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 10702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 10704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 10707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 10846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 10847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 10848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 10849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 10850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 10851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 10852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 10853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 10854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 10855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 10992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 10993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 10994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 10995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 10996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 10997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 10998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 10999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 11000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 11001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 286.20s leader 5, trace 11072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 11140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 11141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 11142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 11143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 11144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 11145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 11146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 11147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 11148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 11149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 11288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 11289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 11290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 11291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 11292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 11293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 11294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 11295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 11296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 11297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 11440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 11443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 11444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 11446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 11449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 11583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 11586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 11587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 11589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 11592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 11730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 11733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 11736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 11739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 11879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 11880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 11881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 11882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 11883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 11884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 11885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 11886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 11887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 11888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 12030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 12031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 12032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 12033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 12034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 12035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 12036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 12037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 12038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 12039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 12166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 12167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 12168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 12169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 12170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 12171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 12172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 12173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 12174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 12175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 12316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 12317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 12318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 12319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 12320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 12321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 12322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 12323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 12324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 12325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 12469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 12472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 12473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 12475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 12478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 12611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 12612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 12613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 12614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 12615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 12616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 12617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 12618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 12619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 12620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 12755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 12758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 12761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 12764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 346.20s leader 5, trace 12834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 12908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 12909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 12910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 12911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 12912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 12913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 12914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 12915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 12916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 12917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 13057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 13058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 13059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 13060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 13061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 13062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 13063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 13064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 13065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 13066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 13201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 13202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 13203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 13204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 13205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 13206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 13207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 13208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 13209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 13210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Rook incapacitated

## Outcome attribution

- 105.05s, evidence 1330: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5739}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 105.05s, evidence 5681: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.302443 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5739}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 105.05s, evidence 5682: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.302443 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5739}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 165.05s, evidence 1644: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7531}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 226.20s, evidence 1956: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 286.20s, evidence 2263: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 346.20s, evidence 2566: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
